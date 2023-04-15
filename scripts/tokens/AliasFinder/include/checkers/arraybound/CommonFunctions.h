#ifndef _CommonFunctions_H
#define _CommonFunctions_H
#include "checkers/arraybound/ArrayInformation.h"
#include "framework/BasicChecker.h"
#include "P2A/PointToAnalysis.h"
using namespace std;


class FindUnconstant : public RecursiveASTVisitor<FindUnconstant> {
private:
	std::unordered_set<const Expr*> unconstants;
public:
    bool VisitExpr(const Expr *expr) {
        if (expr) {
            if (dyn_cast<IntegerLiteral>(expr)){
				return true;;
			}
			if(dyn_cast<DeclRefExpr>(expr)){
				unconstants.insert(expr);
				return true;
			}
			if (dyn_cast<CallExpr>(expr)){
				unconstants.insert(expr);
				return true;				
			}
			if (dyn_cast<CXXMemberCallExpr>(expr)){
				unconstants.insert(expr);
				return true;				
			}	
			if (dyn_cast<ArraySubscriptExpr>(expr)){
				unconstants.insert(expr);
				return true;				
			}	
			if (dyn_cast<MemberExpr>(expr)){
				unconstants.insert(expr);
				return true;				
			}								
        }
        return true;
    }	
    bool isAllConstant() {
		return unconstants.empty();
    }
};



void dump(std::string s);
//std::string printStmt(Stmt* stmt);
string getInfoExpr(Expr* expr);
std::string print(const std::vector<uint64_t>& v);
bool equal(AtomicAPInt& l,AtomicAPInt& r);
bool equal(vector<AtomicAPInt>& l,vector<AtomicAPInt>& r);
bool equal(ArraySubscript& l,ArraySubscript& r);
// void pushAToB(vector<std::vector<std::string>> &A,vector<std::vector<std::string>> &B);
void pushAToB(vector<ArraySubscript>& A,vector<ArraySubscript> &B);
// void pushAToB(vector<std::pair<const DeclRefExpr*,CFGBlock*>,z3::expr>& A,vector<std::pair<const DeclRefExpr*,CFGBlock*>,z3::expr> &B);
template <typename T1,typename T2> void pushAToB(T1 &A,T2 &B);
ArraySubscript merge(ArraySubscript& l, ArraySubscript& r,bool SolvePathConstraint, bool bothOrEither);
vector<Expr*> Intersection(vector<Expr*>& l,vector<Expr*>& s);
vector<Expr*> Union(vector<Expr*>& l,vector<Expr*>& s);
vector<ArraySubscript> Union(vector<ArraySubscript>& l,vector<ArraySubscript>& s);
vector<ArraySubscript> Intersection(vector<ArraySubscript>& l,vector<ArraySubscript>& s);
bool isEqual(vector<Expr*>& l,vector<Expr*>& r);
void analyseIndex(Expr* index,vector<PNode>& list);
void analyseStmt(Expr* g,Expr* l,vector<PNode>& list);
bool isNum(string s);
double str2num(string s);
bool checkComposedExpr(BinaryOperator* it,vector<PNode>& list,ArraySubscript input,AtomicAPInt con,bool flag);
map<bool, int> calculateExpr(Expr* e);
bool isEuql(vector<ArraySubscript>& l,vector<ArraySubscript>& r);
bool isEqual( vector<pair<CFGBlock*,vector<Expr*> > >& l, vector<pair<CFGBlock*,vector<Expr*> > >& r);
//template <typename T> 
//std::string int2string(const T& i);
string getInfo(const Expr* expr);
string getInfo(const VarDecl* expr);
string getInfo(uint64_t expr);
string getInfo(AtomicAPInt expr);
const vector<std::pair<vector<uint64_t>,z3::expr>> getArraySize(ASTFunction* astF, CFGBlock* block, const Expr* ex,ASTManager* manager, CallGraph* call_graph, PointToAnalysis* PTA, Config* configure, int depth,ClangZ3Translator* translator);
const vector<std::pair<vector<uint64_t>,z3::expr>> getArraySize(ASTFunction* astF, unsigned paramIdx, ASTManager* manager, CallGraph* call_graph, PointToAnalysis* PTA, Config* configure, int depth,ClangZ3Translator* translator);
vector<std::tuple<const DeclRefExpr*,CFGBlock*,z3::expr>> getAlias(ASTFunction* astF, CFGBlock* block, VarDecl* ex, ASTManager* manager, CallGraph* call_graph, PointToAnalysis* PTA, Config* configure, int depth, std::unordered_set<CFGBlock*>& handledblock,ClangZ3Translator* translator);
//const vector<uint64_t> getArraySize(ASTFunction* astF, BasicBlock* block, Stmt* stmt, ValueDecl* valueDecl,ASTManager* manager, CallGraph* call_graph, PointToAnalysis* PTA, Config* configure, int depth);
//template <typename T> std::string int2string(const T& i);
/*template <typename T> std::string int2string(const T& i){
	std::ostringstream oss;
	oss<<i;
	return oss.str();
}*/
#endif
