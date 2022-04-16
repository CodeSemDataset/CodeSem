#ifndef PDG2GRAPH_H
#define PDG2GRAPH_H
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
#include <math.h>

#include "framework/Common.h"
#include "framework/StmtTokenIndex.h"
#include "framework/WordDict.h"
#include "framework/Function.h"
#include <nlohmann/json.hpp>

using namespace clang;
using namespace llvm;
using namespace clang::driver;
using namespace clang::tooling;

using json = nlohmann::json;

static json json_output;
static int totalcnt = 0;
static int truecnt = 0;
static int falsecnt = 0;
static int empty_files_p2g = 0;

class PDGNode {
public:
  PDGNode(Stmt *stmt, int ID);
  PDGNode(std::string stmt, int ID);

  Stmt* getStmt();
  std::string getStmtString();
  int getID();

  void addWriteVars(int64_t id);
  void addReadVars(int64_t id);
  void addConditionalWriteVars(int64_t id);
  void addGotoVars(int64_t id);

  int64_t getWriteVars();
  int64_t getReadVars();
  int64_t getConditionalWriteVars();
  int64_t getGotoVars();


private:
  Stmt *stmt;
  std::string stmtString;
  int ID;
  int64_t writeVars;
  int64_t readVars;
  int64_t conditionalWriteVars;             // write the vars in branch, such as for, while, do, (if)
  int64_t gotoVars;
};

class PDG {
public:
  PDG(FunctionDecl *FD, WordDict *wd, alias_pair input_pair, SourceManager* manager);
  void addNode(PDGNode *node);
  void addNodeEmbedding(int token, int nodeID);

  enum edgeType{controlDependenceEdge, dataDependenceEdge, astEdge};
  enum operationType{defaultOperation, read, write, conditionalWrite, readAndWrite, readAndConditionalWrite, inBranch};
  void addControlDependenceEdge(int firstID, int secondID);
  void addDataDependenceEdge(int firstID, int secondID);
  void addASTEdge(int firstID, int secondID);
  void addEdges(int firstID, int secondID, edgeType t);

  void printGraph();
  void dumpDot();
  json dumpJson();

  int handleStmt(Stmt *stmt, int rootID, edgeType et, operationType operType);
  int handleDecl(Decl* decl, int rootID, edgeType et, operationType operType, bool isAddNewNode);

  void computeDataDependence();

  std::vector<std::string> splitString(std::string stmtString, std::string pattern);
private:
  FunctionDecl* currentFD;
  WordDict *dict;
  alias_pair current_pair;
  SourceManager* manager;

  int def1;
  int def2;
  std::map<int, int> use1;
  std::map<int, int> use2;
  
  std::vector<PDGNode*> nodeList;
  std::vector<int> nodeEmbedding;
  int totalNodeNum;

  std::map<int, std::set<int>> controlDependenceEdges;
  std::map<int, std::set<int>> dataDependenceEdges;
  std::map<int, std::set<int>> astEdges;

  std::map<std::pair<int, int>, std::pair<int, int>> ifElsePair;
  StmtTokenIndex sti;
};

class PDG2Graph {
public:
  PDG2Graph(WordDict &wd) {
    dict = &wd;
  };
  void transform(int kind);
  void testTransform();

private:
  std::vector<FunctionDecl *> funcList;
  WordDict *dict;
};

#endif