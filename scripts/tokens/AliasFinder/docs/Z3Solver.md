# ESAF solver 设计文档
how to use z3 solver:

Call API clangExprToZ3Expr to transform clang::Stmt* to z3::expr, and each kind of clang::Stmt* (ie clang::MemberExpr*, clang::ArraySubscriptExpr*, clang::BinaryOperator*, etc) corresponds one API clangXXXToZ3Expr to perform the transformation.

## 函数说明：

1. Z3Coding.cpp

    1. `clangExprToZ3Expr(const clang::Stmt* clangexpr, ASTFunction* astF, bool incFlag)`: 将clang::Stmt* clangexpr转换成z3::expr的总接口。astF为clangexpr所在函数的ASTFunction。其中为区分赋值语句转换成z3::expr 约束时赋值语句前后变量，设置incFlag，其为true时，将为相同valueDecl对应的z3::expr name后缀增加0，比如t+=1将对应z3约束表示为t==t0+1，在t+=1之后使用t，在t+=1之前使用t0.

        clangExprToZ3Expr通过对clangexpr类型进行分析，调用以下接口完成clang::Stmt*到z3:：expr的转换：

        1. `clangArraySubscriptExprToZ3Expr(clang::ArraySubscriptExpr* arraySubscriptExpr, ASTFunction* astF)`：分别获取数组arraySubscriptExpr中数组名和数组下标对应的z3::expr，然后使用z3 select构造数组下标访问表达式，比如arr[i]。

        2. `clangMemberExprToZ3Expr(const clang::MemberExpr* memberExpr, ASTFunction* astF, bool incFlag)`:将结构体成员访问表达式转换为z3:：expr，比如stu.name。

        3. `vector<expr>  clangUnaryOperatorToZ3Expr(clang::UnaryOperator* unaryOperator, ASTFunction* astF);`：将一元操作表达式转换为z3:：expr，比如!flag。

        4. `vector<expr> clangBinaryOperatorToZ3Expr(clang::BinaryOperator* binaryOperator, ASTFunction* astF)`：将二元操作表达式转换为z3:：expr，比如n=m+1。

        5. `clangConditionalOperatorToZ3Expr(ConditionalOperator* co, ASTFunction* astF)`：将三元操作表达式转换为z3:：expr，比如i>10?m:n。

        6. `clangIntegerLiteralToZ3Expr(clang::IntegerLiteral * integerLiteral)`：将常量转换为z3:：expr。

        7. `clangCallExprToZ3Expr(const clang::CallExpr* call, ASTFunction* astF)`: 将函数调用表达式转换为z3:：expr。如果函数无定义不做处理，如果有定义，则将构造形参==实参的约束。 

    2. `bool Z3Coding::implySolve(expr e1,expr e2)`: 为了判断e1->e2是否恒成立， ，需要求解!(implies(e1,e2))，如果!(implies(e1,e2))求解结果为unsat，则e1->e2恒成立，return true；若求解结果为sat，则e1->e2未必成立，return false

    3. `z3::expr Z3Coding::clangOp2Z3Op(z3::expr e1,z3::expr e2,clang::BinaryOperatorKind op)` 可以构造e1 op e2 z3表达式.

    4. `z3::sort Z3Coding::clangTypeToZ3Sort(QualType qt)`返回clang变量类型QualType qt对应的z3类型，比如isBooleanType对应bool_sort，isIntegerType对应int_sort，isArrayType对应array_sort等。

    