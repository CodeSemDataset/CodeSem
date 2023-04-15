#include "checkers/TemplateChecker.h"

static llvm::cl::OptionCategory ToolingSampleCategory("Tooling Sample");

void TemplateChecker::check() {
  readConfig();
  getEntryFunc();
  if (entryFunc != nullptr) {
    FunctionDecl *funDecl = manager->getFunctionDecl(entryFunc);
    std::cout << "The entry function is: "
              << funDecl->getQualifiedNameAsString() << std::endl;
    std::cout << "Here is its dump: " << std::endl;
    // funDecl->dump();
  } else {
    return;
  }

  LangOptions LangOpts;
  LangOpts.CPlusPlus = true;
  std::unique_ptr<CFG> &cfg = manager->getCFG(entryFunc);

  std::unordered_map<std::string, std::string> ptrConfig =
      configure->getOptionBlock("CFGTest");
  if (ptrConfig.find("CFGTest")->second == "true") {
    std::cout << "----------CFG Testing Begin----------"
              << "the CFG of main func is:" << std::endl;
    if (nullptr != cfg)
      cfg->dump(LangOpts, true);
    std::cout << "----------CFG Testing End----------" << std::endl;
  }

  if (ptrConfig.find("ICFGTest")->second == "true") {
    std::cout << "----------InterProcedure CFG Testing Begin----------"
              << std::endl;
    InterProcedureCFG *icfgPtr =
        new InterProcedureCFG(manager, resource, call_graph, configure);
    for (CFG::iterator iter = cfg->begin(); iter != cfg->end(); ++iter) {
      CFGBlock *block = *iter;
      std::cout << "the current block is:" << std::endl;
      block->dump();
      std::cout << "the succ of current block in interprocedure cfg is:"
                << std::endl;
      auto succs = icfgPtr->getSucc(block);
      for (auto b : succs) {
        b->dump();
      }
      std::cout << "the pred of current block in interprocedure cfg is:"
                << std::endl;
      auto preds = icfgPtr->getPred(block);
      for (auto b : preds) {
        b->dump();
      }
      std::cout << "the path before exit block is:" << std::endl;
      auto paths =
          icfgPtr->getPathBeforePointWithLength(10, &(cfg->getEntry()));
      for (auto p : paths) {
        for (auto b : p) {
          std::cout << b->getBlockID() << " ";
        }
        std::cout << std::endl;
      }
    }
    std::cout << "----------InterProcedure CFG Testing End----------"
              << std::endl;
  }

  // std::vector<CFGBlock *> topoOrderCFG = cfg->getTopoOrder();
  // for (auto it = topoOrderCFG.begin(); it != topoOrderCFG.end(); it++) {
  //   CFGBlock *b = *it;
  //   std::cout << b->getBlockID() << std::endl;
  // }
}

void TemplateChecker::readConfig() {
  std::unordered_map<std::string, std::string> ptrConfig =
      configure->getOptionBlock("TemplateChecker");
  request_fun = stoi(ptrConfig.find("request_fun")->second);
  maxPathInFun = 10;
}

void TemplateChecker::getEntryFunc() {
  std::vector<ASTFunction *> topLevelFuncs = call_graph->getTopLevelFunctions();
  for (auto fun : topLevelFuncs) {
    const FunctionDecl *funDecl = manager->getFunctionDecl(fun);
    call_graph->getChildren(fun);
    if (funDecl->getQualifiedNameAsString() == "main") {
      entryFunc = fun;
      return;
    }
  }
  entryFunc = nullptr;
  return;
}
