#include "checkers/AST2Graph.h"

static llvm::cl::OptionCategory ToolingSampleCategory("Tooling Sample");

void AST2Graph::transform() {
  for(auto iter : funcList) {
    FunctionDecl *FD = iter;
    std::unique_ptr<CFG> cfg = std::unique_ptr<CFG>(CFG::buildCFG(
      FD, FD->getBody(), &FD->getASTContext(), CFG::BuildOptions()));

    for (CFG::iterator cfgIter = cfg->begin(); cfgIter != cfg->end(); ++cfgIter) {
      CFGBlock *block = *cfgIter;
      for (CFGBlock::iterator blockIter = block->begin(); blockIter != block->end(); ++blockIter) {
        CFGElement element = (*blockIter);
        if(element.getKind() != CFGElement::Kind::Statement) {
          continue;
        }
        const Stmt *stmt = ((CFGStmt *) &element)->getStmt();
        if (nullptr == stmt)
          continue;
        stmt->dump();
      }
    }

    LangOptions LangOpts;
    LangOpts.CPlusPlus = true;
    cfg->dump(LangOpts, true);
  }
}

void AST2Graph::dumpJson() {}