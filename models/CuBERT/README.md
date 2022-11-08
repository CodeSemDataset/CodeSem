# CuBERT Commands

## Tokenization

```shell
python create_pretraining_data.py --vocab_file=pre_train_data/vocab.txt --input_file=pre_train_data/tkseq.txt --output_file=pre_train_data/output/data
```

## Pre-train

```shell
python run_pretraining.py --bert_config_file=bert_config.json --do_train=true --do_eval=true --output_dir=pre_trained_output --input_file=pre_train_data/output/data
```

## Fine-tune

### Equivalence Prediction
```shell
python run_tokenized_function_cross_entropy.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=fine-tune_equivalence_data --output_dir=fine-fune_equivalence_output --bert_config_file=bert_config.json init_checkpoint=pre_trained_output/model.ckpt-zzz
```
### Alias Prediction
```shell
python run_tokenized_def_use_cross_entropy.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=fine-tune_alias_data --output_dir=fine-tune_alias_output --bert_config_file=bert_config.json init_checkpoint=pre_trained_output/model.ckpt-zzz
```
or
```shell
python run_tokenized_def_cross_entropy.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=fine-tune_alias_data --output_dir=fine-tune_alias_output --bert_config_file=bert_config.json init_checkpoint=pre_trained_output/model.ckpt-zzz
```