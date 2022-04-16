#!/bin/bash
#python3.7 tka2.py /home/shared/datasets ~/mytest/total1/out/vocab.txt out
# script_path=$(cd `dirname $0`; pwd) 
time=$(date "+%Y-%m-%d_%Hh%Mm")
out_dir=output/${time}_$1_out
mkdir -p out_dir

# new src file path e.g. /bigdata/qian/alias-analysis/tmux/arguments.c
# python3.7 tka.py ../alias_pair_processed  ~/empirical_study/tokenize/tkzrun/out/vocab.txt ${time}_out 
# python3.7 tka.py ../alias-datasets-processed  ~/empirical_study/tokenize/tkzrun/out/vocab.txt ${time}_out
# python3.7 tka.py ../refine_csv/2022-03-05_09-43_out_empty_neq  ~/empirical_study/tokenize/tkzrun/out_9/vocab.txt $out_dir
# python3.7 tka.py input  ~/empirical_study/tokenize/tkzrun/out_9/vocab.txt $out_dir
python3.7 tka-speed.py input/all  ~/empirical_study/tokenize/tkzrun/out_9/vocab.txt $out_dir
