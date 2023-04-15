# 循环上界设计说明书

### 设计思路

**循环上界指的是循环语句的最多执行次数。算法的核心在于找出循环控制变量，计算循环上界所依赖的表达式的值，以及根据循环模式总结相应的公式并计算最终结果。**

整个分析过程大致如下：

1.  定位程序中的循环语句并识别循环控制变量。
2.   根据for循环和while循环的语句模式，分析循环变量的数据依赖关系。一般包括循环变量初始表达式、终止表达式和增量表达式。
3.   递归计算循环依赖表达式的可能值。其中变量的值使用数据流分析进行估算。
4.   依据循环结构归纳循环上界的公式计算最后结果。


- - -

### 实现概况
1. 入口为`check()`函数，定位程序中的循环语句，对每一个循环调用`analyze_loopstmt()`。
2. `analyze_loopstmt()`里调用`analyze_condition()`先分析条件，再调用`analyze_body()`分析循环体。在这两个函数中分析计算循环上界所需要的表达式和值。之后根据这些依赖值，对不同的循环模式进行循环上界的计算。
3. `analyze_condition()`中，通过`get_init_value()`,`get_end_value()`,`get_incre_value()`分别获取循环初始值，终止值，增量值。分析方法都是首先匹配语句模式，提取出需要计算的表达式，再通过数据流分析来计算表达式中变量的值，再计算表达式的值。


- - -

### 实现细节

**1. 过程内和过程间的变量值的分析估算**
`analyze_variant()`使用数据流分析，计算一个变量可能的值。
`analyzestmt()`函数为数据流转换函数。其参数为待分析语句、变量在执行语句前的值，函数执行完后会将该值更新为执行语句后的值。可以在此基础上进行二次开发，补充更多、更细致的数据流转换规则。

```C++
bool analyze_variant(expr,int &expr_value) {    
//形参为待分析变量，和变量当前的值，能得到具体值返回true，不能返回false
    if (expr is formal_parameter) {    //变量来自于形参
        for (caller : get_callers) {    //进行过程间分析，获取当前函数所有调用者
            get_actual_parameter;    //在caller中得到调用点，并根据形参的位置匹配对应的实参
            expr_value=analyze_variant(actual_parameter);    //递归分析实参的值并更新expr_value
        }
    }
    //进行过程内的分析
    for (stmt : cfg) {    //遍历 cfg 
        if (has expr in stmt) {    //如果语句里面包含需要分析的变量
 	    analyzestmt(stmt,expr_value);    //根据数据流转换函数，更新变量的值
        }
    }
}

```

```C++
bool analyzestmt(stmt, expr,int &expr_value) {
//形参为待分析语句、待分析变量和当前变量值，能得到具体值返回true，不能返回false
    switch stmt->getStmtclass()
        case binaryoperator: {//二元运算
        if (bop->getopcode == assign_opcode) { //赋值运算
             expr_value=calculate_expr_value(bOP->getrhs());
        }
        else if (bop->getopcode == BO_GT || bop->getopcode == BO_GE) {//关系运算>或>=
            if (is_in_if(bop) && has breakstmt in ifstmt) {//如果该二元运算在if语句中并且该if语句中有break，则计算该条件右值
                expr_value = calculate_expr_value(bOP->getrhs());
            }
        }
        case DeclStmtClass： ...//初始化语句
        case CompoundAssignOperatorClass： ...//复合赋值运算语句
    }
}


```

**2. 表达式的计算**
`calculate_expr_value()`函数用于计算表达式的值。方法中基础表达式所排列组合形成的表达式都可计算。可以增加对于更多基础表达式的计算方法。
```C++
bool calculate_expr_value(expr,int &expr_value) {
//形参为待计算表达式，能得到具体值返回true，不能返回false
    switch
        case binaryoperator：{ //二元运算
            rhs_value = calculate_expr_value（bOP->rhs）；//计算右值
            lhs_value = calculate_expr_value（bOP->lhs）；//计算左值
              swith opcode ://根据二元运算符进行对应的计算
                case +:    return rhs_value + lhs_value;
                case -: ...
    	}
	case callexpr ：{//函数调用
		get_return_expr;//获取该函数的返回表达式
		calculate_expr_value(return_expr);//递归计算该表达式的值
	}
        case declrefexpr: {//普通变量
                    analyze_variant(expr);
                }
        case conditionexpr ...//三元运算
}

```
- - -

### 不同循环结构的分析方法
#### 基础循环结构

1. for循环：for(表达式1；表达式2；表达式3）
    *     循环控制变量为表达式1的左值，初始表达式为表达式1的右值。
    * 	终止表达式为表达式2的右值，
    *     在表达式3中提取增量表达式，对于i++、i—这样的单目运算增量值为1。i+=x则增量表达式为x。通过前述方法计算各表达式的值。

2. while循环：
* while(i<x){} 
   * 循环控制变量为i，通过调用analyze_variant(i)获取i进入循环前的初始值，通过调用analyze_variant(x)获取其终止值，如果其循环体中存在break语句，则用break的条件作为循环终止条件。
* while(i){}
	* 循环控制变量为i，通过调用analyze_variant(i)获取i进入循环前的初始值，查找循环体中的break语句，其所在if条件即为终止条件，从中提取终止表达式。

3. 范围for语句，遍历静态数组的情况。 for (auto item: nums) 其中nums为静态数组。
4. 对于嵌套循环，包括内层循环和外层循环之间没有依赖关系以及内层循环变量依赖于外层循环的模式，都有对应的计算方法。
