#include "checkers/arraybound/CommonFunctions.h"
#include "checkers/arraybound/ClangZ3Common.h"
#include "z3++.h"

using namespace common;

//get array size of ex, which is array base, eg, ex[i], 
//each ex may have more than one alias, each alias array corresponds a pair, pair.first means array size, pair.second means the path condition when ex is alias to the array
const vector<std::pair<vector<uint64_t>,z3::expr>> getArraySize(ASTFunction* astF, CFGBlock* block, const Expr* ex,ASTManager* manager, CallGraph* call_graph, PointToAnalysis* PTA, Config* configure, int depth,ClangZ3Translator* translator){
	common::printLog( "getArraySize:"+common::print(ex)+"\n",common::CheckerName::arrayBound,1,*configure);
	vector<std::pair<vector<uint64_t>,z3::expr>> tmp;
	vector<uint64_t> tsize;
	if (!astF) return tmp;
	if (const ArraySubscriptExpr* arr = dyn_cast<ArraySubscriptExpr>(ex->IgnoreCasts()->IgnoreParens())){
        QualType qt = arr->getType ();
        if(const BuiltinType *bt = dyn_cast<BuiltinType>(qt)){
    //        const llvm::APInt & size = bt->getSize();
      //      uint64_t v = size.getLimitedValue();           
            tsize.push_back(32);
			tmp.push_back(std::make_pair(tsize,translator->zc->TRUE));
            return tmp;
        }
    }
    else{
        if (const UnaryOperator* uo = dyn_cast<UnaryOperator>(ex->IgnoreCasts()->IgnoreParens())){
            if (uo->getOpcode()== UO_AddrOf){
                return getArraySize(astF, block, uo->getSubExpr(),manager,call_graph,PTA,configure,depth,translator);  
            }
            return tmp;
        }
        VarDecl* varDecl = nullptr;
		if(const DeclRefExpr* declRef = dyn_cast<DeclRefExpr>(ex->IgnoreCasts()->IgnoreParens())){
			varDecl = (VarDecl*)(declRef->getDecl());				
		}
		else if(const MemberExpr *mem = dyn_cast<MemberExpr>(ex->IgnoreCasts()->IgnoreParens())){
			varDecl = (VarDecl*)(mem->getMemberDecl());					
		}		
		if (!varDecl) return tmp;
		FunctionDecl* f = manager->getFunctionDecl(astF);
		QualType qt = varDecl->getType ();
		//deal with a[][][]to get array size    
		while(const ConstantArrayType *CAT = dyn_cast<ConstantArrayType>(qt)){
			qt=CAT->getElementType();
			const llvm::APInt & size = CAT->getSize();
			uint64_t v = size.getLimitedValue();
			tsize.push_back(v);
		}
		if (tsize.size()>0) {
			tmp.push_back(std::make_pair(tsize,translator->zc->TRUE));
			return tmp; 
		}
					
		//varDecl->dump();
		// f->getParamDecl(0)->dump();
		if (clang::ParmVarDecl* parm = dyn_cast<ParmVarDecl>(varDecl)){
			//array is pointer, and is parameter of func, get real array in caller
			if (depth == 1) return tmp;
			unsigned paramIdx = 0;
			for (unsigned i=0;i<f->getNumParams();i++){
				ParmVarDecl* p = f->getParamDecl(i);
				if (p == parm) {
					paramIdx = i;
					break; 
				}
			}
			return getArraySize(astF, paramIdx,manager,call_graph,PTA,configure,depth,translator);  
		}

		std::unordered_map<std::string, std::string> ptrConfig = configure->getOptionBlock("ArrayBound");
		if(ptrConfig.find("PointToAnalysis") != ptrConfig.end() && ptrConfig.find("PointToAnalysis")->second == "false"){
			//try find q=p; char p[10], or char* q=p;
			if (!block) {
				return tmp;
			}
			std::unordered_set<CFGBlock*> handledblock;
			vector<std::tuple<const DeclRefExpr*,CFGBlock*,z3::expr>> refblockvec = getAlias(astF, block, varDecl,manager,call_graph,PTA,configure,depth,handledblock,translator);  
			for(auto refblock:refblockvec)  {
				vector<std::pair<vector<uint64_t>,z3::expr>> r1 = getArraySize(astF, std::get<1>(refblock),std::get<0>(refblock),  manager,call_graph,PTA,configure,depth,translator);  
				pushAToB(r1,tmp);
			}
			return tmp;
		}
		int AliasMaxPathLength = stoi(ptrConfig.find("AliasMaxPathLength")->second);
		int AliasMaxPathNumber = stoi(ptrConfig.find("AliasMaxPathNumber")->second);	
		std::string vStr = PTA->getPTAVarKey(varDecl);
		const PTAVar* vPTA = PTA->getPTAVar(vStr);
		if (!vPTA) return tmp;
		std::set<const PTAVar *> aliasSet = PTA->get_alias_in_func(astF,vPTA,AliasMaxPathLength,AliasMaxPathNumber);
		//std::set<const PTAVar *> aliasSet = PTA->get_pointee_at_point(block, elem_id, vPTA);
		if (aliasSet.empty()) {
			//try find q=p; char p[10], or char* q=p;
			if (!block) {
				return tmp;
			}
			std::unordered_set<CFGBlock*> handledblock;
			vector<std::tuple<const DeclRefExpr*,CFGBlock*,z3::expr>> refblockvec = getAlias(astF, block, varDecl,manager,call_graph,PTA,configure,depth,handledblock,translator);  
			for(auto refblock:refblockvec)  {
				vector<std::pair<vector<uint64_t>,z3::expr>> r1 = getArraySize(astF, std::get<1>(refblock),std::get<0>(refblock),  manager,call_graph,PTA,configure,depth,translator);  
				pushAToB(r1,tmp);
			}
			return tmp;
		}
		for (auto aliasVar : aliasSet) {
			std::string aliasStr = aliasVar->get_instance_var_key();
			common::printLog( "aliasStr:"+aliasStr+"\n",common::CheckerName::arrayBound,1,*configure);
			///home/gfj/ESAF/tests/Arraybound/InterCheck/example.cpp:5:28:t
			int firstColonInBegin = aliasStr.find(":");
			std::string fileName = aliasStr.substr(0,firstColonInBegin);
			//cout<<fileName<<endl;
			int secondColonInBegin = aliasStr.find(":", firstColonInBegin + 1);
			std::string locLinesInBegin = aliasStr.substr(firstColonInBegin + 1, secondColonInBegin - firstColonInBegin - 1);
			int line = std::stoi(locLinesInBegin);
			Stmt* aliasStmt = manager->getStmtWithLoc(fileName,line);//cannot get stmt at function parameter line
            if (aliasStmt) {
                //aliasStmt->dump();
                CFGBlock* aliasBlock = manager->getBlockWithLoc(fileName,line);
                if (!aliasBlock) continue;
                   // aliasBlock->dump();
				std::vector<Stmt*> aliasStmts = manager->getStmtWithLoc(line,aliasBlock);//cannot get block at function parameter line
                for(auto as : aliasStmts) {
					if (!as) continue;
					if (DeclStmt* decl = dyn_cast<DeclStmt>(as)) {
						if (const VarDecl* var = dyn_cast<VarDecl>(decl->getSingleDecl())){
							const Expr* assign = var->getInit();
							if (!assign){
								continue;
							}
							if (const CallExpr* call = dyn_cast<CallExpr>(assign)){		
								//extension: dynamic array, malloc
								continue;
							}
							//vector<uint64_t> tmp;
							QualType qt = var->getType ();
							//deal with a[][][]to get array size    
							while(const ConstantArrayType *CAT = dyn_cast<ConstantArrayType>(qt)){
								qt=CAT->getElementType();
								const llvm::APInt & size = CAT->getSize();
								uint64_t v = size.getLimitedValue();
								tsize.push_back(v);
							}
							if (tsize.size()>0) {
								tmp.push_back(std::make_pair(tsize,translator->zc->TRUE));
								return tmp; 
							}							
						}				
					}
					
                } 
            }
            else {
                //parameter?
                std::string paraName = aliasStr.substr(aliasStr.find_last_of(":"));
                std::string paraLoc = aliasStr.substr(0,aliasStr.find_last_of(":"));
                //cout<<"paraName:"<<paraName<<", paraloc:"<<paraLoc<<endl;
                SourceManager *sm;
                sm = &(f->getASTContext().getSourceManager()); 
                std::string floc = f->getBeginLoc().printToString(*sm);	
				if (floc == "<invalid>") return tmp;
                //cout<<"f loc:"<<floc<<endl;
                if (floc.substr(0,floc.find_last_of(":")) == fileName+":"+locLinesInBegin) {
                    unsigned paramIdx = 0;
                    for (unsigned i=0;i<f->getNumParams();i++){
                        ParmVarDecl* p = f->getParamDecl(i);
                        std::string ploc = p->getBeginLoc().printToString(*sm);
                        if (ploc == paraLoc) {
                            paramIdx = i;
                            //p->dump();
							break;
                        }
                    }
					if (depth == 1) return tmp;
					return getArraySize(astF, paramIdx,manager,call_graph,PTA,configure,depth,translator);  
                }
            }			
		}
    }
	return tmp;
}

//get alias by backward traversing cfg, focus on assignment and declstmt
vector<std::tuple<const DeclRefExpr*,CFGBlock*,z3::expr>> getAlias(ASTFunction* astF, CFGBlock* block, VarDecl* ex, ASTManager* manager, CallGraph* call_graph, PointToAnalysis* PTA, Config* configure, int depth,std::unordered_set<CFGBlock*>& handledblock,ClangZ3Translator* translator){
	//ex->dump();
	//cout<<"block:"<<endl;
	//block->dump();
	vector<std::tuple<const DeclRefExpr*,CFGBlock*,z3::expr>> rtmp;
	auto findb = handledblock.find(block);
	if (findb != handledblock.end()) return rtmp;
	handledblock.insert(block);
	for(CFGBlock::iterator iter=block->begin();iter!=block->end();iter++) {
		CFGElement element=*(iter);
		if(element.getKind()==CFGElement::Kind::Statement) {
			const Stmt* it=((CFGStmt*)&element)->getStmt();
			if (const BinaryOperator *bo = dyn_cast<BinaryOperator>(it)) {
				if (bo->getOpcode() == clang::BinaryOperatorKind::BO_Assign) {
					Expr* lhs = bo->getLHS()->IgnoreCasts()->IgnoreParens();
					if (DeclRefExpr* ldecl = dyn_cast<DeclRefExpr>(lhs)) {
						VarDecl* lvarDecl = (VarDecl*)(ldecl->getDecl());	
						if (lvarDecl != ex) continue;
					}
					else continue;
					Expr* rhs = bo->getRHS()->IgnoreCasts()->IgnoreParens();
					if (DeclRefExpr* rdecl = dyn_cast<DeclRefExpr>(rhs)) {
						rtmp.push_back(std::make_tuple(rdecl, block,translator->zc->TRUE));
					}
				}
			}
			if(const DeclStmt *declstmt = dyn_cast<DeclStmt>(it)) {		
				if(const VarDecl* var = dyn_cast<VarDecl>(declstmt->getSingleDecl())) {
					if (var != ex) continue;
					const Expr* assign = var->getInit();
					if (!assign) continue;
					if (const DeclRefExpr* decl = dyn_cast<DeclRefExpr>(assign)) {
						//return std::make_pair(decl, block);
						rtmp.push_back(std::make_tuple(decl, block,translator->zc->TRUE));
					}
					else if (const CallExpr* call = dyn_cast<CallExpr>(assign)) {
						//eg test4: Student *item = GetItem(index);

					}
				}
			}
		}
	}
	for(CFGBlock::pred_iterator pred_iter=block->pred_begin();pred_iter!=block->pred_end();++pred_iter){
		CFGBlock *pred=*pred_iter;
		if(pred==NULL)continue;	
		//cout<<"pred:"<<endl;
		//pred->dump();
		handledblock.insert(pred);
		vector<std::tuple<const DeclRefExpr*,CFGBlock*,z3::expr>> pair1 = getAlias(astF, pred, ex,manager,call_graph,PTA,configure,depth,handledblock,translator);  
		//if (pair1.first!=nullptr) return pair1;
		if (!pair1.empty()){
			pushAToB(pair1,rtmp);
		} 
	}
	return rtmp;
}

const vector<std::pair<vector<uint64_t>,z3::expr>> getArraySize(ASTFunction* astF, unsigned paramIdx, ASTManager* manager, CallGraph* call_graph, PointToAnalysis* PTA, Config* configure, int depth,ClangZ3Translator* translator){
    vector<std::pair<vector<uint64_t>,z3::expr>> tmp;
	vector<uint64_t> ttmp;
    if (!astF || depth == 1)
        return tmp;
	FunctionDecl* f = manager->getFunctionDecl(astF);		
	CallInfo parents=call_graph->getParentsWithCallsite(astF);
	if ( parents.size() == 0 ) {
		if (f->getName() == "main"){
		}
		return tmp;
	}
	else {
		for(auto father : parents) {
			FunctionDecl* fatherdecl = manager->getFunctionDecl(father.first);
			Stmt* callsite = common::getStmtInFunctionWithID(fatherdecl, father.second);
			if (!callsite) 
				continue;
			if (CallExpr* call = dyn_cast<CallExpr>(callsite)){
				Expr* realArg = call->getArg(paramIdx);
				SourceManager *sm;
				sm = &(fatherdecl->getASTContext().getSourceManager()); 
				std::string realArgLoc = realArg->getBeginLoc().printToString(*sm);	
				if (realArgLoc == "<invalid>") continue;				
				int firstColonInBegin = realArgLoc.find(":");
				std::string realArgfileName = realArgLoc.substr(0,firstColonInBegin);
				int secondColonInBegin = realArgLoc.find(":", firstColonInBegin + 1);
				std::string locLinesInBegin = realArgLoc.substr(firstColonInBegin + 1, secondColonInBegin - firstColonInBegin - 1);
				int realArgline = std::stoi(locLinesInBegin);
				CFGBlock* realArgBlock = manager->getBlockWithLoc(realArgfileName,realArgline);							
                common::printLog( "find alias in caller at:"+realArgfileName+":"+int2string(realArgline)+"\n",common::CheckerName::arrayBound,1,*configure);
				//realArgBlock->dump();
                const vector<std::pair<vector<uint64_t>,z3::expr>> atmp = getArraySize(father.first, realArgBlock, realArg, manager,call_graph,PTA,configure,depth-1,translator);
				if (!atmp.empty()) return atmp;
			}
		}
	}
    return tmp; 
}
/*
std::string print(Stmt* stmt)
{
	LangOptions L0;
	L0.CPlusPlus=1;
	std::string buffer1;
	llvm::raw_string_ostream strout1(buffer1);
	stmt->printPretty(strout1,nullptr,PrintingPolicy(L0));
	return ""+strout1.str()+"";
}
*/
std::string print(const std::vector<uint64_t>& v){
    std::string s="";
    for (auto vv : v){
        s += (int2string(vv)+ " ");
    }
    return s;
}

bool equal(AtomicAPInt& l,AtomicAPInt& r)
{
		if(l.op==r.op&&common::print(l.lhs)==common::print(r.lhs)&&l.rhs==r.rhs)return true;
		else
			return false;
}

bool equal(vector<AtomicAPInt>& l,vector<AtomicAPInt>& r)
{
	if(l.size()!=r.size())return false;
	for (unsigned i = 0; i < l.size(); ++i)
	{
		bool flag=false;
		for (unsigned j = 0; j < r.size(); ++j)
		{
			/* code */
			if(equal(l[i],r[j]))
			{
				flag=true;
				break;
			}
		}
		if(!flag)return false;
	}
	return true;
}

bool equal(ArraySubscript& l,ArraySubscript& r)
{
	if(l.func==r.func&&l.block==r.block&&l.stmt==r.stmt&&l.index==r.index&&equal(l.condition,r.condition)&&\
		l.location==r.location&&l.ID==r.ID&&l.isLoopBoundChecking==r.isLoopBoundChecking&&l.indexCnt==r.indexCnt&&l.arrayName==r.arrayName&&l.arrayExpr==r.arrayExpr)return true;
		else
			return false;
}
void dump(std::string s) {
    std::cout<<s<<std::endl;
}


void pushAToB(std::unordered_set<std::string> &A,std::unordered_set<std::string> &B){
    for(auto it=A.begin();it != A.end(); it++){
        B.insert(*it);
    }
}

template <typename T1,typename T2> 
void pushAToB(T1 &A,T2 &B){
    for(auto it=A.begin();it != A.end(); it++){
        B.push_back(*it);
    }
}

// void pushAToB(vector<std::vector<std::string>> &A,vector<std::vector<std::string>> &B){
//     for(auto it=A.begin();it != A.end(); it++){
//         B.push_back(*it);
//     }
// }
void pushAToB(vector<ArraySubscript>& A,vector<ArraySubscript> &B){
    for(auto it=A.begin();it != A.end(); it++){
        B.push_back(*it);
    }
}

// void pushAToB(vector<std::pair<const DeclRefExpr*,CFGBlock*>,z3::expr>& A,vector<std::pair<const DeclRefExpr*,CFGBlock*>,z3::expr> &B) {
//     for(auto it=A.begin();it != A.end(); it++){
//         B.push_back(*it);
//     }
// }

//0 means only both isUpBoundChecked/isUnsignedChecked of as and ass.second is true,will merge to true
//1 means either isUpBoundChecked/isUnsignedChecked of as and ass.second is true,will merge to true
ArraySubscript merge(ArraySubscript& l, ArraySubscript& r, bool SolvePathConstraint, bool bothOrEither) {
    if (SolvePathConstraint) {
        ArraySubscript rr(l);
        rr.condition.clear();
		if (bothOrEither == 0) {
			if (l.isUpBoundChecked==true && r.isUpBoundChecked==false) {
				rr.isUpBoundChecked = false;
				rr.pathConstraintStmtList = r.pathConstraintStmtList;
				rr.pathConstraint = r.pathConstraint;
				rr.condition.push_back(r.condition[0]);
				pushAToB(r.callStack,rr.callStack);
			} 
			if (l.isUnsignedChecked==true &&  r.isUnsignedChecked==false){
				rr.isUnsignedChecked = false;
				rr.condition.push_back(r.condition[1]);
				pushAToB(r.callStack,rr.callStack);
				
			}
		}
		else {
			if (l.isUpBoundChecked==true  && l.isUnsignedChecked==true) {
				return l;			
			}
			if (r.isUpBoundChecked==true  && r.isUnsignedChecked==true) {
				return r;
			}
			if (l.isUpBoundChecked==true) {
				rr=l;
				if ( r.isUnsignedChecked==true) {
					rr.isUnsignedChecked = true;
				}
				return rr;
			} 
			if (r.isUpBoundChecked==true) {
				rr=r;
				if ( l.isUnsignedChecked==true) {
					rr.isUnsignedChecked = true;
				}
				return rr;
			} 			
		}
        return rr;
    }
    else {
        if (l.condition.size() > r.condition.size())
            return l;
        else if (l.condition.size() < r.condition.size())
            return r;
        else {
            if (equal(l.condition, r.condition)) {
                return l;
            }
            else {
                ArraySubscript rr(l);
                rr.condition.push_back(r.condition[0]);
                pushAToB(r.callStack,rr.callStack);
                return rr;
            }
        }

    }
}

vector<Expr*> Intersection(vector<Expr*>& l,vector<Expr*>& s)
{
	vector<Expr*> r;
	for(unsigned i=0;i<l.size();i++)
		for(unsigned j=0;j<s.size();j++)
			if(common::print(l[i])==common::print(s[j]))
				r.push_back(l[i]);
	return r;
}

vector<Expr*> Union(vector<Expr*>& l,vector<Expr*>& s)
{
	vector<Expr*> r;
	for(unsigned i=0;i<l.size();i++)	r.push_back(l[i]);
	
	for(unsigned i=0;i<s.size();i++)	
	{
		if(find(r.begin(),r.end(),s[i])==r.end())
		r.push_back(s[i]);
	}
	return r;
}

vector<ArraySubscript> Union(vector<ArraySubscript>& l,vector<ArraySubscript>& s)
{
	vector<ArraySubscript> r;
	for(unsigned i=0;i<l.size();i++)	r.push_back(l[i]);
	
	for(unsigned i=0;i<s.size();i++)	
	{
		bool flag=false;
		for(unsigned j=0;j<r.size();j++)
		{
			if(equal(r[j],s[i]))//s[i]
			{
				flag=true;
				break;
			}
		}
		if(!flag)
		r.push_back(s[i]);
	}
	return r;
}

vector<ArraySubscript> Intersection(vector<ArraySubscript>& l,vector<ArraySubscript>& s)
{
	vector<ArraySubscript> r;
	for(unsigned i=0;i<l.size();i++)	
	{
		bool flag=false;
		for(unsigned j=0;j<s.size();j++)
		{
			if(equal(s[j],l[i]))//s[i]
			{
				flag=true;
				break;
			}
		}
		if(!flag)
			r.push_back(l[i]);
	}
	return r;
}

bool isEqual(vector<Expr*>& l,vector<Expr*>& r)
{
	if(l.size()!=r.size())return false;
	for(unsigned i=0;i<l.size();i++)
	{
		bool flag=false;
		for(unsigned j=0;j<r.size();j++)
		{
			if(print(l[i])==print(r[j]))
			{
				flag=true;
				break;
			}
		}
		if(!flag)
		{
			return false;
		}
	}
	return true;
}

void analyseIndex(Expr* index,vector<PNode>& list)
{
	if(BinaryOperator* id = dyn_cast<BinaryOperator>(index) )
	{
		if(id->getOpcode()== clang::BinaryOperatorKind::BO_Add)
		{
			analyseIndex(id->getLHS(),list);
			analyseIndex(id->getRHS(),list);
		}
		else if(id->getOpcode()== clang::BinaryOperatorKind::BO_Sub)
		{
			analyseIndex(id->getLHS(),list);
			vector<PNode> tmp;
			analyseIndex(id->getRHS(),tmp);	
			for(PNode tt : tmp)
			{
				tt.terms=-tt.terms;
				list.push_back(tt);
			}
		}
		else if(id->getOpcode()== clang::BinaryOperatorKind::BO_Mul)
		{
			//lhs
			if(IntegerLiteral *ILE = dyn_cast<IntegerLiteral>(id->getLHS())) 
			{
				uint64_t value=ILE->getValue().getLimitedValue();
				if(value!=0)
				{
					PNode n(print(id->getRHS()),static_cast<double>(value));
					list.push_back(n);
				}
				
				return;
			}
			else if(FloatingLiteral *ILE = dyn_cast<FloatingLiteral>(id->getLHS()))//-ImplicitCastExpr
			{
				double value=ILE->getValue().convertToDouble();
				if(value!=0)
				{
					PNode n(print(id->getRHS()),value);
					list.push_back(n);
				}
				return;
			}
			else if(IntegerLiteral *ILE = dyn_cast<IntegerLiteral>(id->getRHS())) 
			{
				uint64_t value=ILE->getValue().getLimitedValue();
				if(value!=0)
				{
					PNode n(print(id->getLHS()),static_cast<double>(value));
					list.push_back(n);
				}
				return;
			}
			else if(FloatingLiteral *ILE = dyn_cast<FloatingLiteral>(id->getRHS()))//-ImplicitCastExpr
			{
				double value=ILE->getValue().convertToDouble();
				if(value!=0)
				{
					PNode n(print(id->getLHS()),value);
					list.push_back(n);
				}
				return;
			}
			else
			{
				PNode n(print(index),1.0);
				list.push_back(n);
			}
		}
		else
		{
			PNode n(print(index),1.0);
			list.push_back(n);
		}
	}
	else
	{
		PNode n(print(index),1.0);
		list.push_back(n);
	}
}

void analyseStmt(Expr* g,Expr* l,vector<PNode>& list)
{
	//
	analyseIndex(g,list);
	vector<PNode> tmp;
	analyseIndex(l,tmp);	
	for(PNode tt : tmp)
	{
		tt.terms=-tt.terms;
		list.push_back(tt);
	}
}

bool isNum(string s)
{
	stringstream sin(s);
	double t;
	char p;
	if(!(sin>>t))
		return false;
	if(sin>>p)
		return false;
	else
		return true;
}

double str2num(string s)
{
	 stringstream ss;
	 ss<<s;

	 double i;
	 ss>>i;
	 return i;
}

bool checkComposedExpr(BinaryOperator* it,vector<PNode>& list,ArraySubscript input,AtomicAPInt con,bool flag)
{
	//////cerr<<"**************************************************"<<endl;
	//		////cerr<<print(input.index)<<endl;
	//		////cerr<<print(it)<<endl;

	std::vector<PNode> tmp;
	if(it->getOpcode()==clang::BinaryOperatorKind::BO_LT||it->getOpcode()==clang::BinaryOperatorKind::BO_LE)
	{
		analyseStmt(it->getRHS(),it->getLHS(),tmp);
	}
	else if(it->getOpcode()==clang::BinaryOperatorKind::BO_GT||it->getOpcode()==clang::BinaryOperatorKind::BO_GE)
	{
		analyseStmt(it->getLHS(),it->getRHS(),tmp);
	}
	//////cerr<<"analyse stmt"<<endl;
	//////cerr<<print(it)<<endl;
	if(con.op==clang::BinaryOperatorKind::BO_LT)
	{
		//////cerr<<"lt size"<<endl;
		if(flag)
		{
			double val=0.0;
			for(PNode node : list)
			{
				for(unsigned i=0;i<tmp.size();i++)
				{
					
					PNode c=tmp[i];
					//////cerr<<"compare "<<node.name<<"    "<<c.name<<endl;
					// Terms t1(node.name);
					// Terms t2(c.name);
					// t1.print();
					// t2.print();
					//if(t1.isEqual(t2))
					if(node.name==c.name)
					{
						//////cerr<<"find"<<endl;
						if(val==0.0)
							val=-1*c.terms/node.terms;
						if(c.terms!=-1*node.terms*val)return false;
						tmp.erase(tmp.begin()+i);
						break;
					}
				}
			}
			//////cerr<<"finish sub"<<endl;
			if(tmp.size()==0)return false;
			double tmp_val=0.0;
			for(PNode c : tmp)
			{
				if(!isNum(c.name))
				{
					return false;
				}
				else
				{
					tmp_val+=c.terms*str2num(c.name);
				}
			}
			uint64_t value = con.rhs;

			//////cerr<<tmp_val<<"  "<<value<<endl;
			if(tmp_val<=value)return true;
			else return false;
		}
		else
		{
			double val=0.0;
			for(PNode node : list)
			{
				for(unsigned i=0;i<tmp.size();i++)
				{
					
					PNode c=tmp[i];
					//////cerr<<"compare "<<node.name<<"    "<<c.name<<endl;
					// Terms t1(node.name);
					// Terms t2(c.name);
					// if(t1.isEqual(t2))
					if(node.name==c.name)
					{
						if(val==0.0)
							val=c.terms/node.terms;
						if(c.terms!=node.terms*val)return false;
						tmp.erase(tmp.begin()+i);
						break;
					}
				}
			}
			//////cerr<<"finish sub"<<endl;
			if(tmp.size()==0)return false;
			double tmp_val=0.0;
			for(PNode c : tmp)
			{
				if(!isNum(c.name))
				{
					return false;
				}
				else
				{
					tmp_val+=-1*c.terms*str2num(c.name);
				}
			}
			uint64_t value = con.rhs;
			if(tmp_val<=value)return true;
			else return false;
		}
	}
	else if(con.op==clang::BinaryOperatorKind::BO_GE)
	{
		//////cerr<<"gt 0"<<endl;
		if(flag)
		{
			double val=0.0;
			for(PNode node : list)
			{
				for(unsigned i=0;i<tmp.size();i++)
				{
					
					PNode c=tmp[i];
					//////cerr<<"compare "<<node.name<<"    "<<c.name<<endl;
					// Terms t1(node.name);
					// Terms t2(c.name);
					// if(t1.isEqual(t2))
					if(node.name==c.name)
					{
						if(val==0.0)
							val=c.terms/node.terms;
						if(c.terms!=node.terms*val)return false;
						tmp.erase(tmp.begin()+i);
						break;
					}
				}
			}
			//////cerr<<"finish sub"<<endl;
			if(tmp.size()==0)return true;
			double tmp_val=0.0;
			for(PNode c : tmp)
			{
				if(!isNum(c.name))
				{
					return false;
				}
				else
				{
					tmp_val+=c.terms*str2num(c.name);
				}
			}
			if(tmp_val<=0)return true;
			else return false;
		}
		else
		{
			double val=0.0;
			for(PNode node : list)
			{
				for(unsigned i=0;i<tmp.size();i++)
				{
					
					PNode c=tmp[i];
					//////cerr<<"compare "<<node.name<<"    "<<c.name<<endl;
					// Terms t1(node.name);
					// Terms t2(c.name);
					// if(t1.isEqual(t2))
					if(node.name==c.name)
					{
						if(val==0.0)
							val=-1*c.terms/node.terms;
						if(c.terms!=-1*node.terms*val)return false;
						tmp.erase(tmp.begin()+i);
						break;
					}
				}
			}
			//////cerr<<"finish sub"<<endl;
			if(tmp.size()==0)return true;
			double tmp_val=0.0;
			for(PNode c : tmp)
			{
				if(!isNum(c.name))
				{
					return false;
				}
				else
				{
					tmp_val+=c.terms*str2num(c.name);
				}
			}
			//uint64_t value = con.rhs;

			//////cerr<<tmp_val<<"  "<<value<<endl;
			if(tmp_val<=0)return true;
			else return false;
		}
	}
	return false;
}

map<bool, int> calculateExpr(Expr* e){
	map<bool, int> result;
	if(e == NULL){
		result.insert(make_pair(false, -1));
		return result;
	}
	if(ParenExpr* pa_expr = dyn_cast<ParenExpr>(e)){
		Expr* sub_expr = pa_expr->getSubExpr();
		if(sub_expr == NULL){
			result.insert(make_pair(false, -1));
			return result;
		}else{
			return calculateExpr(sub_expr);
		}
	}else if(BinaryOperator* bo_expr = dyn_cast<BinaryOperator>(e)){
		Expr* lhs = bo_expr->getLHS();
		Expr* rhs = bo_expr->getRHS();
		if(lhs == NULL || rhs == NULL){
			result.insert(make_pair(false, -1));
			return result;
		}else{
			auto l_result = calculateExpr(lhs);
			auto r_result = calculateExpr(rhs);
			if(l_result.find(false) != l_result.end() || r_result.find(false) != r_result.end()){
				result.insert(make_pair(false, -1));
				return result;
			}else{
				BinaryOperatorKind op = bo_expr->getOpcode();
				if(op == BinaryOperatorKind::BO_Assign){
					return r_result;
				}else if(op == BinaryOperatorKind::BO_Add || op == BinaryOperatorKind::BO_AddAssign){
					result.insert(make_pair(true, l_result[true]+r_result[true]));
					return result;
				}else if(op == BinaryOperatorKind::BO_And || op == BinaryOperatorKind::BO_AndAssign){
					result.insert(make_pair(true, l_result[true]&r_result[true]));
					return result;
				}else if(op == BinaryOperatorKind::BO_Div || op == BinaryOperatorKind::BO_DivAssign){
					result.insert(make_pair(true, l_result[true]/r_result[true]));
					return result;
				}else if(op == BinaryOperatorKind::BO_Mul || op == BinaryOperatorKind::BO_MulAssign){
					result.insert(make_pair(true, l_result[true]*r_result[true]));
					return result;
				}else if(op == BinaryOperatorKind::BO_Or || op == BinaryOperatorKind::BO_OrAssign){
					result.insert(make_pair(true, l_result[true]|r_result[true]));
					return result;
				}else if(op == BinaryOperatorKind::BO_Rem || op == BinaryOperatorKind::BO_RemAssign){
					result.insert(make_pair(true, l_result[true]%r_result[true]));
					return result;
				}else if(op == BinaryOperatorKind::BO_Shl || op == BinaryOperatorKind::BO_ShlAssign){
					result.insert(make_pair(true, l_result[true]<<r_result[true]));
					return result;
				}else if(op == BinaryOperatorKind::BO_Shr || op == BinaryOperatorKind::BO_ShrAssign){
					result.insert(make_pair(true, l_result[true]>>r_result[true]));
					return result;
				}else if(op == BinaryOperatorKind::BO_Sub || op == BinaryOperatorKind::BO_SubAssign){
					result.insert(make_pair(true, l_result[true]-r_result[true]));
					return result;
				}else if(op == BinaryOperatorKind::BO_Xor || op == BinaryOperatorKind::BO_XorAssign){
					result.insert(make_pair(true, l_result[true]^r_result[true]));
					return result;
				}else{
					result.insert(make_pair(false, -1));
					return result;
				}
			}
		}
	}else if(IntegerLiteral* IL_expr = dyn_cast<IntegerLiteral>(e)){
		int value = IL_expr->getValue().getSExtValue();
		result.insert(make_pair(true, value));
		return result;
	}else if(ImplicitCastExpr* ICE_expr = dyn_cast<ImplicitCastExpr>(e)){
		Expr* sub_expr = ICE_expr->getSubExpr();
		auto val = calculateExpr(sub_expr);
		if(val.find(false) == val.end()){
			result.insert(make_pair(true, val[true]));
			return result;
		}else{
			result.insert(make_pair(false, -1));
			return result;
		}
		
	}else if(UnaryOperator* uo_expr = dyn_cast<UnaryOperator>(e)){
		Expr* sub_expr = uo_expr->getSubExpr();
		//sub_expr->dump();
		if(sub_expr != NULL && uo_expr->getOpcode() == UnaryOperatorKind::UO_Minus){
			auto val = calculateExpr(sub_expr);
			if(val.find(false) != val.end()){
				result.insert(make_pair(false, -1));
				return result;
			}else{
				result.insert(make_pair(true, -val[true]));
				return result;
			}
		}else{
			result.insert(make_pair(false, -1));
			return result;
		}
	}else{
		result.insert(make_pair(false, -1));
		return result;
	}
}






bool isEuql(vector<ArraySubscript>& l,vector<ArraySubscript>& r)
{
	if(l.size()!=r.size())return false;
	for (unsigned i = 0; i < l.size(); ++i)
	{
		bool flag=false;
		for (unsigned j = 0; j < r.size(); ++j)
		{
			/* code */
			if(equal(l[i],r[j]))
			{
				flag=true;
				break;
			}
		}
		if(!flag)return false;
	}
	return true;
}


bool isEqual( vector<pair<CFGBlock*,vector<Expr*> > >& l, vector<pair<CFGBlock*,vector<Expr*> > >& r)
{
	if(l.size()!=r.size())return false;
	for(unsigned i=0;i<l.size();i++)
	{
		for(unsigned j=0;j<r.size();j++)
		{
			if(l[i].first==r[j].first)
			{
				vector<Expr*> left=l[i].second;
				vector<Expr*> right=r[j].second;
				if(!isEqual(left,right))return false;
				break;
			}
		}
	}
	return true;
}


//template <typename T> std::string int2string(const T& i){
//	std::ostringstream oss;
//	oss<<i;
//	return oss.str();
//}

string getInfo(const Expr* expr)
{	
	LangOptions L0;
	L0.CPlusPlus=1;
	std::string buffer1;
	llvm::raw_string_ostream strout1(buffer1);
	expr->printPretty(strout1,nullptr,PrintingPolicy(L0));
	return ""+strout1.str()+"";
}

string getInfo(const VarDecl* expr) 
{	
	return expr->getNameAsString();
}

string getInfo(uint64_t expr)
{				
	string result=int2string(expr);
	return result;
}

string getInfo(AtomicAPInt expr)
{
	string result="";
	int op=expr.op;
		switch(op)
		{
            case clang::BO_LT://LT
			{
			result=getInfo(expr.getLHS())+" < "+getInfo(expr.getRHS());
			break;
			}
            case clang::BO_GT://GT
			{
			result=getInfo(expr.getLHS())+" > "+getInfo(expr.getRHS());
			break;
			}
            case clang::BO_LE://LE
			{
				result=getInfo(expr.getLHS())+" <= "+getInfo(expr.getRHS());
			break;
			}
            case clang::BO_GE://GE
			{
				result=getInfo(expr.getLHS())+" >= "+getInfo(expr.getRHS());
			break;
			}
            case clang::BO_EQ://EQ
			{
				result=getInfo(expr.getLHS())+" == "+getInfo(expr.getRHS());
			break;
			}
            case clang::BO_NE://NE
			{
				result=getInfo(expr.getLHS())+" != "+getInfo(expr.getRHS());
			break;
			}
		}
	return result;
}
