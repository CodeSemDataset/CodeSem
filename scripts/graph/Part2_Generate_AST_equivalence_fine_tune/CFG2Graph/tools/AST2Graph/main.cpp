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
  std::string res = root_path_after_dup;
  res = res + kind;
  if(type) res += "_compare_equal_pairs";
  else res += "_compare_inequal_pairs";
  res += ".csv";
  return res;
}

std::string getJsonName(std::string kind, bool type){
  std::string res = kind;
  if(type) res+="_equal.json";
  else res+="_unequal.json";
  return res;
}

std::string csvnames[10] = {"aria2", "curl", "fish", "gcc", "git", "h2o", "linux", "mysql", "redis", "silver"};

int main(int argc, const char *argv[]) {
  LLVMInitializeNativeTarget();
  LLVMInitializeNativeAsmParser();

  WordDict dict(argv[1]);

  int total = 0;

 //equal
  for(int i = 0; i <= 9; ++i){
    std::set<std::pair<std::string, std::string>> ASTs_equal = initializeFromCSV(getCSVName(csvnames[i], 1), csvnames[i]);
  
    std::vector<std::string> AST_1;
    std::vector<std::string> AST_2;

    for(std::set<std::pair<std::string, std::string>>::iterator iter = ASTs_equal.begin(); iter != ASTs_equal.end(); ++iter){
      ifstream in1(iter->first, ios::in);
      ifstream in2(iter->second, ios::in);
      if(!in1.is_open() || !in2.is_open()){
        in1.close();
        in2.close();
        continue;
      }
      in1.close();
      in2.close();

      AST_1.push_back(iter->first);
      AST_2.push_back(iter->second);
    }

  //unequal
    std::set<std::pair<std::string, std::string>> ASTs_unequal = initializeFromCSV(getCSVName(csvnames[i], 0), csvnames[i]);
    std::vector<std::string> AST_3;
    std::vector<std::string> AST_4;

    for(std::set<std::pair<std::string, std::string>>::iterator iter = ASTs_unequal.begin(); iter != ASTs_unequal.end(); ++iter){
      ifstream in3(iter->first, ios::in);
      ifstream in4(iter->second, ios::in);
      if(!in3.is_open() || !in4.is_open()){
        if(!in3.is_open()) std::cout << "file1: " << iter->first << std::endl;
        if(!in4.is_open()) std::cout << "file2: " << iter->second << std::endl;
        in3.close();
        in4.close();
        continue;
      }
      in3.close();
      in4.close();

      AST_3.push_back(iter->first);
      AST_4.push_back(iter->second);
    }

    std::list<std::unique_ptr<ASTUnit>> ASTQueue1;
    std::list<std::unique_ptr<ASTUnit>> ASTQueue2;
    std::list<std::unique_ptr<ASTUnit>> ASTQueue3;
    std::list<std::unique_ptr<ASTUnit>> ASTQueue4;

    std::vector<FunctionDecl*> funcs1 = common::getFunctions(AST_1, ASTQueue1);
    std::vector<FunctionDecl*> funcs2 = common::getFunctions(AST_2, ASTQueue2);
    std::vector<FunctionDecl*> funcs3 = common::getFunctions(AST_3, ASTQueue3);
    std::vector<FunctionDecl*> funcs4 = common::getFunctions(AST_4, ASTQueue4);

    std::cout << csvnames[i] << "_equal : " << funcs1.size() << std::endl;
    std::cout << csvnames[i] << "_unequal : " << funcs3.size() << std::endl;

    total = total + funcs1.size() + funcs3.size();

    std::string filename1 = csvnames[i] + "_equal.json";
    std::string filename2 = csvnames[i] + "_unequal.json";
    std::cout << "current program : " << csvnames[i] << std::endl;

    PDG2Graph p2g_equal(funcs1, funcs2, dict, "cfg_" + filename1, true);
    std::cout << csvnames[i] << "_cfg_equal" << std::endl;
    p2g_equal.transform();

    PDG2Graph p2g_unequal(funcs3, funcs4, dict, "cfg_" + filename2, false);
    std::cout << csvnames[i] << "_cfg_unequal" << std::endl;
    p2g_unequal.transform();

    PDG2TokenSequence p2t_equal(funcs1, funcs2,  dict, "cfgts_" + filename1, true);
    std::cout << csvnames[i] << "_cfgts_equal" << std::endl;
    p2t_equal.transform();

    PDG2TokenSequence p2t_unequal(funcs3, funcs4,  dict, "cfgts_" + filename2, false);
    std::cout << csvnames[i] << "_cfgts_unequal" << std::endl;
    p2t_unequal.transform();

    dict.storeDict();
  }

  std::cout << "Total Size : " << total << std::endl;

  return 0;
}
