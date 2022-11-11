#include "framework/WordDict.h"

WordDict::WordDict(){
  maxToken = 0;
}

WordDict::WordDict(std::string dictFile) {
  cnt = 0;
  this->dictFile = dictFile;
  std::ifstream infile(dictFile.c_str());
  if(!infile.is_open()) {
    std::cout << "can not open "<< dictFile <<std::endl;
    exit(0);
  }
  std::string line;
  while (std::getline(infile, line)) {
    mydict.emplace(line, ++cnt);
    dict_vec.push_back(trim(line));
  }

  std::cout << "Original Size() " << mydict.size() << std::endl;

  original_cnt = cnt;
}

int WordDict::getToken(std::string key) {
  key = common::string_replace_all(key, "\n", "\\n");
  key = trim(key);
  std::unordered_map<std::string,int>::const_iterator iter = mydict.find(key);
  if(iter == mydict.end()){
    mydict.emplace(key, ++cnt);
    dict_vec.push_back(key);
    return cnt;
  }
  else{
    return iter->second;
  }
}

void WordDict::storeDict(std::string filename) {
  std::ofstream outfile(filename, std::ios::trunc);
  if(!outfile.is_open()) {
    std::cout<<"can not open "<< this->dictFile<<std::endl;
    return;
  }
  cout << "original cnt: " << original_cnt << endl;
  cout << "now_cnt: " << cnt << endl;
  cout << "dict_size: " << dict_vec.size() << endl;

  for(int i = 0; i < dict_vec.size(); ++i) {
    outfile << dict_vec[i] << std::endl;
  }

  outfile.close();
}

std::string WordDict::trim(std::string s) {
  std::string result = s;
  result.erase(0, result.find_first_not_of(" \t\r\n"));
  result.erase(result.find_last_not_of(" \t\r\n") + 1);
  return result;
}

bool WordDict::compare_map_index(const pair<string, int> &a, const pair<string, int> &b){
  return a.second < b.second;
}
