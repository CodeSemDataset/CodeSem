# Point-to analysis


#### 获取给定路径中指针的指向信息

`std::set<const PTAVar *> PointToAnalysis::get_pointee_of_l3(std::list<const CFGBlock *> path, unsigned elem_id, const PTAVar *var)`

#### 获取给定结束点指针的指向信息

`std::set<const PTAVar *> PointToAnalysis::get_pointee_at_point(CFGBlock *pathEnd, unsigned elem_id, const PTAVar *var, unsigned pathLen = 10)`

#### 判断两个变量是否为别名

`bool PointToAnalysis::is_alias_of(std::list<const CFGBlock *> path_1, unsigned elem_id_1, const PTAVar *var_1, std::list<const CFGBlock *> path_2, unsigned elem_id_2, const PTAVar *var_2)`

#### 获取给定变量在给定函数内的别名关系

`std::set<const PTAVar *> PointToAnalysis::get_alias_in_func(FunctionDecl *FD, const PTAVar *var)`  

#### 在程序某一点判断变量是否为别名

`bool PointToAnalysis::is_alias_of_at_point(CFGBlock *pathEnd, unsigned elem_id, const PTAVar *var_1, const PTAVar *var_2, int pathLen)`  

#### 通过标识符获取指向分析变量的内部数据结构

`const PTAVar *PTAVarMap::getPTAVar(std::string key)`
