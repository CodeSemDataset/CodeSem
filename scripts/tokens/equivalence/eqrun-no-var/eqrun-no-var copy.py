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

sys.path.extend(['.','..'])
from queue import PriorityQueue
from pack.util import readVocabFile, refineMyTokens, methodDefs
from pack.config import *
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

# if vl>4:
#     srcPrefix=sys.argv[4]

# if the path in a row is absolute
isFullPath=False

# pathPre = ''
# funcPathPre = ''
# mapVar2Deflines= {}

class Variable:
    def __init__(self, name, path, def_line, func_name, func_scope, label):
        self.name = name
        self.path = path
        self.def_line = def_line
        self.func_name = func_name
        self.func_scope = func_scope       
        self.label = label

def copy_file(srcfile,dstpath):                       # 复制函数
    if not os.path.isfile(srcfile):
        print ("%s not exist!"%(srcfile))
    else:
        fpath,fname=os.path.split(srcfile)             # 分离文件名和路径
        if not os.path.exists(dstpath):
            os.makedirs(dstpath)                       # 创建路径
        shutil.copy(srcfile, dstpath + fname)          # 复制文件
        print ("copy %s -> %s"%(srcfile, dstpath + fname))

def getFiles(path):
    for filepath, dirnames, filenames in os.walk(path):
        for filename in filenames:
            # yield os.path.join(filepath,filename)
            yield (filepath, filename)

# def listToStr(ls):
#     res = ''
#     for it in ls:
#         res = res + str(it) + ' '       
#     return res

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
    for tp in getFiles(initPath):
        if tp[1]==name:
            return tp[0]+'/'+tp[1]
    return None

# def getMyTokens(variable):
#     tu_tmp=getTu(variable.path) # bug point
#     scope=variable.func_scope
#     rg = tu_tmp.get_extent(variable.path, ((scope[0], 1), (scope[1], 1000)))  # get range of function scope
#     tokens = list(tu_tmp.get_tokens(extent=rg))  # get token list  
#     mytokens=refineMyTokens(tokens)  
#     return mytokens

def getMyTokens(variable,tu):    
    # scope=variable.func_scope
    # rg = tu.get_extent(variable.path, ((scope[0], 1), (scope[1], 1000)))  # get range of function scope
    methods=methodDefs(tu.cursor)
    method=None
    for ptr in methods:
        print("method path: %s ** %s"%(str(ptr.extent.start.file),variable.path))
        if str(ptr.extent.start.file)==variable.path:
            method=ptr
            break
    tokens = list(tu.get_tokens(extent=method.extent))  # get token list  
    mytokens=refineMyTokens(tokens)  
    return mytokens

def getSeq(variable):
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
        
        if spelling in vocab:
            # vocab_val_seq.append(vocab[spelling][0])
            # print("in vocab")
            val_seq+=(str(vocab[spelling][0])+' ')
        else:
            # vocab_val_seq.append(vocab["'[UNK]_'"][0])
            # print("not in vocab")
            val_seq+=(str(vocab["'[UNK]_'"][0])+' ')
        # if type == TokenKind.IDENTIFIER:            
        #     # print(mytoken[2])
        #     if index<0 and line == variable.def_line and spelling == variable.name:            
        #         index=id
        id+=1
    # print("%s %d in callee\n"%(val_seq,index))                
    return val_seq

def getVar(row,which,label):
    if isFullPath:
        total_path = row[0]
    else:                    
        cur_path = row[0].lstrip('./') 
        mid="%s/%s_compare/"%(which,which)           
        total_path = prefix+ mid + cur_path
    
    name = ''
    def_line=-1
    func_name=''    

    # scope = (int(raw_scope[0]), int(raw_scope[1]))
    scope = ()
    return Variable(name,total_path,def_line,func_name,scope,label)

# def getVar(row,columns,label):
#     if isFullPath:
#         total_path = row[1]
#     else:                    
#         cur_path = row[1].lstrip('./')            
#         total_path = prefix + cur_path
    
#     name = re.sub(r'\W+', '', row[0])
#     def_line=int(row[2])
#     func_name=row[3]
#     raw_scope = row[4].split('-')
#     scope = (int(raw_scope[0]), int(raw_scope[1]))
#     return Variable(name,total_path,def_line,func_name,scope,label)
def main(data):
    

if __name__ == "__main__":
    vocab = readVocabFile(vocabPath)
    if len(vocab) <= 6:
        sys.exit(1,"vocab is empty")
    if not os.path.exists(outDir):
            os.makedirs(outDir)  
    debug = open(outDir+'dbg_eq.txt', 'w')
    errors = open(outDir+'errors_eq.txt', 'w')

    for tp in getFiles(inputDir):
        # csv_file_name=tp[1]
        variables = []
        if not tp[1].endswith('.csv'):
        # if not tp[1].endswith('.xlsx'):
            continue
        eq_path = tp[0] + '/' + tp[1]
        print('csv path: ' + eq_path)
        name_list=tp[1].split('_')
        which = name_list[0].lower()
        out_name=tp[1].rsplit('.',1)[0]
        # if name_list[2]=='equal':
        #     label=1
        # else:
        #     label=0
        label=int(name_list[2]=='equal')
        debug = open(outDir+out_name+'_dbg_eq.txt', 'w')
        errors = open(outDir+out_name+'_errors_eq.txt', 'w')
        # valid_paths=[]
        # preprocess the name, path and so on
        # df = pd.read_excel(io=eq_path) ##默认读取sheet = 0的
        # columns = df.columns.values.tolist() ### 获取excel 表头 ，第一行
        # for idx, row in df.iterrows(): ### 迭代数据 以键值对的形式 获取 每行的数据          
        #     if not columns or not row[columns[0]]:                    
        #         continue
        #     label=int(row[10])
        #     var1=getVar(row,label)
        #     var2=getVar(row[5:],label)                
        #     variables.append(var1)                
        #     variables.append(var2)   
        #     for column in columns:
        #         d_row[column] = row[column]
        #         if column =='output_date':
        #             s = str(row[column])
        #             d_row[column] = s[:4]+'-'+s[4:6] + '-'+s[6:]
        #         else:
        #             d_row[column] = row[column]                

        # data_xls = pd.read_excel(eq_path, index_col=0)
        # csv_path="csv/%s.csv"%(out_name)
        # data_xls.to_csv(csv_path, encoding='utf-8')
        # with open(csv_path, 'r') as csv_file:
               
        print("read csv end\n")
        with open(outDir + out_name + '_index.tsv', 'w', newline='') as tsv_file:
            tsv_w = csv.writer(tsv_file, delimiter='\t')
            tsv_w.writerow(['code_1', 'code_2', 'label'])

            with open(eq_path, 'r') as csv_file:
                csv_r = csv.reader(csv_file)
                next(csv_r)  # skip the header           
                line_id = 0
                for row in csv_r:
                    line_id+=1
                    # print("line id: ",line_id)
                    if not row or not row[0]:                    
                        continue                                   
                    var1=getVar(row,which,label)
                    var2=getVar(row[1:],which,label)                
                    # variables.append(var1)                
                    # variables.append(var2) 
            # for vp in valid_paths:
            #     tsv_w.writerow([vp,'tsv'])

            # tsv_row = []
            # for defuse in variables:
            for id in range(0, len(variables), 2):
                # tsv_row = []
                print("len vars: "+str(len(variables)))
                var1 = variables[id]
                var2 = variables[id + 1]
                # if id<len(variables)-1:
                #     var2 = variables[id + 1]
                # else:
                #     var2=None
                # if var1==None or var2==None:
                #     continue
                mystr1 = var1.path + ' ' + str(var1.func_scope)
                mystr2 = var2.path + ' ' + str(var2.func_scope)                            

                print("name1 mystr1 name2 mystr2: ",var1.name,mystr1,var2.name,mystr2)
                seq1=getSeq(var1)
                # print(" %s %s\n get seq def 1 in main"%(seq_def1[0],seq_def1[1]))             
                seq2=getSeq(var2)  
                # print(" %s %s\n get seq def 2 in main"%(seq_def2[0],seq_def2[1]))  
                if not seq1 or not seq2:
                    continue           
                tsv_row=[seq1,seq2]
               
                # if not (defUseLs1 and defUseLs2):
                #     continue
                #                 
                tsv_row.append(var1.label)
                tsv_w.writerow(tsv_row)
                
                debug.write("{} * {} ** tsv row: {} ****\n{}\n".format(var1.name, var2.name, mystr1 + ' ' + mystr2, tsv_row))               
                print("write tsv row end")
        debug.close()
        errors.close()        
    thisFile=os.path.abspath(__file__)
    copy_file(thisFile,outDir)
    
