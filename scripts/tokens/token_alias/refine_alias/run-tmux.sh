#!/bin/bash
#python3.7 tka2.py /home/shared/datasets ~/mytest/total1/out/vocab.txt out
# script_path=$(cd `dirname $0`; pwd) 
time=$(date "+%Y-%m-%d_%Hh%Mm")

# new src file path e.g. /bigdata/qian/alias-analysis/tmux/arguments.c
# python3.7 tka.py ../alias_pair_processed  ~/empirical_study/tokenize/tkzrun/out/vocab.txt ${time}_out 
# python3.7 tka.py ../alias-datasets-processed  ~/empirical_study/tokenize/tkzrun/out/vocab.txt ${time}_out
outdir=output/${time}_tmux_out
mkdir -p $outdir
python3.7 refine.py input/tmux  ~/empirical_study/tokenize/tkzrun/out/vocab.txt $outdir
# python3.7 refine.py input1  ~/empirical_study/tokenize/tkzrun/out/vocab.txt testout
