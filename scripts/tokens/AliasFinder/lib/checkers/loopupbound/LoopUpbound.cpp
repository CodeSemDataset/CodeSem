#include <checkers/loopupbound/LoopUpbound.h>
#include "clang/AST/ParentMapContext.h"
template <class T>
string getStringOfExpr(T expr) // 工具函数，获取表达式字符串
{
    LangOptions L0;
    L0.CPlusPlus = 1;
    std::string buffer1;
    llvm::raw_string_ostream strout1(buffer1);
    expr->printPretty(strout1, nullptr, PrintingPolicy(L0));
    return strout1.str();
}
clang::Expr *remove_cast(clang::Expr *expr)
{
    if (clang::ParenExpr *paren_expr = llvm::dyn_cast<clang::ParenExpr>(expr))
    {
        return remove_cast(paren_expr->getSubExpr());
    }
    else if (expr->getStmtClass() >= clang::Stmt::firstCastExprConstant &&
             expr->getStmtClass() <= clang::Stmt::lastCastExprConstant)
    {
        return remove_cast(llvm::cast<clang::CastExpr>(expr)->getSubExpr());
    }
    else if (MaterializeTemporaryExpr *temporary_expr = llvm::dyn_cast<MaterializeTemporaryExpr>(expr))
    {
        return remove_cast(temporary_expr->getSubExpr());
    }
    else if (ExprWithCleanups *expr_with_cleanup = llvm::dyn_cast<ExprWithCleanups>(expr))
    {
        return remove_cast(expr_with_cleanup->getSubExpr());
    }
    return expr;
}
bool is_equal(Expr *expr_1, Expr *expr_2)
{
    if (expr_1 == nullptr || expr_2 == nullptr)
        return false;
    if (DeclRefExpr *decl_ref1 = llvm::dyn_cast<DeclRefExpr>(remove_cast(expr_1)))
    {
        if (DeclRefExpr *decl_ref2 = llvm::dyn_cast<DeclRefExpr>(remove_cast(expr_2)))
        {
            return decl_ref1->getDecl() == decl_ref2->getDecl();
        }
    }
    else if (IntegerLiteral *int_expr1 = llvm::dyn_cast<IntegerLiteral>(expr_1))
    {
        if (IntegerLiteral *int_expr2 = llvm::dyn_cast<IntegerLiteral>(expr_2))
        {
            return int_expr1->getValue().getLimitedValue() == int_expr2->getValue().getLimitedValue();
        }
    }
    else if (CharacterLiteral *char_expr1 = llvm::dyn_cast<CharacterLiteral>(expr_1))
    {
        if (CharacterLiteral *char_expr2 = llvm::dyn_cast<CharacterLiteral>(expr_2))
        {
            return char_expr1->getValue() == char_expr2->getValue();
        }
    }
    return false;
}

clang::Stmt *is_inif(clang::Stmt *stmt, clang::ASTContext &ctx)
{ // 判断stmt是否在if语句中
    if (!stmt)
        return nullptr;
    auto it = ctx.getParents(*stmt).begin();
    if (it == ctx.getParents(*stmt).end())
        return nullptr;
    clang::Stmt *parent = const_cast<clang::Stmt *>(it->get<clang::Stmt>());
    if (parent && parent->getStmtClass() == Stmt::IfStmtClass)
        return parent;
    return is_inif(parent, ctx);
}

clang::Stmt *is_inloop(clang::Stmt *stmt, clang::ASTContext &ctx)
{ // 判断stmt是否在loop语句中
    if (!stmt)
        return nullptr;
    auto it = ctx.getParents(*stmt).begin();
    if (it == ctx.getParents(*stmt).end())
        return nullptr;
    clang::Stmt *parent = const_cast<clang::Stmt *>(it->get<clang::Stmt>());
    if (parent && parent->getStmtClass() == Stmt::ForStmtClass || parent && parent->getStmtClass() == Stmt::WhileStmtClass)
        return parent;
    return is_inloop(parent, ctx);
}

bool TraverseClass::VisitExpr(Expr *expr_)
{
    if (match_expr && expr_ && is_equal(match_expr, expr_))
    {
        has_expr = true;
    }
    return true;
}

bool LoopInfo::calculate_expr_value(ASTFunction *F, int &value_, Expr *expr_, Stmt *stmt_, CallExpr *call_expr_, int now_depth)
{ // 计算一个复杂表达式的值
    // 计算一个表达式的值，F为表达式所在函数，value为该表达式的值，expr为表达式，stmt为表达式所在语句，
    // call_expr：当计算函数返回值时，如在函数func_caller()中调用func_callee()需要计算func_callee()的返回值，该函数返回表达式为a,而a来自于形参，则传入参数call_expr为func_caller()，表示只去func_caller()查找func_callee()的实参，而不去其他调用func_callee()的函数中分析实参，影响a的值
    if (expr_value_map.find(expr_) != expr_value_map.end())
    {
        value_ = expr_value_map[expr_];
        return expr_value_map[expr_] > 0;
    }
    expr_value_map[expr_] = -1;
    bool has_value = false;
    string string_res = "";
    expr_ = remove_cast(expr_);
    DeclRefExpr *ref = nullptr;
    if (clang::IntegerLiteral *IntLiteral = llvm::dyn_cast<IntegerLiteral>(expr_))
    {
        value_ = static_cast<int>(IntLiteral->getValue().getLimitedValue());
        return true;
    }
    else if (clang::CharacterLiteral *charliteral = llvm::dyn_cast<CharacterLiteral>(expr_))
    {
        value_ = static_cast<int>(charliteral->getValue());
        return true;
    }
    else if (clang::DeclRefExpr *decl_ref = dyn_cast<DeclRefExpr>(expr_))
    { // get simple init value in declstmt
        if (!decl_ref->getType()->isIntegerType())
            return false;
        if (decl_ref->getType()->isPointerType())
            return false;
        FunctionDecl *FD = manager->getFunctionDecl(F);
        if (clang::EnumConstantDecl *enum_decl = llvm::dyn_cast<EnumConstantDecl>(decl_ref->getDecl()))
        { // get macro
            value_ = max(value_, static_cast<int>(enum_decl->getInitVal().getZExtValue()));
            has_value = true;
        }
        else
        {
            has_value = analyze_variant(F, value_, expr_, stmt_, call_expr_, now_depth);
        }
        if (value_ < 0)
        { // 如果value没有计算出来,可能是全局变量，要从头开始分析，只在函数内部分析无法得到结果
            if (VarDecl *var_decl = llvm::dyn_cast<VarDecl>(decl_ref->getDecl()))
            {
                if (var_decl->hasInit())
                    has_value = calculate_expr_value(F, value_, var_decl->getInit(), var_decl->getInit()->getExprStmt(), nullptr, now_depth);
            }
        }
    }
    else if (clang::ConditionalOperator *condition_op = llvm::dyn_cast<ConditionalOperator>(expr_))
    {
        if (clang::BinaryOperator *bOP = llvm::dyn_cast<BinaryOperator>(remove_cast(condition_op->getCond())))
        {
            int lhs_value = -1, rhs_value = -1;
            clang::Expr *bOP_lhs = remove_cast(bOP->getLHS());
            clang::Expr *bOP_rhs = remove_cast(bOP->getRHS());
            clang::Expr *true_expr = remove_cast(condition_op->getTrueExpr());
            clang::Expr *false_expr = remove_cast(condition_op->getFalseExpr());
            bool lhs_calculated = calculate_expr_value(F, lhs_value, bOP_lhs, stmt_, nullptr, now_depth);
            bool rhs_calculated = calculate_expr_value(F, rhs_value, bOP_rhs, stmt_, nullptr, now_depth);
            if (lhs_value > 0 && rhs_value > 0)
            { // lhs and rhs can both calculate
                if (bOP->getOpcode() == clang::BO_LT || bOP->getOpcode() == clang::BO_LE)
                { //< <=
                    if (lhs_value <= rhs_value)
                    { // the cond is satisfied
                        has_value = calculate_expr_value(F, value_, true_expr, stmt_, nullptr, now_depth);
                    }
                    else
                    { // the cond is not satisfied
                        clang::Expr *false_expr = remove_cast(condition_op->getFalseExpr());
                        has_value = calculate_expr_value(F, value_, true_expr, stmt_, nullptr, now_depth);
                    }
                }
                else if (bOP->getOpcode() == clang::BO_GT || bOP->getOpcode() == clang::BO_GE)
                { //> >=
                    if (lhs_value >= rhs_value)
                    { // the cond is satisfied
                        clang::Expr *true_expr = remove_cast(condition_op->getTrueExpr());
                        has_value = calculate_expr_value(F, value_, true_expr, stmt_, nullptr, now_depth);
                    }
                    else
                    { // the cond is not satisfied
                        clang::Expr *false_expr = remove_cast(condition_op->getFalseExpr());
                        has_value = calculate_expr_value(F, value_, false_expr, stmt_, nullptr, now_depth);
                    }
                }
            }
            else
            {
                if (lhs_calculated)
                {
                    value_ = lhs_value;
                    has_value = true;
                }
                if (rhs_calculated)
                {
                    value_ = rhs_value;
                    has_value = true;
                }
            }
        }
    }
    else if (clang::BinaryOperator *bOP = llvm::dyn_cast<BinaryOperator>(expr_))
    {
        switch (bOP->getOpcode())
        {
        case clang::BO_Add:
        {
            int lhs_value = -1, rhs_value = -1;
            bool lhs_hasv = calculate_expr_value(F, lhs_value, remove_cast(bOP->getLHS()), stmt_, call_expr_, now_depth);
            bool rhs_hasv = calculate_expr_value(F, rhs_value, remove_cast(bOP->getRHS()), stmt_, call_expr_, now_depth);
            if (lhs_hasv && rhs_hasv)
            {
                value_ = lhs_value + rhs_value;
                has_value = true;
            }
            break;
        }
        case clang::BO_Sub:
        {
            int lhs_value = -1, rhs_value = -1;
            bool lhs_hasv = calculate_expr_value(F, lhs_value, remove_cast(bOP->getLHS()), stmt_, call_expr_, now_depth);
            bool rhs_hasv = calculate_expr_value(F, rhs_value, remove_cast(bOP->getRHS()), stmt_, call_expr_, now_depth);
            if (lhs_hasv && rhs_hasv)
            {
                value_ = lhs_value - rhs_value;
                has_value = true;
            }
            break;
        }
        case clang::BO_Mul:
        {
            int lhs_value = -1, rhs_value = -1;
            bool lhs_hasv = calculate_expr_value(F, lhs_value, remove_cast(bOP->getLHS()), stmt_, call_expr_, now_depth);
            bool rhs_hasv = calculate_expr_value(F, rhs_value, remove_cast(bOP->getRHS()), stmt_, call_expr_, now_depth);
            if (lhs_hasv && rhs_hasv)
            {
                value_ = lhs_value * rhs_value;
                has_value = true;
            }
            break;
        }
        case clang::BO_Rem:
        {
            int lhs_value = -1, rhs_value = -1;
            // bool lhs_hasv = calculate_expr_value(F,lhs_value,remove_cast(bOP->getLHS()),stmt_);
            bool rhs_hasv = calculate_expr_value(F, rhs_value, remove_cast(bOP->getRHS()), stmt_, call_expr_, now_depth);
            if (rhs_hasv)
            {
                value_ = (int)rhs_value - 1;
                has_value = true;
            }
            break;
        }
        case clang::BO_Div:
        {
            int lhs_value = -1, rhs_value = -1;
            bool lhs_hasv = calculate_expr_value(F, lhs_value, remove_cast(bOP->getLHS()), stmt_, call_expr_, now_depth);
            bool rhs_hasv = calculate_expr_value(F, rhs_value, remove_cast(bOP->getRHS()), stmt_, call_expr_, now_depth);
            if (lhs_hasv && rhs_hasv && rhs_hasv > 0)
            {
                value_ = lhs_value / rhs_value;
                has_value = true;
            }
            break;
        }
        }
    }
    else if (CallExpr *call_expr = llvm::dyn_cast<CallExpr>(expr_))
    {
        // get the return stmt,take the return expr as result
        FunctionDecl *fd = call_expr->getDirectCallee();
        ASTFunction *af = manager->getASTFunction(fd);
        if (fd != nullptr && fd->getNameAsString() == "min")
        { // 这里对min函数做了特殊处理，直接把min函数的两个参数进行计算比较
            int min_num = INT_MAX;
            for (unsigned int i = 0; i < call_expr->getNumArgs(); i++)
            {
                int tmp_value = -1;
                if (calculate_expr_value(F, tmp_value, call_expr->getArg(i), stmt_, call_expr_, now_depth + 1) && tmp_value > 0)
                {
                    min_num = min(tmp_value, min_num);
                }
            }
            if (min_num != INT_MAX)
            {
                value_ = min_num;
                has_value = true;
            }
        }
        int return_value = -1;
        if (af != nullptr && fd->hasBody())
        {
            TraverseClass *traverse = new TraverseClass();
            traverse->TraverseStmt(fd->getBody());
            for (ReturnStmt *returnstmt : traverse->returnstmts)
            {
                string_res = getStringOfExpr(returnstmt->getRetValue());
                int tmp_return_value = -1;
                if (calculate_expr_value(af, tmp_return_value, returnstmt->getRetValue(), returnstmt, call_expr, now_depth + 1))
                    return_value = max(tmp_return_value, return_value);
            }
        }
        if (return_value > 0)
        {
            value_ = return_value;
            has_value = true;
        }
    }
    else if (clang::UnaryExprOrTypeTraitExpr *sizeof_expr = llvm::dyn_cast<UnaryExprOrTypeTraitExpr>(expr_))
    {
        int size = 0;
        if (sizeof_expr->isArgumentType())
        {
            size = manager->getFunctionDecl(F)->getASTContext().getTypeSize(sizeof_expr->getArgumentType());
        }
        else
        {
            Expr *e = sizeof_expr->getArgumentExpr()->IgnoreCasts()->IgnoreParens();
            size = manager->getFunctionDecl(F)->getASTContext().getTypeSize(e->getType());
        }
        value_ = size / 8;
        has_value = true;
    }
    else if (clang::ArraySubscriptExpr *array_acc = llvm::dyn_cast<ArraySubscriptExpr>(expr_))
    {
        DeclRefExpr *ref = llvm::dyn_cast<DeclRefExpr>(remove_cast(array_acc->getBase()));
        if (ref != nullptr)
        {
            VarDecl *var_decl = llvm::dyn_cast<VarDecl>(ref->getDecl());
            if (var_decl->hasInit())
            {
                if (InitListExpr *init_list = llvm::dyn_cast<InitListExpr>(var_decl->getInit()))
                {
                    for (auto chile : init_list->children())
                    {
                        int access_element = -1;
                        calculate_expr_value(F, access_element, dyn_cast<Expr>(chile), chile, call_expr_, now_depth);
                        if (access_element >= 0)
                        {
                            value_ = max(value_, access_element);
                            has_value = true;
                        }
                    }
                }
            }
        }
    }
    else if (clang::UnaryOperator *uOP = dyn_cast<UnaryOperator>(expr_))
    { // 针对case6中的forrange
        if (uOP->getOpcode() == clang::UO_Deref)
        {
            if (DeclRefExpr *begin_ref = llvm::dyn_cast<DeclRefExpr>(remove_cast(uOP->getSubExpr())))
            {
                string begin_ref_s = getStringOfExpr(begin_ref);
                if (begin_ref_s.find("__begin") != string::npos)
                {
                    if (VarDecl *var_begin = llvm::dyn_cast<VarDecl>(begin_ref->getDecl()))
                    {
                        if (DeclRefExpr *range_ref = llvm::dyn_cast<DeclRefExpr>(remove_cast(var_begin->getInit())))
                        {
                            if (VarDecl *var_range = llvm::dyn_cast<VarDecl>(range_ref->getDecl()))
                            {
                                if (DeclRefExpr *array_ref = llvm::dyn_cast<DeclRefExpr>(remove_cast(var_range->getInit())))
                                {
                                    if (VarDecl *var_array = llvm::dyn_cast<VarDecl>(array_ref->getDecl()))
                                    {
                                        if (InitListExpr *init_list = llvm::dyn_cast<InitListExpr>(remove_cast(var_array->getInit())))
                                        {
                                            int element_sum = 0;
                                            for (auto chile : init_list->children())
                                            {
                                                int access_element = -1;
                                                calculate_expr_value(F, access_element, dyn_cast<Expr>(chile), chile, call_expr_, now_depth);
                                                if (access_element > 0)
                                                {
                                                    element_sum += access_element;
                                                    has_value = true;
                                                }
                                            }
                                            if (has_value)
                                                value_ = element_sum;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (has_value && value_ > 0)
    {
        expr_value_map[expr_] = value_;
        st_.emplace(getStringOfExpr(expr_) + " 的取值范围为 [0," + to_string(value_) + ")\n");
    }
    else if (string_res != "")
    { // 如果不能计算出结果，就把能获取的信息压栈
        st_.emplace(getStringOfExpr(expr_) + " 为 " + string_res + "\n");
    }
    return has_value && value_ > 0;
}

bool LoopInfo::AnalyzeStmt(bool has_value, ASTFunction *F, int &value_, Expr *expr_, clang::Stmt *stmt_, int now_depth)
{
    // 数据流转换函数，F为所在函数，expr为分析表达式，stmt为所在语句，value为经过该语句后得到的值，now_depth为目前分析到的函数调用层数
    FunctionDecl *FD = manager->getFunctionDecl(F);
    switch (stmt_->getStmtClass())
    {
    case clang::Stmt::DeclStmtClass:
    {
        clang::DeclStmt *decl_stmt = llvm::dyn_cast<DeclStmt>(stmt_);
        if (!decl_stmt->isSingleDecl())
            break;
        if (clang::VarDecl *var_decl = llvm::dyn_cast<VarDecl>(decl_stmt->getSingleDecl()))
        {
            if (!var_decl->hasInit())
                return true;
            clang::Expr *var_init = remove_cast(var_decl->getInit());
            int tmp_value = -1.0;
            if (calculate_expr_value(F, tmp_value, var_init, stmt_, nullptr, now_depth))
            {
                if (tmp_value < 0)
                    return false;
                else
                {
                    value_ = tmp_value;
                    return true;
                }
            }
        }
        break;
    }
    case clang::Stmt::CompoundAssignOperatorClass:
    {   //+= -=
        // discriminate has_value/not has_value
        clang::CompoundAssignOperator *compound_op = llvm::dyn_cast<CompoundAssignOperator>(stmt_);
        int change_value = 0.0;
        if (calculate_expr_value(F, change_value, remove_cast(compound_op->getRHS()), stmt_, nullptr, now_depth))
        {
            if (compound_op->getOpcode() == clang::BO_AddAssign)
            {
                value_ += change_value;
                return true;
            }
        }
        break;
    }
    case clang::Stmt::BinaryOperatorClass:
    { // constraint condition
        clang::BinaryOperator *bOP = llvm::dyn_cast<BinaryOperator>(stmt_);
        if (bOP->getOpcode() == clang::BO_Assign)
        { // assign stmt
            int assign_value = -1;
            if (calculate_expr_value(F, assign_value, remove_cast(bOP->getRHS()), stmt_, nullptr, now_depth))
            {
                value_ = assign_value;
                return true;
            }
        }
        clang::Stmt *if_stmt = is_inif(stmt_, FD->getASTContext());
        if (if_stmt != nullptr)
        {
            // if has break/return in this branch body,take the bOP rhs as value
            clang::IfStmt *ifstmt = llvm::dyn_cast<IfStmt>(if_stmt);
            TraverseClass *traverse = new TraverseClass();
            traverse->TraverseStmt(ifstmt->getThen());
            if (traverse->has_break)
            {
                int constraint_value_ = -1;
                if (calculate_expr_value(F, constraint_value_, remove_cast(bOP->getRHS()), stmt_, nullptr, now_depth))
                {
                    if (bOP->getOpcode() == BO_GE)
                        constraint_value_--;
                    if (value_ < 0)
                        value_ = constraint_value_; // value_ has not been calculated
                    else
                        value_ = min(constraint_value_, value_);
                    return true;
                }
                return false;
            }
        }
        break;
    }
    }
    return true; // if return false, then the stmt out of the range analyzed,will be regarded as false
}
bool LoopInfo::analyze_variant(ASTFunction *F, int &value_, Expr *expr_, clang::Stmt *end_, CallExpr *call_expr_, int now_depth)
{
    // 用数据流分析分析一个变量的具体值，end_表示分析到end_为止
    FunctionDecl *FD = manager->getFunctionDecl(F);
    bool calculated = false;
    expr_ = remove_cast(expr_);
    if (clang::DeclRefExpr *decl_ref = dyn_cast<DeclRefExpr>(expr_))
    {
        // get init value from declstmt inpro or from param interpro
        if (decl_ref->getDecl()->getKind() == clang::Decl::ParmVar)
        { // interprocedure,the vardecl is parameter
            clang::ParmVarDecl *param_decl = llvm::cast<clang::ParmVarDecl>(decl_ref->getDecl());
            int param_idx = -1; // match the parameter's pos
            for (int i = 0, sz = FD->param_size(); i < sz; ++i)
            {
                if (FD->getParamDecl(i) == param_decl)
                {
                    param_idx = i;
                    break;
                }
            }
            if (param_idx > -1)
            { // its a parameter,get init value from caller
                std::vector<std::pair<ASTFunction *, int64_t>> callers = call_graph->getParentsWithCallsite(F);
                if (now_depth > max_depth)
                {
                    value_ = -1;
                    return false;
                }
                now_depth++;
                if (call_expr_ != nullptr)
                { // its from a certain call_expr
                    if (callers.size() != 0)
                    {
                        std::vector<const clang::Expr *> call_exprs;
                        for (auto caller : callers)
                        {
                            if (manager->getFunctionDecl(caller.first)->hasBody())
                            {
                                Stmt *callsite_stmt = common::getStmtInFunctionWithID(manager->getFunctionDecl(caller.first), caller.second);
                                clang::CallExpr *call_expr = dyn_cast<CallExpr>(callsite_stmt);
                                if (call_expr_ == call_expr)
                                {
                                    int caller_value = -1;
                                    calculated = calculate_expr_value(caller.first, caller_value, remove_cast(call_expr->getArg(param_idx)), callsite_stmt, nullptr, now_depth);
                                    if (calculated && caller_value >= 0)
                                        value_ = caller_value;
                                    break;
                                }
                            }
                        }
                    }
                }
                else if (callers.size() != 0)
                {
                    std::vector<const clang::Expr *> call_exprs;
                    for (auto caller : callers)
                    {
                        if (manager->getFunctionDecl(caller.first)->hasBody())
                        {
                            Stmt *callsite_stmt = common::getStmtInFunctionWithID(manager->getFunctionDecl(caller.first), caller.second);
                            clang::CallExpr *call_expr = dyn_cast<CallExpr>(callsite_stmt);
                            int caller_value = -1;
                            if (call_expr == nullptr)
                                return false;
                            if (remove_cast(call_expr->getArg(param_idx)) == nullptr)
                                return false;
                            calculated = calculate_expr_value(caller.first, caller_value, remove_cast(call_expr->getArg(param_idx)), callsite_stmt, nullptr, now_depth);
                            value_ = max(value_, caller_value);
                        }
                    }
                }
            }
        }
        // traverse from the beginning,if inpro,find declstmt then startanalyze,if interpro,start analyze from the beginning
        unique_ptr<CFG> &cfg = manager->getCFG(F);
        for (auto blk_it = cfg->rbegin(); blk_it != cfg->rend(); blk_it++) // find declstmt interator inprocudure
        {
            clang::CFGBlock *blk = *blk_it;
            for (clang::CFGBlock::iterator it = blk->begin(); it != blk->end(); it++)
            {
                if (it->getKind() == clang::CFGElement::Statement)
                {
                    Stmt *stmt_ = const_cast<Stmt *>(it->castAs<CFGStmt>().getStmt());
                    Stmt *for_stmt = is_inloop(stmt_, FD->getASTContext());
                    if (stmt_ == end_ || for_stmt == end_)
                        return calculated; // traverse till the usepoint
                    TraverseClass *traverse_expr = new TraverseClass();
                    traverse_expr->match_expr = expr_;
                    traverse_expr->TraverseStmt(stmt_);
                    if (traverse_expr->has_expr)
                    {
                        calculated = AnalyzeStmt(calculated, F, value_, expr_, stmt_, now_depth);
                    }
                    if (stmt_->getStmtClass() == clang::Stmt::DeclStmtClass)
                    {
                        clang::DeclStmt *this_decl_stmt = llvm::dyn_cast<DeclStmt>(stmt_);
                        if (!this_decl_stmt->isSingleDecl())
                            continue;
                        if (clang::VarDecl *this_var_decl = llvm::dyn_cast<VarDecl>(this_decl_stmt->getSingleDecl()))
                        {
                            clang::VarDecl *real_var_decl = llvm::dyn_cast<VarDecl>(decl_ref->getDecl());
                            if (this_var_decl == real_var_decl)
                            {
                                calculated = AnalyzeStmt(calculated, F, value_, expr_, stmt_, now_depth);
                            }
                        }
                    }
                }
            }
        }
    }
    return calculated;
}

void LoopUpbound::check()
{
    for (ASTFunction *F : resource->getFunctions(false))
    {
        FunctionDecl *FD = manager->getFunctionDecl(F);
        const clang::SourceManager &SM = FD->getASTContext().getSourceManager();
        string loc = FD->getBeginLoc().printToString(SM);
        common::printLog(loc + "\n", common::CheckerName::LoopUpbound, 4, *configure);
        SourceLocation SL = FD->getBeginLoc();
        if (!SM.isInMainFile(FD->getLocation()))
            continue;
        TraverseClass *traverse = new TraverseClass();
        traverse->TraverseStmt(FD->getBody());
        for (clang::ForStmt *loop_stmt : traverse->forstmts)
        {
            if (analyzed_map.find(loop_stmt) != analyzed_map.end())
                continue;
            LoopInfo *loop_info = new LoopInfo(call_graph, manager, loop_stmt, configure);
            loop_info->analyze_loopstmt(F, analyzed_map);
        }
        for (clang::WhileStmt *loop_stmt : traverse->whilestmts)
        {
            if (analyzed_map.find(loop_stmt) != analyzed_map.end())
                continue;
            LoopInfo *loop_info = new LoopInfo(call_graph, manager, loop_stmt, configure);
            loop_info->analyze_loopstmt(F, analyzed_map);
        }
    }
    std::string xmlFile_loopbound = "LoopUpbound.xml";
    loopbound_xml.save_file(xmlFile_loopbound.c_str(), "\t");
}

bool LoopInfo::is_equal_interpro(Expr *expr_in, Expr *expr_out, ASTFunction *F)
{ // 两个变量在两个函数中,是否指的是同一块内存
    if (expr_in == nullptr || expr_out == nullptr)
        return false;
    FunctionDecl *FD = manager->getFunctionDecl(F);
    if (DeclRefExpr *decl_expr_in = llvm::dyn_cast<DeclRefExpr>(remove_cast(expr_in)))
    {
        if (DeclRefExpr *decl_expr_out = llvm::dyn_cast<DeclRefExpr>(remove_cast(expr_out)))
        {
            if (decl_expr_in->getDecl()->getKind() == clang::Decl::ParmVar)
            { // interprocedure,the vardecl is parameter
                clang::ParmVarDecl *param_decl = llvm::cast<clang::ParmVarDecl>(decl_expr_in->getDecl());
                int param_idx = -1; // match the parameter's pos
                for (int i = 0, sz = FD->param_size(); i < sz; ++i)
                {
                    if (FD->getParamDecl(i) == param_decl)
                    {
                        param_idx = i;
                        break;
                    }
                }
                if (param_idx > -1)
                {
                    std::vector<std::pair<ASTFunction *, int64_t>> callers = call_graph->getParentsWithCallsite(F);
                    for (auto caller : callers)
                    {
                        if (manager->getFunctionDecl(caller.first)->hasBody())
                        {
                            Stmt *callsite_stmt = common::getStmtInFunctionWithID(manager->getFunctionDecl(caller.first), caller.second);
                            clang::CallExpr *call_expr = dyn_cast<CallExpr>(callsite_stmt);
                            if (is_equal(call_expr->getArg(param_idx), decl_expr_out))
                                return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}

int LoopInfo::analyze_loopstmt(ASTFunction *F, unordered_map<clang::Stmt *, loop_info> &analyzed_map)
{
    auto Loop_config = configure->getOptionBlock("LoopUpbound");
    max_depth = stoi(Loop_config.find("depth")->second);
    int threshold = stoi(Loop_config.find("threshold")->second);
    int max_nested_loop_count = stoi(Loop_config.find("nestedLoopCount")->second);
    FunctionDecl *FD = manager->getFunctionDecl(F);
    if (analyzed_map.find(loop_stmt) != analyzed_map.end())
        return analyzed_map[loop_stmt].loop_upbound;
    else
        analyzed_map[loop_stmt] = loop_info();

    const clang::SourceManager &SM = FD->getASTContext().getSourceManager();
    analyze_condition(F); // get condition upbound
    analyze_body(F);      // analyze break condition/get incre info in for and while

    int outres = 0; // 当前循环语句上界
    if (increment_value == 0)
        return 0;
    init_value = init_value < 0 ? 0 : init_value;
    end_value = end_value < 0 ? 0 : end_value;
    if (end_value == 0)
        outres = 0;
    else
        outres = (abs(end_value - init_value) + 1) / increment_value;
    /*nested analyze*/
    int nestedres = 0;
    bool is_nested = false;    // 是否嵌套
    bool is_dependent = false; // 内外层循环是否有依赖关系
    string out_loop_loc, in_loop_loc;

    // 对过程内内外层嵌套循环进行分析
    TraverseClass *traverse = new TraverseClass();
    traverse->TraverseStmt(loop_stmt);
    for (clang::Stmt *inner_loopstmt : traverse->loopstmts)
    { // 遍历当前循环语句内部的所有循环语句
        if (inner_loopstmt == loop_stmt)
            continue;
        is_nested = true; // 如果存在其他循环语句说明是嵌套循环
        out_loop_loc = loop_stmt->getBeginLoc().printToString(SM);
        in_loop_loc = inner_loopstmt->getBeginLoc().printToString(SM);
        if (analyzed_map.find(inner_loopstmt) == analyzed_map.end())
        { // the inloop has not been analyzed
            LoopInfo *loop_info = new LoopInfo(call_graph, manager, inner_loopstmt, configure);
            loop_info->analyze_loopstmt(F, analyzed_map);
        }
        increase_before_loop(loop_stmt, inner_loopstmt, F);
        if (loop_expr && analyzed_map[inner_loopstmt].init_expr_ &&
            is_equal(loop_expr, analyzed_map[inner_loopstmt].init_expr_))
        { // 内层循环的初始表达式是外层循环的循环控制变量
            is_dependent = true;
            int this_in_loopcnt = 0;
            if (analyzed_map[inner_loopstmt].increase)
            { // 内层循环的循环控制变量是递增的,外层可能递增或递减
                /*遍历外层循环控制变量的所有取到的值，内层循环次数的计算是依赖于该值的,
                this_in_loopcnt每一次增加的都是内层循环的次数，相当于模拟了一遍整个循环过程*/
                for (int i = min(init_value, end_value); i <= max(init_value, end_value); i++)
                { //++,++/--,++
                    /*analyzed_map[loopstmt].end_value-i+1相当于内层循环终止值减去内层循环初始值加一，
                    但是内层循环初始值依赖于外层循环的循环控制变量，当该变量较大时，不会进入内层循环，
                    也就是analyzed_map[loopstmt].end_value-i+1<=0,所以这里和0做了一个max*/
                    this_in_loopcnt += max(0, analyzed_map[inner_loopstmt].end_value - i + 1);
                }
            }
            else
            {
                for (int i = min(init_value, end_value); i <= max(init_value, end_value); i++)
                { //++,--/--,--
                    // 内层循环的循环控制变量是递减的，所以这里是初始值减去终止值作为内层循环次数
                    this_in_loopcnt += max(0, i - analyzed_map[inner_loopstmt].end_value + 1);
                }
            }
            nestedres += this_in_loopcnt;
        }
        else if (loop_expr && analyzed_map[inner_loopstmt].end_expr_ &&
                 is_equal(loop_expr, analyzed_map[inner_loopstmt].end_expr_))
        { // 内层循环的终止表达式是外层循环的循环控制变量
            is_dependent = true;
            int this_in_loopcnt = 0;
            if (analyzed_map[inner_loopstmt].increase)
            {
                for (int i = min(init_value, end_value); i <= max(init_value, end_value); i++)
                { //++,++/--,++
                    /*内层循环终止值取决于内层循环break条件和外层循环值i的大小。*/
                    /*这里end_value_bound是用来记录终止条件是否取到==这种情况。这个是在之前在分析内层循环条件时所记录下来的。
                    因为内层循环终止值可变，所以需要把break_value(break的条件)和i(依赖于外层循环的终止值，且end_value_bound会影响其+-1的范围)进行比较，取小的一方和初始值相减，若相减小于0则取0*/
                    this_in_loopcnt += max(0,
                                           min(analyzed_map[inner_loopstmt].break_value, i - !analyzed_map[inner_loopstmt].end_value_bound) - analyzed_map[inner_loopstmt].init_value + 1);
                }
            }
            else
            {
                /*内层循环是递减的情况，内层循环的终止值是break_value和end_value取大，
                break_value在不赋值的时候是INT_MAX，所以需要做一个判断，如果没有break语句，则不考虑break_value，只考虑end_value。
                用内层循环初始值减去终止值，若小于0取0*/
                for (int i = min(init_value, end_value); i <= max(init_value, end_value); i++)
                { //++,--/--,--
                    this_in_loopcnt += max(0, analyzed_map[inner_loopstmt].init_value -
                                                  max(break_value == INT_MAX ? 0 : analyzed_map[inner_loopstmt].break_value, (i + !analyzed_map[inner_loopstmt].end_value_bound)) + 1);
                }
            }
            nestedres += this_in_loopcnt;
        }
        else
        {
            /*内外层循环没有依赖关系的时候，直接将内外层的循环上界相乘。*/
            nestedres += outres * (abs(analyzed_map[inner_loopstmt].end_value - analyzed_map[inner_loopstmt].init_value) + 1) / analyzed_map[inner_loopstmt].incre_value;
        }
    }
    int res = is_nested ? nestedres : outres;

    // 对嵌套循环并且内外层在不同函数的情况进行分析
    int in_loopcnt = res;
    std::vector<std::pair<ASTFunction *, int64_t>> callers = call_graph->getParentsWithCallsite(F);
    for (auto caller : callers)
    {
        if (manager->getFunctionDecl(caller.first)->hasBody())
        {
            Stmt *callsite_stmt = common::getStmtInFunctionWithID(manager->getFunctionDecl(caller.first), caller.second);
            clang::CallExpr *call_expr = dyn_cast<CallExpr>(callsite_stmt);
            Stmt *loopstmt = is_inloop(callsite_stmt, FD->getASTContext());
            if (loopstmt == nullptr)
                continue;
            out_loop_loc = loopstmt->getBeginLoc().printToString(SM);
            in_loop_loc = loop_stmt->getBeginLoc().printToString(SM);
            LoopInfo *loop_info = new LoopInfo(call_graph, manager, loopstmt, configure);
            loop_info->analyze_loopstmt(caller.first, analyzed_map);

            if (analyzed_map[loopstmt].nested_loop_count >= max_nested_loop_count)
                return 0;
            nested_loop_count = analyzed_map[loopstmt].nested_loop_count + 1;
            is_nested = true;
            if (loopstmt == nullptr)
                continue;
            if (init_expr && is_equal_interpro(init_expr, loop_info->loop_expr, F))
            { // in_init_expr is out_loop_expr
                is_dependent = true;
                int this_in_loopcnt = 0;
                if (analyzed_map[loopstmt].increase)
                {
                    for (int i = min(analyzed_map[loopstmt].init_value, analyzed_map[loopstmt].end_value);
                         i <= max(analyzed_map[loopstmt].init_value, analyzed_map[loopstmt].end_value); i++)
                    { //++,++/--,++
                        this_in_loopcnt += max(0, int(end_value) - i + 1);
                    }
                }
                else
                {
                    for (int i = min(analyzed_map[loopstmt].init_value, analyzed_map[loopstmt].end_value);
                         i <= max(analyzed_map[loopstmt].init_value, analyzed_map[loopstmt].end_value); i++)
                    { //++,--/--,--
                        this_in_loopcnt += max(0, i - (int)end_value + 1);
                    }
                }
                nestedres += this_in_loopcnt;
            }
            else if (end_expr && is_equal_interpro(end_expr, loop_info->loop_expr, F))
            {
                is_dependent = true;
                int this_in_loopcnt = 0;
                if (analyzed_map[loopstmt].increase)
                {
                    for (int i = min(analyzed_map[loopstmt].init_value, analyzed_map[loopstmt].end_value);
                         i <= max(analyzed_map[loopstmt].init_value, analyzed_map[loopstmt].end_value); i++)
                    { //++,++/--,++
                        this_in_loopcnt += max(0,
                                               min(break_value, i - !end_value_bound) - init_value + 1);
                    }
                }
                else
                {
                    for (int i = min(analyzed_map[loopstmt].init_value, analyzed_map[loopstmt].end_value);
                         i <= max(analyzed_map[loopstmt].init_value, analyzed_map[loopstmt].end_value); i++)
                    { //++,--/--,--
                        this_in_loopcnt += max(0, init_value -
                                                      max(analyzed_map[loopstmt].break_value == INT_MAX ? 0 : break_value, (i + !end_value_bound)) + 1);
                    }
                }
                nestedres += this_in_loopcnt;
            }
            else
            { // the iner ans outloop is not dependent
                LoopInfo *loop_info = new LoopInfo(call_graph, manager, loopstmt, configure);
                loop_info->analyze_loopstmt(caller.first, analyzed_map);
                nestedres = max(nestedres, in_loopcnt * (abs(analyzed_map[loopstmt].loop_upbound)));
            }
        }
    }

    res = is_nested ? nestedres : outres;

    analyzed_map[loop_stmt].init_value = init_value;
    analyzed_map[loop_stmt].end_value = end_value;
    analyzed_map[loop_stmt].incre_value = increment_value;
    analyzed_map[loop_stmt].loop_upbound = res;
    analyzed_map[loop_stmt].loop_expr_ = loop_expr;
    analyzed_map[loop_stmt].init_expr_ = init_expr;
    analyzed_map[loop_stmt].end_expr_ = end_expr;
    analyzed_map[loop_stmt].increase = increase;
    analyzed_map[loop_stmt].end_value_bound = end_value_bound;
    analyzed_map[loop_stmt].break_value = break_value;
    analyzed_map[loop_stmt].nested_loop_count = nested_loop_count;
    if (is_inloop(loop_stmt, FD->getASTContext()))
    { // if the stmt is in for/while stmt,then do not print loopinfo
        return res;
    }
    // 如果估算结果小于阈值，则不输出到xml文件
    if (res < threshold)
        return res;

    /*writing to xml*/
    pugi::xml_node node;
    node = loopbound_xml.append_child("LoopUpbound");
    pugi::xml_node file = node.append_child("file");
    file.append_child(pugi::node_pcdata).set_value(loop_stmt->getBeginLoc().printToString(SM).c_str());

    pugi::xml_node loopstmt = node.append_child("loopstmt");
    string tmp = getStringOfExpr(loop_stmt) + "\n";
    loopstmt.append_child(pugi::node_pcdata).set_value(tmp.c_str());

    pugi::xml_node event = node.append_child("analyze_result");

    if (is_nested)
    {
        string tmp = "嵌套循环\n";
        event.append_child(pugi::node_pcdata).set_value(tmp.c_str());
        out_loop_loc = "外层循环位置:" + out_loop_loc + "\n";
        in_loop_loc = "内层循环位置:" + in_loop_loc + "\n";
        event.append_child(pugi::node_pcdata).set_value(out_loop_loc.c_str());
        event.append_child(pugi::node_pcdata).set_value(in_loop_loc.c_str());
        string nested_count = "所在循环层数:" + to_string(nested_loop_count) + "\n";
        event.append_child(pugi::node_pcdata).set_value(nested_count.c_str());
    }
    if (is_dependent)
    {
        string tmp = "内层循环依赖于外层循环\n";
        event.append_child(pugi::node_pcdata).set_value(tmp.c_str());
    }
    else
    {
        if (init_value >= 0)
        {
            string tmp = "init_value is:" + to_string(int(init_value)) + "\n";
            event.append_child(pugi::node_pcdata).set_value(tmp.c_str());
        }
        else if (init_expr != nullptr)
        {
            string tmp = "init_expr is:" + getStringOfExpr(init_expr) + "\n";
            event.append_child(pugi::node_pcdata).set_value(tmp.c_str());
        }
        if (end_value >= 0)
        {
            string tmp = "end_value is:" + to_string(int(end_value)) + "\n";
            event.append_child(pugi::node_pcdata).set_value(tmp.c_str());
        }
        else if (end_expr != nullptr)
        {
            string tmp = "end_expr is:" + getStringOfExpr(end_expr) + "\n";
            event.append_child(pugi::node_pcdata).set_value(tmp.c_str());
        }
        string tmp = "increment_value is:" + to_string(int(increment_value)) + "\n";
        event.append_child(pugi::node_pcdata).set_value(tmp.c_str());
    }
    if (res > 0)
    {
        string tmp = "loop_upbound is:" + to_string(int(res)) + "\n";
        event.append_child(pugi::node_pcdata).set_value(tmp.c_str());
    }
    else
    {
        if (end_expr)
        {
            string tmp = "loop_upbound is:" + getStringOfExpr(end_expr) + "\n";
            event.append_child(pugi::node_pcdata).set_value(tmp.c_str());
        }
        pugi::xml_node description = event.append_child("description");
        while (!st_.empty())
        {
            description.append_child(pugi::node_pcdata).set_value(st_.top().c_str());
            st_.pop();
        }
    }
    return res;
}

void LoopInfo::analyze_condition(ASTFunction *F)
{
    if (ForStmt *forstmt = llvm::dyn_cast<ForStmt>(loop_stmt))
    {
        get_init_value(F, forstmt->getInit());
        get_end_value(F, forstmt->getCond(), forstmt);
        get_incre_value(F, forstmt->getInc(), forstmt);
    }
    else if (WhileStmt *whilestmt = llvm::dyn_cast<WhileStmt>(loop_stmt))
    {
        if (BinaryOperator *bOP = llvm::dyn_cast<BinaryOperator>(whilestmt->getCond()))
        {
            calculate_expr_value(F, init_value, bOP->getLHS(), whilestmt, nullptr, 0);
        }
        get_end_value(F, whilestmt->getCond(), whilestmt);
    }
}

void LoopInfo::analyze_body(ASTFunction *F)
{
    if (loop_expr == nullptr)
        return;
    FunctionDecl *FD = manager->getFunctionDecl(F);
    Stmt *loopbody = nullptr;
    if (ForStmt *forstmt = llvm::dyn_cast<ForStmt>(loop_stmt))
    {
        loopbody = forstmt->getBody();
    }
    else if (WhileStmt *whilestmt = llvm::dyn_cast<WhileStmt>(loop_stmt))
    { // get increment value
        if (loop_expr == nullptr)
            return;
        loopbody = whilestmt->getBody();
    }
    for (auto it = loopbody->child_begin(); it != loopbody->child_end(); it++)
    {
        if (*it == nullptr)
            continue;
        Stmt *body_stmt = (*it);
        // 查看语句中是否有匹配的表达式，match_expr即为需要查找的表达式。has_expr为true表示存在这样的表达式
        TraverseClass *traverse_expr = new TraverseClass();
        traverse_expr->match_expr = loop_expr;
        traverse_expr->TraverseStmt(body_stmt);
        if (traverse_expr->has_expr)
        {
            if (UnaryOperator *unary_OP = llvm::dyn_cast<UnaryOperator>(body_stmt))
            {
                get_incre_value(F, unary_OP, *it);
            }
            else if (IfStmt *ifstmt = llvm::dyn_cast<IfStmt>(body_stmt))
            {
                TraverseClass *traverse = new TraverseClass();
                traverse->TraverseStmt(ifstmt->getThen());
                for (BreakStmt *breakstmt : traverse->breakstmts)
                {
                    Expr *cond = const_cast<Expr *>(ifstmt->getCond());
                    if (clang::BinaryOperator *binary_op = llvm::dyn_cast<BinaryOperator>(cond))
                    {
                        Expr *bOP_lhs = remove_cast(binary_op->getLHS());
                        Expr *bOP_rhs = remove_cast(binary_op->getRHS());
                        int value = -1;
                        if (is_equal(bOP_lhs, loop_expr) &&
                            calculate_expr_value(F, value, bOP_rhs, llvm::dyn_cast<Stmt>(cond), nullptr, 0) && value >= 0)
                        {
                            if (increase)
                            {
                                switch (binary_op->getOpcode())
                                {
                                case BO_GT:
                                {
                                    end_value = min(value, end_value);
                                    break_value = value;
                                    break; //> ++
                                }
                                case BO_GE:
                                {
                                    end_value = min(value - 1, end_value);
                                    break_value = value - 1;
                                    break; //>= ++
                                }
                                }
                            }
                            else
                            {
                                switch (binary_op->getOpcode())
                                {
                                case BO_LT:
                                {
                                    end_value = max(value, end_value);
                                    break_value = value;
                                    break; //< --
                                }
                                case BO_LE:
                                {
                                    end_value = max(value + 1, end_value);
                                    break_value = value + 1;
                                    break; //<= --
                                }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void LoopInfo::get_init_value(ASTFunction *F, clang::Stmt *init_stmt)
{
    if (init_stmt == nullptr)
        return;
    switch (init_stmt->getStmtClass())
    {
    case clang::Stmt::BinaryOperatorClass:
    {
        clang::BinaryOperator *binary_op = llvm::dyn_cast<BinaryOperator>(init_stmt);
        init_expr = remove_cast(binary_op->getRHS());
        loop_expr = remove_cast(binary_op->getLHS());
        clang::Expr *bOP_rhs = remove_cast(binary_op->getRHS());
        int value = -1;
        if (calculate_expr_value(F, value, bOP_rhs, init_stmt, nullptr, 0) && value >= 0)
        {
            init_value = value;
        }
        break;
    }
    case clang::Stmt::DeclStmtClass:
    {
        clang::DeclStmt *decl_stmt = llvm::dyn_cast<DeclStmt>(init_stmt);
        if (!decl_stmt->isSingleDecl())
            break;
        if (clang::VarDecl *var_decl = llvm::dyn_cast<VarDecl>(decl_stmt->getSingleDecl()))
        {
            if (!var_decl->hasInit())
                return;
            loop_expr = remove_cast(var_decl->getInit());
            clang::Expr *var_init = remove_cast(var_decl->getInit());
            init_expr = var_init;
            int value = -1;
            if (calculate_expr_value(F, value, var_init, init_stmt, nullptr, 0) && value >= 0)
            {
                init_value = value;
            }
        }
        break;
    }
    }
}

void LoopInfo::get_end_value(ASTFunction *F, clang::Expr *_expr, Stmt *stmt_)
{
    FunctionDecl *FD = manager->getFunctionDecl(F);
    if (_expr == nullptr)
        return;
    if (clang::BinaryOperator *binary_op = llvm::dyn_cast<BinaryOperator>(_expr))
    { // a<3
        Expr *bOP_rhs = remove_cast(binary_op->getRHS());
        loop_expr = remove_cast(binary_op->getLHS());
        end_expr = remove_cast(binary_op->getRHS());
        int value = -1;

        if (calculate_expr_value(F, value, bOP_rhs, stmt_, nullptr, 0))
        {
            switch (binary_op->getOpcode())
            {
            case BO_GT:
                end_value = value + 1;
                break; //> --
            case BO_NE:
            { //!=
                if (increase)
                    end_value = value - 1; //++
                else
                    end_value = value - 1; //--
                break;
            }
            case BO_GE:
                end_value = value;
                { //>= --
                    end_value_bound = true;
                    break;
                }
            case BO_LT:
                end_value = value - 1;
                break; //<   ++
            case BO_LE:
                end_value = value;
                { //<= ++
                    end_value_bound = true;
                    break;
                }
            }
        }
    }
    else if (DeclRefExpr *refexpr = llvm::dyn_cast<DeclRefExpr>(remove_cast(_expr)))
    { // while(i)
        loop_expr = refexpr;
        calculate_expr_value(F, init_value, refexpr, stmt_, nullptr, 0);
        end_value = 1;
    }
}

void LoopInfo::get_incre_value(ASTFunction *F, clang::Expr *inc_expr, Stmt *stmt_)
{
    if (inc_expr == nullptr)
        return;
    inc_expr = remove_cast(inc_expr);
    if (clang::UnaryOperator *unary_op = llvm::dyn_cast<UnaryOperator>(inc_expr))
    {
        if (unary_op->getOpcode() == clang::UO_PostInc || unary_op->getOpcode() == clang::UO_PostDec ||
            unary_op->getOpcode() == clang::UO_PreInc || unary_op->getOpcode() == clang::UO_PreDec)
        {
            incre_expr = inc_expr;
            increase = unary_op->getOpcode() == clang::UO_PostInc || unary_op->getOpcode() == clang::UO_PreInc; //+or-
            increment_value = 1;
        }
    }
    else if (clang::CompoundAssignOperator *compound_op = llvm::dyn_cast<CompoundAssignOperator>(inc_expr))
    {
        if (compound_op->getOpcode() == clang::BO_Sub || compound_op->getOpcode() == clang::BO_SubAssign || compound_op->getOpcode() == clang::BO_Add || compound_op->getOpcode() == clang::BO_AddAssign)
        {
            increase = compound_op->getOpcode() == clang::BO_Add || compound_op->getOpcode() == clang::BO_AddAssign;
            incre_expr = inc_expr;
            int value = -1;
            if (calculate_expr_value(F, value, compound_op->getRHS(), stmt_, nullptr, 0))
            {
                increment_value = value;
            }
        }
    }
    else if (clang::BinaryOperator *binary_op = llvm::dyn_cast<BinaryOperator>(inc_expr))
    {
        clang::Expr *rhs = binary_op->getRHS();
        if (clang::BinaryOperator *rhs_bOP = llvm::dyn_cast<BinaryOperator>(remove_cast(rhs)))
        {
            if (rhs_bOP->getOpcode() == clang::BO_Add || rhs_bOP->getOpcode() == clang::BO_AddAssign ||
                rhs_bOP->getOpcode() == clang::BO_Sub || rhs_bOP->getOpcode() == clang::BO_SubAssign)
                increase = rhs_bOP->getOpcode() == clang::BO_Add || rhs_bOP->getOpcode() == clang::BO_AddAssign; //+or-
            incre_expr = inc_expr;
            int value = -1;
            if (calculate_expr_value(F, value, remove_cast(rhs_bOP->getRHS()), stmt_, nullptr, 0))
            {
                increment_value = value;
            }
        }
    }
}
bool LoopInfo::increase_before_loop(Stmt *out_loop, Stmt *in_loop, ASTFunction *F)
{
    // 对于嵌套循环并且内外层有依赖关系，并且外层为while循环，增量操作可能在内层循环前或后。将这两种情况区分开，若在前则进入内层循环前进行增量操作
    if (out_loop == nullptr || in_loop == nullptr)
        return false;
    Stmt *loop_body = nullptr;
    if (ForStmt *out_for = llvm::dyn_cast<ForStmt>(out_loop))
    {
        loop_body = out_for->getBody();
    }
    else if (WhileStmt *out_while = llvm::dyn_cast<WhileStmt>(out_loop))
    {
        loop_body = out_while->getBody();
    }
    if (loop_body == nullptr)
        return false;
    for (auto it = loop_body->child_begin(); it != loop_body->child_end(); it++)
    {
        if ((*it) == nullptr)
            continue;
        if (Expr *expr_tmp = llvm::dyn_cast<Expr>(*it))
        {
            if (expr_tmp == incre_expr)
            {
                if (increase)
                {
                    init_value += increment_value;
                    end_value += increment_value;
                }
                else
                {
                    init_value -= increment_value;
                    end_value -= increment_value;
                }
            }
        }
        if ((*it) == in_loop)
            break;
    }
    return false;
}