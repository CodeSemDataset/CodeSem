#!/usr/bin/env python3
# -*-coding:utf-8-*-
""" Usage: Python 3
"""
import ast
from distutils.log import error

import os
import re
import multiprocessing

from clang.cindex import Config, Index

if 'CLANG_LIBRARY_PATH' in os.environ:
    Config.set_library_path(os.environ['CLANG_LIBRARY_PATH'])

from clang.cindex import TokenKind, TypeKind

import sys
import csv
import operator

sys.path.append('..')
# from queue import PriorityQueue

from pack.util import dbgout
from pack.ast_related import *
from pack.file_sys import *
from pack.config import *
from utils.data_depend import *
# TODO
# mutable arguments
Errors=None
OutDir = r'out/'
csvFileDir = sys.argv[1]
vocabPath = r'out/vocab.txt'
# srcPrefix = r'/home/shared/projects/'
vl = len(sys.argv)
# if vl > 2:
#     vocabPath = sys.argv[2]

if vl > 2:
    OutDir = sys.argv[2]
    if not OutDir.endswith('/'):
        OutDir += '/'

isAbsPath=False # absolute path or not
if vl>3:
    isAbsPath=(sys.argv[3]=='full')


# directly add .ast suffix to a c/c++ file
direct_extend_ast={'mysql'}    

# tu1 = None
methods=[]
pathPre = ''
funcPathPre = ''
# mapVar2Deflines= {}
mapFileToAstPaths={}
mapPathToTu={}
# mapPathToMethods={}
usedAstPaths=set()

# defuse1 and defuse2 are in the same method
def checkAlias(defuse1,defuse2,methods): 
    method=findMethod(defuse1,methods)
    if method:                       
        return AliasVerify.checkAlias(defuse1,defuse2,method)
    return -1

def findAllAlias(methods):
    for method in methods:
        AliasVerify.methodAlias(method)
        # TODO dump all alias

def addPathToTu(defuse):
    first_visit=False
    # which=defuse.which
    total_path=defuse.path
    # file_name=getFileName(total_path)   
    file_key=getFileKey(total_path)
    if file_key in mapFileToAstPaths:
        astPaths=mapFileToAstPaths[file_key]
        if total_path not in mapPathToTu:
            first_visit=True
            for tmp_ast_path in astPaths:
                if tmp_ast_path in usedAstPaths:
                    continue
                tu=readAst(tmp_ast_path)
                if not tu:
                    Errors.write("tu error for total_path:%s and ast path:%s at addPathToTu\n"%(total_path,tmp_ast_path))
                    continue
                mapPathToTu[tu.spelling]=tu 
                usedAstPaths.add(tmp_ast_path) 
                if total_path==tu.spelling:
                    # ast_path=tmp_ast_path
                    break;  
    else:
        Errors.write("file key %s of total_path %s is not in mapFileToAstPaths at getDefUse\n"%(file_key,total_path))
        # if total_path not in mapPathToTu:
        #     tu=getTu(total_path)
        #     if tu:
        #         mapPathToTu[total_path]=tu
        #     else:
        #         errors.write("tu error for total_path %s "%(total_path))
    if total_path not in mapPathToTu:
        first_visit=True
        tu=getTu(total_path)
        if tu:
            mapPathToTu[total_path]=tu
        else:
            Errors.write("tu error for total_path %s at getDefUse\n"%(total_path))
    return first_visit
    
def getDefUse(row,which,label): 
    dbgout("parse row: {}",row) 
    
    name=row[0].replace(' ','')
    tmp_path=row[1]
    line=row[2]
    
    # defuse.name=name    
    if isAbsPath:
        total_path = tmp_path    
    else:
        strs=tmp_path.rsplit('/',1)
        if(len(strs)>1):
            file_name=strs[1]
            # avoid destroying file_name
            if strs[0].startswith(which+'-'):
                string=strs[0].split('/',1)[1]
            else:
                string=strs[0]
            relative_path=string+'/'+file_name
            relative_path=relative_path.lstrip('./')
        else:
            file_name=tmp_path
            relative_path = tmp_path
        total_path = whichToDir[which] + relative_path    
    if not os.path.isfile(total_path):
        seek_path=seekFile(whichToDir[which],getFileName(total_path)) 
        # errors.write("var %s in ast file %s of src %s not found\n"%(name,ast_path,total_path))          
        if not seek_path:
            Errors.write(total_path + ' is not found!\n')
            return None
        total_path=seek_path
   
    defuse=DefUse(name, total_path, int(line), label)    
    defuse.which=which
    return defuse

# def dumpFileAlias(tu,csv_writer):
#     methods=methodEntityDefs(tu.cursor)    
#     for method in methods:
#         # print(method.extent)
#         AliasVerify.methodAlias(method)
#         AliasVerify.dumpMethodAlias(csv_writer)

def main(data):
    global Errors
    if not isinstance(data,list):
        data=[data,]
    for which,directory in data:
        # which=item[0]
        # directory=item[1]

        # defuses = []       
        # mapFileToAstPaths.clear()
        # mapPathToTu.clear()
        # # mapPathToMethods.clear()
        # usedAstPaths.clear()
        # if not tp[1].endswith('.csv'):
        #     continue
        # input_path = os.path.join(tp[0],tp[1])
        # dbgout('csv path: ' + input_path)
        # which = tp[1].rsplit('_',1)[0]
        # rid=tp[1].rfind('.')
        # out_name=tp[1].rsplit('.',1)[0]
        # who=os.path.basename(tp[0])
        # outDir=os.path.join(OutDir,who)
        if not os.path.exists(OutDir):
            os.makedirs(OutDir)       
        # pack.ast_related.errors=errors
        output_path=os.path.join(OutDir,which+'.csv')
        errDir=os.path.join(OutDir,'errors')
        if not os.path.exists(errDir):
            os.makedirs(errDir) 
        Errors = open(os.path.join(errDir,which+'_errors.txt'), 'w')
        init_errors(Errors)

        # with open(whichToAstRoot[which]+'astList.txt','r') as ast_list:
        #     for ast_path in ast_list:
        #         ast_path=ast_path.strip()                
        #         # file_name=getFileName(ast_path).rsplit('.',1)[0]   
        #         file_key=getFileKey(ast_path)             
        #         if file_key not in mapFileToAstPaths:
        #             mapFileToAstPaths[file_key]=[ast_path]
        #         else:
        #             # errors.write("duplicate ast path %s for one ast file name %s\n"%(ast_path,file_name))
        #             mapFileToAstPaths[file_key].append(ast_path)
        # total_num=0

        machine_verified_num=0
        verified_rows=[]
        unknown_rows=[]
        with open(output_path , 'w', newline='') as csv_file:
            csv_w = csv.writer(csv_file) 
            header=[
                'ast_path','func_def_line',
                'name1','path1','def_line1','inst_line1',
                'name2','path2','def_line2','inst_line2',
                'label','distance'
            ]
            csv_w.writerow(header)
            with open(os.path.join(directory,'astList.txt'),'r') as ast_list:
                for ast_path in ast_list:
                    ast_path=ast_path.strip('\n')  
                     

                    # file_name=getFileName(ast_path).rsplit('.',1)[0]   
                    # file_key=getFileKey(ast_path)             
                    # if file_key not in mapFileToAstPaths:
                    #     mapFileToAstPaths[file_key]=[ast_path]
                    # else:
                    #     # errors.write("duplicate ast path %s for one ast file name %s\n"%(ast_path,file_name))
                    #     mapFileToAstPaths[file_key].append(ast_path) 

                    if not os.path.exists(ast_path):
                        ast_path=os.path.join(directory,ast_path)
                    AliasVerify.initial(ast_path)
                    AliasVerify.dumpFileAlias(csv_w) 
            # with open(input_path, 'r') as csv_file:
            #     csv_r = csv.reader(csv_file)
            #     header=next(csv_r)  # skip the header
            #     if len(header)<8:
            #         header.append('alias_type')
            #     csv_w.writerow(header)  
            #     # total_num=len(csv_r)-1
            #     # label = int(not out_name.endswith('nonalias-pair'))
            #     # label = int(not out_name.endswith('nonalias'))
            #     line_id = 0
            #     for row in csv_r:
            #         line_id+=1                
            #         dbgout("line id: {}",line_id)  
            #         Errors.write("row: %s\n"%str(row))              
            #         print("current row: ",row)                   
            #         defuse1=getDefUse(row,which,0)
            #         # defuse2=getDefUse(row[3:],which,0)

            #         if not defuse1:
            #             Errors.write("defuse none for %s at main\n"%str(row))
            #             continue                   
            #         # dbgout("defuse1.path: " + defuse1.path)
                    
            #         AliasVerify.dumpFileAlias(csv_w)
            #         # if defuse1.path not in visitedPaths:                                           
            #         #     addPathToTu(defuse1)                        
            #         #     visitedPaths[defuse1.path]=None
            #         #     if defuse1.path in mapPathToTu:
            #         #         tu=mapPathToTu[defuse1.path]
            #         #         # if defuse1.path not in mapPathToMethods:
            #         #         #     methods=methodDefs(tu.cursor)
            #         #         #     mapPathToMethods[defuse1.path]=methods
            #         #         # else:
            #         #         #     methods=mapPathToMethods[defuse1.path]
            #         #         AliasVerify.dumpFileAlias(csv_w)

            #         #     else:
            #         #         tu=None
            #         #         methods=[]
            #         #         Errors.write("defuse path %s is not in mapPathToTu at main\n"%(defuse1.path))
                    
            #         # alias_type=-1
            #         # # assert defuse1.path==defuse2.path , \
            #         # #     "defuse locations are not equal %s|%s and %s|%s"%(defuse1.path,defuse1.function,defuse2.path,defuse2.function)
            #         # if defuse1.path!=defuse2.path:
            #         #     Errors.write("name %s in path: %s != \nname %s in path: %s at main\n"%(defuse1.name,defuse1.path,defuse2.name,defuse2.path))
            #         # else:
            #         #     # alias_type=checkAlias(defuse1,defuse2,tu,methods)                                       
            #         #     alias_type=checkAlias(defuse1,defuse2,methods)                                       
                    
                                   
            #         # csv_w.writerow(unknown_rows)                         
            #         print("write csv row end") 

            # csv_w.writerows(unknown_rows)
            # csv_w.writerows(verified_rows)                 
        Errors.close()
        
if __name__ == "__main__":
    if not os.path.exists(OutDir):
        os.makedirs(OutDir)      
    files=[]  
    processes=[]  
    
    cpu_cnt=multiprocessing.cpu_count()
    # cpu_cnt=1
    # visitedPaths = multiprocessing.Manager().dict()
    # machine_verify = open(os.path.join(OutDir,'machine_verify.txt'), 'w') 
    pid_list=open(os.path.join(OutDir,'refine_pid_list.txt'),'w')
    # for tp in getFiles(csvFileDir):            
    #     if not tp[1].endswith('.csv'):
    #         continue
    #     files.append(tp)
    # whichToAstRoot.pop('the-silver-searcher') # delete duplicate item
    files=list(whichToAstRoot.items())
    # files=[('cpp','/bigdata/newdisk/ruyan/empirical_study/token_alias/alias_finder_ast/test/cpp')]
    for i in range(cpu_cnt):
        if i>=len(files):
            break
        p = multiprocessing.Process(target=main, args=(files[i:len(files):cpu_cnt]))
        p.start()
        processes.append(p)
        pid_list.write("pid: {} and name: {}\n".format(p.pid,p.name))
    for p in processes:
        p.join()
    
    thisFile=os.path.abspath(__file__)
    copyFile(thisFile,OutDir)
    # machine_verify.close()
    pid_list.close()
   
