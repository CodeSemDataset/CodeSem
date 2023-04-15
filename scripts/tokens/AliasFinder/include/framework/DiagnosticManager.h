// #ifndef DIAGNOSTIC_MANAGER_H
// #define DIAGNOSTIC_MANAGER_H
// //#include <clang/Tooling/DiagnosticsYaml.h>
// //#include <clang/Tooling/ReplacementsYaml.h>
// //#include <clang/Tooling/Core/Diagnostic.h>
// #include "Diagnostic.h"
// #include <clang/Tooling/Tooling.h>
// #include <llvm/ADT/StringMap.h>
// #include <llvm/Support/Error.h>
// //#include <llvm/Support/YAMLTraits.h>
// #include <assert.h>
// #include <llvm/Support/FileSystem.h>
// #include <map>
// #include <regex>
// #include <vector>
// using namespace std;

// using Diag = safehw::Diagnostic;
// using TUDiag = safehw::TranslationUnitDiagnostics;
// using DiagMsg = safehw::DiagnosticMessage;
// /*
// TranslationUnitDiagnostics
//     Diagnostic_1
//         Replacement_1
//         Replacement_2
//         .
//         .
//     Diagnostic_2
//         Replacement_1
//         Replacement_2
//         .
//         .
//     .
//     .
//     .
// */

// class DiagnosticManager {
// public:
//   DiagnosticManager() {}

//   /// Generate a new TranslationUnitDiagnostics
//   /// \param filename is the main source file name of this TranslationUnit(in
//   /// absolute path).
//   // TUDiag* addTUD(string filename);

//   /// Get a TranslationUnitDiagnostics via its Main Source File name.
//   // TUDiag* getTUD(string filename);

//   /// Add a new Diagnostc.
//   /// \param name is the name of this Diagnostic, indicating the type of fault
//   /// you are dealing with. 
//   /// \param message is a string describing this specific Diagnostic. 
//   /// \param sm can be obtained via ASTContext.getSourceManager().
//   /// \param Loc is the SourceLocation of the faulty AST node.
//   /// \returns the pointer to the added Diagnostic.
//   Diag *addDiagnostic(string name, string message, clang::SourceManager &sm,
//                       clang::SourceLocation Loc);

//   /// Add a replacement to a specific Diagnostic.
//   /// Each replacement is a modification to a specific location in the source
//   /// code. 
//   /// \param diag is the pointer to the Diagnostic. 
//   /// \param sm can be obtained via ASTContext.getSourceManager(). 
//   /// \param Loc is the SourceLocation where your modification is made. 
//   /// \param len is the length of original source code you want to replace. 
//   /// \param text is the new code.
//   /// To insert code, set len to 0.
//   /// To delete code, set text to "".
//   /// All replacements are based on the original source code.
//   /// Replacements conflict if they overlap or are order-dependent.
//   void addReplacement(Diag *diag, clang::SourceManager &sm,
//                       clang::SourceLocation Loc, unsigned len,
//                       std::string text);
  
//   void addReplacement(Diag *diag,std::string fileName, unsigned line, unsigned col, unsigned len,
//                       std::string text);

//   void save(string MainSourceFile, string outFile);

//   /// Save all TranslationUnitDiagnostics into a directory.
//   /// \param dir is the directory name (both absolute and relative path are ok).
//   void saveAll(string dir);
//   void saveAllShort(string dir);
//   void saveAllWithSuffix(string dir);

//   ~DiagnosticManager();

// private:
//   /// Store all TranslationUnitDiagnostics.
//   /// std::vector<TranslationUnitDiagnostics> TUDs;
//   llvm::StringMap<TUDiag *> TUDs;
//   void save(TUDiag *tud, string outFile);
//   void split(vector<string> &res, string str, string delimiter);
//   string addSuffix(vector<string>& seg);
// };

// #endif