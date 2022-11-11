#include "framework/WordDict.h"

WordDict::WordDict(){
  maxToken = 0;
}

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
    //dict.push_back(trim(line));
    mydict.emplace(trim(line), cnt);
    cnt++;
  }

  original_cnt = cnt;
}

void WordDict::add(std::string input){
  mydict.emplace(input, cnt);
  cnt++;

  //dict.push_back(input);
  //maxToken++;
}

bool WordDict::modify(int pos, std::string input){
  std::cout << "Unsupported operation" << std::endl;
  assert(0);
  //if(pos >= maxToken) return false;
  //dict[pos] = input;
  return true;
}

int WordDict::find(std::string input){
  std::unordered_map<std::string,int>::const_iterator iter = mydict.find(input);
  if(iter == mydict.end()){
    return -1;
  }
  else{
    return iter->second;
  }
  /*
  for(int i = 0; i < dict.size(); i++){
    if(dict[i] == input) return i;
  }
  return -1;*/
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
  /*
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
  //token = token + maxToken;
  return token;*/
}

int WordDict::getOther(){
  assert(0);
  return mydict.size()-1;
}

void WordDict::storeDict() {
  std::ofstream outfile(this->dictFile, std::ios::trunc);
  if(!outfile.is_open()) {
    std::cout<<"can not open "<< this->dictFile<<std::endl;
    return;
  }
  for(int i=1;i<cnt;i++){
    std::unordered_map<std::string, int>::iterator iter = mydict.begin();
    while(iter != mydict.end()){
      if(iter->second == i){
        outfile << common::string_replace_all(iter->first, "\n", "\\n") << std::endl;
      }
    }
  }
  /*
  for (auto iter : dict) {
    outfile << common::string_replace_all(iter, "\n", "\\n") << std::endl;
  }*/
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

void WordDict::dump(std::string filename){
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
  /*
  std::ofstream OutFile(filename); 
	for(int i=0;i<dict.size();i++){
    OutFile << dict[i] << std::endl;
  }*/
	outfile.close(); 
}