#include <fstream>
#include "taint-check/TaintChecker.h"
#include "taint-check/TaintInterface.h"

namespace taint {

TaintConfig *TaintChecker::taintconfig = nullptr;
TaintManager *TaintChecker::taintmanager = nullptr;
ASTManager *TaintChecker::astmanager = nullptr;
bool TaintChecker::emit_arg = true;

std::unordered_map<unsigned int, TaintManager *> TaintChecker::taint_map;
std::unordered_map<unsigned int, FunctionEnvironment *> TaintChecker::function_map;

void TaintChecker::init(ASTFunction *F, FunctionDecl *FD, CFG *function_cfg, TaintManager *taintmanager_) {  
    // assert(F->getName() == FD->getNameAsString());
    if(F == nullptr || !FD->hasBody())
        return;
    FunctionEnvironment* func_env = new FunctionEnvironment(F, FD, function_cfg);
    function_map[F->getID()] = func_env;
    taint_map[F->getID()] = taintmanager_; 
}

TaintChecker::~TaintChecker() {
    
}

void TaintChecker::clear() {
    for(auto iter = function_map.begin(); iter != function_map.end(); ++iter) {
        FunctionEnvironment *current = iter->second;
        delete current;
    }
    for(auto iter = taint_map.begin(); iter != taint_map.end(); ++iter) {
        TaintManager *current = iter->second;
        delete current;
    }
    function_map.clear();
    taint_map.clear();
}

void TaintChecker::check() {
    //运行第一次确认全局变量污染情况
    if(TaintChecker::taintconfig && TaintChecker::taintconfig->taintCheckerConfig.find("CheckGlobalVariable") != TaintChecker::taintconfig->taintCheckerConfig.end()) {
        if(TaintChecker::taintconfig->taintCheckerConfig["CheckGlobalVariable"] == "true") {
            singleTimeCheck(false);
            clear();
        }
    }
    //运行第二次得到结果
    singleTimeCheck(true);
}

void TaintChecker::singleTimeCheck(bool output) {
    clock_t start = clock();

    int level = 3;
    pugi::xml_document xmlDoc;
    if(TaintChecker::taintconfig) {
        assert(TaintChecker::taintconfig->taintCheckerConfig.find("PrintLog") != TaintChecker::taintconfig->taintCheckerConfig.end());
        std::string log_level = TaintChecker::taintconfig->taintCheckerConfig["PrintLog"];
        level = atoi(log_level.c_str());
    }
 
    std::vector<ASTFunction *> topoOrder = TaintChecker::getTopoOrder();
    int cnt = 0;
    int size = topoOrder.size();
    for (auto it = topoOrder.rbegin(); it != topoOrder.rend(); it++) {
        ++cnt;
        ASTFunction *F = *it;
        FunctionDecl *FD = manager->getFunctionDecl(F);
        if(TaintChecker::taintconfig && TaintChecker::taintconfig->blackList.find(F->getName()) != TaintChecker::taintconfig->blackList.end()) continue;
        if(TaintChecker::taintconfig && TaintChecker::taintconfig->whiteList.find(F->getName()) != TaintChecker::taintconfig->whiteList.end()) continue;

        if(FD->hasBody()) {
            FD=FD->getDefinition();
        }
        if(!FD) continue;
        
        //创建相应Environment和TaintManager
        TaintChecker::taintmanager = new TaintManager(FD, F, astmanager);
        std::unique_ptr<CFG> &function_cfg = manager->getCFG(F);
        taint::TaintChecker::init(F, FD, function_cfg.get(), taintmanager);

        std::cerr << "\r Start Analyse Function " << cnt << "/" << size;
        function_map[F->getID()]->visitCFGBlocks(function_cfg.get());
        if(output) {
            //function_map[F->getID()]->outputTaintInfo(*configure);
            function_map[F->getID()]->outputAsXML(xmlDoc, level);
        }
    }
    cerr << std::endl;
    if(output) {
        xmlDoc.save_file("taint_check_output.xml");
    }
    //build(topoOrder);
    run_time += clock() - start;
}

std::vector<ASTFunction *> TaintChecker::getTopoOrder() {    
    std::unordered_map<unsigned,unsigned> in_size;
    std::map<unsigned, std::unordered_set<ASTFunction*>> collection;
    for (ASTFunction *F : resource->getFunctions(true)) {
        FunctionDecl *FD = manager->getFunctionDecl(F);
        const clang::SourceManager &SM = FD->getASTContext().getSourceManager();
        std::string filename = "";

        if(FD->hasBody())
            FD = FD->getDefinition();
        else
            continue;
        SourceLocation SL = FD->getBeginLoc();
        filename = SL.printToString(SM);
        if (filename.find(".h") != std::string::npos || filename.find("include") != std::string::npos)
        {
            continue;
        }
        unsigned n = call_graph->getParents(F).size();
        in_size[F->getID()]=n;
        collection[n].insert(F);
    }
    
    std::vector<ASTFunction *> result;

    while (!collection.empty()) {
        if (collection.begin()->second.size() == 0) {
            collection.erase(collection.begin());
            continue;
        }
        
        ASTFunction *F = *(collection.begin()->second.begin());
        FunctionDecl * FD = manager->getFunctionDecl(F);
        /*if("SET_BulkCfgStartMod" == FD->getNameAsString());
                llvm::errs()<<F->getFullName()<<"\n";*/
        collection.begin()->second.erase(F);
        result.push_back(F);
        
        for (ASTFunction *CF : call_graph->getChildren(F)) {
            FunctionDecl * FD = manager->getFunctionDecl(CF);
            /*if("devGetDfrInfo" == FD->getNameAsString());
                llvm::errs()<<F->getFullName()<<"\n";*/
            if(in_size.find(CF->getID())!= in_size.end()){
                unsigned size = in_size[CF->getID()];
                if (in_size[CF->getID()] != 0) in_size[CF->getID()]--;

                if (collection[size].erase(CF) == 1) {
                    collection[size - 1].insert(CF);
                }
            }
        }
    }
    return result;
}

bool TaintChecker::is_tainted(FunctionDecl *F, CFGBlock *B, Stmt *S, Expr *E) {
    
    return getExprTaintValue(F, B, S, E,call_graph).is_tainted();
}


}

