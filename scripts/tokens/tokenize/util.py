#!/usr/bin/env python3.7
# -*-coding:utf-8-*-
import os
import re

from chardet import detect

from clang.cindex import TokenKind, CursorKind, TranslationUnit, Config

conf=Config()
vocabPreLen=0
minNum=9

def get_encoding_type(fileName):
    with open(fileName, 'rb') as f:
        rawdata = f.read()
    return detect(rawdata)['encoding']

def my_preorder(cursor):
    # if conf.lib.clang_Location_isInSystemHeader(cursor.extent.start)==0:
    if conf.lib.clang_Location_isInSystemHeader(cursor.extent.start)==0:
        yield cursor
        if cursor.kind != CursorKind.CXX_METHOD and cursor.kind != CursorKind.FUNCTION_DECL:
            for child in cursor.get_children():
                yield from my_preorder(child)
                # for descendant in my_preorder(child):
                #     yield descendant
        # for child in cursor.get_children():
        #     for descendant in my_preorder(child):
        #         yield descendant

def readVocabFile(file):
    global vocabPreLen
    global minNum
    id=0
    vocab = {"'<pad>_'": [0,minNum,''], "'<EOS>_'": [1,minNum,''], "'[CLS]_'": [2,minNum,''],
             "'[SEP]_'": [3,minNum,''], "'[MASK]_'": [4,minNum,''], "'[UNK]_'": [5,minNum,'']}

    try:
        with open(file, 'r') as vocab_file:
            # for line in vocab_file:
            for key in vocab_file:
                # key = line
                key=key.strip('\n')
                if len(key) == 0:
                    continue
                vocab[key] = [id,minNum,''] #id and key count and debug
                id += 1
        # vocabPreLen = len(vocab)
    except FileNotFoundError as fnfe:
        print(fnfe)
        # vocabPreLen = 0d
        # with open(file, 'w') as vocab_init:
        #     for key in vocab:
        #         vocab_init.write(key+"\n")
    # vocabPreLen=len(vocab)
    return vocab

def initVocab():
    vocab = {"'<pad>_'": [0,minNum,''], "'<EOS>_'": [1,minNum,''], "'[CLS]_'": [2,minNum,''],
             "'[SEP]_'": [3,minNum,''], "'[MASK]_'": [4,minNum,''], "'[UNK]_'": [5,minNum,'']}
    return vocab

# def writeVocabFile(file,vocab):
#     global minNum
#     debug_vocab=open('debug_vocab.txt','w')
#     with open(file,'a') as vocab_file:
#         key_ls=list(vocab.keys())
#         for i in range(vocabPreLen,len(key_ls)):
#             key=key_ls[i]
#             if vocab[key][1]>=minNum:
#                 vocab_file.write(key+"\n")
#             debug_vocab.write(key+' '+str(vocab[key][1])+' '+str(vocab[key][2])+'\n')
#     debug_vocab.close()

def writeOutFiles(file_v,file_t,vocab,vocab_val_mat):
    global minNum
    # debug_tkseq = open('debug_tkseq.txt', 'w')
    debug_vocab = open('debug_vocab.txt', 'w')
    key_ls = list(vocab.keys())

    with open(file_v,'w') as vocab_file:
        for i in range(len(key_ls)):
            key=key_ls[i]
            if vocab[key][1]>=minNum:
                vocab_file.write(key+"\n")
            debug_vocab.write(key+'\t'+str(vocab[key][1])+'\t'+vocab[key][2]+'\n')

    with open(file_t,'w') as out_file:
        for vals in vocab_val_mat:
            # tokens=[key_ls[val] for val in vals]
            tkstr=''
            for val in vals:
                token=key_ls[val]
                if vocab[token][1]<minNum:
                    token="'[UNK]_'"
                tkstr+=(token+' ')
            if tkstr:
                out_file.write(tkstr+'\n')
    debug_vocab.close()

def handleSpelling(token_info):
    res=[]
    try:
        spelling=token_info.spelling.strip('\\')
    except Exception:
        return ["'[UNK]_'"]
    # spelling=token_info.spelling.strip('\\')
    spelling = re.sub(r'\s', ' ', spelling).strip()
    # print('token kind spelling ', token.kind, spelling)
    if token_info.kind == TokenKind.COMMENT:
        res.append('//')
    elif token_info.kind == TokenKind.LITERAL:        
        if spelling.endswith('\'') or spelling.endswith('\"'):
            # spelling=re.sub(r'\\n|\\t|\\r',' ',spelling) #\n \r \t(，)
            prefix=''
            lid = spelling.find(spelling[-1])
            if lid >= 0 and lid != len(spelling) - 1:
                prefix=spelling[:lid]
                spelling = spelling[lid:]
            if prefix:
                res.append(prefix)
            # spelling = re.sub(r'\\0', r' \\0 ', spelling)
            spelling = re.sub(r'\\[\\0nrtvfab\47"]', r' \g<0> ', spelling)  # \47 is '
            spelling = re.sub(r'[^\w\\]', r' \g<0> ', spelling)
            spelling = re.sub(r'\\ ([\47"])', r'\\\1', spelling)

            for word in spelling.split():  # split()
                res.append(word)
        else:
            res.append(spelling)
    # elif token.kind == TokenKind.PUNCTUATION:
    #     for word in spelling.strip('\\').split():  # split()
    #         res.append(word)
    else:
        res.append(spelling)
    return res

def refineTokens(token_infos):
    res=[]
    for token_info in token_infos:
        for word in handleSpelling(token_info):
            res.append(word)
    return res

def refineMyTokens(token_infos):
    res=[]
    for token_info in token_infos:
        for word in handleSpelling(token_info):
            res.append([word,token_info.kind,token_info.location])
    return res


def updateVocabLoc(vocab, tokens, loc):
    for token in tokens:
        if not token in vocab:
            l = len(vocab)
            vocab[token] = [l,1,loc]
        else:
            vocab[token][1] += 1
            # vocab[token][2]=loc

def tokens2string(tokens):
    res=''
    for token in tokens:
        res += token + ' '
    return res
