
#ifndef TAINT_CHECKER_H
#define TAINT_CHECKER_H

#include "taint-check/FunctionEnv.h"
#include "framework/BasicChecker.h"
#include "taint-check/TaintManager.h"
#include "xml/pugixml.hpp"

namespace taint {

class TaintChecker : public BasicChecker{

public:
    
    TaintChecker(ASTResource *resource, ASTManager *manager,
                  CallGraph *call_graph, Config *configure, TaintConfig *taintconfig)
      : BasicChecker(resource, manager, call_graph, configure){
        TaintChecker::taintconfig = taintconfig;
        TaintChecker::taintmanager = nullptr;
        TaintChecker::astmanager = manager;
        run_time = 0;
    };

    ~TaintChecker();
    static bool emit_arg;
    static TaintConfig *taintconfig;
    static TaintManager *taintmanager;
    static ASTManager *astmanager;

    static void init(ASTFunction *F, FunctionDecl *FD, CFG *function_cfg, TaintManager *taintmanager_);
    void check();
    void singleTimeCheck(bool output);
    std::vector<ASTFunction *> getTopoOrder();    
    void clear();
    
    static std::unordered_map<unsigned int, FunctionEnvironment *> function_map;
    static std::unordered_map<unsigned int, TaintManager *> taint_map;
    
    static bool is_tainted(FunctionDecl *F, CFGBlock *B, Stmt *S, Expr *E);

    clock_t get_time() {
        return run_time;
    }

private:
    clock_t run_time;
};


}


#endif
