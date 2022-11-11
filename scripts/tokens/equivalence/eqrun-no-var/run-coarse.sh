#!/bin/bash

# script_path=$(cd `dirname $0`; pwd) 
time=$(date "+%Y-%m-%d_%Hh%Mm")
out_dir=output/${time}_coarse-grained-afterDecuplication_out
mkdir -p $out_dir

# new src file path e.g. /bigdata/qian/alias-analysis/tmux/arguments.c
# python3.7 eqrun-no-var.py /home/ruyan/empirical_study/equivalence/eqrun-no-var/csv-format-equivalence  ~/empirical_study/tokenize/tkzrun/output/out_9/vocab.txt $out_dir
# python3.7 eqrun-no-var.py input/coarse_grained_equivalence  ~/empirical_study/tokenize/tkzrun/output/out_9/vocab.txt $out_dir

python3.7 multi-eqrun.py /bigdata/newdisk/share/coarse-grained-afterDecuplication/ /bigdata/newdisk/ruyan/empirical_study/tokenize/tkzrun/output/2022-10-02_17-54_all_out_15/vocab.txt $out_dir
