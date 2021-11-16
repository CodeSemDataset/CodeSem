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
  ofstream process_file("time.txt");
  if (!process_file.is_open()) {
    cerr << "can't open time.txt\n";
    return -1;
  }
  clock_t startCTime, endCTime;
  startCTime = clock();

  LLVMInitializeNativeTarget();
  LLVMInitializeNativeAsmParser();

  std::vector<std::string> ASTs = initialize(argv[1]);

  Config configure(argv[2]);
  WordDict dict(argv[3]);

  std::list<std::unique_ptr<ASTUnit>> ASTQueue;

  std::vector<FunctionDecl*> funcs = common::getFunctions(ASTs, ASTQueue);

  process_file << "Starting SourceCode2Graph check" << endl;

  AST2Graph a2g(funcs);
  // a2g.transform();

  PDG2Graph p2g(funcs, dict);
  p2g.transform();

  PDG2TokenSequence p2t(funcs, dict);
  p2t.transform();

  endCTime = clock();
  unsigned sec = unsigned((endCTime - startCTime) / CLOCKS_PER_SEC);
  unsigned min = sec / 60;
  process_file << "-----------------------------------------------------------"
                  "\nTotal time: "
               << min << "min" << sec % 60 << "sec" << endl;
  return 0;
}
