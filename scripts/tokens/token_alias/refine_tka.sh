#!/bin/bash

# script_path=$(cd `dirname $0`; pwd) 
time=$(date "+%Y-%m-%d_%Hh%Mm")

cd refine_alias
which=$(basename $1) # get base name from path
out_dir=output/${time}_$which
mkdir -p $out_dir
python3.7 refine.py $1 /bigdata/newdisk/ruyan/empirical_study/tokenize/tkzrun/output/2022-10-07_13-22_all_out_15/vocab.txt $out_dir full

cd ../tkarun
# out_dir=output/  ${time}_1-finetune-source_out
mkdir -p $out_dir
python3.7 tka_classify.py ../refine_alias/$out_dir /bigdata/newdisk/ruyan/empirical_study/tokenize/tkzrun/output/2022-10-07_13-22_all_out_15/vocab.txt $out_dir full

cd ..