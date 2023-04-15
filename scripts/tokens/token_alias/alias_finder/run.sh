#!/bin/bash

# script_path=$(cd `dirname $0`; pwd) 
time=$(date "+%Y-%m-%d_%Hh%Mm")
outdir=output/middle/${time}_$1_out
mkdir -p $outdir
python3.7 find_ast_alias.py /bigdata/newdisk/ruyan/empirical_study/token_alias/alias_finder_ast/input/all $outdir full