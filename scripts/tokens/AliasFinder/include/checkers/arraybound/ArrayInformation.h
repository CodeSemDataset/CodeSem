#ifndef _ArrayINFORMATION_H
#define _ArrayINFORMATION_H
#include "framework/BasicChecker.h"
#include <vector>
#include "clang/AST/Expr.h"
#include <clang/Analysis/CFG.h>
#include "clang/AST/RecursiveASTVisitor.h"
#include <sstream>
#include <string>
#include <iostream>
#include <map>
#include <time.h>
#include <utility>
#include <unordered_set>
#include <set>
#include <stack>
#include "taint-check/TaintChecker.h"
#include "framework/Common.h"
#include "solver/Z3Coding.h"
#include "xml/pugixml.hpp"
//#include <z3++.h>

using namespace std;

class ClangZ3Translator;
class Z3Coding;

class AtomicAPInt{
	public:
    Z3Coding* zc;
	clang::BinaryOperatorKind op;
	Expr* lhs;
	Expr* rhs_expr;
    uint64_t rhs;
    //z3::expr constraint;
	Expr* getLHS(){return lhs;}
	uint64_t getRHS(){return rhs;}

    /*AtomicAPInt(Z3Coding* zc, Expr* lhs, Expr* rhs_expr=nullptr, uint64_t rhs=0, clang::BinaryOperatorKind op):zc(zc), lhs(lhs), rhs_expr(rhs_expr){

    }*/
};
class ArrayInfo {
    public:
    Expr* arrayBase;
    uint64_t upBound;
    Expr* upBound_expr;
    //in original use func, its origin use block, in callers its call stmt and it block
    CFGBlock* usedBlock;
    Stmt* usedStmt;
    Expr* index;
    ASTFunction* astFunc;
};
//record array's bound checking information, e.g. arr[b]=0, need bound checking: b<size
class ArraySubscript{
	public:
        Z3Coding* zc;
        //the depth of call on call graph to find definition pos of array for argument use of array
        //when construct array info, whenever get caller, increase depth;
        //when looking for bound checking, whenever get caller, decrease depth; when depth is 0, but no checking found, report it
        int depth;
        //array index define point
        //<level(0~depth-1),<callerfunc, <callstmt,<realarray,upbound>>>>
        //0 means array idx use function, 1 means caller,...
        //std::unordered_map<int,std::unordered_map<ASTFunction*,std::unordered_map<Stmt*,std::pair<Expr*,Expr*>>>> arrayInfo;
        //<level(0~depth-1),<callerfunc, <realarray,upbound>>>
        std::unordered_map<int,std::unordered_map<ASTFunction*,ArrayInfo>> callerArrayInfo;
        //std::vector<std::vector<std::string>> callStack;
        std::unordered_set<std::string> callStack;
        //used func, caller, caller?
        //array index use point
        //upbound in index use function
        //Expr* upbound;
		//CFGBlock *arrayIdxblock;
//        FUnctionDecl* arrayIdxFunc;
        //bool means true or false branch of if stmt
        std::vector<std::pair<Stmt*,bool>> pathConstraintStmtList;
        z3::expr pathConstraint;
        z3::expr upBoundCondition;
        z3::expr lowBoundCondition;
        //USE method: if isLoopBoundChecking, boundCondition will be index<upBound+1, where index is loopUpbound
        uint64_t upBound;
        z3::expr upBound_expr;
        z3::expr original_upBound_expr;
        //if isUnsined=false, need check idx>=0
        bool isUnsigned;
        //if idx>=0 check found, isUnsignedChecked will be set true
        int isUnsignedChecked;//1 checked, 0 unchecked, -1 overflow
        int isUpBoundChecked;
        bool isVectorArraySubscript;
        ArrayInfo originalArrayInfo;
        Expr *orignIndex;
		std::string originalLocation;
		int ID;
		//int loopID;
		Stmt *stmt;
        Stmt* originalStmt;
        //index may be changed due to for stmt in SolvePathConstraint mode, in other mode due to assignment, for, call
		Expr *index;
		FunctionDecl *func;
		std::string location;
		bool isLoopBoundChecking;
		CFGBlock *loopblock;
		CFGBlock *block;
		vector<AtomicAPInt> condition;
		void print();
		unsigned indexCnt;
		string arrayName;
		Expr *arrayIdx;
		stack<Expr*> indexs;
		string arrayExpr;//record the expression where uses array.
    

        ArraySubscript(Z3Coding* zc, Stmt* stmt, bool isUnsigned=true) : zc(zc), pathConstraint(zc->c.bool_val(true)), upBoundCondition(zc->c.bool_val(true)),lowBoundCondition(zc->c.bool_val(true)), upBound_expr(zc->c.int_val(0)), original_upBound_expr(zc->c.int_val(0)){
            originalStmt = stmt;
            isUnsignedChecked = 1;
            isUpBoundChecked = 0;
            isVectorArraySubscript=false;
            depth = 0;
        }

        //deep copy of constraint
        ArraySubscript(const ArraySubscript& tmp):zc(tmp.zc),pathConstraint(tmp.pathConstraint), block(tmp.block), ID(tmp.ID), stmt(tmp.stmt), orignIndex(tmp.orignIndex), index(tmp.index), func(tmp.func), location(tmp.location), originalLocation(tmp.originalLocation),isLoopBoundChecking(tmp.isLoopBoundChecking), loopblock(tmp.loopblock), condition(tmp.condition), indexCnt(tmp.indexCnt), arrayName(tmp.arrayName), arrayIdx(tmp.arrayIdx), indexs(tmp.indexs), arrayExpr(tmp.arrayExpr), originalStmt(tmp.originalStmt), upBound(tmp.upBound), upBound_expr(tmp.upBound_expr), original_upBound_expr(tmp.original_upBound_expr), isUnsigned(tmp.isUnsigned), isUnsignedChecked(tmp.isUnsignedChecked), upBoundCondition(tmp.upBoundCondition),lowBoundCondition(tmp.lowBoundCondition), isUpBoundChecked(tmp.isUpBoundChecked),depth(tmp.depth),isVectorArraySubscript(tmp.isVectorArraySubscript){ 
            pathConstraintStmtList = tmp.pathConstraintStmtList;
            for(auto it=tmp.callStack.begin();it != tmp.callStack.end(); it++){
                //std::vector<std::string> v;
                //for (auto s: *it){
                  //  v.push_back(s);
                //}
                callStack.insert(*it);
            } 
            //constraint
        }
        
        void updateCallStack(const std::string funcName) {
            if (callStack.empty()){
                callStack.insert(funcName);
                return;
            }
            unordered_set<std::string> tmp(callStack);
            callStack.clear();
            for(auto itr = tmp.begin();itr!=tmp.end();itr++){
                callStack.insert(funcName+"->"+*itr);
            }

        }

        void updatePathConstraint(Stmt* s, z3::expr cond, bool flag) {
            //flag true means true branch of stmt s with cond
            if (!cond.is_bool()){
                return;
            }
            if (s)
                pathConstraintStmtList.push_back(std::make_pair(s,flag));
            if (flag) 
                pathConstraint = pathConstraint && cond;
            else
                pathConstraint = pathConstraint && !cond;
        }
        
        void changeArrayInfo4Caller(int level, ASTFunction* astFunc) {
            auto findlevel = callerArrayInfo.find(level);
            if (findlevel != callerArrayInfo.end()){
                auto findf = findlevel->second.find(astFunc);
                if (findf != findlevel->second.end()) {
                    block = findf->second.usedBlock;
                    stmt = findf->second.usedStmt; 
                    for (unsigned i=0;i<condition.size();i++) {
                        condition[i].lhs = findf->second.index;
                        if (condition[i].op==clang::BinaryOperatorKind(BO_LT)){
                            condition[i].rhs = findf->second.upBound;
                        }
                    }
                }
            }
        }

        void resetArrayInfo4report(){
            for (unsigned i=0;i<condition.size();i++) {
                condition[i].lhs = originalArrayInfo.index;
                if (condition[i].op==clang::BinaryOperatorKind(BO_LT)){
                    condition[i].rhs = originalArrayInfo.upBound;
                }           
            }
        }
        void updateIndex(Expr* newIdx, bool idxToLoop, ClangZ3Translator* translator, ASTFunction* astF) {
            index = newIdx;
            vector<z3::expr> index_exprs = zc->clangExprToZ3Expr(newIdx, astF);
            if (idxToLoop && !index_exprs.empty()) {
                z3::expr expr0 = zc->Int2Z3Expr(0);
                lowBoundCondition = zc->clangOp2Z3Op(index_exprs.back(), expr0, BinaryOperatorKind::BO_GE);
                z3::expr expru = zc->Int2Z3Expr(upBound+1);
                upBoundCondition = zc->clangOp2Z3Op(index_exprs.back(),expru,BinaryOperatorKind::BO_LT);

            }
        }

        //for simple check method
        void changeIndex(Expr* ni,bool flag=false)
		{
			if (MemberExpr *MRE = dyn_cast<MemberExpr>(index))
			{
				if(!flag)
				{
					indexs.push(index);
					index=ni;
				}
				else
				{
					indexs.push(MRE->getBase());
					MRE->setBase(ni);
					index=MRE;
				}
			}
			else
			{
				indexs.push(index);
				index=ni;
			}
			for(unsigned i=0;i<condition.size();i++)
				condition[i].lhs=index;
		}
		void resetIndex(bool flag=false)
		{
			if(indexs.empty())return;
			Expr* ni=indexs.top();
			indexs.pop();
			if (MemberExpr *MRE = dyn_cast<MemberExpr>(index))
			{
				if(!flag)
				{
					index=ni;
				}
				else
				{
					MRE->setBase(ni);
					index=MRE;
				}
			}
			else
			{
				index=ni;
			}
			for(unsigned i=0;i<condition.size();i++)
				condition[i].lhs=index;
		}
		void resetIndex(Expr * ni)
		{
			index=ni;
			for(unsigned i=0;i<condition.size();i++)
				condition[i].lhs=index;
		}
        /*
		ArraySubscript copy()
		{
			ArraySubscript tmp;
			tmp.block=block;
			tmp.ID=ID;
			tmp.stmt=stmt;
			tmp.orignIndex=orignIndex;
			tmp.index=index;
			tmp.func=func;
			tmp.location=location;
			tmp.originalLocation=originalLocation;
			tmp.isLoopBoundChecking=isLoopBoundChecking;
			tmp.loopblock=loopblock;
			tmp.condition=condition;
			
			tmp.indexCnt=indexCnt;
			tmp.arrayName=arrayName;
			tmp.arrayIdx=arrayIdx;
			tmp.indexs=indexs;
			tmp.arrayExpr=arrayExpr;
			return tmp;
		}*/
};

struct PNode{
	string name;
	double terms;
	PNode(string n,double t):name(n),terms(t){}
};

#endif
