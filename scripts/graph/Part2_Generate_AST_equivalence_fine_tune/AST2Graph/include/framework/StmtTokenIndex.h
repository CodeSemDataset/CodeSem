#ifndef STMT_TOKEN_INDEX_H
#define STMT_TOKEN_INDEX_H

class StmtTokenIndex {
public:
  // "Reserved" is not used.
  static const int Reserved = 0;
  static const int AddrLabelExpr = 1;
  static const int BinaryConditionalOperator = 2;
  static const int BinaryOperator = 3;
  static const int BlockExpr = 4;
  static const int BreakStmt = 5;
  static const int CallExpr = 6;
  static const int CXXOperatorCallExpr = 7;
  static const int CXXMemberCallExpr = 8;
  static const int UserDefinedLiteral = 9;
  static const int CaseStmt = 10;
  static const int ChooseExpr = 11;
  static const int CompoundStmt = 12;
  static const int ConditionalOperator = 13;
  static const int ContinueStmt = 14;
  static const int CXXCatchStmt = 15;
  static const int ExprWithCleanups = 16;
  static const int CXXDefaultArgExpr = 17;
  static const int CXXDefaultInitExpr = 18;
  static const int CXXBindTemporaryExpr = 19;
  static const int CXXConstructExpr = 20;
  static const int CXXNewExpr = 21;
  static const int CXXDeleteExpr = 22;
  static const int CXXFunctionalCastExpr = 23;
  static const int CXXTemporaryObjectExpr = 24;
  static const int CXXThrowExpr = 25;
  static const int CXXTryStmt = 26;
  static const int CXXForRangeStmt = 27;
  static const int DeclStmt = 28;
  static const int DefaultStmt = 29;
  static const int DoStmt = 30;
  static const int ForStmt = 31;
  static const int GotoStmt = 32;
  static const int GCCAsmStmt = 33;
  static const int IfStmt = 34;
  static const int ImplicitCastExpr = 35;
  static const int ConstantExpr = 36;
  static const int IndirectGotoStmt = 37;
  static const int LabelStmt = 38;
  static const int LambdaExpr = 39;
  static const int MaterializeTemporaryExpr = 40;
  static const int MemberExpr = 41;
  static const int NullStmt = 42;
  static const int ObjCAtCatchStmt = 43;
  static const int ObjCAutoreleasePoolStmt = 44;
  static const int ObjCAtSynchronizedStmt = 45;
  static const int ObjCAtThrowStmt = 46;
  static const int ObjCAtTryStmt = 47;
  static const int ObjCForCollectionStmt = 48;
  static const int ObjCMessageExpr = 49;
  static const int OpaqueValueExpr = 50;
  static const int PseudoObjectExpr = 51;
  static const int ReturnStmt = 52;
  static const int CoreturnStmt = 53;
  static const int SEHExceptStmt = 54;
  static const int SEHFinallyStmt = 55;
  static const int SEHLeaveStmt = 56;
  static const int SEHTryStmt = 57;
  static const int UnaryExprOrTypeTraitExpr = 58;
  static const int StmtExpr = 59;
  static const int SwitchStmt = 60;
  static const int UnaryOperator = 61;
  static const int WhileStmt = 62;
  static const int IntegerLiteral = 63;
  static const int FloatingLiteral = 64;
  static const int StringLiteral = 65;
  static const int DeclRefExpr = 66;
  static const int ArraySubscriptExpr = 67;
  static const int InitListExpr = 68;
  static const int CXXBoolLiteralExpr = 69;
  static const int CharacterLiteral = 70;
  static const int CStyleCastExpr = 71;
  static const int ParenExpr = 72;

  static const int ParenListExpr = 73;
  static const int CXXStaticCastExpr = 74;
  static const int PredefinedExpr = 75;
  static const int CXXNullPtrLiteralExpr = 76;
  static const int CXXReinterpretCastExpr = 77;
  static const int CXXConstCastExpr = 78;
  static const int GNUNullExpr = 79;
  static const int CompoundAssignOperator = 80;
  static const int UnresolvedLookupExpr = 81;
  static const int CXXDependentScopeMemberExpr = 82;

  static const int ImplicitValueInitExpr = 83;
  static const int VAArgExpr = 84;
  static const int SizeOfPackExpr = 85;
  static const int PackExpansionExpr = 86;
  static const int CXXDynamicCastExpr = 87;
  static const int CXXScalarValueInitExpr = 88;

  static const int CXXUnresolvedConstructExpr = 89;
  static const int DependentScopeDeclRefExpr = 90;
  static const int OffsetOfExpr = 91;
  static const int AttributedStmt = 92;
  static const int CompoundLiteralExpr = 93;
  static const int CXXTypeidExpr = 94;
  static const int UnresolvedMemberExpr = 95;

  static const int TypeTraitExpr = 96;

  static const int ArrayRead = 111;                                 // i = a[0];
  static const int ArrayWrite = 112;                                // a[0] = i;
  static const int ArrayReference = 113;                            // int *p; p = a; a is array
  static const int Assert = 114;                                    // assert(1);
  static const int Assignment = 115;                                // i = 0;
  static const int Constructor = 116;
  static const int Enum = 117;
  static const int ThisAccess = 118;
  static const int LocalVariable = 119;
  static const int LocalVariableReference = 120;
  static const int CatchVariable = 121;
  static const int CatchVariableReference = 122;
  static const int FunctionDecl = 123;
  static const int Parameter = 124;
  static const int ParameterReference = 125;
  static const int Synchronized = 126;
  static const int VariableAccess = 127;
  static const int VariableRead = 128;
  static const int VariableWrite = 129;
  static const int FieldAccess = 130;
  static const int FieldRead = 131;
  static const int FieldWrite = 132;
  static const int PrimitiveType = 133;
  static const int NonPrimitiveType = 134;
  static const int Then = 135;
  static const int Else = 136;
  static const int Finally = 137;
  static const int True = 138;
  static const int False = 139;
  static const int Decl = 140;
  static const int Other = 149;
};

# endif
