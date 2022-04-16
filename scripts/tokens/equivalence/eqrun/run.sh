#!/bin/bash

# script_path=$(cd `dirname $0`; pwd) 
time=$(date "+%Y-%m-%d_%H-%M")
out_dir=output/${time}_$1_out
mkdir -p out_dir

# new src file path e.g. /bigdata/qian/alias-analysis/tmux/arguments.c
# python3 eqrun.py ../test  ~/empirical_study/tokenize/tkzrun/out_9/vocab.txt testout
python3 eqrun-pandas.py /home/qian/Downloads/empirical_study/PLDI21_model/datasets/functionally-equiv-compilable/coarse-grained/  ~/empirical_study/tokenize/tkzrun/out_9/vocab.txt $out_dir
