#!/bin/bash

# script_path=$(cd `dirname $0`; pwd) 
time=$(date "+%Y-%m-%d_%Hh%Mm")

cd refine_alias
which=$(basename $1) # get base name from path
outdir=output/${time}_$2
mkdir -p $outdir
python3.7 refine.py -i $1 -voc /bigdata/qian/train_model/dataset-202210/CuBERT/pretrain/vocab.txt -o $outdir -abs

cd ../tkarun
# out_dir=output/  ${time}_1-finetune-source_out
mkdir -p $outdir
python3.7 tka_dist.py -i ../refine_alias/$outdir -voc /bigdata/qian/train_model/dataset-202210/CuBERT/pretrain/vocab.txt -o $outdir -abs

cd ..