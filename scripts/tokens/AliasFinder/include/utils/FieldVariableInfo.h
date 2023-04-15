#ifndef FIELDVARIABLEINFO_H
#define FIELDVARIABLEINFO_H

#include <vector>
#include <clang/Frontend/ASTUnit.h>
using namespace std;
using namespace clang;

struct fv_info {
    VarDecl *VD;
    FieldDecl *FD;
    std::vector<FieldDecl *> fathers;

    fv_info() : VD(nullptr), FD(nullptr) {}
    fv_info(VarDecl *VD, FieldDecl *FD) : VD(VD), FD(FD) {}
    fv_info(VarDecl *VD, FieldDecl *FD, std::vector<FieldDecl *> fathers_) : VD(VD), FD(FD) {
        fathers = fathers_;
    } 
};

struct hash_fv_info{
    size_t operator() (fv_info fv)const{
        size_t res = hash<VarDecl *>()(fv.VD) ^ hash<FieldDecl *>()(fv.FD);
        for(FieldDecl *tmp : fv.fathers) {
            res ^= hash<FieldDecl *>()(tmp);
        }
        return res;
    }
};

struct cmp_fv_info{
    bool operator() (fv_info f1, fv_info f2)const{
        return (f1.VD == f2.VD) && (f1.FD == f2.FD) && (f1.fathers == f2.fathers);
    }
};

struct av_info {
    VarDecl *VD;
    FieldDecl *FD;
    std::vector<FieldDecl *> fathers;
    std::vector<unsigned> index;
    av_info() : VD(nullptr), FD(nullptr) {}
    av_info(VarDecl *VD, FieldDecl *FD) : VD(VD), FD(FD) {}
    av_info(VarDecl *VD, FieldDecl *FD, std::vector<FieldDecl *> fathers_, std::vector<unsigned> index_) : VD(VD), FD(FD) {
        fathers = fathers_;
        index = index_;
    } 
};

struct hash_av_info{
    size_t operator() (av_info av)const{
        size_t res = hash<VarDecl *>()(av.VD) ^ hash<FieldDecl *>()(av.FD);
        for(FieldDecl *tmp : av.fathers) {
            res ^= hash<FieldDecl *>()(tmp);
        }
        return res;
    }
};

struct cmp_av_info{
    bool operator() (av_info f1, av_info f2)const{
        return (f1.VD == f2.VD) && (f1.FD == f2.FD) && (f1.fathers == f2.fathers) && (f1.index == f2.index);
    }
};

#endif