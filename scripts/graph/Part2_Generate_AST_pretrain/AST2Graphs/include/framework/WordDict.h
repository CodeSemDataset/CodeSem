#ifndef WORDDICT_H
#define WORDDICT_H

#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <cassert>
#include <string>

#include "Common.h"

using namespace std;

class WordDict {
private:
  std::unordered_map<std::string, int> mydict;
  //std::vector<std::string> dict;
  int maxToken;
  std::string trim(std::string s);
  std::string dictFile;

  int cnt;
  int original_cnt;

public:
  WordDict(std::string dictFile);

//the following 5 API were added for AST2Graph
  WordDict();
  void add(std::string input);
  bool modify(int pos, std::string input);
  int find(std::string input);
  int getOther();

  int getToken(std::string key);
  void storeDict();

  void dumpSize();

  static bool compare_map_index(const pair<string, int> &a, const pair<string, int> &b);
  void dump(std::string filename);
};

#endif