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
#include "checkers/CFG2Graph.h"
#include "checkers/CFG2TokenSequence.h"
#include "framework/Config.h"
#include "framework/WordDict.h"


using namespace clang;
using namespace llvm;
using namespace clang::tooling;

int main(int argc, const char *argv[]) {
  ofstream process_file("time.txt");
  if (!process_file.is_open()) {
    cerr << "can't open time.txt\n";
    return -1;
  }
  clock_t startCTime, endCTime;
  startCTime = clock();

  LLVMInitializeNativeTarget();
  LLVMInitializeNativeAsmParser();

  //std::vector<std::string> ASTs = initialize(argv[1]);

  //Config configure(argv[1]);
  //WordDict dict(argv[1]);

  //std::list<std::unique_ptr<ASTUnit>> ASTQueue;

  //std::vector<FunctionDecl*> funcs = common::getFunctions(ASTs, ASTQueue);

  process_file << "Starting SourceCode2Graph check" << endl;

//generate AST
  WordDict dict_ast("dict_ast.txt");
  AST2Graph a2g(dict_ast);
  system("cp dict_ast.txt dict.txt"); //dict.storeDict() will copy from dict.txt first
  a2g.transform(0);
  a2g.transform(1);
  a2g.transform(2);
  system("rm dict.txt");
  system("mv dict_final.txt ./result/dict/dict_final_ast.txt");

//generate PDG
  WordDict dict_p2g("dict_pdg.txt");
  PDG2Graph p2g(dict_p2g);
  system("cp dict_pdg.txt dict.txt");
  p2g.transform(0);
  p2g.transform(1);
  p2g.transform(2);
  system("rm dict.txt");

  WordDict dict_p2t("dict_final.txt");
  PDG2TokenSequence p2t(dict_p2t);
  system("cp dict_final.txt dict.txt");
  p2t.transform(0);
  p2t.transform(1);
  p2t.transform(2);
  system("mv dict_final.txt ./result/dict/dict_final_pdg.txt");
  system("rm dict.txt");

//generate CFG
  WordDict dict_c2g("dict_cfg.txt");
  CFG2Graph c2g(dict_c2g);
  system("mv dict_cfg.txt dict.txt");
  c2g.transform(0);
  c2g.transform(1);
  c2g.transform(2);
  system("rm dict.txt");

  WordDict dict_c2t("dict_final.txt");
  CFG2TokenSequence c2t(dict_c2t);
  system("cp dict_final.txt dict.txt");
  c2t.transform(0);
  c2t.transform(1);
  c2t.transform(2);
  system("mv dict_final.txt ./result/dict/dict_final_cfg.txt"); 
  system("rm dict.txt"); 

  endCTime = clock();
  unsigned sec = unsigned((endCTime - startCTime) / CLOCKS_PER_SEC);
  unsigned min = sec / 60;
  process_file << "-----------------------------------------------------------"
                  "\nTotal time: "
               << min << "min" << sec % 60 << "sec" << endl;
  return 0;
}
