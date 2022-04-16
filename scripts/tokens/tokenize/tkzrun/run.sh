#! /bin/bash

# file='_'
min_num=9
# script_path=$(cd `dirname $0`; pwd)

# 
if [ $# -ge 1 ];then
  # file=$1
  min_num=$1
fi

# if [ ! -d $file ];then
#   mkdir $file
# fi
# outdir=${file}/out_${min_num}
# outdir=out_${min_num}
# if [ ! -d $outdir ];then
#   mkdir $outdir 
# fi

time=$(date "+%Y-%m-%d_%H-%M")
out_dir=${time}_$2_out_${min_num}
mkdir -p out_dir
python3.7 tkz.py /bigdata/qian/ $outdir/vocab.txt $outdir/tkseq.txt $min_num
