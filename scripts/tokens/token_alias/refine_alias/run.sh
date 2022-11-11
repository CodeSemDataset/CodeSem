#!/bin/bash

# script_path=$(cd `dirname $0`; pwd) 
time=$(date "+%Y-%m-%d_%Hh%Mm")

out_dir=output/${time}_$1_out
mkdir -p $out_dir
python3.7 refine.py $2 /bigdata/newdisk/ruyan/empirical_study/tokenize/tkzrun/output/2022-10-07_13-22_all_out_15/vocab.txt $out_dir full
# python3.7 refine.py testin  /bigdata/newdisk/ruyan/empirical_study/tokenize/tkzrun/output/2022-10-07_13-22_all_out_15/vocab.txt testout
