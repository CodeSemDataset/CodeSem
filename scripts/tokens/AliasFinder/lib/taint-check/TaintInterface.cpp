
#include "framework/Common.h"

#include "taint-check/TaintEnv.h"
#include "taint-check/TaintChecker.h"
#include "taint-check/TaintInterface.h"

namespace taint {

TaintValueV getExprTaintValue(FunctionDecl *FD, CFGBlock *B, Stmt *S, Expr *E, CallGraph *call_graph) {
    
    if (FD == nullptr || B == nullptr || S == nullptr || E == nullptr)
        return TaintValueV();
    
    ASTFunction *F = call_graph->getFunction(FD);
    if(TaintChecker::function_map.find(F->getID()) == TaintChecker::function_map.end())
        return TaintValueV();
    if (F == nullptr || B->getBlockID() >= TaintChecker::function_map[F->getID()]->blocks.size())
        return TaintValueV();
    
    if (TaintChecker::function_map[F->getID()]->is_visited == false) {
        return TaintValueV();
    }
    Environment env = TaintChecker::function_map[F->getID()]->blocks[B->getBlockID()]->environment;
    
    for (auto &it : *B) {
        const Stmt *stmt = it.castAs<CFGStmt>().getStmt();
        visitStmt(const_cast<Stmt *>(stmt), &env);
        if (S == stmt) break;
    }

    TaintValueV v = visitStmt(E, &env);
    return TaintValueV(v.getValue() & TaintChecker::function_map[F->getID()]->param_values);

}

}
