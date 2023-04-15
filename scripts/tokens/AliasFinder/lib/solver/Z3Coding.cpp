#include "solver/Z3Coding.h"

using namespace common;
/*
template <typename T> std::string int2string(const T& i){
    std::ostringstream oss;
    oss<<i;
    return oss.str();

}
*/

// std::string print(const Stmt* stmt)
// {
//     LangOptions L0;
//     L0.CPlusPlus=1;
//     std::string buffer1;
//     llvm::raw_string_ostream strout1(buffer1);
//     stmt->printPretty(strout1,nullptr,PrintingPolicy(L0));
//     return ""+strout1.str()+"";

// }

// std::string print(Stmt* stmt)
// {
//     LangOptions L0;
//     L0.CPlusPlus=1;
//     std::string buffer1;
//     llvm::raw_string_ostream strout1(buffer1);
//     stmt->printPretty(strout1,nullptr,PrintingPolicy(L0));
//     return ""+strout1.str()+"";

// }

//bool Z3Coding::imply(AtomicOperator ao,AtomicAPInt aa){
//	clang::Expr* aolhs=ao.getLHS();
//	/*if(BinaryOperator * it=dyn_cast<BinaryOperator>(aolhs)){
//	}*/
//}
void Z3Coding::dump(expr e){
    cout<<e<<endl;
}

void Z3Coding::dump(vector<expr>& v){
	cout<<"vector expr:"<<endl;
	for(auto c:v){
		cout<<c<<endl;
	}
}
bool Z3Coding::morePower_equal(expr e1, expr e2){
	tactic qe(c, "ctx-solver-simplify");
	goal g(c);
	g.add(e1==e2);
	//expr res(c);
	apply_result result_of_elimination = qe.apply(g);
	goal result_goal = result_of_elimination[0];
	expr result=result_goal.as_expr();
	//cout<<"morePower_equal simplify:"<<result<<endl;
	if(eq(result,c.bool_val(true))){
		return true;
	}
	return false;
}

bool Z3Coding::isIntersected(const clang::Stmt* stmt1, const clang::Stmt* stmt2){
    auto find1 = stmt2z3name.find(stmt1);
    auto find2 = stmt2z3name.find(stmt2);
    if (find1 == stmt2z3name.end() || find2 == stmt2z3name.end()){
        return false;
    }
    std::set<std::string> same;
    auto sameitr = same.begin(); 
    std::set_intersection(find1->second.begin(),find1->second.end(),find2->second.begin(),find2->second.end(),std::inserter(same,sameitr));
    if (same.size()==0){
        return false;
    }
    else {
        return true;
    }
}

//E is valid means for all assignment to the var of E, E is true;
//Then !E will be all false, which means !E is unsat
//we want to check whether e1->e2 is valid, becoming to check whether !(e1->e2) is unsat
//e1->e2 can be replaced with !e1||e2
//check !(!e1||e2), namely e1&&!e2
int Z3Coding::implySolve(expr e1,expr e2){
/*    if (!e1.is_bool() || !e2.is_bool()){
        assert(0);
    }*/
    if (!e1.is_bool()) {
        return false;
    }
     
    z3::solver s(c);
  //  params p(c);
//    p.set(":timeout",100u);
   // s.set(p);
    // = z3::tactic(c, "smt").mk_solver();
    //rm extraConditions
    //for (auto& extra: extraConditions){
    //     e1 = e1 && extra;
    // }
    expr tmp = implies(e1,e2);
    // auto findr = solveResult.find(tmp);
    // if (findr != solveResult.end()) {
    //     return findr->second;
    // }     
        //(e1 && !e2);
    s.add(!tmp);
//    Z3_global_param_set("timeout",100u);
    //enum check_result:sat,unsat,unknown
    check_result r = s.check();
    if (r == z3::unsat){
        expr_vector core = s.unsat_core();
        common::printLog("Solve result: "+e1.to_string()+" implies "+e2.to_string()+"\n",common::CheckerName::arrayBound,3,*configure);    
        //common::printLog("Proof, !(e1->e2) is unsat  (means e1->e2 is sat), unsat core: "+core.to_string()+"\n",common::CheckerName::arrayBound,2,*configure);            
        //solveResult.insert(std::make_pair(tmp,true));
        return 1;
    }
    else if (r == z3::sat) {
        //!(e1->e2) is sat (means e1->e2 is unsat)
        model m = s.get_model();
        common::printLog("Solve result: "+e1.to_string()+" not implies "+e2.to_string()+"\n",common::CheckerName::arrayBound,3,*configure);    
        common::printLog("Proof, unsat counter example: "+m.to_string()+"\n",common::CheckerName::arrayBound,2,*configure);    
        //solveResult.insert(std::make_pair(tmp,false));
        return 0;
    }
    else {
        common::printLog("Solving timeout "+e1.to_string()+" implies "+e2.to_string()+", result is unknown\n",common::CheckerName::arrayBound,4,*configure);
        //solveResult.insert(std::make_pair(tmp,false));
        return -1;//TODO handle unknown
    }
}
/*
bool Z3Coding::implySolveOutputWithValue(expr e1,expr e2){
    if (!e1.is_bool()) {
        return false;
    }
    z3::solver s(c);
  //  params p(c);
//    p.set(":timeout",100u);
   // s.set(p);
    // = z3::tactic(c, "smt").mk_solver();
    for (auto& extra: extraConditions){
        s.add(extra);
    }
    expr tmp = implies(e1,e2);
        //(e1 && !e2);
    s.add(!tmp);
//    Z3_global_param_set("timeout",100u);
    //enum check_result:sat,unsat,unknown
    check_result r = s.check();
    if (r == z3::unsat){
        return true;
    }
    else {
        return false;//TODO handle unknown
    }
}*/

bool Z3Coding::implySimplify(expr e1,expr e2){
	//e1->e2,e1 implies e2
    if (!e1.is_bool()){
        return false;
    }
    tactic qe(c, "ctx-solver-simplify");
	goal g(c);
	g.add(!e1 || e2);
	apply_result result_of_elimination = qe.apply(g);
	goal result_goal = result_of_elimination[0];
	expr result=result_goal.as_expr();
	if(eq(result,c.bool_val(true))){
		return true;
	}
	return false;
}

//if !e  unsat , then e permanent sat
int Z3Coding::isPermanentSat(expr e){
    if (!e.is_bool()) {
        return false;
    }
    // auto findr = solveResult.find(e);
    // if (findr != solveResult.end()) {
    //     return findr->second;
    // }   
    z3::solver s(c);
  //  params p(c);
//    p.set(":timeout",100u);
   // s.set(p);
    // = z3::tactic(c, "smt").mk_solver();
    //rm extraConditions
    // for (auto& extra: extraConditions){
    //     common::printLog("extraConditions collected: "+extra.to_string()+"\n",common::CheckerName::arrayBound,0,*configure);
    //     s.add(extra);
    // }
    // check_result r0 = s.check();
    // if (r0 == z3::unsat){
    //     return false;
    // }    
    s.add(!e);
    //Z3_global_param_set("timeout",TIMEOUT);
    //enum check_result:sat,unsat,unknown
    check_result r = s.check();
    if (r == z3::unsat){
        //solveResult.insert(std::make_pair(e,true));
        return 1;
    }
    else if (r == z3::sat){
        //solveResult.insert(std::make_pair(e,false));
        return 0;//TODO handle unknown
    }
    else {
        //unknown
        common::printLog("Solving timeout "+e.to_string()+" in isPermanentSat, result is unknown\n",common::CheckerName::arrayBound,4,*configure);
        //solveResult.insert(std::make_pair(e,false));
       return -1;
    }
}

void Z3Coding::pushAToB(vector<expr> &A,vector<expr> &B){
	for(auto it=A.begin();it != A.end(); it++){
		expr t=*it;
		B.push_back(t);
	}
}

void Z3Coding::pushAToB(std::set<std::string>& A, std::set<std::string>& B){
//void Z3Coding::pushAToB(std::set<const ValueDecl*>& A, std::set<const ValueDecl*>& B){
    for (auto e: A){
        B.insert(e);
    }
}

std::string Z3Coding::toString(const clang::Stmt* clangStmt){
	LangOptions LO;
	LO.CPlusPlus=1; 
	std::string buffer;
	llvm::raw_string_ostream strout(buffer);
	clangStmt->printPretty(strout, nullptr, PrintingPolicy(LO));
	return strout.str();
}
std::string Z3Coding::toString(const QualType qt){
	LangOptions LO;
	LO.CPlusPlus=1; 
	std::string buffer;
	llvm::raw_string_ostream strout(buffer);
	qt.print(strout,PrintingPolicy(LO));
	return strout.str();
}
vector<expr> Z3Coding::clangBinaryOperatorToZ3Expr(clang::BinaryOperator* binaryOperator, ASTFunction* astF){
	vector<expr> lhss=clangExprToZ3Expr(binaryOperator->getLHS(), astF);
	vector<expr> rhss=clangExprToZ3Expr(binaryOperator->getRHS(), astF);
    pushAToB(stmt2z3name[binaryOperator->getLHS()],stmt2z3name[binaryOperator]);
    pushAToB(stmt2z3name[binaryOperator->getRHS()],stmt2z3name[binaryOperator]);
    
    vector<expr> exprs;
    if (lhss.empty() || rhss.empty()) return exprs;
    bool isSigned = false;//TODO handle this!!

    std::pair<z3::expr,z3::expr> lpair = handleexprVector(lhss);
    std::pair<z3::expr,z3::expr> rpair = handleexprVector(rhss);
    exprs.push_back(lpair.second);
    exprs.push_back(rpair.second);
	expr tmp(c);
	switch(binaryOperator->getOpcode()){
		default:	
            common::printLog("Z3Coding:clangBinaryOperatorToZ3Expr: We do not consider processing binaryOperator: "+std::string(binaryOperator->getOpcodeStr().data())+"\n",common::CheckerName::arrayBound,0,*configure);//Shl<<,Shr>>,PtrMemD .*, PtrMemI ->*,Cmp, Comma
            exprs.clear();
            return exprs;
            //break;
		case BO_Mul 	://*
		{
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();                
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
                else {
                    expr l = lhs;
                    expr r = rhs;
                    if (l.is_bool()){
                        l = ite(l,c.int_val(1),c.int_val(0));
                    }       
                    if (r.is_bool()) {
                        r = ite(r,c.int_val(1),c.int_val(0));
                    }
                    if (l.get_sort().sort_kind() != r.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    exprs.push_back(l*r);
                }
            }
            break;
        }
		case BO_Div 	:
		{
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();                
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
                else {
                    expr l = lhs;
                    expr r = rhs;
                    if (l.is_bool()){
                        l = ite(l,c.int_val(1),c.int_val(0));
                    }       
                    if (r.is_bool()) {
                        r = ite(r,c.int_val(1),c.int_val(0));
                    }
                    if (l.get_sort().sort_kind() != r.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    exprs.push_back(l/r);
                }
            }
			break;
        }
		case BO_Rem	:
		{
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
                else {
                    if (lhs.get_sort().sort_kind() != rhs.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    exprs.push_back(to_expr(c,Z3_mk_mod(c,lhs,rhs)));
                }
            }
			break;
        }
		case BO_Add 	:
   		{
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();   
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
                else {
                    expr l = lhs;
                    expr r = rhs;
                    if (l.is_bool()){
                        l = ite(l,c.int_val(1),c.int_val(0));
                    }       
                    if (r.is_bool()) {
                        r = ite(r,c.int_val(1),c.int_val(0));
                    }
                    if (l.get_sort().sort_kind() != r.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    exprs.push_back(l+r);
                }
            }
			break;
        }
//			exprs.push_back(to_expr(c,Z3_mk_bvadd_no_overflow(c,lhs,rhs,isSigned)));
		case BO_Sub 	:
   		{
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();  
                if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs=nullptr;
                }
                else{
                    expr l = lhs;
                    expr r = rhs;
                    if (l.is_bool()){
                        l = ite(l,c.int_val(1),c.int_val(0));
                    }       
                    if (r.is_bool()) {
                        r = ite(r,c.int_val(1),c.int_val(0));
                    }
                    if (l.get_sort().sort_kind() != r.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    exprs.push_back(l-r);

                }
            }
			break;
        }
		case BO_LT 	:
   		{
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
                else {
                    if (lhs.get_sort().sort_kind() != rhs.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    exprs.push_back(lhs<rhs);
                }
            }
			break;
        }
                   //            exprs.push_back(to_expr(c,Z3_mk_bvult(c,lhs,rhs)));
//			exprs.push_back(to_expr(c,Z3_mk_bvult_no_overflow(c,lhs,rhs,false)));
		case BO_GT 	:
   		{
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
                else {
                    if (lhs.get_sort().sort_kind() != rhs.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    exprs.push_back(lhs>rhs);
                }
            }
			break;
        }            
		case BO_LE 	:
   		{
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
                else {
                    if (lhs.get_sort().sort_kind() != rhs.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                
                    exprs.push_back(lhs<=rhs);
                }
            }
			break;
        }                        
		case BO_GE 	:
        {
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
                else {
                    if (lhs.get_sort().sort_kind() != rhs.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    exprs.push_back(lhs>=rhs);
                }
            }
            break;
        }   
        case BO_EQ 	:
        {
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();
                //I believe lhs is array means it is a pointer type, this might check p==nullptr
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
                else{
                    if (lhs.get_sort().sort_kind() != rhs.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    exprs.push_back(lhs==rhs);
                }
            }
            break;
        }
		case BO_NE 	:
        {
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();
                //I believe lhs is array means it is a pointer type, this might check p==nullptr
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
               else {
                    if (lhs.get_sort().sort_kind() != rhs.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }
                   exprs.push_back(lhs!=rhs);
               }
            }
            break;
        }   
		case BO_And 	:
            {//&
                {
                    expr lhs=lhss.back();
                    expr rhs=rhss.back();
                    expr l = lhs;
                    expr r = rhs;
                    if (lhs.is_array()||rhs.is_array()){
                            //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                            exprs.clear();
                            return exprs;
                        }
                    else {
                        if (l.is_bool()){
                            l = ite(l,c.int_val(1),c.int_val(0));
                        }
                        if (l.is_int()){
                            l = z3::expr(c, Z3_mk_int2bv(c, 32, l));
                        }
                        if (r.is_bool()){
                            r = ite(r,c.int_val(1),c.int_val(0));
                        }                        
                        if (r.is_int()){
                            r =z3::expr(c,Z3_mk_int2bv(c,32,r));
                        }
                    if (l.get_sort().sort_kind() != r.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                        
                        expr re = l&r;
                        expr rrr = z3::expr(c,Z3_mk_bv2int(c,re,isSigned));
                        if (lhs.is_bool()) {
                            rrr = (rrr!=c.int_val(0));
                        }                          
                        exprs.push_back(rrr);
                    }
                }
                break;
            }
		case BO_Or 	:
            {
                //|
               {
                    expr lhs=lhss.back();
                    expr rhs=rhss.back();
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
                    else {
                        expr l = lhs;
                        if (lhs.is_int()){
                            l = z3::expr(c, Z3_mk_int2bv(c, 32, lhs));
                        }
                        expr r = rhs;
                        if (rhs.is_int()){
                            r =z3::expr(c,Z3_mk_int2bv(c,32,rhs));
                        }
                     if (l.get_sort().sort_kind() != r.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                       
                        expr re = l|r;
                        expr rrr = z3::expr(c,Z3_mk_bv2int(c,re,isSigned));
                        exprs.push_back(rrr);
                    }
                }
                break;
            }	
           // exprs.push_back(lhs|rhs);
		case BO_LAnd 	:
            {	//&&
                {
                    expr lhs=lhss.back();
                    expr rhs=rhss.back();
                    expr l=lhs;
                    expr r= rhs;
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//todo ??r u sure
                    exprs.clear();
                    return exprs;
                }
                    else if(lhs.is_array()){
                        if (rhs.is_int()){
                            r = (rhs!=c.int_val(0));
                        }
                        exprs.push_back(r);
                    }
                    else if (rhs.is_array()){
                        if (lhs.is_int()){
                            l=(lhs!=c.int_val(0));
                        }
                        exprs.push_back(l);
                    }
                    else {
                        if (lhs.is_int()){
                            l = (lhs!=c.int_val(0));
                        }
                        if (rhs.is_int()){
                            r = (rhs!=c.int_val(0));
                        }
                    if (l.get_sort().sort_kind() != r.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                        
                        exprs.push_back(l&&r);
                    }
                }
                break;
            }
        case BO_LOr 	:
            {	//||
                {
                    expr lhs=lhss.back();
                    expr rhs=rhss.back();
                    expr l=lhs;
                    expr r= rhs;
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//todo ??r u sure
                    exprs.clear();
                    return exprs;
                }
                    else if(lhs.is_array()){
                        if (rhs.is_int()){
                            r = (rhs!=c.int_val(0));
                        }
                        exprs.push_back(r);
                    }
                    else if (rhs.is_array()){
                        if (lhs.is_int()){
                            l=(lhs!=c.int_val(0));
                        }
                        exprs.push_back(l);
                    }
                    else {
                        if (lhs.is_int()){
                            l = (lhs!=c.int_val(0));
                        }
                        if (rhs.is_int()){
                            r = (rhs!=c.int_val(0));
                        }
                     if (l.get_sort().sort_kind() != r.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                       
                        exprs.push_back(l||r);
                    }       
                }
                break;
            }
		case BO_Assign 	:
        {
            //e=xx
            //vector<expr> lhss=clangExprToZ3Expr(binaryOperator->getLHS(), astF,true);
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();
                //I believe lhs is array means it is a pointer type, this might check p==nullptr
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
                else {
                    if (lhs.is_bool()){
                        lhs = ite(lhs,c.int_val(1),c.int_val(0));
                    }       
                    if (rhs.is_bool()) {
                        rhs = ite(rhs,c.int_val(1),c.int_val(0));
                    }
                     if (lhs.get_sort().sort_kind() != rhs.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                   
                    exprs.push_back(lhs==rhs);
                    exprs.push_back(lhs);
                }
            }
            break;
        }
        case BO_MulAssign 	:
		{
            //e*=xx ->  e == e0 * xx
            vector<expr> lhss0=clangExprToZ3Expr(binaryOperator->getLHS(), astF, true);
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();
                //I believe lhs is array means it is a pointer type, this might check p==nullptr
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
                else {
                    if (lhs.is_bool()){
                        lhs = ite(lhs,c.int_val(1),c.int_val(0));
                    }       
                    if (rhs.is_bool()) {
                        rhs = ite(rhs,c.int_val(1),c.int_val(0));
                    }
                    if (lhss0.back().get_sort().sort_kind() != rhs.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    tmp=lhss0.back()*rhs;
                    if (lhs.get_sort().sort_kind() != tmp.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    exprs.push_back(lhs==tmp);
                    exprs.push_back(lhs);
                }
            }
            break;
        }
        case BO_DivAssign 	:
		{
            //e*=xx ->  e == e0 * xx
            vector<expr> lhss0=clangExprToZ3Expr(binaryOperator->getLHS(), astF, true);
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();
                //I believe lhs is array means it is a pointer type, this might check p==nullptr
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
                else { 
                     if (lhss0.back().get_sort().sort_kind() != rhs.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                   
                    tmp=lhss0.back()/rhs;
                     if (lhs.get_sort().sort_kind() != tmp.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                   
                    exprs.push_back(lhs==tmp);
                    exprs.push_back(lhs);
                }
            }
            break;
        }
        case BO_RemAssign		:
		{
            vector<expr> lhss0=clangExprToZ3Expr(binaryOperator->getLHS(), astF, true);
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();
                //I believe lhs is array means it is a pointer type, this might check p==nullptr
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
                else {
                    if (lhss0.back().get_sort().sort_kind() != rhs.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    tmp=to_expr(c,Z3_mk_mod(c,lhss0.back(),rhs));
                    if (lhs.get_sort().sort_kind() != tmp.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    exprs.push_back(lhs==tmp);
                    exprs.push_back(lhs);
                }       
            }
            break;
        }
        case BO_AddAssign 	:
        {
            vector<expr> lhss0=clangExprToZ3Expr(binaryOperator->getLHS(), astF, true);
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();
                //I believe lhs is array means it is a pointer type, this might check p==nullptr
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
                else {
                    expr l = lhs;
                    expr r = rhs;
                    if (l.is_bool()){
                        l = ite(l,c.int_val(1),c.int_val(0));
                    }       
                    if (r.is_bool()) {
                        r = ite(r,c.int_val(1),c.int_val(0));
                    }
                    if (lhss0.back().get_sort().sort_kind() != r.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    tmp=lhss0.back()+r;
                    if (l.get_sort().sort_kind() != tmp.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    exprs.push_back(l==tmp);
                    exprs.push_back(lhs);
                }
            }
            break;
        }
        case BO_SubAssign 	:
        {
            vector<expr> lhss0=clangExprToZ3Expr(binaryOperator->getLHS(), astF, true);
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();
                //I believe lhs is array means it is a pointer type, this might check p==nullptr
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
                else {
                    expr l = lhs;
                    expr r = rhs;
                    if (l.is_bool()){
                        l = ite(l,c.int_val(1),c.int_val(0));
                    }       
                    if (r.is_bool()) {
                        r = ite(r,c.int_val(1),c.int_val(0));
                    }
                    if (lhss0.back().get_sort().sort_kind() != r.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    tmp=lhss0.back()-r;
                    if (l.get_sort().sort_kind() != tmp.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    exprs.push_back(l==tmp);
                    exprs.push_back(lhs);
                }
            }
            break;
        }
        case BO_AndAssign 	:
		{
            vector<expr> lhss0=clangExprToZ3Expr(binaryOperator->getLHS(), astF, true);
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();
                //I believe lhs is array means it is a pointer type, this might check p==nullptr
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
                else {
                    expr l=lhs;
                    expr r=rhs;
                    if (lhs.is_int() || lhs.is_bool()){
                        l = z3::expr(c, Z3_mk_int2bv(c, 32, lhs));
                    }
                    if (rhs.is_int() || rhs.is_bool()){
                        r =z3::expr(c,Z3_mk_int2bv(c,32,rhs));
                    }
                    if (l.get_sort().sort_kind() != r.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    expr re = l&r;
                    expr rrr = z3::expr(c,Z3_mk_bv2int(c,re,isSigned));  
                    if (lhs.is_bool()) {
                        rrr = (rrr!=c.int_val(0));
                    }                 
                    //tmp=lhss0.back()&rhs;
                    if (lhs.get_sort().sort_kind() != rrr.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    exprs.push_back(lhs==rrr);
                    exprs.push_back(lhs);           
                } 
            }
            break;
        }
		case BO_OrAssign 	:
		{//lhs=lhs0|rhs
            vector<expr> lhss0=clangExprToZ3Expr(binaryOperator->getLHS(), astF, true);
             {
                expr lhs=lhss.back();
                expr rhs=rhss.back();
                //I believe lhs is array means it is a pointer type, this might check p==nullptr
               if (lhs.is_array()||rhs.is_array()){
                    //delete exprs;                    exprs = nullptr;//TODO ??R U Sure
                    exprs.clear();
                    return exprs;
                }
                else {
                    expr lhs0 = lhss0.back();
                    if (lhs0.get_sort().sort_kind() != rhs.get_sort().sort_kind()) 
                        break;
                    if (lhs0.is_bool()) {
                        lhs0 = ite(lhs0,c.int_val(1),c.int_val(0));
                    }
                    if (rhs.is_bool()) {
                        rhs = ite(rhs,c.int_val(1),c.int_val(0));
                    }   
                    if (lhs0.is_int()){
                        lhs0 =z3::expr(c,Z3_mk_int2bv(c,32,lhs0));
                    }                                    
                    if (rhs.is_int()){
                        rhs = z3::expr(c,Z3_mk_int2bv(c,32,rhs));
                    }
                    if (lhs0.get_sort().sort_kind() != rhs.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                    
                    tmp=lhs0|rhs;
                    tmp = z3::expr(c,Z3_mk_bv2int(c,tmp,isSigned));
                    if (tmp.is_bool())
                        tmp = ite(tmp,c.int_val(1),c.int_val(0));
                    if (lhs.get_sort().sort_kind() != tmp.get_sort().sort_kind()) {
                        exprs.clear();
                        return exprs;
                    }                        
                    exprs.push_back(lhs==tmp);
                    exprs.push_back(lhs);
                }
            }
            break;
        }			
    }
	return exprs;
}
z3::sort Z3Coding::clangTypeToZ3Sort(QualType qt){
	QualType canonicalType=qt.getTypePtr()->getCanonicalTypeInternal();
	//std::cout<<" Type is: "<<toString(qt)<<std::endl;
	//std::cout<<" CanonicalType is: "<<toString(canonicalType)<<std::endl;
    if(canonicalType.getTypePtr()->isBooleanType()){
        return c.bool_sort();
    }
    else if(canonicalType.getTypePtr()->isIntegerType()){
        return c.int_sort();
    }
	else if(canonicalType.getTypePtr()->isArrayType()){
		const clang::ArrayType * arraytype=(const clang::ArrayType *)canonicalType.getTypePtr();
		z3::sort elementSort=clangTypeToZ3Sort(arraytype->getElementType());
		return c.array_sort(c.int_sort(),elementSort);
	}
	else if(canonicalType.getTypePtr()->isPointerType()){
		//we regard pointer type as array
		const clang::PointerType * pt =(const clang::PointerType *)canonicalType.getTypePtr();
		z3::sort pointeeSort=clangTypeToZ3Sort(pt->getPointeeType());
		return c.array_sort(c.int_sort(),pointeeSort);
	}
	else if(canonicalType.getTypePtr()->isRecordType()){
		//struct
		//cout<<"isRecordType"<<endl;
		return c.int_sort();
	}
	//else if(const clang::PointerType * pt=dyn_cast<clang::PointerType>(qt)){
	//	if(pt->isVoidPointerType()){
	//		cout<<"isVoidPointerType"<<endl;
	//	}
	//}
	else {
        common::printLog("Z3Coding:clangTypeToZ3Sort: We do not process type : "+toString(qt)+"\n",common::CheckerName::arrayBound,0,*configure);
		return c.int_sort();
	}
}

std::tuple<std::string,expr,expr> Z3Coding::clangValueDeclToZ3Expr(const clang::ValueDecl* valueDecl, ASTFunction* astF){
	//valueDecl->dump();
	LangOptions LO;
	LO.CPlusPlus=1; 
    expr initcondition = TRUE;
    std::string funcName = "";
    const FunctionDecl* fun = manager->getFunctionDecl(astF);
    if(fun!=nullptr) {
        funcName = fun->getNameInfo().getAsString();
    }  
	if (!valueDecl){
		//std::string buffer;
		//llvm::raw_string_ostream strout(buffer);
		//valueDecl->printPretty(strout, nullptr, PrintingPolicy(LO));
		//std::cerr<<"Z3Coding:clangDeclRefExprToZ3Expr: We do not process clangDeclRefExpr: "<<strout.str()<<std::endl;
		return std::make_tuple("",_error,initcondition);
	}
	std::string buffer;
	llvm::raw_string_ostream strout(buffer);
	valueDecl->printName(strout);
	std::string varName=strout.str();

	QualType declQT = valueDecl->getType();
    z3::sort ty=clangTypeToZ3Sort(declQT);
	std::string buffer2;
	llvm::raw_string_ostream strout2(buffer2);
	declQT.print(strout2,PrintingPolicy(LO));
    std::string typeName=strout2.str();
    expr initexpr(c);
    bool flaginit=false;
    //declQT.dump();
    //FindContainExpr visitor;
    //visitor.TraverseStmt((Stmt*)arraySubscriptExpr);     
    if (const VarDecl* var = dyn_cast<VarDecl>(valueDecl)){
        const Expr* assign = var->getInit();
        if (assign) {
            std::string assignstr = common::print(assign);
            if (assignstr.find(funcName) != std::string::npos) {
                //recursive call, break to avoid dead loop
                flaginit=false;
            }   
            // FindContainCallExpr visitor;
            // visitor.TraverseStmt((Stmt*)assign);     
            // if (visitor.isContainCallExpr()){
            //     flaginit=false;
            // }
            else {
                std::vector<expr> initexprs = clangExprToZ3Expr(assign,astF);
//                pushAToB(stmt2z3name[assign],stmt2z3name[clangexpr]);
                if (!initexprs.empty()){
                    std::pair<z3::expr,z3::expr> initpair = handleexprVector(initexprs);
                    initcondition = initpair.second;                   
                     common::printLog("Z3Coding:clangValueDeclToZ3Expr: value "+varName+" declared with initial assignment : "+common::print(assign)+"\n",common::CheckerName::arrayBound,3,*configure);		
                    flaginit = true;
                    initexpr = initexprs.back();
                    if (eq(initexpr, _error)) 
                        flaginit=false;
                    else if (initexpr.to_string()=="0")
                        flaginit=false;
                    else {
                        if (ty.is_int() && initexpr.is_bool())
                            initexpr = ite(initexpr,c.int_val(1),c.int_val(0));
                        if (ty.sort_kind() != initexpr.get_sort().sort_kind()) 
                            flaginit=false;
                    }
                    //expr texpr = valexpr==initexpr; 
                    //extraConditions.push_back(texpr);
                    //delete initexprs; initexprs=nullptr;
                }
            }
        }
    }


    //record the valueDecl
	if(varDeclToZ3Expr.count(valueDecl)>0){
		//alread exist
		//get varDecl's z3 name
		expr z3expr=varDeclToZ3Expr.at(valueDecl);
//        stmt2basicExprs[valueDecl].insert(z3expr);
	    auto findname = VarDeclToZ3Name.find(valueDecl);
        std::string Z3Name =""; 
        if (findname != VarDeclToZ3Name.end()){
            Z3Name = VarDeclToZ3Name.at(valueDecl);
        }
        else{
            assert(0);
        }
        if (flaginit) initcondition = initcondition &&(z3expr==initexpr);
            //rm extraConditions.push_back(z3expr==initexpr);
        return std::make_tuple(Z3Name,z3expr,initcondition);
	}
	else{
        bool isUnsigned = false;
        if(const BuiltinType *bt = dyn_cast<BuiltinType>(declQT)){
            if(bt->isUnsignedInteger()){
                isUnsigned = true;
            }                          
        }
        if(const TypedefType *tt = dyn_cast<TypedefType>(declQT)){
            const QualType t=tt->desugar();
            const QualType c = t.getCanonicalType();
            if(const BuiltinType *bt = dyn_cast<BuiltinType>(c)){
                if(bt->isUnsignedInteger()){
                    isUnsigned = true;
                }
            }
        }
                //handle EnumConstantDecl
        if (const EnumConstantDecl* enumc = dyn_cast<EnumConstantDecl>(valueDecl)){
            const llvm::APSInt apint = enumc->getInitVal();
            int64_t val = apint.getZExtValue();
            expr z3expr = c.int_val(val);
        //    varDeclToZ3Expr.insert(std::make_pair(valueDecl,z3expr));
            if (flaginit) initcondition = initcondition&&(z3expr==initexpr);
                //rm extraConditions.push_back(z3expr==initexpr);
            return std::make_tuple("",z3expr,initcondition);
        }
		//not exists
		//set the z3Name
		//if varName exists? getThe count
		if(varNameCount.count(varName)<=0){
			std::string z3Name=varName;
			z3::sort ty=clangTypeToZ3Sort(declQT);
			expr z3expr=c.constant(z3Name.c_str(),ty);
   //         expr bvexpr = createExpr(z3Name,declQT,valueDecl);
			varDeclToZ3Expr.insert(std::pair<const ValueDecl *,z3::expr>(valueDecl,z3expr));
			Z3ExprNameToVarDecl[z3Name]=valueDecl;
			varNameCount[varName]=1;
			VarDeclToZ3Name[valueDecl]=z3Name;
  //          stmt2basicExprs[valueDecl].insert(z3expr);
            if (isUnsigned && z3expr.is_int()) {
                initcondition = initcondition&&(z3expr>=0);
                //rm extraConditions.push_back(z3expr>=0); 
            }
                
            if (flaginit)
                initcondition = initcondition && (z3expr==initexpr);
                //rm extraConditions.push_back(z3expr==initexpr);
            return std::make_tuple(z3Name,z3expr,initcondition);
		}
		else{
			int count=varNameCount.at(varName);
			std::string z3Name=varName+std::to_string(count+1);

			expr z3expr=c.constant(z3Name.c_str(),ty);
            //expr z3expr = createExpr(z3Name,declQT,valueDecl);
            varDeclToZ3Expr.insert(std::pair<const ValueDecl *,z3::expr>(valueDecl,z3expr));
			Z3ExprNameToVarDecl[z3Name]=valueDecl;
			varNameCount[varName]=count+1;
			VarDeclToZ3Name[valueDecl]=z3Name;
    //        stmt2basicExprs[valueDecl].insert(z3expr);
            if (isUnsigned && z3expr.is_int())
                initcondition = initcondition&&(z3expr>=0);
               //rm extraConditions.push_back(z3expr>=0);
            if (flaginit)
                initcondition = initcondition && (z3expr==initexpr);
                //rm extraConditions.push_back(z3expr==initexpr);
            return std::make_tuple(z3Name,z3expr,initcondition);
		}
	}
	return std::make_tuple("",_error,initcondition);
}

vector<expr> Z3Coding::clangArraySubscriptExprToZ3Expr(clang::ArraySubscriptExpr* arraySubscriptExpr, ASTFunction* astF){
	vector<expr> exprs;
	const clang::Expr* base=arraySubscriptExpr->getBase();
	const clang::Expr* idx=arraySubscriptExpr->getIdx();			
	vector<expr> baseZ3Exprs=clangExprToZ3Expr(base, astF);
	vector<expr> idxZ3Exprs=clangExprToZ3Expr(idx,astF);
    pushAToB(stmt2z3name[base],stmt2z3name[arraySubscriptExpr]);
    pushAToB(stmt2z3name[idx],stmt2z3name[arraySubscriptExpr]);
    if (baseZ3Exprs.empty()||idxZ3Exprs.empty()){
        return exprs;
    }
	//assert(baseZ3Exprs.size()>0&&idxZ3Exprs.size()>0);
    vector<expr> baseExprs;
    for (auto& e : baseZ3Exprs){
        baseExprs.push_back(e);
    }
    vector<expr> idxExprs;
    for (auto& e : idxZ3Exprs){
        idxExprs.push_back(e);
    }
    expr baseZ3Expr=baseExprs.back();baseExprs.pop_back();
	expr idxZ3Expr=idxExprs.back();idxExprs.pop_back();
	pushAToB(baseExprs,exprs);	
	pushAToB(idxExprs,exprs);

    expr tmp = idxZ3Expr;
//    if(idxZ3Expr.is_bv()){
  //    //  tmp = idxZ3Expr.bv2int();
    //    bool isSigned = true;//TODO
    //    tmp=z3::expr(c, Z3_mk_bv2int(c, idxZ3Expr, isSigned));
   // }
	expr arrayAcess=select(baseZ3Expr,tmp);
    common::printLog("arrayAcess "+arrayAcess.to_string()+"\n",common::CheckerName::arrayBound,0,*configure); 
    vector<uint64_t> initElement;
    expr assign = TRUE;
    bool flag = false;
    if (const DeclRefExpr* baseref = dyn_cast<DeclRefExpr>(base->IgnoreCasts()->IgnoreParens())){
        VarDecl* basev = (VarDecl*)(baseref->getDecl());
       // basev->dump();
        //sort Int = c.int_sort();
        //sort Array = c.array_sort(Int,Int);
        //expr arr =cxt.constant("arr",Array); 
        //arr.
        Expr* initexpr = basev->getInit();
        FindContainExpr visitor;
        visitor.TraverseStmt((Stmt*)arraySubscriptExpr); 
        if (initexpr)
            if (InitListExpr* inits = dyn_cast<InitListExpr>(initexpr))
                for (unsigned i=0;i<inits->getNumInits();i++){
                    Expr* init = inits->getInit(i);
                    if (visitor.isContain(init)) {
                        //continue to avoid dead loop
                        break;
                    }
                    FindContainExpr initvisitor;
                    initvisitor.TraverseStmt((Stmt*)init);      
                    if (initvisitor.isContain(arraySubscriptExpr)) {
                        //continue to avoid dead loop
                        break;
                    }                                
                    vector<expr> iexprs = clangExprToZ3Expr(init, astF);
                    if (!iexprs.empty()){
                        //expr storei = store(baseZ3Expr,i, iexprs.back());
                        expr elem = select(baseZ3Expr,i);
                        expr initexpr = iexprs.back();
                        if (elem.get_sort().sort_kind() != initexpr.get_sort().sort_kind())
                            continue;
                        // if (elem.is_array() && initexpr.is_int()){
                        //     z3::sort elemsort = c.array_sort(c.int_sort(),c.int_sort());
                        //     initexpr = c.constant(,ty);
                        // }
                        expr assigni = (elem == initexpr);
                        exprs.push_back(assigni);
                        //rm extraConditions.push_back(assigni); 
                        //                    int v = select(baseZ3Expr,i).get_numeral_int();
                        // flag = true;
                        // assign = assign&&assigni;
                        //delete iexprs; iexprs=nullptr;
                    }
                }
    }
    exprs.push_back(arrayAcess);

	return exprs;
}

expr  Z3Coding::clangCharacterLiteralToZ3Expr(clang::CharacterLiteral * charLiteral){
	expr   e=c.int_val(charLiteral->getValue());
//    expr e = c.bv_val(charLiteral->getValue(),1);
    return e;
}

expr  Z3Coding::clangCXXBoolLiteralExprToZ3Expr(clang::CXXBoolLiteralExpr * boolLiteral){
	if(boolLiteral->getValue()){
       // return c.bv_val(1,1);
       	return c.bool_val(1);
	}
	else {
  //      return c.bv_val(0,1);
		return c.bool_val(0);
	}

}
expr  Z3Coding::clangIntegerLiteralToZ3Expr(clang::IntegerLiteral * integerLiteral){
    uint64_t size = integerLiteral->getValue().getBitWidth();
//	expr e = c.bv_val((uint64_t)(integerLiteral->getValue().getLimitedValue()),size);
	expr   e=c.int_val((uint64_t)(integerLiteral->getValue().getLimitedValue()));
	return e;
}

expr Z3Coding::Int2Z3Expr(uint64_t i, uint64_t size) {
    expr e = c.int_val(i);
    //	expr e = c.bv_val(i,size);
	return e;
}

z3::expr Z3Coding::clangOp2Z3Op(z3::expr e1,z3::expr e2,clang::BinaryOperatorKind op){
    if (e1.is_bool()) {
        e1 = ite(e1,c.int_val(1),c.int_val(0));
    }
    if (e2.is_bool()) {
        e2 = ite(e2,c.int_val(1),c.int_val(0));
    }    
    if (op != clang::BinaryOperatorKind::BO_EQ && e1.get_sort().sort_kind()!=e2.get_sort().sort_kind()) {
        return _error;
    }
    switch(op){
        default:
            {
                std::cerr<<"ArrayOutOfBoundsCheckerV3:clangOp2Z3Op: We do not process BinaryOperatorKind: "<<op<<std::endl;
                z3::expr _error=c.int_const("_error");;
                return _error;

            }
        case clang::BinaryOperatorKind::BO_EQ:
            {
//                mbcdlen = __wcrtomb ((char *) buf, wcu, &prev_st);
                //parm == &prev_st
                //e1 array, e2 int, *e1=e2
                if (e1.is_array()){
                    if (e2.is_int() || e2.is_bool()) {
                        expr e11 = select(e1,c.int_val(0));

                        if (e11.is_bool()) {
                            e11 = ite(e11,c.int_val(1),c.int_val(0));
                        }
                        if (e2.is_bool()) {
                            e2 = ite(e2,c.int_val(1),c.int_val(0));
                        }   
                        if (e11.get_sort().sort_kind()!=e2.get_sort().sort_kind())  return _error;                    
                        return e11 == e2;
                    }
                    else {
                        if (e2.is_array()) {
                            std::vector<z3::expr> eqs = updateParameterRealArgument4StructElement(e1, e2);
                            z3::expr tmp = TRUE;;
                            for (auto e : eqs) {
                                tmp = tmp && e;
                            }
                            return tmp;
                        }
                        else {
                            return _error;
                        }
                    }
                }
                else if (e1.is_int() || e1.is_bool()) {
                    if (e2.is_array()) {
                        expr e22 = select(e2,c.int_val(0));

                        if (e22.is_bool()) {
                            e22 = ite(e22,c.int_val(1),c.int_val(0));
                        }
                        if (e1.is_bool()) {
                            e1 = ite(e1,c.int_val(1),c.int_val(0));
                        }   
                        if (e22.get_sort().sort_kind()!=e1.get_sort().sort_kind())  return _error;                    
                            return e1 == e22;                       
                    }
                }
                if (e1.get_sort().sort_kind()!=e2.get_sort().sort_kind())  return _error;                    
                z3::expr tmp= (e1 == e2);
                return tmp;

            }
        case clang::BinaryOperatorKind::BO_GE:
            {
                z3::expr tmp=e1 >= e2;
                return tmp;

            }
        case clang::BinaryOperatorKind::BO_GT:
            {
                z3::expr tmp=e1>e2;
                return tmp;

            }
        case clang::BinaryOperatorKind::BO_LE:
            {
                z3::expr tmp=e1<=e2;
                return tmp;

            }
        case clang::BinaryOperatorKind::BO_LT:
            {
                z3::expr tmp=e1<e2;
                return tmp;

            }
        case clang::BinaryOperatorKind::BO_NE:
            {
                z3::expr tmp=e1!=e2;
                return tmp;

            }
        case clang::BinaryOperatorKind::BO_Add:
   		{
            return e1+e2;
        }

    }

}

expr Z3Coding::z3IntExprToZ3ArrayExpr(expr iexpr) {
    if (iexpr.is_int()){
        
    }
    return _error;
}

vector<expr>  Z3Coding::clangUnaryOperatorToZ3Expr(clang::UnaryOperator * unaryOperator, ASTFunction* astF){
	vector<expr> exprs;
	vector<expr> subExprs=clangExprToZ3Expr(unaryOperator->getSubExpr(), astF);
    pushAToB(stmt2z3name[unaryOperator->getSubExpr()],stmt2z3name[unaryOperator]);
	if(subExprs.empty()){
		return exprs;
	}
    expr subExpr=subExprs.back();
    std::pair<z3::expr,z3::expr> subpair = handleexprVector(subExprs);
    exprs.push_back(subpair.second);
    bool isSigned = false;//TODO handle this!!
	expr tmp(c);

	switch(unaryOperator->getOpcode()){
		default:	
            common::printLog("Z3Coding:clangUnaryOperatorToZ3Expr: We do not process  : "+unaryOperator->getOpcodeStr(unaryOperator->getOpcode()).str()+"\n",common::CheckerName::arrayBound,0,*configure);
            exprs.clear();
            return exprs;
        case UO_AddrOf://&
            //if (subExpr.is_int())
            exprs.push_back(subExpr);
            break;
		case UO_PostInc 	://i++
            if (subExpr.is_array()){
                exprs.clear();
                return exprs;        
            }  
			tmp=subExpr;
			if (subExpr.is_int())
                exprs.push_back((tmp==subExpr+1));
			exprs.push_back(tmp);
			break;
		case UO_PostDec 	://i--;
            if (subExpr.is_array()){
                exprs.clear();
                return exprs;        
            }  			
            tmp=subExpr;
            if (subExpr.is_int())
                exprs.push_back(subExpr==subExpr-1);
			exprs.push_back(tmp);
			break;
		case UO_PreInc 	://++i
            if (subExpr.is_array()){
                exprs.clear();
                return exprs;        
            }         
			tmp=subExpr;
            if (subExpr.is_int())
                exprs.push_back(tmp==subExpr+1);
			exprs.push_back(tmp);
			break;
		case UO_PreDec 	://--i;
            if (subExpr.is_array()){
                exprs.clear();
                return exprs;        
            }          
			tmp=subExpr;
            if (subExpr.is_int())
                exprs.push_back(tmp==subExpr-1);
			exprs.push_back(tmp);
			break;
		case UO_Plus 	://+i
            if (subExpr.is_array()){
                exprs.clear();
                return exprs;        
            }          
             if (subExpr.is_bool()){
                subExpr = ite(subExpr,c.int_val(1),c.int_val(0));
            }            
			exprs.push_back(subExpr);
			break;
		case UO_Minus 	://-i;
            if (subExpr.is_array()){
                exprs.clear();
                return exprs;        
            }          
             if (subExpr.is_bool()){
                subExpr = ite(subExpr,c.int_val(1),c.int_val(0));
            }
			exprs.push_back(-subExpr);
			break;
		case UO_Not 	://~i;
        {
            if (subExpr.is_array()){
                exprs.clear();
                return exprs;        
            }  
            expr l = subExpr;
            if (l.is_array()) {
                exprs.clear();
                return exprs;
            }
            if (l.is_bool()){
                l = ite(l,c.int_val(1),c.int_val(0));
            }
            if (l.is_int()){
                l = z3::expr(c, Z3_mk_int2bv(c, 32, l));
            }            
            expr r = ~l;
            expr rrr = z3::expr(c,Z3_mk_bv2int(c,r,isSigned));
            if (subExpr.is_bool()) {
                rrr = (rrr!=c.int_val(0));
            }             
             exprs.push_back(rrr);
			break;
        }
		case UO_LNot 	://!i
            if (subExpr.is_array()){
                exprs.clear();
                return exprs;        
            }        
			if (subExpr.is_int()){
                subExpr = (subExpr ==c.int_val(0));
                     exprs.push_back(subExpr);
            }
            else if (subExpr.is_array()){
                 //subExpr = (subExpr ==c.int_val(0));
                     exprs.push_back(subExpr);               
            }
            else
                exprs.push_back(!subExpr);
			break;
        case clang::UO_Deref://*p
        {
            if (subExpr.is_array())
                exprs.push_back(select(subExpr,c.int_val(0)));
            else{
                //delete exprs;                exprs = nullptr;
                exprs.clear();
                return exprs;
            }
            break;
        }
	}
    return exprs;
}
std::string Z3Coding::clangArraySubscriptToZ3Name(clang::ArraySubscriptExpr * ase, ASTFunction* astF){
	//ase->dump();
	const clang::Expr * base=ase->getBase();
	const clang::Expr * idx=ase->getIdx();
	LangOptions LO;
	LO.CPlusPlus=1;
	std::string buffer;
	llvm::raw_string_ostream strout(buffer);
	base->printPretty(strout, nullptr, PrintingPolicy(LO));
	std::string baseName=strout.str();
	//cout<<"baseName:"<<baseName<<endl;
	std::string buffer1;
	llvm::raw_string_ostream strout1(buffer1);
	idx->printPretty(strout1, nullptr, PrintingPolicy(LO));
	std::string idxName=strout1.str();
	//cout<<"idxName:"<<idxName<<endl;
	std::string baseZ3Name;
	std::string idxZ3Name;
	if(const clang::DeclRefExpr *dre = dyn_cast<clang::DeclRefExpr>(base->IgnoreCasts()->IgnoreParens())){
		//call clangDecl...Expr will update VarDeclToZ3Name
		const ValueDecl*  valueDecl=dre->getDecl();
        std::tuple<std::string,expr,expr> basepair = clangValueDeclToZ3Expr(valueDecl, astF);
//        stmt2z3name[ase].insert(basepair.first);
		baseZ3Name=std::get<0>(basepair);
	}
	else{
		std::string buffer;
		llvm::raw_string_ostream strout(buffer);
		base->printPretty(strout, nullptr, PrintingPolicy(LO));
		//std::cerr<<"Z3Coding:clangArraySubscriptToZ3Name: We do not process ArraySubscriptExpr base: "<<strout.str()<<std::endl;
		return "";
	}
	if(const clang::DeclRefExpr *dre2 = dyn_cast<clang::DeclRefExpr>(idx->IgnoreCasts()->IgnoreParens())){
		const ValueDecl*  valueDecl=dre2->getDecl();
        std::tuple<std::string,expr,expr> idxpair=clangValueDeclToZ3Expr(valueDecl, astF);
 //       stmt2basicExprs[ase].insert(valueDecl);
		idxZ3Name=std::get<0>(idxpair);
	}
	else if(const clang::IntegerLiteral *integerLiteral = dyn_cast<clang::IntegerLiteral>(idx->IgnoreCasts()->IgnoreParens())){
		uint64_t tmp=integerLiteral->getValue().getLimitedValue();
		idxZ3Name=int2string(tmp);
	}
	else{
		std::string buffer;
		llvm::raw_string_ostream strout(buffer);
		idx->printPretty(strout, nullptr, PrintingPolicy(LO));
		//std::cerr<<"Z3Coding:clangArraySubscriptToZ3Name: We do not process ArraySubscriptExpr index: "<<strout.str()<<std::endl;
		return "";
	}
	std::string baseidxZ3Name=baseZ3Name+'['+idxZ3Name+']';
	return baseidxZ3Name;
}

std::string Z3Coding::clangMemberExprToZ3Name(const clang::MemberExpr* memberExpr, ASTFunction* astF){
   	const clang::Expr* base=memberExpr->getBase()->IgnoreCasts()->IgnoreParens();
	ValueDecl* valueDecl=memberExpr->getMemberDecl();
//    stmt2basicExprs[memberExpr].insert(valueDecl);
	LangOptions LO;
	LO.CPlusPlus=1; 
	if (!valueDecl){
		std::string buffer;
		llvm::raw_string_ostream strout(buffer);
		memberExpr->printPretty(strout, nullptr, PrintingPolicy(LO));
		//std::cerr<<"Z3Coding:clangMemberExprToZ3Expr: We do not process memberExpr: "<<strout.str()<<std::endl;
		return "";
	}
	std::string baseName;
	std::string baseZ3Name;
    if (const CStyleCastExpr* ccast = dyn_cast<CStyleCastExpr>(base) ) {
        base = ccast->getSubExpr()->IgnoreCasts()->IgnoreParens();
    }
	//if base is arraysubscript such as p[1].n,get base name:p[1]
	if(const ArraySubscriptExpr *ASE = dyn_cast<ArraySubscriptExpr>(base)){
		baseZ3Name=clangArraySubscriptToZ3Name((ArraySubscriptExpr *)ASE, astF);

	}
	//if base is DeclRefExpr such as p.n,get base name:p
	if(const DeclRefExpr *dre = dyn_cast<DeclRefExpr>(base)){
		const ValueDecl*  valueDecl0=dre->getDecl();
        std::tuple<std::string,expr,expr> basepair=clangValueDeclToZ3Expr(valueDecl0, astF);
 //       stmt2basicExprs[memberExpr].insert(valueDecl0);
		baseZ3Name=std::get<0>(basepair);

	}
    if (const MemberExpr* mem = dyn_cast<MemberExpr>(base)){
        baseZ3Name = clangMemberExprToZ3Name(mem, astF);
    }
	std::string buffer1;
	llvm::raw_string_ostream strout1(buffer1);
	valueDecl->printName(strout1);
	std::string memName=strout1.str();
	std::string z3Name=baseZ3Name+'.'+memName;
    return z3Name;
}

expr Z3Coding::clangMemberExprToZ3Expr(const clang::MemberExpr* memberExpr, ASTFunction* astF, bool incFlag){	
	expr tmp(c);
    std::string z3Name = clangMemberExprToZ3Name(memberExpr, astF);
    if (z3Name==""){
        return _error;
    }
    const clang::Expr* base=memberExpr->getBase()->IgnoreCasts()->IgnoreParens();
	ValueDecl* valueDecl=memberExpr->getMemberDecl();
    //cout<<valueDecl->getNameAsString()<<endl;
    //cout<<memberExpr->getFoundDecl()->getNameAsString()<<endl;
    stmt2z3name[memberExpr].insert(z3Name);
    //stmt2basicExprs[memberExpr].insert(valueDecl);
	QualType declQT = valueDecl->getType();
	std::string buffer2;
	llvm::raw_string_ostream strout2(buffer2);
	LangOptions LO;
	LO.CPlusPlus=1; 
    declQT.print(strout2,PrintingPolicy(LO));
	std::string typeName=strout2.str();
	z3::sort ty=clangTypeToZ3Sort(declQT);
	
	//construct p.n or p[1].n
	map<std::string,expr>::iterator itr=z3NameToZ3Expr.find(z3Name);
	if(itr!=z3NameToZ3Expr.end()){
		//z3Name already has a corresponding expr,get
         tmp=itr->second;
        if (incFlag) {
            //for handle assignment, increase expr to expr0,expr1 etc
            //for example, need check e<10, have path condition e<e0+loop(due to e++ in loop), e0==e1-num(due to e-=num), e1==xx
            expr newe = c.constant((tmp.to_string()+"0").c_str(),tmp.get_sort());
            itr->second = newe;
        }
         tmp=itr->second;
	}
	else{
		//z3Name does not have a corresponding expr,create
		tmp=c.constant(z3Name.c_str(),ty);
    //    tmp = createExpr(z3Name,declQT,valueDecl);
        z3NameToZ3Expr.insert(make_pair(z3Name,tmp));
	}
	return tmp;
}

std::vector<z3::expr> Z3Coding::updateParameterRealArgument4StructElement(expr parm, expr real) {
    std::vector<z3::expr> r;
    std::string realBaseName = real.to_string();
    //cout<<"realBaseName "<<realBaseName<<endl;
    std::string parmBaseName = parm.to_string();
    //cout<<"parmBaseName "<<parmBaseName<<endl;
    map<std::string,expr> z3NameToZ3ExprTmp;
    for (auto& nameexpr : z3NameToZ3Expr) {
        //cout<<"nameexpr.first "<<nameexpr.first<<endl;
        if (nameexpr.first.rfind(parmBaseName+".")==0) {
            expr parme = nameexpr.second;
            std::string elemName = nameexpr.first.substr(parmBaseName.length()+1);
            //cout<<"elemName "<<elemName<<endl;
            std::string realName = realBaseName+"."+elemName;
           // cout<<"realName "<<realName<<endl;
            expr reale = c.constant(realName.c_str(),parme.get_sort());
            z3NameToZ3ExprTmp.insert(make_pair(realName,reale));
            r.push_back(parme == reale);
        }
    }
    for(auto pair: z3NameToZ3ExprTmp) {
        z3NameToZ3Expr.insert(pair);
    }
    return r;
}

//parm=realarg&&parm=realarg, returnexpr, condition
vector<expr> Z3Coding::clangCallExprToZ3Expr(const clang::CallExpr* call, ASTFunction* astF) {
	vector<expr> exprs;
    vector<std::pair<expr,expr>> vec;
    const FunctionDecl* fun = call->getDirectCallee();
    if(fun==nullptr || !fun->getBody()) {
        //delete exprs;
        //exprs = nullptr;
        return exprs;
    } 
        //    return std::make_pair(c.bool_val(true),vec); 
    std::string funcName = fun->getNameInfo().getAsString(); 
    common::printLog( "call func "+funcName+"\n",common::CheckerName::arrayBound,0,*configure );
    if (funcName == "min" || funcName == "max") {
        //std::min(a,b)= a<b?a:b
        //std::max(a,b)=a<b?b:a
        const Expr* a = call->getArg(0);
        vector<expr> av = clangExprToZ3Expr(a, astF);
        const Expr* b = call->getArg(1);
        vector<expr> bv = clangExprToZ3Expr(b, astF);
        if (av.empty() || bv.empty()) {
            exprs.push_back(c.bool_val(true));
            return exprs;
            //return std::make_pair(c.bool_val(true),vec); 

        }
//        z3::expr condexpr = av.back() < bv->bck();
        if (funcName == "min") {
            z3::expr mine = min(av.back(),bv.back());
            exprs.push_back(mine);
            return exprs;
            //return std::make_pair(mine,vec); 
        }
        else if (funcName == "max") {
            z3::expr me = max(av.back(),bv.back());
            exprs.push_back(me);
            return exprs;
            //return std::make_pair(me,vec); 
        }

    }
    if (!fun->isThisDeclarationADefinition()) {
        //delete exprs;        exprs = nullptr;
        return exprs;
    }
    z3::expr parm2argexpr = c.bool_val(true);
    for (unsigned i=0;i<fun->getNumParams();i++){
        const ParmVarDecl* parm = fun->getParamDecl(i);
        const Expr* realArg = call->getArg(i)->IgnoreCasts()->IgnoreParens();
        std::tuple<std::string,expr,expr> parmpair = clangValueDeclToZ3Expr(parm, astF);
        vector<z3::expr> realv = clangExprToZ3Expr(realArg, astF);
        if (realv.empty()) {
            continue;
        }
        z3::expr eqop = clangOp2Z3Op(std::get<1>(parmpair),realv.back(),BinaryOperatorKind::BO_EQ);
        if (eq(eqop,_error)) continue;
        parm2argexpr = parm2argexpr&&eqop&&std::get<2>(parmpair);
    }

    bool arrayflag = false;
    QualType returnType = fun->getReturnType();
    QualType canonicalType = returnType.getTypePtr()->getCanonicalTypeInternal();
    if(canonicalType.getTypePtr()->isArrayType() || canonicalType.getTypePtr()->isPointerType()){
        arrayflag = true;
    }
    FindReturnStmt returnFinder;
    returnFinder.Visit(fun->getBody());
    std::vector<ReturnStmt*> returnStmts = returnFinder.getReturnStmts();
    for (auto ret : returnStmts) {
        SourceManager *sm = &(fun->getASTContext().getSourceManager());
        std::string retloc = ret->getBeginLoc().printToString(*sm);
        int firstColonInBegin = retloc.find(":");
        std::string fileName = retloc.substr(0,firstColonInBegin);
        int secondColonInBegin = retloc.find(":", firstColonInBegin + 1);
        std::string locLinesInBegin = retloc.substr(firstColonInBegin + 1, secondColonInBegin - firstColonInBegin - 1);
        int line = std::stoi(locLinesInBegin);
        CFGBlock* block = manager->getBlockWithLoc(fileName, line);
        if (!block)
            continue;
        Expr* retvalue = ret->getRetValue();
        if (!retvalue) continue;  
        FindContainExpr retvisitor;
        retvisitor.TraverseStmt((Stmt*)retvalue);      
        if (retvisitor.isContain(call)) {
            //continue to avoid dead loop
            return exprs;
        } 
        if (CallExpr* retvaluecall = dyn_cast<CallExpr>(retvalue)){
            const FunctionDecl* retvaluecallfun = retvaluecall->getDirectCallee();
            if (retvaluecallfun == fun) {
                //recursive call, break to avoid dead loop
                return exprs;
            }
        }     
        std::string retvaluestr = common::print(retvalue);
        if (retvaluestr.find(funcName) != std::string::npos) {
            //recursive call, break to avoid dead loop
            return exprs;
        }         
        vector<expr> retexpr = clangExprToZ3Expr(retvalue, astF);
        if (retexpr.empty())
            continue;      
        vector<expr> condexprs;
        bool T=true;
        for(CFGBlock::pred_iterator pred_iter=block->pred_begin();pred_iter!=block->pred_end();++ pred_iter){
            CFGBlock *pred=*pred_iter;
            if(pred==NULL)continue; 
            Stmt* cond=(pred->getTerminator().getStmt());
            if (!cond)
                continue;
            std::string condstr = common::print(cond);
            if (condstr.find(funcName) != std::string::npos) {
                //recursive call, break to avoid dead loop
                return exprs;
            }                
            for(CFGBlock::succ_iterator succ_iter=pred->succ_begin();succ_iter!=pred->succ_end();++succ_iter){
                CFGBlock* succ=*succ_iter;
                if(succ==NULL)continue;
                if (succ == block)
                    break;
                T=false;
            }
            if (cond){
                if(cond->getStmtClass() == Stmt::IfStmtClass){                                                    
                     cond=((IfStmt*)cond)->getCond();
                 }
                 if (CallExpr* condcall = dyn_cast<CallExpr>(cond)){
                    const FunctionDecl* condfun = condcall->getDirectCallee();
                    if (condfun == fun) {
                        //recursive call, break to avoid dead loop
                        return exprs;
                    }

                 }
                 condexprs = clangExprToZ3Expr(cond, astF);
                 if (condexprs.empty()) return exprs;
                 break;
            }
        }

        std::pair<z3::expr,z3::expr> rexprpair = handleexprVector(retexpr);
        exprs.push_back(rexprpair.second);//push init eg array init to top exprs ; 
        expr rexpr = rexprpair.first;
        if (rexpr.is_int() && arrayflag) {
            z3::sort ty = c.array_sort(c.int_sort(),c.int_sort());
            rexpr = c.constant("0",ty);
        } 
        
        expr condexpr = c.bool_val(true);
        //condexpr = condexpr && rexprpair.second;//this will be wrong , eg int array[]={0,1,2}; merge with condexpr will lead to assignment be in ite condition
        if (!condexprs.empty()){
            condexpr = condexprs.back();
            if (condexpr.is_array())
                condexpr = clangOp2Z3Op(select(condexpr,c.int_val(0)), c.int_val(0),clang::BinaryOperatorKind::BO_NE);
            if (condexpr.is_int())
                condexpr = (condexpr !=c.int_val(0));
            if (!condexpr.is_bool()) continue;
            if (!T){
                condexpr = !condexpr;
            }
            std::pair<z3::expr,z3::expr> cexprpair = handleexprVector(condexprs);
            condexpr = condexpr && cexprpair.second;
        }
        vec.push_back(std::make_pair(rexpr,condexpr));
    }
    expr rvec = Vector2IteExpr(vec,0);
    exprs.push_back(parm2argexpr);
    exprs.push_back(rvec);
    //rm extraConditions.push_back(parm2argexpr);
    return exprs;
}

//call from i== 0
expr Z3Coding::Vector2IteExpr(vector<std::pair<expr,expr>>& v,int i) {
    if (v.size() == 0) {
        return _error;
    }
    if (i==v.size()){
        return _error;
    }
    if (i<v.size()) {
        z3::expr cond = v[i].second;
        if (cond.is_int())
            cond = (cond !=c.int_val(0));
        else if (cond.is_array())
            cond = (select(cond,c.int_val(0)) != c.int_val(0));
        expr r = Vector2IteExpr(v,i+1);
        if (v[i].first.get_sort().sort_kind() !=r.get_sort().sort_kind()) {
            common::printLog("Z3Coding:vector2iteExpr different sort : "+int2string(v[i].first.get_sort().sort_kind())+", "+int2string(r.get_sort().sort_kind())+"\n",common::CheckerName::arrayBound,1,*configure);
                return v[i].first;
        }
        expr rr = ite(cond,v[i].first,r);
        return rr;
    }
    return _error;
}

vector<expr> Z3Coding::clangConditionalOperatorToZ3Expr(ConditionalOperator* co, ASTFunction* astF){
    vector<expr> exprs;
    Expr* cond = co->getCond()->IgnoreCasts()->IgnoreParens();
    vector<expr> condexprs = clangExprToZ3Expr(cond, astF);
    if (condexprs.empty()) return exprs;
    Expr* lhs = co->getLHS()->IgnoreCasts()->IgnoreParens();
    Expr* rhs = co->getRHS()->IgnoreCasts()->IgnoreParens();
    vector<expr> lhsexprs = clangExprToZ3Expr(lhs, astF);
    if (lhsexprs.empty()) return exprs;
    vector<expr> rhsexprs = clangExprToZ3Expr(rhs, astF);
    if (rhsexprs.empty()) return exprs;

    std::pair<z3::expr,z3::expr> condpair = handleexprVector(condexprs);
    std::pair<z3::expr,z3::expr> lpair = handleexprVector(lhsexprs);
    std::pair<z3::expr,z3::expr> rpair = handleexprVector(rhsexprs);
    exprs.push_back(condpair.second);
    exprs.push_back(lpair.second);
    exprs.push_back(rpair.second);	
    
    expr condexpr = condexprs.back();
    if (condexpr.is_int())
        condexpr = (condexpr!=ZERO);
    else if (condexpr.is_array()) {exprs.clear();return exprs;}

    expr lhsexpr = lhsexprs.back();
    expr rhsexpr = rhsexprs.back();
	QualType canonicalType=co->getType().getTypePtr()->getCanonicalTypeInternal();
    if(canonicalType.getTypePtr()->isBooleanType()){
        if (lhsexpr.is_int()){
            lhsexpr = (lhsexpr!=c.int_val(0));
        }
        if (rhsexpr.is_int()){
            rhsexpr = (rhsexpr!=c.int_val(0));
        }
    }
    else if(canonicalType.getTypePtr()->isIntegerType()){
         if (lhsexpr.is_bool()){
            lhsexpr = ite(lhsexpr,c.int_val(1),c.int_val(0));
        }
        if (rhsexpr.is_bool()){
            rhsexpr = ite(rhsexpr,c.int_val(1),c.int_val(0));
        }       
    }
    if (lhsexpr.get_sort().sort_kind() != rhsexpr.get_sort().sort_kind()) {
        exprs.clear();
        return exprs;
    }
    z3::expr r  = ite(condexpr,lhsexpr,rhsexpr);
    exprs.push_back(r);
    return exprs;
}

std::string erase(std::string s) {
    std::string str = s;
    int index = str.size()-1;
    while(index!=-1)
    {   
        if (str[index] == '0')
        {   
            str.erase(index,1);
            index--;
        }   
        else
        {   
            break;
        }   
    }    
    return str;
}

std::pair<z3::expr,z3::expr> Z3Coding::handleexprVector(vector<expr>& exprs){
    if (exprs.empty()) return std::make_pair(_error,TRUE);
    vector<expr> tmp = exprs;
    expr v = tmp.back();
    tmp.pop_back();
	z3::expr cond = TRUE;
    int i=tmp.size();
    while(i) {
        z3::expr e = tmp.back();
        tmp.pop_back();
        i--;
        if (e.is_int()) {
            e = (e!=ZERO);
        }
        if (!e.is_bool())
            continue;
        if (e.is_true()) 
            continue;
        cond = cond && e;						
    }
    return std::make_pair(v,cond);
}

vector<expr>  Z3Coding::clangExprToZ3Expr(const clang::Stmt* clangexpr, ASTFunction* astF, bool incFlag){
    auto finde = clangExpr2Z3Expr.find(clangexpr);
    if (finde != clangExpr2Z3Expr.end())
    {
        vector<expr> t= finde->second;
        if (incFlag && (clangexpr->getStmtClass()==clang::Stmt::DeclRefExprClass || clangexpr->getStmtClass()==clang::Stmt::MemberExprClass)) {
            //for handle assignment, increase expr to expr0,expr1 etc
            //for example, need check e<10, have path condition e<e0+loop(due to e++ in loop), e0==e1-num(due to e-=num), e1==xx
            expr newe = c.constant((t.back().to_string()+"0").c_str(),t.back().get_sort());
            vector<expr> newt;
            newt.push_back(newe);
            std::string z3Name = erase(t.back().to_string());
            map<std::string,expr>::iterator itr=z3NameToZ3Expr.find(z3Name);
            if(itr!=z3NameToZ3Expr.end()){
                //z3Name already has a corresponding expr,get
                itr->second = newe;                
            }   
            else {//unused
                //(e0,e00)
                z3NameToZ3Expr.insert(std::make_pair(z3Name,newe));
            }        
            return newt;
        }
        return t;
    }

    vector<expr> exprs;
	expr tmp(c);
	switch (clangexpr->getStmtClass()) {
		default:
            common::printLog("Z3Coding:clangExprToZ3Expr: We do not process  : "+std::string(clangexpr->getStmtClassName())+"\n",common::CheckerName::arrayBound,0,*configure);
		    //delete exprs;             exprs = nullptr;
            break;
        case clang::Stmt::CStyleCastExprClass:{//CStyleCastExpr->ParenExpr->DeclRefExpr/Interger
            CStyleCastExpr* ccast = (clang::CStyleCastExpr*)clangexpr;
            Expr* base = ccast->getSubExpr()->IgnoreCasts()->IgnoreParens();
            exprs = clangExprToZ3Expr(base,astF,incFlag);
            break;
        }
        case clang::Stmt::ConditionalOperatorClass:{
            exprs = clangConditionalOperatorToZ3Expr((ConditionalOperator*)clangexpr,astF);
                                                       break;
                                                   }
        case clang::Stmt::CXXMemberCallExprClass:{
          //param2.resize(loopCnt);vector<Cnt> &param2
             CXXMemberCallExpr* e = (clang::CXXMemberCallExpr*)clangexpr;
             MemberExpr* callee = (MemberExpr*)(e->getCallee());
             Expr* base = callee->getBase()->IgnoreCasts()->IgnoreParens();
             std::string baseName = print(base);
             expr basesize = createExpr(baseName+".size()");
             std::string calleeName = callee->getMemberNameInfo().getName().getAsString();
             common::printLog("Z3Coding CXXMemberCallExpr "+baseName+"."+calleeName+" in "+print(e)+"\n",common::CheckerName::arrayBound,0,*configure);
             if (calleeName == "resize"){
                 Expr* arg = e->getArg(0);
                 vector<expr> argexpr = clangExprToZ3Expr(arg,astF);
                if(argexpr.empty())
                    break;
                exprs.push_back(basesize==argexpr.back());//param2.size() == loopcnt
                //incFlag, parm2.size()0
                //std::string z3Name = basesize.to_string();
                //expr newe = c.constant((z3Name+"0").c_str(),basesize.get_sort());
               // z3NameToZ3Expr.insert(std::make_pair(z3Name,newe));
             }
             else if (calleeName == "size"){
                // std::string z3Name = basesize.to_string();
                // map<std::string,expr>::iterator itr=z3NameToZ3Expr.find(z3Name);
                // if(itr!=z3NameToZ3Expr.end()){
                //     //z3Name already has a corresponding expr,get
                //     tmp=itr->second;
                //      exprs.push_back(tmp); 
                //      itr->second = basesize;      //resume expr for false branch    
                //      return exprs;   
                // }    
                // else            
                    exprs.push_back(basesize);
             }
             break;
                                                 }
        case clang::Stmt::CompoundAssignOperatorClass:{
            return clangBinaryOperatorToZ3Expr((clang::BinaryOperator*)clangexpr,astF);
                                                       }
        case clang::Stmt::MaterializeTemporaryExprClass:{
            clang::MaterializeTemporaryExpr* mexpr = (clang::MaterializeTemporaryExpr*)clangexpr;
            Expr* e = mexpr->getSubExpr()->IgnoreCasts()->IgnoreParens();
            exprs = clangExprToZ3Expr(e, astF);
            break;
                                                        }
        case clang::Stmt::UnaryExprOrTypeTraitExprClass:{
                                                            //eg: sizeof(arr)
            clang::UnaryExprOrTypeTraitExpr* uexpr = (clang::UnaryExprOrTypeTraitExpr*)clangexpr;
            uint64_t size=0;
            if (uexpr->isArgumentType()){
                size = manager->getFunctionDecl(astF)->getASTContext().getTypeSize(uexpr->getArgumentType());
            }
            else {
                Expr* e = uexpr->getArgumentExpr()->IgnoreCasts()->IgnoreParens();
                size = manager->getFunctionDecl(astF)->getASTContext().getTypeSize(e->getType());
            }
            //const vector<uint64_t> sizes = getArraySize(astF, e->IgnoreCasts()->IgnoreParens(),manager,call_graph,PTA,configure);
            expr t = Int2Z3Expr(size/8);
            exprs.push_back(t);
            break;
        }
        case clang::Stmt::ExprWithCleanupsClass:{
            ExprWithCleanups* e = (clang::ExprWithCleanups*)clangexpr;
//            for(auto childstmt: e->children()){
               // vector<expr> vecs = clangExprToZ3Expr(childstmt,astF);
  //          }
            exprs = clangExprToZ3Expr(e->getSubExpr()->IgnoreCasts()->IgnoreParens(),astF);
            break;
                                                }
        case clang::Stmt::CallExprClass: {
            return clangCallExprToZ3Expr((clang::CallExpr*)clangexpr, astF);
            /*if (r.second.empty()) {
                exprs.push_back(r.first);
                break;
            }
            expr t = c.bool_val(false);
            for (auto pair2: r.second) {
        cout<<"pair2:"<<pair2.first<<", "<<pair2.second<<endl;
                expr val = pair2.first;
                if (val.is_array())
                    continue;
                if (val.is_int()) {
                    continue;
                }
                    //val = c.bool_val(pair2.first.get_numeral_int()); 
//                if (eq(pair2.first,_error))
  //                  val = c.bool_val(true);
                expr tt =  val&&pair2.second;
                //expr ttt = tt.simplify();
                t = t || tt;
                //t = t.simplify();
            }
            t = r.first &&t;
            exprs.push_back(t);
            break;
              */                           }
		case clang::Stmt::BinaryOperatorClass:
			exprs=clangBinaryOperatorToZ3Expr((clang::BinaryOperator*)clangexpr, astF);
			break;
		case clang::Stmt::ArraySubscriptExprClass:
			exprs=clangArraySubscriptExprToZ3Expr((clang::ArraySubscriptExpr*)clangexpr, astF);
			break;
		case clang::Stmt::CharacterLiteralClass:
			tmp=clangCharacterLiteralToZ3Expr((clang::CharacterLiteral*)clangexpr);
			exprs.push_back(tmp);
			break;
		case clang::Stmt::CXXBoolLiteralExprClass:
			tmp=clangCXXBoolLiteralExprToZ3Expr((clang::CXXBoolLiteralExpr*)clangexpr);
			exprs.push_back(tmp);
			break;
		case clang::Stmt::IntegerLiteralClass:
			tmp=clangIntegerLiteralToZ3Expr((clang::IntegerLiteral*)clangexpr);
			exprs.push_back(tmp);
			break;
		case clang::Stmt::DeclRefExprClass:
            {
                std::tuple<std::string,expr,expr> z3pair = clangValueDeclToZ3Expr(((clang::DeclRefExpr*)clangexpr)->getDecl(), astF);
                if (eq(tmp,_error)){
                    exprs.clear();
                    return exprs;
                }
                expr texpr=std::get<1>(z3pair);
                if (incFlag) {
                    //for handle assignment, increase expr to expr0,expr1 etc
                    //for example, need check e<10, have path condition e<e0+loop(due to e++ in loop), e0==e1-num(due to e-=num), e1==xx
                    
                    expr newe = c.constant((texpr.to_string()+"0").c_str(),texpr.get_sort());
                   // vector<expr> newt;
                   // newt.push_back(newe);
                  //  clangExpr2Z3Expr.erase(finde);
                  //  finde++;
                  //  clangExpr2Z3Expr[clangexpr] = newt;
                }      
                exprs.push_back(std::get<2>(z3pair));          
                exprs.push_back(texpr);
                if (std::get<0>(z3pair) != "")
                    stmt2z3name[clangexpr].insert(std::get<0>(z3pair));
                //(((clang::DeclRefExpr*)clangexpr)->getDecl());
                break;
            }
		case clang::Stmt::UnaryOperatorClass:
			exprs=clangUnaryOperatorToZ3Expr((clang::UnaryOperator*)clangexpr, astF);
			break;
		case clang::Stmt::ParenExprClass:
			{
				const ParenExpr* paren = cast<ParenExpr>(clangexpr);
                exprs=clangExprToZ3Expr(paren->IgnoreParenCasts(), astF);
                pushAToB(stmt2z3name[paren->IgnoreParenCasts()],stmt2z3name[clangexpr]);
				break;
			}
		case clang::Stmt::MemberExprClass:
			{
				tmp=clangMemberExprToZ3Expr((clang::MemberExpr*)clangexpr, astF, incFlag);
                if (eq(tmp,_error)){
                    //delete exprs;                     exprs = nullptr;
                }
                else {
                    exprs.push_back(tmp);
                }
				break;
			}
		case clang::Stmt::ImplicitCastExprClass:
			{
				const CastExpr * castExpr=(const CastExpr *)clangexpr;
                exprs=clangExprToZ3Expr(castExpr->getSubExpr(),astF);
                pushAToB(stmt2z3name[castExpr->getSubExpr()],stmt2z3name[clangexpr]);
                break;
			}
        case clang::Stmt::DeclStmtClass:
            {
                //int n=m;
                //int n=x op y;
                const DeclStmt* stmt = cast<DeclStmt>(clangexpr);
                if (const VarDecl* var = dyn_cast<VarDecl>(stmt->getSingleDecl())){
                    std::tuple<std::string,expr,expr> valpair = clangValueDeclToZ3Expr(var, astF);                 
                    exprs.push_back(std::get<2>(valpair));
                    exprs.push_back(std::get<1>(valpair));
                    return exprs;
                    //expr valexpr = valpair.second;
                    // if (valexpr.is_array()){
                    //     //delete exprs;                        exprs= nullptr;
                    //     return exprs;
                    // }
                    // if (valpair.first !="")
                    //     stmt2z3name[clangexpr].insert(valpair.first);
                    // const Expr* assign = var->getInit();
                    // if (!assign){
                    //     //delete exprs;                        exprs = nullptr;
                    //     return exprs;
                    // }
                    // if (const CallExpr* call = dyn_cast<CallExpr>(assign)){
                    //     vector<expr> r = clangCallExprToZ3Expr(call, astF);
                    //     if (r.empty()) {
                    //         //delete exprs;                            exprs = nullptr;
                    //         return exprs;
                    //     }
                    //     expr assignVal = r.back();r.pop_back();
                    //     exprs.push_back(valexpr==assignVal&&r.back());
                    //     //delete r; r=nullptr;
                    //     /*
                    //     if (r.second.empty()) {
                    //         exprs.push_back(r.first);
                    //         break;
                    //     }
                    //     expr t = c.bool_val(false);
                    //     for (auto valcond: r.second) {
                    //         if (valcond.first.is_array()){
                    //             continue;
                    //         }
                    //         expr eqv = (valpair.second == valcond.first);
                    //         expr tt = eqv && valcond.second;
                    //         t = t || tt;
                    //     }
                    //     exprs.push_back(r.first&&t);*/
                    // }
                    // else {
                    //     std::vector<expr> initexprs = clangExprToZ3Expr(assign,astF);
                    //     pushAToB(stmt2z3name[assign],stmt2z3name[clangexpr]);
                    //     if (!initexprs.empty()){
                    //         expr initexpr = initexprs.back();
                    //         if (valexpr.is_int() && initexpr.is_bool()){
                    //             initexpr = ite(initexpr,c.int_val(1),c.int_val(0));
                    //         }
                    //         else if (valexpr.is_bool() && initexpr.is_int()) {
                    //             initexpr = (initexpr!=c.int_val(0));
                    //         }
                    //         if (initexpr.get_sort().sort_kind() == valexpr.get_sort().sort_kind()) {
                    //             expr texpr = valexpr==initexpr; 
                    //             exprs.push_back(texpr);
                    //         }
                    //         //delete initexprs; initexprs=nullptr;
                    //     }
                    //     else {
                    //         //delete exprs;                            exprs= nullptr;
                    //         return exprs;

                    //     }
                    // }
                }

                break;
            }
	}
    // FindContainCXXMemberCallExpr visitor;
    // visitor.TraverseStmt((Stmt*)clangexpr);     
    // if (!visitor.isContainCXXMemberCallExpr()){// dont save xx.size() or xx.resize expr
    //     clangExpr2Z3Expr.insert(std::make_pair(clangexpr,exprs));
    // }    
	return  exprs;		
}

uint64_t Z3Coding::getTypeSizeInBits(QualType qt) {
    return 64;
}

z3::expr Z3Coding::createExpr(std::string name){
    return c.constant(name.c_str(),c.int_sort());
}

expr Z3Coding::createExpr(std::string name, QualType qt, const ValueDecl* vd) {
    QualType canonicalType=qt.getTypePtr()->getCanonicalTypeInternal();
    if(canonicalType.getTypePtr()->isArrayType()){
		const clang::ArrayType * arraytype=(const clang::ArrayType *)canonicalType.getTypePtr();
		z3::sort elementSort=clangTypeToZ3Sort(arraytype->getElementType());
        z3::sort ty = c.array_sort(c.int_sort(),elementSort);
        expr z3expr=c.constant(name.c_str(),ty);
        return z3expr;
    }
	else if(canonicalType.getTypePtr()->isPointerType()){
		//we regard pointer type as array
		const clang::PointerType * pt =(const clang::PointerType *)canonicalType.getTypePtr();
		z3::sort pointeeSort=clangTypeToZ3Sort(pt->getPointeeType());
        z3::sort ty = c.array_sort(c.int_sort(),pointeeSort);
        expr z3expr = c.constant(name.c_str(),ty);
        return z3expr;
	}
    //TypeInfo info = vd->getASTContext().getTypeInfo(vd->getType());
    uint64_t size = vd->getASTContext().getTypeSize(vd->getType());
    //getTypeSizeInBits(qt);
    return c.bv_const(name.c_str(), size);
}

void Z3Coding::clear() {
    clangExpr2Z3Expr.clear();
    stmt2z3name.clear();
    varDeclToZ3Expr.clear();
    Z3ExprNameToVarDecl.clear();
    varNameCount.clear();
    VarDeclToZ3Name.clear();
    z3NameToZ3Expr.clear();
}
