// #include "framework/DiagnosticManager.h"
// #include <iostream>
// /*
// TUDiag *DiagnosticManager::addTUD(string filename) {
//   TUDiag *TUD = new TUDiag;
//   TUD->MainSourceFile = filename;
//   TUDs.insert(std::make_pair(filename, TUD));
//   return TUD;
// }
// */

// Diag *DiagnosticManager::addDiagnostic(string name, string message,
//                                        clang::SourceManager &sm,
//                                        clang::SourceLocation Loc) {

//   string MainSourceFile = sm.getFileEntryForID(sm.getMainFileID())->getName().str();
//   // Diag diag;
//   // diag.DiagnosticName = name;
//   // diag.Message = DiagMsg(Message, sm, Loc);
//   auto pos = TUDs.find(MainSourceFile);
//   if (pos == TUDs.end()) {
//     TUDiag *tud = new TUDiag;
//     tud->MainSourceFile = MainSourceFile;
//     tud->Diagnostics.push_back(Diag(name, message, sm, Loc));
//     TUDs.insert(make_pair(MainSourceFile, tud));
//     return &tud->Diagnostics.back();
//   } else {
//     pos->second->Diagnostics.push_back(Diag(name, message, sm, Loc));
//     return &pos->second->Diagnostics.back();
//   }
// }

// void DiagnosticManager::addReplacement(Diag *diag, clang::SourceManager &sm,
//                                        clang::SourceLocation Loc, unsigned len,
//                                        std::string text) {

//   diag->Message.Fixes.push_back(safehw::Replacement(sm, Loc, len, text));
// }

// void DiagnosticManager::addReplacement(Diag *diag,std::string fileName, unsigned line, unsigned col, unsigned len,
//                       std::string text){
//   diag->Message.Fixes.push_back(safehw::Replacement(fileName, text,line, col,len));
// }


// void DiagnosticManager::save(string MainSourceFile, string outFile) {
//   std::error_code EC;
//   llvm::raw_fd_ostream OS(outFile, EC, llvm::sys::fs::F_None);
//   if (EC) {
//     llvm::errs() << "Error opening output file: " << EC.message() << '\n';
//     return;
//   }
//   auto iter = TUDs.find(MainSourceFile);
//   if (iter == TUDs.end()) {
//     llvm::outs() << "Source File doesn't exist.\n";
//     return;
//   }
//   llvm::yaml::Output YAML(OS);
//   YAML << *(iter->second);
// }

// void DiagnosticManager::saveAll(string outDir) {
  
//   auto e = TUDs.end();
//   for (auto iter = TUDs.begin(); iter != e; iter++) {
//     TUDiag &tud = *(iter->second);
//     regex pat("/");
//     string filename = tud.MainSourceFile;
//     char* resolved_path = realpath(filename.c_str(), NULL);
//     filename = resolved_path;
//     filename = regex_replace(filename, pat, "_");
//     filename += ".yaml";
//     llvm::sys::fs::create_directory(outDir);
//     llvm::outs() << outDir + "/" + filename + "\n";
//     save(tud.MainSourceFile, outDir + "/" + filename);
//     free(resolved_path);
//   }


// }

// void DiagnosticManager::split(vector<string> &res, string str, string delimiter) {
//   unsigned int posBegin = 0;
//   int posSeperator = str.find(delimiter);

//   while (posSeperator != str.npos) {
//     res.push_back(str.substr(posBegin, posSeperator - posBegin));
//     posBegin = posSeperator + delimiter.size();
//     posSeperator = str.find(delimiter, posBegin);
//   }
//   if (posBegin != str.length())
//     res.push_back(str.substr(posBegin));
// }

// void DiagnosticManager::saveAllShort(string dir) {
//   auto e = TUDs.end();
//   for (auto iter = TUDs.begin(); iter != e; iter++) {
//     TUDiag &tud = *(iter->second);
//     regex pat_1("/");
//     regex pat_2("\\..+");
//     string filename = tud.MainSourceFile;

//     vector<string> res;
//     split(res, filename, "/");
//     filename = res.back();

//     filename = regex_replace(filename, pat_1, "_");
//     filename = regex_replace(filename, pat_2, ".yaml");
//     llvm::sys::fs::create_directory(dir);
//     llvm::outs() << dir + "/" + filename + "\n";
//     save(tud.MainSourceFile, dir + "/" + filename);
//   }
// }

// string DiagnosticManager::addSuffix(vector<string>& seg) {
//   int index = -1;
//   for (int i = 0; i < seg.size(); ++i) {
//     if (seg[i] == "..") {
//       index = i;
//     }
//   }

//   //if (index != -1)
//     //seg.erase(seg.begin() + index);

//   string& file = seg.back();
//   int sufPos = file.find('.');
//   string suffix = file.substr(sufPos + 1);
//   file = file.substr(0, sufPos) + "_" + suffix + ".yaml";

//   string res;
//   // path like /path/to/file/a.cpp, so the element in seg[0]
//   // is empty, ignore it
//   for (int i = 1; i < seg.size(); ++i) {
//     // there is '.' in path, and current i is equal to index or
//     // next i is equal to index, ignore
//     // /path/to/file/../a.cpp -> /path/to/a.cpp
//     if (index != -1 && (i == index || i + 1 == index))
//       continue;
//     res += "_" + seg[i];
//   }

//   return res;
// }

// void DiagnosticManager::saveAllWithSuffix(string dir) {
//   auto e = TUDs.end();
//   for (auto iter = TUDs.begin(); iter != e; iter++) {
//     TUDiag &tud = *(iter->second);
//     regex pat_1("/");
//     regex pat_2("\\..+");
//     string filename = tud.MainSourceFile;

//     //cout << filename << endl;
//     vector<string> res;
//     split(res, filename, "/");
//     filename = addSuffix(res);
//     //cout << filename << endl;

//     //filename = regex_replace(filename, pat_1, "_");
//     //filename = regex_replace(filename, pat_2, ".yaml");
//     llvm::sys::fs::create_directory(dir);
//     llvm::outs() << dir + "/" + filename + "\n";
//     save(tud.MainSourceFile, dir + "/" + filename);
//   }
// }


// /*
// TUDiag *DiagnosticManager::getTUD(string filename) {
//   auto iter = TUDs.find(filename);
//   if (iter != TUDs.end())
//     return iter->second;
//   else
//     return nullptr;
// }
// */

// DiagnosticManager::~DiagnosticManager() {
//   auto e = TUDs.end();
//   for (auto iter = TUDs.begin(); iter != e; iter++)
//     free(iter->second);
// }

// void DiagnosticManager::save(TUDiag *tud, string outFile) {
//   std::error_code EC;
//   llvm::raw_fd_ostream OS(outFile, EC, llvm::sys::fs::F_None);
//   if (EC) {
//     llvm::errs() << "Error opening output file: " << EC.message() << '\n';
//     return;
//   }
//   llvm::yaml::Output YAML(OS);
//   YAML << *tud;
// }