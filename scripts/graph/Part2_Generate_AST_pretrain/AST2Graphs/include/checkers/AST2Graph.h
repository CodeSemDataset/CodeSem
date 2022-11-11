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

static bool PRINT_TREE = false;

static std::vector<CXCursor> FD_List; //List of FunctionDecl
static int cnt = 0;
static std::vector<Node_Index*> node_index; //Data Structure for storing AST
static std::vector<Function*> functions; // storing all edges and node_features
static Function* func; //the Function* current deal with
static CXTranslationUnit TU;

static std::set<std::string> has_analyse;


static int output_filename;

//needs to consider the following: array, struct, 

class AST2Graph {
public:
  AST2Graph(std::vector<FunctionDecl *> funcs, WordDict& dict):dict(dict){
    this->funcList = funcs;
  };
  AST2Graph(std::vector<string> filelist, WordDict& dict):dict(dict){
    this->FileList = filelist;
  }
  void transform();

  void find_NextToken_2();
  void find_LastRW_3_4();
  void find_ComputedFrom_5();
  void find_LastLexicalUse_6();
  void find_ReturnsTo_7();
  void find_GuardedBy_8_9();
 
  void dumpJson(std::vector<json> ggnn, std::vector<json> sandwich, std::vector<std::string> json_filename);
  void dumpDict(std::vector<std::string> input, string filename);

  void setRootPath(std::string path) {
    root_path = path;
  }
  void setProgramName(std::string name) {
    program_name = name;
  }

private:
  WordDict& dict;
  std::vector<FunctionDecl *> funcList; //currently unused
  std::vector<string> FileList;
  std::string root_path;
  std::string program_name;

  void TransformSingleFile(string filename);

  const char* getKindSpelling(CXCursor cursor);
  void add_sandwich_index();
  bool BinaryOp(Node_Index* tar, std::vector<Node_Index*> &def, std::vector<Node_Index*> &use);
  int shared_Parent(Node_Index* a, Node_Index* b);
  bool has_Parent(Node_Index* src, int father);
  static void add_edge(Node_Index* src, Node_Index* dst, int data_type, bool sandwich);

  static bool checkKind(CXCursor cursor);
  static bool print_Kind_And_Spelling(CXCursor cursor);
  static enum CXChildVisitResult checkChildren(CXCursor cursor, CXCursor parent, CXClientData client_data);
  static enum CXChildVisitResult print_Child(CXCursor cursor, CXCursor parent, CXClientData client_data);
  static enum CXChildVisitResult find_Child_1(CXCursor cursor, CXCursor parent, CXClientData client_data);
};

/*
bool checkKind(CXCursor cursor);
bool printSpelling(CXCursor cursor);
bool printLocation(CXCursor cursor);
enum CXChildVisitResult checkChildren(CXCursor cursor, CXCursor parent,
                                     CXClientData client_data);
enum CXChildVisitResult find_Child(CXCursor cursor, CXCursor parent,
                                     CXClientData client_data);
*/
