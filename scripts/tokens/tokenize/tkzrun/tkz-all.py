#!/usr/bin/env python3.7
# -*-coding:utf-8-*-

"""
    Usage: Python 3
"""
import math
import os
import sys
import time
import queue
import threading
import platform
from clang.cindex import Config
if 'CLANG_LIBRARY_PATH' in os.environ:
    Config.set_library_path(os.environ['CLANG_LIBRARY_PATH'])
sys.path.append('..')
from chardet import detect
from clang.cindex import CursorKind,TranslationUnit,Index

from pack.util import initVocab, tokens2string, writeOutFiles, \
    refineTokens, updateVocabLoc, my_preorder
import pack.util as util
from pack.config import *

conf=Config()
queDebug=queue.Queue(-1)
thrNum=8
#生产者类
class Producer(threading.Thread):
    def __init__(self, files, queue):
        threading.Thread.__init__(self)
        self.files=files
        self.data=queue

    def run(self):
        if platform.system() == "Windows":
            sep = '\\'
        else:
            sep = '/'        
        for file_path in self.files:
            code = ''
            rid = file_path.rindex('.')
            type = file_path[rid:]
            # if not type in validTypes:
            #     continue
            # tu = index.parse(file_path)
            print("file: ", file_path)
            rpid = file_path.rindex(sep)
            tmpname = file_path[:rpid + 1] + 'mytmp' + type

            # with open(file_path, 'r', errors="surrogateescape") as infile:
            with open(file_path, 'r', errors="replace") as infile:
            # encoding = get_encoding_type(file_path)
            # with open(file_path, 'rb') as infile:
                    # line=line.decode(encoding)
            # with open(file_path, 'r', encoding=get_encoding_type(file_path)) as infile:
                for line in infile:
                    if line.startswith('#if') or line.startswith('#e') or \
                            line.startswith('#def'):
                        code += ('//' + line)
                    else:
                        code += line
            print('open file path end')
            tmpfiles = [(tmpname, code)]
            args = []
            if type == '.cpp' or type == '.cc':
                args.append('-std=c++11')

            try:
                tu = TranslationUnit.from_source(tmpname, args, unsaved_files=tmpfiles)
            except BaseException as bex:
                # vocab_val_mat.append([-1,file_path + ' tu error ' + str(bex) + '\n'])
                # debug_tkseq.write(file_path + ' tu error ' + str(bex) + '\n')
                queDebug.put(file_path + ' tu error ' + str(bex))
                continue
            while True:
                try:
                    self.data.put((file_path,tu),timeout=5)
                    break
                except queue.Full:
                    pass
            print("tu end")


def get_encoding_type(fileName):
    with open(fileName, 'rb') as f:
        rawdata = f.read()
    return detect(rawdata)['encoding']

#sys.argv[1]代表输入的文件夹路径
def getFiles(total_dir):
    for filepath,dirnames,filenames in os.walk(total_dir):
        for filename in filenames:
            yield os.path.join(filepath,filename)

def methodDefs(cursor):
    # for i in cursor.walk_preorder():
    # curfile=str(cursor.extent.start.file)
    for i in my_preorder(cursor):
        # print('i start file: ',i.extent.start.file)
        # if str(i.extent.start.file)!=curfile:
        #     continue
        # print('cursor kind info',i.kind, i.extent)
        if (i.kind == CursorKind.CXX_METHOD or i.kind==CursorKind.FUNCTION_DECL) \
                and i.is_definition():
            # print('info of i: ', i.kind, i.extent)
            yield i
print(sys.argv)
if len(sys.argv) < 3:
    print("arguments error!")
    sys.exit(1)

encoding=''
outPath=sys.argv[1]
util.minNum=int(sys.argv[2])
vocabPath=os.path.join(outPath,'vocab.txt')
tkseqPath=os.path.join(outPath,'tkseq.txt')
# index = Index.create()
# index = clang.cindex.Index.create()
vocabValMat=[]
visitedLoc=set()
# validTypes={'.c','.cc','.cpp','.h'}
validTypes={'c','cc','cpp'}
prefix='/bigdata/qian/'
# prefix='/bigdata/newdisk/share/AllProjects'
# srcPaths=[prefix+'curl-curl-7_79_0',prefix+'rebuild-git/git',prefix+'redis',prefix+'tmux','/bigdata/newdisk/share/AllProjects']

if __name__ == "__main__":
    start_time=time.time()
    allfiles=[]
    # strin = input("请输入线程数：")
    # if strin.isdigit():
    #     thrNum = int(strin)

    for src_path in srcPaths:               
        for file_path in getFiles(src_path):
            # print(file_path)
            try:
                type=file_path.rsplit('.',1)[-1]
                print("type is ",type)
                if not type in validTypes:
                    continue
            except ValueError:
                continue            
            allfiles.append(file_path)
    
    # for file_path in getFiles(prefix):
    #     print("file_path is ",file_path)
    #     try:
    #         # rid = file_path.rindex('.')
    #         # type = file_path[rid:]
    #         type=file_path.rsplit('.',1)[-1]
    #         print("type is ",type)
    #         if not type in validTypes:
    #             continue
    #     except ValueError:
    #         continue
    #     allfiles.append(file_path)

    # vocab = readVocabFile(vocabPath)
    vocab=initVocab()
    # out_file=open(outPath,'a')
    debug_tkseq = open(os.path.join(outPath,'debug_tkseq.txt'), 'w')
    # persist_tkseq = open('persist_tkseq.txt', 'w')

    que = queue.Queue(3*thrNum)
    gap=math.ceil(len(allfiles)/thrNum)
    producers=[]
    for i in range(thrNum):
        base=i*gap
        pdr=Producer(allfiles[base:base+gap],que)
        producers.append(pdr)
        # pdr.setDaemon(True)
        pdr.start()

    while not que.empty() or threading.active_count()>1:
        while not queDebug.empty():
            debug_tkseq.write(queDebug.get() + '\n')

        try:
            tp=que.get(timeout=3)
        except queue.Empty:
            continue
        file_path=tp[0]
        tu=tp[1]
        defns = methodDefs(tu.cursor)
        tu_filepath=str(tu.cursor.extent.start.file)
        # if file_path in visitedFile:
        #     continue

        for defn in defns:
            # scope=(defn.extent.start.line, defn.extent.end.line)
            start = defn.extent.start
            end = defn.extent.end
            real_path = file_path
            if str(start.file) != tu_filepath:
                real_path = str(start.file)
            # if real_file in visitedFile:
            #     continue
            loc = real_path + str(((start.line, start.column), (end.line, end.column)))

            if loc in visitedLoc:
                continue
            visitedLoc.add(loc)
            # rg = tu.get_extent(str(start.file), rg_tp)  # get range of function scope
            token_infos = list(tu.get_tokens(extent=defn.extent))  # get token list
            print(loc)
            debug_tkseq.write(loc+'\n')
            # out_file.write(file_path+str(scope)+'\n')
            try:
                tokens = refineTokens(token_infos)
            except Exception as e:             
                debug_tkseq.write('refine tokens error: '+str(e))
                tokens=[]

            print("refine tokens end")
            # updateVocab(vocab,tokens)
            tkstr = tokens2string(tokens)
            updateVocabLoc(vocab, tokens, loc)
            if not loc.startswith(excludePrefix):
                vocabValMat.append([vocab[token][0] for token in tokens])
            debug_tkseq.write(tkstr+'\n')
            # persist_tkseq.write(tkstr+'\n')

            # print("out file write end")

        print("==========")

    writeOutFiles(vocabPath, tkseqPath, vocab, vocabValMat)
    print("out file end")
    end_time=time.time()
    total_time=(end_time-start_time)/3600
    print("total time: {} h".format(total_time))
    debug_tkseq.write("total time: {} h\n".format(total_time))
    debug_tkseq.close()

