
#include "framework/Common.h"

#include "taint-check/FunctionEnv.h"
#include "taint-check/TaintChecker.h"

namespace taint {

BlockEnvironment::BlockEnvironment(ASTFunction *F, unsigned blockID, bool is_entry) : environment(F, is_entry) {
    this->F = F;
    this->blockID = blockID;
}

void BlockEnvironment::visitCFGElements(CFGBlock *block, Environment *out) {
    *out = environment;
    for (auto &element : *block) {
        if (element.getKind() == CFGStmt::Statement) {
            const Stmt *S = element.castAs<CFGStmt>().getStmt();
            visitStmt(const_cast<Stmt *>(S), out);
        }
    }
    if(out->F->isConstructor()) {
        out->return_value = out->getCXXThisValue();
    }
}

FunctionEnvironment::FunctionEnvironment(ASTFunction *F, FunctionDecl *FD, CFG *function_cfg){
    is_visited = false;
    arg_values = new ARGValues;
    param_values = 0;

    this->F = F;
    unsigned entry_id = function_cfg->getEntry().getBlockID();
    for (const CFGBlock *block : *function_cfg) {
        unsigned block_id = block->getBlockID();
        assert(block_id == blocks.size());
        blocks.push_back(new BlockEnvironment(F, block_id, entry_id == block_id));
    }

}

FunctionEnvironment::~FunctionEnvironment() {
    for (unsigned i = 0; i < blocks.size(); i++) {
        delete blocks[i];
    }
}

void FunctionEnvironment::add_arg_values(ASTFunction *F, std::vector<TaintValueV> &values) {
    if (arg_values->count(F) == 0) {
        for (unsigned i = 0; i < F->getParamSize(); i++) {
            (*arg_values)[F].push_back(0);
        }
    }
    for (unsigned i = 0; i < F->getParamSize() && values.size(); i++) {
        (*arg_values)[F][i] |=  values[i].getValue();
    }
}

void FunctionEnvironment::emit_param_values() {
    
    for (auto &content : *arg_values) {
        ASTFunction *F = content.first;
        unsigned value = 0;
        unsigned i = 0;
        for (unsigned v : content.second) {
            if (v & param_values)
                value |= (v << i);
            i++;
        }
        if(TaintChecker::function_map.find(F->getID()) != TaintChecker::function_map.end())
            TaintChecker::function_map[F->getID()]->param_values |= value;
    }
}

Environment FunctionEnvironment::getPredEnvironment(CFGBlock *block, std::vector<Environment> &outs) {
    
    std::vector<unsigned> predBlocks;
    for (auto it = block->pred_begin(); it != block->pred_end(); it++) {
        if (*it == nullptr) continue;
        unsigned block_id = (*it)->getBlockID();
        predBlocks.push_back(block_id);
    }

    if (predBlocks.size() == 0)
        return blocks[block->getBlockID()]->environment;
    Environment out = outs[predBlocks[0]];
    for (unsigned i = 1; i < predBlocks.size(); i++) {
        out = out + outs[predBlocks[i]];
    }
    return out;
}

void FunctionEnvironment::visitCFGBlocks(CFG *function_cfg) {
    bool need_continue = true;
    unsigned iteration = 5;

    CFGBlock exitBlock = function_cfg->getExit();
    exitBlockID = exitBlock.getBlockID();
    
    std::vector<Environment> outs;
    for (auto block : blocks) {
        outs.push_back(block->environment);
    }
    while (need_continue && iteration > 0) {
        need_continue = false;
        for (auto it = function_cfg->rbegin(); it != function_cfg->rend(); it++) {
            
            CFGBlock *block = *it;
            unsigned block_id = block->getBlockID();
            
            Environment predEnv = getPredEnvironment(block, outs);
            if (predEnv != blocks[block_id]->environment) {
                blocks[block_id]->environment = predEnv;
                need_continue = true;
                blocks[block_id]->visitCFGElements(block, &outs[block_id]);
            }
            else if (iteration == 5) {
                blocks[block_id]->visitCFGElements(block, &outs[block_id]);
            }
        }
        iteration --;
    }

    is_visited = true;
}

void FunctionEnvironment::outputTaintInfo(Config& config) {
    //common::printLog("-------------------------------------------------\n", common::CheckerName::taintChecker, 4, config);
    std::string funcName = "Function Name : " + F->getFunctionName() + "\n";
    common::printLog(funcName, common::CheckerName::taintChecker, 4, config);
    
    BlockEnvironment* BE = blocks[exitBlockID];
    BE->environment.outputTaintInfo(config);
    std::cout << std::endl;
}

void FunctionEnvironment::outputAsXML(pugi::xml_document &XMLDoc, int level) {
    BlockEnvironment* BE = blocks[exitBlockID];
    BE->environment.outputAsXML(XMLDoc, level);
}

}

