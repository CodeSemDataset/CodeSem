#include <ctime>
#include <fstream>
#include <iostream>
#include <string>

#include <clang/Tooling/CommonOptionsParser.h>
#include <llvm-c/Target.h>
#include <llvm/Support/CommandLine.h>

#include "framework/Common.h"
#include "checkers/AST2Graph.h"
#include "framework/Config.h"
#include "framework/WordDict.h"
#include "framework/CSVRead.h"

using namespace clang;
using namespace llvm;
using namespace clang::tooling;

std::vector<std::string> program_names = {"tmux", "gcc", "h2o", "linux", "protobuf", "libgit2", "mysql", "redis", "the-silver-searcher", "git"};
std::string coarse_grained_alias_path = "/bigdata/newdisk/chenyang/alias_fine_tune/dataset_coarse_grained";
std::string fine_grained_alias_path = "/bigdata/newdisk/chenyang/alias_fine_tune/dataset_fine_grained";

int main(int argc, const char *argv[]) {
  LLVMInitializeNativeTarget();
  LLVMInitializeNativeAsmParser();

  CSVRead csvread(coarse_grained_alias_path, program_names);
  csvread.setASTListPath("curl", "/bigdata/qian/curl-curl-7_79_0/build-ast/astList.txt");
  csvread.setASTListPath("tmux", "/bigdata/qian/tmux/build-ast/astList.txt");
  csvread.setASTListPath("h2o", "/bigdata/qian/alias-analysis/wy-c-projects/h2o/build-ast/astList.txt");
  csvread.setASTListPath("libgit2", "/bigdata/qian/alias-analysis/wy-c-projects/libgit2/build-ast/astList.txt");
  csvread.setASTListPath("the-silver-searcher", "/bigdata/qian/alias-analysis/wy-c-projects/the_silver_searcher/build-ast/astList.txt");
  csvread.setASTListPath("protobuf", "/bigdata/qian/alias-analysis/wy-cpp-projects/protobuf/build-ast/astList.txt");
  csvread.setASTListPath("redis", "/bigdata/qian/redis/astList.txt");
  csvread.setASTListPath("mysql", "/home/qian/Downloads/empirical_study/mysql-8.0.25/build-ast/astList.txt");
  csvread.setASTListPath("gcc", "/home/qian/Downloads/empirical_study/gcc-10.3.0-wy/build-ast-12/astList.txt");
  csvread.setASTListPath("linux", "/home/qian/Downloads/empirical_study/wy-linux/linux-5.3.6/astList.txt");
  csvread.setASTListPath("git", "/bigdata/qian/rebuild-git/git/astList.txt");
  csvread.readAllCSV();

  WordDict dict_ast("dict_ast.txt");
  AST2Graph a2g(dict_ast, csvread, program_names);
  a2g.transform();
  dict_ast.storeDict("dict_ast_final.txt");

  return 0;
}
