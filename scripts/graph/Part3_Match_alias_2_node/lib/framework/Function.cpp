#include "framework/Function.h"
#include <iostream>
using namespace std;

Function::Function(std::string name, WordDict& dict):dict(dict){
    this->name = name;
    this->dict = dict;
}

void Function::addEdge_ggnn(Node_Index* src, Node_Index* dst, int edge_type){
    //should check whether this edge already exist
    Edge edge;
    edge.src = src->index;
    edge.dst = dst->index;
    edge.edgeType = edge_type;

    //check if already exist
    bool exist = false;
    for(Edge e : edges_ggnn){
        if(e == edge){
            exist = true;
            break;
        }
    }
    if(exist) return;
    edges_ggnn.push_back(edge);
/*
    string kind1 = getKindSpelling(src->cursor);
    string kind2 = getKindSpelling(dst->cursor);
    if(!src->isTerminal) kind1 = "_" + kind1;
    if(!dst->isTerminal) kind2 = "_" + kind2;

    int token1 = dict.getToken(kind1);
    int token2 = dict.getToken(kind2);
    
    int max = (src->index < dst->index) ? dst->index : src->index;
    if(max_ggnn < max){
        for(int i=0;i<max-max_ggnn;i++){
            node_features_sandwich.push_back(-1);
        }
        max_ggnn = max;
    }
    node_features_ggnn[src->index] = token1;
    node_features_ggnn[dst->index] = token2;
*/
}

void Function::addEdge_sandwich(Node_Index* src, Node_Index* dst, int edge_type){
    Edge edge;
    edge.src = src->sandwich_index;
    edge.dst = dst->sandwich_index;
    edge.edgeType = edge_type;

    //check if already exist
    bool exist = false;
    for(Edge e : edges_sandwich){
        if(e == edge){
            exist = true;
            break;
        }
    }
    if(exist) return;
    edges_sandwich.push_back(edge);
/*
    string kind1 = getKindSpelling(src->cursor);
    string kind2 = getKindSpelling(dst->cursor);
    if(!src->isTerminal) kind1 = "_" + kind1;
    if(!dst->isTerminal) kind2 = "_" + kind2;

    int token1 = dict.getToken(kind1);
    int token2 = dict.getToken(kind2);
    
    int max = (src->index < dst->index) ? dst->index : src->index;
    if(max_sandwich < max){
        for(int i=0;i<max-max_ggnn;i++){
            node_features_sandwich.push_back(-1);
        }
        max_sandwich = max;
    }
    node_features_sandwich[src->index] = token1;
    node_features_sandwich[dst->index] = token2;
*/
}

int Function::getEdgeNum(){
    return edges_ggnn.size();
}

bool Function::equal(Function* other){
    std::vector<Edge> other_edges = other->get_ggnn_edges();
    string other_name = other->getName();
    if(other_name != name) return false;
    if(other_edges.size() != edges_ggnn.size()) return false;

    for(Edge temp : edges_ggnn){
        vector<Edge>::iterator result = find(other_edges.begin( ), other_edges.end( ), temp);
        if (result == other_edges.end()) return false;
    }
    
    return true;
}

std::vector<Edge> Function::get_ggnn_edges(){
    return edges_ggnn;
}
std::string Function::getName(){
    return name;
}

void Function::addAllNodesToDict(std::vector<Node_Index*> node_index){
    for(int i=0; i<node_index.size(); i++){
        string kind = getKindSpelling(node_index[i]->cursor);
        const char *spelling = clang_getCString(clang_getCursorSpelling(node_index[i]->cursor));

        if(!node_index[i]->isTerminal){
            kind = "_" + kind;
        }
        if(spelling != nullptr){
            kind = kind + "_" + (string)spelling;
        }
        int token = dict.getToken(kind);
        
        node_features_ggnn.push_back(token);
        if(node_index[i]->sandwich_index != -1 && node_index[i]->isTerminal)
            node_features_sandwich.push_back(token);
    }
}

json Function::dumpJson_ggnn(){
    json root;
    //transform edges to String

    json edges = json::array();
    for(int i=0;i<edges_ggnn.size();i++){
        json edge = json::array();
        edge.push_back(edges_ggnn[i].src);
        edge.push_back(edges_ggnn[i].edgeType);
        edge.push_back(edges_ggnn[i].dst);

        edges.push_back(edge);
    }

    json node_features_json = json::array();
    for(int j=0;j<node_features_ggnn.size();j++){
        node_features_json.push_back(node_features_ggnn[j]);
    }


    root["graph"] = edges;
    root["node_features"] = node_features_json;
    root["projName"] = name;

    return root;
}

json Function::dumpJson_sandwich(){
    json root;
    //transform edges to String

    json edges = json::array();
    for(int i=0;i<edges_sandwich.size();i++){
        json edge = json::array();
        edge.push_back(edges_sandwich[i].src);
        edge.push_back(edges_sandwich[i].edgeType);
        edge.push_back(edges_sandwich[i].dst);

        edges.push_back(edge);
    }

    json node_features_json = json::array();
    for(int j=0;j<node_features_sandwich.size();j++){
        node_features_json.push_back(node_features_sandwich[j]);
    }


    root["graph"] = edges;
    root["node_features"] = node_features_json;
    root["projName"] = name;

    return root;
}

std::string Function::getKindSpelling(CXCursor cursor){
  enum CXCursorKind curKind = clang_getCursorKind(cursor);
  const char *curkindSpelling = clang_getCString(
                                clang_getCursorKindSpelling(curKind));
  return curkindSpelling;
}

void CSVRead::readAllCSV(){
    readSingleCSV(0);
    readSingleCSV(1);
    readSingleCSV(2);
}

void CSVRead::readSingleCSV(int csvkind){
    std::string filename;
    if(csvkind > 2){
        std::cout << "Error kind in readSingleCSV" << std::endl;
        return;
    }
    filename = dataset_path + "/" + kind[csvkind] + "_output.csv";
    
    ifstream inFile(filename, ios::in);
    if(!inFile.is_open()){
        std::cout << "inFile is null" << std::endl;
        return;
    }
    int cnt = 0;
    int true_cnt = 0;
    int false_cnt = 0;

    string line1;
    string line2;
    bool llvm_true = true;
	while(getline(inFile,line1))
	{
		stringstream ss(line1);
		string str;
		vector<string> lineArray;
		
		while(getline(ss,str,',')){
			lineArray.push_back(str);
        }

        ++cnt;
        if(cnt == 1) continue; // the first line
        if(lineArray[0].find("True") != lineArray[0].npos) continue; //True Alias Pairs line
        if(lineArray[0].find("False") != lineArray[0].npos){
            llvm_true = false;
            continue;
        }
        if(lineArray.size() <= 5){
            getline(inFile, line1); // abandon both alias in the pair
            ++cnt;
            continue;
        } 

        alias alias1;
        alias1.name = lineArray[0].substr(1, lineArray[0].size()-2);
        alias1.def_point = atoi(lineArray[2].c_str());
        for(int i=5;i<lineArray.size();i++){
            if(lineArray[i].find("(") != lineArray[i].npos){
                string temp = lineArray[i].substr(lineArray[i].find_first_of(";")+1);
                temp = temp.substr(0, temp.find_first_of(';'));
                alias1.use_points.push_back(atoi(temp.c_str()));
            }
        }

        alias_function function;
        function.name = lineArray[3];
        function.path = lineArray[1];
        function.start = atoi(lineArray[4].substr(0, lineArray[4].find_first_of("-")).c_str());
        function.end = atoi(lineArray[4].substr(lineArray[4].find_first_of("-") + 1).c_str());

        if(getline(inFile,line2)){
            ++cnt;
            stringstream s2(line2);
            lineArray.clear();
            
            while(getline(s2,str,',')){
			    lineArray.push_back(str);
            }

            if(lineArray[0].find("True") != lineArray[0].npos) continue; //True Alias Pairs line
            if(lineArray[0].find("False") != lineArray[0].npos){
                llvm_true = false;
                continue;
            } //False Alias Pairs line
            if(lineArray.size() <= 5) continue;

            alias alias2;
            alias2.name = lineArray[0].substr(1, lineArray[0].size()-2);
            alias2.def_point = atoi(lineArray[2].c_str());
            for(int i=5;i<lineArray.size();i++){
                if(lineArray[i].find("(") != lineArray[i].npos){
                    string temp = lineArray[i].substr(lineArray[i].find_first_of(";")+1);
                    temp = temp.substr(0, temp.find_first_of(';'));
                    alias2.use_points.push_back(atoi(temp.c_str()));
                }
            }

            if(function.path != lineArray[1]) continue;
            if(function.name != lineArray[3]) continue;
            if(function.start != atoi(lineArray[4].substr(0, lineArray[4].find_first_of("-")).c_str())) continue;
            if(function.end != atoi(lineArray[4].substr(lineArray[4].find_first_of("-") + 1).c_str())) continue;

            alias_pair new_pair;
            new_pair.alias1 = alias1;
            new_pair.alias2 = alias2;
            new_pair.function = function;
            new_pair.llvm_true = llvm_true;
            switch(csvkind){
                case 0: gcc_pairs.push_back(new_pair); break;
                case 1: linux_pairs.push_back(new_pair); break;
                case 2: sql_pairs.push_back(new_pair); break;
                default: break;
            }
        }
	}
}

void CSVRead::outputAll(int csvkind){
    std::vector<alias_pair> output;
    switch(csvkind){
        case 0: output = gcc_pairs; break;
        case 1: output = linux_pairs; break;
        case 2: output = sql_pairs; break;
        default: std::cout << "wrong csvkind" << std::endl; return;
    }
    int true_cnt = 0;
    int false_cnt = 0;

    for(int i=0;i<output.size();i++){
        std::cout << "-----------------------------------------" << std::endl;
        std::cout << "Function: name:" << output[i].function.name << " scope:" << output[i].function.start << "-" << output[i].function.end << std::endl;
        std::cout << "alias1: name:" << output[i].alias1.name << " def_point:" << output[i].alias1.def_point << " use_points:";
        for(int j=0;j<output[i].alias1.use_points.size();j++){
            std::cout << output[i].alias1.use_points[j] << ",";
        }
        std::cout << endl;
        std::cout << "alias2: name:" << output[i].alias2.name << " def_point:" << output[i].alias2.def_point << " use_points:";
        for(int j=0;j<output[i].alias2.use_points.size();j++){
            std::cout << output[i].alias2.use_points[j] << ",";
        }
        std::cout << endl;
        int match = output[i].llvm_true?1:0;
        if(match == 1) true_cnt++;
        else false_cnt++;
        std::cout << match << std::endl;
    }

    std::cout << "Total Size:" << output.size() << std::endl;
    std::cout << "True Pairs:" << true_cnt << std::endl;
    std::cout << "False Pairs:" << false_cnt << std::endl;
}

int CSVRead::getSize(int csvkind){
    switch (csvkind)
    {
    case 0: return gcc_pairs.size();
    case 1: return linux_pairs.size();
    case 2: return sql_pairs.size();
    default: return -1;
    }
}

alias_pair CSVRead::getPair(int csvkind, int index){
    alias_pair temp;
    switch(csvkind){
        case 0:
            if(index > gcc_pairs.size()-1) return temp;
            return gcc_pairs[index];
        case 1:
            if(index > linux_pairs.size()-1) return temp;
            return linux_pairs[index];
        case 2:
            if(index > sql_pairs.size()-1) return temp;
            return sql_pairs[index];
        default:
            return temp;
    }
}

std::string CSVRead::deal_with_filename(std::string filename, int kind){
  //gcc
  if(kind == 0){  
    filename = filename.substr(filename.find_first_of("/")+1);
    filename = filename.substr(filename.find_first_of("/")+1);
    filename = filename.substr(0, filename.find_last_of("."));
    filename = "/home/qian/Downloads/empirical_study/gcc-10.3.0/build/" + filename + ".ast";
  }

  //linux
  if(kind == 1){
    filename = filename.substr(0, filename.find_last_of("."));
    filename = "/home/qian/Downloads/empirical_study/wy-linux/linux-5.3.6/" + filename + ".ast";
  }

  return filename;
}

void CSVRead::read_sql_list(){
    ifstream inFile("astList.txt");
    std::string temp;
    while(getline(inFile, temp)){
        std::string astname = temp.substr(temp.find_last_of("/")+1);
        ast2path.insert(std::make_pair(astname, temp));
    }
}

std::set<std::string> CSVRead::deal_with_filename_sql(std::string filename){
    std::set<std::string> result;
    if(ast2path.empty()) read_sql_list();
    
    std::string astName = filename.substr(filename.find_last_of("/")+1) + ".ast";
    //std::cout << astName << std::endl;
    if(ast2path.find(astName) != ast2path.end()){
        result.insert(ast2path[astName]);
    }

    return result;
}