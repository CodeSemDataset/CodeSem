#!/bin/bash

# script_path=$(cd `dirname $0`; pwd) 
time=$(date "+%Y-%m-%d_%H-%M")
out_dir=output/${time}_$1_out
mkdir -p out_dir

# new src file path e.g. /bigdata/qian/alias-analysis/tmux/arguments.c
# python3.7 eqrun-no-var.py /home/ruyan/empirical_study/equivalence/eqrun-no-var/csv-format-equivalence  ~/empirical_study/tokenize/tkzrun/out_9/vocab.txt $out_dir
python3.7 eqrun-no-var.py ../input  ~/empirical_study/tokenize/tkzrun/out_9/vocab.txt $out_dir
