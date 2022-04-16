#ifndef AST2GRAPH_H
#define AST2GRAPH_H
#include <fstream>
#include <iostream>
#include <list>
#include <queue>
#include <sstream>
#include <stack>
#include <string>
#include <map>
#include <set>

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
#include <clang-c/Index.h>
#include <math.h>

#include "framework/Common.h"
#include <nlohmann/json.hpp>
#include "framework/Function.h"
#include "framework/WordDict.h"

using namespace clang;
using namespace llvm;
using namespace clang::driver;
using namespace clang::tooling;
using namespace std;

using json = nlohmann::json;

//the code is so ugly because clang_visitChildren needs a function pointer
//which cannot be converted from a non-static member function...

static std::vector<CXCursor> FD_List; //List of FunctionDecl
static std::vector<Node_Index*> node_index; //Data Structure for storing AST
static CXTranslationUnit TU;
static Function* func;
static int cnt = 0;

static json allPairs_ggnn;
static json allPairs_sandwich;
static int find_cnt = 0;
static int find_true_cnt = 0;
static int find_false_cnt = 0;
static int empty_files_ast = 0;

//static std::set<std::string> has_analyse;

//static int output_filename;

//needs to consider the following: array, struct, 

class AST2Graph {
public:
  AST2Graph(WordDict& dict):dict(dict){
  }
  void transform(int kind);

  void find_NextToken_2();
  void find_LastRW_3_4();
  void find_ComputedFrom_5();
  void find_LastLexicalUse_6();
  void find_ReturnsTo_7();
  void find_GuardedBy_8_9();
private:
  WordDict& dict;
  // std::vector<string> FileList;

  bool findMatchedASTNode(alias_pair input_pair, std::string filename);
  void generateGraph(CXCursor functiondecl, alias_pair input_pair);
  void findAlias(alias_pair input_pair);

  const char* getCursorSpelling(CXCursor cursor);
  const char* getKindSpelling(CXCursor cursor);
  unsigned int getCursorStartLine(CXCursor cursor);
  unsigned int getCursorEndLine(CXCursor cursor);
  
  //std::string deal_with_filename(std::string filename);
  void add_sandwich_index();
  bool BinaryOp(Node_Index* tar, std::vector<Node_Index*> &def, std::vector<Node_Index*> &use);
  int shared_Parent(Node_Index* a, Node_Index* b);
  bool has_Parent(Node_Index* src, int father);
  static void add_edge(Node_Index* src, Node_Index* dst, int data_type, bool sandwich);

  static enum CXChildVisitResult getFunctions(CXCursor cursor, CXCursor parent, CXClientData client_data);
  static enum CXChildVisitResult find_Child_1(CXCursor cursor, CXCursor parent, CXClientData client_data);
};

#endif