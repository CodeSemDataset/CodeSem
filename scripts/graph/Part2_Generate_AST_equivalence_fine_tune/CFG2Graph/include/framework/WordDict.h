#ifndef WORDDICT_H
#define WORDDICT_H

#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <cassert>
#include <set>

#include "Common.h"

class WordDict {
private:
  std::unordered_map<std::string, int> mydict;
  //std::vector<std::string> dict;
  int maxToken;
  std::string trim(std::string s);
  std::string dictFile;

  int cnt;
  int original_cnt;
  static bool compare_map_index(const std::pair<std::string, int> &a, const std::pair<std::string, int> &b);

public:
  WordDict(std::string dictFile);
  int getToken(std::string key);
  void storeDict();
};

#endif