#include "framework/Config.h"

Config::Config(std::string configFile) {
  std::ifstream infile(configFile.c_str());
  std::string line;
  while (std::getline(infile, line)) {
    line = trim(line);
    if (line == "") {
      continue;
    }
    std::unordered_map<std::string, std::string> oneBlockOption;
    std::string optionBlockName = line;
    std::getline(infile, line);
    line = trim(line);
    if (line != "{") {
      std::cout << "config file format error\n";
      exit(1);
    }
    while (std::getline(infile, line)) {
      line = trim(line);
      if (line == "") {
        continue;
      }
      if (line == "}") {
        options.insert(std::make_pair(optionBlockName, oneBlockOption));
        break;
      }
      auto parsedLine = parseOptionLine(line);
      oneBlockOption.insert(parsedLine);
    }
  }
}

std::pair<std::string, std::string>
Config::parseOptionLine(std::string optionLine) {
  int index = optionLine.find("=");
  std::string name = optionLine.substr(0, index);
  std::string value = optionLine.substr(index + 1);
  name = trim(name);
  value = trim(value);
  return std::make_pair(name, value);
}

std::unordered_map<std::string, std::string>
Config::getOptionBlock(std::string blockName) {
  std::unordered_map<
      std::string, std::unordered_map<std::string, std::string>>::const_iterator
      got = options.find(blockName);
  if (got == options.end()) {
    std::cout << "block name not found\n";
    exit(1);
  } else {
    return got->second;
  }
}

std::unordered_map<std::string, std::unordered_map<std::string, std::string>>
Config::getAllOptionBlocks() {
  return options;
}

std::ostream &operator<<(std::ostream &os, Config &c) {
  for (auto block : c.getAllOptionBlocks()) {
    os << "block name: " << block.first << "\n";
    for (auto blockOpt : block.second) {
      os << "\t"
         << "option name = " << blockOpt.first << "\n";
      os << "\t"
         << "option value = " << blockOpt.second << "\n";
    }
  }
  return os;
}

std::string Config::trim(std::string s) {
  std::string result = s;
  result.erase(0, result.find_first_not_of(" \t\r\n"));
  result.erase(result.find_last_not_of(" \t\r\n") + 1);
  return result;
}

TaintConfig::TaintConfig(std::string configFile) {
  std::ifstream infile(configFile.c_str());
  std::string line;
  while (std::getline(infile, line)) {
    line = trim(line);
    if (line == "") {
      continue;
    }
    std::string functionName = line;
    //获取TaintChecker全局配置
    if(functionName == "TaintCheckerConfig") {
      std::getline(infile, line);
      line = trim(line);
      if(line != "{") {
        std::cout << "config file format error\n";
        exit(1);
      }

      while(std::getline(infile, line)) {
        line = trim(line);
        if(line == "}") {
          break;
        }
        line = trim(line);
        int index = line.find("=");
        std::string name = line.substr(0, index);
        std::string value = line.substr(index + 1);
        name = trim(name);
        value = trim(value);
        taintCheckerConfig.emplace(name, value);
      }
      continue;
    }

    if(functionName == "TaintSourceConfig") {
      std::getline(infile, line);
      line = trim(line);
      if(line != "{") {
        std::cout << "TaintSourceConfig Format Error" << std::endl;
        exit(1);
      }
      
      bool match = true;
      while(std::getline(infile, line)) {
         line = trim(line);
         if(line == "") continue;
         if(line == "}") {
          if(match) break;
          else {
            std::cout << "TaintSourceConfig Format Error" << std::endl;
            exit(1);
          }
         }
         //读取配置项功能名称
         std::string current_function_name = line;
         std::getline(infile, line);
         line = trim(line);
         if(line != "{") {
            std::cout << "TaintSourceConfig format error!" << std::endl;
            exit(1);
         }
         match = false;
         while(getline(infile, line)) {
          line = trim(line);
          if(line == "}") {
            match = true;
            break;
          }
          //读取配置的参数
          std::vector<int> index = getTaintSourceConfig(line);
          taintSourceConfig[current_function_name].emplace(index);
         }
      }
      continue;
    }

    if(functionName == "BlackList") {
      std::getline(infile, line);
      line = trim(line);
      if(line != "{") {
        std::cout << "BlackList file format error!" << std::endl;
        exit(1);
      }

      while(std::getline(infile, line)) {
        line = trim(line);
        if(line == "}") {
          break;
        }
        std::string functionName = line.substr(0, line.find("=")-1);
        functionName = trim(functionName);
        std::string returnValue = line.substr(line.find("=") + 1);
        returnValue = trim(returnValue);
        int isReturnValueTaint = atoi(returnValue.c_str());
        blackList.emplace(functionName, isReturnValueTaint == 1 ? true : false);
      }
      continue;
    }

    if(functionName == "WhiteList") {
      std::getline(infile, line);
      line = trim(line);
      if(line != "{") {
        std::cout << "BlackList file format error!" << std::endl;
        exit(1);
      }

      while(std::getline(infile, line)) {
        line = trim(line);
        if(line == "}") {
          break;
        }
        std::string functionName = line.substr(0, line.find('=')-1);
        functionName = trim(functionName);
        std::string returnValue = line.substr(line.find("=") + 1);
        returnValue = trim(returnValue);
        int isReturnValueTaint = atoi(returnValue.c_str());
        whiteList.emplace(functionName, isReturnValueTaint == 1 ? true : false);
      }
      continue;
    }
  }

  if(taintCheckerConfig["BlackList"] != "true") blackList.clear();
  if(taintCheckerConfig["WhiteList"] != "true") whiteList.clear();
  if(taintCheckerConfig["TaintSourceConfig"] != "true") taintSourceConfig.clear();
}

std::vector<int> TaintConfig::getTaintSourceConfig(std::string line) {
  std::vector<int> res;
  line = trim(line);
  line = line.substr(line.find("=") + 1);
  line = line.substr(line.find("{") + 1);
  line = line.substr(0, line.find("}"));
  
  while(line.find_first_of(",") != std::string::npos) {
    std::string index = line.substr(0, line.find_first_of(","));
    index = trim(index);
    line = line.substr(line.find_first_of(",") + 1);
    if(index[0] == '[') {
      index = index.substr(1, index.find("]"));
      int taint_index = atoi(index.c_str());
      taint_index = -(taint_index);
      res.push_back(taint_index);
    }
    else {
      int taint_index = atoi(index.c_str());
      res.push_back(taint_index);
    }
  }

  line = trim(line);
  if(line[0] == '[') {
    line = line.substr(1, line.find("]"));
    int taint_index = atoi(line.c_str());
    taint_index = -(taint_index);
    res.push_back(taint_index);
  }
  else {
    int taint_index = atoi(line.c_str());
    res.push_back(taint_index);
  }

  return res;
}

std::string TaintConfig::trim(std::string s) {
  std::string result = s;
  result.erase(0, result.find_first_not_of(" \t\r\n"));
  result.erase(result.find_last_not_of(" \t\r\n") + 1);
  return result;
}

void TaintConfig::dump() {
  std::cout << "blackList" << std::endl;
  for(auto func : blackList) {
    std::cout << "blackFunc : " << func.first << std::endl;
  }
  std::cout << "whiteList" << std::endl;
  for(auto func : whiteList) {
    std::cout << "whiteFunc : " << func.first << std::endl;
  }
  std::cout << "TaintSourceConfig" << std::endl;
  for(auto iter = taintSourceConfig.begin(); iter != taintSourceConfig.end(); ++iter) {
    std::cout << "FuncName : " << iter->first << std::endl;
    for(auto index : iter->second) {
      std::cout << "taint_src : ";
      for(auto i : index) {
        std::cout << i << " ";
      }
      std::cout << std::endl;
    }
  }
}