#ifndef PDG2TOKENSEQUENCE_H
#define PDG2TOKENSEQUENCE_H

#include <fstream>
#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>

#include <clang/AST/AST.h>
#include <clang/AST/ASTConsumer.h>
#include <clang/AST/Attr.h>
#include <clang/AST/Expr.h>
#include <clang/AST/RecursiveASTVisitor.h>
#include <clang/Analysis/CFG.h>
#include <clang/Frontend/ASTConsumers.h>
#include <clang/Frontend/ASTUnit.h>
#include <clang/Frontend/CompilerInstance.h>
#include <clang/Frontend/FrontendActions.h>
#include <clang/Lex/Lexer.h>
#include <clang/Rewrite/Core/Rewriter.h>
#include <clang/Tooling/CommonOptionsParser.h>
#include <clang/Tooling/Tooling.h>
#include <llvm/Support/raw_ostream.h>

#include "framework/Common.h"
#include "framework/StmtTokenIndex.h"
#include "framework/WordDict.h"
#include <nlohmann/json.hpp>

using namespace clang;
using namespace llvm;
using namespace clang::driver;
using namespace clang::tooling;

using json = nlohmann::json;

class StmtPDGNode {
public:
  StmtPDGNode(Stmt *stmt, int ID);
  StmtPDGNode(std::string stmt, int ID);

  Stmt* getStmt();
  std::string getStmtString();
  int getID();

  void addWriteVars(int64_t id);
  void addReadVars(int64_t id);
  void addConditionalWriteVars(int64_t id);
  void addGotoVars(int64_t id);

  std::set<int64_t> getWriteVars();
  std::set<int64_t> getReadVars();
  std::set<int64_t> getConditionalWriteVars();
  std::set<int64_t> getGotoVars();


private:
  Stmt *stmt;
  std::string stmtString;
  int ID;
  std::set<int64_t> writeVars;
  std::set<int64_t> readVars;
  std::set<int64_t> conditionalWriteVars;             // write the vars in branch, such as for, while, do, (if)
  std::set<int64_t> gotoVars;
};

class StmtPDG {
public:
  StmtPDG(FunctionDecl *FD, WordDict *wd, std::string program_name);
  void addNode(StmtPDGNode *node);
  void addNodeEmbedding(int token, int nodeID);

  enum edgeType{controlDependenceEdge, dataDependenceEdge, stmtEdge, BasicBlockEdge};
  enum operationType{defaultOperation, read, write, conditionalWrite, readAndWrite, readAndConditionalWrite, inBranch};
  void addControlDependenceEdge(int firstID, int secondID);
  void addDataDependenceEdge(int firstID, int secondID);
  void addStmtEdge(int firstID, int secondID);
  void addBasicBlockEdge(int firstID, int secondID);
  void addEdges(int firstID, int secondID, edgeType t);

  void printGraph();
  void dumpDot();
  void dumpJson();

  int handleStmt(Stmt *stmt, int rootID, edgeType et, operationType operType);
  int handleDecl(Decl* decl, int rootID, edgeType et, operationType operType);

  int analysisStmtString(int nodeID, std::string stmtString);
  std::vector<std::string> splitString(std::string stmtString, std::string pattern);
  std::vector<std::string> splitStrings(std::vector<std::string> strings, std::string pattern);
  std::string trim(std::string s);

  void computeDataDependence();

  void computeCFG(FunctionDecl* FD);
  void add_CFG_First_Stmts(FunctionDecl* FD);
  const Stmt* get_First_Stmt(CFGBlock* block);
private:
  FunctionDecl* currentFD;
  WordDict *dict;

  std::vector<StmtPDGNode*> nodeList; //TokenSequenceList
  std::vector<int> nodeEmbedding; // node_features
  int totalNodeNum;

  std::map<int, std::set<int>> controlDependenceEdges;
  std::map<int, std::set<int>> dataDependenceEdges;
  std::map<int, std::set<int>> stmtEdges;
  std::map<int, std::set<int>> basicBlockEdges;

  // a Stmt must have more than one token
  std::map<const Stmt*, int> Stmt2FirstToken;
  std::set<const Stmt*> first_stmts;

  std::map<std::pair<int, int>, std::pair<int, int>> ifElsePair;
  StmtTokenIndex sti;
  std::string current_program_name;
};

class PDG2TokenSequence {
public:
  PDG2TokenSequence(std::vector<FunctionDecl *> funcs, WordDict &wd) {
    funcList = funcs;
    dict = &wd;
  };
  void transform();
  void setProgramName(std::string name) {
    program_name = name;
  }

private:
  std::vector<FunctionDecl *> funcList;
  WordDict *dict;
  std::string program_name;
};

#endif