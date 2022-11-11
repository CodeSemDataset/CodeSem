#!/bin/bash

# script_path=$(cd `dirname $0`; pwd) 
time=$(date "+%Y-%m-%d_%Hh%Mm")
out_dir=output/${time}_$1_out
mkdir -p $out_dir
python3.7 find_all_alias.py /bigdata/newdisk/ruyan/empirical_study/token_alias/alias_verify/input/all $out_dir full
