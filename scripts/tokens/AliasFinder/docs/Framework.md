# ESAF 项目文档

## Framework提供的内容（BasicChecker都包含）


1.  ASTManager manager:

    1. `FunctionDecl *getFunctionDecl(ASTFunction *F)`：通过ASTFunction（该Framework的函数结构）获得FD（Clang的函数结构）

    2. `ASTVariable *getASTVariable(VarDecl *VD)`，`VarDecl *getVarDecl(ASTVariable *V)`：VarDecl和ASTVariable互相转换

    3. `std::unique_ptr<CFG> &getCFG(ASTFunction *F)`：通过ASTFunction得到CFG，其实`std::unique_ptr<CFG> functionCFG = std::unique_ptr<CFG>(CFG::buildCFG(
        FD, FD->getBody(), &FD->getASTContext(), CFG::BuildOptions()));`也可以，其中FD是FunctionDecl类型
    
    4. `VarDecl *getVarDecl(ASTVariable *V);`和`ASTUnit *getASTUnit(ASTFile *AF)`主要是类型转换
    
    5. `std::vector<ASTGlobalVariable *> getGlobalVars(bool uninit = false)`：当uninit为false时获取所有的全局变量ASTGlobalVariable，为true时获取没有显式初始化的全局变量
        + ASTGlobalVariable代表的全局变量是指不在某个函数体内声明的变量，如果一个函数体内声明一个static变量，虽然一般环境下编译后该变量符号也在全局区，但不算ASTGlobalVariable，而算ASTVariable
    
    6. `ASTGlobalVariable *getASTGlobalVariable(VarDecl *GVD)`，`VarDecl *getGlobalVarDecl(ASTGlobalVariable *GV)`：VarDecl和ASTGlobalVariable互相转化，注意这里的VarDecl是全局变量的VarDecl

2. namespace Common中的函数

    1. `Stmt *getStmtInFunctionWithID(FunctionDecl *parent, int64_t id)`。用于获取parent中ID为参数id的call site的实际Stmt。也可用于其他情况，但使用时请保证id所代表的Stmt是parent所代表的FunctionDecl中的子节点。若未找到会返回nullptr。

    2. `bool isThisCallSiteAFunctionPointer(Stmt *callsite)`判断某一个call site是不是函数指针引起的函数调用。请**保证传入的参数有效**，即不为空且确实是一个call site

3. CallGraph call_graph：
   
    1. `std::vector<ASTFunction *> &getTopLevelFunctions()`：分析出所有顶层函数，即没有调用者的函数（例如main）

    2.  `ASTFunction *getASTFunction(FunctionDecl *FD) `：通过FD（Clang的函数结构）获得ASTFunction（该Framework的函数结构）

    3.  `std::vector<ASTFunction *> getParents(ASTFunction *F)`, `std::vector<ASTFunction *> getChildren(ASTFunction *F)`：获得某个函数的被调用者和调用者

    4.  `std::vector<std::pair<ASTFunction *, int64_t>> getParentsWithCallsite()(ASTFunction *F)`, `std::vector<std::pair<ASTFunction *, int64_t>> getChildrenWithCallsite(ASTFunction *F)`：获得某个函数的被调用者和调用者，同时获取相应的调用点信息。调用点以Stmt的ID的形式给出，可使用Common.cpp中`getStmtInFunctionWithID(FunctionDecl *parent, int64_t id)`方法获取实际的Stmt

    5.  `std::vector<std::vector<ASTFunction *>> getReverseCallChains(ASTFunction *F, size_t deepth)`：获得某个函数F深度为deepth的逆向调用链。

    5. 上述3和4中的函数在使用前请确保传入的ASTFunction在CallGraph中有相应的节点。使用前请明确CallGraph的相关配置项；**请保证传入的`ASTFunction *`有效**。

    6. **通过ASTFunction获取FunctionDecl后请进行边界检查**，比如判断其是否为`nullptr`，使用`hasBody()`检测该FunctionDecl是否有函数体等。

    7. 对于函数指针FP，其可能指向的函数将加入到Call graph中。对于某一特定的call site，如果函数指针FP此时可能指向函数funA，funB，则`getChildrenWithCallsite`的结果将包括<funA, call site>与<funB, call site>。

    8. call site在通过`getStmtInFunctionWithID`获取实际的`Stmt *`的结果不一定为`CallExpr *`。可能为:
        1. `CXXConstructExpr`。此call site调用了构造函数
        2. `CXXDeleteExpr`。此call site调用了析构函数
        3. `CXXTemporaryObjectExpr`。`CXXConstructExpr`的子类，按照`CXXConstructExpr`的方式处理即可
        4. `CallExpr`。一般的函数调用。
        5. `CXXOperatorCallExpr`。运算符重载。`CallExpr`的子类。lambda表达式（匿名函数）的call site也是这种形式，可通过`getDirectCallee`获取其调用的`FunctionDecl`后，判断其是否为`CXXMethodDecl`，若是，再利用`getPatent`获取其所在`CXXRecordDecl`，使用`isLambda`函数进行判断。
        6. `CXXMemberCallExpr`。类成员函数调用。`CallExpr`的子类。

    9. CallGraph中各个配置项的意义分别为:

        - `showDestructor`:是否包括析构函数。若为false，则不会为析构函数对应的ASTFunction创建相应的CallGraph节点并将其加入Callgraph；若为true，则为其对应的ASTFunction创建相应的CallGraph节点并将其加入Callgraph

        - `showFunctionPtr`:是否显示函数指针相关的信息。若为true，则Call graph构建过程中将考虑函数指针的信息；若为false，则CallGraph将不包括任何函数指针的相关信息

        - `showLambda`:是否包括lambda表达式。若为ture，则CallGraph中将会包括lambda表达式（匿名函数的相关信息；若为false，则忽略lambda表达式

        - `inlineAndTemplate`:是否包括inline函数与Template函数。若为ture，则CallGraph中将包括inline函数与Template函数的信息；若为false，则CallGraph生成过程中将忽略这些函数

        - `showLibFunc`:是否包括第三方库函数（源代码中未定义的函数）。若为true，则CallGraph会保留这些第三方库函数**被调用的信息**；若为false，则CallGraph将忽略这些信息；无论该配置项为true还是false，CallGraph都不会考虑这些第三方库函数的**调用信息**。

        - `ignoreNoCalledSystemHeader`:是否忽略没有被调用的系统头文件中的函数。若为true，则若某一函数是系统头文件中的函数（比如`stdio.h`中的`printf`）且其在整个Call graph没被调用，则在Call graph构建结束后，其会被剔除出Call graph。因为若为false，则没有上述处理。**默认为false，推荐为false**

4. NonRecursiveCallGraph NoRCallGraph: 将已有的CallGraph中的环，即递归调用关系剔除后的CallGraph。若递归调用形式为A->B->C->A->B->C...，则将只保留一层循环，即为A->B->C

    1.  `std::set<ASTFunction *> &getParents(ASTFunction *F)`, `std::set<ASTFunction *> &getChildren(ASTFunction *F)`：获得某个函数的被调用者和调用者


5. Config configure: 用于读取配置文件。具体使用可以参`TemplateChecker::readConfig().`
6. ASTResource resource：

    1. `std::vector<ASTFunction *> &getFunctions(bool use)`：获取所有ASTFunction

    2. `std::vector<ASTFile *> getASTFiles()`：获取所有ASTFiles
    
    3. `std::vector<ASTGlobalVariable *> &getGlabalVars() `：获取所有的全局变量ASTGlobalVariable
7. Point-to/alias analysis 请参考[Readme.md](../include/P2A/README.md)

## BasicChecker

简单来说，BasicChecker就是存储了framework提供的类，让我们在分析的时候可以调用。它的所有子类，都可以基于该framework提供的功能进行分析。虽然名字是关于checker，但是也可以用于分析。

## 相对独立于框架的分析

例子如下（只用于示例，且部分API需要替换）：
``` C++
class GlobalVarDecl : public ASTConsumer, public RecursiveASTVisitor<GlobalVarDecl> {

    public :
    // TraverseDecl tells the frontend library's ASTConsumer to 
    // visit declarations recursively from the AST. Then VisitDecl is 
    // called where you can extract the relevant information.
    void HandleTranslationUnit(ASTContext &Context) override {
        TranslationUnitDecl *decl = Context.getTranslationUnitDecl();
        TraverseDecl(decl); 
    }
    bool VisitDecl(Decl *D)
    {
        if(ParmVarDecl *E = dyn_cast<ParmVarDecl>(D))
            return true;
        if(VarDecl *E = dyn_cast<VarDecl>(D))
        {
            list<VarInfo>::iterator varIterator;
            if(!isStaticVar(E->getQualifiedNameAsString(), &varIterator) && !E->isLocalVarDecl())
            {
                // ...
            }

        }
        return true;
    }
    list<VarInfo>* getVars(){
        // ...
    }
};

void Foo::check(){
    // getASTs是获取所有ASTContext。
    for (const ASTContext &AST : getASTs()) {
        GlobalVarDecl globVar;
        globVar.HandleTranslationUnit(*AST);
        list<VarInfo>* tmp = globVar.getVars();
    }
```

关于TraverseDecl和VisitDecl类似的API请参考[RecursiveASTVisitor](http://clang.llvm.org/doxygen/classclang_1_1RecursiveASTVisitor.html). 其他API例如[FunctionDecl](https://clang.llvm.org/doxygen/classclang_1_1FunctionDecl.html)可以参考对应文档.
