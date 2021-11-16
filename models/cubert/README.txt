Bert Model Commands:

---Pretrain---

Data Tokenized:
python cubert_tokenized_pretraining_data.py --vocab_file=..\vocab\vocab.txt --input_file=..\data\pretrain\pretrain.txt --output_file=..\output\pretrain\data

Pretrain:
python run_pretraining.py --bert_config_file=bert_config.json --do_train=true --do_eval=true --output_dir=..\output\pretrain\model --input_file=..\output\pretrain\data





---Function equivalency---

Assume pretrain model checkpoint is: '..\pretrain\model.ckpt-123'

1.First, run combined dataset based on pretrain model:

    1.1 Run combined_2 based on pretrain checkpoint:
    
python run_tokenized_function.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=..\data\equal\equal_dataset_combined_2 --output_dir=..\output\model_combined_2 --bert_config_file=bert_config.json init_checkpoint=..\pretrain\model.ckpt-123

Assume the last checkpoint from above command is: '..\output\model_combined_2\model.ckpt-456'

    1.2 Run combined_1 based on combined_2 checkpoint:

python run_tokenized_function.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=..\data\equal\equal_dataset_combined_1 --output_dir=..\output\model_combined_1 --bert_config_file=bert_config.json init_checkpoint=..\output\model_combined_2\model.ckpt-456

The output model is the final result.

2. Run similar commands on 1:1 ratio datasets:

python run_tokenized_function.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=..\data\equal\equal_dataset_ratio_2 --output_dir=..\output\model_ratio_2 --bert_config_file=bert_config.json init_checkpoint=..\pretrain\model.ckpt-123
    
python run_tokenized_function.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=..\data\equal\equal_dataset_ratio_1 --output_dir=..\output\model_ratio_1 --bert_config_file=bert_config.json init_checkpoint=..\output\model_ratio_2\model.ckpt-456
    
* Change the flags based on the actual file paths & pre-create the output folders
** Update the related bert config json file 





---Def&Use---
python run_tokenized_def_use.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=..\data\def_use\mysql --output_dir=..\output\def_use\mysql --bert_config_file=bert_config.json 








---Outdated---

Cubert:
python .\code_to_subtokenized_sentences_main.py --vocabulary_filepath=vocab_java.txt --input_filepath=source_code/code_1.c.test --output_filepath=output/code_1.c.json --tokenizer=java
Dataset-All:
python run_cubert_function.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=data/dataset_all --vocab_file=vocab/java.txt --output_dir=output/all --bert_config_file=bert_config.json --tokenizer=java

Function:
Dataset-Fake:
python run_cubert_function.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=data/dataset_fake --vocab_file=vocab/java.txt --output_dir=output/fake --bert_config_file=bert_config.json --tokenizer=java

Dataset-Real:
python run_cubert_function.py --task_name=cubert --do_train=true --do_eval=true --do_predict=true --data_dir=data/dataset_real --vocab_file=vocab/java.txt --output_dir=output/real --bert_config_file=bert_config.json --tokenizer=java --init_checkpoint=output/fake/model.ckpt-???

Pretrain:
Data Untokenized:
python cubert_pretraining_data.py --input_file=data/pretrain_??? --output_file=output/pretrain_??? --vocab_file=vocab/java.txt --tokenizer=java
