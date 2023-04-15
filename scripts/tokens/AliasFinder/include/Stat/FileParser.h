#ifndef FILE_PARSER_H
#define FILE_PARSER_H
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <assert.h>
#include "Stat/AliasStat.h"
using namespace std;

class CSVParser{
    bool _eof;
    ifstream _fin;
    ofstream _fout;
public:
    CSVParser(){}

    CSVParser(string inPath,string outPath){
        _fin.open(inPath);
        _fout.open(outPath);
        assert(_fin.is_open() && _fout.is_open());
        vector<string> header={
            "name1","path1","def_line1",
            "name2","path2","def_line2",
            "label","distance"
        };
        writeLine(header);
    }
    
    ~CSVParser(){
        _fin.close();
        _fout.close();
    }
    // vector<string> nextLine(){  
    //     vector<string> res;      
    //     ifstream fp("xxx/user_data.csv"); //定义声明一个ifstream对象，指定文件路径
    //     string line;
    //     getline(fp,line); //跳过列名，第一行不做处理
    //     while (getline(fp,line)){ //循环读取每行数据
    //         vector<string> data_line;
    //         string str;
    //         istringstream readstr(line); //string数据流化
    //         //将一行数据按'，'分割
    //         while(getline(readstr,str,',')){ //可根据数据的实际情况取循环获取               
    //             // data_line.push_back(atoi(number.c_str())); //字符串传int
    //             data_line.push_back(str); //字符串传int
    //         }
    //         res.push_back(data_line); //插入到vector中
    //     }
    // }
    static string joinPath(string p1,string p2){
        // string path;
        if(p1.back()=='/'){
            return p1+p2;
        }
        else{
            return p1+"/"+p2;
        }
    }

    vector<string> splitLine(string &csvLine){
        vector<string> res; 
        splitLine(csvLine,res);
        return res;
    }

    void splitLine(string &csvLine,vector<string> &res){        
        string str;
        istringstream readstr(csvLine); //string数据流化
        //将一行数据按'，'分割
        while(getline(readstr,str,',')){  
            // data_line.push_back(atoi(number.c_str())); //字符串传int
            res.push_back(str); 
        }
    }

    bool readLine(vector<string> &res){
        string line;
        res.clear();
        getline(_fin,line);
        _eof=_fin.eof();
        if(!_eof){
            splitLine(line,res);
        }
        return !_eof;
    }

    string listToRow(vector<string> &list){
        string res;
        for(string &str:list){
            res+=(str+",");
        }
        res.pop_back(); // delete the last ','
        return res;
    }

    void writeLine(vector<string> &list){
        _fout<<listToRow(list)<<'\n';
    }

    void writeLine(AliasPair &aliasPair){
        DefUse &defuse1=aliasPair.defuse1;
        DefUse &defuse2=aliasPair.defuse2;

        vector<string> list={
            defuse1.name,defuse1.path,defuse1.defLine,
            defuse2.name,defuse2.path,defuse2.defLine,
            aliasPair.label,std::to_string(aliasPair.distance)            
        };
        writeLine(list);
    }

};



#endif // end of FILE_PARSER_H