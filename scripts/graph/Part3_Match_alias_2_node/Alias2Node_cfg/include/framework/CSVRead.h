#ifndef CSVREAD_H
#define CSVREAD_H
#include "framework/WordDict.h"
#include <nlohmann/json.hpp>

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <set>
#include <clang-c/Index.h>

using namespace std;

struct alias{
    std::string name;
    
    int def_point;
    std::vector<int> use_points;

    std::string dir;
    int func_st_line;
    int func_ed_line;

    int alias_type;
};

struct alias_pair{
    alias alias1;
    alias alias2;
    bool llvm_true;
};

static std::map<string, string> ast2path;

class CSVRead{
public:
    CSVRead(string path, vector<std::string> target_programs){ 
        for(string tmp : target_programs) {
            alias_map.emplace(tmp, std::vector<alias_pair>());
        }
        program_names = target_programs;
        dataset_path = path; 
    }

    void readAllCSV();
    void readSingleCSV(string program_name);
    void dump(string program_name);
    int getSize(string program_name);
    vector<alias_pair> getAllAlias(string program_name);
    void setASTListPath(string program_name, string path) {
        astList_map.emplace(program_name, path);
    }

private:
    std::unordered_map<string, vector<alias_pair>> alias_map;
    std::vector<std::string> program_names;
    std::string dataset_path;
    std::unordered_map<string, string> astList_map;

    bool getAlias(std::string line, bool label, alias& res, string current_program_name);
    string getASTPath(string c_path, string program_name);
    string trim(string s);
    string getFilename(string filename);
};

#endif