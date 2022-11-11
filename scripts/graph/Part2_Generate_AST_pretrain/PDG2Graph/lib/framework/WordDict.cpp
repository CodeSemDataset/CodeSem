#include "framework/WordDict.h"

WordDict::WordDict(std::string dictFile) {
  this->dictFile = dictFile;
  std::ifstream infile(dictFile.c_str());
  maxToken = 151;
  if(!infile.is_open()) {
    std::cout << "can not open "<< dictFile <<std::endl;
    exit(0);
  }
  std::string line;
  while (std::getline(infile, line)) {
    dict.push_back(trim(line));
  }
}

int WordDict::getToken(std::string key) {
  key = common::string_replace_all(key, "\n", "\\n");
  int token = -1;
  for (int i = 0; i < dict.size(); ++i) {
    if (key == dict[i]) {
      token = i;
      break;
    }
  }
  if (token == -1) {
    token = dict.size();
    dict.push_back(key);
  }
  token = token + maxToken;
  return token;
}

void WordDict::storeDict() {
  std::ofstream outfile(this->dictFile, std::ios::trunc);
  if(!outfile.is_open()) {
    std::cout<<"can not open "<< this->dictFile<<std::endl;
    return;
  }
  for (auto iter : dict) {
    outfile << common::string_replace_all(iter, "\n", "\\n") << std::endl;
  }
  outfile.close();
}

std::string WordDict::trim(std::string s) {
  std::string result = s;
  result.erase(0, result.find_first_not_of(" \t\r\n"));
  result.erase(result.find_last_not_of(" \t\r\n") + 1);
  return result;
}