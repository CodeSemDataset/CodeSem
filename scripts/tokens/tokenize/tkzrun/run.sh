#! /bin/bash

# file='_'
min_num=15
# script_path=$(cd `dirname $0`; pwd)

# 至少一个参数
if [ $# -ge 1 ];then
  # file=$1
  min_num=${1}
fi
# 至少两个参数
if [ $# -ge 2 ];then
  # file=$1
  message=${2}
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
out_dir=output/${time}_${message}_out_${min_num}
mkdir -p $out_dir
python3.7 tkz-all.py $out_dir $min_num
