#ifndef _ArrayBoundChecker_H
#define _ArrayBoundChecker_H
#include "checkers/arraybound/ArrayInformation.h"
#include "checkers/arraybound/ClangZ3Common.h"
#include "framework/BasicChecker.h"
#include "taint-check/TaintChecker.h"
#include "framework/Common.h"
#include "P2A/PointToAnalysis.h"
#include "xml/pugixml.hpp"

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

using namespace std;

class FindArraySubscriptExpr : public RecursiveASTVisitor<FindArraySubscriptExpr> {
private:
    std::vector<ArraySubscriptExpr *> arrayExprs;
public:
    bool VisitArraySubscriptExpr(ArraySubscriptExpr *expr) {
        if (expr) {
            arrayExprs.push_back(expr);
        }
        return true;
    }	
    std::vector<ArraySubscriptExpr*>& getArrayExprs() {
        return arrayExprs;
    }
};

class FindCXXOperatorCallExpr : public RecursiveASTVisitor<FindCXXOperatorCallExpr> {
private:
    std::vector<CXXOperatorCallExpr*> arrayExprs;
public:
    bool VisitCXXOperatorCallExpr(CXXOperatorCallExpr* expr) {
        if (expr) {
            if (expr->getOperator()==OO_Subscript){
                arrayExprs.push_back(expr);

            }
        }
        return true;
    }	
    std::vector<CXXOperatorCallExpr*>& getArrayExprs() {
        return arrayExprs;
    }
};

/*
class FindReturnStmt : public StmtVisitor<FindReturnStmt> {
private:
    std::vector<ReturnStmt*> retStmts;

public:
    void VisitChildren(Stmt *stmt) {
        for (Stmt *SubStmt : stmt->children()) {
            if (SubStmt) {
                        this->Visit(SubStmt);
                              
            }
                
        }
          
    }
    void VisitStmt(Stmt* expr) {
        if (ReturnStmt* ret = dyn_cast<ReturnStmt>(expr)) {
            retStmts.push_back(ret);
        }
        VisitChildren(expr);
    }	
    std::vector<ReturnStmt*>& getReturnStmts() {
        return retStmts;
    }
};
*/

class ArrayBoundChecker : public BasicChecker {
private:
    std::unordered_set<std::string> unchecked;
    std::unordered_set<std::string> checked;
    PointToAnalysis *PTA;
    ClangZ3Translator* translator;
	std::vector<CFGBlock*> unfinished;

	map<CFGBlock*, vector<ArraySubscript> > mapToBlockIn;
	map<CFGBlock*, vector<ArraySubscript> > mapToBlockOut;

	map<CFGBlock*, vector<pair<CFGBlock*,vector<Expr*> > > > mapToBlockOutLoopExpr;
	map<CFGBlock*, vector<Expr*> > mapToBlockInLoopExpr;
	map<CFGBlock*, vector<Expr*> > mapToBlockTaintedLoopExpr;

	map<Expr*,vector<Expr*>> mapToLoopTaintedExpr;
	map<Expr*,CFGBlock*> mapToCheckBlock;
	map<Expr*,Stmt*> mapToCheckStmt;
	vector<string> callpath;
	vector<int> reportedID;
	map<int,set<vector<string> > > mapToPath;
    std::unordered_map<int,std::unordered_map<int,ArraySubscript>> uncheckedArrays;
    std::unordered_map<int,std::unordered_map<int,ArraySubscript>> checkedArrays;
	int depth;
	string reportWarnings;

	int warningCount;
	//clock_t totalTime;
	//int cntCheck;
	ASTFunction* astFunc;
    FunctionDecl* FuncNow;
	SourceManager *sm;

    bool CheckVectorOutBoundEnable;
    bool SolvePathConstraints;
	bool ReportPathConstraints;
	bool ReportPath;
    bool CheckTaintArrayOnly;
	bool SimpleCheckEnable;
	bool Z3CheckEnable;
	bool ifAnalyeLoopExpr;
	bool IndexIgnoreConditionalOperator;
	bool SimpleExprCheckOnly;
	bool DebugMode;
	std::string DebugFunctionName;
	vector<string> loopReport;
	clock_t run_time;
	clock_t start_time;
	clock_t func_start_time;
	int Function_TIMEOUT;
	map<int,vector<ArraySubscript>> sameID;
	std::string xmlFile_loopbound;
	std::string xmlFile_arraybound;
	std::string xmlFile_notarraybound;
	std::unordered_map<std::string, std::string> ptrConfigpath;

	//sameID: record the same ID in a function, means the ID is the same array subscript,
	//when encountering a for(i<m&&i<n) stmt, we split the it to two records with the same ID
public:
	pugi::xml_document doc_arraybound;
	pugi::xml_document doc_loopbound;
	pugi::xml_document doc_notarraybound;
	bool doc_arraybound_empty;
	bool doc_loopbound_empty;
	bool doc_notarraybound_empty;
	int loc_time;
	int back_time;
//	void printTime(ofstream& process_file)
//	{
////		process_file<<"Loc Time:"<<loc_time/CLOCKS_PER_SEC/60<<"min"<<loc_time/CLOCKS_PER_SEC%60<<endl;
////		process_file<<"Check Time:"<<back_time/CLOCKS_PER_SEC/60<<"min"<<back_time/CLOCKS_PER_SEC%60<<endl;
//	}
	ArrayBoundChecker(ASTResource *resource, ASTManager *manager,
                  CallGraph *call_graph, PointToAnalysis* pta, Config *configure)
      : BasicChecker(resource, manager, call_graph, configure){
		translator = new ClangZ3Translator(configure, manager, pta, call_graph);
        SimpleCheckEnable=false;
		doc_loopbound_empty=true;
		doc_arraybound_empty=true;
		doc_notarraybound_empty=true;
		SimpleExprCheckOnly=false;
		Z3CheckEnable=true;
		CheckTaintArrayOnly=true;
        CheckVectorOutBoundEnable=true;
        SolvePathConstraints=true;
		ReportPathConstraints=true;
		ReportPath=true;
        IndexIgnoreConditionalOperator=false;
		start_time = clock();
        PTA = pta;
		sm = nullptr;
		Function_TIMEOUT = -1;
        std::unordered_map<std::string, std::string> ptrConfig =configure->getOptionBlock("ArrayBound");
		depth = stoi(ptrConfig.find("checkdepth")->second);
		Function_TIMEOUT  = stoi(ptrConfig.find("Function_TIMEOUT")->second);
		
		// if(ptrConfig.find("SimpleCheckEnable") != ptrConfig.end() && ptrConfig.find("SimpleCheckEnable")->second == "true"){
		// 	SimpleCheckEnable=true;
		// }
		// if(ptrConfig.find("IndexIgnoreConditionalOperator") != ptrConfig.end() && ptrConfig.find("IndexIgnoreConditionalOperator")->second == "true"){
		// 	IndexIgnoreConditionalOperator=true;	
		// }
		// if(ptrConfig.find("SimpleExprCheckOnly") != ptrConfig.end()&& ptrConfig.find("SimpleExprCheckOnly")->second == "true"){
		// 	SimpleExprCheckOnly=true;	
		// }
		// if(ptrConfig.find("Z3CheckEnableWithoutPathConstraint") != ptrConfig.end()&& ptrConfig.find("Z3CheckEnableWithoutPathConstraint")->second == "false"){
		// 	Z3CheckEnable=false;	
		// }
		if(ptrConfig.find("CheckTaintArrayOnly") != ptrConfig.end()&& ptrConfig.find("CheckTaintArrayOnly")->second == "false"){
			CheckTaintArrayOnly=false;	
		}

        if(ptrConfig.find("CheckVectorOutBoundEnable") != ptrConfig.end()&& ptrConfig.find("CheckVectorOutBoundEnable")->second == "false"){
			CheckVectorOutBoundEnable=false;	
		}

        if(ptrConfig.find("SolvePathConstraints") != ptrConfig.end()&& ptrConfig.find("SolvePathConstraints")->second == "false"){
			SolvePathConstraints=false;	
		}
        if(ptrConfig.find("ReportPathConstraints") != ptrConfig.end()&& ptrConfig.find("ReportPathConstraints")->second == "false"){
			ReportPathConstraints=false;	
		}		
        if(ptrConfig.find("ReportPath") != ptrConfig.end()&& ptrConfig.find("ReportPath")->second == "false"){
			ReportPath=false;	
		}			
        if(ptrConfig.find("DebugMode") != ptrConfig.end()&& ptrConfig.find("DebugMode")->second == "false"){
			DebugMode = false;
		}
		if(ptrConfig.find("FunctionName") != ptrConfig.end()){
    		DebugFunctionName = ptrConfig.find("FunctionName")->second;
		}
		ptrConfigpath =configure->getOptionBlock("pathToReport");
       	xmlFile_loopbound = ptrConfigpath.find("path")->second + "ARRAY.INDEX.OUT.BOUND.(LOOP).xml";
       	xmlFile_arraybound = ptrConfigpath.find("path")->second + "ARRAY.INDEX.OUT.BOUND.xml";
		xmlFile_notarraybound = ptrConfigpath.find("path")->second + "ARRAY.INDEX.NOT.OUT.BOUND.xml";

		warningCount = 0;
        run_time = 0;
	}

    ~ArrayBoundChecker() {

        if(!doc_loopbound_empty) doc_loopbound.save_file(xmlFile_loopbound.c_str(), "\t", pugi::format_no_declaration);
        if(!doc_arraybound_empty) doc_arraybound.save_file(xmlFile_arraybound.c_str(), "\t", pugi::format_no_declaration);      
        if(!doc_notarraybound_empty) doc_notarraybound.save_file(xmlFile_notarraybound.c_str(), "\t", pugi::format_no_declaration);      
        delete translator;
        translator = nullptr;
    }

	clock_t get_time();
	bool isTainted(FunctionDecl* Func,CFGBlock* block,Stmt* stmt,Expr* expr);
	bool checkExprTaintedForLoop(FunctionDecl* Func,CFGBlock* block,Stmt* stmt,Expr* expr);
	void check();
	void checkFunc(ASTFunction *astFunc);
	void initialize();
	vector<ArraySubscript> LocatingTaintExpr(ASTFunction* func,CFG * myCFG);
	void AnalyeLoopExpr(FunctionDecl *func,CFG * cfg);
	vector<Expr*> checkTaintExpr(Expr* stmt,CFGBlock* block,FunctionDecl* func,bool flag);
	vector<ArraySubscript> DFS2func(ASTFunction *astFunc,int level,vector<ArraySubscript> list);
//	vector<ArraySubscript> backwardAnalyse(CFG * cfg,ASTFunction* astF, vector<ArraySubscript> list, unordered_set<int>& set);
	vector<ArraySubscript> backwardAnalyse(CFG * cfg, ASTFunction* astF, vector<ArraySubscript> list);
	
	std::unordered_map<Expr*, vector<Expr*>> getIdx(Expr *ex);
	vector<ArraySubscript> getFatherScript(vector<ArraySubscript>& list,ASTFunction * father, CallExpr* callsite, ASTFunction * current);
//	const vector<uint64_t> getArraySize(ASTFunction* astF, Expr* ex);
//	const vector<uint64_t> getArraySize(ASTFunction* astF, ValueDecl* valueDecl);
	VarDecl* getVarDecl(Expr* ex);
	bool isUnsigned(Expr *ex);
	void reportWarning();
    //-1 all possible unchecked up or low, 0 low unchecked, 1 up unchecked, checkOrUncheck by default is 0 means report unchecked array index
	void reportWarning(ArraySubscript as, int upOrLowBound, bool checkOrUncheck);
	void reportWarning(ArraySubscript as, bool checkOrUncheck);
	//void reportWarningSameID(vector<ArraySubscript> as);
	int writingToXML(bool isLoopBoundChecking, string fileName, string funName, string descr, string locLine,string checkerId, string indexCnt, string arrayExpr, bool checkOrUncheck=0);
	vector<ArraySubscript> getArraySubscriptInExpr(Expr * ex, ASTFunction* astF,CFGBlock* block,Stmt* stmt,CFG * myCFG);
	vector<ArraySubscript> getArraySubscript(ASTFunction* astF,CFG * myCFG);

	vector<ArraySubscript> getScript(ASTFunction* astF, CFGBlock* block,Stmt* stmt,vector<ArraySubscript> input,bool T);
	//perform backward analysis of block for each arrsub in list
	vector<ArraySubscript> flowThrough(ASTFunction* astF, CFGBlock* block,vector<ArraySubscript> list);
	void handleCallExprWithReturn(CallExpr* callexpr);
    bool updateAndSolveConstraints(ASTFunction* astF, ArraySubscript& input, Stmt* stmt, bool flag,CFGBlock* block);
    bool CheckConditionExpr(Expr* expr,string op,uint64_t cons);
	//check whether stmt satisfies the condition of arrsub, flag means the true or false branch of ?
	bool checkConditionStmt(ASTFunction* astF, Expr* stmt,ArraySubscript input,AtomicAPInt con,bool flag);//true : remove this cons
	//analysis stmt
	int throughStmt(ASTFunction* astF, Stmt* bo,ArraySubscript& con,CFGBlock* block);
    int handleAssignStmt(ASTFunction* astF, Expr* rhs, ArraySubscript& con, CFGBlock* block);
    bool checkIndexHasVar(ParmVarDecl* p, Stmt* idx);
    bool checkIndexHasVar(Expr* lhs, Expr* idx);
	//vector<ArraySubscript> checkConditionStmtUseZ3(Expr* stmt,vector<ArraySubscript> input,bool flag);
	//bool checkConditionStmtHasIdx(Expr* stmt,ArraySubscript input,AtomicAPInt con,bool flag);
	bool checkConditionStmtHasIdx(CFGBlock* block,Stmt* stmt,Expr* cond,ArraySubscript input,AtomicAPInt con,bool flag,bool checkTaint);
	bool checkConditionStmtUseZ3(ASTFunction* astF, Expr* stmt,ArraySubscript input,AtomicAPInt con,bool flag);
	std::string replace_all(string str, const string old_value, const string new_value);
	vector<ArraySubscript> ReplaceIdxLoopBound(ASTFunction* astF, CFGBlock* block,Stmt* cond,Expr* expr,ArraySubscript & input, int& AndOrFlag);
};
//template <typename T> std::string int2string(const T& i);
//string getInfo(Expr* expr);
//string getInfo(uint64_t expr);
//string getInfo(AtomicAPInt expr);
#endif
