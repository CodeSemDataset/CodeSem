#include <ctime>
#include <fstream>
#include <iostream>
#include <string>

#include <clang/Tooling/CommonOptionsParser.h>
#include <llvm-c/Target.h>
#include <llvm/Support/CommandLine.h>

#include "framework/Common.h"
#include "checkers/AST2Graph.h"
#include "checkers/PDG2Graph.h"
#include "checkers/PDG2TokenSequence.h"
#include "framework/Config.h"
#include "framework/WordDict.h"


using namespace clang;
using namespace llvm;
using namespace clang::tooling;

int main(int argc, const char *argv[]) {
  LLVMInitializeNativeTarget();
  LLVMInitializeNativeAsmParser();

  WordDict dict(argv[1]);

  std::vector<std::pair<std::string, std::string>> allASTs;
  allASTs.push_back(std::make_pair("tmux", "/bigdata/qian/tmux/build-ast/astList.txt"));
  allASTs.push_back(std::make_pair("git", "/bigdata/qian/rebuild-git/git/astList.txt"));
  allASTs.push_back(std::make_pair("leveldb", "/bigdata/qian/leveldb/build-ast/astList.txt"));
  allASTs.push_back(std::make_pair("h2o", "/bigdata/qian/alias-analysis/wy-c-projects/h2o/build-ast/astList.txt"));
  allASTs.push_back(std::make_pair("the_silver_searcher", "/bigdata/qian/alias-analysis/wy-c-projects/the_silver_searcher/build-ast/astList.txt"));
  allASTs.push_back(std::make_pair("protobuf", "/bigdata/qian/alias-analysis/wy-cpp-projects/protobuf/build-ast/astList.txt"));
  allASTs.push_back(std::make_pair("aria2", "/bigdata/newdisk/qian/aria2-1.36.0/build-ast/astList.txt"));
  allASTs.push_back(std::make_pair("libgit2", "/bigdata/qian/alias-analysis/wy-c-projects/libgit2/build-ast/astList.txt"));
  allASTs.push_back(std::make_pair("fish-shell", "/bigdata/newdisk/zhangchi/fish-shell/build-ast/astList.txt"));
  allASTs.push_back(std::make_pair("redis", "/bigdata/qian/redis/astList.txt"));
  allASTs.push_back(std::make_pair("mysql", "/home/qian/Downloads/empirical_study/mysql-8.0.25/build-ast/astList.txt"));
  allASTs.push_back(std::make_pair("gcc", "/home/qian/Downloads/empirical_study/gcc-10.3.0-wy/build-ast-12/astList.txt"));
  allASTs.push_back(std::make_pair("linux", "/home/qian/Downloads/empirical_study/wy-linux/linux-5.3.6/astList.txt"));
  allASTs.push_back(std::make_pair("cpython", "/bigdata/newdisk/qian/projects/cpython-3.10.8/build-ast-llvm12/astList.txt"));
  allASTs.push_back(std::make_pair("llvm15", "/bigdata/newdisk/qian/projects/llvm-project-15.0.2.src/build-ast-llvm12/astList.txt"));
  allASTs.push_back(std::make_pair("php", "/bigdata/newdisk/qian/projects/php-8.1.11/build-ast-llvm12/astList.txt"));
  allASTs.push_back(std::make_pair("qemu", "/bigdata/newdisk/qian/projects/qemu-5.2.0/build-ast-llvm12/astList.txt"));

  for(auto iter = allASTs.begin(); iter != allASTs.end(); ++iter) {
    std::vector<std::string> ASTs = initialize(iter->second);
    std::list<std::unique_ptr<ASTUnit>> ASTQueue;
    std::vector<FunctionDecl*> funcs = common::getFunctions(ASTs, ASTQueue);
    
    PDG2Graph p2g(funcs, dict);
    p2g.setRootPath("/bigdata/newdisk/chenyang/pretrain/PDG2Graph/tests");
    p2g.setProgramName(iter->first);
    p2g.transform();

    PDG2TokenSequence p2t(funcs, dict);
    p2t.setRootPath("/bigdata/newdisk/chenyang/pretrain/PDG2Graph/tests");
    p2t.setProgramName(iter->first);
    p2t.transform();
  }
  
  return 0;
}
