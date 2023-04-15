#ifndef ALIAS_STAT_H
#define ALIAS_STAT_H
#include <string>
#include <vector>
// #include <map>
#include <unordered_map>
#include <sstream>
#include "Stat/MyStmt.h"
using namespace std;

struct DefUse
{
    string name,path,defLine;
    unsigned instLine;
    // DefUse(string& name,string& path,string& defLine,string& instLine){
    DefUse(vector<string>::const_iterator it){
        name=*(it++);
        path=*(it++);
        defLine=*(it++);
        instLine=std::atoi(it->c_str());       
    }
};

struct AliasPair
{
    string astPath,label;
    DefUse defuse1,defuse2;
    unsigned funcDefLine,distance;
    AliasPair(vector<string>& row):defuse1(row.begin()+2),defuse2(row.begin()+6){
        astPath=row[0];
        funcDefLine=std::atoi(row[1].c_str());
        label=row[10];
        distance=0;
    }

    const string &getFileName(){
        return defuse1.path;
    }
};

class AliasStat{
    // vector<AliasPair> _aliasPairs;
    unordered_map<std::string,unordered_map<unsigned,MyStmt>> _fileToMyStmt;
    // map<const string,unordered_map<unsigned,MyStmt>> _fileToMyStmt;
public:
    AliasStat() {};

    void insert(const string& path,unsigned stmtLine,MyStmt &myStmt){
        _fileToMyStmt[path].emplace(stmtLine,myStmt);
    }

    MyStmt* getMyStmt(const string& path,const unsigned stmtLine) {
        if(_fileToMyStmt.count(path)){
            auto &lineToStmt=_fileToMyStmt[path];
            if(lineToStmt.count(stmtLine)){
                return &lineToStmt[stmtLine];
            }
        }
        return NULL;
    }

    MyStmt* getMyStmt(const DefUse& defuse) {
        return getMyStmt(defuse.path,defuse.instLine);
    }
};





#endif // end of ALIAS_STAT_H