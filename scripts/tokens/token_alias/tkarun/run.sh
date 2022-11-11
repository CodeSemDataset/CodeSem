#!/bin/bash
#python3.7 tka2.py /home/shared/datasets ~/mytest/total1/out/vocab.txt out
# script_path=$(cd `dirname $0`; pwd) 
time=$(date "+%Y-%m-%d_%Hh%Mm")
out_dir=output/${time}_tmp-redis_out
mkdir -p $out_dir

# new src file path e.g. /bigdata/qian/alias-analysis/tmux/arguments.c
# python3.7 tka.py input  ~/empirical_study/tokenize/tkzrun/output/out_9/vocab.txt $out_dir
python3.7 tka.py /bigdata/newdisk/ruyan/empirical_study/token_alias/refine_alias/output/2022-10-11_10h31m_tmp-redis_out /bigdata/newdisk/ruyan/empirical_study/tokenize/tkzrun/output/2022-10-07_13-22_all_out_15/vocab.txt $out_dir full