#!/usr/bin/env python
# -*-coding:utf-8-*-
""" Usage: Python 3
"""
import os
import re
import shutil

from clang.cindex import Config

if 'CLANG_LIBRARY_PATH' in os.environ:
    Config.set_library_path(os.environ['CLANG_LIBRARY_PATH'])

from clang.cindex import TokenKind, TranslationUnit

import sys
import csv
# import pandas as pd

sys.path.append('..')
from queue import PriorityQueue
from util import readVocabFile, refineMyTokens

# TODO
# mutable arguments
outDir = r'out/'
inputDir = sys.argv[1]
vocabPath = r'out/vocab.txt'
# srcPrefix = r'/home/shared/projects/'
arg_len = len(sys.argv)
if arg_len > 2:
    vocabPath = sys.argv[2]

if arg_len > 3:
    outDir = sys.argv[3]
    if not outDir.endswith('/'):
        outDir += '/'

# if the path in a row is absolute
isFullPath=False


pathPre = ''
funcPathPre = ''
mapVar2Deflines= {}
prefix='/home/ruyan/empirical_study/equivalence/'

class Variable:
    def __init__(self, name, path, def_line, func_name, func_scope, label):
        self.name = name
        self.path = path
        self.def_line = def_line
        self.func_name = func_name
        self.func_scope = func_scope       
        self.label = label

def copy_file(srcfile,dstpath):                       # 
    if not os.path.isfile(srcfile):
        print ("%s not exist!"%(srcfile))
    else:
        fpath,fname=os.path.split(srcfile)             # 
        if not os.path.exists(dstpath):
            os.makedirs(dstpath)                       # 
        shutil.copy(srcfile, dstpath + fname)          # 
        print ("copy %s -> %s"%(srcfile, dstpath + fname))

def get_files(path):
    for filepath, dirnames, filenames in os.walk(path):
        for filename in filenames:
            # yield os.path.join(filepath,filename)
            yield (filepath, filename)

def list2str(ls):
    res = ''
    for it in ls:
        res = res + str(it) + ' '       
    return res

def getTu(path):
    try:
        rid = path.rindex('.')
        type = path[rid:]
        args = []
        if type == '.cpp' or type == '.cc' or type == '.h':
            args.append('-std=c++11')
        # tu = TranslationUnit.from_source(var1.path, args,
        #                                  options=TranslationUnit.PARSE_PRECOMPILED_PREAMBLE)
        return TranslationUnit.from_source(path, args)
    except BaseException as bex:
        print(bex)
        msg="tu error: {} in {} \n".format(bex,path)
        debug.write(msg)
        errors.write(msg)
        return None


def seekFile(initPath,name):
    for tp in get_files(initPath):
        if tp[1]==name:
            return tp[0]+'/'+tp[1]
    return None

def getMyTokens(variable,tu):    
    scope=variable.func_scope
    rg = tu.get_extent(variable.path, ((scope[0], 1), (scope[1], 1000)))  # get range of function scope
    tokens = list(tu.get_tokens(extent=rg))  # get token list  
    mytokens=refineMyTokens(tokens)  
    return mytokens

def getSeqDef(variable):
    id=0
    index=-1
    # vocab_val_seq=[]
    val_seq=''
    tu=getTu(variable.path)
    if not tu:
        return None
    mytokens=getMyTokens(variable,tu)
    # mytokens=getMyTokens(variable) # bug call  

    print("get my tokens end")
    for mytoken in mytokens:       
        spelling=mytoken[0]        
        type=mytoken[1]           
        line=mytoken[2].line       
        if spelling in vocab:          
            val_seq+=(str(vocab[spelling][0])+' ')
        else:        
            val_seq+=(str(vocab["'[UNK]_'"][0])+' ')
        if type == TokenKind.IDENTIFIER:            
            # print(mytoken[2])
            if index<0 and line == variable.def_line and spelling == variable.name:            
                index=id
        id+=1               
    return (val_seq,str(index))

def getVar(row,label):
    if isFullPath:
        total_path = row[1]
    else:                    
        cur_path = row[1].lstrip('./')            
        total_path = prefix + cur_path
    
    name = re.sub(r'\W+', '', row[0])
    def_line=int(row[2])
    func_name=row[3]
    raw_scope = row[4].split('-')
    scope = (int(raw_scope[0]), int(raw_scope[1]))
    return Variable(name,total_path,def_line,func_name,scope,label)

if __name__ == "__main__":
    vocab = readVocabFile(vocabPath)
    if len(vocab) <= 6:
        sys.exit(1,"vocab is empty")
    if not os.path.exists(outDir):
        os.makedirs(outDir)  
    debug = open(outDir+'dbg_eq.txt', 'w')
    errors = open(outDir+'errors_eq.txt', 'w')

    for tp in get_files(inputDir):
        # csv_file_name=tp[1]
        variables = []
        if not tp[1].endswith('.csv'):
            continue
        eq_path = tp[0] + '/' + tp[1]
        print('csv path: ' + eq_path)
        which = tp[1].split('.')[0]

        # preprocess the name, path and so on
        with open(eq_path, 'r') as csv_file:
            csv_r = csv.reader(csv_file)
            next(csv_r)  # skip the header           
            line_id = 0
            for row in csv_r:
                line_id+=1
                # print("line id: ",line_id)
                if not row or not row[0]:                    
                    continue
                        
                label=int(row[10])
                var1=getVar(row,label)
                var2=getVar(row[5:],label)                
                variables.append(var1)                
                variables.append(var2)                
        print("read csv end\n")
        with open(outDir + which + '_index.tsv', 'w', newline='') as tsv_file:
            tsv_w = csv.writer(tsv_file, delimiter='\t')
            tsv_w.writerow(['func_seq1', 'func_seq2', 'def1_index',
                            'def2_index', 'label'])

            for id in range(0, len(variables), 2):
                # tsv_row = []
                print("len vars: "+str(len(variables)))
                var1 = variables[id]
                var2 = variables[id + 1]
               
                mystr1 = var1.path + ' ' + str(var1.func_scope)
                mystr2 = var2.path + ' ' + str(var2.func_scope)              

                print("name1 mystr1 name2 mystr2: ",var1.name,mystr1,var2.name,mystr2)
                seq_def1=getSeqDef(var1)
                # print(" %s %s\n get seq def 1 in main"%(seq_def1[0],seq_def1[1]))             
                seq_def2=getSeqDef(var2)  
                # print(" %s %s\n get seq def 2 in main"%(seq_def2[0],seq_def2[1]))  
                if not seq_def1 or not seq_def2:
                    continue           
                tsv_row=[seq_def1[0],seq_def2[0],seq_def1[1],seq_def2[1]]
                          
                tsv_row.append(var1.label)
                tsv_w.writerow(tsv_row)
                
                debug.write("{} * {} ** tsv row: {} ****\n{}\n".format(var1.name, var2.name, mystr1 + ' ' + mystr2, tsv_row))               
                print("write tsv row end")
        
    thisFile=os.path.abspath(__file__)
    copy_file(thisFile,outDir)
    debug.close()
