/*
edge_type:
1. Child
2. NextToken
3. LastRead
4. LastWrite
5. ComputedFrom
6. LastLexicalUses
7. ReturnsTo
8. GuardBy
9. GuardedByNevigation
*/
//ggnn has all 9 kinds of above edges
//sandwich has no Child, ReturnsTo
#ifndef FUNCTION_H
#define FUNCTION_H
#include "framework/WordDict.h"
#include <nlohmann/json.hpp>

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <set>
#include <clang-c/Index.h>

using json = nlohmann::json;

struct Edge{
    int src;
    int dst;
    int edgeType;
    bool operator == (const Edge & other) const{
        return (src == other.src) && (dst == other.dst) && (edgeType == other.edgeType);
    }
};

struct Node_Index{
  CXCursor cursor;
  int index;
  int sandwich_index;
  bool isTerminal;
  int father;
  std::vector<int> children;
};

class Function{
public:
    Function(std::string name, WordDict& dict);

    void addEdge_ggnn(Node_Index* src, Node_Index* dst, int edge_type);
    void addEdge_sandwich(Node_Index* src, Node_Index* dst, int edge_type);
    void addAllNodesToDict(std::vector<Node_Index*> node_index);

    json dumpJson_ggnn();
    json dumpJson_sandwich();

    void setMax_ggnn(int max);
    void setMax_sandwich(int max);

    std::vector<Edge> get_ggnn_edges();
    std::string getName();
    int getEdgeNum();

    bool equal(Function* other);
private:
/*
three parts of output:
1. edges e.g. [1,2,3]
2. node_features : [1,2,3] 
*/
    std::string name;
    WordDict& dict; 
    std::vector<Edge> edges_ggnn;
    std::vector<Edge> edges_sandwich;
    std::vector<int> node_features_ggnn;
    std::vector<int> node_features_sandwich;

    void add_token2num(CXCursor src, CXCursor dst, int choice); //choice = 0 ggnn choice = 1 sandwich
    std::string getKindSpelling(CXCursor cursor);
};

#endif