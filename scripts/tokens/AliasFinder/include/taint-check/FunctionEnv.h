
#ifndef FUNCTION_ENV_H
#define FUNCTION_ENV_H
#include <clang/Analysis/CFG.h>

#include "taint-check/TaintEnv.h"

namespace taint {

/**
 * environment for a block
 */
class BlockEnvironment {

public:
    
    BlockEnvironment(ASTFunction *F, unsigned blockID, bool is_entry = false);

    void visitCFGElements(CFGBlock *block, Environment *out);

    ASTFunction *F;
    unsigned blockID;

    Environment environment;
};

/**
 * environment for a function
 */
class FunctionEnvironment {

public:
 
    FunctionEnvironment(ASTFunction *F, FunctionDecl *FD, CFG *function_cfg);
    
    ~FunctionEnvironment();

    void visitCFGBlocks(CFG *function_cfg);

    ASTFunction *F;
    //Environment environment;
    std::vector<BlockEnvironment *> blocks;
    bool is_visited;

    unsigned param_values;
    
    void add_arg_values(ASTFunction *F, std::vector<TaintValueV> &values);
    void emit_param_values();

    void outputTaintInfo(Config& config);
    void outputAsXML(pugi::xml_document &XMLDoc, int level);

    unsigned exitBlockID;

private:
    
    Environment getPredEnvironment(CFGBlock *block, std::vector<Environment> &outs);
    typedef std::unordered_map<ASTFunction *, std::vector<unsigned>> ARGValues;
    ARGValues *arg_values;

};


}


#endif
