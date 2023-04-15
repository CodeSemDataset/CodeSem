#include <ctime>
#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <thread>

#include <clang/Tooling/CommonOptionsParser.h>
#include <clang/Tooling/JSONCompilationDatabase.h>
#include <llvm-c/Target.h>
#include <llvm/Support/CommandLine.h>

#include "framework/ASTManager.h"

#include "framework/Config.h"
// #include "framework/Logger.h"

#include "CFG/InterProcedureCFG.h"
#include "Stat/CFGStat.h"

using namespace clang;
using namespace llvm;
using namespace std;

struct Args{
  string configPath, midPath, outPath;
};

// string midCsvPrefix="middle/";
Args globArgs;
vector<pair<string,string>> worklist;

// void parseAlias(int index, char *configPath){
// void parseAlias(int index, string configPath, string outPath){
void parseAlias(int index){
  string which=worklist[index].first;
  string astList=worklist[index].second;
  // std::vector<std::string> ASTs = initialize(astList);

  // Config configure(globArgs.configPath);

  // ASTResource resource;
  // ASTManager manager(ASTs, resource, configure);
  // CallGraph callgraph(manager, resource, configure.getOptionBlock("CallGraph"));;
  string csvIn=CSVParser::joinPath(globArgs.midPath,which+".csv");
  string csvOut=CSVParser::joinPath(globArgs.outPath,which+"_.csv");
  // CFGStat cfgStat(&resource, &manager, &callgraph, &configure, csvIn, csvOut);
  CFGStat cfgStat(csvIn, csvOut);
  // cfgStat.dumpCFGs();
  cfgStat.statCFGs(astList);
  cfgStat.dumpAlias();
}

int main(int argc, const char *argv[])
{
  // ofstream process_file("time.txt");
  // if (!process_file.is_open())
  // {
  //   cerr << "can't open time.txt\n";
  //   return -1;
  // }
  clock_t startCTime, endCTime;
  startCTime = clock();

  LLVMInitializeNativeTarget();
  LLVMInitializeNativeAsmParser();
  vector<thread> threads;
  ifstream fin("worklist.txt");
  string line;
  while(getline(fin,line)){
    auto pos=line.find(' ');
    string which=line.substr(0,pos);
    string astList=line.substr(pos+1);
    worklist.emplace_back(which,astList);
  }
  // int n=8;
  globArgs.configPath = argv[1];
  globArgs.midPath = argv[2];
  globArgs.outPath = argv[3];
  for(int i = 0; i < worklist.size(); i++){
      // thread t(parseAlias, i, argv[1]);
      // threads.emplace_back(move(t));
      threads.push_back(thread(parseAlias, i));
      // parseAlias(i);
  }
  for(int i = 0; i < threads.size(); i++){
    threads[i].join();
  }
  // std::vector<std::string> ASTs = initialize(argv[1]);

  // Config configure(argv[2]);  

  endCTime = clock();
  unsigned sec = unsigned((endCTime - startCTime) / CLOCKS_PER_SEC);
  unsigned min = sec / 60;
  std::cout << "-----------------------------------------------------------"
                  "\nTotal time: "
               << min << "min" << sec % 60 << "sec" << endl;
  return 0;
}
