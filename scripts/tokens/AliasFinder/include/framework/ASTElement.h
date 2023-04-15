#ifndef AST_ELEMENT_H
#define AST_ELEMENT_H

#include <string>
#include <vector>

#include <clang/Frontend/ASTUnit.h>

#include "Common.h"
#include "utils/FieldVariableInfo.h"

using namespace clang;

class ASTFunction;
class ASTVariable;
class ASTGlobalVariable;
class ASTFieldVariable;
class ASTArrayVariable;

class ASTFile {
public:
  ASTFile(unsigned id, std::string AST) : id(id), AST(AST){};

  const std::string &getAST() const { return AST; }

  void addFunction(ASTFunction *F) { functions.push_back(F); }
  void addGlobalVar(ASTGlobalVariable *GV) { globalvars.push_back(GV); }

  const std::vector<ASTFunction *> &getFunctions() const { return functions; }
  const std::vector<ASTGlobalVariable *> &getGlobalVars() const {
    return globalvars;
  }

private:
  unsigned id;
  std::string AST;

  std::vector<ASTFunction *> functions;
  std::vector<ASTGlobalVariable *> globalvars;
};

class ASTElement {
public: 
  ASTElement(unsigned id, std::string name, ASTFile *AF)
      : id(id), name(name), AF(AF) {}

  unsigned getID() const { return id; }

  const std::string &getName() const { return name; }

  ASTFile *getASTFile() const { return AF; }

  const std::string &getAST() const { return AF->getAST(); }

protected:
  unsigned id;
  std::string name;

  ASTFile *AF;
};

class ASTFunction : public ASTElement {
public:
  //表示该ASTFunction是什么类型
  enum Kind {
    //源代码中定义的一般函数
    NormalFunction,
    //源代码中没有定义的库函数，比如标准库中的函数
    LibFunction,
    //匿名函数，即lambda表达式
    AnonymousFunction,
  };
  ASTFunction(unsigned id, FunctionDecl *FD, ASTFile *AF, bool use = true)
      : ASTElement(id, FD->getNameAsString(), AF) {

    this->use = use;
    this->func_decl = FD;
    funcName = FD->getQualifiedNameAsString();
    fullName = common::getFullName(FD);
    param_size = FD->param_size();
    is_class_member = FD->isCXXClassMember();

    if(FD->getKind() == clang::Decl::Kind::CXXConstructor) 
      is_constructor = true;
    else 
      is_constructor = false;

    if (FD->hasBody())
      functionType = ASTFunction::NormalFunction;
    else
      functionType = ASTFunction::LibFunction;
  }

  ASTFunction(unsigned id, FunctionDecl *FD, ASTFile *AF,
              std::string funFullName, bool use = true,
              Kind kind = ASTFunction::AnonymousFunction)
      : ASTElement(id, FD->getQualifiedNameAsString(), AF) {
    this->use = use;
    this->func_decl = FD;

    fullName = funFullName;
    funcName = FD->getQualifiedNameAsString();

    param_size = FD->param_size();
    functionType = kind;
    is_class_member = FD->isCXXClassMember();
    is_constructor = (FD->getKind() == clang::Decl::Kind::CXXConstructor);
  }

  void addVariable(ASTVariable *V) { variables.push_back(V); }
  void addField(ASTFieldVariable *V) { fields.push_back(V); }
  void addThisField(ASTFieldVariable *V) { class_fields.push_back(V); }
  void addArrayField(ASTArrayVariable *V) { array_fields.push_back(V); }
  void addThisArrayField(ASTArrayVariable *V) { class_array_fields.push_back(V); }
  void addArraySubscriptExprs(std::vector<ArraySubscriptExpr *> ases) { ASEs = ases; }
  
  const std::vector<ASTVariable *> &getVariables() const { return variables; }
  const std::vector<ASTFieldVariable *> &getFields() const { return fields; }
  const std::vector<ASTFieldVariable *> &getThisFields() const { return class_fields; }
  const std::vector<ASTArrayVariable *> &getArrayFields() const { return array_fields; }
  const std::vector<ASTArrayVariable *> &getThisArrayFields() const { return class_array_fields; }

  FunctionDecl *getFunctionDecl() { return func_decl; }
  unsigned getParamSize() const { return param_size; }
  const std::string &getFullName() const { return fullName; }
  const std::string &getFunctionName() const { return funcName; }
  const std::vector<ArraySubscriptExpr *> &getASEs() const { return ASEs; }
  bool isUse() const { return use; }
  void setUse(bool used) { use = used; }
  Kind getFunctionType() const { return functionType; }
  bool isMemberFunc() const { return is_class_member; }
  bool isConstructor() const { return is_constructor; }
  void clearAllVec() {
    std::vector<ASTVariable *>().swap(variables);
    std::vector<ASTFieldVariable *>().swap(fields);
    std::vector<ASTFieldVariable *>().swap(class_fields);
    std::vector<ASTArrayVariable *>().swap(class_array_fields);
    std::vector<ASTArrayVariable *>().swap(array_fields);
  }

private:
  std::string funcName;
  std::string fullName;
  unsigned param_size;
  FunctionDecl *func_decl;

  Kind functionType;
  bool use;
  bool is_class_member;
  bool is_constructor;

  std::vector<ASTVariable *> variables;
  std::vector<ASTFieldVariable *> fields;
  std::vector<ASTArrayVariable *> array_fields;
  std::vector<ASTFieldVariable *> class_fields;
  std::vector<ASTArrayVariable *> class_array_fields;
  
  std::vector<ArraySubscriptExpr *> ASEs;
};

class ASTGlobalVariable : public ASTElement {
public:
  /**
   * @param: id  SAFE-HW 框架自定义的 id 规则，是 vector 长度
   *             不是 Clang-AST Decl->getID()
   */
  ASTGlobalVariable(unsigned id, VarDecl *VD, ASTFile *AF)
      : ASTElement(id, VD->getNameAsString(), AF) {
    this->VD = VD;
    isExtern = VD->hasExternalStorage();
    hasExplicitInit = VD->hasInit();
    clangid = VD->getID();
    auto &sm = VD->getASTContext().getSourceManager();
    loc = VD->getLocation().printToString(sm);
    record_children.clear();
    array_children.clear();
  }

public:
  VarDecl *getVarDecl() { return VD; }
  VarDecl *VD;
  bool isExtern;
  bool hasExplicitInit; // in many compilers, globar will has default value
  int64_t clangid;      // Clang-AST id
  std::string loc;
  std::set<ASTFieldVariable *> record_children;
  std::unordered_map<unsigned, ASTArrayVariable *> array_children;
};

class ASTVariable : public ASTElement {
public:
  ASTVariable(unsigned id, VarDecl *VD, ASTFunction *F)
      : ASTElement(id, VD->getNameAsString(), F->getASTFile()), F(F), VD(VD) {

    if (VD->getType()->isPointerType() || VD->getType()->isReferenceType())
      pointer_reference_type = true;
    else
      pointer_reference_type = false;

    if(VD->getType()->isArrayType())
      is_array = true;
    else
      is_array = false;

    is_global = false;
    is_param = false;
  }

  ASTVariable(VarDecl *VD, ASTFile *AF) 
      : ASTElement(0, VD->getNameAsString(), AF), F(nullptr), VD(VD){
    pointer_reference_type = false;
    is_array = false;
    is_global = true;
    is_param = false;
  }
  
  ASTFunction *getFunction() const { return F; }
  bool isPointerOrReferenceType() const { return pointer_reference_type; }


  //Field APIs
  bool hasField() const { return fields.size() != 0 && !isArray(); }
  void addField(ASTFieldVariable *field) { fields.emplace(field); }
  VarDecl *getDecl() { return VD; }
  std::set<ASTFieldVariable *> &getFields() { 
    return fields; 
  }
  std::unordered_map<unsigned, ASTArrayVariable *> getArrayChildren() {
    return array_children;
  }
  bool hasArrayChild(unsigned index) {
    return array_children.find(index) != array_children.end();
  }

  //Array APIs
  void setArray()  { is_array = true; }
  void setGlobal() { is_global = true; }
  void setParamID(unsigned id) { param_id = id; is_param = true; }
  unsigned getParamID() { assert(is_param); return param_id; }
  bool isParam() { return is_param; }
  
  bool isArray() const { return is_array; }
  bool isGlobal() const { return is_global; }
  void addArrayChild(unsigned index, ASTArrayVariable *child) {
    array_children.emplace(index, child);
  }

private:
  bool pointer_reference_type;
  bool is_array;
  bool is_global;
  std::set<ASTFieldVariable *> fields;
  std::unordered_map<unsigned, ASTArrayVariable *> array_children;
  VarDecl *VD;

  unsigned param_id;
  bool is_param;

  ASTFunction *F;
};

class ASTFieldVariable : public ASTElement {
public:
  ASTFieldVariable(unsigned id, FieldDecl *FD, ASTFunction *F, VarDecl *VD = nullptr) 
    : ASTElement(id, FD->getNameAsString(), F->getASTFile()), 
      F(F), FD(FD), VD(VD){
        if(FD->getType()->isPointerType() || FD->getType()->isReferenceType()) 
          pointer_reference_type = true;
        else 
          pointer_reference_type = false;

        this->is_array = FD->getType()->isArrayType();
        this->father = nullptr;
        this->is_global = false;
        this->is_return_value = false;
  } 
  ASTFieldVariable(unsigned id, FieldDecl *FD, ASTFile *file, VarDecl *VD)
      : ASTElement(id, FD->getNameAsString(), file), F(nullptr), FD(FD), VD(VD) {
    pointer_reference_type = false;
    is_array = false;
    father = nullptr;
    is_global = true;
    is_return_value = false;
  }
  //只用于初始化函数的返回值（没有FD，只保留基本的父子关系结构）
  ASTFieldVariable(FieldDecl *FD) : ASTElement(0, " ", nullptr) {
    this->FD = FD;
    F = nullptr;
    pointer_reference_type = false;
    if(FD) {
      if(FD->getType()->isPointerType() || FD->getType()->isReferenceType()) 
          pointer_reference_type = true;
    }
    this->is_array = false;
    this->father = nullptr;
    this->is_global = false;
    this->is_return_value = true;
  }
  //Common API
  ASTFunction *getFunction() const { return F; }
  bool isPointerOrReferenceType() const { return pointer_reference_type; }
  bool isClassMember() { return VD ? false : true; }
  bool isArray() { return is_array; }
  bool isGlobal() { return is_global; }
  bool isReturnValue() { return is_return_value; }
  VarDecl *getVarDecl(){ return VD; }
  FieldDecl *getFieldDecl(){ return FD; }

  //Record & Array API
  bool hasFather() { return father != nullptr; }
  bool hasRecordChild() { return recordChildren.size() != 0; }
  bool hasArrayChild() {
    assert(is_array);
    return (arrayChildren.size() != 0);
  }

  ASTFieldVariable *getFather() { return father; }
  std::set<ASTFieldVariable *> &getRecordChildren() { return recordChildren; }
  std::unordered_map<unsigned, ASTArrayVariable *> &getArrayChildren() { return arrayChildren; }
  ASTArrayVariable *getMatchedArrayVariable(unsigned index) {
    auto iter = arrayChildren.find(index);
    return (iter == arrayChildren.end()) ? nullptr : iter->second;
  }
  
  void setFather(ASTFieldVariable *father) { this->father = father; }
  void setArray() { is_array = true; }
  void setAsReturn() { is_return_value = true; }
  void unsetReturn() { is_return_value = false; }
  void setGlobal() { is_global = true; }
  void addRecordChild(ASTFieldVariable *FV) { recordChildren.emplace(FV); }
  void addArrayChild(unsigned index, ASTArrayVariable *AAV) { arrayChildren.emplace(index, AAV); }

  std::vector<FieldDecl *> getAllFathers() {
    std::vector<FieldDecl *> res;
    ASTFieldVariable *current = this;
    while(current->hasFather()) {
      current = current->getFather();
      FieldDecl *current_fd = current->getFieldDecl();
      res.insert(res.begin(), current_fd);
    }
    return res;
  }

private:
  ASTFunction *F;
  FieldDecl *FD;
  VarDecl *VD;
  bool pointer_reference_type;
  bool is_array;
  bool is_global;  
  bool is_return_value;
  
  std::set<ASTFieldVariable *> recordChildren;
  std::unordered_map<unsigned, ASTArrayVariable *> arrayChildren;
  ASTFieldVariable *father;
};

// Element代表Array[i]类型变量，该类型变量不存在FieldDecl
// Member代表Array[i].field类型变量，数组下的嵌套成员变量
enum ArrayVariableKind {Element, Member};

class ASTArrayVariable : public ASTElement {
public:
  ASTArrayVariable(unsigned id, FieldDecl *FD, ASTFunction *F, VarDecl *VD = nullptr) 
    : ASTElement(id, FD ? FD->getNameAsString() : "[]", F->getASTFile()), 
      F(F), FD(FD), VD(VD){
        if(FD) {
          if(FD->getType()->isPointerType() || FD->getType()->isReferenceType()) 
            pointer_reference_type = true;
          else 
            pointer_reference_type = false;
        }
        else {
          pointer_reference_type = false;
        }
            
        if(!FD) {
          this->array_kind = ArrayVariableKind::Element;
          this->is_array = false;
        }
        else {
          this->array_kind = ArrayVariableKind::Member;
          this->is_array = FD->getType()->isArrayType();
        }

        this->father_FV = nullptr;
        this->father_AAV = nullptr;
        this->is_return_value = false;
  }
  ASTArrayVariable(unsigned id, FieldDecl *FD, ASTFile *AF, VarDecl *VD) 
      : ASTElement(id, FD ? FD->getNameAsString() : "[]", AF), F(nullptr), FD(FD), VD(VD) {
      pointer_reference_type = false;
      if(!FD) {
        this->array_kind = ArrayVariableKind::Element;
        this->is_array = false;
      }
      else {
        this->array_kind = ArrayVariableKind::Member;
        this->is_array = FD->getType()->isArrayType();
      }
      this->father_FV = nullptr;
      this->father_AAV = nullptr;
      this->is_return_value = false;
      
  }
  ASTArrayVariable(FieldDecl *FD) : ASTElement(0, " ", nullptr) {
    F = nullptr;
    this->FD = FD;
    VD = nullptr;
    pointer_reference_type = false;
    if(FD) {
      if(FD->getType()->isPointerType() || FD->getType()->isReferenceType()) 
        pointer_reference_type = true;
    }
    is_array = false;
    is_return_value = true;
  }

  ASTFunction *getFunction() const { return F; }
  VarDecl *getVarDecl(){ return VD; }
  FieldDecl *getFieldDecl(){ return FD; }
  ArrayVariableKind getArrayVariableKind() { return array_kind; }

  bool isPointerOrReferenceType() const { return pointer_reference_type; }
  bool isArray() { return is_array; }
  bool isClassMember() { return VD ? false : true; }
  bool isReturnValue() { return is_return_value; }
  bool hasElementChild() { return elementChildren.size() != 0; }
  bool hasMemberChild() { return memberChildren.size() != 0; }
  bool hasFather() { return father_FV || father_AAV; }
  bool hasFather_FV() { return father_FV; }
  bool hasFather_AAV() { return father_AAV; }
  std::vector<unsigned> getIndex() { return index; }

  std::unordered_map<unsigned, ASTArrayVariable *> &getElementChildren() { return elementChildren; }
  std::set<ASTArrayVariable *> &getMemberChildren() { return memberChildren; }
  ASTFieldVariable *getFather_FV() { assert(father_FV); return father_FV; }
  ASTArrayVariable *getFather_AAV() { assert(father_AAV); return father_AAV; }
  ASTArrayVariable *getMatchedElementChild(unsigned index) {
    assert(array_kind == ArrayVariableKind::Element);
    auto iter = elementChildren.find(index);
    if(iter == elementChildren.end()) return nullptr;
    return iter->second;
  }
  std::vector<FieldDecl *> getAllFathers() {
    std::vector<FieldDecl *> res;
    if(!hasFather()) return res;

    ASTFieldVariable *root = nullptr;
    ASTArrayVariable *current = this;
    while(current->hasFather()) {
      if(current->hasFather_FV()) {
        root = current->getFather_FV();
        FieldDecl *current_fd = root->getFieldDecl();
        if(current_fd) {
          res.insert(res.begin(), current_fd);
        }
        break;
      }
      if(current->hasFather_AAV()) {
        current = current->getFather_AAV();
        FieldDecl *current_fd = current->getFieldDecl();
        if(current_fd) {
          res.insert(res.begin(), current_fd);
        }
      }
    }

    if(root) {
      while(root->hasFather()) {
        root = root->getFather();
        FieldDecl *current_fd = root->getFieldDecl();
        if(current_fd) {
          res.insert(res.begin(), current_fd);
        }
      }
    }

    return res;
  }
  std::vector<unsigned> getAllIndex() { return index; }
  unsigned getElementIndex() { assert(array_kind == ArrayVariableKind::Element); return element_index; }
  const std::string getAVName() {
    if(array_kind == ArrayVariableKind::Element) {
      return "[" + std::to_string(element_index) + "]";
    }
    else {
      return getName();
    }
  }

  void setFVFather(ASTFieldVariable *father) { father_FV = father; }
  void setAAVFather(ASTArrayVariable *father) { father_AAV = father; }
  void setIndex(std::vector<unsigned> new_index) { index = new_index; }
  void setAsReturnValue() { is_return_value = true; }
  void addElementChild(unsigned index, ASTArrayVariable *child) { elementChildren.emplace(index, child); }
  void addMemberChild(ASTArrayVariable *child) { memberChildren.emplace(child); }
  void addIndex(unsigned new_index) { index.push_back(new_index); }
  void setElementIndex(unsigned index) { element_index = index; }

private:
  ASTFunction *F;
  FieldDecl *FD;
  VarDecl *VD;
  bool pointer_reference_type;
  bool is_array; 
  bool is_return_value;
  ArrayVariableKind array_kind;

  //father可能有两种: ASTFieldVariable | ASTArrayVariable
  ASTFieldVariable *father_FV;
  ASTArrayVariable *father_AAV;

  std::unordered_map<unsigned, ASTArrayVariable *> elementChildren;
  std::set<ASTArrayVariable *> memberChildren;
  std::vector<unsigned> index;
  unsigned element_index; //只在element类型有意义
};

#endif
