# Graph Sandwiches model for alias prediction

## Generalized Pre-train

```shell
python SandwichDef.py -p 2 --pre_train
```

## Specialized Pre-train and Fine-tune
We take the fine-tuning stage as an example. The difference between specialized pre-training and fine-tuning is the data used.
```shell
# train the model
python SandwichDef.py -p 2 --pre_trained_model xxxx.pickle
# test the model
python SandwichDef.py -p 2 -r yyyy.pickle -tf test_file.json
```
training arguments:  
```
-p: percentage of test batch(1-9)
```
testing arguments:  
```
-r: restore model parameters
-tf: the test file path
```
## Anonymous
```shell
# train the model
python SandwichDef_anonymous.py -p 2 --pre_trained_model xxxx.pickle
# test the model
python SandwichDef_anonymous.py -p 2 -r yyyy.pickle -tf test_file.json
```