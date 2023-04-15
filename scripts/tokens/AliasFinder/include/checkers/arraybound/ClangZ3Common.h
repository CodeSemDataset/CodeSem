#ifndef _ClangZ3Common_H
#define _ClangZ3Common_H
#include <vector>
#include "framework/BasicChecker.h"
#include "z3++.h"
#include <string>
#include <iostream>
#include <sstream>
#include <iostream>
#include <vector>
#include <map>
#include "clang/AST/Expr.h"
#include "P2A/PointToAnalysis.h"
#include "solver/Z3Coding.h"
#include "checkers/arraybound/ArrayInformation.h"
#include "checkers/arraybound/CommonFunctions.h"
//#pragma comment(lib,"..\libz3.lib")
using namespace z3;
using namespace std;
using namespace clang;
using namespace llvm;

class gfj_pair_hash{
    public:
    size_t operator()(const std::pair<AtomicAPInt,bool>& key) const {
        std::hash<std::string> hs;
        std::string s="";
        s+=int2string(key.first.lhs)+" "+int2string(key.first.op)+" "+int2string(key.first.rhs)+" "+int2string(key.second);
        return hs(s);
    }
};

class gfj_pair_equal{
    public:
    bool operator()(const std::pair<AtomicAPInt,bool>& l, const std::pair<AtomicAPInt,bool>& r) const{
        return l.first.lhs==r.first.lhs&&l.first.op==r.first.op&&l.first.rhs==r.first.rhs&&l.second==r.second;
    }
};

class ClangZ3Translator {
public:
    Config *configure;
    context ctx;
    Z3Coding* zc;
    
    std::unordered_map<Stmt*,std::unordered_map<std::pair<AtomicAPInt,bool>,bool,gfj_pair_hash, gfj_pair_equal>> z3result;
public:
    ClangZ3Translator(Config *configure, ASTManager* manager, PointToAnalysis* PTA, CallGraph* call_graph){
        zc = new Z3Coding(configure,ctx, manager, PTA, call_graph);
        this->configure = configure;
    }
    ~ClangZ3Translator(){
        delete zc;
        zc = nullptr;
    }
    void clearExprMap();
    //z3::expr clangOp2Z3Op(z3::expr e1,z3::expr e2,clang::BinaryOperatorKind op);
    //bool imply(AtomicOperator ao,AtomicAPInt aa);
    bool clangCallZ3(vector<ArraySubscript> list, queue<Stmt*> StmtQue);
    bool handleIndex(ArraySubscript& input, ASTFunction* astF);
    //check whether stmt imply con, input not used, flag:means the true or false branch of stmt if it a condion of an if stmt or conditionoperator
    void handleAssignment(ASTFunction* astF, Stmt* stmt, ArraySubscript& input);
    bool implyFlag(ASTFunction* astF, Expr* stmt, ArraySubscript& input, AtomicAPInt& con, bool flag);
    void dump(z3::expr e);

    friend class ArrayBoundChecker;
};
#endif
