// #ifndef DIAGNOSTIC_H
// #define DIAGNOSTIC_H
// #include <clang/Basic/SourceManager.h>
// #include <clang/Frontend/ASTUnit.h>
// #include <clang/Tooling/Refactoring.h>
// #include <clang/Tooling/Tooling.h>
// #include <llvm/ADT/StringMap.h>
// #include <llvm/ADT/StringRef.h>
// #include <llvm/Support/YAMLTraits.h>
// #include <string>
// #include <vector>

// namespace safehw {

// class Replacement {
// public:
//   /// Creates an invalid (not applicable) replacement.
//   Replacement(){};

//   /// Creates a replacement of the range [Offset, Offset+Length) in
//   /// FilePath with ReplacementText.
//   ///
//   /// \param FilePath A source file accessible via a SourceManager.
//   /// \param Offset The byte offset of the start of the range in the file.
//   /// \param Length The length of the range in bytes.
//   Replacement(clang::SourceManager &sm, clang::SourceLocation Loc, unsigned len,
//               std::string text) {
//     FilePath = sm.getFilename(Loc);
//     ReplacementText = text;
//     Line = sm.getSpellingLineNumber(Loc);
//     Column = sm.getSpellingColumnNumber(Loc);
//     Length = len;
//   }

//   Replacement(std::string filepath, std::string text, unsigned l, unsigned c,
//               unsigned len)
//       : FilePath(filepath), ReplacementText(text), Line(l), Column(c),
//         Length(len) {}

//   std::string getFilePath() const { return FilePath; }
//   // unsigned getOffset() const { return ReplacementRange.getOffset(); }
//   unsigned getLine() const { return Line; }
//   unsigned getColumn() const { return Column; }
//   unsigned getLength() const { return Length; }
//   std::string getReplacementText() const { return ReplacementText; }

// private:
//   std::string FilePath;
//   std::string ReplacementText;
//   unsigned Line;
//   unsigned Column;
//   unsigned Length;
// };

// struct DiagnosticMessage {
//   DiagnosticMessage(std::string message, clang::SourceManager &sm,
//                     clang::SourceLocation Loc) {
//     Message = message;
//     FilePath = sm.getFilename(Loc);
//     Line = sm.getSpellingLineNumber(Loc);
//     Column = sm.getSpellingColumnNumber(Loc);
//   };
//   DiagnosticMessage() {}

//   std::string Message;
//   std::string FilePath;
//   // unsigned FileOffset;
//   unsigned Line;
//   unsigned Column;

//   std::vector<Replacement> Fixes;
// };

// struct Diagnostic {
//   ;

//   Diagnostic() = default;
//   Diagnostic(std::string name, std::string message, clang::SourceManager &sm,
//              clang::SourceLocation Loc)
//       : DiagnosticName(name), Message(message, sm, Loc) {}

//   Diagnostic(std::string name, DiagnosticMessage message)
//       : DiagnosticName(name), Message(message) {}

//   std::string DiagnosticName;

//   DiagnosticMessage Message;
// };

// struct TranslationUnitDiagnostics {
//   std::string MainSourceFile;
//   std::vector<Diagnostic> Diagnostics;
// };

// } // end namespace safehw

// LLVM_YAML_IS_SEQUENCE_VECTOR(safehw::Replacement)
// LLVM_YAML_IS_SEQUENCE_VECTOR(safehw::Diagnostic)
// LLVM_YAML_IS_SEQUENCE_VECTOR(safehw::DiagnosticMessage)

// template <> struct llvm::yaml::MappingTraits<safehw::Replacement> {
//   /// Helper to (de)serialize a Replacement since we don't have direct
//   /// access to its data members.
//   struct NormalizedReplacement {
//     NormalizedReplacement(const IO &)
//         : FilePath(""), Line(0), Column(0), Length(0), ReplacementText("") {}

//     NormalizedReplacement(const IO &, const safehw::Replacement &R)
//         : FilePath(R.getFilePath()), Line(R.getLine()), Column(R.getColumn()),
//           Length(R.getLength()), ReplacementText(R.getReplacementText()) {
//       size_t lineBreakPos = ReplacementText.find('\n');
//       while (lineBreakPos != std::string::npos) {
//         ReplacementText.replace(lineBreakPos, 1, "\n\n");
//         lineBreakPos = ReplacementText.find('\n', lineBreakPos + 2);
//       }
//     }

//     safehw::Replacement denormalize(const IO &) {
//       return safehw::Replacement(FilePath, ReplacementText, Line, Column,
//                                  Length);
//     }

//     std::string FilePath;
//     std::string ReplacementText;
//     unsigned Line;
//     unsigned Column;
//     unsigned Length;
//   };

//   static void mapping(IO &Io, safehw::Replacement &R) {
//     MappingNormalization<NormalizedReplacement, safehw::Replacement> Keys(Io,
//                                                                           R);
//     Io.mapRequired("FilePath", Keys->FilePath);
//     // Io.mapRequired("Offset", Keys->Offset);
//     Io.mapRequired("Line", Keys->Line);
//     Io.mapRequired("Column", Keys->Column);
//     Io.mapRequired("Length", Keys->Length);
//     Io.mapRequired("ReplacementText", Keys->ReplacementText);
//   }
// };

// template <> struct llvm::yaml::MappingTraits<safehw::DiagnosticMessage> {
//   static void mapping(IO &Io, safehw::DiagnosticMessage &M) {
//     Io.mapRequired("Message", M.Message);
//     Io.mapOptional("FilePath", M.FilePath);
//     // Io.mapOptional("FileOffset", M.FileOffset);
//     Io.mapOptional("Line", M.Line);
//     Io.mapOptional("Column", M.Column);
//     std::vector<safehw::Replacement> Fixes;
//     for (auto &Replacement : M.Fixes) {
//       Fixes.push_back(Replacement);
//     }
//     Io.mapRequired("Replacements", Fixes);
//   }
// };

// template <> struct llvm::yaml::MappingTraits<safehw::Diagnostic> {
//   /// Helper to (de)serialize a Diagnostic since we don't have direct
//   /// access to its data members.
//   class NormalizedDiagnostic {
//   public:
//     NormalizedDiagnostic(const IO &) {}

//     NormalizedDiagnostic(const IO &, const safehw::Diagnostic &D)
//         : DiagnosticName(D.DiagnosticName), Message(D.Message) {}

//     safehw::Diagnostic denormalize(const IO &) {
//       return safehw::Diagnostic(DiagnosticName, Message);
//     }

//     std::string DiagnosticName;
//     safehw::DiagnosticMessage Message;
//   };

//   static void mapping(IO &Io, safehw::Diagnostic &D) {
//     MappingNormalization<NormalizedDiagnostic, safehw::Diagnostic> Keys(Io, D);
//     Io.mapRequired("DiagnosticName", Keys->DiagnosticName);
//     Io.mapRequired("DiagnosticMessage", Keys->Message);

//     // FIXME: Export properly all the different fields.
//   }
// };

// /// Specialized MappingTraits to describe how a
// /// TranslationUnitDiagnostics is (de)serialized.
// template <>
// struct llvm::yaml::MappingTraits<safehw::TranslationUnitDiagnostics> {
//   static void mapping(IO &Io, safehw::TranslationUnitDiagnostics &Doc) {
//     Io.mapRequired("MainSourceFile", Doc.MainSourceFile);
//     Io.mapRequired("Diagnostics", Doc.Diagnostics);
//   }
// };

// #endif // DIAGNOSTIC_H