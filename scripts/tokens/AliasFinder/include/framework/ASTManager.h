#ifndef AST_MANAGER_H
#define AST_MANAGER_H

#include <list>
#include <unordered_map>
#include <queue>

// #include <clang/Analysis/CFG.h>
#include <clang/Frontend/ASTUnit.h>

#include "utils/FieldVariableInfo.h"
#include "ASTElement.h"
#include "Config.h"

// #include "../CFG/CFG.h"
#include <clang/Analysis/CFG.h>

using namespace clang;

#define MAX_FIELDVARIABLE_SIZE 10

class ASTManager;
/**
 * the resource of AST.
 * contains AST, function, function-local variables, global variables.
 */
class ASTResource {
public:
  ~ASTResource();

  const std::vector<ASTFunction *> &getFunctions(bool use = true) const;
  std::vector<ASTFile *> getASTFiles() const;
  std::unordered_map<ASTGlobalVariable *, bool> &getGlobalVars() { return globalVariables; };
  std::unordered_map<ASTFieldVariable *, bool> &getGlobalFieldVars() { return globalFields; }
  std::unordered_map<ASTArrayVariable *, bool> &getGlobalArrays() { return globalArrays; }

  friend class ASTManager;

  bool isGlobalVariableTaint(ASTGlobalVariable *V);
  bool isGlobalFieldTaint(ASTFieldVariable *FV);
  bool isGlobalArrayTaint(ASTArrayVariable *AV);
  void setGlobalVariable(ASTGlobalVariable *V, bool isTaint);
  void setGlobalField(ASTFieldVariable *FV, bool isTaint);
  void setGlobalArray(ASTArrayVariable *AV, bool isTaint);

private:
  std::unordered_map<std::string, ASTFile *> ASTs;

  std::vector<ASTFunction *> ASTFunctions;
  std::vector<ASTFunction *> useASTFunctions;
  std::unordered_map<ASTGlobalVariable *, bool> globalVariables;
  std::unordered_map<ASTFieldVariable *, bool> globalFields;
  std::unordered_map<ASTArrayVariable *, bool> globalArrays;
  std::vector<ASTVariable *> ASTVariables;

  void buildUseFunctions();

  ASTFile *addASTFile(std::string AST);
  ASTFunction *addASTFunction(FunctionDecl *FD, ASTFile *AF, bool use = true);
  ASTFunction *addLambdaASTFunction(FunctionDecl *FD, ASTFile *AF,
                                    std::string fullName, bool use = true);
  ASTGlobalVariable *addGlobalVar(VarDecl *VD, ASTFile *AF);
  ASTFieldVariable *addGlobalField(VarDecl *VD, ASTFile *AF, FieldDecl *FD, ASTFieldVariable *father_field);
  ASTArrayVariable *addGlobalArray(VarDecl *VD, ASTFile *AF, FieldDecl *FD, unsigned index, ASTFieldVariable *father_fv, ASTArrayVariable *father_av);
  ASTVariable *addASTVariable(VarDecl *VD, ASTFunction *F);
};

/**
 * a bidirectional map.
 * You can get a pointer from an id or get an id from a pointer.
 */
class ASTBimap {
public:
  friend class ASTManager;

public:
  void insertFunction(ASTFunction *F, FunctionDecl *FD);
  void insertVariable(ASTVariable *V, VarDecl *VD);
  void insertGlobalVariable(ASTGlobalVariable *V, VarDecl *VD);
  void insertGlobalFieldVariable(ASTFieldVariable *V);
  void insertGlobalArrayVariable(ASTArrayVariable *V);

  FunctionDecl *getFunctionDecl(ASTFunction *F);
  ASTVariable *getASTVariable(VarDecl *VD);
  VarDecl *getVarDecl(ASTVariable *V);
  ASTGlobalVariable *getGlobalVariable(VarDecl *VD);
  ASTFieldVariable *getGlobalField(fv_info info);
  ASTArrayVariable *getGlobalArray(av_info info);

  void removeFunction(ASTFunction *F);
  void removeVariable(ASTVariable *V);
  void removeGlobalVariable(ASTGlobalVariable *V);

  std::unordered_map<ASTFunction *, FunctionDecl *> functionMap;
  std::unordered_map<ASTVariable *, VarDecl *> variableLeft;
  std::unordered_map<VarDecl *, ASTVariable *> variableRight;
  std::unordered_map<VarDecl *, ASTGlobalVariable *> global_variable_map;
  std::unordered_map<fv_info, ASTFieldVariable *, hash_fv_info, cmp_fv_info> global_field_map;
  std::unordered_map<av_info, ASTArrayVariable *, hash_av_info, cmp_av_info> global_array_map;
};

class FunctionLoc {
public:
  FunctionDecl *FD;
  std::string fileName;
  int beginLoc;
  int endLoc;
  bool operator<(const FunctionLoc &a) const { return a.beginLoc < beginLoc; }

  FunctionLoc(FunctionDecl *D, std::string name, int begin, int end)
      : FD(D), fileName(name), beginLoc(begin), endLoc(end) {}
};
/**
 * a class that manages all ASTs.
 */
class ASTManager {
public:
  ASTManager(std::vector<std::string> &ASTs, ASTResource &resource,
             Config &configure);

  ASTUnit *getASTUnit(ASTFile *AF);
  FunctionDecl *getFunctionDecl(ASTFunction *F);
  ASTFunction *getASTFunction(FunctionDecl *FD);
  std::vector<ASTFunction *> getFunctions(bool use = true);

  ASTVariable *getASTVariable(VarDecl *VD);
  VarDecl *getVarDecl(ASTVariable *V);
  std::vector<ASTGlobalVariable *> getGlobalVars(bool uninit);

  std::unique_ptr<CFG> &getCFG(ASTFunction *F);
  std::vector<ASTFunction *> getASTFunction(const std::string &funcName);
  ASTFieldVariable *addGlobalField(VarDecl *VD, FieldDecl *FD, std::vector<FieldDecl *> fatherFields);
  ASTArrayVariable *addGlobalArray(VarDecl *VD, FieldDecl *FD, std::vector<FieldDecl *> fatherFields, unsigned index, std::vector<unsigned> fatherIndex);

  void insertFunction(ASTFunction *F, FunctionDecl *FD);

  std::map<std::string, std::set<FunctionLoc>> funcLocInfo;
  void saveFuncLocInfo(FunctionLoc FL);
  CFGBlock *getBlockWithLoc(std::string fileName, int line);
  Stmt *getStmtWithLoc(std::string fileName, int line);
  std::vector<CFGBlock *> getBlocksWithLoc(std::string fileName, int line);
  std::vector<std::pair<CFGBlock *, Stmt *>>
  getCandidatePair(std::string fileName, int line);
  std::vector<Stmt *> getStmtWithLoc(int line, CFGBlock *block);
  SourceManager *getSourceManager() { return source_manager; }

  void setMaxSize(unsigned size);

  std::unordered_map<std::string, ASTUnit *> &getASTs();
  std::unordered_map<CFG *, Decl *> parentDecls;

  ASTResource &resource;
  ASTBimap bimap;
private:
  Config &c;
  SourceManager *source_manager;

  std::unordered_map<std::string, ASTUnit *> ASTs;
  std::unordered_map<ASTFunction *, std::unique_ptr<CFG>> CFGs;
  

  unsigned max_size;
  std::list<std::unique_ptr<ASTUnit>> ASTQueue;

  void pop();
  void move(ASTUnit *AU);
  void push(std::unique_ptr<ASTUnit> AU);

  void loadASTUnit(std::unique_ptr<ASTUnit> AU);
};

#endif