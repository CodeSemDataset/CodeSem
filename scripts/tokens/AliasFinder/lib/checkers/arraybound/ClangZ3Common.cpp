#include "checkers/arraybound/ClangZ3Common.h"
#include "solver/Z3Coding.h"
#include "checkers/arraybound/CommonFunctions.h"

using namespace common;

bool ClangZ3Translator::clangCallZ3(vector<ArraySubscript> list, queue<Stmt*> StmtQue){
	std::cerr<<"------------------clangCallZ3-------------------"<<std::endl;
	std::cerr<<"list size:"<<list.size()<<std::endl;
	std::cerr<<"StmtQue size:"<<StmtQue.size()<<std::endl;
	
	for(unsigned int i=0;i<StmtQue.size();i++){
		std::cerr<<print(StmtQue.front())<<std::endl;
	}
	return false;
}

bool ClangZ3Translator::handleIndex(ArraySubscript& input, ASTFunction* astF) {
    //idx<size or idx>=0 permanent sat? 
    if (input.condition.size()==0)
        return false;
    vector<expr> idxexprs = zc->clangExprToZ3Expr(input.index, astF);
    if (idxexprs.empty()){
        return false;
    }
    bool hasRemoved = false;
   // assert(!idxexprs->empty());
    expr idxtmp = idxexprs.back();
    //delete idxexprs; idxexprs=nullptr;
    auto itr = input.condition.begin();
    while(itr != input.condition.end()){
        AtomicAPInt con = *itr;
        bool result = false;
        bool flag=true;
        /*auto findstmt = z3result.find(stmt);
        if (findstmt!=z3result.end()){
        {  
            auto findcon = findstmt->second.find(std::make_pair(con,true));
            if (findcon != findstmt->second.end()){
                result = findcon->second;
                flag = false;
            }
        }*/
        if (flag){
            expr rhs = zc->Int2Z3Expr(con.getRHS(),0);
            expr cond = zc->clangOp2Z3Op(idxtmp,rhs,con.op);
            result = zc->isPermanentSat(cond);
            //z3result[stmt].insert(std::make_pair(std::make_pair(con,true),result));
            if (result){
                itr=input.condition.erase(itr);
                hasRemoved = true;
                if (con.op == clang::BinaryOperatorKind::BO_GE){
                    input.isUnsignedChecked = true;
                }
                else 
                    input.isUpBoundChecked = true;
                
                common::printLog( cond.to_string()+" is permanent sat\n",common::CheckerName::arrayBound,3,*configure );
            }
            else {
                itr++;
            }

        }
    }
    return hasRemoved;
}

void ClangZ3Translator::handleAssignment(ASTFunction* astF, Stmt* stmt, ArraySubscript& input){
    //idx = x op y -> idx<size?
    //idx %= expr ->idx<size?
    if (input.condition.size()==0)
        return;
    vector<expr> stmtexprs = zc->clangExprToZ3Expr(stmt, astF);
    if (stmtexprs.empty()){
        return;
    }

    vector<expr> idxexprs = zc->clangExprToZ3Expr(input.index, astF);
    if (idxexprs.empty()){
        return;
    }
    //assert(!idxexprs->empty());
    expr stmttmp = stmtexprs.front();//use the assignment expr
    //delete stmtexprs; stmtexprs=nullptr;
    expr idxtmp = idxexprs.back();
    //delete idxexprs; idxexprs=nullptr;
    auto itr = input.condition.begin();
    while(itr != input.condition.end()){
    //    for (unsigned j=0; j<input.condition.size();j++){
        AtomicAPInt con = *itr;
        bool result = false;
        bool flag=true;
        auto findstmt = z3result.find(stmt);
        if (findstmt!=z3result.end()){
            auto findcon = findstmt->second.find(std::make_pair(con,true));
            if (findcon != findstmt->second.end()){
                result = findcon->second;
                flag = false;
            }
        }
        if (flag){
            expr rhs = zc->Int2Z3Expr(con.getRHS(),0);
            expr cond = zc->clangOp2Z3Op(idxtmp,rhs,con.op);
            result = zc->implySolve(stmttmp,cond);
            z3result[stmt].insert(std::make_pair(std::make_pair(con,true),result));

        }
        if (result){
            itr=input.condition.erase(itr);
        }
        else {
            itr++;
        }
    }
}

bool ClangZ3Translator::implyFlag(ASTFunction* astF, Expr* stmt, ArraySubscript& input, AtomicAPInt& con, bool flag) {
	auto findstmt = z3result.find(stmt);
    if (findstmt!=z3result.end()){
        auto findcon = findstmt->second.find(std::make_pair(con,flag));
        if (findcon != findstmt->second.end()){
            return findcon->second;
        }
    }
    vector<expr> stmtexprs = zc->clangExprToZ3Expr(stmt, astF);
    //might be p==nullptr, I dont care
    if (stmtexprs.empty()){
        z3result[stmt].insert(std::make_pair(std::make_pair(con,flag),false));
        return false;
    }
	vector<expr> lhs = zc->clangExprToZ3Expr(con.getLHS(), astF);
    
    if (lhs.empty()) {
        //TODO report it or skip it
        //array index is replaced to unhandled expr, eg idx=callf(xxx);
        z3result[stmt].insert(std::make_pair(std::make_pair(con,flag),true));
        return true;
    }
    
    expr lhstmp = lhs.back();
    //delete lhs; lhs=nullptr;
   /* if (lhstmp.is_int()){
        unsigned sz=64;//TODO
        lhstmp = z3::expr(ctx,Z3_mk_int2bv(ctx,sz,lhstmp));
    }*/
//    uint64_t size = lhstmp.get_sort().bv_size();
    uint64_t size=0;//TODO rm size
	expr rhs = zc->Int2Z3Expr(con.getRHS(),size);
	expr cond = zc->clangOp2Z3Op(lhstmp,rhs,con.op);
    expr tmp = stmtexprs.back();
    //delete stmtexprs; stmtexprs=nullptr;
    if (!tmp.is_bool()){
        z3result[stmt].insert(std::make_pair(std::make_pair(con,flag),false));
        return false;
    }
    if (!flag) {
        tmp = !tmp;
    }
    bool isintersected = zc->isIntersected(stmt,con.getLHS());
    if (!isintersected){
        z3result[stmt].insert(std::make_pair(std::make_pair(con,flag),false));
        return false;
    }
    bool result = zc->implySolve(tmp,cond);
    z3result[stmt].insert(std::make_pair(std::make_pair(con,flag),result));
	return result;
}

void ClangZ3Translator::dump(z3::expr e){
    cout<<"z3 expr:"<<e<<endl;
}

void ClangZ3Translator::clearExprMap() {
    zc->clear();
    z3result.clear();
}
