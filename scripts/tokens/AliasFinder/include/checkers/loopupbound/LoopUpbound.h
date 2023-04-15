#include <fstream>
#include <iostream>
#include <list>
#include <queue>
#include <sstream>
#include <stack>
#include <string>
#include <limits.h>
#include <clang/AST/AST.h>
#include <clang/AST/ASTConsumer.h>
#include <clang/AST/Attr.h>
#include <clang/AST/Expr.h>
#include <clang/AST/RecursiveASTVisitor.h>
#include <clang/Analysis/CFG.h>

#include <clang/Frontend/ASTConsumers.h>
#include <clang/Frontend/ASTUnit.h>
#include <clang/Frontend/CompilerInstance.h>
#include "framework/BasicChecker.h"
#include "xml/pugixml.hpp"

using namespace std;
static pugi::xml_document loopbound_xml;
struct loop_info
{
  int init_value = 0;
  int end_value = 0;
  int incre_value = 1;
  int loop_upbound = 0;
  int break_value = INT_MAX;
  Expr *loop_expr_ = nullptr;
  Expr *init_expr_ = nullptr;
  Expr *end_expr_ = nullptr;
  bool increase = true;
  bool end_value_bound = false;
  int nested_loop_count = 1;
};
class LoopUpbound : public BasicChecker
{
public:
  LoopUpbound(ASTResource *resource, ASTManager *manager,
              CallGraph *call_graph, Config *configure)
      : BasicChecker(resource, manager, call_graph, configure){};
  void check();

private:
  unordered_map<clang::Stmt *, loop_info> analyzed_map;
};

class LoopInfo
{ // analyze each loop

public:
  LoopInfo(CallGraph *callg, ASTManager *mng, clang::Stmt *lp_stmt, Config *config)
      : call_graph(callg), manager(mng), loop_stmt(lp_stmt), configure(config) {}
  int analyze_loopstmt(ASTFunction *F, unordered_map<clang::Stmt *, loop_info> &analyzed_map);
  void get_init_value(ASTFunction *F, clang::Stmt *init_stmt);
  void get_end_value(ASTFunction *F, clang::Expr *_expr, Stmt *stmt_);
  void get_incre_value(ASTFunction *F, clang::Expr *inc_expr, Stmt *stmt_);
  void analyze_condition(ASTFunction *F);
  void analyze_body(ASTFunction *F);

  bool calculate_expr_value(ASTFunction *F, int &value_, Expr *expr, Stmt *stmt_, CallExpr *call_expr_, int now_depth);
  bool analyze_variant(ASTFunction *F, int &value_, Expr *expr_, clang::Stmt *end_, CallExpr *call_expr_, int now_depth);
  bool AnalyzeStmt(bool has_value, ASTFunction *F, int &value_, Expr *expr_, clang::Stmt *stmt_, int now_depth);
  bool increase_before_loop(Stmt *out_loop, Stmt *in_loop, ASTFunction *F);
  bool is_equal_interpro(Expr *expr_1, Expr *expr_2, ASTFunction *F);
  bool increase = true;
  stack<string> st_;
  unordered_map<Expr *, int> expr_value_map;

  ASTManager *manager;
  CallGraph *call_graph;
  Config *configure;
  clang::Stmt *loop_stmt;
  CFGBlock::iterator end;
  int init_value = -1;
  int end_value = -1;
  int increment_value = 1;
  int break_value = INT_MAX;
  Expr *loop_expr = nullptr;
  Expr *init_expr = nullptr;
  Expr *end_expr = nullptr;
  Expr *incre_expr = nullptr;
  bool end_value_bound = false;
  int max_depth = 0;
  int nested_loop_count = 1;
};

class TraverseClass : public RecursiveASTVisitor<TraverseClass>
{
public:
  bool VisitForStmt(ForStmt *forstmt)
  {
    loopstmts.emplace_back(forstmt);
    forstmts.emplace_back(forstmt);
    return true;
  }
  bool VisitBreakStmt(BreakStmt *breakstmt)
  {
    breakstmts.emplace_back(breakstmt);
    has_break = true;
    return true;
  }
  bool VisitIfStmt(IfStmt *ifstmt)
  {
    ifstmts.emplace_back(ifstmt);
    return true;
  }
  bool VisitReturnStmt(ReturnStmt *returnstmt)
  {
    returnstmts.emplace_back(returnstmt);
    has_break = true;
    return true;
  }
  bool VisitWhileStmt(WhileStmt *whilestmt)
  {
    loopstmts.emplace_back(whilestmt);
    whilestmts.emplace_back(whilestmt);
    return true;
  }
  bool VisitExpr(Expr *expr_);
  Expr *match_expr;
  bool has_expr = false;
  bool has_break = false;
  vector<clang::ForStmt *> forstmts;
  vector<clang::WhileStmt *> whilestmts;
  vector<clang::BreakStmt *> breakstmts;
  vector<clang::IfStmt *> ifstmts;
  vector<clang::ReturnStmt *> returnstmts;
  vector<clang::Stmt *> loopstmts;
};
