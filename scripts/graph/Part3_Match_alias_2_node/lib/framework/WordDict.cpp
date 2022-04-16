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
    mydict.emplace(trim(line), ++cnt);
  }

  original_cnt = cnt;
}

int WordDict::getToken(std::string key) {
  key = common::string_replace_all(key, "\n", "\\n");
  std::unordered_map<std::string,int>::const_iterator iter = mydict.find(key);
  if(iter == mydict.end()){
    mydict.emplace(key, ++cnt);
    return cnt;
  }
  else{
    return iter->second;
  }
}

void WordDict::storeDict() {
  system("cp dict.txt dict_final.txt");
  std::ofstream outfile("dict_final.txt", std::ios::app);
  if(!outfile.is_open()) {
    std::cout<<"can not open "<< this->dictFile<<std::endl;
    return;
  }
  cout << "original cnt: " << original_cnt << endl;
  cout << "now_cnt: " << cnt << endl;

  vector<pair<string,int>> cp_map;
  std::unordered_map<std::string, int>::iterator iter = mydict.begin();
  while(iter != mydict.end()){
    cp_map.push_back(*iter);
    iter++;
  }

  sort(cp_map.begin(), cp_map.end(), compare_map_index);
  int current_cnt = 1;
  for(int i=0;i<cp_map.size();i++){
    if(cp_map[i].second < original_cnt) continue;
    outfile << cp_map[i].first << endl;
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
