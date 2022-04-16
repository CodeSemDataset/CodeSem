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

from clang.cindex import CursorKind, TokenKind, TranslationUnit

import sys
import csv

sys.path.append('..')
from queue import PriorityQueue
from util import refineMyTokens, my_preorder

# TODO
# mutable arguments
outDir = r'out/'
csvFileDir = sys.argv[1]
vocabPath = r'out/vocab.txt'
# srcPrefix = r'/home/shared/projects/'
vl = len(sys.argv)
if vl > 2:
    vocabPath = sys.argv[2]

if vl > 3:
    outDir = sys.argv[3]
    if not outDir.endswith('/'):
        outDir += '/'

# if vl>4:
#     srcPrefix=sys.argv[4]

prefixs=['/home/shared/projects/','/bigdata/qian/alias-analysis/']
mapWhich2Dir = {'gcc': prefixs[0]+'gcc-10.3.0/', 'mysql': prefixs[0]+'mysql-8.0.25/', 'linux': prefixs[0]+'linux-5.3.6/',
    'curl': prefixs[1]+'/curl-new/src/', 'git': prefixs[1]+'git/', 'redis':prefixs[1]+'redis/src/', 'tmux':prefixs[1]+'tmux/'}
# prefixs=['home/qian/Downloads/empirical_study/','/bigdata/qian/alias-analysis/']
# mapWhich2Dir = {'gcc': prefixs[0]+'gcc-10.3.0/', 'mysql': prefixs[0]+'mysql-8.0.25/', 'linux': prefixs[0]+'linux-2.6.24/',
#     'curl': prefixs[1]+'/curl-new/src/', 'git': prefixs[1]+'git/', 'redis':prefixs[1]+'redis/src/', 'tmux':prefixs[1]+'tmux/'}

# tu1 = None
methods=[]
pathPre = ''
funcPathPre = ''
mapVar2Deflines= {}
mapPath2Tu={}

class DefUse:  
    def __init__(self, name, path, def_line, function, func_scope, use_points, label):
        self.name = name
        self.path = path
        self.def_line = def_line
        self.function = function
        self.func_scope = func_scope
        self.use_points = use_points
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

def method_defs(cursor):
    methods=[]    
    for i in my_preorder(cursor):
        if (i.kind == CursorKind.CXX_METHOD or i.kind==CursorKind.FUNCTION_DECL) \
                and i.is_definition():
            # print('info of i: ', i.kind, i.extent)
            # yield i
            methods.append(i)
    return methods

def mapNameLoc2Id(my_tokens):
# def mapNameLoc2Id(defuse,tu):
    global vocab
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

def list2str(ls):
    res = ''
    for it in ls:
        res = res + str(it) + ' '
        # if it:
        #     res = res + str(it) + ' '
    return res
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
        # if line in loc2id:
        #     col_ids=loc2id[line]
        # else:
        #     use_pnt_ids.append(None)
        #     continue
        # if line not in loc2id:
        #     line_prior_que=PriorityQueue()
        #     for l in loc2id:
        #         gap=abs(line-l)
        #         line_prior_que.put((gap,l))
        #     line=line_prior_que.get()[1]
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
            if line in mapVar2Deflines[var_loc]:
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
    return [def_col_id[1], list2str(use_pnt_ids)]

def getTu(defuse):    
    try:
        rid = defuse.path.rindex('.')
        type = defuse.path[rid:]
        args = []
        if type == '.cpp' or type == '.cc' or type == '.h':
            args.append('-std=c++11')
        # tu = TranslationUnit.from_source(defuse1.path, args,
        #                                  options=TranslationUnit.PARSE_PRECOMPILED_PREAMBLE)
        return TranslationUnit.from_source(defuse.path, args)
    except BaseException as bex:
        print(bex)
        debug.write("tu error: {} in {} \n".format(bex,defuse.path))
        return None

def getMyTokens(defuse, tu):
    scope=defuse.func_scope
    rg = tu.get_extent(defuse.path, ((scope[0], 1), (scope[1], 1000)))  # get range of function scope
    token_infos = list(tu.get_tokens(extent=rg))  # get token list
    my_tokens=refineMyTokens(token_infos)

    return my_tokens

def seekFile(initPath,name):
    for tp in get_files(initPath):
        if tp[1]==name:
            return tp[0]+'/'+tp[1]
    return None

def defuse2row(defuse):
    scope=defuse.func_scope
    # path=defuse.path.split('/')[-1]
    path=defuse.path
    ls=[defuse.name,path,defuse.def_line,defuse.function,"%s-%s"%(scope[0],scope[1])]
    for pnt in defuse.use_points:
        # ls.append('"(0;%s;%s)"'%(pnt[0],pnt[1]))
        ls.append('(0;%s;%s)'%(pnt[0],pnt[1]))
    return ls

def findMethod(defuse,methods):
    line=defuse.def_line
    for method in methods:
        start = method.extent.start
        end = method.extent.end
        if line>=start.line and line<=end.line and defuse.path==str(start.file):
            return method
    return None

def updateDefUse(defuse,methods):
    method=findMethod(defuse,methods)
    if method:                   
        ext=method.extent
        defuse.func_scope=(ext.start.line,ext.end.line)
        # defuse.func_scope=defuse1.func_scope
        tokens=list(tu.get_tokens(extent=ext))  # get token list, tu is global var in main
        my_tokens = refineMyTokens(tokens)  # get token list
        for i in range(len(my_tokens)):
            my_token=my_tokens[i]
            if my_token[1] == TokenKind.IDENTIFIER:                        
                name=my_token[0]
                line=my_token[2].line
                column=my_token[2].column
                if name==defuse.name and line>defuse.def_line and my_tokens[i+1][0]!='=':
                    defuse.use_points.append((line,column))

def getDefUse(row,which,label):
    # defuse=DefUse()
    # defuse=object
    match_obj = re.match(r"(\w+) in ([^:]+):(\d+)", row[0])
    name=match_obj.group(1).strip()
    cur_path=match_obj.group(2).strip()
    cur_path = cur_path.lstrip('./')
    line=match_obj.group(3).strip()

    # defuse.name=name    
    total_path = mapWhich2Dir[which] + cur_path
    if not os.path.isfile(total_path):
        total_path=seekFile(mapWhich2Dir[which],cur_path.split('/')[-1])    
    if not total_path:
        debug.write(mapWhich2Dir[which] + cur_path + ' not found!\n')
        return None

    return DefUse(name, total_path, int(line), 'unknown', (0,0), [], label)
    
if __name__ == "__main__":
    if not os.path.exists(outDir):
        os.makedirs(outDir)  
    debug = open(outDir+'dbg_refine.txt', 'w')
    errors = open(outDir+'errors_refine.txt', 'w')

    for tp in get_files(csvFileDir):
        # csv_file_name=tp[1]
        defuses = []
        mapPath2Tu.clear()
        if not tp[1].endswith('.csv'):
            continue
        input_path = tp[0] + '/' + tp[1]
        print('csv path: ' + input_path)
        which = tp[1].split('_')[0]
        rid=tp[1].rfind('.')
        out_name=tp[1][:rid]

        # valid_paths=[]
        # preprocess the name, path and so on
        with open(input_path, 'r') as csv_file:
            csv_r = csv.reader(csv_file)
            next(csv_r)  # skip the header
            label = int(not out_name.endswith('nonalias-pair'))
            line_id = 0
            for row in csv_r:
                line_id+=1                             
              
                defuses.append(getDefUse(row,which,label))
                defuses.append(getDefUse(row[1:],which,label))

        print("read csv end")
        with open(outDir + out_name + '_manual.csv', 'w', newline='') as csv_file:
            csv_w = csv.writer(csv_file)
            csv_w.writerow(['Alias_name', 'dir', 'line_Num', 'Function_name', 'Function_Scope', 
                'User_points: (Position_No, LineNum, Column) instruction_content'])
            csv_w.writerow(['True Alias Pairs: '])
           
            first_false=True            

            for id in range(0, len(defuses), 2):              
                defuse1 = defuses[id]
                if id<len(defuses)-1:
                    defuse2 = defuses[id + 1]
                else:
                    defuse2=None
                if defuse1==None or defuse2==None:
                    continue
                # assert defuse1.path==defuse2.path and defuse1.function==defuse2.function, \
               
                # if defuse1.function!=defuse2.function:
                #     continue
                print("path pre: " + defuse1.path)
                if pathPre != defuse1.path:
                    print("path pre: " + pathPre)
                    pathPre = defuse1.path
                    if defuse1.path not in mapPath2Tu:
                        tu=getTu(defuse1)
                        mapPath2Tu[defuse1.path]=tu
                    else:
                        tu=mapPath2Tu[defuse1.path]

                    if tu:
                        methods=method_defs(tu.cursor)
                    else:
                        methods=[]
                # assert defuse1.path==defuse2.path , \
                #     "defuse locations are not equal %s|%s and %s|%s"%(defuse1.path,defuse1.function,defuse2.path,defuse2.function)
                if defuse1.path!=defuse2.path:
                    errors.write("name path:%s %s != name path:%s %s\n"%(defuse1.name,defuse1.path,defuse2.name,defuse2.path))
                else:
                    updateDefUse(defuse1,methods)                
                    updateDefUse(defuse2,methods)           

                # tsv_row.append(defuse1.path)
                if not defuse1.label and first_false:
                    csv_w.writerow(['False Alias Pairs: '])
                    first_false=False
                csv_w.writerow(defuse2row(defuse1))
                csv_w.writerow(defuse2row(defuse2))
               
                print("write csv row end")
        
    thisFile=os.path.abspath(__file__)
    copy_file(thisFile,outDir)
    debug.close()
