#  AST2Graph
## Prerequisites

- LLVM >= 8.0
- CMake >= 3.10

## How to compile

There are two approaches to compile AST2Graph:

1. If you built LLVM and installed it, you should specify variable LLVM_PREFIX which represents the path to your LLVM install directory;
2. If you built LLVM but did not install it, you should specify variable LLVM_BUILD which represents the path to your LLVM build directory.

We recommend the first approach.

```shell
$ cd AST2Graph
$ mkdir cmake-build-debug
$ cd cmake-build-debug
# use LLVM install directory
$ cmake -DLLVM_PREFIX=${LLVM_PREFIX} -D CMAKE_BUILD_TYPE=Release ..
# use LLVM build directory
$ cmake  -DLLVM_BUILD=${LLVM_BUILD} -D CMAKE_BUILD_TYPE=Release ..
$ make
$ # if make failed and reports missing some header file, then consider install gcc/g++ that supports c17.
`````

## How to run

```shell
$ cd ${project.root}/tests/AST2Graph
$ clang++ -emit-ast -c example.cpp
$ ../../cmake-build-debug/tools/AST2Graph/AST2Graph astList.txt config.txt dict.txt
$ # the following code is a more concrete example.
$ export LD_LIBRARY_PATH=/home/shared/llvm-12.0.0-prebuild/lib/
$ /home/shared/AST2Graphs/chenyang-graph/build/tools/AST2Graph/AST2Graph ~/Downloads/empirical_study/mysql-8.0.25/build-ast/astList.txt ../../AST2Graph/tests/AST2Graph/config.txt ../dict.txt
$ # I have comment out path-to-llvm/llvm/../clang/include/clang/AST/Expr.h:1839 for avoid unnecessary assert
```

## Function Of The Project

generate AST from source code
