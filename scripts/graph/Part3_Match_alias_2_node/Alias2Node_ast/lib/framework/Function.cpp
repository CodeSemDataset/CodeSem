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
