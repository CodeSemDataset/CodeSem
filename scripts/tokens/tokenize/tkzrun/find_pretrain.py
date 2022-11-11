#!/usr/bin/python3.7
# -*-coding:utf-8-*-

from lib2to3.pgen2 import token


inputPath='/bigdata/newdisk/ruyan/empirical_study/tokenize/tkzrun/output/2022-10-02_17-54_all_out_15/debug_tkseq.txt'
outputPath='/bigdata/newdisk/ruyan/empirical_study/tokenize/tkzrun/output/pretrain/tkseq.txt'
excludePrefix='/bigdata/newdisk/share/AllProjects'

if __name__ == "__main__":
    end_br=False
    with open(outputPath, 'w', newline='') as out_file:        
        with open(inputPath, 'r') as in_file:
            for line in in_file:
                try:
                    tokens=next(in_file)
                    if tokens.endswith('\n'):
                        end_br=True
                    if not line.startswith(excludePrefix):                    
                        out_file.write(tokens)
                except StopIteration:
                    #遇到StopIteration就退出循环
                    print("next encounter stop")
                    break                
    print('end_br',end_br)                    