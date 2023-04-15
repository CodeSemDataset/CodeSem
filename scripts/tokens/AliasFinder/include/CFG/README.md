# CFG

如果使用此CFG，请将原头文件中
`#include <clang/Analysis/CFG.h>`
改为
`#include “CFG/SACFG.h”`

#### 获取与CFG对应的Decl，此Decl是在调用buildCFG时传参进去的Decl

`const Decl* CFG::getParentDecl()`

#### 获取CFG拓扑排序

`std::vector<CFGBlock *> CFG::getTopoOrder()`

#### 获取非循环的基本块后继，循环拆分方法同拓扑排序中相同

`std::vector<CFGBlock *> CFG::getNonRecursiveSucc(CFGBlock *curBlock)`

#### 获取函数调用的基本块

`std::set<CFGBlock *> CFG::getFuncCallBlock(FunctionDecl *funcCall)`  
必须使用函数调用作为基本块分割

#### 以函数调用为基本块分割

在配置文件的`CFG`中将`SplitBasicBlockwithFunCall`设置为`true`

#### 以New语句为基本块分割

在配置文件的`CFG`中将`SplitBasicBlockwithCXXNew`设置为`true`

#### 以Constuct语句为基本块分割

在配置文件的`CFG`中将`SplitBasicBlockwithCXXConstruct`设置为`true`

#### 获取两个基本块之间的可达路径

`std::vector< std::vector<CFGBlock *> > CFG::getReachablePath(CFGBlock *startBlock, CFGBlock* endBlock)`



# InterProcedureCFG

如需使用请包含头文件
`#include "CFG/InterProcedureCFG.h"`
必须使用函数调用作为基本块分割

#### 获取基本块在全局控制流图中的前驱与后继

`std::vector<CFGBlock *> InterProcedureCFG::getPred(CFGBlock *block, bool isNoneRecursive = false)`  
`std::vector<CFGBlock *> InterProcedureCFG::getSucc(CFGBlock *block, bool isNoneRecursive = false)`
