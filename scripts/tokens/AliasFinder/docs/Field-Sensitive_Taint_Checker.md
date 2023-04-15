# 域敏感污点分析

## 初步分析思路介绍

详情请见 **周严. 基于污点分析的静态漏洞检测可扩展框架[D]. 南京大学, 2017.**

## 代码结构

**taint-check/FunctionEnv.h** : 定义单个`Function/Basic Block`对应的污点环境

**taint-check/TaintChecker.h** ：定义`CallGraph`逆拓扑排序及污点分析入口

**taint-check/TaintEnv.h** ： 定义污点分析具体分析过程相应接口

**taint-check/TaintManager.h** ：污点环境读取与构造

**taint-check/TaintValue.h** ：定义单个变量/成员变量对应的污点信息，其中单个变量/成员变量的污点值采用unsigned进行表示（考虑到后续`FieldVariable/ArrayVariable`的增加，会将其修改为可自定义的多个unsigned串联），初始化时单个tainted-variable对应的污点值中仅有一位为1，在遍历整个函数后，即可通过某个变量污点值中1的位置确定其污染源，其中unsigned最低位为default-taint位，即用于表示无法追踪污点来源的污点信息

## 数据结构

### framework/ASTElement.h

#### 	1. ASTFunction

​		表示分析过程中的单个函数，保存函数名等基本信息，同时存储整个函数需要分析的变量信息：

```
std::vector<ASTVariable *> variables;
std::vector<ASTFieldVariable *> fields;
std::vector<ASTArrayVariable *> array_fields;
std::vector<ASTFieldVariable *> class_fields;
std::vector<ASTArrayVariable *> class_array_fields;
```

#### 	2. ASTGlobalVariable

​		对应全局变量

#### 	3. ASTVariable（下简称V）

​		单个ASTVariable对应单个VarDecl，表示函数中变量

#### 	4. ASTFieldVariable（下简称FV）

​		ASTFieldVariable分为This和Record两种，分别代表class的成员变量和struct/union的成员变量；ASTFieldVariable可能是嵌套成员变量，但嵌套的路径中必定不包含数组类型

#### 	5. ASTArrayVariable（下简称AV）

​		ASTArrayVariable分为This和Record两种，同上；在这两种基础上分为Element和Member两种，分别代表array[i]和array[i].member两种形式

用以下程序举例说明

```
struct student{
	double grade;
	char id[10];
};

struct Classroom {
	int id;
	student leader;
	student students[50];
};

class foo {
public:
	void setClassroom(Classroom *input) {
		classroom->id = input->id;
		classroom->leader.grade = input->leader.grade;
		classroom->student[1].grade = input->student[2].grade;
		classroom->student[1].id[2] = input->student[2].id[3];
	}
private:
	Classroom *classroom;
}
```

分析setClassroom()时，各变量如下：

```
ASTVariable:
	input
ASTFieldVariable:
	input->id
	input->leader
	input->leader.grade
	input->student
ASTThisFieldVariable:
	classroom
	classroom->student
	classroom->leader
	classroom->leader.grade
	classroom->id
ASTArrayVariable:
	input->student[2] //Element类型
	input->student[2].grade //Member类型
	input->student[2].id[3] //Element类型
ASTThisArrayVariable:
	classroom->student[1] //Element类型
	classroom->student[1].id[2] //Element类型
	classtoom->student[1].grade //Member类型
```

### utils/FieldVariableInfo.h

#### 	1. 定位结构体

​		FV和AV分别采用结构体fv_info和av_info进行定位，结构体定义在utils/FieldVariableInfo.h中

```
struct fv_info {
    VarDecl *VD;
    FieldDecl *FD;
    std::vector<FieldDecl *> fathers;
}

struct av_info {
    VarDecl *VD;
    FieldDecl *FD;
    std::vector<FieldDecl *> fathers;
    std::vector<unsigned> index;
};
```

##### 		fv_info：

​			**VD**：FV对应的VarDecl，this类型则VD为空；

​			**FD**：FV对应的FieldDecl；

​			**fathers**：FV所有祖先对应的FieldDecl，不包括自身；

##### 		av_info：

​			**VD**：FV同理；

​			**FD**：只对Member类型AV生效，element类型则FD为空；

​			**fathers**：AV所有祖先对应的FieldDecl，包括FV和AV两种类型祖先，不包括自身；

​			**index**：所有Element类型祖先对应的index，如自身为Element类型则也包括自身index；

​							e.g. a[1].b[2] -->  {1, 2}		a[2].c --> {2}

## 算法阐述

### 1. 构建分析顺序

根据已构造完成的CallGraph确定调用图的逆拓扑序，即从Callee-->Caller的分析顺序

### 2. 污点环境构造

依次分析每个函数的污点环境，首先对函数的污点环境进行构造
**1）构建ASTVariable**
**2）构建ASTFieldVariable**
**3）构建ASTArrayVariable**

​	以上所有读取都只读取函数中**明确出现的变量**，无论是过程内还是过程间都基于读取的这些明确变量来做，至于函数内部执行过程可能会不直接涉及到一些成员变量（例如结构体之间的直接赋值），处理方式在下文说明

### 3. 污点信息分析阶段

​	完成读取后进入到处理阶段，将函数CFG中的BasicBlock按照worklist算法进行迭代处理，迭代过程不再赘述；对于单个BasicBlock，采用顺序分析Stmt的方式进行污点信息传播，该过程主要接口为TaintEnv.cpp中的VisitStmt接口；

​	单个ASTVariable/ASTFieldVariable/ASTArrayVariable有其唯一污点值（过程内唯一），采用2->4->8->16方式进行赋值，方便进行按位操作；

​	在分析Stmt时，根据不同Stmt类型进行处理，针对不同类型Stmt，给出不同的污点传播规则，详见**TaintEnv.cpp**中**visitStmt**接口；

​	部分过程间污点信息传播可以简单理解为**直接赋值**，例如a = b，则直接将b的污点值赋值给a的污点值；部分过程间污点信息传播采用**或**形式进行传播，例如a = b + c，则a的污点值取b和c的污点值按位或；

### 4. 污点分析过程间处理方式

​	主要思想为：将形参与实参一一对应，之后根据Callee中给出的污染值源，对Caller中相应实参进行更新，详见**TaintEnv.cpp**中**updateInterTaintValues**接口

### 5. 全局变量处理方式

​	在ASTManager.cpp中进行全局变量的读取，只读取VarDecl并创建ASTGlobalVariable，在分析过程中遇到全局变量的成员再进行创建；

​	提供CheckGlobalVariable配置项，开启后污点分析会运行两次，以确定全局变量是否被污染以及部分变量是否被全局变量污染；

## 接口列表

为避免接口大量冗余，定义结构体taint_info如下：

```
enum taint_variable_kind {v, fv, av, null, global_v, global_fv, global_av};
struct taint_info {
    union {
        ASTVariable *v;
        ASTFieldVariable *fv;
        ASTArrayVariable *av;
    }variable;
    taint_variable_kind kind;
}
```

即单个taint_info可代表V，FV，AV以及全局变量

### TaintChecker.h

#### 数据结构

`static TaintConfig *taintconfig`：对应污点分析配置项TaintConfig.txt，包含污点分析总配置项，以及对BlackList，WhiteList和具体函数的配置内容

`static TaintManager *taintmanager`：当前分析函数对应的TaintManager

`static ASTManager *astmanager`：污点分析目前需要的astmanager提供的信息仅为全局变量信息，单个函数具体的污点信息存储在其对应的TaintManager中

`std::unordered_map<unsigned int, TaintManager *> TaintChecker::taint_map`：存储函数ID与TaintManager对应关系，key value为对应函数的ID

`std::unordered_map<unsigned int, FunctionEnvironment *> TaintChecker::function_map`：存储函数ID与其对应污点环境的对应关系

#### 相关接口

1. 污点分析入口

    `void check()`：污点分析入口函数，全局变量分析配置项打开时会调用singleTimeCheck两次以给出更准确的全局变量相关污点信息；

    `void singleTimeCheck(bool output)`：单次污点分析，output为false时不输出xml文件；

2. 确认污点分析顺序

   `std::vector<ASTFunction *> getTopoOrder()`：基于之前分析得到的CallGraph构造函数的逆拓扑序（Callee-->Caller)，得到的返回值vector顺序即为进行污点分析的函数顺序；

2. 按逆拓扑序分析对应函数，创建相应环境

   对单个函数分析时，需初始化TaintManger，FunctionEnvironment，并在function_map和taint_map中添加对应关系，初始化函数如下：

   `static void init(ASTFunction *F, FunctionDecl *FD, CFG *function_cfg, TaintManager *taintmanager_);`：TaintChecker初始化函数，其作用事将F对应信息添加到taint_map和function_map中，同时创建其对应的污点环境

   

### TaintManager.h

#### Class TaintManager

##### 污点环境构造函数（无配置项）

```
//添加expr对应ASTFieldVariable
void addMatchedFieldVariables(MemberExpr *expr);

//添加expr对应ASTArrayVariable
void addMatchedArrayVariable(ArraySubscriptExpr *expr);
```

##### 污点环境构造函数（有配置项）

```
//在配置时给出需要配置的成员变量对应的位置数组（在底部配置项README中说明），根据位置数组确定相应ASTVariable/ASTFieldVariable/ASTArrayVariable并添加（若在当前污点环境中不存在）
taint_info addVariableWithPosVec(ASTVariable *root, std::vector<int> index);

//addVariableWithPosVec子接口，分别对应ASTVariable/ASTFieldVariable/ASTArrayVariable的处理
taint_info addVariableWithPos(taint_info info, int pos);
taint_info addFieldWithPos(taint_info info, int pos);
taint_info addArrayWithPos(taint_info info, int index);
```



#### Class TaintBimap

该类通过以下五个unordered_map维护对应关系

```
std::unordered_map<VarDecl *, ASTVariable *> variableMap;
std::unordered_map<fv_info, ASTFieldVariable *, hash_fv_info, cmp_fv_info> fieldVariableSet;
std::unordered_map<fv_info, ASTFieldVariable *, hash_fv_info, cmp_fv_info> thisFieldVariableSet;
std::unordered_map<av_info, ASTArrayVariable *, hash_av_info, cmp_av_info> arrayVariableSet;
std::unordered_map<av_info, ASTArrayVariable *, hash_av_info, cmp_av_info> thisArrayVariableSet;
```

维护该关系是为了能根据AST中此法单元找到其相应污点变量，例如通过VarDecl *找到对应的ASTVariable



### TaintEnv.h

#### 相关接口：

 1. 初始化污点环境

    `Environment::Environment(ASTFunction *F, bool is_entry)`Environment构造函数，共存在三种初始化模式：

     1. 存在配置项配置且该Environment对应entry Basic Block：将配置项中给定参数初始化为tainted，其它参数为untainted，相应接口如下：

        `void Environment::initAsTaintSourceConfig(std::set<std::vector<int>> taint_source)`：配置项对应初始化接口

     2. 不存在配置项且对应entry：将所有形参，形参对应fields和arrays，若函数为成员函数，则同时将所有thisFV和thisAV初始化为tainted；初始化相关接口如下：

        `unsigned Environment::initAllParamFields(taint_info info, unsigned dev)`：将info的所有children初始化为tainted，用于污点环境初始化

    ​	3) 不是entry：所有变量均初始化为untainted

2. 按CFG顺序遍历BasicBlock中的单条Stmt

   `TaintValueV visitStmt(Stmt *S, Environment *env)`：主要visit接口，根据S的具体类型进行处理；

   部分处理逻辑较简单的Expr/Stmt在visitStmt接口中编码，处理逻辑较复杂的Expr/Stmt单独定义接口如下：

   ```
   TaintValueV visitCXXConstructExpr(CXXConstructExpr *CXXE, Environment *env)
   TaintValueV visitMemberExpr(MemberExpr *ME, Environment *env)
   TaintValueV visitArraySubscriptExpr(ArraySubscriptExpr *ASE, Environment *env)
   TaintValueV visitCallExpr(CallExpr *E, Environment *env)
   ```

3. 过程内污点传播相应接口

   `void update_field_sensitive(TaintValueV &lvalue, TaintValueV &rvalue, Environment *env)`：基本update函数，将lvalue值更新为rvalue，其中包含对指针/引用/非指针引用，全局变量等的区分处理

   ```
   //获取this指针污点值
   TaintValueV Environment::getCXXThisValue();
   
   //获取默认构造函数返回值
   TaintValueV getDefaultCXXConstructorValue(std::vector<TaintValueV> param_values);
   
   //按默认方式更新子孙（即root为taint则全为taint，root为untaint则全为untainted），在update_field_sensitive中调用
   void updateLowerLevelDefault(TaintValueV &root, Environment *env, int level);
   
   //更新子孙，在update_field_sensitive中调用
   void updateLowerLevel(TaintValueV &lvalue, TaintValueV &rvalue, Environment *env, int level);
   
   //更新祖先，在update_field_sensitive中调用
   void updateHigherLevel(TaintValueV &lvalue, Environment *env);
   
   //按默认方式更新祖先，在update_field_sensitive中调用
   void updateHigherLeveAsDefaultTaint(TaintValueV &lvalue, Environment *env);
   ```

   

4. 过程间污点传播相应接口

   ```
   //过程间污点传播接口，在visitCallExpr中调用
   TaintValueV updateInterTaintValues(std::vector<TaintValueV> param_values, TaintValueV this_value, Environment *caller_env, Environment *callee_env, bool is_member_func, bool is_constructor);
   
   //获取函数返回值，在updateInterTaintValues中调用
   void getTempReturnValue(std::unordered_map<taint_info, taint_info, hash_taint_info, cmp_taint_info> &param_map, std::unordered_map<taint_info, TaintValueV, hash_taint_info, cmp_taint_info> &info2value_caller,taint_info father_info, TaintValueV callee_value, Environment *callee_env, Environment *caller_env);
   
   //获取形参实参对应关系，在updateInterTaintValues中调用
   void getLowerLevelParamInfo_Inter(taint_info callee_info, taint_info caller_info, std::unordered_map<taint_info, taint_info, hash_taint_info, cmp_taint_info> &res, Environment *caller_env);
   
   //调用blackList/whiteList/TaintSourceConfig函数时进行单独处理
   TaintValueV inFunctionConfigList(ASTFunction *called_function, CallExpr *E, Environment *env, bool &in_function_list);
   ```

   

5. Utils

   ```
   //命令行输出，目前暂未使用
   void Environment::outputTaintInfo(Config &config);
   
   //xml输出
   void Environment::outputAsXML(pugi::xml_document &xmlDoc, int level);
   
   //判定该value中对应变量是否为指针或引用类型（自身或祖先为指针或引用都视作指针或引用类型）
   bool isPointerOrReference(TaintValueV value);
   
   //获取info对应TaintValueV
   TaintValueV *getTaintValueV(taint_info info, Environment *env);
   
   //添加新成员变量
   taint_info addNewField(taint_info info, FieldDecl *fd, Environment *env);
   
   //添加新数组成员变量
   taint_info addNewArrayElement(taint_info info, unsigned index, Environment *env);
   
   //获取变量名称
   std::string getFullName(taint_info info);
   ```

   



### TaintValue.h

该文件中定义了基本污点值类TaintValue和对TaintValue进行包装的污点值类TaintValueV：

TaintValueV中维护单个`shared_ptr<TaintValueV>`表示污点值，采用此种方式是为了区分指针/引用类型的污点值传递与非指针/引用类型污点值传递

## 执行方式&输出结果

运行命令如下：

```
path/to/checker path/to/astList.txt path/to/config.txt path/to/taintConfig.txt
```

输出结果如下：

```
</Function>
<Function name="FunctionName" location="Function_Location">
	<ASTVariable>
		<V name="variable_name" status="tainted" />
		... ...
	</ASTVariable>
	<ASTFieldVariable>
		<FV name="variable_name" status="tainted" />
		... ...
	</ASTFieldVariable>
	<ASTThisFieldVariable />
		<FV name="variable_name" status="tainted" />
		... ...
	</ASTThisFieldVariable>
	<ASTArrayVariable>
		<AV name="variable_name" status="tainted/untainted" />
		... ...
	</ASTArrayVariable>
	<ASTThisArrayVariable />
		<AV name="variable_name" status="tainted/untainted" />
		... ...
	</ASTThisArrayVariable>
	<Global_Variable_As_Sink>
		<Report source="source_variable_name" sink="sink_variable_name" />
		... ...
	</Global_Variable_As_Sink>
	<Global_Variable_As_Source />
		<Report source="source_variable_name" sink="sink_variable_name" />
		... ...
	</Global_Variable_As_Source>
	<Inter_Taint_Spread />
        <Report source="source_variable_name" sink="sink_variable_name" callee_name="callee_name", callee_loc="callee_location"/>
        ... ...
    </Inter_Taint_Spread>
</Function>
```

除输出各变量污染情况，还会输出全局变量导致的污染（Global_Variable_As_Source），全局变量受到的污染（Global_Variable_As_Sink)，过程间污点传递（Inter_Taint_Spread）

## 配置项

配置项示例如下：

```
TaintCheckerConfig
{
    CheckGlobalVariable = false
    PrintLog = 3
    BlackList = true
    WhiteList = true
    TaintSourceConfig = true
}

BlackList
{
    testBlackFunction = 0
    testBlackFunction_2 = 1
}

WhiteList
{
    testWhiteFunction = 1
    testWhiteFunction_2 = 0
}

TaintSourceConfig
{
    ProcessBook
    {
        src_pos = {1, 4, [1]}
        src = {1}
    }

    TestPassClass
    {
        src = {1}
    }
}
```

TaintCheckerConfig为主配置项：

​	CheckGlobalVariable：是否追踪全局变量

​	PrintLog：=0：无输出；=1：输出全局变量污染情况；=2：额外输出过程间污点情况；=3：额外输出每个变量的污染情况

​	BlackList：黑名单开关

​	WhiteList：白名单开关

​	TaintSourceConfig：配置函数污点成员变量

BlackList中给定的函数名对应的函数，被调用时，Caller的所有实参变为tainted，其返回值可配置：blackFunc = 0表示该函数返回值为untainted，=1表示返回值为tainted

WhiteList中给定的函数名对应的函数，被调用时，Caller所有实参变为untainted，其返回值配置方法与BlackList相同

TaintSourceConfig：采用位置数组来定位需要配置的变量，以ProcessBook为例：

```
typedef struct {
    char *name;
    unsigned int pageNum;
    unsigned int bookId;
    unsigned int chapterPage[BUF_LEN];
} Book;

uint32_t ProcessBook(Book &book, uint32_t taintData){
    uint32_t taintVal = book.bookId;
    uint32_t untaintVal = 0;
    book.pageNum = taintData;
    book.bookId = untaintVal;
    // VisitData(taintVal); // 该处数据流需要被追踪
    // VisitData(untaintVal); // 该处数据流无需被追踪
    return book.bookId;
}
```

`src_pos = {1, 4, [1]}`表示如下成员变量：

​	1 ：函数第一个参数，即book

​	4：第四个成员变量，即book的第四个成员变量chapterPage

​	[1]：数组下标为1的成员，即book.chapterPage[1]

故配置book.chapterPage[1]为该函数输入的唯一污染源，配置的污染源可以有多个，形式如ProcessBook配置方式；
