# ESAF 配置文档

该文档分为两部分，第一部分是[已有配置项说明](#已有配置项说明)，第二部分是[配置项说明的格式要求](#配置项说明的格式要求)  

## 已有配置项说明

```C++
/*
 * 框架的配置项，用于指示启动（或关系）特定分析模块。
 */
CheckerEnable
{
	// 关闭(false)或开启(true)示例检查器。
	TemplateChecker = false 
	// 关闭(false)或开启(true)CallGraph。
	CallGraphChecker = false
	SplitBasicBlockwithFunCall = true
	CFGTest = false
	PointToAnalysis = false
}

PrintLog//打印(true)或不打印(false)分析过程,开发用，不需要更改配置项
{
	level = 0
	taintChecker = false
	TemplateChecker = false
	arrayBound = false
	recursiveCall = false
	divideChecker = false
	memoryOPChecker = false
}

Framework//queue_size是调整加载进内存的ast数目，内存越多建议这个值越大
{
	queue_size = 600
}

TemplateChecker
{
	request_fun = 2
}

CFGTest
{
	request_fun = 2
	CFGTest = false
	ICFGTest = false
}

/*
 * CallGraph的配置项。依赖于framework。
 * 请保证 queue_size 的数值大于实际 AST 文件数量的一半。
 * queue_size 的大小对分析速度有影响，queue_size越大速度越快。
 */
CallGraph
{
	// 包括(true)或忽略(false)析构函数。
	showDestructor = true
	// 进行(true)或不进行(false)简单函数指针分析。
	showFunctionPtr = false
	// 包括(true)或忽略(false)lambda表达式(匿名函数)。
	showLambda = true
	// 包括(true)或忽略(false)模板函数与内联函数。
	inlineAndTemplate = true
	// 包括(true)或忽略(false)库函数。
	showLibFunc = true
	// 决定是否将孤立的系统头文件中的函数剔除出CallGraph。
	// 若为true, 则剔除; 若为false, 则不剔除。
	// 孤立函数: 没有调用其他函数且没有被其他函数调用的函数。
	ignoreNoCalledSystemHeader = false
	// 决定是(true)否(false)将CallGraph以简单的形式打印到console上。
	printToConsole = false
}

P2A
{
	analysisSystemHeader = false

	Point_to_test1 = false
	Point_to_test2 = false
	Alias_test1 = false
	Alias_test2 = false
	Alias_test3 = false
}
LoopUpbound
{
	//循环上界阈值，告警循环上界超过阈值的循环语句
	threshold = 0
	//过程间的最大调用深度
	depth = 2
	//内外层跨过程循环的最大层数
	nestedLoopCount = 3
}
RedundantJudgement
{
	// check with use point
	UsePointCheck = true
	// check without use point
	NoUsePointCheck = false
	// check for specific target variables or parameters
	SpecificCheck = true
	// print use points information
	PrintUsePointsInfo = true
	// check depth for interprocedural check
	CheckDepth = 2
	// the level of detail of the output information
	Output = 0
}
```

## 配置项说明的格式要求

如果增加了新的配置项，请在此以如下格式增加配置项的描述：
```C++
/*
 * 记录针对如下模块的配置项以及依赖哪些配置项
 */
ConfigExp
{
	// 解释可选的配置以及对应的含义
	ConfigA = false 
	// 解释可选的配置以及对应的含义
	CallGraphChecker = false
}
```
