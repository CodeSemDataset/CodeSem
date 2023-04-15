# ESAF ArrayBoundChecker 设计文档
## 使用方法：

依赖PointToAnalysis和TaintChecker

CheckerEnable

{

	TemplateChecker = true

	CallGraphChecker = true

	SplitBasicBlockwithFunCall = true

	CFGTest = false

	PointToAnalysis = true

	TaintChecker = true

	ArrayBoundChecker = true

}

## 总体流程：
跨过程后向数据流分析：check(f)->locatingTaintExpr(),backForwordAnalyse(),DFS2Func(),backForwordAnalyse()，reportWarning()

定位数组使用语句，并构造数组越界条件：locatingTaintExpr()->getArraySubscript()

过程内后向数据流分析：backwardAnalysis()->flowThrough()->throughStmt(),getScript(),flowThrough()

## 函数说明:

1. ArrayBoundChecker.cpp

    1. `LocatingTaintExpr(ASTFunction* astFunc,CFG * myCFG)`调用`getArraySubscript(ASTFunction* astF,CFG * myCFG)`: 定位函数astFunc中的数组下标使用语句，并通过getArraySubscriptInExpr(Expr* ex,ASTFunction* astF,CFGBlock* block,Stmt* stmt,CFG * myCFG)购造数组越界条件存入vector<ArraySubscript>中。

    2. `backwardAnalyse(CFG * cfg, ASTFunction* astF, vector<ArraySubscript> list)`: 对函数astF，基于其cfg，进行后向数据流分析，更新数组越界信息list

    3. `DFS2func(ASTFunction *astFunc,int level,vector<ArraySubscript> list)`: 在函数内未找到数组越界保护时，将继续向上分析函数的caller，直到分析层数level为0

    4. `flowThrough(ASTFunction* astF, CFGBlock* block,vector<ArraySubscript> list)`：analyse all the stmt in block, to check whether stmt can avoid array index out of bound

    5. `throughStmt(ASTFunction* astF, Stmt* it,ArraySubscript& con,CFGBlock* block)`: 分析stmt是否隐含con的数组越界保护（其中将调用updateAndSolveConstraints），返回值1表示完成了con数组越界保护，处理返回值时将con erase from list; 返回值-1表示con must out of bound, report it; 返回值0表示未做数组越界保护，将继续后向数据流分析。

    6. `updateAndSolveConstraints(ASTFunction* astF, ArraySubscript& input, Stmt* stmt,bool flag, CFGBlock* block)`：将stmt转成z3表达式，并更新input的路径约束，通过约束求解判断stmt是否隐含input的数组越界保护

    7. `getScript()`: input is the terminator stmt of block, terminator stmt type can be if,for,while

    8. `ReplaceIdxLoopBound(ASTFunction* astF, CFGBlock* block,Stmt* cond,Expr* expr,ArraySubscript & input, int& AndOrFlag)`；遇到for、while循环，判断数组下标是否为循环变量（或随着循环变量自增等），将更新input的越界条件为循环越界检查

    9. `reportWarning(ArraySubscript as)`：未找到as的数组越界保护，将报告数组越界警报，并调用writingToXML输出报告

    10. `writingToXML(bool isLoopBoundChecking, string fileName, string funName, string descr, string locLine,string checkerId, string indexCnt, string arrayExpr)`：将构造数组越界警报信息，并输出到xml文件


