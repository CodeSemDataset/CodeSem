#!/usr/bin/env python3
# -*-coding:utf-8-*-
""" Usage: Python 3
"""
from distutils.log import error

import os
import re
import argparse
import multiprocessing
from tokenize import Special

from clang.cindex import Config, Index

if 'CLANG_LIBRARY_PATH' in os.environ:
    Config.set_library_path(os.environ['CLANG_LIBRARY_PATH'])

from clang.cindex import TokenKind, TranslationUnit

import sys
import csv
csv.field_size_limit(500 * 1024 * 1024)

sys.path.extend(['.','..'])
from queue import PriorityQueue

from pack.util import dbgout
from pack.ast_related import *
from pack.file_sys import *
from pack.config import *
from utils.data import getDefUseKey, getDistMap
# import pack.ast_related

# TODO
# mutable arguments
Errors=None
# outDir = r'out/'
# csvFileDir = sys.argv[1]
# vocabPath = r'out/vocab.txt'
# srcPrefix = r'/home/shared/projects/'
# workSet={'libgit2','linux','git','h2o'}
# workSet={'curl','gcc','mysql','protobuf','redis','tmux','the-silver-searcher'}
workSet={'curl'}

parser = argparse.ArgumentParser(description='Auto run arguments')
parser.add_argument('-voc','--vocab', dest='vocab', type=str, default='', help='Vocab directory')
parser.add_argument('-i','--input', dest='input', type=str, default='input', help='Input directory')
parser.add_argument('-o','--output', dest='output', type=str, default='output', help='Output directory')
parser.add_argument('-abs','--use-abs-path',dest='use_abs_path',action='store_true',help='Use absolute path.')
parser.add_argument('-reg','--use-reg',dest='use_reg',action='store_true',help='Use regular expr to parse defuse.')
args = parser.parse_args()

# vl = len(sys.argv)
# if vl > 2:
#     vocabPath = sys.argv[2]

# if vl > 3:
#     outDir = sys.argv[3]
#     if not outDir.endswith('/'):
#         outDir += '/'

# isAbsPath=False # absolute path or not
# if vl>4:
#     isAbsPath=(sys.argv[4]=='full')

# useReg=False # use regular expr to parse defuse
# if vl>5:
#     useReg=(sys.argv[5]=='reg')

csvFileDir=args.input
vocabPath=args.vocab
outDir=args.output+'/'
isAbsPath=args.use_abs_path
useReg=args.use_reg

# directly add .ast suffix to a c/c++ file
direct_extend_ast={'mysql'}    
# which2prefix={'gcc': '', 'mysql': '', 'linux': '',
#     'curl': '', 'git': '', 'redis':'src/', 'tmux':''}

# tu1 = None
methods=[]
pathPre = ''
funcPathPre = ''
# mapVar2Deflines= {}
mapFileToAstPaths={}
mapPathToTu={}
mapPathToMethods={}
usedAstPaths=set()

class DefUse:  
    def __init__(self, name, path, def_line, alias_type, func_scope, use_points, label):
        self.name = name
        self.path = path
        self.def_line = def_line       
        self.alias_type=alias_type
        self.func_scope = func_scope
        self.use_points = use_points
        self.label = label
        self.relative_path=''
        self.ast_path=''        
        self.which=''
        self.dist='0'
        self.extra_msg=''


def defuseToRow(defuse):
    scope=defuse.func_scope
    # path=defuse.path.split('/')[-1]
    path=defuse.path
    ls=[defuse.name,path,defuse.def_line,defuse.alias_type,"%s-%s"%(scope[0],scope[1]),defuse.dist,defuse.extra_msg]
    for pnt in defuse.use_points:
        # ls.append('"(0;%s;%s)"'%(pnt[0],pnt[1]))
        ls.append('(0;%s;%s)'%(pnt[0],pnt[1]))
    return ls

# def updateDefUse(defuse,tu,methods): 
#     method=findMethod(defuse,methods)
#     if method:                   
#         ext=method.extent
#         # print("\033[0;31;47m find a method\n\033[0m ",ext)
#         defuse.func_scope=(ext.start.line,ext.end.line)
#         # for i in preorder_travel(method):
#         #     print('information of i: ', i.kind, i.extent)
#         # defuse.func_scope=defuse1.func_scope
#         rg = tu.get_extent(tu.spelling, ((ext.start.line, ext.start.column), (ext.end.line, ext.end.column)))
#         # print("my rg: \n",rg)
#         # tokens=list(tu.get_tokens(extent=ext))  # error: tokens is empty
#         tokens=list(tu.get_tokens(extent=rg))  # get token list
#         # my_tokens = refineMyTokens(tokens)  # get my tokens
#         dbgout("tokens length {}",len(tokens))
#         # for i in range(len(my_tokens)):
#         for i in range(len(tokens)):
#             token=tokens[i]
#             if token.kind == TokenKind.IDENTIFIER:                        
#                 name=token.spelling
#                 line=token.location.line
#                 column=token.location.column
#                 # if name==defuse.name and line>defuse.def_line and tokens[i+1].spelling!='=':
#                 # if defuse.name.find(name)>=0 and line>=defuse.def_line and tokens[i+1].spelling!='=':
#                 # if defuse.name.find(name)>=0 and line>=defuse.def_line:
#                 if defuse.name==name and line>=defuse.def_line:
#                     defuse.use_points.append((line,column))            
#         return True
#     Errors.write("not find method")
#     return False

def updateDefUse(defuse,tu,method): 
    ext=method.extent
    # print("\033[0;31;47m find a method\n\033[0m ",ext)
    defuse.func_scope=(ext.start.line,ext.end.line)
    # for i in preorder_travel(method):
    #     print('information of i: ', i.kind, i.extent)
    # defuse.func_scope=defuse1.func_scope
    rg = tu.get_extent(tu.spelling, ((ext.start.line, ext.start.column), (ext.end.line, ext.end.column)))
    # print("my rg: \n",rg)
    # tokens=list(tu.get_tokens(extent=ext))  # error: tokens is empty
    tokens=list(tu.get_tokens(extent=rg))  # get token list
    # my_tokens = refineMyTokens(tokens)  # get my tokens
    dbgout("tokens length {}",len(tokens))
    # for i in range(len(my_tokens)):
    for i in range(len(tokens)):
        token=tokens[i]
        if token.kind == TokenKind.IDENTIFIER:                        
            name=token.spelling
            line=token.location.line
            column=token.location.column
            # if name==defuse.name and line>defuse.def_line and tokens[i+1].spelling!='=':
            # if defuse.name.find(name)>=0 and line>=defuse.def_line and tokens[i+1].spelling!='=':
            # if defuse.name.find(name)>=0 and line>=defuse.def_line:
            if defuse.name==name and line>=defuse.def_line:
                defuse.use_points.append((line,column))            
    return True    

def addPathToTu(defuse):
    which=defuse.which
    total_path=defuse.path
    file_name=getFileName(total_path)
    # if which in direct_extend_ast:
    #     # ast_path=which2ast_root[which]+relative_path+'.ast'
    #     # astPaths=mapFileToAstPaths[file_name]
    #     file_key=file_name
    # else:
    #     # ast_path=which2ast_root[which]+relative_path.rsplit('.',1)[0]+'.ast'
    #     # astPaths=mapFileToAstPaths[file_name.rsplit('.',1)[0]]
    #     file_key=file_name.rsplit('.',1)[0]
    # ast_path=''   
    # tu=None 
    file_key=getFileKey(total_path)
    if file_key in mapFileToAstPaths:
        astPaths=mapFileToAstPaths[file_key]
        if total_path not in mapPathToTu:
            for tmp_ast_path in astPaths:
                if tmp_ast_path in usedAstPaths:
                    continue
                tu=readAst(tmp_ast_path)
                if not tu:
                    Errors.write("tu error after readAst for total_path:%s and ast path:%s at addPathToTu\n"%(total_path,tmp_ast_path))
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
        tu=getTu(total_path)
        if tu:
            mapPathToTu[total_path]=tu
        else:
            Errors.write("tu error after getTu for total_path %s at getDefUse\n"%(total_path))

def getTotalPath(path,which):
    if isAbsPath:
        total_path = path    
    else:
        strs=path.rsplit('/',1)
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
            file_name=path
            relative_path = path
        total_path = whichToDir[which] + relative_path    
    if not os.path.isfile(total_path):
        seek_path=seekFile(whichToDir[which],getFileName(total_path)) 
        # errors.write("var %s in ast file %s of src %s not found\n"%(name,ast_path,total_path))          
        if not seek_path:
            Errors.write(total_path + ' is not found!\n')
            return None
        total_path=seek_path
    return total_path

# def getTwoDefUse(row,which):
def getRealName(name):
    id=len(name)
    special_symbols=['+','-','.','->','[']
    for symbol in special_symbols:
        split_index=name.find(symbol)
        if split_index>=0:
            id=min(id,split_index)
    real_name=name[:id].strip('*&() ')
    return real_name

def getDefUse(row,which,label,alias_type): 
    dbgout("parse row: {}",row) 
    if useReg:
        match_obj = re.match(r"(\w+) in ([^:]+):(\d+)", row[0])
        if not match_obj:
            Errors.write("match obj is none for %s\n"%row[0])
            return None
        name=match_obj.group(1).strip()
        tmp_path=match_obj.group(2).strip()
        line=match_obj.group(3).strip()
    else:
        name=row[0]
        tmp_path=row[1]
        line=row[2]
    # defuse.name=name    
    # if isAbsPath:
    #     total_path = tmp_path    
    # else:
    #     strs=tmp_path.rsplit('/',1)
    #     if(len(strs)>1):
    #         file_name=strs[1]
    #         # avoid destroying file_name
    #         if strs[0].startswith(which+'-'):
    #             string=strs[0].split('/',1)[1]
    #         else:
    #             string=strs[0]
    #         relative_path=string+'/'+file_name
    #         relative_path=relative_path.lstrip('./')
    #     else:
    #         file_name=tmp_path
    #         relative_path = tmp_path
    #     total_path = whichToDir[which] + relative_path    
    # if not os.path.isfile(total_path):
    #     seek_path=seekFile(whichToDir[which],getFileName(total_path)) 
    #     # errors.write("var %s in ast file %s of src %s not found\n"%(name,ast_path,total_path))          
    #     if not seek_path:
    #         Errors.write(total_path + ' is not found!\n')
    #         return None
    #     total_path=seek_path
    real_name=getRealName(name)
    dbgout("real name is {}",real_name)
    total_path=getTotalPath(tmp_path,which)
    if not total_path:
        return None
    # defuse=DefUse(name, total_path, int(line), alias_type, (0,0), [], label)    
    defuse=DefUse(real_name, total_path, int(line), alias_type, (0,0), [], label)    
    defuse.which=which
    # defuse.real_name=real_name
    return defuse

def main(data):
    global Errors
    print('main begin')
    for tp in data:
    # for tp in data[s:e:gap]:
        defuses = []       
        mapFileToAstPaths.clear()
        mapPathToTu.clear()
        mapPathToMethods.clear()
        usedAstPaths.clear()
        if not tp[1].endswith('.csv'):
            continue
        input_path = os.path.join(tp[0],tp[1])
        dbgout('csv path: ' + input_path)
        which = tp[1].split('_',1)[0]
        # rid=tp[1].rfind('.')
        if which not in workSet:
            continue
        out_name=tp[1].rsplit('.',1)[0]  
        # defuseToDist=getDistMap(whichToDistMap[which])
        # debug = open(outDir+out_name+'_dbg.txt', 'w')        
        # pack.ast_related.errors=errors
        Errors = open(outDir+out_name+'_errors.txt', 'w')
        init_errors(Errors)

        with open(whichToAstRoot[which]+'astList.txt','r') as ast_list:
            for ast_path in ast_list:
                ast_path=ast_path.strip()                

                # file_name=getFileName(ast_path).rsplit('.',1)[0]   
                file_key=getFileKey(ast_path)             
                if file_key not in mapFileToAstPaths:
                    mapFileToAstPaths[file_key]=[ast_path]
                else:
                    # errors.write("duplicate ast path %s for one ast file name %s\n"%(ast_path,file_name))
                    mapFileToAstPaths[file_key].append(ast_path)
        alias_defuses=[]
        noalias_defuses=[]
        with open(input_path, 'r') as csv_file:
            csv_r = csv.reader(csv_file)
            next(csv_r)  # skip the header
            # label = int(not out_name.endswith('nonalias-pair'))
            label = int(not out_name.endswith('nonalias'))
            alias_type=''
            line_id = 0
            for row in csv_r:
                line_id+=1                
                dbgout("line id: {}",line_id)  
                Errors.write("row: %s\n"%str(row))  
                try:            
                    # function='unknown'
                    # defuses.append(DefUse(name, total_path, def_line, function, (0,0), [], label))
                    if useReg:
                        defuse1=getDefUse(row,which,label,alias_type)
                        defuse2=getDefUse(row[1:],which,label,alias_type)
                        extra_msg='"'+','.join(row)+'"'
                        defuse1.extra_msg=extra_msg
                    else:
                        label=int(row[6])
                        # if len(row)>7:
                        #     alias_type=row[7]

                        defuse1=getDefUse(row,which,label,alias_type)
                        defuse2=getDefUse(row[3:],which,label,alias_type)
                        extra_msg='"'+','.join(row)+'"'
                        defuse1.extra_msg=extra_msg
                        if len(row)>7:
                            defuse1.dist=row[7]

                    if not defuse1 or not defuse2:
                        Errors.write("defuse none for %s at main\n"%str(row))
                        continue                   
                    dbgout("defuse1.path: " + defuse1.path)                   
                    addPathToTu(defuse1)

                    if defuse1.path in mapPathToTu:
                        tu=mapPathToTu[defuse1.path]
                        if defuse1.path not in mapPathToMethods:
                            methods=methodDefs(tu.cursor)
                            mapPathToMethods[defuse1.path]=methods
                        else:
                            methods=mapPathToMethods[defuse1.path]
                    else:
                        tu=None
                        methods=[]
                        Errors.write("defuse path %s is not in mapPathToTu at main\n"%(defuse1.path))

                    # assert defuse1.path==defuse2.path , \
                    #     "defuse locations are not equal %s|%s and %s|%s"%(defuse1.path,defuse1.function,defuse2.path,defuse2.function)
                    if defuse1.path!=defuse2.path:
                        Errors.write("name %s in path: %s != \nname %s in path: %s at main\n"%(defuse1.name,defuse1.path,defuse2.name,defuse2.path))
                    else:
                        method1=findMethod(defuse1,methods)
                        method2=findMethod(defuse2,methods)
                        method=method1 if method1 else method2
                        if method:
                            updateDefUse(defuse1,tu,method)                
                            updateDefUse(defuse2,tu,method)

                    # defuseKey=getDefUseKey(defuse1,defuse2)
                    # if defuseKey in defuseToDist:
                    #     dist=defuseToDist[defuseKey]
                    #     defuse1.dist=dist
                    #     defuse2.dist=dist
                    # print("defuse key and dist")    
                    # print(defuseKey,'\n',dist)

                    list1=defuseToRow(defuse1)
                    list2=defuseToRow(defuse2)
                    if not defuse1.use_points or not defuse2.use_points:
                        Errors.write("%s in %s : %d no uses\n"%(defuse1.name, defuse1.path, defuse1.def_line))
                        Errors.write("%s in %s : %d no uses\n"%(defuse2.name, defuse2.path, defuse2.def_line))
                    else:
                        # csv_w.writerow(list1)
                        # csv_w.writerow(list2)
                        if label==1:
                            alias_defuses.append(list1)
                            alias_defuses.append(list2)
                        else:
                            noalias_defuses.append(list1)
                            noalias_defuses.append(list2)   
                except:
                    pass # unknown exception              
       
        with open(outDir + out_name + '.csv', 'w', newline='') as csv_file:
            csv_w = csv.writer(csv_file)
            csv_w.writerow(['Alias_name', 'dir', 'line_Num', 'alias_type', 'Function_Scope', 'distance', 'extra_msg',
                'User_points: (Position_No, LineNum, Column) instruction_content'])
            csv_w.writerow(['True Alias Pairs: '])           
            csv_w.writerows(alias_defuses)
            csv_w.writerow(['False Alias Pairs: '])
            csv_w.writerows(noalias_defuses)
            print("write csv row end")
        # debug.close()
        Errors.close()

if __name__ == "__main__":
    if not os.path.exists(outDir):
        os.makedirs(outDir)    
    files=[]  
    processes=[]  
    
    cpu_cnt=multiprocessing.cpu_count()
    # cpu_cnt=1
    pid_list=open(os.path.join(outDir,'refine_pid_list.txt'),'w')
    for tp in getFiles(csvFileDir):  
        if not tp[1].endswith('.csv'):
            continue
        print(tp)          
        files.append(tp)
    for i in range(cpu_cnt):   
        if i>=len(files):
            break
        p = multiprocessing.Process(target=main, args=(files[i:len(files):cpu_cnt],))
        # p = multiprocessing.Process(target=main, args=(files,i,len(files),cpu_cnt))
        processes.append(p)
        p.start()
        pid_list.write("pid: {} and name: {}\n".format(p.pid,p.name))
    for p in processes:
        p.join()
    thisFile=os.path.abspath(__file__)
    copyFile(thisFile,outDir)
    pid_list.close()
   
