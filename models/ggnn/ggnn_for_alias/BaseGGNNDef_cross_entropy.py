from typing import List, Any, Sequence

# import tensorflow as tf
import tensorflow.compat.v1 as tf
tf.disable_v2_behavior()
import time
import os
import json
import numpy as np
import pickle
import random

#from sklearn.metrics import precision_recall_fscore_support
from sklearn.metrics import accuracy_score

from utils import MLP, ThreadedIterator, SMALL_NUMBER

from timeit import default_timer as timer
from datetime import timedelta

class BaseGGNNDefCrossEntropy(object):
    @classmethod
    def default_params(cls):
        return {
            'num_epochs': 100,
            'patience': 25,
            'learning_rate': 0.001,
            'clamp_gradient_norm': 1.0,

            'hidden_size': 100,
            'use_graph': True,

            'tie_fwd_bkwd': True,

            'random_seed': 0,

            #'margin' : 20,

            'lambda' : 0.1,

            'vocabulary_size': 350000,
        }

    def __init__(self, args, margin):
        self.args = args
        self.margin = margin

        # Collect argument things:
        self.pre_train_data_dir = './pre_train_data'
        self.fine_tune_data_dir = './data'
        self.precise_data_dir = './precise_data'

        self.run_id = "_".join([time.strftime("%Y-%m-%d-%H-%M-%S"), str(os.getpid())])

        self.log_dir = './log'
        if not os.path.exists(self.log_dir):
            os.makedirs(self.log_dir)
        self.log_file = os.path.join(self.log_dir, "%s_log.json" % self.run_id)

        model_dir = './model'
        if not os.path.exists(model_dir):
            os.makedirs(model_dir)
        self.best_model_file = os.path.join(model_dir, "%s_model_best.pickle" % self.run_id)
        self.best_edge_mask_pretrained_model_file = os.path.join(model_dir, "%s_edge_mask_pretrained_model_best.pickle" % self.run_id)
        self.best_node_mask_pretrained_model_file = os.path.join(model_dir, "%s_node_mask_pretrained_model_best.pickle" % self.run_id)

        if self.args.two_steps_training:
            self.precise_best_model_file = os.path.join(model_dir, "%s_model_best_precise.pickle" % self.run_id)

        # Collect parameters:
        params = self.default_params()
        self.params = params
#         with open(os.path.join(log_dir, "%s_params.json" % self.run_id), "w") as f:
#             json.dump(params, f)
        print("Run %s starting with following parameters:\n%s" % (self.run_id, json.dumps(self.params)))
        random.seed(params['random_seed'])
        np.random.seed(params['random_seed'])

        # Load data:
        self.num_edge_types = 0
        self.pre_train_edge_mask_training_data = None
        self.pre_train_edge_mask_test_data = None
        self.pre_train_node_mask_training_data = None
        self.pre_train_node_mask_test_data = None
        self.fine_tune_training_data = None
        self.fine_tune_test_data = None
        self.precise_fine_tune_training_data = None
        self.precise_fine_tune_testing_data = None

        if self.args.restore is None:
            # self.pre_train_edge_mask_training_data, self.pre_train_edge_mask_test_data = self.load_data(self.pre_train_data_dir, self.args.percentage, "pre-train_edge_mask")
            # self.pre_train_node_mask_training_data, self.pre_train_node_mask_test_data = self.load_data(self.pre_train_data_dir, self.args.percentage, "pre-train_node_mask")
            self.fine_tune_training_data, self.fine_tune_test_data = self.load_data(self.fine_tune_data_dir, self.args.percentage, "fine-tune")
        else:
            _, self.test_data = self.load_data(self.args.test_file, 10, "fine-tune")

        if self.args.two_steps_training:
            self.precise_fine_tune_training_data, self.precise_fine_tune_testing_data = self.load_data(self.precise_data_dir, self.args.percentage, "fine-tune")
        # Build the actual model
        config = tf.ConfigProto()
        config.gpu_options.allow_growth = True
        self.graph = tf.Graph()
        self.sess = tf.Session(graph=self.graph, config=config)
        with self.graph.as_default():
            tf.set_random_seed(params['random_seed'])
            self.placeholders = {}
            self.weights = {}
            self.ops = {}
            self.build_model(margin)
            self.make_train_step()

            # Restore/initialize variables:
            if self.args.restore is not None:
                self.restore_model(self.args.restore)
            else:
                self.initialize_model()

    def __get_max_number_edge_and_node_type_among_one_file__(self, file_path):
        num_fwd_edge_types = 0
        num_node_types = 0

        with open(file_path, 'r') as f:
            data = json.load(f)

        for ii,g in enumerate(data):
            for i,feature in enumerate(data[ii]['node_features']):
                if feature >= self.params['vocabulary_size']:
                    data[ii]['node_features'][i] = 0
            num_fwd_edge_types = max(num_fwd_edge_types, max([e[1] for e in g['graph']]))
            num_node_types = max(num_node_types, max(max(e[0], e[2]) for e in g['graph']))
        # for g in data:
        #     print(g['node_features'])

        return num_fwd_edge_types, data

    def load_data(self, input_dir, test_percentage, train_step):
        # 1. first, get the maximum number of edge types
        self.num_edge_types = 0
        data = []

        if os.path.isfile(input_dir):
            num_fwd_edge_types, d = self.__get_max_number_edge_and_node_type_among_one_file__(input_dir)
            self.num_edge_types = max(self.num_edge_types, num_fwd_edge_types)
            data.extend(d)
        elif os.path.isdir(input_dir):
            for data_file in os.listdir(input_dir):
                if not data_file.endswith(".json"):
                    continue
                full_path = os.path.join(input_dir, data_file)
                num_fwd_edge_types, d = self.__get_max_number_edge_and_node_type_among_one_file__(full_path)
                self.num_edge_types = max(self.num_edge_types, num_fwd_edge_types)
                data.extend(d)
        elif isinstance(input_dir, list):
            for data_file in input_dir:
                if not data_file.endswith(".json"):
                    continue
                num_fwd_edge_types, d = self.__get_max_number_edge_and_node_type_among_one_file__(data_file)
                self.num_edge_types = max(self.num_edge_types, num_fwd_edge_types)
                data.extend(d)

        self.num_edge_types = self.num_edge_types * (1 if self.params['tie_fwd_bkwd'] else 2)
        self.num_edge_types = self.num_edge_types + 1

        # 2. then process them into structure graphs
        return self.process_raw_graphs(data, test_percentage, train_step)

    def declare_placeholders_for_graph_model_parameters(self):
        self.placeholders['graph_state_dropout_keep_prob'] = tf.placeholder(tf.float32, None, name='graph_state_dropout_keep_prob')
        self.placeholders['edge_weight_dropout_keep_prob'] = tf.placeholder(tf.float32, None, name='edge_weight_dropout_keep_prob')
        self.placeholders['out_layer_dropout_keep_prob'] = tf.placeholder(tf.float32, None, name='out_layer_dropout_keep_prob')

    def assembly_graph_inputs_to_map(self, nodes_indcies_in_embedding_matrix, adjacency_lists, num_incoming_edges_per_type, graph_nodes_list, num_graphs, graph_labels, def_node,
                                     #use_nodes, use_nodes_graph_relation,
                                     mask_node_list, mask_edge_original_type_list, mask_node_idx_list, mask_node_original_embedding, mask_node_neighbor_node_list, neighbor_node_graph_relation):
        inputs = {}
        inputs["node_indices_for_embedding"] = nodes_indcies_in_embedding_matrix
        inputs["adjacency_lists"] = adjacency_lists
        inputs["num_incoming_edges_per_type"] = num_incoming_edges_per_type
        inputs["graph_nodes_list"] = graph_nodes_list
        inputs["num_graphs"] = num_graphs
        inputs["graph_labels"] = graph_labels
        inputs["def_node"] = def_node
        inputs["mask_node_list"] = mask_node_list
        inputs["mask_edge_original_type_list"] = mask_edge_original_type_list
        inputs["mask_node_idx_list"] = mask_node_idx_list
        inputs["mask_node_original_embedding"] = mask_node_original_embedding
        inputs["mask_node_neighbor_node_list"] = mask_node_neighbor_node_list
        inputs["neighbor_node_graph_relation"] = neighbor_node_graph_relation

        return inputs

    def declare_graph_model_inputs(self, name):
        self.placeholders[name + 'node_indices_for_embedding'] = tf.placeholder(tf.int32, [None], name='node_features')
        self.placeholders[name + 'adjacency_lists'] = [tf.placeholder(tf.int32, [None, 2], name='adjacency_e%s' % e) for e in range(self.num_edge_types)]
        self.placeholders[name + 'num_incoming_edges_per_type'] = tf.placeholder(tf.float32, [None, self.num_edge_types], name='num_incoming_edges_per_type')
        self.placeholders[name + 'graph_nodes_list'] = tf.placeholder(tf.int32, [None], name='graph_nodes_list')
        self.placeholders[name + 'num_graphs'] = tf.placeholder(tf.int32, [], name='num_graphs')
        self.placeholders[name + "graph_labels"] = tf.placeholder(tf.float32, [None], name="graph_labels")
        self.placeholders[name + "def_node"] = tf.placeholder(tf.int32, [None], name="def_node")
        self.placeholders[name + "mask_node_list"] = tf.placeholder(tf.int32, [None, 2], name="mask_node_list")
        self.placeholders[name + "mask_edge_original_type_list"] = tf.placeholder(tf.int32, [None], name="mask_edge_original_type_list")
        self.placeholders[name + "mask_node_idx_list"] = tf.placeholder(tf.int32, [None], name="mask_node_idx_list")
        self.placeholders[name + "mask_node_original_embedding"] = tf.placeholder(tf.int32, [None], name="mask_node_original_embedding")
        self.placeholders[name + "mask_node_neighbor_node_list"] = tf.placeholder(tf.int32, [None], name="mask_node_neighbor_node_list")
        self.placeholders[name + "neighbor_node_graph_relation"] = tf.placeholder(tf.int32, [None], name="neighbor_node_graph_relation")

        return self.assembly_graph_inputs_to_map(self.placeholders[name + 'node_indices_for_embedding'], self.placeholders[name + 'adjacency_lists'],
                                                 self.placeholders[name + 'num_incoming_edges_per_type'], self.placeholders[name + 'graph_nodes_list'],
                                                 self.placeholders[name + 'num_graphs'], self.placeholders[name + "graph_labels"], self.placeholders[name + "def_node"],
                                                 self.placeholders[name + 'mask_node_list'], self.placeholders[name + "mask_edge_original_type_list"],
                                                 self.placeholders[name + "mask_node_idx_list"], self.placeholders[name + "mask_node_original_embedding"],
                                                 self.placeholders[name + "mask_node_neighbor_node_list"], self.placeholders[name + "neighbor_node_graph_relation"])

    def build_model(self, margin):
        self.weights['embedding_matrix'] = tf.get_variable('embedding_matrix', [self.params['vocabulary_size'] + 1, self.params['hidden_size']])

        with tf.variable_scope("graph_model"):
            self.declare_placeholders_for_graph_model_parameters()
            self.declare_graph_model_weights()

            inputs = self.declare_graph_model_inputs('input_')
            self.ops['final_node_representations'] = self.compute_final_node_representations(inputs)
            self.ops['graph_representations'] = self.gated_regression(inputs, self.ops['final_node_representations'])

            self.ops['mask_node_representations_for_edge_mask'] = tf.nn.embedding_lookup(params=self.ops['final_node_representations'], ids=inputs["mask_node_list"])
            self.ops['mask_edge_logits'] = self.compute_edge(inputs, self.ops['mask_node_representations_for_edge_mask'])

            self.ops['mask_node_representations_for_node_mask'] = tf.nn.embedding_lookup(params=self.ops['final_node_representations'], ids=inputs["mask_node_idx_list"])
            self.ops['neighbor_node_list_node_representations_for_node_mask'] = tf.nn.embedding_lookup(params=self.ops['final_node_representations'], ids=inputs["mask_node_neighbor_node_list"])
            self.ops['mask_node_logits'] = self.compute_node(inputs, self.ops['mask_node_representations_for_node_mask'], self.ops['neighbor_node_list_node_representations_for_node_mask'])

            self.ops["input_graph_labels"] = inputs["graph_labels"]
            self.ops["input_mask_node_list"] = inputs["mask_node_list"]
            self.ops["input_mask_edge_original_type_list"] = inputs["mask_edge_original_type_list"]

            self.ops["def_node"] = tf.nn.embedding_lookup(params=self.ops['final_node_representations'], ids=inputs["def_node"])

            self.ops["left_var"], self.ops["right_var"] = self.compute_alias(inputs, self.ops["def_node"]
                                                                             )
            output_bias = tf.get_variable("output_bias", [2], initializer=tf.zeros_initializer())
            output_weights = tf.get_variable("output_wegiths", [2,2 * self.params['hidden_size']],initializer=tf.truncated_normal_initializer(stddev=0.02))

        with tf.variable_scope("objectives"):
            # Step 1: pre-train edge mask
            self.ops["edge_mask_cross-entropy_loss"] = tf.reduce_sum(tf.nn.sparse_softmax_cross_entropy_with_logits(labels=inputs["mask_edge_original_type_list"], logits=self.ops['mask_edge_logits']))

            # Step 2: pre-train node mask
            self.ops["node_mask_cross-entropy_loss"] = tf.reduce_sum(tf.nn.sparse_softmax_cross_entropy_with_logits(labels=inputs["mask_node_original_embedding"], logits=self.ops['mask_node_logits']))

            # Step 3: fine-tune
            left = self.ops["left_var"]
            right = self.ops["right_var"]

            concat_left_right = tf.concat([left,right],axis=1)
            logits = tf.matmul(concat_left_right,output_weights,transpose_b=True)
            logits = tf.nn.bias_add(logits,output_bias)
            self.ops['probabilities'] = tf.nn.softmax(logits, axis=-1)
            self.ops['cross_entropy_loss'] = tf.reduce_sum(tf.nn.sparse_softmax_cross_entropy_with_logits(labels=tf.cast(inputs['graph_labels'],tf.int32),logits=logits))

            d = tf.reduce_sum(tf.square(left - right), 1)
            d_sqrt = tf.sqrt(tf.maximum(d, 1e-9))

            self.ops['d_sqrt'] = d_sqrt
            self.ops['contrastive_loss'] = self.ops['cross_entropy_loss']
            self.ops["result_labels"] = inputs["graph_labels"]
            self.ops["var_representations"] = tf.concat([self.ops["left_var"], self.ops["right_var"]], axis=0)

    def make_train_step(self):
        trainable_vars = self.sess.graph.get_collection(tf.GraphKeys.TRAINABLE_VARIABLES)
        optimizer = tf.train.AdamOptimizer(self.params['learning_rate'])

        grads_and_vars = optimizer.compute_gradients(self.ops['edge_mask_cross-entropy_loss'], var_list=trainable_vars)
        clipped_grads = []
        for grad, var in grads_and_vars:
            if grad is not None:
                clipped_grads.append((tf.clip_by_norm(grad, self.params['clamp_gradient_norm']), var))
            else:
                clipped_grads.append((grad, var))
        self.ops['pre-train_edge_mask_step'] = optimizer.apply_gradients(clipped_grads)

        grads_and_vars = optimizer.compute_gradients(self.ops['node_mask_cross-entropy_loss'], var_list=trainable_vars)
        clipped_grads = []
        for grad, var in grads_and_vars:
            if grad is not None:
                clipped_grads.append((tf.clip_by_norm(grad, self.params['clamp_gradient_norm']), var))
            else:
                clipped_grads.append((grad, var))
        self.ops['pre-train_node_mask_step'] = optimizer.apply_gradients(clipped_grads)

        grads_and_vars = optimizer.compute_gradients(self.ops['contrastive_loss'], var_list=trainable_vars)
        clipped_grads = []
        for grad, var in grads_and_vars:
            if grad is not None:
                clipped_grads.append((tf.clip_by_norm(grad, self.params['clamp_gradient_norm']), var))
            else:
                clipped_grads.append((grad, var))
        self.ops['fine-tune_step'] = optimizer.apply_gradients(clipped_grads)

        # Initialize newly-introduced variables:
        self.sess.run(tf.local_variables_initializer())

    def train(self):
        with self.graph.as_default():
            max_d = 0
            min_d = 1000000
            accuracy = 0
            least_cross_entropy_loss = float("+inf")
            patience = 0

            print("Pre-Training Edge Mask Phase Begins.")
            for epoch in range(1, self.params['num_epochs'] + 1):
                print("Pre-Training Edge Mask Phase Skips.")
                break
                print("== Pre-Train Edge Mask Epoch %i ==" % epoch)
                # run the training first
                cross_entropy_loss = self.run_epoch("pre-train-edge-mask epoch %i" % epoch, [self.ops['edge_mask_cross-entropy_loss'], self.ops['pre-train_edge_mask_step']])
                print("[Train: current edge mask cross-entropy loss is %.5f]\n" % (cross_entropy_loss))

                # run the test second
                cross_entropy_loss = self.run_epoch("test epoch %i" % epoch, [self.ops['edge_mask_cross-entropy_loss']])
                print("[Test: current edge mask cross-entropy loss is %.5f]\n" % (cross_entropy_loss))
                # precision, recall, f1, _ = self.__compute_precision_recall__(test_graph_representations)
                # print("[Test: clustering loss: %.5f, precision: %.5f, recall: %.5f, and F1: %.5f]\n" % (clustering_loss, precision, recall, f1))

                if cross_entropy_loss < least_cross_entropy_loss:
                    least_cross_entropy_loss = cross_entropy_loss
                    patience = 0

                    self.save_model(self.best_edge_mask_pretrained_model_file)

                else:
                    patience += 1

                if patience == self.params['patience']:
                    print("Stop pre-training edge mask as patience epochs have reached.")
                    break
            print("Pre-Training Edge Mask Phase Finished.")


            print("Loading the best model in the pre-training edge mask stage.")
            # self.restore_model(self.best_edge_mask_pretrained_model_file)

            least_cross_entropy_loss = float("+inf")
            patience = 0

            print("Pre-Training Node Mask Phase Begins.")
            for epoch in range(1, self.params['num_epochs'] + 1):
                print("Pre-Training Node Mask Phase Skips.")
                break
                print("== Pre-Train Node Mask Epoch %i ==" % epoch)
                # run the training first
                cross_entropy_loss = self.run_epoch("pre-train-node-mask epoch %i" % epoch, [self.ops['node_mask_cross-entropy_loss'], self.ops['pre-train_node_mask_step']])
                print("[Train: current node mask cross-entropy loss is %.5f]\n" % (cross_entropy_loss))

                # run the test second
                cross_entropy_loss = self.run_epoch("test epoch %i" % epoch, [self.ops['node_mask_cross-entropy_loss']])
                print("[Test: current node mask cross-entropy loss is %.5f]\n" % (cross_entropy_loss))
                # precision, recall, f1, _ = self.__compute_precision_recall__(test_graph_representations)
                # print("[Test: clustering loss: %.5f, precision: %.5f, recall: %.5f, and F1: %.5f]\n" % (clustering_loss, precision, recall, f1))

                if cross_entropy_loss < least_cross_entropy_loss:
                    least_cross_entropy_loss = cross_entropy_loss
                    patience = 0

                    self.save_model(self.best_node_mask_pretrained_model_file)

                else:
                    patience += 1

                if patience == self.params['patience']:
                    print("Stop pre-training node mask as patience epochs have reached.")
                    break
            print("Pre-Training Node Mask Phase Finished.")


            print("Loading the best model in the pre-training stage.")
            self.restore_model('./2022-03-07-11-35-18_33_node_mask_pretrained_model_best.pickle')
            # self.restore_model(self.best_node_mask_pretrained_model_file)
            # print("Model verified.")

            least_contrastive_loss = float("+inf")
            patience = 0

            start_time = timer()
            print("\nFine-Tuning Phase Begins.")
            for epoch in range(1, self.params['num_epochs'] + 1):
                # print("\nFine-Tuning Phase Skips.")
                # break
                print("== Fine-Tune Epoch %i ==" % epoch)
                # run the training first
                contrastive_loss, probabilities, labels, d_sqrt_all = self.run_epoch("fine-tune epoch %i" % epoch, [self.ops['contrastive_loss'],
                                                                                                        self.ops['probabilities'],
                                                                                                        self.ops["result_labels"],
                                                                                                        self.ops['d_sqrt'],
                                                                                                        self.ops['fine-tune_step'],
                                                                                                        self.ops['final_node_representations']])
                print("[Train: current ranking loss is %.5f]\n" % (contrastive_loss))
                if (max(d_sqrt_all) > max_d):
                    max_d = max(d_sqrt_all)
                if (min(d_sqrt_all) < min_d):
                    min_d = min(d_sqrt_all)

                # run the validation second
                contrastive_loss, test_probabilities, labels, d_sqrt_all = self.run_epoch("test epoch %i" % epoch, [self.ops['contrastive_loss'],
                                                                                                        self.ops['probabilities'],
                                                                                                        self.ops['result_labels'],
                                                                                                        self.ops['d_sqrt']])
                # print("test_graph_representations",graph_representations)
                #precision, recall, f1, _ = self.__compute_precision_recall__(test_graph_representations, labels)
                accuracy_score = self.__compute_precision_recall__(test_probabilities, labels)
                #print("[Test: ranking loss: %.5f, precision: %.5f, recall: %.5f, and F1: %.5f]\n" % (contrastive_loss, precision, recall, f1))
                print("[Test: ranking loss: %.5f, accuracy_score: %.5f]\n" % (contrastive_loss, accuracy_score))

                if contrastive_loss < least_contrastive_loss:
                    least_contrastive_loss = contrastive_loss
                    accuracy = accuracy_score
                    patience = 0

                    self.save_model(self.best_model_file)

                else:
                    patience += 1

                if patience == self.params['patience']:
                    print("Stop pre-training as patience epochs have reached.")
                    break
            print("Fine-Tuning Phase Finished.")
            end_time = timer()
            print("time used for fine-tuning phase:",str(timedelta(seconds=end_time-start_time)))

            if self.args.two_steps_training:
                self.fine_tune_training_data = self.precise_fine_tune_training_data
                self.fine_tune_testing_data = self.precise_fine_tune_testing_data

                print("Loading the best model in the pre-training stage.")
                self.restore_model(self.best_model_file)

                least_contrastive_loss = float("+inf")
                patience = 0
                max_d = 0
                min_d = 100000
                accuracy = 0

                start_time = timer()
                print("\nPrecise Fine-Tuning Phase Begins.")
                for epoch in range(1, self.params['num_epochs'] + 1):
                    print("== Fine-Tune Epoch %i ==" % epoch)
                    contrastive_loss, probabilities, labels, d_sqrt_all = self.run_epoch("fine-tune epoch %i" % epoch, [self.ops['contrastive_loss'],
                                                                                                                                self.ops['probabilities'],
                                                                                                                                self.ops["result_labels"],
                                                                                                                                self.ops['d_sqrt'],
                                                                                                                                self.ops['fine-tune_step'],
                                                                                                                                self.ops['final_node_representations']])
                    print("[Train: current ranking loss is %.5f]\n" % (contrastive_loss))
                    if (max(d_sqrt_all) > max_d):
                        max_d = max(d_sqrt_all)
                    if (min(d_sqrt_all) < min_d):
                        min_d = min(d_sqrt_all)

                    contrastive_loss, test_probabilities, labels, d_sqrt_all = self.run_epoch("test epoch %i" % epoch, [self.ops['contrastive_loss'],
                                                                                                                                self.ops['probabilities'],
                                                                                                                                self.ops['result_labels'],
                                                                                                                                self.ops['d_sqrt']])
                    accuracy_score = self.__compute_precision_recall__(test_probabilities, labels)
                    print("[Test: ranking loss: %.5f, accuracy_score: %.5f]\n" % (contrastive_loss, accuracy_score))
                    if contrastive_loss < least_contrastive_loss:
                        least_contrastive_loss = contrastive_loss
                        accuracy = accuracy_score
                        patience = 0

                        self.save_model(self.precise_best_model_file)

                    else:
                        patience += 1

                    if patience == self.params['patience']:
                        print("Stop pre-training as patience epochs have reached.")
                        break
                print("Fine-Tuning Phase Finished.")
                end_time = timer()
                print("time used for second fine-tuning phase:",str(timedelta(seconds=end_time-start_time)))
            print("margin is {}, accuracy score is {}".format(self.margin,accuracy))
            print("max_d is ", max_d)
            print("min_d is ", min_d)
            return accuracy

    def test(self):
        with self.graph.as_default():
            print("\nTesting Phase Begins.")
            # run the validation second
            contrastive_loss, test_probabilities, labels, d_sqrt_all = self.run_epoch("test epoch", [self.ops['contrastive_loss'],
                                                                                                      self.ops['probabilities'],
                                                                                                      self.ops['result_labels'],
                                                                                                      self.ops['d_sqrt']])
            # print("[Test: current contrastive loss is %.5f]\n" % (contrastive_loss))
            #precision, recall, f1, _ = self.__compute_precision_recall__(test_graph_representations, labels)
            accuracy_score = self.__compute_precision_recall__(test_probabilities, labels)
            #print("[Test: ranking loss: %.5f, precision: %.5f, recall: %.5f, and F1: %.5f]\n" % (contrastive_loss, precision, recall, f1))
            print("[Test: ranking loss: %.5f, accuracy_score: %.5f]\n" % (contrastive_loss, accuracy_score))
            print("Fine-Tuning Phase Finished.")

    def run_epoch(self, epoch_name: str, operators):
        total_loss = 0
        graph_representations = []
        labels = []
        d_sqrt_sum = []
        graph_data = None

        is_training = False
        if self.ops['pre-train_edge_mask_step'] in operators or self.ops['pre-train_node_mask_step'] in operators or self.ops['fine-tune_step'] in operators:
            is_training = True

        if self.ops['edge_mask_cross-entropy_loss'] in operators:
            if is_training:
                graph_data = self.pre_train_edge_mask_training_data
            else:
                graph_data = self.pre_train_edge_mask_test_data
        elif self.ops['node_mask_cross-entropy_loss'] in operators:
            if is_training:
                graph_data = self.pre_train_node_mask_training_data
            else:
                graph_data = self.pre_train_node_mask_test_data
        elif self.ops['contrastive_loss'] in operators:
            if is_training:
                graph_data = self.fine_tune_training_data
            else:
                graph_data = self.fine_tune_test_data
        else:
            graph_data = None

        if epoch_name == "test epoch":
            graph_data = self.test_data

        batch_iterator = ThreadedIterator(self.make_minibatch_iterator(graph_data, is_training), max_queue_size=5)
        for step, batch_data in enumerate(batch_iterator):
            result = self.sess.run(operators, feed_dict=batch_data)
            loss = 0
            if self.ops['edge_mask_cross-entropy_loss'] in operators or self.ops['node_mask_cross-entropy_loss'] in operators:
                loss = result[0]
            elif self.ops['contrastive_loss'] in operators:
                loss, graphs, label, d_sqrt = result[0], result[1], result[2], result[3]
                graph_representations.append(graphs.tolist()) # numpy array to lists
                labels.append(label.tolist())
                d_sqrt_sum.extend(d_sqrt)

            if self.ops['final_node_representations'] in operators:
                node_represenation = result[5]
                # print(node_represenation.tolist())

            print("Running %s, batch %i. Loss so far: %.4f." % (epoch_name, step, loss), end='\r')

            total_loss += loss
        if self.ops['edge_mask_cross-entropy_loss'] in operators or self.ops['node_mask_cross-entropy_loss'] in operators:
            return total_loss
        else:
            return total_loss, graph_representations, labels, d_sqrt_sum

    def __compute_precision_recall__(self, test_probabilities, ground_truth):
        true_labels = []
        for l in ground_truth[0]:
            true_labels.append(int(l))
        predicted_labels = np.argmax(test_probabilities[0],axis=-1)
        return accuracy_score(true_labels, predicted_labels)

    def initialize_model(self) -> None:
        init_op = tf.group(tf.global_variables_initializer(),
                           tf.local_variables_initializer())
        self.sess.run(init_op)

    def save_model(self, path: str) -> None:
        weights_to_save = {}
        for variable in self.sess.graph.get_collection(tf.GraphKeys.GLOBAL_VARIABLES):
            assert variable.name not in weights_to_save
            weights_to_save[variable.name] = self.sess.run(variable)

        data_to_save = {
                         "params": self.params,
                         "weights": weights_to_save
                       }

        with open(path, 'wb') as out_file:
            pickle.dump(data_to_save, out_file, pickle.HIGHEST_PROTOCOL)

    def restore_model(self, path: str) -> None:
        print("Restoring weights from file %s." % path)
        with open(path, 'rb') as in_file:
            data_to_load = pickle.load(in_file)

        # Assert that we got the same model configuration
        assert len(self.params) == len(data_to_load['params'])
        print(self.params)
        print(data_to_load['params'])
        for (par, par_value) in self.params.items():
            # Fine to have different task_ids:
            if par not in ['task_ids', 'num_epochs']:
                assert par_value == data_to_load['params'][par]

        variables_to_initialize = []
        with tf.name_scope("restore"):
            restore_ops = []
            used_vars = set()
            for variable in self.sess.graph.get_collection(tf.GraphKeys.GLOBAL_VARIABLES):
                used_vars.add(variable.name)
                if variable.name in data_to_load['weights']:
                    restore_ops.append(variable.assign(data_to_load['weights'][variable.name]))
                else:
                    print('Freshly initializing %s since no saved value was found.' % variable.name)
                    variables_to_initialize.append(variable)
            for var_name in data_to_load['weights']:
                if var_name not in used_vars:
                    print('Saved weights for %s not used by model.' % var_name)
            restore_ops.append(tf.variables_initializer(variables_to_initialize))
            self.sess.run(restore_ops)
