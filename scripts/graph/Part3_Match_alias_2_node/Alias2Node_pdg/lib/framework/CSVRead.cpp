#include "framework/CSVRead.h"
#include<iostream>
using namespace std;

void CSVRead::readAllCSV(){
    for(auto name : program_names) {
        //std::cout << "Start Reading CSV : " << name << std::endl;
        readSingleCSV(name);
    }
}

bool CSVRead::getAlias(string line, bool label, alias& res, std::string current_program_name) {
    stringstream ss(line);
    string str;
    vector<string> lineArray;

    while(getline(ss,str,',')){
        lineArray.push_back(trim(str));
    }

    if(lineArray.size() <= 5) return false;

    res.name = lineArray[0];
    res.dir = getASTPath(lineArray[1], current_program_name);
    // cout << "c_filename : " << lineArray[1] << endl;
    // cout << "ast_filename : " << res.dir << endl;
    if(res.dir.size() == 0) {
        //cout << getFilename(lineArray[1]) << "  " << lineArray[1] << endl;
        return false;
    }

    if(current_program_name == "gcc") {
        res.dir = res.dir.substr(1);
        res.dir = "/home/qian/Downloads/empirical_study/gcc-10.3.0-wy/build-ast-12/" + res.dir;
       // cout << res.dir << endl;
    }
    ifstream test_null_file(res.dir, ios::in);
    if(!test_null_file.is_open()) {
        test_null_file.close();
        return false;
    }
    test_null_file.close();

    res.def_point = atoi(lineArray[2].c_str());
    res.func_st_line = atoi(lineArray[4].substr(0, lineArray[4].find_first_of("-")).c_str());
    res.func_ed_line = atoi(lineArray[4].substr(lineArray[4].find_first_of("-") + 1).c_str());
    if(label == true){
        res.alias_type = atoi(lineArray[3].c_str());
    }

    for(int i = 5; i < lineArray.size(); i++){
        if(lineArray[i].find("(") != lineArray[i].npos){
            string temp = lineArray[i].substr(lineArray[i].find_first_of(";")+1);
            temp = temp.substr(0, temp.find_first_of(';'));
            res.use_points.push_back(atoi(temp.c_str()));
        }
    }

    return true;
}

void CSVRead::readSingleCSV(string program_name) {
    if(alias_map.find(program_name) == alias_map.end()) {
        assert(0);
    }

    // get CSV path
    std::string filename = dataset_path + "/" + program_name + "_manual_artifical_verify.csv";
    ifstream inFile(filename, ios::in);
    if(!inFile.is_open()){
        cout << "inFile is null : " << filename << endl;
        return;
    }
    bool label = true;
    string line1, line2;
    getline(inFile, line1);
    
    int total_true = 0, total_false = 0;
    int alias_true = 0, alias_false = 0;
    while(getline(inFile,line1) && getline(inFile, line2)){
        if(line1.find("True") != string::npos) {
            line1 = line2;
            getline(inFile, line2);
        }
        if(line1.find("False") != string::npos) {
            line1 = line2;
            getline(inFile, line2);
            label = false;
        }
        if(line2.find("True") != string::npos || line2.find("False") != string::npos) {
            assert(0);
        }

        if(label) ++total_true;
        else ++total_false;

        alias alias_1, alias_2;
        bool suc_1 = getAlias(line1, label, alias_1, program_name);
        bool suc_2 = getAlias(line2, label, alias_2, program_name);
        if(!suc_1 || !suc_2) 
            continue;

        if(alias_map.find(program_name) == alias_map.end()) {
            assert(0 && "Not exist in Alias Map!");
        }        

        alias_pair current_pair;
        current_pair.alias1 = alias_1;
        current_pair.alias2 = alias_2;
        current_pair.llvm_true = label;

        alias_map[program_name].push_back(current_pair);
        if(label) ++alias_true;
        else ++alias_false;
    }

    cout << "Total Alias in " << program_name << " | True : " << alias_true << "/" << total_true << " | False : " << alias_false << "/" << total_false << endl;
}

void CSVRead::dump(string program_name){
    assert(alias_map.find(program_name) != alias_map.end());
    std::vector<alias_pair> output = alias_map[program_name];

    int true_cnt = 0, false_cnt = 0;

    for(int i=0;i<output.size();i++){
        cout << "-----------------------------------------" << endl;
        cout << "alias1: name:" << output[i].alias1.name << std::endl << " def_point:" << output[i].alias1.def_point << std::endl << " use_points:";
        for(int j=0;j<output[i].alias1.use_points.size();j++){
            cout << output[i].alias1.use_points[j] << ",";
        }
        cout << endl;
        std::cout << "func scope : " << output[i].alias1.func_st_line << "-" << output[i].alias1.func_ed_line << std::endl << std::endl;
        cout << "alias2: name:" << output[i].alias2.name << std::endl << " def_point:" << output[i].alias2.def_point << std::endl << " use_points:";
        for(int j=0;j<output[i].alias2.use_points.size();j++){
            cout << output[i].alias2.use_points[j] << ",";
        }
        cout << endl;
        std::cout << "func scope : " << output[i].alias2.func_st_line << "-" << output[i].alias2.func_ed_line << std::endl << std::endl;

        if(output[i].llvm_true) {
            ++true_cnt;
            cout << "label : 1" << endl;
        }
        else {
            ++false_cnt;
            cout << "label : 0" << endl;
        }
    }

    cout << program_name << " Total Size:" << output.size() << endl;
    cout << program_name << " True Pairs:" << true_cnt << endl;
    cout << program_name << " False Pairs:" << false_cnt << endl;
}

int CSVRead::getSize(string program_name){
    assert(alias_map.find(program_name) != alias_map.end());
    return alias_map[program_name].size();
}

vector<alias_pair> CSVRead::getAllAlias(string program_name) {
    assert(alias_map.find(program_name) != alias_map.end());
    return alias_map[program_name];
}

string CSVRead::getASTPath(string c_path, string program_name) {
    assert(astList_map.find(program_name) != astList_map.end());

    std::string c_filename = getFilename(c_path);
    
    std::string astList_path = astList_map[program_name];
    ifstream in(astList_path, ios::in);
    if(!in.is_open()) {
        assert(0 && "astList.txt is null!");
    }
    
    std::string line;
    while(getline(in, line)) {
        line = trim(line);
        if(line.find(c_filename) != string::npos) {
            in.close();
            return trim(line);
        }
    }
    in.close();

    return string();
}

string CSVRead::getFilename(string filename) {
    if(filename.find("/") != string::npos) {
        filename = filename.substr(filename.find_last_of("/") + 1);
    }
    if(filename.find("\\") != string::npos) {
        filename = filename.substr(filename.find_last_of("\\") + 1);
    }
    if(filename.find(".") != string::npos) {
        filename = filename.substr(0, filename.find_last_of("."));
    }
    return filename;
}

string CSVRead::trim(string s) {
  string result = s;
  result.erase(0, result.find_first_not_of(" \t\r\n"));
  result.erase(result.find_last_not_of(" \t\r\n") + 1);
  return result;
}