#include "taint-check/TaintManager.h"

void TaintBimap::insertVariable(ASTVariable *V, VarDecl *VD) {
    variableMap[VD] = V;
}

void TaintBimap::insertFieldVariable(ASTFieldVariable *V) {
    fv_info info(V->getVarDecl(), V->getFieldDecl(), V->getAllFathers());
    fieldVariableSet.emplace(info, V);
}

void TaintBimap::insertArrayVariable(ASTArrayVariable *V) {
    av_info info(V->getVarDecl(), V->getFieldDecl(), V->getAllFathers(), V->getIndex());
    arrayVariableSet.emplace(info, V);  
}

void TaintBimap::insertThisFieldVariable(ASTFieldVariable *V) {
  fv_info info(nullptr, V->getFieldDecl(), V->getAllFathers());
  thisFieldVariableSet.emplace(info, V);
}

void TaintBimap::insertThisArrayVariable(ASTArrayVariable *V) {
  av_info info(nullptr, V->getFieldDecl(), V->getAllFathers(), V->getIndex());
  thisArrayVariableSet.emplace(info, V);
}

ASTVariable *TaintBimap::getASTVariable(VarDecl *VD) {
    auto it = variableMap.find(VD);
    return it == variableMap.end() ? nullptr : it->second;
}

ASTFieldVariable *TaintBimap::getASTFieldVariable(fv_info info) {
    auto it = fieldVariableSet.find(info);
    return it == fieldVariableSet.end() ? nullptr : it->second;
}

ASTArrayVariable *TaintBimap::getASTArrayVariable(av_info info) {
    auto it = arrayVariableSet.find(info);
    return it == arrayVariableSet.end() ? nullptr : it->second;
}

ASTFieldVariable *TaintBimap::getASTThisFieldVairable(fv_info info) {
  auto it = thisFieldVariableSet.find(info);
  return it == thisFieldVariableSet.end() ? nullptr : it->second;
}

ASTArrayVariable *TaintBimap::getASTThisArrayVariable(av_info info) {
  auto it = thisArrayVariableSet.find(info);
  return it == thisArrayVariableSet.end() ? nullptr : it->second;
}

TaintManager::TaintManager(FunctionDecl *FD, ASTFunction *F, ASTManager *manager) {
  //需要能够在这里初始化所有结构体Fields和ArrayFields
    bimap = new TaintBimap();
    this->F = F;
    this->astmanager = manager;
    std::vector<VarDecl *> variables = common::getVariables(FD);
    for (VarDecl *VD : variables) {
        ASTVariable *V = addASTVariable(VD);
        bimap->insertVariable(V, VD);
    }

    std::vector<MemberExpr *> fieldVariables = common::getFieldVariables(FD);
    for(MemberExpr *me : fieldVariables) {
      //添加整条路径上所有的Fields
      addMatchedFieldVariables(me);
    }

    std::vector<ArraySubscriptExpr *> arrayVariables = common::getArrayElements(FD);
    for(ArraySubscriptExpr *ase : arrayVariables) {
      addMatchedArrayVariable(ase);
    }
}

TaintManager::~TaintManager() {
  delete bimap;
}

ASTVariable *TaintManager::addASTVariable(VarDecl *VD){
    ASTVariable *exist = bimap->getASTVariable(VD);
    if(exist) return exist;

    unsigned id = F->getVariables().size();
    ASTVariable *V = new ASTVariable(id, VD, F);
    F->addVariable(V);
    return V;
}

ASTFieldVariable *TaintManager::addASTFieldVariable(VarDecl *VD, FieldDecl *FD, ASTFieldVariable *father_fv){
    std::vector<FieldDecl *> exist_fathers; 
    if(father_fv) {
      exist_fathers = father_fv->getAllFathers();
      if(father_fv->getFieldDecl()) {
          exist_fathers.push_back(father_fv->getFieldDecl());
      }
    }
    if(VD) {
      ASTFieldVariable *exist = bimap->getASTFieldVariable(fv_info(VD, FD, exist_fathers));
      if(exist) return exist;
    }
    else {
      ASTFieldVariable *exist = bimap->getASTThisFieldVairable(fv_info(VD, FD, exist_fathers));
      if(exist) return exist;
    }

    unsigned id = F->getFields().size();
    ASTFieldVariable *V = new ASTFieldVariable(id, FD, F, VD);
    //设定父子关系，如果是ASTVariable子Field需手动添加
    if(father_fv) {
      V->setFather(father_fv);
      father_fv->addRecordChild(V);
    }
    if(!VD) {
      F->addThisField(V);
      bimap->insertThisFieldVariable(V);
    }
    else {
      F->addField(V);
      bimap->insertFieldVariable(V);
    }

    return V;
}

ASTArrayVariable *TaintManager::addASTArrayVariable(VarDecl *VD, FieldDecl *FD, unsigned index, ASTFieldVariable *father_fv, 
                                                    ASTArrayVariable *father_av) {
    std::vector<FieldDecl *> exist_fathers;
    std::vector<unsigned> exist_index;
    if(father_fv) {
      exist_fathers = father_fv->getAllFathers();
      if(father_fv->getFieldDecl()) {
        exist_fathers.push_back(father_fv->getFieldDecl());
      }
      if(index != UINT_MAX) {
        exist_index.push_back(index);
      }
    }
    else if(father_av){
      exist_fathers = father_av->getAllFathers();
      if(father_av->getFieldDecl()) {
        exist_fathers.push_back(father_av->getFieldDecl());
      }
      exist_index = father_av->getAllIndex();
      if(index != UINT_MAX) {
        exist_index.push_back(index);
      }
    }
    else {
      if(index != UINT_MAX) {
        exist_index.push_back(index);
      }
    }

    if(VD) {
      ASTArrayVariable *exist_av = bimap->getASTArrayVariable(av_info(VD, FD, exist_fathers, exist_index));
      if(exist_av) return exist_av;
    }
    else {
      ASTArrayVariable *exist_av = bimap->getASTThisArrayVariable(av_info(VD, FD, exist_fathers, exist_index));
      if(exist_av) return exist_av;
    }

    unsigned id = F->getArrayFields().size();
    ASTArrayVariable *V = new ASTArrayVariable(id, FD, F, VD);
    //父节点为ASTFieldVariable
    if(father_fv) {
      //只可能为Element类型
      assert(index != UINT_MAX);
      //设定父子关系
      V->setFVFather(father_fv);
      father_fv->addArrayChild(index, V);
      //设定index
      V->addIndex(index);
      V->setElementIndex(index);
      father_fv->addArrayChild(index, V);
    }
    //父节点为ASTArrayVariable
    else if(father_av){
      if(FD) {
        //Member类型
        //设定父子关系
        father_av->addMemberChild(V);
        V->setAAVFather(father_av);
        //设定index
        std::vector<unsigned> father_index = father_av->getIndex();
        V->setIndex(father_index);
      }
      else {
        //Element类型
        assert(index != UINT_MAX);
        //设定父子关系
        father_av->addElementChild(index, V);
        V->setAAVFather(father_av);
        //设定index
        std::vector<unsigned> father_index = father_av->getIndex();
        V->setIndex(father_index);
        V->addIndex(index);
        V->setElementIndex(index);
      }
    }
    //父节点为ASTVariable
    else {
      assert(index != UINT_MAX);
      //无需设定父子关系
      //设定index
      V->addIndex(index);
      V->setElementIndex(index);
    }

    if(VD) {
      F->addArrayField(V);
      bimap->insertArrayVariable(V);
    }
    else {
      F->addThisArrayField(V);
      bimap->insertThisArrayVariable(V);
    }

    return V;
}

ASTVariable *TaintManager::getASTVariable(VarDecl *VD) {
    return bimap->getASTVariable(VD);
}

ASTFieldVariable *TaintManager::getASTFieldVariable(fv_info info) {
    return bimap->getASTFieldVariable(info);
}

ASTArrayVariable *TaintManager::getASTArrayVariable(av_info info) {
  return bimap->getASTArrayVariable(info);
}

ASTFieldVariable *TaintManager::getASTThisFieldVariable(fv_info info) {
  return bimap->getASTThisFieldVairable(info);
}

ASTArrayVariable *TaintManager::getASTThisArrayVariable(av_info info) {
  return bimap->getASTThisArrayVariable(info);
}

bool TaintManager::isPointerOrReference(ASTFieldVariable *fv) {
  if(fv->isPointerOrReferenceType()) return true;
  ASTFieldVariable *current = fv;
  while(current->hasFather()) {
    current = current->getFather();
    if(current->isPointerOrReferenceType()) return true;
  }
  VarDecl *VD = fv->getVarDecl();
  if(VD) {
    ASTVariable *v = getASTVariable(VD);
    if(v && v->isPointerOrReferenceType()) return true;
  }
  return false;
}

void TaintManager::addMatchedFieldVariables(MemberExpr *ME) {
  std::vector<FieldDecl *> fatherFields;
  std::vector<ArraySubscriptExpr *> arrayFields;
  VarDecl *VD = nullptr;

  if(!getFathersChain(ME, VD, fatherFields, arrayFields, nullptr)) {
    return;
  }

  if(VD && astmanager->bimap.getGlobalVariable(VD) != nullptr) return;

  FieldDecl *leaf_field = dyn_cast<FieldDecl>(ME->getMemberDecl());
  if(!leaf_field) return;

  //自顶向下处理整条路径，按顺序按层次读取
  //查找ASTVariable下的第一层Field
  ASTVariable *root = nullptr;
  if(VD) {
    root = getASTVariable(VD);
  }
  ASTFieldVariable *current_father_fv = nullptr;
  ASTArrayVariable *current_father_av = nullptr;
  bool pos_at_root = true;

  auto array_iter = arrayFields.begin();
  for(auto field_iter = fatherFields.begin(); field_iter != fatherFields.end(); ++field_iter) {
    //当前需要处理的为数组类型即array[i]类型
    if(*field_iter == nullptr) {
      if(array_iter == arrayFields.end()) {
        assert(0);
      }
      ArraySubscriptExpr *current_ase = *array_iter;
      clang::IntegerLiteral *index_value = dyn_cast<IntegerLiteral>(current_ase->getIdx());
      assert(index_value);
      unsigned index = index_value->getValue().getLimitedValue();
      ++array_iter;
      //添加ASTArrayVariable
      //父节点为ASTVariable或者本身为ThisVariables
      if(pos_at_root) {
        ASTArrayVariable *AAV = addASTArrayVariable(VD, nullptr, index, nullptr, nullptr);
        if(root) {
          root->addArrayChild(index, AAV);
        }
        pos_at_root = false;
        current_father_fv = nullptr;
        current_father_av = AAV;
      }
      //父节点为ASTFieldVariable或ASTArrayVariable
      else {
        ASTArrayVariable *AAV = addASTArrayVariable(VD, nullptr, index, current_father_fv, current_father_av);
        current_father_fv = nullptr;
        current_father_av = AAV;
      }
    }
    //FieldDecl
    else {
      FieldDecl *current_fd = *field_iter;
      //根据当前father类型分为Record和Array两种
      if(pos_at_root) {
        ASTFieldVariable *FV = addASTFieldVariable(VD, current_fd, nullptr);
        if(root) {
          root->addField(FV);
        }
        pos_at_root = false;
        current_father_fv = FV;
        current_father_av = nullptr;
      }
      else {
        if(current_father_fv) {
          ASTFieldVariable *FV = addASTFieldVariable(VD, current_fd, current_father_fv);
          current_father_fv = FV;
          current_father_av = nullptr;
        }
        else {
          ASTArrayVariable *AV = addASTArrayVariable(VD, current_fd, UINT_MAX, nullptr, current_father_av);
          current_father_av = AV;
          current_father_fv = nullptr;
        }
      }
    }
  }
  //添加底层Field即ME对应Field
  if(pos_at_root) {
    ASTFieldVariable *FV = addASTFieldVariable(VD, leaf_field, nullptr);
    if(root) {
      root->addField(FV);
    }
  }
  else {
    if(current_father_fv) {
      ASTFieldVariable *FV = addASTFieldVariable(VD, leaf_field, current_father_fv);
    }
    else {
      ASTArrayVariable *AAV = addASTArrayVariable(VD, leaf_field, UINT_MAX, nullptr, current_father_av);
    }
  }
}

void TaintManager::addMatchedArrayVariable(ArraySubscriptExpr *expr) {
  std::vector<FieldDecl *> fatherFields;
  std::vector<ArraySubscriptExpr *> arrayFields;
  VarDecl *VD = nullptr;

  if(!getFathersChain(nullptr, VD, fatherFields, arrayFields, expr)) {
    return;
  }

  if(VD && astmanager->bimap.getGlobalVariable(VD) != nullptr) return;

  clang::IntegerLiteral *index_value = dyn_cast<IntegerLiteral>(expr->getIdx());
  if(!index_value) return;
  unsigned leaf_index = index_value->getValue().getLimitedValue();

  //自顶向下处理整条路径，按顺序按层次读取
  //查找ASTVariable下的第一层Field
  ASTVariable *root = nullptr;
  if(VD) {
    root = getASTVariable(VD);
  }
  ASTFieldVariable *current_father_fv = nullptr;
  ASTArrayVariable *current_father_av = nullptr;
  bool pos_at_root = true;

  auto array_iter = arrayFields.begin();
  for(auto field_iter = fatherFields.begin(); field_iter != fatherFields.end(); ++field_iter) {
    //当前需要处理的为数组类型即array[i]类型
    if(*field_iter == nullptr) {
      if(array_iter == arrayFields.end()) {
        assert(0);
      }
      ArraySubscriptExpr *current_ase = *array_iter;
      clang::IntegerLiteral *index_value = dyn_cast<IntegerLiteral>(current_ase->getIdx());
      assert(index_value);
      unsigned index = index_value->getValue().getLimitedValue();
      ++array_iter;
      //添加ASTArrayVariable
      //父节点为ASTVariable或者本身为ThisVariables
      if(pos_at_root) {
        ASTArrayVariable *AAV = addASTArrayVariable(VD, nullptr, index, nullptr, nullptr);
        if(root) {
          root->addArrayChild(index, AAV);
        }
        pos_at_root = false;
        current_father_fv = nullptr;
        current_father_av = AAV;
      }
      //父节点为ASTFieldVariable或ASTArrayVariable
      else {
        ASTArrayVariable *AAV = addASTArrayVariable(VD, nullptr, index, current_father_fv, current_father_av);
        current_father_fv = nullptr;
        current_father_av = AAV;
      }
    }
    //FieldDecl
    else {
      FieldDecl *current_fd = *field_iter;
      //根据当前father类型分为Record和Array两种
      if(pos_at_root) {
        ASTFieldVariable *FV = addASTFieldVariable(VD, current_fd, nullptr);
        if(root) {
          root->addField(FV);
        }
        pos_at_root = false;
        current_father_fv = FV;
      }
      else {
        if(current_father_fv) {
          ASTFieldVariable *FV = addASTFieldVariable(VD, current_fd, current_father_fv);
          current_father_fv = FV;
          current_father_av = nullptr;
        }
        else {
          ASTArrayVariable *AV = addASTArrayVariable(VD, current_fd, UINT_MAX, nullptr, current_father_av);
          current_father_av = AV;
          current_father_fv = nullptr;
        }
      }
    }
  }
  //添加底层Field即ME对应Field
  if(pos_at_root) {
    ASTArrayVariable *AV = addASTArrayVariable(VD, nullptr, leaf_index, nullptr, nullptr);
    if(root) {
      root->addArrayChild(leaf_index, AV);
    }
  }
  else {
    if(current_father_fv) {
      ASTArrayVariable *AV = addASTArrayVariable(VD, nullptr, leaf_index, current_father_fv, nullptr);
    }
    else {
      ASTArrayVariable *AV = addASTArrayVariable(VD, nullptr, leaf_index, nullptr, current_father_av);
    }
  }  
}

taint_info TaintManager::addVariableWithPosVec(ASTVariable *root, std::vector<int> index) {
  assert(index.size() >= 1);
  if(index.size() == 1) return taint_info(root);
  taint_info current = taint_info(root);
  for(int i = 1; i < index.size(); ++i) {
    current = addVariableWithPos(current, index[i]);
    //失败
    if(current.kind == taint_variable_kind::null) return current;
  } 
  return current;
}

taint_info TaintManager::addVariableWithPos(taint_info info, int pos) {
  if(pos > 0) return addFieldWithPos(info, pos);
  else return addArrayWithPos(info, pos);
}

taint_info TaintManager::addFieldWithPos(taint_info info, int pos) {
  assert(pos > 0);
  switch(info.kind) {
    case taint_variable_kind::v: {
      ASTVariable *V = info.variable.v;
      if(!isRecord(V->getDecl())) return taint_info();
      RecordDecl *rd = getRecord(V->getDecl());
      int param_cnt = 0;
      for(auto iter = rd->field_begin(); iter != rd->field_end(); ++iter) {
        ++param_cnt;
        FieldDecl *field = *iter;
        if(param_cnt == pos) {
          ASTFieldVariable *new_fv = addASTFieldVariable(V->getDecl(), field, nullptr);
          V->addField(new_fv);
          return taint_info(new_fv);
        }
      }
      return taint_info();
    }
    
    case taint_variable_kind::fv: {
      ASTFieldVariable *FV = info.variable.fv;
      if(!isRecord(FV->getFieldDecl())) return taint_info();
      RecordDecl *rd = getRecord(FV->getFieldDecl());
      int param_cnt = 0;
      for(auto iter = rd->field_begin(); iter != rd->field_end(); ++iter) {
        ++param_cnt;
        FieldDecl *field = *iter;
        if(param_cnt == pos) {
          return taint_info(addASTFieldVariable(FV->getVarDecl(), field, FV));
        }
      }
      return taint_info();
    }

    case taint_variable_kind::av: {
      ASTArrayVariable *AV = info.variable.av;
      if(AV->getArrayVariableKind() == ArrayVariableKind::Element) {
        FieldDecl *fatherField = nullptr;
        VarDecl *fatherVD = nullptr;
        ASTArrayVariable *root_AV = AV;
        while(root_AV->hasFather_AAV()) {
          root_AV = root_AV->getFather_AAV();
          if(root_AV->getFieldDecl()) {
            fatherField = root_AV->getFieldDecl();
            break;
          }
        }
        if(!fatherField) {
          if(root_AV->hasFather_FV()) {
            ASTFieldVariable *root_FV = root_AV->getFather_FV();
            fatherField = root_FV->getFieldDecl();
          }
          else {
            fatherVD = root_AV->getVarDecl();
          }
        }

        if(fatherField) {
          RecordDecl *rd = getRecord(fatherField);
          if(!rd) return taint_info();
          int param_cnt = 0;
          for(auto iter = rd->field_begin(); iter != rd->field_end(); ++iter) {
            param_cnt++;
            if(param_cnt == pos) {
              return taint_info(addASTArrayVariable(AV->getVarDecl(), *iter, UINT_MAX, nullptr, AV));
            }
          }
          return taint_info();
        }
        else {
          RecordDecl *rd = getRecord(fatherVD);
          if(!rd) return taint_info();
          int param_cnt = 0;
          for(auto iter = rd->field_begin(); iter != rd->field_end(); ++iter) {
            param_cnt++;
            if(param_cnt == pos) {
              return taint_info(addASTArrayVariable(AV->getVarDecl(), *iter, UINT_MAX, nullptr, AV));
            }
          }
        }
      }
      else {
        assert(AV->getFieldDecl());
        RecordDecl *rd = getRecord(AV->getFieldDecl());
        if(!rd) return taint_info();
        int param_cnt = 0;
        for(auto iter = rd->field_begin(); iter != rd->field_end(); ++iter) {
          param_cnt++;
          if(param_cnt == pos) {
            return taint_info(addASTArrayVariable(AV->getVarDecl(), *iter, UINT_MAX, nullptr, AV));
          }
        }
      }
      return taint_info();
    }
    default:
      return taint_info();
  }
}

taint_info TaintManager::addArrayWithPos(taint_info info, int index) {
  index = -(index);
  assert(index >= 0);
  switch(info.kind) {
    case taint_variable_kind::v: {
      ASTVariable *V = info.variable.v;
      ASTArrayVariable *new_av = addASTArrayVariable(V->getDecl(), nullptr, index, nullptr, nullptr);
      V->addArrayChild(index, new_av);
      return taint_info(new_av);
    }
    case taint_variable_kind::fv: {
      ASTFieldVariable *FV = info.variable.fv;
      return taint_info(addASTArrayVariable(FV->getVarDecl(), nullptr, index, FV, nullptr));
    }
    case taint_variable_kind::av: {
      ASTArrayVariable *AV = info.variable.av;
      return taint_info(addASTArrayVariable(AV->getVarDecl(), nullptr, index, nullptr, AV));
    }
    default:
      return taint_info();
  }
}

/**
 * 获得MemberExpr或ArraySubscriptExpr的所有父成员变量;
 * ME和ASE仅有一个不为nullptr;
 * fatherFields顺序为自顶向下的所有MemberExpr对应的FieldDecl，其中数组成员以nullptr空出
 * fatherArrays顺序为自顶向下的所有ArraySubscriptExpr*，其顺序与fatherFields中nullptr顺序对应
*/
bool getFathersChain(MemberExpr *ME, VarDecl *&VD, std::vector<FieldDecl *> &fatherFields, 
                     std::vector<ArraySubscriptExpr *> &fatherArrays, 
                     ArraySubscriptExpr *ASE) {
  fatherFields.clear();
  fatherArrays.clear();

  Expr *base = nullptr;
  if(!ME && !ASE) return false;
  if(ME) {
    base = ME->getBase();
  }
  else {
    base = ASE->getBase();
  }

  //get all fathers
  while(1) {
    if(CastExpr *E = dyn_cast<CastExpr>(base)) {
      base = E->getSubExpr();
      continue;
    }
    if(UnaryOperator *E = dyn_cast<UnaryOperator>(base)) {
      base = E->getSubExpr();
      continue;
    }
    if(ParenExpr *E = dyn_cast<ParenExpr>(base)) {
      base = E->getSubExpr();
      continue;
    }
    if(DeclRefExpr *DRE = dyn_cast<DeclRefExpr>(base)) {
      VarDecl *tmp_VD = dyn_cast<VarDecl>(DRE->getDecl());
      if(!tmp_VD) {
        fatherFields.clear();
        fatherArrays.clear();
        return false;
      }
      VD = tmp_VD;
      break;
    }
    if(CXXThisExpr *TE = dyn_cast<CXXThisExpr>(base)) {
      break;
    }
    if(MemberExpr *ME = dyn_cast<MemberExpr>(base)) {
      FieldDecl *nest_field = dyn_cast<FieldDecl>(ME->getMemberDecl());
      if(!nest_field) {
        fatherFields.clear();
        fatherArrays.clear();
        return false;
      }
      fatherFields.insert(fatherFields.begin(), nest_field);
      base = ME->getBase();
      continue;
    }
    if(ArraySubscriptExpr *myASE = dyn_cast<ArraySubscriptExpr>(base)) {
      if(myASE->getIdx()->getStmtClass() != Stmt::IntegerLiteralClass) {
        fatherFields.clear();
        fatherArrays.clear();
        return false;
      }
      fatherFields.insert(fatherFields.begin(), nullptr);
      fatherArrays.insert(fatherArrays.begin(), myASE);
      base = myASE->getBase();
      continue;
    }
    break;
  }

  return true;
}

unsigned getIndex(ArraySubscriptExpr *ASE) {
  if(ASE->getIdx()->getStmtClass() != Stmt::IntegerLiteralClass) {
    return UINT_MAX;
  }
  clang::IntegerLiteral *index_value = dyn_cast<IntegerLiteral>(ASE->getIdx());
  if(!index_value) {
    return UINT_MAX;
  }
  unsigned index = index_value->getValue().getLimitedValue();
  return index;
}

std::unordered_map<FieldDecl *, taint_info> getAllRecordFields(taint_info info) {
  std::unordered_map<FieldDecl *, taint_info> res;
  switch(info.kind) {
    case taint_variable_kind::v : {
      for(auto child : info.variable.v->getFields()) {
        FieldDecl *field = child->getFieldDecl();
        if(field) {
          res.emplace(field, taint_info(child));
        }
      }
      break;
    }
    case taint_variable_kind::fv : {
      for(auto child : info.variable.fv->getRecordChildren()) {
        FieldDecl *field = child->getFieldDecl();
        if(field) {
          res.emplace(field, taint_info(child));
        }
      }
      break;
    }
    case taint_variable_kind::av : {
      for(auto child : info.variable.av->getMemberChildren()) {
        FieldDecl *field = child->getFieldDecl();
        if(field) {
          res.emplace(field, taint_info(child));
        }
      }
      break;
    }
    default: break;
  }
  return res;
}

std::unordered_map<unsigned, ASTArrayVariable *> getAllArrayFields(taint_info info) {
  switch(info.kind) {
    case taint_variable_kind::v : return info.variable.v->getArrayChildren();
    case taint_variable_kind::fv : return info.variable.fv->getArrayChildren();
    case taint_variable_kind::av : return info.variable.av->getElementChildren();
    default : return std::unordered_map<unsigned, ASTArrayVariable *>();
  }
}

std::string TaintManager::getFullName(ASTVariable *V) {
  return V->getName();
}

std::string TaintManager::getFullName(ASTFieldVariable *FV) {
  std::string name = FV->getName();
  ASTFieldVariable *current = FV;
  while(current->hasFather()) {
    current = current->getFather();
    if(current->isPointerOrReferenceType()) {
      name = current->getName() + "->" + name;
    }
    else {
      name = current->getName() + "." + name;
    }
  }

  if(!FV->isClassMember()) {
    VarDecl *VD = FV->getVarDecl();
    ASTVariable *root = bimap->getASTVariable(VD);
    if(!root) {
      //assert(0 && "ASTVariable Root Not Found!");
      name = "null." + name;
    }
    else {
      if(root->isPointerOrReferenceType()) {
        name = root->getName() + "->" + name;
      }
      else {
        name = root->getName() + "." + name;
      }
    }
  }
  else {
    name = "this->" + name;
  }

  return name;
}

std::string TaintManager::getFullName(ASTArrayVariable *AV) {
  std::string name = AV->getAVName();
  ASTArrayVariable *current = AV;
  ASTFieldVariable *root = nullptr;

  //收集ASTArrayVariable链名称
  while(current->hasFather()) {
    if(current->hasFather_AAV()) {
      if(current->getArrayVariableKind() == ArrayVariableKind::Element) {
        current = current->getFather_AAV();
        name = current->getAVName() + name;
      }
      else {
        current = current->getFather_AAV();
        if(current->isPointerOrReferenceType()) {
          name = current->getAVName() + "->" + name;
        }
        else {
          name = current->getAVName() + "." + name;
        }
      }
    }
    else {
      if(current->getArrayVariableKind() == ArrayVariableKind::Element) {
        root = current->getFather_FV();
      }
      else {
        root = current->getFather_FV();
        if(root->isPointerOrReferenceType()) {
          name = "->" + name;
        }
        else {
          name = "." + name;
        }
      }
      break;
    }
  }

  //收集ASTFieldVariable链名称 
  if(root) {
    std::string FV_name = getFullName(root);
    name = FV_name + name;
  }
  else {
    VarDecl *VD = AV->getVarDecl();
    if(VD) {
      ASTVariable *root_V = getASTVariable(VD);
      if(root_V) {
        name = root_V->getName() + name;
      }
    }
  }

  return name;
}

std::string TaintManager::getGlobalFullName(ASTGlobalVariable *V) {
  return V->getName();
}

std::string TaintManager::getGlobalFullName(ASTFieldVariable *FV) {
  std::string name = FV->getName();
  ASTFieldVariable *current = FV;
  while(current->hasFather()) {
    current = current->getFather();
    name = current->getName() + "." + name;
  }
  VarDecl *VD = FV->getVarDecl();
  name = VD->getNameAsString() + "." + name;
  return name;
}

std::string TaintManager::getGlobalFullName(ASTArrayVariable *AV) {
  std::string name;
  if(AV->getFieldDecl()) {
    name = "." + AV->getName();
  }
  else {
    name = "[" + std::to_string(AV->getElementIndex()) + "]";
  }
  ASTArrayVariable *current = AV;
  while(current->hasFather_AAV()) {
    current = current->getFather_AAV();
    if(current->getFieldDecl()) {
      name = "." + current->getName();
    }
    else {
      name = "[" + std::to_string(current->getElementIndex()) + "]";
    }
  }
  if(current->hasFather_FV()) {
    ASTFieldVariable *root = current->getFather_FV();
    return getGlobalFullName(root) + name;
  }
  else {
    VarDecl *VD = AV->getVarDecl();
    return VD->getNameAsString() + name;
  }
}

void TaintManager::dumpAllVariableInfo() {
  std::cout << "----------" << "ASTVariable" << "----------" << std::endl;
  for(auto v : F->getVariables()) {
    std::cout << getFullName(v) << std::endl;
  }
  std::cout << "----------" << "ASTFieldVariable" << "----------" << std::endl;
  for(auto fv : F->getFields()) {
    std::cout << getFullName(fv) << std::endl;
  }
  std::cout << "----------" << "ASTArrayVariable" << "----------" << std::endl;
  for(auto av : F->getArrayFields()) {
    std::cout << getFullName(av) << std::endl;
  }
  std::cout << "----------" << "ASTThisFieldVariable" << "----------" << std::endl;
  for(auto fv : F->getThisFields()) {
    std::cout << getFullName(fv) << std::endl;
  }
  std::cout << "----------" << "ASTThisArrayVariable" << "----------" << std::endl;
  for(auto av : F->getThisArrayFields()) {
    std::cout << getFullName(av) << std::endl;
  }
}

bool isRecord(VarDecl *vd) {
  if(vd->getType()->isRecordType()) 
    return true;

  if(vd->getType()->isPointerType() || vd->getType()->isReferenceType()) {
    clang::QualType type = vd->getType();
    while(type->isPointerType() || type->isReferenceType()) {
      type = type->getPointeeType();
    }
    if(type->isRecordType())
      return true;
  }
  return false;
}

bool isRecord(FieldDecl *fd) {
  if(fd->getType()->isRecordType()) 
    return true;
  if(fd->getType()->isPointerType() || fd->getType()->isReferenceType()) {
    clang::QualType type = fd->getType();
    while(type->isPointerType() || type->isReferenceType()) {
      type = type->getPointeeType();
    }
    if(type->isRecordType())
      return true;
  }
  return false;
}

RecordDecl *getRecord(VarDecl *VD) {
  if(VD->getType()->isRecordType()) {
    return VD->getType()->getAsRecordDecl();
  }
  if(VD->getType()->isPointerType() || VD->getType()->isReferenceType()) {
    clang::QualType type = VD->getType();
    while(type->isPointerType() || type->isReferenceType()) {
      type = type->getPointeeType();
    }
    if(type->isRecordType()) {
      return type->getAsRecordDecl();
    }
  }
  return nullptr;
}

RecordDecl *getRecord(FieldDecl *FD) {
  //如果本身就是结构体类型
  if(FD->getType()->isRecordType()) {
    return FD->getType()->getAsRecordDecl();
  }
  //结构体指针
  if(FD->getType()->isPointerType() || FD->getType()->isReferenceType()) {
    clang::QualType type = FD->getType();
    while(type->isPointerType() || type->isReferenceType()) {
      type = type->getPointeeType();
    }
    if(type->isRecordType()) {
      return type->getAsRecordDecl();
    }
  }
  return nullptr; 
}

RecordDecl *getArrayElementRecord(VarDecl *VD) {
  if(!VD->getType()->isArrayType()) assert(0);
  
  if(VD->getType()->getPointeeOrArrayElementType()->isRecordType()) {
    return VD->getType()->getPointeeOrArrayElementType()->getAsRecordDecl();
  }

  if(VD->getType()->getPointeeOrArrayElementType()->isPointerType()) {
    clang::QualType element = VD->getType()->getPointeeOrArrayElementType()->getPointeeType();
    while(element->isPointerType()) {
      element = element->getPointeeType();
    }
    if(element->isRecordType()) {
      return element->getAsRecordDecl();
    }
  }

  return nullptr;
}

RecordDecl *getArrayElementRecord(FieldDecl *FD) {
  if(!FD->getType()->isArrayType()) assert(0);
  
  if(FD->getType()->getPointeeOrArrayElementType()->isRecordType()) {
    return FD->getType()->getPointeeOrArrayElementType()->getAsRecordDecl();
  }

  if(FD->getType()->getPointeeOrArrayElementType()->isPointerType()) {
    clang::QualType element = FD->getType()->getPointeeOrArrayElementType()->getPointeeType();
    while(element->isPointerType()) {
      element = element->getPointeeType();
    }
    if(element->isRecordType()) {
      return element->getAsRecordDecl();
    }
  }

  return nullptr;
}

clang::QualType getRealType(VarDecl *VD) {
  clang::QualType type = VD->getType();
  while(type->isPointerType()) {
    type = type->getPointeeType();
  }

  return type;
}

clang::QualType getRealType(FieldDecl *FD) {
  clang::QualType type = FD->getType();
  while(type->isPointerType()) {
    type = type->getPointeeType();
  }

  return type;
}
