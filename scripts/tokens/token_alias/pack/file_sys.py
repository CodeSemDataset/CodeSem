import os
import shutil
from pack.config import *


def copyFile(srcfile,dstpath):                       # 复制函数
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

def seekFile(root_path,name):
    for tp in getFiles(root_path):
        if tp[1]==name:
            return tp[0]+'/'+tp[1]
    return None

def getFileName(path):
    strs=path.rsplit('/',1)
    if(len(strs)>1):
        file_name=strs[1]       
    else:
        file_name=path
    return file_name

def getFileKey(path):
    file_name=getFileName(path)
    strs=file_name.split('.')
    if not strs[0]:
        return '.'+strs[1]
    else:
        return strs[0]
