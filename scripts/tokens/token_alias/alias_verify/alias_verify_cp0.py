#!/usr/bin/env python3
# -*-coding:utf-8-*-
""" Usage: Python 3
"""
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

sys.path.extend(['.','..'])
from queue import PriorityQueue

from pack.util import dbgout
from pack.ast_related import *
from pack.file_sys import *
from pack.config import *
# import pack.ast_related

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
mapPathToMethods={}
usedAstPaths=set()

class DefUse:  
    type2_label={'&','*'}

    def __init__(self, name, path, def_line, function, func_scope, use_points, label):
        self.name = name
        self.path = path
        self.def_line = def_line        
        self.label = label
        self.relative_path=''
        self.ast_path=''        
        self.which=''
        self.type_spell=''
        self.type=None

    def isPtr(self):
        if not self.type_spell:
            self.typeSpell()
        return self.type_spell.endswith('*')

    def realName(self):    
        return self.name.strip('&*')
    
    def typeSpell(self):
        res=''
        cands=['const','unsigned']
        type_spell=self.type.spelling   
        for cand in cands:
            type_spell=type_spell.replace(cand,'') 
        type_spell=' '.join(type_spell.split())    
        if self.name.startswith('&'):
            if type_spell.endswith('*'):
                res=type_spell+'*'
            else:
                res=type_spell+' *'
        elif type_spell.endswith(']'):
            res=type_spell.split('[',1)[0]+'*'
        elif type_spell.endswith('*'):
            if self.name.startswith('*'):
                res=type_spell[:-1]
            else:
                res=type_spell        
        
        self.type_spell=res
        return res

def findType(defuse,real_name,cursor):    
    if cursor.spelling == real_name and cursor.location.line==defuse.def_line:
        defuse.type=cursor.type  
        return
    for c in cursor.get_children():
        findType(defuse,real_name,c)
        if defuse.type:
            break

# def formatTypeSpell(type):
#     res=''
#     spell=type.spelling
#     if spell.endswith(']'):
#         res=spell.split('[',1)[0]+'*'
#     elif spell.endswith('*'):
#         res=spell
#     cands=['const ','unsigned ']
#     for cand in cands:
#         res=res.replace(cand,'')
#     return res.strip()

def getLVal(tokens,id):
    lval=''
    seperators={';',',','(',')'}
    cur_line=tokens[id].location.line
    i=id
    is_def=False
    while i>=0 and tokens[i].location.line==cur_line:
        token=tokens[i]
        if token.spelling in seperators:
            break
        if token.kind==TokenKind.KEYWORD:
            is_def=True
            break
        i-=1
    if is_def:
        return tokens[id].spelling
    for token in tokens[i+1:id+1]:
        lval+=token.spelling
    return lval

def getAssignVars(tokens):
    seperators={';',',','(',')'}
    assignVars=[]
    i=0
    length=len(tokens)
    while i<length:
        # while i<len(tokens) and tokens[i].kind!=TokenKind.IDENTIFIER or tokens[i+1].spelling!='=':
        #     i+=1
        if tokens[i].kind==TokenKind.IDENTIFIER and i<length-1 and tokens[i+1].spelling=='=':
            # lval=tokens[i].spelling
            lval=getLVal(tokens,i)
            rval=''
            validVar=False
            i+=2
            while i<length:
                if validVar and tokens[i].spelling in seperators:
                    break
                validVar=False
                # if tokens[i].kind==TokenKind.IDENTIFIER:                    
                #     qualifier=''
                #     if tokens[i-1].spelling=='*' or tokens[i-1].spelling=='&':
                #         qualifier=tokens[i-1].spelling # may be multiply
                #     rval+=tokens[i].spelling
                #     validVar=True
                # elif tokens[i].kind==TokenKind.LITERAL:
                #     rval+=tokens[i].spelling
                #     validVar=True
                if tokens[i].kind==TokenKind.IDENTIFIER or tokens[i].kind==TokenKind.LITERAL:                                                            
                    validVar=True                
                rval+=tokens[i].spelling
                i+=1
            vars=[lval,rval]
            # vars.append(rval)
            assignVars.append(vars)
        i+=1
    return assignVars

def assignAlias(assignVars,name1,name2):
    for assign in assignVars:
        print(assign)
        if operator.eq(assign,[name1,name2]) or \
            operator.eq(assign,[name2,name1]):
            if name1[0] in DefUse.type2_label or name2[0] in DefUse.type2_label:
                return 2
            return 1
    return 0

def combineAlias(aliasSets,name1,name2):
    
    return 0

# defuse1 and defuse2 are in the same method
def checkAlias(defuse1,defuse2,tu,methods): 
    method=findMethod(defuse1,methods)
    if method:                   
        ext=method.extent            
        rg = tu.get_extent(tu.spelling, ((ext.start.line, ext.start.column), (ext.end.line, ext.end.column)))             
        tokens=list(tu.get_tokens(extent=rg))  # get token list
        # my_tokens = refineMyTokens(tokens)  # get my tokens
        assignVars=getAssignVars(tokens)
        # dbgout("tokens length {}",len(tokens))               
        findType(defuse1,defuse1.realName(),method)
        findType(defuse2,defuse2.realName(),method)
        
        if not defuse1.type or not defuse2.type:
            return -1
        # type_spell1=formatTypeSpell(defuse1.type)
        # type_spell2=formatTypeSpell(defuse2.type)
        type_spell1=defuse1.typeSpell()
        type_spell2=defuse2.typeSpell()
        print("type spell1: %s and type spell2: %s"%(type_spell1,type_spell2))
        Errors.write("type spell1: %s and type spell2: %s"%(type_spell1,type_spell2))
        if not defuse1.isPtr() or not defuse2.isPtr():  
            return 0
        res=assignAlias(assignVars,defuse1.name,defuse2.name)
        if res:
            return res
        if type_spell1.find('void *')>-1 or type_spell2.find('void *')>-1 or \
            defuse1.name.startswith('*') or defuse2.name.startswith('*'):
            return -1
        if type_spell1!=type_spell2:
            return 0
        return -1
    return -1

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
        tu=getTu(total_path)
        if tu:
            mapPathToTu[total_path]=tu
        else:
            Errors.write("tu error for total_path %s at getDefUse\n"%(total_path))

def getDefUse(row,which,label): 
    dbgout("parse row: {}",row) 
    # match_obj = re.match(r"(\w+) in ([^:]+):(\d+)", row[0])
    # if not match_obj:
    #     Errors.write("match obj is none for %s\n"%row[0])
    #     return None
    # name=match_obj.group(1).strip()
    # tmp_path=match_obj.group(2).strip()
    # strs=tmp_path.rsplit('/',1)
    # if(len(strs)>1):
    #     file_name=strs[1]
    #     # avoid destroying file_name
    #     if strs[0].startswith(which+'-'):
    #         string=strs[0].split('/',1)[1]
    #     else:
    #         string=strs[0]
    #     relative_path=string+'/'+file_name
    #     relative_path=relative_path.lstrip('./')
    # else:
    #     file_name=tmp_path
    #     relative_path = tmp_path
    name=row[0]
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
   
    defuse=DefUse(name, total_path, int(line), 'unknown', (0,0), [], label)    
    defuse.which=which
    return defuse

def main(data,machine_verified_list):
    global Errors    
    for tp in data:
        defuses = []       
        mapFileToAstPaths.clear()
        mapPathToTu.clear()
        mapPathToMethods.clear()
        usedAstPaths.clear()
        if not tp[1].endswith('.csv'):
            continue
        input_path = os.path.join(tp[0],tp[1])
        dbgout('csv path: ' + input_path)
        which = tp[1].rsplit('_',1)[0]
        # rid=tp[1].rfind('.')
        out_name=tp[1].rsplit('.',1)[0]
        who=os.path.basename(tp[0])
        outDir=os.path.join(OutDir,who)
        if not os.path.exists(outDir):
            os.makedirs(outDir)       
        # pack.ast_related.errors=errors
        output_path=os.path.join(outDir,tp[1])
        errDir=os.path.join(OutDir,'errors',who)
        if not os.path.exists(errDir):
            os.makedirs(errDir) 
        Errors = open(os.path.join(errDir,out_name+'_errors.txt'), 'w')
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
        # total_num=0
        machine_verified_num=0
        verified_rows=[]
        unknown_rows=[]
        with open(output_path , 'w', newline='') as csv_file:
            csv_w = csv.writer(csv_file)                     
            with open(input_path, 'r') as csv_file:
                csv_r = csv.reader(csv_file)
                header=next(csv_r)  # skip the header
                if len(header)<8:
                    header.append('alias_type')
                csv_w.writerow(header)  
                # total_num=len(csv_r)-1
                # label = int(not out_name.endswith('nonalias-pair'))
                # label = int(not out_name.endswith('nonalias'))
                line_id = 0
                for row in csv_r:
                    line_id+=1                
                    dbgout("line id: {}",line_id)  
                    Errors.write("row: %s\n"%str(row))              
                    # function='unknown'
                    # defuses.append(DefUse(name, total_path, def_line, function, (0,0), [], label))
                    if row[6]:
                        verified_rows.append(row)
                        continue
                    defuse1=getDefUse(row,which,0)
                    defuse2=getDefUse(row[3:],which,0)

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
                    alias_type=-1
                    # assert defuse1.path==defuse2.path , \
                    #     "defuse locations are not equal %s|%s and %s|%s"%(defuse1.path,defuse1.function,defuse2.path,defuse2.function)
                    if defuse1.path!=defuse2.path:
                        Errors.write("name %s in path: %s != \nname %s in path: %s at main\n"%(defuse1.name,defuse1.path,defuse2.name,defuse2.path))
                    else:
                        alias_type=checkAlias(defuse1,defuse2,tu,methods)                                       

                    # tsv_row.append(defuse1.path)
                    # if not defuse1.label and first_false:
                    #     csv_w.writerow(['False Alias Pairs: '])
                    #     first_false=False

                    # list1=defuseToRow(defuse1)
                    # list2=defuseToRow(defuse2)
                    if alias_type<0:
                        label=''
                    else:
                        machine_verified_num+=1
                        label=1 if alias_type>0 else 0
                    ls=[
                        defuse1.name, defuse1.path, defuse1.def_line, 
                        defuse2.name, defuse2.path, defuse2.def_line,
                        label, alias_type if alias_type>0 else '']
                    if alias_type<0:
                        unknown_rows.append(ls)
                    else:
                        verified_rows.append(ls)                    
                                             
                    print("read csv row end") 
            csv_w.writerows(unknown_rows)
            csv_w.writerows(verified_rows)
        machine_verified_list.append((who+'/'+tp[1],machine_verified_num,line_id))               
        Errors.close()
if __name__ == "__main__":
    if not os.path.exists(OutDir):
        os.makedirs(OutDir)      
    files=[]  
    processes=[]  
    cpu_cnt=multiprocessing.cpu_count()
    # cpu_cnt=1
    machine_verified_list = multiprocessing.Manager().list()
    machine_verify = open(os.path.join(OutDir,'machine_verify.txt'), 'w') 
    pid_list=open(os.path.join(OutDir,'refine_pid_list.txt'),'w')
    for tp in getFiles(csvFileDir):            
        if not tp[1].endswith('.csv'):
            continue
        files.append(tp)
    for i in range(cpu_cnt):
        if i>=len(files):
            break
        p = multiprocessing.Process(target=main, args=(files[i:len(files):cpu_cnt], machine_verified_list))
        p.start()
        processes.append(p)
        pid_list.write("pid: {} and name: {}\n".format(p.pid,p.name))
    for p in processes:
        p.join()
    for tp in machine_verified_list:
        machine_verify.write("%d alias pairs are verified by machine in %s (total num is %d)\n"%(tp[1],tp[0],tp[2]))
    thisFile=os.path.abspath(__file__)
    copyFile(thisFile,OutDir)
    machine_verify.close()
    pid_list.close()
   
