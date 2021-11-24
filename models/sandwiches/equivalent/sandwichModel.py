
from typing import Tuple, Dict, Sequence, Any

from collections import defaultdict, namedtuple
import numpy as np
# import tensorflow as tf
import tensorflow.compat.v1 as tf
tf.disable_v2_behavior()
import sys, traceback
import pdb
import argparse
import copy
import random

from baseSandwichModel import BaseMetaDectector
from utils import MLP, glorot_init, SMALL_NUMBER


GGNNWeights = namedtuple('GGNNWeights', ['edge_weights',
                                         'edge_biases',
                                         'edge_type_attention_weights',
                                         'rnn_cells',])


class MetaDectector(BaseMetaDectector):
    def __init__(self, args):
        super().__init__(args)

    @classmethod
    def default_params(cls):
        params = dict(super().default_params())
        params.update({
            # TODO: play with the following parameters
            'batch_size': 100000000,
            'use_edge_bias': True,
            'use_propagation_attention': True,
            'use_edge_msg_avg_aggregation': True,
            'residual_connections': {  # For layer i, specify list of layers whose output is added as an input
                                     "2": [0],
                                     "4": [0, 2]
                                    },

            'layer_timesteps': [2, 2, 1, 2, 1],  # number of layers & propagation steps per layer

            'graph_rnn_cell': 'GRU',  # GRU, CudnnCompatibleGRUCell, or RNN
            'graph_rnn_activation': 'tanh',  # tanh, ReLU
            'graph_state_dropout_keep_prob': .9,
            'edge_weight_dropout_keep_prob': .8,

            'out_layer_dropout_keep_prob': .9,

            # for rnn
            'rnn_number_layers': 2,
        })
        return params

    def declare_graph_model_weights(self) -> None:
        h_dim = self.params['hidden_size']

        activation_name = self.params['graph_rnn_activation'].lower()
        if activation_name == 'tanh':
            activation_fun = tf.nn.tanh
        elif activation_name == 'relu':
            activation_fun = tf.nn.relu
        else:
            raise Exception("Unknown activation function type '%s'." % activation_name)

        self.gnn_weights = GGNNWeights([], [], [], [])
        self.rnns_fwd = []
        self.rnns_bwd = []
        for layer_idx in range(len(self.params['layer_timesteps'])):
            with tf.variable_scope('gnn_layer_%i' % layer_idx):
                edge_weights = tf.Variable(glorot_init([self.num_edge_types * h_dim, h_dim]),
                                           name='gnn_edge_weights_%i' % layer_idx)
                edge_weights = tf.reshape(edge_weights, [self.num_edge_types, h_dim, h_dim])
                edge_weights = tf.nn.dropout(edge_weights, keep_prob=self.placeholders['edge_weight_dropout_keep_prob'])
                self.gnn_weights.edge_weights.append(edge_weights)

                if self.params['use_propagation_attention']:
                    self.gnn_weights.edge_type_attention_weights.append(tf.Variable(np.ones([self.num_edge_types], dtype=np.float32),
                                                                                    name='edge_type_attention_weights_%i' % layer_idx))

                if self.params['use_edge_bias']:
                    self.gnn_weights.edge_biases.append(tf.Variable(np.zeros([self.num_edge_types, h_dim], dtype=np.float32),
                                                                    name='gnn_edge_biases_%i' % layer_idx))

                cell_type = self.params['graph_rnn_cell'].lower()
                if cell_type == 'gru':
                    cell = tf.nn.rnn_cell.GRUCell(h_dim, activation=activation_fun)
                elif cell_type == 'cudnncompatiblegrucell':
                    assert(activation_name == 'tanh')
                    import tensorflow.contrib.cudnn_rnn as cudnn_rnn
                    cell = cudnn_rnn.CudnnCompatibleGRUCell(h_dim)
                elif cell_type == 'rnn':
                    cell = tf.nn.rnn_cell.BasicRNNCell(h_dim, activation=activation_fun)
                else:
                    raise Exception("Unknown RNN cell type '%s'." % cell_type)
                cell = tf.nn.rnn_cell.DropoutWrapper(cell,
                                                     state_keep_prob=self.placeholders['graph_state_dropout_keep_prob'])
                self.gnn_weights.rnn_cells.append(cell)

        for layer_idx in range(self.params['rnn_number_layers']):
            with tf.variable_scope('rnn_layer_%i' % layer_idx):
                self.rnns_fwd.append(tf.keras.layers.GRU(h_dim//2, return_sequences=True))
                self.rnns_bwd.append(tf.keras.layers.GRU(h_dim//2, return_sequences=True, go_backwards=True))

        self.weights['MLP_gate'] = MLP(2 * self.params['hidden_size'], 1, [], self.placeholders['out_layer_dropout_keep_prob'])
        self.weights['MLP_nodes'] = MLP(self.params['hidden_size'], self.params['hidden_size'], [], self.placeholders['out_layer_dropout_keep_prob'])
        self.weights['MLP_graphs'] = MLP(self.params['hidden_size'], self.params['hidden_size'], [], self.placeholders['out_layer_dropout_keep_prob'])

        self.weights['MLP_gate_edge_mask'] = MLP(4 * self.params['hidden_size'], 1, [], self.placeholders['out_layer_dropout_keep_prob'])
        self.weights['MLP_nodes_edge_mask'] = MLP(2 * self.params['hidden_size'], 2 * self.params['hidden_size'], [], self.placeholders['out_layer_dropout_keep_prob'])
        self.weights['MLP_graphs_edge_mask'] = MLP(2 * self.params['hidden_size'], self.num_edge_types - 1 if self.params['tie_fwd_bkwd'] else (self.num_edge_types - 1) / 2, [], self.placeholders['out_layer_dropout_keep_prob'])

        self.weights['MLP_gate_node_mask'] = MLP(4 * self.params['hidden_size'], 1, [], self.placeholders['out_layer_dropout_keep_prob'])
        self.weights['MLP_nodes_node_mask'] = MLP(2 * self.params['hidden_size'], 2 * self.params['hidden_size'], [], self.placeholders['out_layer_dropout_keep_prob'])
        self.weights['MLP_graphs_node_mask'] = MLP(2 * self.params['hidden_size'], self.params['vocabulary_size'], [], self.placeholders['out_layer_dropout_keep_prob'])


    def compute_node_representations_with_ggnn(self, initial_node_representation, inputs) -> tf.Tensor:
        node_states_per_layer = []  # one entry per layer (final state of that layer), shape: number of nodes in batch v x D
        # initial_node_representation = tf.nn.embedding_lookup(params=self.weights['embedding_matrix'],
        #                                                      ids=inputs['node_indices_for_embedding'])
        node_states_per_layer.append(initial_node_representation)
        num_nodes = tf.shape(initial_node_representation, out_type=tf.int32)[0]

        message_targets = []  # list of tensors of message targets of shape [E]
        message_edge_types = []  # list of tensors of edge type of shape [E]
        for edge_type_idx, adjacency_list_for_edge_type in enumerate(inputs['adjacency_lists']):
            edge_targets = adjacency_list_for_edge_type[:, 1]
            message_targets.append(edge_targets)
            message_edge_types.append(tf.ones_like(edge_targets, dtype=tf.int32) * edge_type_idx)
        message_targets = tf.concat(message_targets, axis=0)  # Shape [M]
        message_edge_types = tf.concat(message_edge_types, axis=0)  # Shape [M]

        for (layer_idx, num_timesteps) in enumerate(self.params['layer_timesteps']):
            with tf.variable_scope('gnn_layer_%i' % layer_idx):
                # Used shape abbreviations:
                #   V ~ number of nodes
                #   D ~ state dimension
                #   E ~ number of edges of current type
                #   M ~ number of messages (sum of all E)

                # Extract residual messages, if any:
                layer_residual_connections = self.params['residual_connections'].get(str(layer_idx))
                if layer_residual_connections is None:
                    layer_residual_states = []
                else:
                    layer_residual_states = [node_states_per_layer[residual_layer_idx]
                                             for residual_layer_idx in layer_residual_connections]

                if self.params['use_propagation_attention']:
                    message_edge_type_factors = tf.nn.embedding_lookup(params=self.gnn_weights.edge_type_attention_weights[layer_idx],
                                                                       ids=message_edge_types)  # Shape [M]

                # Record new states for this layer. Initialised to last state, but will be updated below:
                node_states_per_layer.append(node_states_per_layer[-1])
                for step in range(num_timesteps):
                    with tf.variable_scope('timestep_%i' % step):
                        messages = []  # list of tensors of messages of shape [E, D]
                        message_source_states = []  # list of tensors of edge source states of shape [E, D]

                        # Collect incoming messages per edge type
                        for edge_type_idx, adjacency_list_for_edge_type in enumerate(inputs['adjacency_lists']):
                            edge_sources = adjacency_list_for_edge_type[:, 0]
                            edge_source_states = tf.nn.embedding_lookup(params=node_states_per_layer[-1],
                                                                        ids=edge_sources)  # Shape [E, D]
                            all_messages_for_edge_type = tf.matmul(edge_source_states,
                                                                   self.gnn_weights.edge_weights[layer_idx][edge_type_idx])  # Shape [E, D]
                            messages.append(all_messages_for_edge_type)
                            message_source_states.append(edge_source_states)

                        messages = tf.concat(messages, axis=0)  # Shape [M, D]

                        if self.params['use_propagation_attention']:
                            message_source_states = tf.concat(message_source_states, axis=0)  # Shape [M, D]
                            message_target_states = tf.nn.embedding_lookup(params=node_states_per_layer[-1],
                                                                           ids=message_targets)  # Shape [M, D]
                            message_attention_scores = tf.einsum('mi,mi->m', message_source_states, message_target_states)  # Shape [M]
                            message_attention_scores = message_attention_scores * message_edge_type_factors

                            # The following is softmax-ing over the incoming messages per node.
                            # As the number of incoming varies, we can't just use tf.softmax. Reimplement with logsumexp trick:
                            # Step (1): Obtain shift constant as max of messages going into a node
                            message_attention_score_max_per_target = tf.unsorted_segment_max(data=message_attention_scores,
                                                                                             segment_ids=message_targets,
                                                                                             num_segments=num_nodes)  # Shape [V]
                            # Step (2): Distribute max out to the corresponding messages again, and shift scores:
                            message_attention_score_max_per_message = tf.gather(params=message_attention_score_max_per_target,
                                                                                indices=message_targets)  # Shape [M]
                            message_attention_scores -= message_attention_score_max_per_message
                            # Step (3): Exp, sum up per target, compute exp(score) / exp(sum) as attention prob:
                            message_attention_scores_exped = tf.exp(message_attention_scores)  # Shape [M]
                            message_attention_score_sum_per_target = tf.unsorted_segment_sum(data=message_attention_scores_exped,
                                                                                             segment_ids=message_targets,
                                                                                             num_segments=num_nodes)  # Shape [V]
                            message_attention_normalisation_sum_per_message = tf.gather(params=message_attention_score_sum_per_target,
                                                                                        indices=message_targets)  # Shape [M]
                            message_attention = message_attention_scores_exped / (message_attention_normalisation_sum_per_message + SMALL_NUMBER)  # Shape [M]
                            # Step (4): Weigh messages using the attention prob:
                            messages = messages * tf.expand_dims(message_attention, -1)

                        incoming_messages = tf.unsorted_segment_sum(data=messages,
                                                                    segment_ids=message_targets,
                                                                    num_segments=num_nodes)  # Shape [V, D]

                        if self.params['use_edge_bias']:
                            incoming_messages += tf.matmul(inputs['num_incoming_edges_per_type'],
                                                           self.gnn_weights.edge_biases[layer_idx])  # Shape [V, D]

                        if self.params['use_edge_msg_avg_aggregation']:
                            num_incoming_edges = tf.reduce_sum(inputs['num_incoming_edges_per_type'],
                                                               keep_dims=True, axis=-1)  # Shape [V, 1]
                            incoming_messages /= num_incoming_edges + SMALL_NUMBER

                        incoming_information = tf.concat(layer_residual_states + [incoming_messages],
                                                         axis=-1)  # Shape [V, D*(1 + num of residual connections)]

                        # pass updated vertex features into RNN cell
                        node_states_per_layer[-1] = self.gnn_weights.rnn_cells[layer_idx](incoming_information,
                                                                                          node_states_per_layer[-1])[1]  # Shape [V, D]

        return node_states_per_layer[-1]

    def compute_node_representations_with_rnn(self, initial_node_representation, inputs) -> tf.Tensor:
        initial_node_representation = tf.expand_dims(initial_node_representation, 1)
        for layer_no in range(self.params['rnn_number_layers']):
            fwd = self.rnns_fwd[layer_no](initial_node_representation)
            bwd = self.rnns_bwd[layer_no](initial_node_representation)
            states = tf.concat([fwd, bwd], axis=-1)
            states = tf.nn.dropout(states, rate=(1 - self.placeholders['graph_state_dropout_keep_prob']))
        return tf.squeeze(states, [1])

    def gated_regression(self, inputs, last_h):
        # last_h: [v x h]
        initial_node_representation = tf.nn.embedding_lookup(params=self.weights['embedding_matrix'], ids=inputs['node_indices_for_embedding'])
        gate_input = tf.concat([last_h, initial_node_representation], axis=-1)  # [v x 2h]
        gated_outputs = tf.nn.sigmoid(self.weights['MLP_gate'](gate_input)) * self.weights['MLP_nodes'](last_h)  # [v x h]

        # Sum up all nodes per-graph
        graph_representations = tf.unsorted_segment_sum(data=gated_outputs, segment_ids=inputs['graph_nodes_list'], num_segments=inputs['num_graphs'])  # [g x h]

        transformed_graph_representations = self.weights['MLP_graphs'](graph_representations)

        return transformed_graph_representations

    def compute_edge(self, inputs, last_h):
        initial_mask_node_representation = tf.nn.embedding_lookup(params=self.weights['embedding_matrix'], ids=tf.nn.embedding_lookup(params=inputs['node_indices_for_embedding'], ids=inputs["mask_node_list"]))    # [g x 2 x h]
        gate_input = tf.concat([last_h, initial_mask_node_representation], axis=-1)      # [g x 2 x 2h]
        gate_input = tf.reshape(gate_input, [-1, 4 * self.params['hidden_size']])       # [g x 4h]
        last_h = tf.reshape(last_h, [-1, 2 * self.params['hidden_size']])       # [g x 2h]
        gated_outputs = tf.nn.sigmoid(self.weights['MLP_gate_edge_mask'](gate_input)) * self.weights['MLP_nodes_edge_mask'](last_h)  # [g x 2h]
        edge_type = self.weights['MLP_graphs_edge_mask'](gated_outputs)        # [g x (num_edge_type - 1)]
        # edge_type = tf.argmax(edge_type, 1)
        return edge_type

    def compute_node(self, inputs, mask_node, neighbor_node):
        initial_mask_node_representation = tf.nn.embedding_lookup(params=self.weights['embedding_matrix'], ids=tf.nn.embedding_lookup(params=inputs['node_indices_for_embedding'], ids=inputs["mask_node_idx_list"]))    # [g x h]
        initial_neighbor_node_representation = tf.nn.embedding_lookup(params=self.weights['embedding_matrix'], ids=tf.nn.embedding_lookup(params=inputs['node_indices_for_embedding'], ids=inputs["mask_node_neighbor_node_list"]))    # [g x n x h]
        mask_node_input = tf.concat([mask_node, initial_mask_node_representation], axis=-1)     # [g x 2h]
        neighbor_node_input = tf.concat([neighbor_node, initial_neighbor_node_representation], axis=-1)     # [g x n X 2h]
        neighbor_node_input = tf.unsorted_segment_mean(data=neighbor_node_input, segment_ids=inputs['neighbor_node_graph_relation'], num_segments=inputs['num_graphs'])  # [g x 2h]
        # neighbor_node_input = tf.reduce_mean(neighbor_node_input, keep_dims=False, axis=1)   # [g x 2h]
        gate_input = tf.concat([mask_node_input, neighbor_node_input], axis=-1)    # [g x 4h]
        last_h = tf.concat([mask_node, tf.unsorted_segment_mean(data=neighbor_node, segment_ids=inputs['neighbor_node_graph_relation'], num_segments=inputs['num_graphs'])], axis=-1)   # [g x 2h]
        gated_outputs = tf.nn.sigmoid(self.weights['MLP_gate_node_mask'](gate_input)) * self.weights['MLP_nodes_node_mask'](last_h)  # [g x 2h]
        node_type = self.weights['MLP_graphs_node_mask'](gated_outputs)        # [g x (vocabulary_size - 1)]
        return node_type

    def process_raw_graphs(self, raw_data: Sequence[Any], test_percentage, train_step) -> Any:
        training_graphs = []
        test_graphs = []
        for input_data in raw_data:
            processed_data = []

            if train_step == "pre-train_edge_mask" or train_step == "pre-train_node_mask":
                # mask edge in pre_train-edge-mask
                one_data = input_data
                mask_node = [0, 0]
                mask_edge_original_type = 0
                if train_step == "pre-train_edge_mask":
                    mask_edge_idx = random.randint(0, len(one_data["graph"]) - 1)
                    mask_edge = one_data["graph"][mask_edge_idx]
                    mask_edge_original_type = int(mask_edge[1]) - 1
                    mask_node = []
                    mask_node.append(int(mask_edge[0]))
                    mask_node.append(int(mask_edge[2]))
                    mask_edge_type = int(self.num_edge_types) - 1
                    mask_edge = [mask_edge[0], mask_edge_type, mask_edge[2]]
                    one_data["graph"][mask_edge_idx] = mask_edge

                # mask node in pre_train-node-mask
                mask_node_idx = 0
                mask_node_original_embedding = 0
                mask_node_neighbor_node_list = []
                if train_step == "pre-train_node_mask":
                    mask_node_idx = random.randint(0, len(one_data["node_features"]) - 1)
                    mask_node_original_embedding = int(one_data["node_features"][mask_node_idx])
                    mask_node_embedding = self.params['vocabulary_size']
                    one_data["node_features"][mask_node_idx] = mask_node_embedding
                    mask_node_neighbor_node_list.extend([int(e[2]) for e in one_data["graph"] if int(e[0]) == mask_node_idx])
                    mask_node_neighbor_node_list.extend([int(e[0]) for e in one_data["graph"] if int(e[2]) == mask_node_idx])

                (
                    adjacency_lists,
                    num_incoming_edge_per_type,

                ) = self.__graph_to_adjacency_lists(one_data["graph"])
                processed_data.append(
                    {
                        "adjacency_lists": adjacency_lists,
                        "num_incoming_edge_per_type": num_incoming_edge_per_type,
                        "embedding_indices": one_data["node_features"],
                        "name": one_data["projName"],
                        "mask_node": mask_node,
                        "mask_edge_original_type": mask_edge_original_type,
                        "mask_node_idx": mask_node_idx,
                        "mask_node_original_embedding": mask_node_original_embedding,
                        "mask_node_neighbor_node_list": mask_node_neighbor_node_list
                    }
                )
            else:
                one_data = input_data["func1"]
                # mask edge in pre_train-edge-mask
                mask_node = [0, 0]
                mask_edge_original_type = 0
                # mask node in pre_train-node-mask
                mask_node_idx = 0
                mask_node_original_embedding = 0
                mask_node_neighbor_node_list = []
                (
                    adjacency_lists,
                    num_incoming_edge_per_type,
                ) = self.__graph_to_adjacency_lists(one_data["graph"])
                processed_data.append(
                    {
                        "adjacency_lists": adjacency_lists,
                        "num_incoming_edge_per_type": num_incoming_edge_per_type,
                        "embedding_indices": one_data["node_features"],
                        "name": one_data["projName"],
                        "mask_node": mask_node,
                        "mask_edge_original_type": mask_edge_original_type,
                        "mask_node_idx": mask_node_idx,
                        "mask_node_original_embedding": mask_node_original_embedding,
                        "mask_node_neighbor_node_list": mask_node_neighbor_node_list
                    }
                )

                one_data = input_data["func2"]
                # mask edge in pre_train-edge-mask
                mask_node = [0, 0]
                mask_edge_original_type = 0
                # mask node in pre_train-node-mask
                mask_node_idx = 0
                mask_node_original_embedding = 0
                mask_node_neighbor_node_list = []
                (
                    adjacency_lists,
                    num_incoming_edge_per_type,
                ) = self.__graph_to_adjacency_lists(one_data["graph"])
                processed_data.append(
                    {
                        "adjacency_lists": adjacency_lists,
                        "num_incoming_edge_per_type": num_incoming_edge_per_type,
                        "embedding_indices": one_data["node_features"],
                        "name": one_data["projName"],
                        "mask_node": mask_node,
                        "mask_edge_original_type": mask_edge_original_type,
                        "mask_node_idx": mask_node_idx,
                        "mask_node_original_embedding": mask_node_original_embedding,
                        "mask_node_neighbor_node_list": mask_node_neighbor_node_list
                    }
                )

                processed_data.append(input_data["labels"])

            (test_graphs if random.randint(0,9) < int(test_percentage) else training_graphs).append(
                processed_data
            )

        return training_graphs, test_graphs

    def __graph_to_adjacency_lists(self, graph) -> Tuple[Dict[int, np.ndarray], Dict[int, Dict[int, int]]]:
        adj_lists = defaultdict(list)
        num_incoming_edges_dicts_per_type = defaultdict(lambda: defaultdict(lambda: 0))
        for src, e, dest in graph:
            fwd_edge_type = e - 1  # Make edges start from 0
            adj_lists[fwd_edge_type].append((src, dest))
            num_incoming_edges_dicts_per_type[fwd_edge_type][dest] += 1
            if self.params['tie_fwd_bkwd']:
                adj_lists[fwd_edge_type].append((dest, src))
                num_incoming_edges_dicts_per_type[fwd_edge_type][src] += 1

        final_adj_lists = {e: np.array(sorted(lm), dtype=np.int32)
                           for e, lm in adj_lists.items()}

        # Add backward edges as an additional edge type that goes backwards:
        if not (self.params['tie_fwd_bkwd']):
            for (edge_type, edges) in adj_lists.items():
                bwd_edge_type = (self.num_edge_types - 1) / 2 + edge_type
                final_adj_lists[bwd_edge_type] = np.array(sorted((y, x) for (x, y) in edges), dtype=np.int32)
                for (x, y) in edges:
                    num_incoming_edges_dicts_per_type[bwd_edge_type][y] += 1

        return final_adj_lists, num_incoming_edges_dicts_per_type

    def make_minibatch_iterator(self, data: Any, is_training: bool):
        """Create minibatches by flattening adjacency matrices into a single adjacency matrix with multiple disconnected components."""
        graph_state_dropout_keep_prob = self.params['graph_state_dropout_keep_prob'] if is_training else 1.
        edge_weights_dropout_keep_prob = self.params['edge_weight_dropout_keep_prob'] if is_training else 1.
        out_layer_dropout_keep_prob = self.params['out_layer_dropout_keep_prob'] if is_training else 1.

        if is_training:
            np.random.shuffle(data)

        if len(data[0]) == 3:
            num_pairs_in_total_batch = 0

            one_pair = data[0]
            while num_pairs_in_total_batch < len(data):
                num_graphs_in_batch = 0
                batch_node_indices_in_embedding_matrix = []
                batch_adjacency_lists = [[] for _ in range(self.num_edge_types)]
                batch_num_incoming_edges_per_type = []
                batch_graph_nodes_list = []
                node_offset = 0
                batch_graph_labels = []
                batch_pair_idx = []

                # for pre train edge mask
                batch_graph_mask_node_list = []
                batch_graph_mask_edge_original_type_list = []

                # for pre train node mask
                batch_graph_mask_node_idx_list = []
                batch_graph_mask_node_original_embedding = []
                batch_graph_mask_node_neighbor_node_list = []
                batch_graph_neighbor_node_graph_relation = []

                while num_pairs_in_total_batch < len(data) and node_offset + len(one_pair[0]["embedding_indices"]) + len(one_pair[1]["embedding_indices"]) < self.params["batch_size"]:
                    func1_graph = one_pair[0]
                    func2_graph = one_pair[1]
                    pair_label = one_pair[2]
                    batch_graph_labels.append(int(pair_label))
                    graph_idx = []

                    # for func1
                    batch_graph_mask_node_list.append([n + node_offset for n in func1_graph["mask_node"]])
                    batch_graph_mask_edge_original_type_list.append(func1_graph["mask_edge_original_type"])
                    batch_graph_mask_node_idx_list.append(node_offset + func1_graph["mask_node_idx"])
                    batch_graph_mask_node_original_embedding.append(func1_graph["mask_node_original_embedding"])
                    batch_graph_mask_node_neighbor_node_list.extend([n + node_offset for n in func1_graph["mask_node_neighbor_node_list"]])
                    batch_graph_neighbor_node_graph_relation.extend(np.full(shape=[len(func1_graph["mask_node_neighbor_node_list"])], fill_value=num_graphs_in_batch, dtype=np.int32))

                    num_nodes_in_graph = len(func1_graph['embedding_indices'])
                    batch_node_indices_in_embedding_matrix.extend(func1_graph['embedding_indices'])
                    batch_graph_nodes_list.append(np.full(shape=[num_nodes_in_graph], fill_value=num_graphs_in_batch, dtype=np.int32))
                    for i in range(self.num_edge_types):
                        if i in func1_graph['adjacency_lists']:
                            batch_adjacency_lists[i].append(func1_graph['adjacency_lists'][i] + node_offset)

                    # Turn counters for incoming edges into np array:
                    num_incoming_edges_per_type = np.zeros((num_nodes_in_graph, self.num_edge_types))
                    for (e_type, num_incoming_edges_per_type_dict) in func1_graph['num_incoming_edge_per_type'].items():
                        for (node_id, edge_count) in num_incoming_edges_per_type_dict.items():
                            num_incoming_edges_per_type[node_id, e_type] = edge_count
                    batch_num_incoming_edges_per_type.append(num_incoming_edges_per_type)

                    graph_idx.append(num_graphs_in_batch)
                    num_graphs_in_batch += 1
                    node_offset += num_nodes_in_graph


                    # for func2
                    batch_graph_mask_node_list.append([n + node_offset for n in func2_graph["mask_node"]])
                    batch_graph_mask_edge_original_type_list.append(func2_graph["mask_edge_original_type"])
                    batch_graph_mask_node_idx_list.append(node_offset + func2_graph["mask_node_idx"])
                    batch_graph_mask_node_original_embedding.append(func2_graph["mask_node_original_embedding"])
                    batch_graph_mask_node_neighbor_node_list.extend([n + node_offset for n in func2_graph["mask_node_neighbor_node_list"]])
                    batch_graph_neighbor_node_graph_relation.extend(np.full(shape=[len(func2_graph["mask_node_neighbor_node_list"])], fill_value=num_graphs_in_batch, dtype=np.int32))

                    num_nodes_in_graph = len(func2_graph['embedding_indices'])
                    batch_node_indices_in_embedding_matrix.extend(func2_graph['embedding_indices'])
                    batch_graph_nodes_list.append(np.full(shape=[num_nodes_in_graph], fill_value=num_graphs_in_batch, dtype=np.int32))
                    for i in range(self.num_edge_types):
                        if i in func2_graph['adjacency_lists']:
                            batch_adjacency_lists[i].append(func2_graph['adjacency_lists'][i] + node_offset)

                    # Turn counters for incoming edges into np array:
                    num_incoming_edges_per_type = np.zeros((num_nodes_in_graph, self.num_edge_types))
                    for (e_type, num_incoming_edges_per_type_dict) in func2_graph['num_incoming_edge_per_type'].items():
                        for (node_id, edge_count) in num_incoming_edges_per_type_dict.items():
                            num_incoming_edges_per_type[node_id, e_type] = edge_count
                    batch_num_incoming_edges_per_type.append(num_incoming_edges_per_type)

                    graph_idx.append(num_graphs_in_batch)
                    batch_pair_idx.append(graph_idx)
                    num_graphs_in_batch += 1
                    node_offset += num_nodes_in_graph

                    num_pairs_in_total_batch += 1
                    one_pair = (
                        data[num_pairs_in_total_batch]
                        if num_pairs_in_total_batch < len(data)
                        else None
                    )

                batch_feed_dict = {
                    self.placeholders['input_node_indices_for_embedding']: batch_node_indices_in_embedding_matrix,
                    self.placeholders['input_num_incoming_edges_per_type']: np.concatenate(batch_num_incoming_edges_per_type, axis=0),
                    self.placeholders['input_graph_nodes_list']: np.concatenate(batch_graph_nodes_list),
                    self.placeholders['input_num_graphs']: num_graphs_in_batch,
                    self.placeholders['input_graph_labels']: batch_graph_labels,
                    self.placeholders['input_pair_idx']: batch_pair_idx,
                    self.placeholders['input_mask_node_list']: batch_graph_mask_node_list,
                    self.placeholders['input_mask_edge_original_type_list']: batch_graph_mask_edge_original_type_list,
                    self.placeholders['input_mask_node_idx_list']: batch_graph_mask_node_idx_list,
                    self.placeholders['input_mask_node_original_embedding']: batch_graph_mask_node_original_embedding,
                    self.placeholders['input_mask_node_neighbor_node_list']: batch_graph_mask_node_neighbor_node_list,
                    self.placeholders['input_neighbor_node_graph_relation']: batch_graph_neighbor_node_graph_relation
                }

                # Merge adjacency lists and information about incoming nodes:
                for i in range(self.num_edge_types):
                    if len(batch_adjacency_lists[i]) > 0:
                        adj_list = np.concatenate(batch_adjacency_lists[i])
                    else:
                        adj_list = np.zeros((0, 2), dtype=np.int32)
                    batch_feed_dict[self.placeholders['input_adjacency_lists'][i]] = adj_list
                batch_feed_dict[self.placeholders['graph_state_dropout_keep_prob']] = graph_state_dropout_keep_prob,
                batch_feed_dict[self.placeholders['edge_weight_dropout_keep_prob']] = edge_weights_dropout_keep_prob,
                batch_feed_dict[self.placeholders['out_layer_dropout_keep_prob']] = out_layer_dropout_keep_prob,

                yield batch_feed_dict

        else:
            num_graphs_in_total_batch = 0
            cur_graph = data[0][0]
            while num_graphs_in_total_batch < len(data):
                num_graphs_in_batch = 0
                batch_node_indices_in_embedding_matrix = []
                batch_adjacency_lists = [[] for _ in range(self.num_edge_types)]
                batch_num_incoming_edges_per_type = []
                batch_graph_nodes_list = []
                node_offset = 0
                batch_graph_labels = []
                batch_pair_idx = []

                # for pre train edge mask
                batch_graph_mask_node_list = []
                batch_graph_mask_edge_original_type_list = []

                # for pre train node mask
                batch_graph_mask_node_idx_list = []
                batch_graph_mask_node_original_embedding = []
                batch_graph_mask_node_neighbor_node_list = []
                batch_graph_neighbor_node_graph_relation = []

                while (num_graphs_in_total_batch < len(data) and node_offset + len(cur_graph["embedding_indices"]) < self.params["batch_size"]):
                    batch_graph_labels.append(0)
                    graph_idx = []

                    batch_graph_mask_node_list.append([n + node_offset for n in cur_graph["mask_node"]])
                    batch_graph_mask_edge_original_type_list.append(cur_graph["mask_edge_original_type"])
                    batch_graph_mask_node_idx_list.append(node_offset + cur_graph["mask_node_idx"])
                    batch_graph_mask_node_original_embedding.append(cur_graph["mask_node_original_embedding"])
                    batch_graph_mask_node_neighbor_node_list.extend([n + node_offset for n in cur_graph["mask_node_neighbor_node_list"]])
                    batch_graph_neighbor_node_graph_relation.extend(np.full(shape=[len(cur_graph["mask_node_neighbor_node_list"])], fill_value=num_graphs_in_batch, dtype=np.int32))

                    num_nodes_in_graph = len(cur_graph['embedding_indices'])
                    batch_node_indices_in_embedding_matrix.extend(cur_graph['embedding_indices'])
                    batch_graph_nodes_list.append(np.full(shape=[num_nodes_in_graph], fill_value=num_graphs_in_batch, dtype=np.int32))
                    for i in range(self.num_edge_types):
                        if i in cur_graph['adjacency_lists']:
                            batch_adjacency_lists[i].append(cur_graph['adjacency_lists'][i] + node_offset)

                    # Turn counters for incoming edges into np array:
                    num_incoming_edges_per_type = np.zeros((num_nodes_in_graph, self.num_edge_types))
                    for (e_type, num_incoming_edges_per_type_dict) in cur_graph['num_incoming_edge_per_type'].items():
                        for (node_id, edge_count) in num_incoming_edges_per_type_dict.items():
                            num_incoming_edges_per_type[node_id, e_type] = edge_count
                    batch_num_incoming_edges_per_type.append(num_incoming_edges_per_type)

                    graph_idx.append(num_graphs_in_batch)
                    batch_pair_idx.append([0, 0])
                    num_graphs_in_batch += 1
                    node_offset += num_nodes_in_graph

                    num_graphs_in_total_batch += 1
                    cur_graph = (
                        data[num_graphs_in_total_batch][0]
                        if num_graphs_in_total_batch < len(data)
                        else None
                    )
                batch_feed_dict = {
                    self.placeholders['input_node_indices_for_embedding']: batch_node_indices_in_embedding_matrix,
                    self.placeholders['input_num_incoming_edges_per_type']: np.concatenate(batch_num_incoming_edges_per_type, axis=0),
                    self.placeholders['input_graph_nodes_list']: np.concatenate(batch_graph_nodes_list),
                    self.placeholders['input_num_graphs']: num_graphs_in_batch,
                    self.placeholders['input_graph_labels']: batch_graph_labels,
                    self.placeholders['input_pair_idx']: batch_pair_idx,
                    self.placeholders['input_mask_node_list']: batch_graph_mask_node_list,
                    self.placeholders['input_mask_edge_original_type_list']: batch_graph_mask_edge_original_type_list,
                    self.placeholders['input_mask_node_idx_list']: batch_graph_mask_node_idx_list,
                    self.placeholders['input_mask_node_original_embedding']: batch_graph_mask_node_original_embedding,
                    self.placeholders['input_mask_node_neighbor_node_list']: batch_graph_mask_node_neighbor_node_list,
                    self.placeholders['input_neighbor_node_graph_relation']: batch_graph_neighbor_node_graph_relation
                }

                # Merge adjacency lists and information about incoming nodes:
                for i in range(self.num_edge_types):
                    if len(batch_adjacency_lists[i]) > 0:
                        adj_list = np.concatenate(batch_adjacency_lists[i])
                    else:
                        adj_list = np.zeros((0, 2), dtype=np.int32)
                    batch_feed_dict[self.placeholders['input_adjacency_lists'][i]] = adj_list
                batch_feed_dict[self.placeholders['graph_state_dropout_keep_prob']] = graph_state_dropout_keep_prob,
                batch_feed_dict[self.placeholders['edge_weight_dropout_keep_prob']] = edge_weights_dropout_keep_prob,
                batch_feed_dict[self.placeholders['out_layer_dropout_keep_prob']] = out_layer_dropout_keep_prob,

                yield batch_feed_dict


def main():
    try:
        parser = argparse.ArgumentParser()
        parser.add_argument("--restore", "-r", help="restore model parameters")
        parser.add_argument("--percentage", "-p", help="percentage of test batch(1-9)")
        parser.add_argument("--test_file", "-tf", help="the test file path")
        parser.add_argument("--two_steps_training", "-t", action="store_true", help="training the model with two data, precise and imprecise")
        args = parser.parse_args()

        model = MetaDectector(args)
        if model.args.restore is not None:
            model.test()
        else:
            model.train()
    except:
        _, _, tb = sys.exc_info()
        traceback.print_exc()
        pdb.post_mortem(tb)


if __name__ == "__main__":
    main()
