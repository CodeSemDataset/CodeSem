# coding=utf-8
# Copyright 2018 The Google AI Language Team Authors.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
"""BERT finetuning runner modified with Tokenized Input_ids"""

from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
import collections

import os
import csv
import modeling
import optimization
import tensorflow.compat.v1 as tf
import numpy as np
import random

from timeit import default_timer as timer
from datetime import timedelta

#tf.config.run_functions_eagerly(True)
flags = tf.flags
FLAGS = flags.FLAGS

set_use_length = 10
buffer_size = 100

## Required parameters
flags.DEFINE_string(
    "data_dir", None,
    "The input data dir. Should contain the .tsv files (or other data files) "
    "for the task.")

flags.DEFINE_string(
    "bert_config_file", None,
    "The config json file corresponding to the pre-trained BERT model. "
    "This specifies the model architecture.")

flags.DEFINE_string("task_name", None, "The name of the task to train.")

flags.DEFINE_string(
    "output_dir", None,
    "The output directory where the model checkpoints will be written.")

## Other parameters

flags.DEFINE_string(
    "init_checkpoint", None,
    "Initial checkpoint (usually from a pre-trained BERT model).")

flags.DEFINE_integer(
    "max_seq_length", 3000,
    "The maximum total input sequence length. "
    "Sequences longer than this will be truncated, and sequences shorter "
    "than this will be padded.")

flags.DEFINE_float("train_margin", 1.0,"The margin for comparing contrasitive loss.")

flags.DEFINE_float("eval_margin", 1.0,"The margin for comparing contrasitive loss.")

flags.DEFINE_float("eval_margin_min", 1.0,"The margin for comparing contrasitive loss.")

flags.DEFINE_float("eval_margin_max", 1.0,"The margin for comparing contrasitive loss.")

flags.DEFINE_float("pred_margin", 1.0,"The margin for comparing contrasitive loss.")

flags.DEFINE_bool("train_for_margin", False, "Whether to train for 20 margins.")

flags.DEFINE_bool("print_margin", False, "Whether to assign d_sqrt to probabilities.")

flags.DEFINE_bool("do_train", False, "Whether to run training.")

flags.DEFINE_bool("do_eval", False, "Whether to run eval on the dev set.")

flags.DEFINE_bool(
    "do_predict", False,
    "Whether to run the model in inference mode on the test set.")

flags.DEFINE_integer("train_batch_size", 32, "Total batch size for training.")

flags.DEFINE_integer("eval_batch_size", 8, "Total batch size for eval.")

flags.DEFINE_integer("predict_batch_size", 8, "Total batch size for predict.")

flags.DEFINE_float("learning_rate", 5e-5, "The initial learning rate for Adam.")

flags.DEFINE_float("num_train_epochs", 100.0,
                   "Total number of training epochs to perform.")

flags.DEFINE_float(
    "warmup_proportion", 0.1,
    "Proportion of training to perform linear learning rate warmup for. "
    "E.g., 0.1 = 10% of training.")

flags.DEFINE_integer("save_checkpoints_steps", 1000,
                     "How often to save the model checkpoint.")

flags.DEFINE_integer("iterations_per_loop", 1000,
                     "How many steps to make in each estimator call.")

flags.DEFINE_bool("use_tpu", False, "Whether to use TPU or GPU/CPU.")

tf.flags.DEFINE_string(
    "tpu_name", None,
    "The Cloud TPU to use for training. This should be either the name "
    "used when creating the Cloud TPU, or a grpc://ip.address.of.tpu:8470 "
    "url.")

tf.flags.DEFINE_string(
    "tpu_zone", None,
    "[Optional] GCE zone where the Cloud TPU is located in. If not "
    "specified, we will attempt to automatically detect the GCE project from "
    "metadata.")

tf.flags.DEFINE_string(
    "gcp_project", None,
    "[Optional] Project name for the Cloud TPU-enabled project. If not "
    "specified, we will attempt to automatically detect the GCE project from "
    "metadata.")

tf.flags.DEFINE_string("master", None, "[Optional] TensorFlow master URL.")

flags.DEFINE_integer(
    "num_tpu_cores", 8,
    "Only used if `use_tpu` is True. Total number of TPU cores to use.")


class InputExample(object):
  """A single training/test example for simple sequence classification."""

  def __init__(self, guid, text, def1, def2, use1, use2, label=None):
    self.guid = guid
    self.text = text
    self.def1 = def1
    self.def2 = def2
    self.use1 = use1
    self.use2 = use2
    self.label = label


class PaddingInputExample(object):
  """Fake example so the num input examples is a multiple of the batch size.

  When running eval/predict on the TPU, we need to pad the number of examples
  to be a multiple of the batch size, because the TPU requires a fixed batch
  size. The alternative is to drop the last batch, which is bad because it means
  the entire output data won't be generated.

  We use this class instead of `None` because treating `None` as padding
  battches could cause silent errors.
  """



class InputFeatures(object):
  """A single set of features of data."""

  def __init__(self,
               input_ids,
               input_mask,
               segment_ids,
               label_id,
               def1,
               use1,
               use1_num,
               use1_index,
               def2,
               use2,
               use2_num,
               use2_index,
               guid,
               is_real_example=True):
    self.input_ids = input_ids
    self.input_mask = input_mask
    self.segment_ids = segment_ids
    self.label_id = label_id
    self.def1 = def1
    self.use1 = use1
    self.use1_num = use1_num
    self.use1_index = use1_index
    self.def2 = def2
    self.use2 = use2
    self.use2_num = use2_num
    self.use2_index = use2_index
    self.is_real_example = is_real_example
    self.guid =guid


class DataProcessor(object):
  """Base class for data converters for sequence classification data sets."""

  def get_train_examples(self, data_dir):
    """Gets a collection of `InputExample`s for the train set."""
    raise NotImplementedError()

  def get_dev_examples(self, data_dir):
    """Gets a collection of `InputExample`s for the dev set."""
    raise NotImplementedError()

  def get_test_examples(self, data_dir):
    """Gets a collection of `InputExample`s for prediction."""
    raise NotImplementedError()

  def get_labels(self):
    """Gets the list of labels for this data set."""
    raise NotImplementedError()

  @classmethod
  def _read_tsv(cls, input_file, quotechar=None):
    """Reads a tab separated value file."""
    lines = []
    with tf.gfile.Open(input_file, "r") as f:
      reader = csv.reader(f, delimiter="\t", quotechar=quotechar)
      for line in reader:
        lines.append(line)
      del lines[0]
      return lines


class CubertProcessor(DataProcessor):
  """Processor for the MRPC data set (GLUE version)."""
  def get_train_examples(self, data_dir):
    """See base class."""
    return self._create_examples(
        self._read_tsv(os.path.join(data_dir, "train.tsv")), "train")

  def get_dev_examples(self, data_dir):
    """See base class."""
    return self._create_examples(
        self._read_tsv(os.path.join(data_dir, "dev.tsv")), "dev")

  def get_test_examples(self, data_dir):
    """See base class."""
    return self._create_examples(
        self._read_tsv(os.path.join(data_dir, "test.tsv")), "test")

  def get_labels(self):
    """See base class."""
    return ["0", "1"]

  def _create_examples(self, lines, set_type):
    """Creates examples for the training and dev sets."""
    examples = []
    for (i, line) in enumerate(lines):
      guid = "%s-%s" % (set_type, i)
      text = line[0]
      def1 = int(line[1])
      def2 = int(line[3])
      use1 = []
      use2 = []
      if line[2] != 'None':
          for j in line[2].split():
              if j != 'None':
                  use1.append(int(j))
      if line[4] != 'None':
          for j in line[4].split():
              if j != 'None':
                  use2.append(int(j))
      label = line[5]
      examples.append(
          InputExample(guid=guid, text=text, def1=def1, def2=def2, use1=use1, use2=use2, label=label))
    return examples


def convert_single_example(ex_index, example, label_list, max_seq_length, hidden_size):
  """Converts a single `InputExample` into a single `InputFeatures`."""

  if isinstance(example, PaddingInputExample):
    return InputFeatures(
        input_ids=[0] * max_seq_length,
        input_mask=[0] * max_seq_length,
        segment_ids=[0] * max_seq_length,
        def1=0,
        def2=0,
        use1=[0] * set_use_length,
        use2=[0] * set_use_length,
        use1_num=1,
        use2_num=1,
        use1_index=[0] * hidden_size * set_use_length,
        use2_index=[0] * hidden_size * set_use_length,
        label_id=0,
        is_real_example=False,
        guid="padding")

  label_map = {}
  for (i, label) in enumerate(label_list):
    label_map[label] = i

  input_ids = [2] + list(map(int, example.text.split()))

  if len(input_ids) > max_seq_length - 1:
      input_ids = input_ids[0:(max_seq_length - 1)]
  else:
      input_ids += [0] * (max_seq_length - 1 - len(input_ids))
  input_ids.append(3)

  segment_ids = []
  input_mask = []
  for input_id in input_ids:
    segment_ids.append(0)
    if (input_id == 0):
      input_mask.append(0)
    else:
      input_mask.append(1)


  assert len(input_ids) == max_seq_length
  assert len(input_mask) == max_seq_length
  assert len(segment_ids) == max_seq_length

  if len(example.use1) > set_use_length:
      example.use1 = example.use1[:set_use_length]
  if len(example.use2) > set_use_length:
      example.use2 = example.use2[:set_use_length]

  use1_num = len(example.use1)
  use1_index = [1] * hidden_size * use1_num + [0] * hidden_size  * (set_use_length - use1_num)
  use2_num = len(example.use2)
  use2_index = [1] * hidden_size  * use2_num + [0] * hidden_size  * (set_use_length - use2_num)
  example.use1 += [0] * (set_use_length - use1_num)
  example.use2 += [0] * (set_use_length - use2_num)
  if use1_num == 0:
      use1_num = 1
  if use2_num == 0:
      use2_num = 1

  label_id = label_map[example.label]
  if ex_index < 5:
    tf.logging.info("*** Example ***")
    tf.logging.info("guid: %s" % (example.guid))
    tf.logging.info("input_ids: %s" % " ".join([str(x) for x in input_ids]))
    tf.logging.info("input_mask: %s" % " ".join([str(x) for x in input_mask]))
    tf.logging.info("segment_ids: %s" % " ".join([str(x) for x in segment_ids]))
    tf.logging.info("label: %s (id = %d)" % (example.label, label_id))

  feature = InputFeatures(
      input_ids=input_ids,
      input_mask=input_mask,
      segment_ids=segment_ids,
      label_id=label_id,
      def1=example.def1,
      use1=example.use1,
      use1_num=use1_num,
      use1_index=use1_index,
      def2=example.def2,
      use2=example.use2,
      use2_num=use2_num,
      use2_index=use2_index,
      is_real_example=True,
      guid=example.guid)
  return feature


def file_based_convert_examples_to_features(
    examples, label_list, max_seq_length, output_file, hidden_size):
  """Convert a set of `InputExample`s to a TFRecord file."""

  writer = tf.python_io.TFRecordWriter(output_file)

  for (ex_index, example) in enumerate(examples):
    if ex_index % 10000 == 0:
      tf.logging.info("Writing example %d of %d" % (ex_index, len(examples)))

    feature = convert_single_example(ex_index, example, label_list,
                                     max_seq_length, hidden_size)

    def create_int_feature(values):
      f = tf.train.Feature(int64_list=tf.train.Int64List(value=list(values)))
      return f

    features = collections.OrderedDict()
    features["input_ids"] = create_int_feature(feature.input_ids)
    features["input_mask"] = create_int_feature(feature.input_mask)
    features["segment_ids"] = create_int_feature(feature.segment_ids)
    features["label_ids"] = create_int_feature([feature.label_id])
    features["def1"] = create_int_feature([feature.def1])
    features["def2"] = create_int_feature([feature.def2])
    features["use1"] = create_int_feature(feature.use1)
    features["use2"] = create_int_feature(feature.use2)
    features["use1_num"] = create_int_feature([feature.use1_num])
    features["use2_num"] = create_int_feature([feature.use2_num])
    features["use1_index"] = create_int_feature(feature.use1_index)
    features["use2_index"] = create_int_feature(feature.use2_index)
    features["is_real_example"] = create_int_feature(
        [int(feature.is_real_example)])
    features["guid"] = tf.train.Feature(
        bytes_list=tf.train.BytesList(value=[feature.guid.encode()]))

    tf_example = tf.train.Example(features=tf.train.Features(feature=features))
    writer.write(tf_example.SerializeToString())
  writer.close()



def file_based_input_fn_builder(input_file, seq_length, is_training,
                                drop_remainder, hidden_size):
  """Creates an `input_fn` closure to be passed to TPUEstimator."""

  name_to_features = {
      "input_ids": tf.FixedLenFeature([seq_length], tf.int64),
      "input_mask": tf.FixedLenFeature([seq_length], tf.int64),
      "segment_ids": tf.FixedLenFeature([seq_length], tf.int64),
      "label_ids": tf.FixedLenFeature([], tf.int64),
      "def1": tf.FixedLenFeature([], tf.int64),
      "def2": tf.FixedLenFeature([], tf.int64),
      "use1": tf.FixedLenFeature([set_use_length],tf.int64),
      "use2": tf.FixedLenFeature([set_use_length],tf.int64),
      "use1_num": tf.FixedLenFeature([], tf.int64),
      "use2_num": tf.FixedLenFeature([], tf.int64),
      "use1_index": tf.FixedLenFeature([set_use_length * hidden_size],tf.int64),
      "use2_index": tf.FixedLenFeature([set_use_length * hidden_size],tf.int64),
      "is_real_example": tf.FixedLenFeature([], tf.int64),
  }

  def _decode_record(record, name_to_features):
    """Decodes a record to a TensorFlow example."""
    example = tf.parse_single_example(record, name_to_features)

    # tf.Example only supports tf.int64, but the TPU only supports tf.int32.
    # So cast all int64 to int32.
    for name in list(example.keys()):
      t = example[name]
      if t.dtype == tf.int64:
        t = tf.to_int32(t)
      example[name] = t

    return example

  def input_fn(params):
    """The actual input function."""
    batch_size = params["batch_size"]

    # For training, we want a lot of parallel reading and shuffling.
    # For eval, we want no shuffling and parallel reading doesn't matter.
    d = tf.data.TFRecordDataset(input_file)
    if is_training:
      d = d.shuffle(buffer_size=100)
      d = d.repeat(2)

    d = d.apply(
        tf.data.experimental.map_and_batch(
            lambda record: _decode_record(record, name_to_features),
            batch_size=batch_size,
            drop_remainder=drop_remainder))

    return d

  return input_fn


def create_model(bert_config, is_training, input_ids, input_mask, segment_ids,
                 labels, num_labels, def1, def2, use1, use2, use1_num, use2_num, use1_index, use2_index, use_one_hot_embeddings, mode):
                 # labels, num_labels, use_one_hot_embeddings, batch_id):
  """Creates a classification model."""
  model = modeling.BertModel(
    config=bert_config,
    is_training=is_training,
    input_ids=input_ids,
    input_mask=input_mask,
    token_type_ids=segment_ids,
    use_one_hot_embeddings=use_one_hot_embeddings)

  # matrix: float Tensor of shape [batch_size, seq_length, hidden_size]
  matrix = model.get_sequence_output()
  batch_size = matrix.get_shape().as_list()[0]
  # batch_size = matrix.shape[0]
  hidden_size = matrix.shape[-1]
  if batch_size == None:
    batch_size = FLAGS.predict_batch_size
  output_weights = tf.get_variable("output_weights", [2, 2*2*hidden_size], initializer=tf.truncated_normal_initializer(stddev=0.02))
  output_bias = tf.get_variable("output_bias", [2], initializer=tf.zeros_initializer())

  #  Use contrastive loss
  with tf.variable_scope("loss"):
    max_seq_length = FLAGS.max_seq_length

    index = tf.constant([i for i in range(batch_size)])
    def_a = tf.stack([index,def1], axis = 0)
    def_a = tf.transpose(def_a)
    def_a = tf.gather_nd(matrix,def_a)
    def_b = tf.stack([index,def2], axis = 0)
    def_b = tf.transpose(def_b)
    def_b = tf.gather_nd(matrix,def_b)
    def_a = tf.debugging.check_numerics(def_a,message='def_a is nan')
    def_b = tf.debugging.check_numerics(def_b,message='def_b is nan')

    gather_a = tf.gather(matrix,use1,axis=1)
    gather_b = tf.gather(matrix,use2,axis=1)
    index_for_use = [[i,i] for i in range(batch_size)]
    gather_a = tf.gather_nd(gather_a,index_for_use)
    gather_b = tf.gather_nd(gather_b,index_for_use)

    use1_index = tf.reshape(use1_index, shape = (batch_size, set_use_length, bert_config.hidden_size))
    use2_index = tf.reshape(use2_index, shape = (batch_size, set_use_length, bert_config.hidden_size))
    mask_a = tf.multiply(gather_a,tf.cast(use1_index,tf.float32))
    mask_b = tf.multiply(gather_b,tf.cast(use2_index,tf.float32))
    sum_a = tf.reduce_sum(mask_a,axis = 1)
    sum_b = tf.reduce_sum(mask_b,axis = 1)
    use1_num = tf.expand_dims(tf.cast(use1_num, tf.float32), axis=-1)
    use2_num = tf.expand_dims(tf.cast(use2_num, tf.float32), axis=-1)
    avg_a = tf.math.divide(sum_a,use1_num)
    avg_b = tf.math.divide(sum_b,use2_num)

    hid_a = tf.keras.layers.concatenate([def_a, avg_a])
    hid_b = tf.keras.layers.concatenate([def_b, avg_b])
    hid_a = tf.debugging.check_numerics(hid_a,'hid_a is nan')
    hid_b = tf.debugging.check_numerics(hid_b,'hid_b is nan')

    concat_a_b = tf.concat([hid_a,hid_b],axis=1)
    tf.logging.info("concat_a_b.shape = %s, should be [batch_size,hidden_size*2*2]", concat_a_b.shape)

    logits = tf.matmul(concat_a_b,output_weights,transpose_b=True)
    tf.logging.info("logits.shape = %s, should be [batch_size,2]", logits.shape)
    logits = tf.nn.bias_add(logits,output_bias)
    probabilities = tf.nn.softmax(logits, axis=-1)
    log_probs = tf.nn.log_softmax(logits, axis=-1)
    one_hot_labels = tf.one_hot(labels, depth=num_labels, dtype=tf.float32)
    per_example_loss = -tf.reduce_sum(one_hot_labels * log_probs, axis=-1)
    loss = tf.reduce_mean(per_example_loss)
    return (loss, per_example_loss, logits, probabilities)


def model_fn_builder(bert_config, num_labels, init_checkpoint, learning_rate,
                     num_train_steps, num_warmup_steps, use_tpu,
                     use_one_hot_embeddings):
  """Returns `model_fn` closure for TPUEstimator."""

  def model_fn(features, labels, mode, params):  # pylint: disable=unused-argument
    """The `model_fn` for TPUEstimator."""

    tf.logging.info("*** Features ***")
    for name in sorted(features.keys()):
      tf.logging.info("  name = %s, shape = %s" % (name, features[name].shape))

    input_ids = features["input_ids"]
    input_mask = features["input_mask"]
    segment_ids = features["segment_ids"]
    label_ids = features["label_ids"]
    def1 = features["def1"]
    def2 = features["def2"]
    use1 = features["use1"]
    use2 = features["use2"]
    use1_num = features["use1_num"]
    use2_num = features["use2_num"]
    use1_index = features["use1_index"]
    use2_index = features["use2_index"]

    is_real_example = None
    if "is_real_example" in features:
      is_real_example = tf.cast(features["is_real_example"], dtype=tf.float32)
    else:
      is_real_example = tf.ones(tf.shape(label_ids), dtype=tf.float32)

    is_training = (mode == tf.estimator.ModeKeys.TRAIN)


    (total_loss, per_example_loss, logits, probabilities) = create_model(
        bert_config, is_training, input_ids, input_mask, segment_ids, label_ids,
        num_labels, def1, def2, use1, use2, use1_num, use2_num, use1_index, use2_index, use_one_hot_embeddings, mode)


    tvars = tf.trainable_variables()
    initialized_variable_names = {}
    scaffold_fn = None
    if init_checkpoint:
      (assignment_map, initialized_variable_names
      ) = modeling.get_assignment_map_from_checkpoint(tvars, init_checkpoint)
      if use_tpu:

        def tpu_scaffold():
          tf.train.init_from_checkpoint(init_checkpoint, assignment_map)
          return tf.train.Scaffold()

        scaffold_fn = tpu_scaffold
      else:
        tf.train.init_from_checkpoint(init_checkpoint, assignment_map)

    tf.logging.info("**** Trainable Variables ****")
    for var in tvars:
      init_string = ""
      if var.name in initialized_variable_names:
        init_string = ", *INIT_FROM_CKPT*"
      tf.logging.info("  name = %s, shape = %s%s", var.name, var.shape,
                      init_string)

    output_spec = None
    if mode == tf.estimator.ModeKeys.TRAIN:

      train_op = optimization.create_optimizer(
          total_loss, learning_rate, num_train_steps, num_warmup_steps, use_tpu)

      output_spec = tf.estimator.tpu.TPUEstimatorSpec(
          mode=mode,
          loss=total_loss,
          train_op=train_op,
          scaffold_fn=scaffold_fn)
    elif mode == tf.estimator.ModeKeys.EVAL:

      def metric_fn(per_example_loss, label_ids, logits, is_real_example):
        predictions = tf.argmax(logits, axis=-1, output_type=tf.int32)
        accuracy = tf.metrics.accuracy(
            labels=label_ids, predictions=predictions, weights=is_real_example)
        loss = tf.metrics.mean(values=per_example_loss, weights=is_real_example)
        return {
            "eval_accuracy": accuracy,
            "eval_loss": loss,
        }

      eval_metrics = (metric_fn,
                      [per_example_loss, label_ids, logits, is_real_example])
      output_spec = tf.estimator.tpu.TPUEstimatorSpec(
          mode=mode,
          loss=total_loss,
          eval_metrics=eval_metrics,
          scaffold_fn=scaffold_fn)
    else:
      output_spec = tf.estimator.tpu.TPUEstimatorSpec(
          mode=mode,
          predictions={"probabilities": probabilities},
          scaffold_fn=scaffold_fn)
    return output_spec

  return model_fn


def main(_):
  tf.compat.v1.logging.set_verbosity(tf.compat.v1.logging.INFO)

  processors = {
      "cubert": CubertProcessor,
  }

  if not FLAGS.do_train and not FLAGS.do_eval and not FLAGS.do_predict:
    raise ValueError(
        "At least one of `do_train`, `do_eval` or `do_predict' must be True.")

  bert_config = modeling.BertConfig.from_json_file(FLAGS.bert_config_file)

  if FLAGS.max_seq_length > bert_config.max_position_embeddings:
    raise ValueError(
        "Cannot use sequence length %d because the BERT model "
        "was only trained up to sequence length %d" %
        (FLAGS.max_seq_length, bert_config.max_position_embeddings))

  tf.io.gfile.makedirs(FLAGS.output_dir)

  task_name = FLAGS.task_name.lower()

  if task_name not in processors:
    raise ValueError("Task not found: %s" % (task_name))

  processor = processors[task_name]()

  label_list = processor.get_labels()

  tpu_cluster_resolver = None
  if FLAGS.use_tpu and FLAGS.tpu_name:
    tpu_cluster_resolver = tf.distribute.cluster_resolver.TPUClusterResolver(
        FLAGS.tpu_name, zone=FLAGS.tpu_zone, project=FLAGS.gcp_project)

  is_per_host = tf.estimator.tpu.InputPipelineConfig.PER_HOST_V2
  run_config = tf.estimator.tpu.RunConfig(
      cluster=tpu_cluster_resolver,
      master=FLAGS.master,
      model_dir=FLAGS.output_dir,
      save_checkpoints_steps=FLAGS.save_checkpoints_steps,
      tpu_config=tf.estimator.tpu.TPUConfig(
          iterations_per_loop=FLAGS.iterations_per_loop,
          num_shards=FLAGS.num_tpu_cores,
          per_host_input_for_training=is_per_host))

  train_examples = None
  num_train_steps = None
  num_warmup_steps = None
  if FLAGS.do_train:
    train_examples = processor.get_train_examples(FLAGS.data_dir)
    num_train_steps = int(
        len(train_examples) / FLAGS.train_batch_size * FLAGS.num_train_epochs)
    num_warmup_steps = int(num_train_steps * FLAGS.warmup_proportion)

  model_fn = model_fn_builder(
      bert_config=bert_config,
      num_labels=len(label_list),
      init_checkpoint=FLAGS.init_checkpoint,
      learning_rate=FLAGS.learning_rate,
      num_train_steps=num_train_steps,
      num_warmup_steps=num_warmup_steps,
      use_tpu=FLAGS.use_tpu,
      use_one_hot_embeddings=FLAGS.use_tpu)

  # If TPU is not available, this will fall back to normal Estimator on CPU
  # or GPU.
  estimator = tf.estimator.tpu.TPUEstimator(
      use_tpu=FLAGS.use_tpu,
      model_fn=model_fn,
      config=run_config,
      train_batch_size=FLAGS.train_batch_size,
      eval_batch_size=FLAGS.eval_batch_size,
      predict_batch_size=FLAGS.predict_batch_size)

  start = timer()
  print("before train: train_margin = {},eval_margin = {}, pred_margin = {},eval_margin_min = {},eval_margin_max= {}".format(FLAGS.train_margin,FLAGS.eval_margin,FLAGS.pred_margin,FLAGS.eval_margin_min,FLAGS.eval_margin_max))
  if FLAGS.do_train:
    train_file = os.path.join(FLAGS.output_dir, "train.tf_record")
    file_based_convert_examples_to_features(
        train_examples, label_list, FLAGS.max_seq_length, train_file, bert_config.hidden_size)
    tf.logging.info("***** Running training *****")
    tf.logging.info("  Num examples = %d", len(train_examples))
    tf.logging.info("  Batch size = %d", FLAGS.train_batch_size)
    tf.logging.info("  Num steps = %d", num_train_steps)
    train_input_fn = file_based_input_fn_builder(
        input_file=train_file,
        seq_length=FLAGS.max_seq_length,
        is_training=True,
        drop_remainder=True,
        hidden_size = bert_config.hidden_size)
    estimator.train(input_fn=train_input_fn, max_steps=num_train_steps)

  print("after train: train_margin = {},eval_margin = {}, pred_margin = {},eval_margin_min = {},eval_margin_max= {}".format(FLAGS. train_margin,FLAGS.eval_margin,FLAGS.pred_margin,FLAGS.eval_margin_min,FLAGS.eval_margin_max))
  if FLAGS.do_eval:
    eval_examples = processor.get_dev_examples(FLAGS.data_dir)
    num_actual_eval_examples = len(eval_examples)
    # if FLAGS.use_tpu:
      # TPU requires a fixed batch size for all batches, therefore the number
      # of examples must be a multiple of the batch size, or else examples
      # will get dropped. So we pad with fake examples which are ignored
      # later on. These do NOT count towards the metric (all tf.metrics
      # support a per-instance weight, and these get a weight of 0.0).
    while len(eval_examples) % FLAGS.eval_batch_size != 0:
      eval_examples.append(PaddingInputExample())

    eval_file = os.path.join(FLAGS.output_dir, "eval.tf_record")
    file_based_convert_examples_to_features(
        eval_examples, label_list, FLAGS.max_seq_length, eval_file, bert_config.hidden_size)

    tf.logging.info("***** Running evaluation *****")
    tf.logging.info("  Num examples = %d (%d actual, %d padding)",
                    len(eval_examples), num_actual_eval_examples,
                    len(eval_examples) - num_actual_eval_examples)
    tf.logging.info("  Batch size = %d", FLAGS.eval_batch_size)

    # This tells the estimator to run through the entire set.
    eval_steps = None
    # However, if running eval on the TPU, you will need to specify the
    # number of steps.
    if FLAGS.use_tpu:
      assert len(eval_examples) % FLAGS.eval_batch_size == 0
      eval_steps = int(len(eval_examples) // FLAGS.eval_batch_size)

    eval_drop_remainder = True if FLAGS.use_tpu else False
    eval_input_fn = file_based_input_fn_builder(
        input_file=eval_file,
        seq_length=FLAGS.max_seq_length,
        is_training=False,
        drop_remainder=eval_drop_remainder,
        hidden_size = bert_config.hidden_size)


    print("eval_margin_max = ",FLAGS.eval_margin_max)
    print("eval_margin_min = ",FLAGS.eval_margin_min)
    output_eval_file = os.path.join(FLAGS.output_dir, "eval_results.txt")
    if not(FLAGS.train_for_margin):
        result = estimator.evaluate(input_fn=eval_input_fn, steps=eval_steps)
        with tf.gfile.GFile(output_eval_file, "w") as writer:
          tf.logging.info("***** Eval results *****")
          for key in sorted(result.keys()):
            tf.logging.info("  %s = %s", key, str(result[key]))
            writer.write("%s = %s\n" % (key, str(result[key])))
    else:
        margin_list = []
        for i in range(20):
            FLAGS.eval_margin = FLAGS.eval_margin_min + (FLAGS.eval_margin_max - FLAGS.eval_margin_min) / 19 * i
            print("eval_margin = ",FLAGS.eval_margin)
            result = estimator.evaluate(input_fn=eval_input_fn, steps=eval_steps)
            print("in iteration i = {}, eval_margin = {}".format(i, FLAGS.eval_margin))
            with tf.gfile.GFile(output_eval_file, "a") as writer:
              tf.logging.info("***** Eval results *****")
              writer.write("In iteration %s, eval_margin = %s\n" % (str(i),str(FLAGS.eval_margin)))
              for key in sorted(result.keys()):
                tf.logging.info("  %s = %s", key, str(result[key]))
                writer.write("%s = %s\n" % (key, str(result[key])))
                if(key == 'eval_accuracy'):
                    margin_list.append(result[key])
        print("margin_list = ", margin_list)
        print("the margin to get the max eval_accuracy is {}, the max eval_accuracy score is {}".format(FLAGS.eval_margin_min +   (FLAGS.eval_margin_max-FLAGS.eval_margin_min) / 19 * margin_list.index(max(margin_list)), max(margin_list)))

  print("before predict: train_margin = {},eval_margin = {}, pred_margin = {},eval_margin_min = {},eval_margin_max= {}".format(FLAGS.train_margin,FLAGS.eval_margin,FLAGS.pred_margin,FLAGS.eval_margin_min,FLAGS.eval_margin_max))
  if FLAGS.do_predict:
    predict_examples = processor.get_test_examples(FLAGS.data_dir)
    num_actual_predict_examples = len(predict_examples)
    # if FLAGS.use_tpu:
      # TPU requires a fixed batch size for all batches, therefore the number
      # of examples must be a multiple of the batch size, or else examples
      # will get dropped. So we pad with fake examples which are ignored
      # later on.
    while len(predict_examples) % FLAGS.predict_batch_size != 0:
      predict_examples.append(PaddingInputExample())

    predict_file = os.path.join(FLAGS.output_dir, "predict.tf_record")
    file_based_convert_examples_to_features(predict_examples, label_list,
                                            FLAGS.max_seq_length,
                                            predict_file, bert_config.hidden_size)

    tf.logging.info("***** Running prediction*****")
    tf.logging.info("  Num examples = %d (%d actual, %d padding)",
                    len(predict_examples), num_actual_predict_examples,
                    len(predict_examples) - num_actual_predict_examples)
    tf.logging.info("  Batch size = %d", FLAGS.predict_batch_size)

    predict_drop_remainder = True if FLAGS.use_tpu else False
    predict_input_fn = file_based_input_fn_builder(
        input_file=predict_file,
        seq_length=FLAGS.max_seq_length,
        is_training=False,
        drop_remainder=predict_drop_remainder,
        hidden_size = bert_config.hidden_size)

    result = estimator.predict(input_fn=predict_input_fn)

    output_predict_file = os.path.join(FLAGS.output_dir, "test_results.tsv")
    if FLAGS.print_margin:
        with tf.gfile.GFile(output_predict_file, "w") as writer:
            num_written_lines = 0
            tf.logging.info("***** Predict results *****")
            for (i, prediction) in enumerate(result):
                probabilities = prediction["probabilities"]
                if i >= num_actual_predict_examples:
                    break
                output_line = str(probabilities) + "\n"
                writer.write(output_line)
                num_written_lines += 1
            assert num_written_lines == num_actual_predict_examples
    else:
        with tf.gfile.GFile(output_predict_file, "w") as writer:
            num_written_lines = 0
            tf.logging.info("***** Predict results *****")
            for (i, prediction) in enumerate(result):
                probabilities = prediction["probabilities"]
                if i >= num_actual_predict_examples:
                    break
                output_line = "\t".join(str(class_probability) for class_probability in probabilities) + "\n"
                writer.write(output_line)
                num_written_lines += 1
            assert num_written_lines == num_actual_predict_examples
  end = timer()
  print("time used:",str(timedelta(seconds=end-start)))

if __name__ == "__main__":
  flags.mark_flag_as_required("data_dir")
  flags.mark_flag_as_required("output_dir")
  flags.mark_flag_as_required("task_name")
  flags.mark_flag_as_required("bert_config_file")
  tf.compat.v1.app.run()
