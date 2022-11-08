# CuBert Commands

## Tokenization

```
python create_pretraining_data.py --vocab_file=pre_train_data/vocab.txt --input_file=pre_train_data/tkseq.txt --output_file=pre_train_data/output/data
```

## Pre-train

### local-level pre-train

```
python run_pretraining.py --bert_config_file=bert_config.json --do_train=true --do_eval=true --output_dir=pre_trained_output --input_file=pre_train_data/output/data
```

### global-level pre-train

- equivalence prediction
```
python run_tokenized_function_contrastive_loss.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=coarse-grained_equivalence --output_dir=coarse-grained_equivalence_output --bert_config_file=bert_config.json init_checkpoint=xxx
```
- alias prediction
```
python run_tokenized_def_use_contrastive_loss.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=coarse-grained_equivalence --output_dir=coarse-grained_alias_output --bert_config_file=bert_config.json init_checkpoint=xxx
```
or
```
python run_tokenized_def_contrastive_loss.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=coarse-grained_equivalence --output_dir=coarse-grained_alias_output --bert_config_file=bert_config.json init_checkpoint=xxx
```
## Fine-tune

### Equivalence Prediction
```
python run_tokenized_function_cross_entropy.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=fine-grained_equivalence --output_dir=fine-grained_equivalence_output --bert_config_file=bert_config.json init_checkpoint=yyy
```
### Alias Prediction
```
python run_tokenized_def_use_cross_entropy.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=fine-grained_alias --output_dir=fine-grained_alias_output --bert_config_file=bert_config.json init_checkpoint=zzz
```
or
```
python run_tokenized_def_cross_entropy.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=fine-grained_alias --output_dir=fine-grained_alias_output --bert_config_file=bert_config.json init_checkpoint=zzz
```