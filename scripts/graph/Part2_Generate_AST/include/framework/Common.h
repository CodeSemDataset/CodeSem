#ifndef BASE_COMMON_H
#define BASE_COMMON_H

#include <vector>

#include <clang/Frontend/ASTUnit.h>

#include "Config.h"

using namespace clang;

std::vector<std::string> initialize(std::string astList);

namespace common {

enum CheckerName {
  AST2Graph
};

struct a{
  FunctionDecl* func;
  std::string path;
};

std::unique_ptr<ASTUnit> loadFromASTFile(std::string AST);
std::vector<FunctionDecl *> getFunctions(std::vector<std::string> ASTs, std::list<std::unique_ptr<ASTUnit>> &ASTQueue);

std::vector<FunctionDecl *> getFunctions(ASTContext &Context);
std::vector<VarDecl *> getVariables(FunctionDecl *FD);

std::vector<FunctionDecl *> getCalledFunctions(FunctionDecl *FD);
std::vector<CallExpr *> getCallExpr(FunctionDecl *FD);

std::string getFullName(FunctionDecl *FD);

std::string getString_of_Expr(const Expr *expr);
std::string getString_of_Stmt(const Stmt *stmt);
std::string getString_of_VarDecl(const VarDecl *vd);

std::string string_replace_all(std::string resource_str, std::string sub_str, std::string new_str);

void process_bar(float progress);

} // end of namespace common

#endif
