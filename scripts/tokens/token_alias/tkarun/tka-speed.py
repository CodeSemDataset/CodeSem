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

sys.path.append('..')
from queue import PriorityQueue
from util import readVocabFile, refineMyTokens

# TODO
# mutable arguments
outDir = r'out/'
csvFileDir = sys.argv[1]
vocabPath = r'out/vocab.txt'
# srcPrefix = r'/home/shared/projects/'
MaxNum=5000
CountNum=0
vl = len(sys.argv)
if vl > 2:
    vocabPath = sys.argv[2]

if vl > 3:
    outDir = sys.argv[3]
    if not outDir.endswith('/'):
        outDir += '/'

# if vl>4:
#     srcPrefix=sys.argv[4]
# isFullPath=False
isFullPath=True
prefixs=['/home/shared/projects/','/bigdata/qian/alias-analysis/']
mapWhich2Dir = {'gcc': prefixs[0]+'gcc-10.3.0/', 'mysql': prefixs[0]+'mysql-8.0.25/', 'linux': prefixs[0]+'linux-5.3.6/',
    'curl': prefixs[1]+'/curl-new/src/', 'git': prefixs[1]+'git/', 'redis':prefixs[1]+'redis/src/', 'tmux':prefixs[1]+'tmux/'}
# prefixs=['home/qian/Downloads/empirical_study/','/bigdata/qian/alias-analysis/']
# mapWhich2Dir = {'gcc': prefixs[0]+'gcc-10.3.0/', 'mysql': prefixs[0]+'mysql-8.0.25/', 'linux': prefixs[0]+'linux-2.6.24/',
#     'curl': prefixs[1]+'/curl-new/src/', 'git': prefixs[1]+'git/', 'redis':prefixs[1]+'redis/src/', 'tmux':prefixs[1]+'tmux/'}

tu1 = ''
pathPre = ''
funcPathPre = ''
mapVar2Deflines= {}
mapPath2Tu={}

class DefUse:
    def __init__(self, name, path, defLine, function, funcScope, usePoints, label):
        self.name = name
        self.path = path
        self.def_line = defLine
        self.function = function
        self.func_scope = funcScope
        self.use_points = usePoints
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
        errors_tka.write("name {} not found in {}\n".format(name,curLoc))
        return None
    loc2id=map_name_loc2id[name]
    if defuse.def_line not in loc2id:
        errors_tka.write("def line {} not found in {}\n".format(defuse.def_line,curLoc))
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
   
    def_col_id=loc2id[defuse.def_line][0]
    return [def_col_id[1], list2str(use_pnt_ids)]

def getTu(defuse):
    rid = defuse.path.rindex('.')
    type = defuse.path[rid:]
    args = []
    if type == '.cpp' or type == '.cc' or type == '.h':
        args.append('-std=c++11')
    try:
        # tu = TranslationUnit.from_source(defuse1.path, args,
        #                                  options=TranslationUnit.PARSE_PRECOMPILED_PREAMBLE)
        return TranslationUnit.from_source(defuse.path, args)
    except BaseException as bex:
        print(bex)
        debug_tka.write("tu error: {} in {} \n".format(bex,defuse.path))
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




if __name__ == "__main__":
    vocab = readVocabFile(vocabPath)
    if len(vocab) <= 6:
        sys.exit(1)
    if not os.path.exists(outDir):
            os.makedirs(outDir)  
    debug_tka = open(outDir+'dbg_tka.txt', 'w')
    errors_tka = open(outDir+'errors_tka.txt', 'w')

    for tp in get_files(csvFileDir):
        # csv_file_name=tp[1]
        defuses = []
        if not tp[1].endswith('.csv'):
            continue
        csv_path = tp[0] + '/' + tp[1]
        print('csv path: ' + csv_path)
        which = tp[1].split('_')[0]
        rid=tp[1].rfind('.')
        out_name=tp[1][:rid]

        mapPath2Tu.clear()

        # valid_paths=[]
        # preprocess the name, path and so on
        with open(csv_path, 'r') as csv_file:
            csv_r = csv.reader(csv_file)
            next(csv_r)  # skip the header
            label = 0
            line_id = 0
            for row in csv_r:
                line_id+=1
                # print("line id: ",line_id)
                if not row:
                    defuses.append(None)
                    continue
                if row[0].strip().endswith(':'):
                    label = (label + 1) % 2
                    # defuses.append(None)
                    continue
                if len(row)<5 or row[0] == '' or row[1].find('!dbg') >= 0 or \
                        row[1].find(' ') >= 0 or row[4]=='':
                    defuses.append(None)
                    continue
                if isFullPath:
                    total_path = row[1]
                else:                    
                    cur_path = row[1].lstrip('./')    
                    if cur_path.startswith(which + '-'):
                        # print("pre: "+cur_path)
                        sep_id = cur_path.find('/')
                        cur_path = cur_path[sep_id + 1:]
                        # print(cur_path)
                    total_path = mapWhich2Dir[which] + cur_path
                    if not os.path.isfile(total_path):
                        total_path=seekFile(mapWhich2Dir[which],cur_path.split('/')[-1])
                
                    if not total_path:
                        debug_tka.write(mapWhich2Dir[which] + cur_path + ' not found!\n')
                        defuses.append(None)
                        continue
                    # valid_paths.append(total_path)
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
                    if var_loc in mapVar2Deflines:
                        mapVar2Deflines[var_loc].add(def_line)
                    else:
                        mapVar2Deflines[var_loc]={def_line}
                    defuses.append(DefUse(name, total_path, def_line, row[3], scope, pnts, label))
                else:
                    defuses.append(None)
                # line_id += 1
        CountNum=0
        with open(outDir + out_name + '_index.tsv', 'w', newline='') as tsv_file:
            tsv_w = csv.writer(tsv_file, delimiter='\t')
            tsv_w.writerow(['vocab_val_seq', 'def1_index', 'use1_index',
                            'def2_index', 'use2_index', 'label'])

            # for vp in valid_paths:
            #     tsv_w.writerow([vp,'tsv'])

            # tsv_row = []
            # for defuse in defuses:
            for id in range(0, len(defuses), 2):
                tsv_row = []
                defuse1 = defuses[id]
                if id<len(defuses)-1:
                    defuse2 = defuses[id + 1]
                else:
                    defuse2=None
                if defuse1==None or defuse2==None:
                    continue
                mystr1 = defuse1.path + ' ' + str(defuse1.func_scope)
                mystr2 = defuse2.path + ' ' + str(defuse2.func_scope)
                if mystr1!=mystr2:
                    continue #
                if funcPathPre != mystr1:
                    print("func path pre and cur: "+funcPathPre+'   '+mystr1)
                    funcPathPre = mystr1
                    scope = defuse1.func_scope
                    if pathPre != defuse1.path:
                        print("path pre: " + pathPre)
                        pathPre = defuse1.path
                        if defuse1.path not in mapPath2Tu:
                            tu1=getTu(defuse1)
                            mapPath2Tu[defuse1.path]=tu1
                        else:
                            tu1=mapPath2Tu[defuse1.path]
                        # tu1=getTu(defuse1)

                    # rg = tu1.get_extent(defuse1.path, ((scope[0], 1), (scope[1], 1)))  # get range of function scope
                    if not tu1:
                        continue
                    my_tokens1 = getMyTokens(defuse1, tu1)  # get token list
                    map_name_loc_id1 = mapNameLoc2Id(my_tokens1)
                    # vocab value sequence
                    debug_tka.write("token infos: {}\n".format(mystr1 + str([tki[0] for tki in my_tokens1])))
                    vocab_val_seq = []
                    for my_token in my_tokens1:
                        spelling=my_token[0]
                        if spelling in vocab:
                            vocab_val_seq.append(vocab[spelling][0])
                        else:
                            vocab_val_seq.append(vocab["'[UNK]_'"][0])

                # tsv_row.append(defuse1.path)

                tsv_row.append(list2str(vocab_val_seq))
                # tsv_row.extend([map_loc_id[(defuse.def_line, 0)], list2str(use_pnt_ids)])
                print("name1 mystr1 name2 mystr2: ",defuse1.name,mystr1,defuse2.name,mystr2)
                # tsv_row.extend(getDefUseLs(defuse1, map_name_loc_id1) + getDefUseLs(defuse2, map_name_loc_id1))
                defUseLs1=getDefUseLs(defuse1, map_name_loc_id1)
                defUseLs2=getDefUseLs(defuse2, map_name_loc_id1)
                if not (defUseLs1 and defUseLs2):
                    continue
                tsv_row.extend(defUseLs1+defUseLs2)
                tsv_row.append(defuse1.label)
                tsv_w.writerow(tsv_row)
                CountNum+=1
                if CountNum>=MaxNum:
                    break
                # print("tsv row: ",tsv_row)
                # mystr2=defuse2.path+' '+str(defuse2.func_scope)
                debug_tka.write("{} * {} ** tsv row: {} ****\n{}\n".format(defuse1.name, defuse2.name, mystr1 + ' ' + mystr2, tsv_row))
                # print(tsv_row)
                print("write tsv row end")
        
    thisFile=os.path.abspath(__file__)
    copy_file(thisFile,outDir)
    debug_tka.close()
