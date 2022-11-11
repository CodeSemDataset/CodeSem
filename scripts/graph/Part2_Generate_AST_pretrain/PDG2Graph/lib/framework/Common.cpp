#include "framework/Common.h"

#include <clang/AST/ASTConsumer.h>
#include <clang/AST/RecursiveASTVisitor.h>
#include <clang/Frontend/CompilerInstance.h>
#include <clang/Frontend/FrontendActions.h>

#include <fstream>
#include <iostream>

using namespace std;

namespace {

class ASTFunctionLoad : public ASTConsumer,
                        public RecursiveASTVisitor<ASTFunctionLoad> {
public:
  void HandleTranslationUnit(ASTContext &Context) override {
    TranslationUnitDecl *TUD = Context.getTranslationUnitDecl();
    TraverseDecl(TUD);
  }

  bool TraverseDecl(Decl *D) {
    if (!D)
      return true;
    bool rval = true;
    if (D->getASTContext().getSourceManager().isInMainFile(D->getLocation()) ||
        D->getKind() == Decl::TranslationUnit) {
      rval = RecursiveASTVisitor<ASTFunctionLoad>::TraverseDecl(D);
    }
    return rval;
  }
  bool TraverseFunctionDecl(FunctionDecl *FD) {
    if (FD && FD->isThisDeclarationADefinition()) {
      functions.push_back(FD);
    }
    return true;
  }

  bool TraverseStmt(Stmt *S) { return true; }

  const std::vector<FunctionDecl *> &getFunctions() const { return functions; }

private:
  std::vector<FunctionDecl *> functions;
};

class ASTVariableLoad : public RecursiveASTVisitor<ASTVariableLoad> {
public:
  bool VisitDeclStmt(DeclStmt *S) {
    for (auto D = S->decl_begin(); D != S->decl_end(); D++) {
      if (VarDecl *VD = dyn_cast<VarDecl>(*D)) {
        variables.push_back(VD);
      }
    }
    return true;
  }

  const std::vector<VarDecl *> &getVariables() { return variables; }

private:
  std::vector<VarDecl *> variables;
};

class ASTCalledFunctionLoad
    : public RecursiveASTVisitor<ASTCalledFunctionLoad> {
public:
  bool VisitCallExpr(CallExpr *E) {
    if (FunctionDecl *FD = E->getDirectCallee()) {
      functions.insert(FD);
    }
    return true;
  }

  const std::vector<FunctionDecl *> getFunctions() {
    return std::vector<FunctionDecl *>(functions.begin(), functions.end());
  }

private:
  std::set<FunctionDecl *> functions;
};

class ASTCallExprLoad : public RecursiveASTVisitor<ASTCallExprLoad> {
public:
  bool VisitCallExpr(CallExpr *E) {
    call_exprs.push_back(E);
    return true;
  }

  const std::vector<CallExpr *> getCallExprs() { return call_exprs; }

private:
  std::vector<CallExpr *> call_exprs;
};

} // end of anonymous namespace

namespace common {
/**
 * load an ASTUnit from ast file.
 * AST : the name of the ast file.
 */
std::unique_ptr<ASTUnit> loadFromASTFile(std::string AST) {

  FileSystemOptions FileSystemOpts;
  IntrusiveRefCntPtr<DiagnosticsEngine> Diags =
      CompilerInstance::createDiagnostics(new DiagnosticOptions());
  std::shared_ptr<PCHContainerOperations> PCHContainerOps;
  PCHContainerOps = std::make_shared<PCHContainerOperations>();
  return std::unique_ptr<ASTUnit>(
      ASTUnit::LoadFromASTFile(AST, PCHContainerOps->getRawReader(),
                               ASTUnit::LoadEverything, Diags, FileSystemOpts));
}

std::vector<FunctionDecl *> getFunctions(std::vector<std::string> ASTs, std::list<std::unique_ptr<ASTUnit>> &ASTQueue) {
  std::vector<FunctionDecl *> res;
  for (std::string AST : ASTs) {
    ifstream in_file(AST, ios::in);
    if(!in_file.is_open()) {
      in_file.close();
      continue;
    }
    in_file.close();
    std::unique_ptr<ASTUnit> AU = loadFromASTFile(AST);
    std::vector<FunctionDecl *> functions = getFunctions(AU->getASTContext());

    for (FunctionDecl *FD : functions) {
      res.push_back(FD);
    }
    ASTQueue.push_back(std::move(AU));
  }
  return res;
}

/**
 * get all functions's decl from an ast context.
 */
std::vector<FunctionDecl *> getFunctions(ASTContext &Context) {
  ASTFunctionLoad load;
  load.HandleTranslationUnit(Context);
  return load.getFunctions();
}

/**
 * get all variables' decl of a function
 * FD : the function decl.
 */
std::vector<VarDecl *> getVariables(FunctionDecl *FD) {
  std::vector<VarDecl *> variables;
  variables.insert(variables.end(), FD->param_begin(), FD->param_end());

  ASTVariableLoad load;
  load.TraverseStmt(FD->getBody());
  variables.insert(variables.end(), load.getVariables().begin(),
                   load.getVariables().end());

  return variables;
}

std::vector<FunctionDecl *> getCalledFunctions(FunctionDecl *FD) {
  ASTCalledFunctionLoad load;
  load.TraverseStmt(FD->getBody());
  return load.getFunctions();
}

std::vector<CallExpr *> getCallExpr(FunctionDecl *FD) {
  ASTCallExprLoad load;
  load.TraverseStmt(FD->getBody());
  return load.getCallExprs();
}

std::string getParams(FunctionDecl *FD) {
  std::string params = "";
  for (auto param = FD->param_begin(); param != FD->param_end(); param++) {
    params = params + (*param)->getOriginalType().getAsString() + "  ";
  }
  return params;
}

std::string getFullName(FunctionDecl *FD) {
  std::string name = FD->getQualifiedNameAsString();

  name = name + "  " + getParams(FD);
  return name;
}

std::string getString_of_Expr(const Expr *expr) {
  LangOptions L0;
  L0.CPlusPlus = 1;
  std::string buffer1;
  llvm::raw_string_ostream strout1(buffer1);
  expr->printPretty(strout1, nullptr, PrintingPolicy(L0));
  return strout1.str();
}

std::string getString_of_Stmt(const Stmt *stmt) {
  LangOptions L0;
  L0.CPlusPlus = 1;
  std::string buffer1;
  llvm::raw_string_ostream strout1(buffer1);
  stmt->printPretty(strout1, nullptr, PrintingPolicy(L0));
  return strout1.str();
}

std::string getString_of_VarDecl(const VarDecl *vd) {
  std::string varName = vd->getNameAsString();
  std::string varType = vd->getType().getAsString();
  std::string res = varType + " " + varName;
  if (vd->hasInit() && nullptr != vd->getInit()) {
    if (vd->getInit()->getStmtClass() == Stmt::CXXConstructExprClass) {
      res += "(" + getString_of_Expr(vd->getInit()) + ")"; 
    }
    else
      res += " = " + getString_of_Expr(vd->getInit());
  }
  return res;
}

std::string string_replace_all(std::string resource_str, std::string sub_str, std::string new_str)
{
  std::string dst_str = resource_str;
  std::string::size_type pos = 0;
  while((pos = dst_str.find(sub_str, pos)) != std::string::npos) {
    dst_str.replace(pos, sub_str.length(), new_str);
    pos = pos + new_str.length();
  }
  return dst_str;
}

void process_bar(float progress) {
  int barWidth = 70;
  std::cout << "[";
  int pos = progress * barWidth;
  for (int i = 0; i < barWidth; ++i) {
    if (i < pos)
      std::cout << "|";
    else 
      std::cout << " ";
  }
  if (progress == 1.0)
    std::cout << "]" << int(progress * 100.0) << "%\n";
  else
    std::cout << "]" << int(progress * 100.0) << "%\r";
  std::cout.flush();
}
} // end of namespace common

std::string trim(std::string s) {
  std::string result = s;
  result.erase(0, result.find_first_not_of(" \t\r\n"));
  result.erase(result.find_last_not_of(" \t\r\n") + 1);
  return result;
}

std::vector<std::string> initialize(std::string astList) {
  std::vector<std::string> astFiles;

  std::ifstream fin(astList);
  std::string line;
  while (getline(fin, line)) {
    line = trim(line);
    if (line == "")
      continue;
    std::string fileName = line;
    astFiles.push_back(fileName);
  }
  fin.close();

  return astFiles;
}
