#ifndef _Z3Coding_H
#define _Z3Coding_H
#include <vector>
#include "framework/BasicChecker.h"
#include "framework/Common.h"
#include <z3++.h>
//#include "ClangZ3Common.h"
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include "P2A/PointToAnalysis.h"
#include "clang/AST/Expr.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include <clang/Analysis/CFG.h>
#include "clang/AST/Expr.h"
#include <clang/AST/StmtVisitor.h>
//pragma comment(lib,"..\libz3.lib")
using namespace z3;
using namespace std;
using namespace clang;
using namespace llvm;

class FindReturnStmt : public StmtVisitor<FindReturnStmt>
{
private:
    std::vector<ReturnStmt *> retStmts;

public:
    void VisitChildren(Stmt *stmt)
    {
        for (Stmt *SubStmt : stmt->children())
        {
            if (SubStmt)
            {
                this->Visit(SubStmt);
            }
        }
    }
    void VisitStmt(Stmt *expr)
    {
        if (ReturnStmt *ret = dyn_cast<ReturnStmt>(expr))
        {
            retStmts.push_back(ret);
        }
        VisitChildren(expr);
    }
    std::vector<ReturnStmt *> &getReturnStmts()
    {
        return retStmts;
    }
};

class expr_hash {
    public:
        size_t operator()(const expr& e) const {
            std::hash<std::string> hs;
            std::string s=e.to_string();
            return atoi(s.c_str());
        }
};

class expr_equal {
    public:
        bool operator()(const expr& l, const expr& r) const {
            return l.to_string() == r.to_string();
        }
};

template <typename T> std::string int2string(const T& i){
    std::ostringstream oss;
    oss<<i;
    return oss.str();


}

class Z3Coding{
private:
    Config *configure;
    std::string TIMEOUT;
    context &c;
    z3::solver* globalSolver;
    //std::unordered_map<const clang::Stmt*, std::vector<expr>> clangExpr2Z3Expr;
    std::unordered_map<const clang::Stmt*, std::vector<expr>> clangExpr2Z3Expr;
    std::unordered_map<const clang::Stmt*, std::set<std::string>> stmt2z3name;
//    std::unordered_map<const clang::Stmt*, std::set<const ValueDecl*>> stmt2basicExprs;//save for z3 solve implies
    map<const ValueDecl*,expr> varDeclToZ3Expr;
	map<std::string,const ValueDecl*> Z3ExprNameToVarDecl;
	//the Decl of var is dofferent, it record the same name of var but different decl 
	map<std::string,int> varNameCount;

	map<const ValueDecl*,std::string> VarDeclToZ3Name;
	map<std::string,expr> z3NameToZ3Expr;
    //std::unordered_map<expr, bool, expr_hash, expr_equal> solveResult;
    //vector<z3::expr> extraConditions;

    

    ASTManager* manager;
    PointToAnalysis* PTA;
    CallGraph* call_graph;

public:
	expr _error;
	expr TRUE;
	expr FALSE;
    expr ZERO;
    expr ONE;
	func_decl _phi;
	func_decl LtDecl;
	func_decl LeDecl;
	func_decl GtDecl;
	func_decl GeDecl;
	func_decl EqDecl;
	Z3Coding(Config *configure,context& ctx,ASTManager* manager,PointToAnalysis* PTA, CallGraph* call_graph):configure(configure),c(ctx),manager(manager),PTA(PTA), call_graph(call_graph),_error(c),TRUE(c),FALSE(c),ZERO(c),ONE(c),_phi(c)
	,LtDecl(c),LeDecl(c),GtDecl(c),GeDecl(c),EqDecl(c)
	{
        globalSolver = new solver(c);
        _error=c.int_const("_error");
		TRUE=c.bool_val(true);
		FALSE=c.bool_val(false);
        ZERO=c.int_val(0);
        ONE=c.int_val(1);
		_phi=c.function("phi",c.int_sort(),c.bool_sort());
		expr i=c.int_const("i");
		expr le=i<=i;
		expr lt=i<i;
		expr ge=i>=i;
		expr gt=i>i;
		expr eq=i==i;
		LeDecl=le.decl();
		LtDecl=lt.decl();
		GtDecl=gt.decl();
		GeDecl=ge.decl();
		EqDecl=eq.decl();
		std::unordered_map<std::string, std::string> ptrConfig =
        configure->getOptionBlock("ArrayBound");
  		TIMEOUT = ptrConfig.find("Z3Timeout")->second;
        Z3_global_param_set("timeout",TIMEOUT.c_str());
	}
    ~ Z3Coding(){
        clear();
    }
    void clear();
	//bool imply(AtomicOperator ao,AtomicAPInt aa);
    void dump(expr e);
	void dump(vector<expr>& v);
	bool morePower_equal(expr e1,expr e2);
    bool isIntersected(const clang::Stmt* stmt1, const clang::Stmt* stmt2);
	int implySolve(expr e1,expr e2);
	bool implySimplify(expr e1,expr e2);
    int isPermanentSat(expr e);
	void pushAToB(vector<expr> &A,vector<expr> &B);
    void pushAToB(std::set<std::string>& A,std::set<std::string>& B);
    //void pushAToB(std::set<const ValueDecl*>& A,std::set<const ValueDecl*>& B);
    std::string toString(const clang::Stmt* clangStmt);
	std::string toString(const QualType qt);
	vector<expr> clangBinaryOperatorToZ3Expr(clang::BinaryOperator* binaryOperator, ASTFunction* astF);
	z3::sort clangTypeToZ3Sort(QualType qt);
    std::tuple<std::string,expr,expr> clangValueDeclToZ3Expr(const clang::ValueDecl* valueDecl, ASTFunction* astF);
	vector<expr> clangArraySubscriptExprToZ3Expr(clang::ArraySubscriptExpr* arraySubscriptExpr, ASTFunction* astF);
	expr  clangCharacterLiteralToZ3Expr(clang::CharacterLiteral* charLiteral);
	expr  clangCXXBoolLiteralExprToZ3Expr(clang::CXXBoolLiteralExpr* boolLiteral);
	expr  clangIntegerLiteralToZ3Expr(clang::IntegerLiteral* integerLiteral);
	vector<expr> clangConditionalOperatorToZ3Expr(ConditionalOperator* co,  ASTFunction* astF);
    vector<expr>  clangUnaryOperatorToZ3Expr(clang::UnaryOperator* unaryOperator, ASTFunction* astF);
	//expr  clangFieldDeclToZ3Expr(clang::FieldDecl * fieldDecl);
	std::string clangArraySubscriptToZ3Name(clang::ArraySubscriptExpr* ase, ASTFunction* astF);
    std::string clangMemberExprToZ3Name(const clang::MemberExpr* memberExpr, ASTFunction* astF);
    expr clangMemberExprToZ3Expr(const clang::MemberExpr* memberExpr, ASTFunction* astF, bool incFlag=false);
	vector<expr>  clangExprToZ3Expr(const clang::Stmt* clangexpr,ASTFunction* astF, bool incFlag=false);
    vector<expr> clangCallExprToZ3Expr(const clang::CallExpr* call, ASTFunction* astF);
    std::pair<z3::expr,z3::expr> handleexprVector(vector<expr>& exprs);
    expr Vector2IteExpr(vector<std::pair<expr,expr>>& v,int i);
    //    std::pair<expr,vector<std::pair<expr,expr>>> clangCallExprToZ3Expr(const clang::CallExpr* call, ASTFunction* astF);
    z3::expr clangOp2Z3Op(z3::expr e1, z3::expr e2, clang::BinaryOperatorKind op);
    expr z3IntExprToZ3ArrayExpr(expr iexpr);
    expr Int2Z3Expr(uint64_t i, uint64_t size=0);
    uint64_t getTypeSizeInBits(QualType qt);
    expr createExpr(std::string name, QualType qt, const ValueDecl* vd);
    z3::expr createExpr(std::string name);
    std::vector<z3::expr> updateParameterRealArgument4StructElement(expr parm, expr real);
    friend class ArraySubscript;
    friend class ArrayBoundChecker;
};
#endif
