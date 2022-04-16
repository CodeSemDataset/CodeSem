//=============================================================================
// FILE:
//    HelloWorld.cpp
//
// DESCRIPTION:
//    Visits all functions in a module, prints their names and the number of
//    arguments via stderr. Strictly speaking, this is an analysis pass (i.e.
//    the functions are not modified). However, in order to keep things simple
//    there's no 'print' method here (every analysis pass should implement it).
//
// USAGE:
//    1. Legacy PM
//      opt -load libHelloWorld.dylib -legacy-hello-world [-csv=<filepath>] -disable-output `\`
//        <input-llvm-file>
//    2. New PM
//      opt -load-pass-plugin=libHelloWorld.dylib -passes="hello-world" `\`
//        -disable-output <input-llvm-file>
//      The command line option is not available for the new PM
//
//
// License: MIT
//=============================================================================
//-----------------------------------------------------------------------------
// Current Problems:
// 1. DILocation cannot find all User_Instruction's lineNum, therefore cannot 
//    find the position_No of a variable by sorting all User's Instruction of
//    same-name variables;  (currently all position_No = 0)
//    e.g. int q = 1; char q = 'c'; 
//    the position_No of q should be 2, since there is already a "q" exist before,
//    even "int q" is a completely different variable except for having the same
//    name, it should be counted.
// 2. Among the lineNum of User's Instruction found by DILocation, some may be
//    slightly wrong by 1 or 2
// 3. Some variables cannot find the function it belongs, and some variables 
//    cannnot find the instruction of its DEFINITION by linenum. Currently it's
//    considered to be caused by clang optimization.
//-----------------------------------------------------------------------------
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include "llvm/Support/raw_ostream.h"
#include <llvm/IR/DebugLoc.h>
#include "llvm/IR/DebugInfo.h"
#include <llvm/IR/DebugInfoMetadata.h>
#include "llvm/Support/CommandLine.h"
#include "llvm/IR/IntrinsicInst.h"

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <unistd.h>
#include <time.h>

using namespace llvm;

static cl::opt<std::string> InputFilename("csv", cl::desc("input file"), cl::value_desc("input file name"));

//-----------------------------------------------------------------------------
// HelloWorld implementation
//-----------------------------------------------------------------------------
// No need to expose the internals of the pass to the outside world - keep
// everything in an anonymous namespace.
namespace {

struct Use_Point{
  unsigned no; //position_No, definition is on above
  unsigned lineNum;
  unsigned column; //column means the column of variable's last char
  std::string info; //instruction content
};

struct Alias{
  std::string name; //Alias name
  std::string dir; //file firectory
  unsigned lineNum; //Alias line num
  std::string function_name;
  std::string function_scope; // e.g. 1-14
  std::vector<Use_Point> use_point;
  bool check; // avoid repetitively deal with one Alias
  bool findfile; // whether this Alias has found correspond file
};

//Store content of input.csv
static std::vector<std::pair<Alias, Alias>> T_Alias_List;
static std::vector<std::pair<Alias, Alias>> F_Alias_List;

clock_t start;

std::string simp_filename(std::string filename){
  std::string temp = filename;
  if(temp.find("/") == temp.npos){
    if(temp.find("\\") == temp.npos) return filename;
    temp = temp.substr(temp.find_last_of("\\") + 1);
    return temp;
  }
  temp = temp.substr(temp.find_last_of("/") + 1);
  return temp;
}

static int GLOBAL_ALIAS_CNT = 0;

void dumpAlias(Alias alias){
  errs() << ++GLOBAL_ALIAS_CNT << "\n";
  errs() << alias.name << " " << alias.dir << " " << alias.lineNum << "\n";
}

Alias MyParseString(std::string input){
  Alias MyAlias;
  if(input.length() == 0) return MyAlias;
  MyAlias.name = input.substr(0,input.find(" in "));
	MyAlias.dir = input.substr(input.find(" in ")+4);
  MyAlias.lineNum = (unsigned)atoi(MyAlias.dir.substr(MyAlias.dir.find(':')+1).c_str());
  MyAlias.dir = MyAlias.dir.substr(0,MyAlias.dir.find(':'));
  //MyAlias.dir = simp_filename(MyAlias.dir);
  MyAlias.check = false;
  MyAlias.findfile = false;
  //dumpAlias(MyAlias);
  return MyAlias;
}


// the CSV file should satisfy the following:
// colunm 2,3,7,8 should be like (x in ../../..), 2,3 right_pairs 7,8 false_pairs, no more than 12 columns
void readFromCSV(){
	std::ifstream inFile(InputFilename, std::ios::in);
	if (!inFile){
		errs() << "File unfound!" << "\n";
		return;
	}

	std::string Line;
  int first = 0;
	while (getline(inFile, Line))
	{
    ++first;
    if(first == 1) continue;

		std::string tmp[12];
		int cnt = 0, current = 0;
		for (unsigned i = 0; i < Line.length(); i++){
			if (Line[i] == ','){
				tmp[cnt] = Line.substr(current, i - current);
				current = i + 1; cnt++;
			}
		}
		tmp[cnt] = Line.substr(current, Line.length() - current);
		if(tmp[1].length()!=0){ //tmp[1] & tmp[2] represents the T_Alias pair
      Alias Alias_1 = MyParseString(tmp[0]);
      Alias Alias_2 = MyParseString(tmp[1]);
      T_Alias_List.push_back(std::make_pair(Alias_1, Alias_2));
    }
		// if(tmp[4].length()!=0){
    //   Alias Alias_1 = MyParseString(tmp[4]);
    //   Alias Alias_2 = MyParseString(tmp[5]);
		// 	F_Alias_List.push_back(std::make_pair(Alias_1, Alias_2));
    // }
	}

	inFile.close();
}

// judge whether alias locates within function F by finding the first and the last line of F
bool visitor(Function &F, Alias &alias) {
  auto *subProgram = F.getSubprogram();
  if (subProgram == nullptr) {
    return false;
  }

  unsigned _max = 0;
  unsigned _min = 100000;
  for (BasicBlock &BB : F.getBasicBlockList()) {
    for (Instruction &I : BB.getInstList()) {
      if((double)(clock() - start)/CLOCKS_PER_SEC >= 10){
        errs() << "overtime in visitor\n";
        return false;
      }
      MDNode *n = I.getMetadata("dbg");
      if(n == nullptr) continue;
      DILocation* loc = dyn_cast<DILocation>(n);  
      if(loc == nullptr) continue;   
      if(loc->getLine() == 0) continue;

      _max = _max > loc->getLine() ? _max : loc->getLine();
      _min = _min < loc->getLine() ? _min : loc->getLine();   
    }
  }

  if(_max == 0 || _min == 100000) return false;
  if(alias.lineNum >= _min && alias.lineNum <= _max){
    alias.function_name = F.getName().str();
    alias.function_scope = std::to_string(_min) + "-" + std::to_string(_max);
    return true;
  }
  return false;

  // BasicBlock &b = F.back();
  // Instruction &I = b.back();
  // MDNode *n = I.getMetadata("dbg");
  // if(n == nullptr){
  //   return false;
  // } 
  // DILocation* loc = dyn_cast<DILocation>(n);  
  // if(loc == nullptr){
  //   return false;   
  // }

  // if(alias.lineNum >= subProgram->getLine() && alias.lineNum <= loc->getLine()){
  //   alias.function_name = F.getName().str();
  //   alias.function_scope = std::to_string(subProgram->getLine()) + "-" + std::to_string(loc->getLine());
  //   return true;
  // }
  // return false;
}

// find def_point of alias, then find all use_points of it
void findLocInFun(Function &F, Alias &alias) {
  std::vector<BasicBlock*> exist_BB;
  std::vector<Instruction*> exist_I;

  //currently the program cannot deal with ALIAS like &x , *x properly, therefore treat all these as x for now
  std::string temp_name = alias.name;
  while(alias.name[0] == '*' || alias.name[0] == '&'){
    alias.name = alias.name.substr(1);
  }

  //errs() << "================================\n";
  //errs() << "Function Name: " << F.getName() << "\n";
  //errs() << "Alias: " << alias.name << " in " << alias.dir << " : " << alias.lineNum << "\n";

  int find_value = false; //prevent getting use points of the same Value* for more than once
  for (Function::iterator BB = F.begin(); BB!=F.end(); ++BB) {
    if((double)(clock() - start)/CLOCKS_PER_SEC >= 10){
      errs() << "overtime\n";
      return;
    }
    BasicBlock &bb = *BB;
    if(find_value) break;
    if(find(exist_BB.begin(), exist_BB.end(), &bb) == exist_BB.end())
      exist_BB.push_back(&bb);
    else 
      continue; 
    
    for (BasicBlock::iterator p = bb.begin(); p!=bb.end(); ++p) {
      if((double)(clock() - start)/CLOCKS_PER_SEC >= 10){
        errs() << "overtime\n";
        return;
      }
      if(find_value) break;
      Instruction* I = &*p;
      Value* target = nullptr;

      if(find(exist_I.begin(), exist_I.end(), I) == exist_I.end())
        exist_I.push_back(I);
      else
        continue;

      //get Variable infomation using DILocalVariable (similar to llvm/../AliasSetTracker:719)
      if(DbgDeclareInst* DbgDeclare = dyn_cast<DbgDeclareInst>(I)){
        DILocalVariable* v = DbgDeclare->getVariable();
        unsigned lineNum = v->getLine(); 
        if(alias.lineNum == lineNum){
          //errs() << "(declare)Find Matched Line! ";
          if(v->getName() == alias.name){
            //errs() << "Find Variable!";
            if(MetadataAsValue* value = dyn_cast<MetadataAsValue>(DbgDeclare->getOperand(0))){
              Metadata* Meta = value->getMetadata();
              if(isa<ValueAsMetadata>(Meta)) 
                target = cast<ValueAsMetadata>(Meta)->getValue();   
            }
          }
          //errs() << "\n";
        }
      }else if(DbgValueInst* DbgValue = dyn_cast<DbgValueInst>(I)){
        DILocalVariable* v = DbgValue->getVariable();
        unsigned lineNum = v->getLine();
        if(alias.lineNum == lineNum){
          //errs() << "(value)Find Matched Line! ";
          if(v->getName() == alias.name){ 
            //errs() << "Find Variable!";
            target = DbgValue->getValue();
          }
          //errs() << "\n";
        }
      }else
        continue;
      
      //if cannot get Value* value, jump to next instruction
      if(!target) continue;

      //find all use points

      int dead = 0;
      for (auto use = target->user_begin(); use != target->user_end(); use++) {
        if((double)(clock() - start)/CLOCKS_PER_SEC >= 10){
          errs() << "overtime\n";
          return;
        }
        Use_Point point;
        std::string str;
        raw_string_ostream output(str);

        User *u = *use;
        point.no = 0; //needs to be fixed
        // output User's lineNum & column info
        bool success = false;
        if(Instruction* Inst = dyn_cast<Instruction>(u)){
            MDNode *n = Inst->getMetadata("dbg");
          if(n){
            DILocation* loc = dyn_cast<DILocation>(n);  
            if(loc){
              success = true;
              point.lineNum = loc->getLine();
              point.column = loc->getColumn();
            }
          }
        }
        if(!success){
          point.lineNum = 0;
          point.column = 0;
        }

        //output User's content
        u->print(output);
        point.info = str;
        alias.use_point.push_back(point);

        dead++;
        if(dead >= 10){
          errs() << "skip use points\n";
          break;
        }
      }    
      find_value = true;
    }
  }

  //restore alias.name, delete it after solving &x,*x problems
  alias.name = temp_name;
}

bool Output_Alias_To_File(std::ofstream &outFile, Alias &alias){
  if(alias.name.length() == 0){
    outFile << std::endl;
    return false;
  }
  std::string temp_name = "\"" + alias.name + "\"";
  outFile << temp_name << "," << alias.dir << "," << alias.lineNum << ",";
  
  if(alias.function_name.length() == 0){
    outFile << std::endl;
    return false;
  }

  outFile << alias.function_name << "," << alias.function_scope << ",";

  for(unsigned i=0; i<alias.use_point.size(); i++){
    std::string temp = "\"(" + std::to_string(alias.use_point[i].no) + ";" + std::to_string(alias.use_point[i].lineNum) + ";" \
                      + std::to_string(alias.use_point[i].column) + ") " + alias.use_point[i].info + "\""; 
    outFile << temp << ",";
  }
  outFile << std::endl;

  return true;
}

// New PM implementation
struct HelloWorld : PassInfoMixin<HelloWorld> {
  // Main entry point, takes IR unit to run the pass on (&F) and the
  // corresponding pass manager (to be queried if need be)
  PreservedAnalyses run(Module &M, ModuleAnalysisManager &) {
  //PreservedAnalyses run(Function &F, FunctionAnalysisManager &) {
    //errs() << InputFilename << "\n";
    //std::ofstream Output(InputFilename.c_str());
  /*
    for (Function &F : M.functions()) {
      visitor(F);
      findLocInFun(F, 12, "i");
    }
  */
    return PreservedAnalyses::all();
  }
};

// Legacy PM implementation
struct LegacyHelloWorld : public ModulePass {
  static char ID;
  LegacyHelloWorld() : ModulePass(ID) {}
  // Main entry point - the name conveys what unit of IR this is to be run on.
  bool runOnModule(Module &M) override {
    std::cout << "start program" << std::endl;
    readFromCSV();
    int FindFunction_true = 0;
    int FindFunction_false = 0;
    int FindFile_true = 0;
    int FindFile_false = 0;
    int Find_Pairs = 0;

    for(auto p = M.functions().begin(); p != M.functions().end(); ++p){
      Function &F = *p;
      std::string file; 
      //find original file diectory which F belongs
      //Try to find FILE_DIR from every single instruction in function F, quit when found(using DILocation)
      for (BasicBlock &BB : F.getBasicBlockList()) {
        for (Instruction &I : BB.getInstList()) {
          MDNode *n = I.getMetadata("dbg");
          if(n == nullptr) continue;
          DILocation* loc = dyn_cast<DILocation>(n);  
          if(loc == nullptr) continue;   
          file = loc->getFilename().str(); 
          break;        
        }
        if(file.length()!=0)
          break;
      }
      //if cannot find source directory
      if(file.length() == 0){
        continue;
      }

      file = simp_filename(file);
      //now we have filename where function F locates, try to find ALIAS in this file
      //for ALIAS in the file, using visitor() for judging whether ALIAS locates within the scope of F
      //using FindLocInFun() to find all use_points of ALIAS
      //now execute until 182

      //errs() << "before traverse\n";

      int max_alias_found = 0;

      for(unsigned i=0;i<T_Alias_List.size();i++){
        if(max_alias_found > 200) break;
        if(simp_filename(T_Alias_List[i].first.dir) == file && !T_Alias_List[i].first.check){
          if(!T_Alias_List[i].first.findfile){
            T_Alias_List[i].first.findfile = true;
            ++FindFile_true;
          }
          start = clock();
          //errs() << "before visitor first\n";
          if(visitor(F, T_Alias_List[i].first)){
            T_Alias_List[i].first.check = true;
            ++FindFunction_true;
            ++max_alias_found;
            if(T_Alias_List[i].second.check) Find_Pairs++;

            start = clock();
            //errs() << "before function first\n";
            findLocInFun(F, T_Alias_List[i].first);
          }
        }
        if(simp_filename(T_Alias_List[i].second.dir) == file && !T_Alias_List[i].second.check){
          if(!T_Alias_List[i].second.findfile){
            T_Alias_List[i].second.findfile = true;
            ++FindFile_true;
          }
          start = clock();
          //errs() << "before visitor second\n";
          if(visitor(F, T_Alias_List[i].second)){
            T_Alias_List[i].second.check = true;
            ++FindFunction_true;
            ++max_alias_found;
            if(T_Alias_List[i].first.check) Find_Pairs++;

            start = clock();
            //errs() << "before function second\n";
            findLocInFun(F, T_Alias_List[i].second);
          }
        }
      }

      for(unsigned j=0;j<F_Alias_List.size();j++){
        if(simp_filename(F_Alias_List[j].first.dir) == file && !F_Alias_List[j].first.check){
          if(!F_Alias_List[j].first.findfile){
            F_Alias_List[j].first.findfile = true;
            ++FindFile_false;
          }
          if(visitor(F, F_Alias_List[j].first)){
            F_Alias_List[j].first.check = true;
            ++FindFunction_false;
            findLocInFun(F, F_Alias_List[j].first);
          }
        }
        if(simp_filename(F_Alias_List[j].second.dir) == file && !F_Alias_List[j].second.check){
          if(!F_Alias_List[j].second.findfile){
            F_Alias_List[j].second.findfile = true;
            ++FindFile_false;
          }
          if(visitor(F, F_Alias_List[j].second)){
            F_Alias_List[j].second.check = true;
            ++FindFunction_false;
            findLocInFun(F, F_Alias_List[j].second);
          }
        }
      }
    }

    errs() << "Find File -- True Alias: " << FindFile_true << "\n";
    errs() << "Find File -- False Alias: " << FindFile_false << "\n";
    errs() << "Find Function -- True Alias: " << FindFunction_true << "\n";
    errs() << "Find Function -- False Alias: " << FindFunction_false << "\n";
    errs() << "Total Pairs: " << Find_Pairs << "\n";
    errs()<<"Total Size: "<<T_Alias_List.size()*2 + F_Alias_List.size()*2<<"\n";
    
    //output results to file
    std::ofstream outFile("output.csv", std::ios::out);
	  if (!outFile){
		  errs() << "outputFile unfound!" << "\n";
      return false;
	  }
    outFile << "Alias_name" << "," << "dir" << "," << "line_Num" << "," << "Function_name" << "," << "Function_Scope" << "," \
            << "\"User_points: (Position_No, LineNum, Column) instruction_content\"" << std::endl;
    outFile << "True Alias Pairs: \n";
    int RealNotEmpty = 0;
    for(unsigned k = 0 ; k < T_Alias_List.size(); k++){
      if(Output_Alias_To_File(outFile, T_Alias_List[k].first)) RealNotEmpty++;
      if(Output_Alias_To_File(outFile, T_Alias_List[k].second)) RealNotEmpty++;
    }
    outFile << "False Alias Pairs: \n";
    int RealNotEmpty2 = 0;
    for(unsigned m = 0 ; m < F_Alias_List.size(); m++){
      if(Output_Alias_To_File(outFile, F_Alias_List[m].first)) RealNotEmpty2++;
      if(Output_Alias_To_File(outFile, F_Alias_List[m].second)) RealNotEmpty2++;
    }
    errs() << "True_NotEmpty: " << RealNotEmpty << "\n";
    errs() << "False_NotEmpty: " << RealNotEmpty2 << "\n";
    // Doesn't modify the input unit of IR, hence 'false'
    return false;
  }
};
} // namespace

//-----------------------------------------------------------------------------
// New PM Registration
//-----------------------------------------------------------------------------
llvm::PassPluginLibraryInfo getHelloWorldPluginInfo() {
  return {LLVM_PLUGIN_API_VERSION, "HelloWorld", LLVM_VERSION_STRING,
          [](PassBuilder &PB) {
            PB.registerPipelineParsingCallback(
                [](StringRef Name, ModulePassManager &FPM,
                   ArrayRef<PassBuilder::PipelineElement>) {
                  if (Name == "hello-world") {
                    FPM.addPass(HelloWorld());
                    return true;
                  }
                  return false;
                });
          }};
}

// This is the core interface for pass plugins. It guarantees that 'opt' will
// be able to recognize HelloWorld when added to the pass pipeline on the
// command line, i.e. via '-passes=hello-world'
extern "C" LLVM_ATTRIBUTE_WEAK ::llvm::PassPluginLibraryInfo
llvmGetPassPluginInfo() {
  return getHelloWorldPluginInfo();
}

//-----------------------------------------------------------------------------
// Legacy PM Registration
//-----------------------------------------------------------------------------
// The address of this variable is used to uniquely identify the pass. The
// actual value doesn't matter.
char LegacyHelloWorld::ID = 0;

// This is the core interface for pass plugins. It guarantees that 'opt' will
// recognize LegacyHelloWorld when added to the pass pipeline on the command
// line, i.e.  via '--legacy-hello-world'
static RegisterPass<LegacyHelloWorld>
    X("legacy-hello-world", "Hello World Pass",
      true, // This pass doesn't modify the CFG => true
      false // This pass is not a pure analysis pass => false
    );
