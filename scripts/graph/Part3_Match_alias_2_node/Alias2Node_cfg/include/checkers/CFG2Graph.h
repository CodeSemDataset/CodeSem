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
#include "framework/Function.h"
#include "framework/WordDict.h"
#include "framework/CSVRead.h"
#include <nlohmann/json.hpp>

using namespace clang;
using namespace llvm;
using namespace clang::driver;
using namespace clang::tooling;

using json = nlohmann::json;

static std::map<int, json> aliasType2Json_c2g;
static json nonAlias_c2g;

static bool transform_suc;

class CFGNode {
public:
  CFGNode(Stmt *stmt, int ID);
  CFGNode(std::string stmt, int ID);

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

class myCFG {
public:
  myCFG(FunctionDecl *FD, WordDict *wd, alias_pair input_pair, SourceManager* manager);
  void addNode(CFGNode *node);
  void addNodeEmbedding(int token, int nodeID);

  enum edgeType{controlDependenceEdge, dataDependenceEdge, astEdge, cfgEdge};
  enum operationType{defaultOperation, read, write, conditionalWrite, readAndWrite, readAndConditionalWrite, inBranch};
  void addControlDependenceEdge(int firstID, int secondID);
  void addDataDependenceEdge(int firstID, int secondID);
  void addASTEdge(int firstID, int secondID);
  void addCFGEdge(int firstID, int secondID);
  void addEdges(int firstID, int secondID, edgeType t);

  void printGraph();
  void dumpDot();
  json dumpJson();

  int handleStmt(Stmt *stmt, int rootID, edgeType et, operationType operType);
  int handleDecl(Decl* decl, int rootID, edgeType et, operationType operType, bool isAddNewNode);

  void computeDataDependence();
  void computeCFG(FunctionDecl* FD);
  void add_CFG_First_Stmts(FunctionDecl* FD);
  const Stmt* get_First_Stmt(CFGBlock* block);

  std::vector<std::string> splitString(std::string stmtStringedgeType, std::string pattern);
private:
  FunctionDecl* currentFD;
  WordDict *dict;
  alias_pair current_pair;
  SourceManager* manager;

  int def1;
  int def2;
  std::map<int, int> use1;
  std::map<int, int> use2;

  std::vector<CFGNode*> nodeList;
  std::vector<int> nodeEmbedding;
  int totalNodeNum;

  std::map<const Stmt*, int> bb_first_stmt;
  std::set<std::string> first_stmts_string;
  std::set<const Stmt*> first_stmts;

  std::map<int, std::set<int>> controlDependenceEdges;
  std::map<int, std::set<int>> dataDependenceEdges;
  std::map<int, std::set<int>> astEdges;
  std::map<int, std::set<int>> cfgEdges;

  std::map<std::pair<int, int>, std::pair<int, int>> ifElsePair;
  StmtTokenIndex sti;

  const Stmt* test_stmt;
};

class CFG2Graph {
public:
  CFG2Graph(WordDict &wd, CSVRead &csvread, std::vector<std::string> program_names)
          :dict(&wd), csvread(csvread), program_names(program_names) {}
  void transform();
private:
  // std::vector<FunctionDecl *> funcList;
  WordDict *dict;
  std::vector<std::string> program_names;
  CSVRead &csvread;
};