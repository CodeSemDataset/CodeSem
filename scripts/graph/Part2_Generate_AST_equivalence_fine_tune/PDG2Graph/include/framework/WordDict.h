#ifndef WORDDICT_H
#define WORDDICT_H

#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <cassert>

#include "Common.h"

class WordDict {
private:
  // std::unordered_map<std::string, int> mydict;
  std::vector<std::string> dict;
  int maxToken;
  std::string trim(std::string s);
  std::string dictFile;

public:
  WordDict(std::string dictFile);
  int getToken(std::string key);
  void storeDict();
};

#endif