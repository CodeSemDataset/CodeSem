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
from collections import Counter

from timeit import default_timer as timer
from datetime import timedelta

#tf.config.run_functions_eagerly(True)
flags = tf.flags
FLAGS = flags.FLAGS

buffer_size = 100

## Required parameters

flags.DEFINE_string(
    "input_file", None,
    "Input TF example files (can be a glob or comma separated).")

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
    "max_seq_length", 2000,
    "The maximum total input sequence length. "
    "Sequences longer than this will be truncated, and sequences shorter "
    "than this will be padded.")

flags.DEFINE_float("masked_lm_prob", 0.15, "Masked LM probability.")

flags.DEFINE_bool("do_train", False, "Whether to run training.")

flags.DEFINE_bool("do_eval", False, "Whether to run eval on the dev set.")

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

  def __init__(self, guid, text, label=None):
    self.guid = guid
    self.text = text
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
               guid,
               is_real_example=True):
    self.input_ids = input_ids
    self.input_mask = input_mask
    self.segment_ids = segment_ids
    self.label_id = label_id
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

  @classmethod
  def _read_tsv(cls, input_file, quotechar=None):
    """Reads a tab separated value file."""
    lines = []
    with open(input_file, "r") as f:
        line = f.readline()
        while line:
            line = line.strip().split('\t')
            lines.append(line)
            line = f.readline()
    del lines[0]
    print('totally read ' + str(len(lines)) + ' data.')
    return lines

    # with tf.gfile.Open(input_file, "r") as f:
    #     reader = csv.reader(f, delimiter="\t", quotechar=quotechar)
    #     for line in reader:
    #         lines.append(line)
    #     del lines[0]
    #     return lines


class CodebertProcessor(DataProcessor):
  """Processor for the MRPC data set (GLUE version)."""
  def get_train_examples(self, data_dir):
    """See base class."""
    return self._create_examples(
        self._read_tsv(data_dir), "train")

  def get_dev_examples(self, data_dir):
    """See base class."""
    return self._create_examples(
        self._read_tsv(data_dir), "dev")

  def _create_examples(self, lines, set_type):
    """Creates examples for the training and dev sets."""
    examples = []
    for (i, line) in enumerate(lines):
      text = line[0]
      label = line[1]
      guid = "%s-%s" % (set_type, i)
      examples.append(
          InputExample(guid=guid, text=text, label=label))
    return examples


def convert_single_example(ex_index, example, max_seq_length):
  """Converts a single `InputExample` into a single `InputFeatures`."""

  if isinstance(example, PaddingInputExample):
    return InputFeatures(
        input_ids=[0] * max_seq_length,
        input_mask=[0] * max_seq_length,
        segment_ids=[0] * max_seq_length,
        label_id=[0] * max_seq_length,
        is_real_example=False,
        guid="padding")

  # use CLS and SEP, and set 1 for corresponding label position
  input_ids = [2] + list(map(int, example.text.split()))
  label_id = [1] + list(map(int, example.label.split()))
  if len(input_ids) > max_seq_length - 1:
      input_ids = input_ids[0:(max_seq_length - 1)]
      label_id = label_id[0:(max_seq_length - 1)]
  else:
      input_ids += [0] * (max_seq_length - 1 - len(input_ids))
      label_id += [0] * (max_seq_length - 1 - len(label_id))
  input_ids.append(3)
  label_id.append(1)

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
  assert len(label_id) == max_seq_length

  if ex_index < 5:
    tf.logging.info("*** Example ***")
    tf.logging.info("guid: %s" % (example.guid))
    tf.logging.info("input_ids: %s" % " ".join([str(x) for x in input_ids]))
    tf.logging.info("input_mask: %s" % " ".join([str(x) for x in input_mask]))
    tf.logging.info("segment_ids: %s" % " ".join([str(x) for x in segment_ids]))
    tf.logging.info("label: %s" % " ".join([str(x) for x in label_id]))

  feature = InputFeatures(
      input_ids=input_ids,
      input_mask=input_mask,
      segment_ids=segment_ids,
      label_id=label_id,
      is_real_example=True,
      guid=example.guid)
  return feature


def file_based_convert_examples_to_features(
    examples, max_seq_length, output_file):
  """Convert a set of `InputExample`s to a TFRecord file."""

  writer = tf.python_io.TFRecordWriter(output_file)

  for (ex_index, example) in enumerate(examples):
    if ex_index % 10000 == 0:
      tf.logging.info("Writing example %d of %d" % (ex_index, len(examples)))

    feature = convert_single_example(ex_index, example, max_seq_length)

    def create_int_feature(values):
      f = tf.train.Feature(int64_list=tf.train.Int64List(value=list(values)))
      return f

    features = collections.OrderedDict()
    features["input_ids"] = create_int_feature(feature.input_ids)
    features["input_mask"] = create_int_feature(feature.input_mask)
    features["segment_ids"] = create_int_feature(feature.segment_ids)
    features["label_ids"] = create_int_feature(feature.label_id)
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
      "label_ids": tf.FixedLenFeature([seq_length], tf.int64),
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

    d = d.apply(
        tf.data.experimental.map_and_batch(
            lambda record: _decode_record(record, name_to_features),
            batch_size=batch_size,
            drop_remainder=drop_remainder))

    return d

  return input_fn


def create_model(bert_config, is_training, input_ids, input_mask, segment_ids,
                 labels, use_one_hot_embeddings, mode):
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

  output_weights = tf.get_variable("output_weights", [hidden_size, 2],
                                     initializer=tf.truncated_normal_initializer(stddev=0.02))
  output_bias = tf.get_variable("output_bias", [2], initializer=tf.zeros_initializer())
  # Use contrastive loss
  with tf.variable_scope("loss"):
    max_seq_length = FLAGS.max_seq_length
    logits = tf.matmul(matrix, output_weights)
    logits = tf.nn.bias_add(logits, output_bias)
    probabilities = tf.nn.softmax(logits, axis=-1)
    log_probs = tf.nn.log_softmax(logits, axis=-1)
    orig_pred_prob = tf.gather(log_probs, [1], axis=-1)
    labels = tf.cast(labels, tf.float32)
    labels = tf.expand_dims(labels, axis=-1)
    per_example_loss = orig_pred_prob * labels + (1 - labels) * (1 - orig_pred_prob)
    loss = -tf.reduce_sum(per_example_loss)
    return (loss, per_example_loss, logits, probabilities)


def model_fn_builder(bert_config, init_checkpoint, learning_rate,
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

    is_real_example = None
    if "is_real_example" in features:
      is_real_example = tf.cast(features["is_real_example"], dtype=tf.float32)
    else:
      is_real_example = tf.ones(tf.shape(label_ids), dtype=tf.float32)

    is_training = (mode == tf.estimator.ModeKeys.TRAIN)


    (total_loss, per_example_loss, logits, probabilities) = create_model(
        bert_config, is_training, input_ids, input_mask, segment_ids, label_ids,
        use_one_hot_embeddings, mode)


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

      is_real_example = tf.expand_dims(is_real_example, -1)
      is_real_example = tf.tile(is_real_example, [1, bert_config.hidden_size])
      is_real_example = tf.expand_dims(is_real_example, -1)
      eval_metrics = (metric_fn,
                      [per_example_loss, label_ids, logits, is_real_example])
      output_spec = tf.estimator.tpu.TPUEstimatorSpec(
          mode=mode,
          loss=total_loss,
          eval_metrics=eval_metrics,
          scaffold_fn=scaffold_fn)
    else:
      raise ValueError("Only TRAIN and EVAL modes are supported: %s" % (mode))
    return output_spec

  return model_fn


def main(_):
  tf.compat.v1.logging.set_verbosity(tf.compat.v1.logging.INFO)

  processors = {
      "codebert": CodebertProcessor,
  }

  if not FLAGS.do_train and not FLAGS.do_eval:
    raise ValueError(
        "At least one of `do_train` or `do_eval` must be True.")

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
    train_examples = processor.get_train_examples(FLAGS.input_file)
    print(len(train_examples))
    num_train_steps = int(
        len(train_examples) / FLAGS.train_batch_size * FLAGS.num_train_epochs)
    num_warmup_steps = int(num_train_steps * FLAGS.warmup_proportion)

  model_fn = model_fn_builder(
      bert_config=bert_config,
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
  if FLAGS.do_train:
    train_file = os.path.join(FLAGS.output_dir, "train.tf_record")
    file_based_convert_examples_to_features(
        train_examples, FLAGS.max_seq_length, train_file)
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

  if FLAGS.do_eval:
    eval_examples = processor.get_dev_examples(FLAGS.input_file)
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
        eval_examples, FLAGS.max_seq_length, eval_file)

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

    output_eval_file = os.path.join(FLAGS.output_dir, "eval_results.txt")
    result = estimator.evaluate(input_fn=eval_input_fn, steps=eval_steps)
    with tf.gfile.GFile(output_eval_file, "w") as writer:
        tf.logging.info("***** Eval results *****")
        for key in sorted(result.keys()):
            tf.logging.info("  %s = %s", key, str(result[key]))
            writer.write("%s = %s\n" % (key, str(result[key])))
  end = timer()
  print("time used:",str(timedelta(seconds=end-start)))

if __name__ == "__main__":
  flags.mark_flag_as_required("input_file")
  flags.mark_flag_as_required("output_dir")
  flags.mark_flag_as_required("task_name")
  flags.mark_flag_as_required("bert_config_file")
  tf.compat.v1.app.run()
