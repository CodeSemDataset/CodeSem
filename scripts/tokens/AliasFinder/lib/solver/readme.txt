how to use z3 solver:
Call API clangExprToZ3Expr to transform clang::Stmt* to z3::expr, and each kind of clang::Stmt* (ie clang::MemberExpr*, clang::ArraySubscriptExpr*, clang::BinaryOperator*, etc) corresponds one API clangXXXToZ3Expr to perform the transformation.

## solver Z3Coding函数
    1. `clangExprToZ3Expr(const clang::Stmt* clangexpr, ASTFunction* astF, bool incFlag)`: 将clang::Stmt* clangexpr转换成z3::expr的总接口。astF为clangexpr所在函数的ASTFunction。其中为区分赋值语句转换成z3::expr 约束时赋值语句前后变量，设置incFlag，其为true时，将为相同valueDecl对应的z3::expr name后缀增加0，比如t+=1将对应z3约束表示为t==t0+1，在t+=1之后使用t，在t+=1之前使用t0.
        clangExprToZ3Expr通过对clangexpr类型进行分析，调用以下接口完成clang::Stmt*到z3:：expr的转换：
        1. `clangArraySubscriptExprToZ3Expr(clang::ArraySubscriptExpr* arraySubscriptExpr, ASTFunction* astF)`：分别获取数组arraySubscriptExpr中数组名和数组下标对应的z3::expr，然后使用z3 select构造数组下标访问表达式。
        2. `clangMemberExprToZ3Expr(const clang::MemberExpr* memberExpr, ASTFunction* astF, bool incFlag)`
    ``
    ``
    ``
    ``
    ``  
    2. `bool Z3Coding::implySolve(expr e1,expr e2)`: 为了判断e1->e2是否恒成立， ，需要求解!(implies(e1,e2))，如果!(implies(e1,e2))求解结果为unsat，则e1->e2恒成立，return true；若求解结果为sat，则e1->e2未必成立，return false
    3. `z3::expr Z3Coding::clangOp2Z3Op(z3::expr e1,z3::expr e2,clang::BinaryOperatorKind op)`: 根据想做的二元运算符，构建相应z3表达式
    4. `bool Z3Coding::isPermanentSat(expr e)`: 通过约束求解判断表达式e是否恒为真
    ``
    ``
    ``
    ``
    ``
    ``
    ``
    ``
    ``
    