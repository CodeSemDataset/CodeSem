# 代码组织 和 总体介绍
以下是ESAF源代码组织树，其中只列举了**关键的文件夹或文件**，旨在说明源代码文件是如何组织的，**使用该框架时也应该遵循该组织结构**。
```
.         
|-- docs                            项目文档
|   `-- Contributing.md                   项目贡献指南
|   `-- Structure.md                      项目结构介绍
|   `-- Framework.md                      基础分析框架介绍，部分API使用方式
|   `-- Config.md                         配置文档说明
|   `-- Z3Solver.md                       约束求解接口介绍
|   `-- ArrayBoundChecker.md              数组越界检测模块介绍


|-- benchmark                       测试评估基准
|   `-- README.md                   	   benchmark构建指南
|   `-- genastcmd.py                      用于生成AST文件以及AST序列

|-- include                         项目头文件
|   `-- framework                         基础分析框架
|   `-- CFG                               控制流图模块
|   `-- PointToAnalysis                   上下文敏感的指向分析
|   `-- taint-check                       污点分析框架
|   `-- checkers                          具体的分析、检测模块
|   `-- solver                          约束求解接口

|-- lib                             基础平台源文件   
|   `-- framework                         基础分析框架。提供分析需要使用的通用功能
|       |-- ASTManger                         AST管理模块。用于获取CFG、ASTFunction等资源
|       |-- CallGraph                         函数调用图模块。用于获取函数调用信息
|       |-- Common                            通用功能模块。包含分析中需要常用到的功能
|       |-- Config                            配置管理模块。对配置文件进行预处理，提取配置信息
|       |-- Logger                            系统日志输出模块
|       |-- DiagnosticManager                 检测报告模块

|   `-- CFG                               控制流图模块
|       |-- CFG.cpp                           Clang CFG的全部功能及扩展
|       |-- SACFG.cpp                         全局CFG

|   `-- PointToAnalysis                   上下文敏感的指向分析

|   `-- taint-check                       污点分析框架
|       |-- TaintChecker.cpp                  进行污点分析，保存污点信息用于后续的检测模块
|       |-- TaintInterface.cpp                提供对外接口

|   `-- checkers                          具体的检测模块
|       |-- TemplateChecker.cpp                检测模板
|       |-- Checker1.cpp
|       |-- ArrayBoundChecker                   数组越界检测模块

|   `-- Solver                          约束求解接口

|-- tools                           在基础平台上构建的分析,检测工具   
|   `-- main.cpp                          调用分析、检测模块，生成工具

|-- tests                           回归测试
|   `-- TemplateChecker                   测试模板
|       |-- README.md                          编译使用工具说明
|       |-- example.cpp                        测试用例源文件
|       |-- astList.txt                        生成的AST文件序列
|       |-- config.txt                         配置文件

```
