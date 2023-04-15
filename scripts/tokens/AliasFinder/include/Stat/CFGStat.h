#ifndef CFG_STAT_H
#define CFG_STAT_H
#include <vector>
#include <unordered_set>
#include <clang/Frontend/ASTUnit.h>
#include <clang/Analysis/CFG.h>
#include "framework/ASTManager.h"
// #include "framework/CallGraph.h"
// #include "framework/Config.h"
#include "Stat/AliasStat.h"
#include "Stat/FileParser.h"
using namespace std;

class CFGStat{
    // ASTResource *resource;
    // ASTManager *manager;
    // CallGraph *callgraph;
    // Config *configure;
    SourceManager *srcMgr;
    unsigned _dist;
    AliasStat _aliasStat;
    CSVParser _fileParser;
    unordered_set<const CFGBlock *> _visited;
    std::vector<std::unique_ptr<CFG>> _cfgs;

public:
    // CFGStat(ASTResource *resource, ASTManager *manager,CallGraph *callgraph, 
    //         Config *configure, string csvIn, string csvOut):_fileParser(csvIn,csvOut){
    CFGStat(string csvIn, string csvOut):_fileParser(csvIn,csvOut){
        // this->resource=resource;
        // this->manager=manager;
        // this->callgraph=callgraph;
        // this->configure=configure;
    }

    clang::CFG* createCFG(clang::FunctionDecl *FD){
        auto cfg=CFG::buildCFG(FD, FD->getBody(), &FD->getASTContext(),CFG::BuildOptions());
        _cfgs.push_back(std::move(cfg));
        return _cfgs.back().get();
    }

    void dumpCFG(std::unique_ptr<CFG> &cfg) const {
        LangOptions LangOpts;
        LangOpts.CPlusPlus = true;
        if(cfg!=NULL){
            cfg->dump(LangOpts, true);
        }        
    }

    void dumpCFGs() {
        for(auto &cfg : _cfgs){           
            dumpCFG(cfg);
        }
    }

    // const std::vector<ASTFunction *>& getFunctions(){
    //     return callgraph->getTopLevelFunctions();       
    // }

    void statCFGs(std::string &astList);

    void dfsCFG(const CFGBlock *blockCur,const CFGBlock *blockEnd,unsigned distCur);

    unsigned computeDist(AliasPair & aliasPair);

    void dumpAlias();
};

#endif // end of CFG_STAT_H