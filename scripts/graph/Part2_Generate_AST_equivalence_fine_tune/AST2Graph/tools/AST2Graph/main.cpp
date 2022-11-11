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

std::string root_path_coarse_grained = "/bigdata/newdisk/chenyang/equivalence_fine_tune/input_coarse_grained/";
std::string root_path_after_dup = "/bigdata/newdisk/chenyang/equivalence_fine_tune/input_after_duplication/";

std::string getCSVName(std::string kind, bool type){
  std::string res = root_path_coarse_grained;
  res = res + kind;
  if(type) res += "_compare_equal_pairs";
  else res += "_compare_inequal_pairs";
  res += ".csv";
  return res;
}

std::string getJsonName(std::string kind, bool type){
  std::string res = kind;
  if(type) res+="_equal";
  else res+="_unequal";
  return res;
}

std::vector<std::string> kind = {"aria2", "curl", "fish", "gcc", "git", "h2o", "linux", "mysql", "redis", "silver"};

int main(int argc, const char *argv[]) {
  LLVMInitializeNativeTarget();
  LLVMInitializeNativeAsmParser();

  WordDict dict(argv[1]);

  int total = 0;

  for(int i = 0; i < kind.size(); ++i){
    std::string current_name = kind[i];

    std::set<std::pair<std::string, std::string>> equal_vec = initializeFromCSV(getCSVName(current_name, 1), current_name);
    std::set<std::pair<std::string, std::string>> unequal_vec = initializeFromCSV(getCSVName(current_name, 0), current_name);

    std::cout << current_name << "_equal : " << equal_vec.size() << std::endl;
    std::cout << current_name << "_unequal : " << unequal_vec.size() << std::endl;

    total += equal_vec.size();
    total += unequal_vec.size();

    AST2Graph a2g_equal(equal_vec, dict, getJsonName(current_name, 1), true);
    a2g_equal.transform();
    AST2Graph a2g_unequal(unequal_vec, dict, getJsonName(current_name, 0), false);
    a2g_unequal.transform();
  }

  std::cout << "Total size : " << total << std::endl;

  return 0;
}
