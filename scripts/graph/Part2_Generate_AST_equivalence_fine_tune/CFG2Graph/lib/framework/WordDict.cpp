#include "framework/WordDict.h"

WordDict::WordDict(std::string dictFile) {
  cnt = 1;
  this->dictFile = dictFile;
  std::ifstream infile(dictFile.c_str());
  maxToken = 151;
  if(!infile.is_open()) {
    std::cout << "can not open "<< dictFile <<std::endl;
    exit(0);
  }
  std::string line;
  while (std::getline(infile, line)) {
    mydict.emplace(trim(line), cnt);
    cnt++;
    //dict.push_back(trim(line));
  }

  original_cnt = cnt;
}

int WordDict::getToken(std::string key) {
  key = common::string_replace_all(key, "\n", "\\n");
  std::unordered_map<std::string,int>::const_iterator iter = mydict.find(key);
  if(iter == mydict.end()){
    mydict.emplace(key, cnt);
    cnt++;
    return cnt-1;
  }
  else{
    return iter->second;
  }
  // int token = -1;
  // for (int i = 0; i < dict.size(); ++i) {
  //   if (key == dict[i]) {
  //     token = i;
  //     break;
  //   }
  // }
  // if (token == -1) {
  //   token = dict.size();
  //   dict.push_back(key);
  // }
  // token = token + maxToken;
  // return token;
}

void WordDict::storeDict() {
  //system("cp dict.txt dict_final.txt");
  std::ofstream outfile("dict.txt", std::ios::trunc);
  if(!outfile.is_open()) {
    std::cout<<"can not open "<< this->dictFile<<std::endl;
    return;
  }
  std::cout << "original cnt: " << original_cnt << std::endl;
  std::cout << "now_cnt: " << cnt << std::endl;

  std::vector<std::pair<std::string,int>> cp_map;
  std::unordered_map<std::string, int>::iterator iter = mydict.begin();
  while(iter != mydict.end()){
    cp_map.push_back(*iter);
    iter++;
  }

  std::sort(cp_map.begin(), cp_map.end(), compare_map_index);
  int current_cnt = 1;
  for(int i=0;i<cp_map.size();i++){
    //if(cp_map[i].second < original_cnt) continue;
    outfile << cp_map[i].first << std::endl;
  }
	outfile.close(); 
  // std::ofstream outfile(this->dictFile, std::ios::trunc);
  // if(!outfile.is_open()) {
  //   std::cout<<"can not open "<< this->dictFile<<std::endl;
  //   return;
  // }
  // for (auto iter : dict) {
  //   outfile << common::string_replace_all(iter, "\n", "\\n") << std::endl;
  // }
  // outfile.close();
}

bool WordDict::compare_map_index(const std::pair<std::string, int> &a, const std::pair<std::string, int> &b){
  return a.second < b.second;
}

std::string WordDict::trim(std::string s) {
  std::string result = s;
  result.erase(0, result.find_first_not_of(" \t\r\n"));
  result.erase(result.find_last_not_of(" \t\r\n") + 1);
  return result;
}