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
import multiprocessing

sys.path.extend(['.','..'])
from queue import PriorityQueue
from pack.util import readVocabFile, dbgout 
from pack.ast_related import *
from pack.file_sys import *

# TODO
debug=None
errors=None
which=None
# mutable arguments
outDir = r'out/'
csvFileDir = sys.argv[1]
vocabPath = r'out/vocab.txt'
# srcPrefix = r'/home/shared/projects/'
MaxNum=-1
CountNum=0
vl = len(sys.argv)
if vl > 2:
    vocabPath = sys.argv[2]

if vl > 3:
    outDir = sys.argv[3]
    if not outDir.endswith('/'):
        outDir += '/'

isAbsPath=False
if vl>4:
    isAbsPath=(sys.argv[4]=='full')


# prefixes=['/home/qian/Downloads/empirical_study/','/bigdata/qian/alias-analysis/']
# prefixes1=[prefixes[1]+'wy-c-projects/',prefixes[1]+'wy-cpp-projects/']

# whichToDir = {
#     'gcc': prefixes[0]+'gcc-10.3.0/', 'mysql': prefixes[0]+'mysql-8.0.25/', 'linux': prefixes[0]+'wy-linux/linux-5.3.6/',
#     'curl': prefixes[1]+'curl-new/src/', 'git': prefixes[1]+'git/', 'redis':prefixes[1]+'redis/deps/hiredis/', 'tmux':prefixes[1]+'tmux/',
#     'h2o': prefixes1[0]+'h2o/', 'libgit2':prefixes1[0]+'libgit2/', 'the-silver-searcher':prefixes1[0]+'the_silver_searcher/', 
#     'protobuf':prefixes1[1]+'protobuf/'}

# whichToAstRoot={
#     'gcc': prefixes[0]+'gcc-10.3.0/build/', 'mysql': prefixes[0]+'mysql-8.0.25/build-ast/', 'linux': prefixes[0]+'wy-linux/linux-5.3.6/',
#     'curl': '/bigdata/qian/curl-curl-7_79_0/build-ast/', 'git': '/bigdata/qian/rebuild-git/git/', 'redis':'/bigdata/qian/redis/', 'tmux':'/bigdata/qian/tmux/build-ast/',
#     'h2o': prefixes1[0]+'h2o/build-ast/', 'libgit2':prefixes1[0]+'libgit2/build-ast/', 'the-silver-searcher':prefixes1[0]+'the_silver_searcher/build-ast/', 
#     'protobuf':prefixes1[1]+'protobuf/build-ast/'}

direct_extend_ast={'mysql'} 

tu = ''
pathPre = ''
funcPathPre = ''
mapVarToDeflines= {}
mapFileToAstPaths={}
mapPathToTu={}
mapFuncLocToMyTokens={}
# mapPathToLoc2Id={}
# mapPathToMethods={}
usedAstPaths=set()

class DefUse:  
    def __init__(self, name, path, def_line, alias_type, func_scope, use_points, label):
        self.name = name
        self.path = path
        self.def_line = def_line
        self.alias_type = alias_type
        self.func_scope = func_scope
        self.use_points = use_points
        self.label = label
        self.relative_path=''
        self.ast_path=''      
        self.which=''

def addNameLocToId(my_tokens):
# def mapNameLoc2Id(defuse,tu):
    # global vocab
    map_res = {}

    id = 0
    for my_token in my_tokens:
        if my_token[1] == TokenKind.IDENTIFIER:
            # print(token_info.location,end=' ')
            name=my_token[0]
            line=my_token[2].line
            column=my_token[2].column
            if not name in map_res:
                map_res[name]={line:[(column,id)]}
            else:
                if not line in map_res[name]:
                    map_res[name][line]=[(column,id)]
                else:
                    map_res[name][line].append((column,id))

        id += 1
    return map_res

def getLocToIdName(my_tokens):
    id = 0
    loc2idName={}
    for my_token in my_tokens:
        if my_token[1] == TokenKind.IDENTIFIER:
            # print(token_info.location,end=' ')
            name=my_token[0]
            line=my_token[2].line
            column=my_token[2].column
            loc2idName[(line,column)]=(id,name)
        id += 1    
    return loc2idName

# id is the index of token in token sequence
def getDefUseLs(defuse, map_name_loc2id):
    use_pnt_ids = []
    name=defuse.name
    visited_ids=set()
    curLoc=defuse.path+str(defuse.func_scope)
    if name not in map_name_loc2id:        
        errors.write("name {} not found in {}\n".format(name,curLoc))
        return None
    loc2id=map_name_loc2id[name]
    if defuse.def_line not in loc2id:
        errors.write("def line {} not found in {}\n".format(defuse.def_line,curLoc))
        return None
    
    for pnt in defuse.use_points:
        # print('def use pnt: '+defuse.path+' '+defuse.name+' '+str(pnt))
        line=pnt[0]        
        line_prior_que=PriorityQueue()
        for l in loc2id:
            gap=abs(line-l)
            line_prior_que.put((gap,l))
        while not line_prior_que.empty():            
            line=line_prior_que.get()[1]
            col_ids=loc2id[line]
            prior_que=PriorityQueue()
            for col_id in col_ids:
                gap=abs(pnt[1]-col_id[0])
                prior_que.put((gap,col_id[1]))
            var_loc=defuse.path+str(defuse.func_scope)+name
            if line in mapVarToDeflines[var_loc]:
                defid=col_ids[0][1]
            else:
                defid=-1
            tar_id=-1
            while not prior_que.empty():
                tar_id = prior_que.get()[1]
                if tar_id!=defid and tar_id not in visited_ids:
                    visited_ids.add(tar_id)
                    use_pnt_ids.append(tar_id)
                    break
                tar_id=-1
            if tar_id>=0:
                break
        if tar_id<0:
            use_pnt_ids.append(None)        

    # def_id=-1
    # for loc in map_line.keys():
    #     if loc[0]==defuse.def_line:
    #         break
    # if defuse.def_line not in loc2id:
    #     errors_tka.write("def line {} not found in {}\n".format(defuse.def_line,curLoc))
    #     return None
    def_col_id=loc2id[defuse.def_line][0]
    return [def_col_id[1], listToStr(use_pnt_ids)]

def getDefUseList(defuse,loc2idName):
    use_pnt_ids = []
    name=defuse.name    
    func_loc=defuse.path+str(defuse.func_scope)
    # if name not in map_name_loc2id:        
    #     errors.write("name {} not found in {}\n".format(name,func_loc))
    #     return None
    # loc2id=map_name_loc2id[name]
    # if defuse.def_line not in loc2id:
    #     errors.write("def line {} not found in {}\n".format(defuse.def_line,func_loc))
    #     return None
    def_id=-1
    for loc,id_name in loc2idName.items():
        if loc[0]==defuse.def_line and id_name[1]==name:
            def_id=id_name[0]
            break
    for pnt in defuse.use_points:
        # print('def use pnt: '+defuse.path+' '+defuse.name+' '+str(pnt))
        try:
            id=loc2idName[pnt][0]
            use_pnt_ids.append(id) 
        except KeyError:
            # errors.write("key error for %s in %s at %s\n"%(defuse.name,defuse.path,str(defuse.func_scope)))                      
            errors.write("key error for %s in %s at %s\n"%(defuse.name,defuse.path,defuse.func_scope))                      

    return [def_id, listToStr(use_pnt_ids)]

def addPathToTu(defuse):
    # which=defuse.which
    total_path=defuse.path
    file_name=getFileName(total_path)
    # global variable which
    # if which in direct_extend_ast:       
    #     file_key=file_name
    # else:        
    #     file_key=file_name.rsplit('.',1)[0]
    # ast_path=''   
    file_key=getFileKey(total_path)
    if file_key in mapFileToAstPaths:
        astPaths=mapFileToAstPaths[file_key]
        if total_path not in mapPathToTu:
            for tmp_ast_path in astPaths:
                if tmp_ast_path in usedAstPaths:
                    continue
                tu=readAst(tmp_ast_path)
                if not tu:
                    errors.write("tu error for total_path:%s and ast path:%s at addPathToTu\n"%(total_path,tmp_ast_path))
                    continue
                mapPathToTu[tu.spelling]=tu 
                usedAstPaths.add(tmp_ast_path) 
                if total_path==tu.spelling:
                    # ast_path=tmp_ast_path
                    break;  
    else:
        errors.write("file key %s of total_path %s is not in mapFileToAstPaths at getDefUse\n"%(file_key,total_path))
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
            errors.write("tu error for total_path %s at getDefUse\n"%(total_path))

def getDefUse(row):
    global label
    if not row:
        return None
    if row[0].strip().endswith(':'):
        label = (label + 1) % 2
        return None        
    if len(row)<5 or row[0] == '' or row[1].find('!dbg') >= 0 or \
            row[1].find(' ') >= 0 or row[4]=='':
        return None
    if isAbsPath:
        total_path = row[1]
    else:                    
        cur_path = row[1].lstrip('./')    
        if cur_path.startswith(which + '-'):
            # print("pre: "+cur_path)
            sep_id = cur_path.find('/')
            cur_path = cur_path[sep_id + 1:]
            # print(cur_path)
        total_path = whichToDir[which] + cur_path
        if not os.path.isfile(total_path):
            total_path=seekFile(whichToDir[which],cur_path.split('/')[-1])
    
        if not total_path:
            errors.write(whichToDir[which] + cur_path + ' not found!\n')
            return None        
    raw_scope = row[4].split('-')
    scope = (int(raw_scope[0]), int(raw_scope[1]))
    pnts = []
    has_val=False
    for i in range(5, len(row)):
        if row[i]=='':
            continue
        match_obj = re.match(r"\(\d+;(\d+);(\d+)\)", row[i])
        if not match_obj:
            continue
        pnt = (int(match_obj.group(1)), int(match_obj.group(2)))
        if pnt[0] and pnt[1]:
            has_val=True
            # print("row i and path and pnt",row[i],total_path,pnt)
            pnts.append(pnt)
    if has_val:
        name = re.sub(r'\W+', '', row[0])
        def_line=int(row[2])
        var_loc=total_path+str(scope)+name
        if var_loc in mapVarToDeflines:
            mapVarToDeflines[var_loc].add(def_line)
        else:
            mapVarToDeflines[var_loc]={def_line}
        return DefUse(name, total_path, def_line, row[3], scope, pnts, label)
    else:
        return None

def main(data,start,end,step):
    global label,debug,errors,which
    # global debug 
    # global errors
    # global which
    res_cnt = open(outDir+'res_cnt.txt', 'w')
    for tp in data[start:end:step]:
        # csv_file_name=tp[1]
        defuses = []
        if not tp[1].endswith('.csv'):
            continue
        csv_path = tp[0] + '/' + tp[1]
        dbgout('csv path: ' + csv_path)
        which = tp[1].rsplit('_',1)[0]
        # rid=tp[1].rfind('.')
        out_name=tp[1].rsplit('.',1)[0] 
        mapFileToAstPaths.clear()
        mapPathToTu.clear()       
        usedAstPaths.clear()      
        mapFuncLocToMyTokens.clear()

        debug = open(outDir+out_name+'-dbg-tka.txt', 'w')
        errors = open(outDir+out_name+'-errors-tka.txt', 'w')
        artifical_verify = open(outDir+out_name+'-artifical-verify.csv', 'w')
        artifical_verify_writer=csv.writer(artifical_verify)
        artifical_verify_writer.writerow([
            'name1','path1','def_line1','name2','path2','def_line2','label'
        ])
        init_errors(errors)

        with open(whichToAstRoot[which]+'astList.txt','r') as ast_list:
            for ast_path in ast_list:
                ast_path=ast_path.strip()
               
                file_key=getFileKey(ast_path)              
                if file_key not in mapFileToAstPaths:
                    mapFileToAstPaths[file_key]=[ast_path]
                else:
                    # errors.write("duplicate ast path %s for one ast file name %s\n"%(ast_path,file_name))
                    mapFileToAstPaths[file_key].append(ast_path)
    
               
        CountNum=0
        with open(outDir + out_name + '-index.tsv', 'w', newline='') as tsv_file:
            tsv_w = csv.writer(tsv_file, delimiter='\t')
            tsv_w.writerow(['vocab_val_seq', 'def1_index', 'use1_index',
                            'def2_index', 'use2_index', 'label'])

            # for vp in valid_paths:
            #     tsv_w.writerow([vp,'tsv'])

            # tsv_row = []
            # for defuse in defuses:
            with open(csv_path, 'r') as csv_file:
                csv_r = csv.reader(csv_file)
                next(csv_r)  # skip the header
                label = 0
                line_id = 0
                # for row in csv_r:
                while True:
                    line_id+=1
                    dbgout("line id: {}",line_id)

                    tsv_row = []
                    old_label=label
                    row=next(csv_r,None)
                    if not row:
                        break
                    # print("csv_r row0: ",row)
                    dbgout("csv_r row0: {}",row)
                    defuse1 = getDefUse(row)
                    # this row just change label
                    if(old_label!=label):
                        continue
                    row=next(csv_r,None)
                    if not row:
                        break
                    dbgout("csv_r row1: {}",row)
                    defuse2= getDefUse(row)
                    if defuse1==None or defuse2==None:
                        continue
                    func_loc1 = defuse1.path + ' ' + str(defuse1.func_scope)
                    func_loc2 = defuse2.path + ' ' + str(defuse2.func_scope)
                    if func_loc1!=func_loc2:
                        errors.write("func_loc1: %s != func_loc2: %s\n"%(func_loc1,func_loc2))
                        continue #默认函数内分析

                    addPathToTu(defuse1)
                    if defuse1.path in mapPathToTu:
                        tu=mapPathToTu[defuse1.path] 
                        if func_loc1 not in mapFuncLocToMyTokens:
                            my_tokens = getMyTokens(defuse1, tu)  # get token list                        
                            mapFuncLocToMyTokens[func_loc1]=my_tokens  
                            # mapPathToLoc2Id[defuse1.path]=loc2id
                        else:
                            my_tokens=mapFuncLocToMyTokens[func_loc1]
                    else:
                        tu=None                        
                        errors.write("defuse path %s is not in mapPathToTu at main\n"%(defuse1.path))
                    
                    if not tu:
                        continue
                    loc2idName=getLocToIdName(my_tokens)
                    # vocab value sequence
                    debug.write("token infos: {}\n".format(func_loc1 + str([tki[0] for tki in my_tokens])))
                    vocab_val_seq = []
                    for my_token in my_tokens:
                        spelling=my_token[0]
                        if spelling in vocab:
                            vocab_val_seq.append(vocab[spelling][0])
                        else:
                            vocab_val_seq.append(vocab["'[UNK]_'"][0])

                    tsv_row.append(listToStr(vocab_val_seq))
                    # tsv_row.extend([map_loc_id[(defuse.def_line, 0)], listToStr(use_pnt_ids)])
                    debug.write("%s in %s and %s in %s\n"%(defuse1.name,func_loc1,defuse2.name,func_loc2))
                    # tsv_row.extend(getDefUseLs(defuse1, map_name_loc_id1) + getDefUseLs(defuse2, map_name_loc_id1))
                    # defUseLs1=getDefUseLs(defuse1, map_name_loc_id)
                    # defUseLs2=getDefUseLs(defuse2, map_name_loc_id)
                    defUseLs1=getDefUseList(defuse1,loc2idName)
                    defUseLs2=getDefUseList(defuse2,loc2idName)
                    if defUseLs1[0]<0 or defUseLs2[0]<0:
                        errors.write("error: def id is -1 for %s in %s or %s in %s\n"%(
                            defuse1.name,defuse1.path,defuse2.name,defuse2.path
                        ))
                        continue
                    tsv_row.extend(defUseLs1+defUseLs2)
                    tsv_row.append(defuse1.label)
                    tsv_w.writerow(tsv_row)

                    artifical_verify_writer.writerow([
                        defuse1.name, defuse1.path, defuse1.def_line,
                        defuse2.name,defuse2.path, defuse2.def_line, ''
                    ])
                    CountNum+=1
                    if MaxNum>0 and CountNum>=MaxNum:
                        break
                    # print("tsv row: ",tsv_row)
                    # mystr2=defuse2.path+' '+str(defuse2.func_scope)
                    # debug.write("{} * {} ** tsv row: {} ****\n{}\n".format(defuse1.name, defuse2.name, mystr1 + ' ' + mystr2, tsv_row))
                    # print(tsv_row)
                    dbgout("write tsv row end")
        res_cnt.write("%s has %d pairs\n"%(out_name,CountNum))
        debug.close()
        errors.close()
        artifical_verify.close()  
    res_cnt.close()

if __name__ == "__main__":
    vocab = readVocabFile(vocabPath)
    if len(vocab) <= 6:
        sys.exit(1)
    if not os.path.exists(outDir):
        os.makedirs(outDir)  

    files=[]
    cpu_cnt=multiprocessing.cpu_count()
    pid_list=open(os.path.join(outDir,'tka_pid_list.txt'),'w')
    for tp in getFiles(csvFileDir):            
        if not tp[1].endswith('.csv'):
            continue
        files.append(tp)
    for i in range(cpu_cnt):
        if i>=len(files):
            break
        p = multiprocessing.Process(target=main, args=(files, i, len(files), cpu_cnt))
        p.start()  
        pid_list.write("pid: {} and name: {}\n".format(p.pid,p.name))
    thisFile=os.path.abspath(__file__)
    copyFile(thisFile,outDir)
    pid_list.close()
  
    
