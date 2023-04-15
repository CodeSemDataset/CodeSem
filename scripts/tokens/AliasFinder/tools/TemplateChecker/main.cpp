#include <ctime>
#include <fstream>
#include <iostream>
#include <memory>
#include <string>

#include <clang/Tooling/CommonOptionsParser.h>
#include <clang/Tooling/JSONCompilationDatabase.h>
#include <llvm-c/Target.h>
#include <llvm/Support/CommandLine.h>

#include "checkers/TemplateChecker.h"
#include "framework/ASTManager.h"
#include "framework/BasicChecker.h"
#include "framework/CallGraph.h"
#include "framework/Config.h"
#include "framework/Logger.h"

#include "CFG/InterProcedureCFG.h"
#include "P2A/PointToAnalysis.h"

#include "taint-check/TaintChecker.h"
#include "checkers/arraybound/ArrayBoundChecker.h"
#include "checkers/loopupbound/LoopUpbound.h"
#include "checkers/redundantjudgement/RedundantJudgement.h"

using namespace clang;
using namespace llvm;
using namespace clang::tooling;

int main(int argc, const char *argv[])
{
  ofstream process_file("time.txt");
  if (!process_file.is_open())
  {
    cerr << "can't open time.txt\n";
    return -1;
  }
  clock_t startCTime, endCTime;
  startCTime = clock();

  LLVMInitializeNativeTarget();
  LLVMInitializeNativeAsmParser();

  std::vector<std::string> ASTs = initialize(argv[1]);

  Config configure(argv[2]);

  ASTResource resource;
  ASTManager manager(ASTs, resource, configure);
  CallGraph *call_graph = nullptr;

  PointToAnalysis *pta = nullptr;

  auto enable = configure.getOptionBlock("CheckerEnable");

  Logger::configure(configure);

  if (enable.find("CallGraphChecker")->second == "true")
  {
    cout << "Starting CallGraphChecker check" << endl;
    process_file << "Starting CallGraphChecker check" << endl;
    clock_t start, end;
    // record the time of generating call graph
    start = clock();

    call_graph =
        new CallGraph(manager, resource, configure.getOptionBlock("CallGraph"));
    end = clock();
    if (configure.getOptionBlock("CallGraph").find("printToConsole")->second ==
        "true")
      call_graph->printCallGraph(cout);

    unsigned sec = unsigned((end - start) / CLOCKS_PER_SEC);
    unsigned min = sec / 60;
    process_file << "Time: " << min << "min" << sec % 60 << "sec" << endl;
    process_file
        << "End of CallGraphChecker "
           "check\n-----------------------------------------------------------"
        << endl;
    cout << "End of CallGraphChecker check\n";
  }

  // Test CFG
  if (enable.find("CFGTest")->second == "true")
  {
    cout << "Starting CFGTest check" << endl;
    process_file << "Starting CFGTest check" << endl;
    clock_t start, end;
    start = clock();

    TemplateChecker checker(&resource, &manager, call_graph, &configure);
    checker.check();

    end = clock();
    unsigned sec = unsigned((end - start) / CLOCKS_PER_SEC);
    unsigned min = sec / 60;
    process_file << "Time: " << min << "min" << sec % 60 << "sec" << endl;
    process_file
        << "End of CFGTest "
           "check\n-----------------------------------------------------------"
        << endl;
    cout << "End of CFGTest check\n";
  }

  // ICFG
  if (enable.find("ICFG") != enable.end() &&
      (enable.find("ICFG")->second == "true"))
  {
    cout << "Starting ICFG" << endl;
    process_file << "ICFG" << endl;
    clock_t start_icfg, end_icfg;
    start_icfg = clock();

    InterProcedureCFG *icfgPtr =
        new InterProcedureCFG(&manager, &resource, call_graph, &configure);
    end_icfg = clock();
    unsigned sec_icfg = unsigned((end_icfg - start_icfg) / CLOCKS_PER_SEC);
    unsigned min_icfg = sec_icfg / 60;
    process_file << "Time: " << min_icfg << "min" << sec_icfg % 60 << "sec"
                 << endl;
    process_file << "End of ICFG "
                    "\n------------------------------------------------"
                    "-----------"
                 << endl;
    cout << "End of ICFG\n";
  }
  // point to analysis
  if (enable.find("PointToAnalysis")->second == "true")
  {
    cout << "Starting InterProcedureCFG Construct" << endl;
    process_file << "Starting InterProcedureCFG Construct" << endl;
    clock_t start_icfg, end_icfg;
    start_icfg = clock();

    InterProcedureCFG *icfgPtr =
        new InterProcedureCFG(&manager, &resource, call_graph, &configure);
    end_icfg = clock();
    unsigned sec_icfg = unsigned((end_icfg - start_icfg) / CLOCKS_PER_SEC);
    unsigned min_icfg = sec_icfg / 60;
    process_file << "Time: " << min_icfg << "min" << sec_icfg % 60 << "sec"
                 << endl;
    process_file
        << "End of InterProcedureCFG "
           "Construct\n------------------------------------------------"
           "-----------"
        << endl;
    cout << "End of InterProcedureCFG Construct\n";

    cout << "Starting Point-to Analysis" << endl;
    process_file << "Starting Point-to Analysis" << endl;
    clock_t start, end;
    start = clock();
    pta = new PointToAnalysis(&manager, icfgPtr, configure.getOptionBlock("P2A"));
    pta->ConstructPartialCFG();

    end = clock();
    unsigned sec = unsigned((end - start) / CLOCKS_PER_SEC);
    unsigned min = sec / 60;
    process_file << "Time: " << min << "min" << sec % 60 << "sec" << endl;
    process_file << "End of Point-to "
                    "Analysis\n------------------------------------------------"
                    "-----------"
                 << endl;
    cout << "End of Point-to Analysis\n";
  }

  if (enable.find("TaintChecker")->second == "true")
  {
    cout << "Starting TaintCheck" << endl;
    process_file << "Starting TaintCheck" << endl;
    clock_t start, end;
    // record the time of generating call graph
    start = clock();

    TaintConfig *taintConfig = nullptr;

    if(argc > 3) {
      taintConfig = new TaintConfig(argv[3]);
    }

    taint::TaintChecker taint_checker(&resource, &manager, call_graph, &configure, taintConfig);
    taint_checker.check();
    end = clock();

    unsigned sec = unsigned((end - start) / CLOCKS_PER_SEC);
    unsigned min = sec / 60;
    process_file << "Time: " << min << "min" << sec % 60 << "sec" << endl;
    process_file
        << "End of TaintCheck "
           "check\n-----------------------------------------------------------"
        << endl;
    cout << "End of TaintCheck\n";
  }

  if (enable.find("ArrayBoundChecker")->second == "true")
  {
    cout << "Starting ArrayBoundCheck" << endl;
    process_file << "Starting ArrayBoundCheck" << endl;
    clock_t start, end;
    // record the time of generating call graph
    start = clock();
    auto arrayenable = configure.getOptionBlock("ArrayBound");

    if (!pta) {
      if (arrayenable.find("PointToAnalysis")->second == "true") {
          cerr << "PointToAnalysis must turn on in CheckerEnable before using Arraybound checker when PointToAnalysis in ArrayBound is set to true\n";
          return -1;
      }
    }

    ArrayBoundChecker array_checker(&resource, &manager, call_graph, pta, &configure);
    array_checker.check();
    end = clock();

    unsigned sec = unsigned((end - start) / CLOCKS_PER_SEC);
    unsigned min = sec / 60;
    process_file << "Time: " << min << "min" << sec % 60 << "sec" << endl;
    process_file
        << "End of ArrayBoundCheck "
           "check\n-----------------------------------------------------------"
        << endl;
    cout << "End of ArrayBoundCheck\n";
  }

  if (enable.find("LoopUpbound") != enable.end() &&
      (enable.find("LoopUpbound")->second == "true"))
  {
    cout << "Starting LoopUpbound Analysis" << endl;
    process_file << "Starting LoopUpbound Analysis" << endl;
    clock_t start, end;
    start = clock();

    LoopUpbound loop_up_bound(&resource, &manager, call_graph, &configure);
    loop_up_bound.check();
    end = clock();

    unsigned sec_icfg = unsigned((end - start) / CLOCKS_PER_SEC);
    unsigned min_icfg = sec_icfg / 60;
    process_file << "Time: " << min_icfg << "min" << sec_icfg % 60 << "sec"
                 << endl;
    process_file << "End of LoopUpbound "
                    "\n------------------------------------------------"
                    "-----------"
                 << endl;
    cout << "End of LoopUpbound\n";
  }
  if (enable.find("RedundantJudgement") != enable.end() &&
      enable.find("RedundantJudgement")->second == "true")
  {
    cout << "Starting RedundantJudgement check" << endl;
    process_file << "Starting RedundantJudgement check" << endl;
    clock_t start, end;
    start = clock();

    RedundantJudgement redundant_judgement(&resource, &manager, call_graph, &configure);
    redundant_judgement.check();

    end = clock();

    unsigned sec = unsigned((end - start) / CLOCKS_PER_SEC);
    unsigned min = sec / 60;
    process_file << "Time: " << min << "min" << sec % 60 << "sec" << endl;
    process_file
        << "End of RedundantJudgement "
           "check\n-----------------------------------------------------------"
        << endl;
    cout << "End of RedundantJudgement check\n";
  }

  endCTime = clock();
  unsigned sec = unsigned((endCTime - startCTime) / CLOCKS_PER_SEC);
  unsigned min = sec / 60;
  process_file << "-----------------------------------------------------------"
                  "\nTotal time: "
               << min << "min" << sec % 60 << "sec" << endl;
  return 0;
}
