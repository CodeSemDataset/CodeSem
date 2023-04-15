# 冗余保护设计文档

## 一、设计思路

### 检测流程

1. 读取配置项
    1. 根据框架代码中`configure`变量，读取`config.txt`中的`RedundantJudgement`配置项块，初始化**冗余保护检测**配置项。
    2. 根据`RedundantJudgement`配置项块中`SpecificTargetCheck`和`SpecificTargetConfigPath`两个配置项，读取**针对指定对象的冗余保护检测**配置文件，初始化指定对象信息，包括指定检测函数、指定函数的参数或变量。
2. 分析函数信息
    1. **过滤不进行分析的函数：** 库函数、没有函数体的函数等。
    2. **分析函数中的保护语句：** 递归遍历函数ast，收集`if`、`while`、`for`、`do……while`、`return`语句中的条件表达式，并分析其保护的变量。
    3. **分析函数中的使用点：** 递归遍历函数ast，收集函数中的**数组下标变量**、**指针变量**和**除数变量**的使用点。
3. 分析逆向调用链
    1. 对于每个待分析的callee函数，对其每个待分析的参数变量（使用点）或对其所有参数变量（无使用点检测模式），分析并收集其逆向调用链。
    2. 以每个callee函数为的起点，基于深度优先搜索（DFS）的算法思想，对函数调用图（CallGraph）进行指定深度（`Depth）的递归遍历，同时根据callee参数对应的不同实参变量对调用点（callsite）进行分类，获取逆向调用链（callchain）。
    3. 即对于**每个待分析的callee函数**的**每个待分析的参数**，针对其在调用过程中的对应的**每个实参变量**，获取若干条**长度小于等于Depth + 1**的从callee到某个top caller的**逆向调用链**，并生成一条记录用以后续分析冗余保护语句。
    4. 该过程算法思想与DFS算法的核心思想相同，但不同的是，DFS算法保证在遍历过程中每个结点只访问一次，而本过程算法思想只保证在遍历过程中分析每条调用链时该调用链上的每个结点只访问一次，而在分析不同的调用链时，同一结点可能被多次访问。
4. 分析保护语句
    1. 对于步骤3中生成的逆向调用链记录，结合函数的保护语句信息，分析是否存在过程间的冗余保护语句，在逆向调用链记录基础生成对应的冗余保护语句记录。
    2. 由于部分函数之间不存在对应的冗余保护语句，导致步骤4.1中冗余保护语句记录中有重复的记录，删除重复的记录，生成最终的冗余保护检测结果。

## 二、配置项使用说明

冗余保护检测模块RedundantJudgement Checker所需要的配置项主要分为两部分：

1. 在工具ESAF的配置文件`config.txt`中进行配置，用以开启`RedundantJudgement Checker`，并对检测模式进行配置。
2. `RedundantJudgement Checker`特有的配置文件，用于**配置指定的检测对象**，配置文件采用[toml++](https://github.com/marzer/tomlplusplus)格式，配置文件名可在`config.txt`的`RedundantJudgement`块中进行配置。

### 1. config.txt

对于RedundantJudgement Checker，需要配置的配置项主要如下：

以下配置项用于开启ESAF工具中的冗余保护检测模块
``` C++
CheckerEnable
{
	TemplateChecker = true
	CallGraphChecker = true  //开启CallGraph构建模块
	SplitBasicBlockwithFunCall = false
	CFGTest = false
	PointToAnalysis = false
	RedundantJudgement = true   //开启冗余保护检测模块
}
```
以下模块配置终端信息的打印。
```C++
PrintLog
{
	level = 1   
    /*配置终端打印信息的等级，level=1时打印所有结果信息，level=2时仅打印各结果数量信息。
    若结果信息较多时，可使用level=2查看简要信息*/
	RedundantJudgement = true
}
```
以下模块主要配置CallGraph构建信息。
```c++
CallGraph
{
	showDestructor = true
	showFunctionPtr = true
	showLambda = true
	inlineAndTemplate = true
	showLibFunc = true
	ignoreNoCalledSystemHeader = false
	printToConsole = false
}
```
**以下模块配置冗余保护模块检测模式信息。**
```c++
/*
配置项UsePointCheck和NoUsePointCheck可以同时开启，将会分别进行基于使用点的检测和无使用点的检测，分别生成结果。
配置项InterCheck和IntraCheck可以同时开启，将会分别进行过程间的检测和过程内的检测，分别生成结果。
RJ_Inter_Result_UP.xml：过程间基于使用点检测结果
RJ_Inter_Result_NUP.xml：过程间无使用点检测结果
RJ_Intra_Result_UP.xml：过程内基于使用点检测结果
RJ_Intra_Result_NUP.xml：过程内无使用点检测结果
RJ_UsePoint.xml：使用点信息
*/
RedundantJudgement
{
	UsePointCheck = true    //是否基于使用点的冗余保护检测(true/false)
	NoUsePointCheck = false //是否进行无使用点的冗余保护检测(true/false)
	InterCheck = true       //过程间检测(true/false)
	IntraCheck = false      //过程内检测(true/false)
	SpecificTargetCheck = false //是否针对指定目标进行冗余保护检测(true/false)
	SpecificTargetConfigPath = specific_target_config.toml //指定目标配置文件路径，要求toml++格式
	PrintUsePointsInfo = false  //是否打印使用点信息(true/false)
	CheckDepth = 2  //过程间检测深度，即逆向调用链从callee到top caller的长度为CheckDepth+1
}

```

### 2. 配置指定的检测对象

配置文件specific_target_config.toml对**配置指定的检测对象**进行配置，配置文件采用[toml++](https://github.com/marzer/tomlplusplus)格式，配置文件名可在`config.txt`的`RedundantJudgement`块中进行配置。配置文件支持2种配置格式。

1. 函数名+参数索引。

一个table代表一个完整的配置项，如下示例，table名为`specific_target_1`。
tabel中包含两个元素：1）函数的`function_fullname`变量。函数的fullname格式为函数名加上函数各个参数的类型，其中函数名和各个参数类型之间用空格间隔，如：**函数名+" "+参数类型1+" "+参数类型2+" "+参数类型3……** 2） 记录函数参数索引的array。如下示例，array名为`target_param_idx`，在**中括号[]内填写需要检测的函数参数索引**，索引必须为大于等于0的整数，索引之间用逗号间隔。

```toml
#本示例指定函数foo_1(int i, int j, int k)的第0个和第2个参数为检测对象
[specific_target_1]
function_fullname = "foo_1 int int int"
target_param_idx = [0, 2]
```

2. 函数名+变量

一个table代表一个完整的配置项，如下示例，table名为`specific_target_2`和`specific_target_3`。
tabel中包含两个元素：**1）** 函数的`function_fullname`变量。函数的fullname格式为函数名加上函数各个参数的类型，其中函数名和各个参数类型之间用空格间隔，如：**函数名+" "+参数类型1+" "+参数类型2+" "+参数类型3……** 。**2）** 记录函数中变量的array。如下示例，array名为`target_var`，在**中括号[]内填写需要检测的变量类型+" "+变量名**，变量用双引号""包围，变量之间用逗号间隔。

```toml
#本示例指定函数foo_1(int i, int j, int k)的中的数组int array_1[10]和bool array_2[5][6]的下标变量为检测对象
[specific_target_2]
function_fullname = "foo_1 int int int"
target_var = ["int [10] array_1", "_Bool [5][6] array_2"]

#本示例指定函数foo_3()的int指针变量int *p1为检测对象
[specific_target_3]
function_fullname = "foo_3"
target_var = ["int * p1"]
```

以下再给出一个针对华为测试用例的配置项示例

```toml
# test for hw-case
[specific_target_5]
function_fullname = "VisitArray const Teacher * int"
target_param_idx= [1]

[specific_target_6]
function_fullname = "BookType1Hdl Student * Book *"
target_var= ["Student * stu_p"]
```

3. **配置项注意事项！**

    1. table名没有特定要求，但不同table不能重名。
    2. table内变量名`function_fullname`、数组名`target_param_idx`、数组名`target_var`不能改变，其中`target_param_idx`只能用于指定**函数参数**，`target_var`只能用于指定**变量**。
    3. `function_fullname`的等号右边必须为**双引号**包围的字符串，其函数名和参数类型名之间必须有**一个空格**。在ESAF中可通过API `std::string common::getFullName(FunctionDecl *FD)`获得。
    4. 在`target_var`数组内指定变量时，变量必须为**类型名+空格+变量名**，且由**双引号**包围。
    5. 请注意在Clang中将**bool类型**记录为**字符串"_Bool"**！
    6. 在填写指针类型变量时，请注意**基础类型和指针符号\*之间必须有一个空格，指针符号\*和变量名之间必须有一个空格**。
    7. 如果配置指定对象为**数组**变量，将会对**数组的下标**变量进行检测。
    8. 请注意对于**UsePointCheck**检测，可以采用`target_param_idx`或`target_var`配置指定对象；对于**NoUsePointCheck**检测，只能使用`target_param_idx`配置指定对象，其中过程内的无使用点检测（IntarCheck+NoUsePointCheck），只能配置到指定函数，无法配置到具体变量。

    


## 三、 API 说明

0. 冗余保护检测RedundantJudgement Checker的检测函数

    根据输入的astList.txt文件和config.txt文件，对源程序进行冗余保护分析。

    `void RedundantJudgement::check()`

1. 读取配置项

    读取RedundantJudgement对应的config.txt和specific_target_config.toml文件（文件名可以通过配置项更改），前者为ESAF检测配置项，后者为针对特定目标的冗余保护检测配置文件。

    `void RedundantJudgement::initialize_RJ_checker_configuration()`

2. 分析函数信息

    1. 分析函数信息，其参数为所分析函数的ast。

        `bool RedundantJudgement::analyse_func_info(ASTFunction *ast_func)`

    2. 递归遍历函数ast，收集函数中的条件表达式（if、while、for、do……while、return）。

        `void FuncInfo::initialize_ifstmts()`

        将复合条件表达式拆分为简单条件表达式，为递归函数，其参数依次为原条件表达式，当前条件表达式，子条件表达式。

        `void FuncInfo::traverse_compound_cond(const Expr *expr, Expr *cond, const Expr *sub_cond)`

    3. 递归遍历函数ast，收集函数中的使用点（数组下标、指针、除数）。

        `void FuncInfo::initialize_use_points()`

        分析数组下标使用点。

        `void FuncInfo ::analyse_array_index()`

        分析指针使用点。

        `void FuncInfo::analyse_pointer()`

        分析除数使用点。

        `void FuncInfo::analyse_div0()`

        判断使用点是否合法，参数为使用点变量。

        `bool FuncInfo::is_legal_usepoint(DeclRefExpr *dre)`

    4. 将使用点信息输出到文件或打印到终端。

        `void RedundantJudgement::print_use_points_info()`

3. 过程间冗余保护分析

    1. 对待检测的callee函数进行过程间冗余保护分析。

        `void RedundantJudgement::inter_check()`

    2. 针对callee函数的参数param分析逆向调用链，其参数依次为callee函数的FunctionDecl、caller函数的FunctionDecl、callee函数的所检测的参数索引、结果记录变量。

        `void RedundantJudgement::check_caller(FunctionDecl *callee_fd,
                                      FunctionDecl *caller_fd,
                                      size_t param_idx,
                                      RJ_ErrorInfo res)`

    3. 根据调用链记录分析冗余保护语句，其参数为所分析的使用点变量。

        `void RedundantJudgement::check_cond(ValueDecl *vd)`

    4. 打印过程间冗余保护检测结果

        `void RedundantJudgement::print_RJ_result()`

4. 过程内冗余保护分析

    对待检测的函数进行过程内冗余保护分析

    `void RedundantJudgement::intra_check()`

5. 其他函数
    1. 判断变量是否是函数的参数，返回对应的参数索引，参数依次为函数的FunctionDecl和被判断的变量。

        `int is_param(FunctionDecl *fd, DeclRefExpr *dre)`

        `int is_param(FunctionDecl *fd, const ValueDecl *vd)`

    2. 获取语句的源码，作为string返回，参数为语句。

        `string get_stmt_string(const Stmt *S)`

    3. 获取语句的位置信息，作为string返回，参数为语句和所在的函数。

        `string get_location(const Stmt *S, FunctionDecl *fd)`

    4. 获取语句信息，包括位置信息和源码，用符号^标识语句在源码中的位置，作为string返回，参数为语句和所在函数。

        `string get_stmt_info(const Stmt *S, FunctionDecl *fd)`
