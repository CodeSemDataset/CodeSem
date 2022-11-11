#!/bin/bash

# script_path=$(cd `dirname $0`; pwd) 
time=$(date "+%Y-%m-%d_%Hh%Mm")

outdir=output/${time}_coarse_out
mkdir -p $outdir
python3.7 refine.py /bigdata/newdisk/share/alias-data/coarse /bigdata/newdisk/ruyan/empirical_study/tokenize/tkzrun/output/2022-10-07_13-22_all_out_15/vocab.txt $outdir full

outdir=output/${time}_finetune_out
mkdir -p $outdir
python3.7 refine.py /bigdata/newdisk/share/alias-data/finetune /bigdata/newdisk/ruyan/empirical_study/tokenize/tkzrun/output/2022-10-07_13-22_all_out_15/vocab.txt $outdir full