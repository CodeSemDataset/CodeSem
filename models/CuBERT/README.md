# How to train CuBERT

## Tokenization

```shell
python create_pretraining_data.py --vocab_file=pre_train_data/vocab.txt --input_file=pre_train_data/tkseq.txt --output_file=pre_train_data/output/data
```

## Generalized Pre-train

```shell
python run_pretraining.py --bert_config_file=bert_config.json --do_train=true --do_eval=true --output_dir=pre_trained_output --input_file=pre_train_data/output/data
```

## Specialized Pre-train and Fine-tune

We take the fine-tuning stage as an example. The difference between specialized pre-training and fine-tuning is the data used.

### Equivalence Prediction

```shell
# train, evaluate, and test
python run_tokenized_function_cross_entropy.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=fine-tune_equivalence_data --output_dir=fine-tune_equivalence_output --bert_config_file=bert_config.json init_checkpoint=pre_trained_output/model.ckpt-zzz
# analysze test result
python test_measure_for_equiv.py fine-tune_equivalence_data/test.tsv fine-tune_equivalence_output/test_results.tsv
```
### Alias Prediction
```shell
# train, evaluate and test
python run_tokenized_def_use_cross_entropy.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=fine-tune_alias_data --output_dir=fine-tune_alias_output --bert_config_file=bert_config.json init_checkpoint=pre_trained_output/model.ckpt-zzz
# analysze test result
python test_measure_for_alias.py fine-tune_alias_data/test.tsv fine-tune_equivalence_output/test_results.tsv
```
or
```shell
# train, evaluate and test
python run_tokenized_def_cross_entropy.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=fine-tune_alias_data --output_dir=fine-tune_alias_output --bert_config_file=bert_config.json init_checkpoint=pre_trained_output/model.ckpt-zzz
# analysze test result
python test_measure_for_alias.py fine-tune_alias_data/test.tsv fine-tune_alias_output/test_results.tsv
```
### Anonymous Alias Prediction
```shell
# train, evaluate and test
python run_tokenized_def_use_cross_entropy_anonymous.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=fine-tune_alias_data --output_dir=fine-tune_alias_output --bert_config_file=bert_config.json init_checkpoint=pre_trained_output/model.ckpt-zzz
# analysze test result
python test_measure_for_alias.py fine-tune_alias_data/test.tsv fine-tune_equivalence_output/test_results.tsv
```
or
```shell
# train, evaluate and test
python run_tokenized_def_cross_entropy_anonymous.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=fine-tune_alias_data --output_dir=fine-tune_alias_output --bert_config_file=bert_config.json init_checkpoint=pre_trained_output/model.ckpt-zzz
# analysze test result
python test_measure_for_alias.py fine-tune_alias_data/test.tsv fine-tune_alias_output/test_results.tsv
```