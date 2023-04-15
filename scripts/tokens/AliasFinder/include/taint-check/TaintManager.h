#ifndef TAINT_MANAGER_H
#define TAINT_MANAGER_H

#include <list>
#include <unordered_map>
#include <queue>
#include <stack>

// #include <clang/Analysis/CFG.h>
#include <clang/Frontend/ASTUnit.h>

#include "../utils/FieldVariableInfo.h"
#include "../framework/ASTElement.h"
#include "../framework/ASTManager.h"
#include "TaintValue.h"

// #include "../CFG/CFG.h"
#include <clang/Analysis/CFG.h>

using namespace clang;

class TaintBimap {
public:
  friend class TaintManager;
  
private:
  void insertVariable(ASTVariable *V, VarDecl *VD);
  void insertFieldVariable(ASTFieldVariable *V);
  void insertArrayVariable(ASTArrayVariable *V);
  void insertThisFieldVariable(ASTFieldVariable *V);
  void insertThisArrayVariable(ASTArrayVariable *V);

  ASTVariable *getASTVariable(VarDecl *VD);
  ASTFieldVariable *getASTFieldVariable(fv_info info);
  ASTArrayVariable *getASTArrayVariable(av_info info);
  ASTFieldVariable *getASTThisFieldVairable(fv_info info);
  ASTArrayVariable *getASTThisArrayVariable(av_info info);

  std::unordered_map<VarDecl *, ASTVariable *> variableMap;
  std::unordered_map<fv_info, ASTFieldVariable *, hash_fv_info, cmp_fv_info> fieldVariableSet;
  std::unordered_map<fv_info, ASTFieldVariable *, hash_fv_info, cmp_fv_info> thisFieldVariableSet;
  std::unordered_map<av_info, ASTArrayVariable *, hash_av_info, cmp_av_info> arrayVariableSet;
  std::unordered_map<av_info, ASTArrayVariable *, hash_av_info, cmp_av_info> thisArrayVariableSet;
};

class TaintManager {
public:
  TaintManager(FunctionDecl *FD, ASTFunction *F, ASTManager *manager);
  ~TaintManager();

  ASTVariable *addASTVariable(VarDecl *VD);
  ASTFieldVariable *addASTFieldVariable(VarDecl *VD, FieldDecl *FD, ASTFieldVariable *father_fv);
  ASTArrayVariable *addASTArrayVariable(VarDecl *VD, FieldDecl *FD, unsigned index, ASTFieldVariable *father_fv, ASTArrayVariable *father_av);

  ASTVariable *getASTVariable(VarDecl *VD);
  ASTFieldVariable *getASTFieldVariable(fv_info info);
  ASTArrayVariable *getASTArrayVariable(av_info info);
  ASTFieldVariable *getASTThisFieldVariable(fv_info info);
  ASTArrayVariable *getASTThisArrayVariable(av_info info);

  bool isPointerOrReference(ASTFieldVariable *fv); //自身或祖先是否为指针或引用类型

  std::string getFullName(ASTVariable *V);
  std::string getFullName(ASTFieldVariable *FV);
  std::string getFullName(ASTArrayVariable *AV);
  std::string getGlobalFullName(ASTGlobalVariable *V);
  std::string getGlobalFullName(ASTFieldVariable *FV);
  std::string getGlobalFullName(ASTArrayVariable *AV);
  void dumpAllVariableInfo();

  taint_info addVariableWithPosVec(ASTVariable *root, std::vector<int> index);

private:
  void addMatchedFieldVariables(MemberExpr *expr);
  void addMatchedArrayVariable(ArraySubscriptExpr *expr);
  taint_info addVariableWithPos(taint_info info, int pos);
  taint_info addFieldWithPos(taint_info info, int pos);
  taint_info addArrayWithPos(taint_info info, int index);
  
  ASTFunction *F;
  ASTManager *astmanager;
  TaintBimap *bimap;
};

bool isRecord(VarDecl *vd);  
bool isRecord(FieldDecl *fd);
RecordDecl *getRecord(VarDecl *vd);
RecordDecl *getRecord(FieldDecl *fd);
RecordDecl *getArrayElementRecord(VarDecl *VD);
RecordDecl *getArrayElementRecord(FieldDecl *FD);
clang::QualType getRealType(VarDecl *VD);
clang::QualType getRealType(FieldDecl *FD);

//不包括自身
bool getFathersChain(MemberExpr *ME, VarDecl *&VD, std::vector<FieldDecl *> &fatherFields, 
                     std::vector<ArraySubscriptExpr *> &fatherArrays, 
                     ArraySubscriptExpr *ASE = nullptr);
unsigned getIndex(ArraySubscriptExpr *ASE); 
std::unordered_map<FieldDecl *, taint_info> getAllRecordFields(taint_info info);
std::unordered_map<unsigned, ASTArrayVariable *> getAllArrayFields(taint_info info);

#endif