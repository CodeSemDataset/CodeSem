#include "checkers/PDG2TokenSequence.h"

StmtPDGNode::StmtPDGNode(Stmt *stmt, int ID) {
  this->ID = ID;
  this->stmt = stmt;
  this->stmtString = common::getString_of_Stmt(stmt);
}

StmtPDGNode::StmtPDGNode(std::string stmt, int ID) {
  this->stmtString = stmt;
  this->ID = ID;
  this->stmt = nullptr;
}

Stmt* StmtPDGNode::getStmt() {
  return stmt;
}

std::string StmtPDGNode::getStmtString() {
  return stmtString;
}

int StmtPDGNode::getID() {
  return ID;
}

void StmtPDGNode::addWriteVars(int64_t id) {
  // std::cout<< std::to_string(getID()) <<" add write var " << std::to_string(id) <<std::endl;
  writeVars.insert(id);
}

void StmtPDGNode::addReadVars(int64_t id) {
  // std::cout<< std::to_string(getID()) <<" add read var " << std::to_string(id) <<std::endl;
  readVars.insert(id);
}

void StmtPDGNode::addConditionalWriteVars(int64_t id) {
  // std::cout<< std::to_string(getID()) <<" add conditional write var " << std::to_string(id) <<std::endl;
  conditionalWriteVars.insert(id);
}

void StmtPDGNode::addGotoVars(int64_t id) {
  // std::cout<< std::to_string(getID()) <<" add goto var " << std::to_string(id) <<std::endl;
  gotoVars.insert(id);
}

std::set<int64_t> StmtPDGNode::getWriteVars() {
  return writeVars;
}

std::set<int64_t> StmtPDGNode::getReadVars() {
  return readVars;
}

std::set<int64_t> StmtPDGNode::getConditionalWriteVars() {
  return conditionalWriteVars;
}
std::set<int64_t> StmtPDGNode::getGotoVars() {
  return gotoVars;
}

StmtPDG::StmtPDG(b input, WordDict *wd) {
  FunctionDecl* FD = input.func;
  std::string filename = input.path;
  totalNodeNum = 0;
  currentFD = FD;
  dict = wd;

  // Decl the function root node, include function params
  int currentRootID = totalNodeNum++;
  StmtPDGNode *rootNode = new StmtPDGNode(common::getFullName(FD), currentRootID);
  addNode(rootNode);
  
  // Handle the return type
  std::string typeName = FD->getType().getAsString();
  addNodeEmbedding(dict->getToken(typeName), currentRootID);

  // Handle the func name
  std::string funcName = FD->getNameAsString();
  addNodeEmbedding(dict->getToken(funcName), currentRootID);

  // Handle the params
  int paramsSize = FD->param_size();
  for (int i = 0; i < paramsSize; ++i) {
    handleDecl(FD->getParamDecl(i), currentRootID, edgeType::astEdge, operationType::defaultOperation);
  }

  // Traverse the function body
  auto *FDBody = FD->getBody();
  if (nullptr == FDBody) return;
  for (auto bodyIter = FDBody->child_begin(); bodyIter != FDBody->child_end(); ++bodyIter) {
    Stmt* currentStmt = *bodyIter;
    handleStmt(currentStmt, currentRootID, edgeType::controlDependenceEdge, operationType::defaultOperation);
  }

  computeDataDependence();

  // printGraph();
  // dumpDot();
  dumpJson(filename);
  dict->storeDict();
}

void StmtPDG::addNode(StmtPDGNode* node) {
  nodeList.push_back(node);
  // assert((nodeList.size() == node->getID() + 1) && "ERROR: node ID not euqals to node location.");
  if (nodeList.size() != node->getID() + 1)
    throw "ERROR: node ID not euqals to node location.";
}

void StmtPDG::addNodeEmbedding(int token, int nodeID) {
  if (nodeEmbedding.size() == nodeID) {
    std::vector<int> embedding;
    embedding.push_back(token);
    nodeEmbedding.push_back(embedding);
  }
  else if (nodeEmbedding.size() > nodeID) {
    nodeEmbedding[nodeID].push_back(token);
  }
  else {
    throw "ERROR: node ID not euqals to token location.";
    int maxSize = nodeList.size();
    if (maxSize > nodeEmbedding.size()) maxSize = nodeEmbedding.size();
    for (int i = 0; i < maxSize; ++i) {
      std::cout<<"ID: " << std::to_string(nodeList[i]->getID()) << " Stmt:" << std::endl;
      std::cout << nodeList[i]->getStmtString() << std::endl;
      std::cout << "token: [";
      for (auto iter : nodeEmbedding[i]) std::cout << std::to_string(iter) << ", ";
      std::cout << "]" << std::endl;
    }
    if (nodeEmbedding.size() < nodeList.size()) {
      for (int i = nodeEmbedding.size(); i < nodeList.size(); ++i) {
        std::cout<<"ID: " << std::to_string(nodeList[i]->getID()) << " Stmt:" << std::endl;
        std::cout << nodeList[i]->getStmtString() << std::endl;
      }
    }
    std::cout<< "current node number: "<< std::to_string(nodeEmbedding.size()) << ", token id: " << std::to_string(nodeID) <<std::endl;
    // assert(false && "ERROR: node ID not euqals to token location.");
  }
}

void StmtPDG::addControlDependenceEdge(int firstID, int secondID) {
  if (controlDependenceEdges.find(firstID) != controlDependenceEdges.end())
    controlDependenceEdges[firstID].insert(secondID);
  else {
    std::set<int> dest;
    dest.insert(secondID);
    controlDependenceEdges[firstID] = dest;
  }
}

void StmtPDG::addDataDependenceEdge(int firstID, int secondID) {
  if (dataDependenceEdges.find(firstID) != dataDependenceEdges.end())
    dataDependenceEdges[firstID].insert(secondID);
  else {
    std::set<int> dest;
    dest.insert(secondID);
    dataDependenceEdges[firstID] = dest;
  }
}

void StmtPDG::addASTEdge(int firstID, int secondID) {
  if (astEdges.find(firstID) != astEdges.end())
    astEdges[firstID].insert(secondID);
  else {
    std::set<int> dest;
    dest.insert(secondID);
    astEdges[firstID] = dest;
  }
}

void StmtPDG::addEdges(int firstID, int secondID, edgeType t) {
  switch (t) {
    case edgeType::controlDependenceEdge:
      addControlDependenceEdge(firstID, secondID);
      break;
    case edgeType::dataDependenceEdge:
      addDataDependenceEdge(firstID, secondID);
      break;
    case edgeType::astEdge:
      addASTEdge(firstID, secondID);
      break;
    default:
      assert(false && "ERROR: edge type wrong!");
      break;
  }
}

void StmtPDG::printGraph() {
  for (auto n : nodeList) {
    std::cout<<"ID: " << std::to_string(n->getID()) << " Stmt:" << std::endl;
    std::cout << n->getStmtString() << std::endl;
  }

  std::cout<<"The control dependence edges: "<<std::endl;
  for (auto iter = controlDependenceEdges.begin(); iter != controlDependenceEdges.end(); ++ iter) {
    for (auto e : iter->second) {
      std::cout<<std::to_string(iter->first)<<" -> "<<std::to_string(e)<<std::endl;
    }
  }

  std::cout<<"The data dependence edges: "<<std::endl;
  for (auto iter = dataDependenceEdges.begin(); iter != dataDependenceEdges.end(); ++ iter) {
    for (auto e : iter->second) {
      std::cout<<std::to_string(iter->first)<<" -> "<<std::to_string(e)<<std::endl;
    }
  }

  std::cout<<"The graph embedding: " << std::endl << "[";
  for (auto n : nodeEmbedding) {
    std::cout << "[";
    for (auto n2 : n) {
      std::cout<<std::to_string(n2)<<", ";
    }
    std::cout << "], ";
  }
  std::cout<<"]"<<std::endl;
}

void StmtPDG::dumpDot() {
  std::ofstream fout;
  fout.open("./pdg_tokensequence.dot", std::ios::out);
  if (!fout) return;

  fout << "digraph pdg {\n";

  // graph nodes
  fout << "  // graph nodes\n";
  for (auto n : nodeList) {
    std::string stmt = n->getStmtString();
    stmt = common::string_replace_all(stmt, "\n", "\\l");
    stmt = common::string_replace_all(stmt, "\"", "\\\"");
    std::string embed = "[";
    for (auto embedIter : nodeEmbedding[n->getID()]) {
      embed += std::to_string(embedIter) + ", ";
    }
    embed = embed.substr(0, embed.length() -2);
    embed += "]";
    fout << "  v" << std::to_string(n->getID()) << " [label=\"" << std::to_string(n->getID()) << ":\\ltoken: " << embed << "\\l" << stmt << "\"];\n";
  }

  // control dependence edges
  fout << "  // control dependence edges\n";
  for (auto cde : controlDependenceEdges) {
    for (auto n : cde.second) {
      fout << "  v" << std::to_string(cde.first) << " -> v" << std::to_string(n) <<" [style=filled];\n";
    }
  }

  // data dependence edges
  fout << "  // data dependence edges\n";
  for (auto dde : dataDependenceEdges) {
    for (auto n : dde.second) {
      fout << "  v" << std::to_string(dde.first) << " -> v" << std::to_string(n) <<" [style=dashed];\n";
    }
  }

  // ast edges
  fout << "  // ast edges\n";
  for (auto ae : astEdges) {
    for (auto n : ae.second) {
      fout << "  v" << std::to_string(ae.first) << " -> v" << std::to_string(n) <<" [style=dotted];\n";
    }
  }

  fout << "}\n";
  fout.flush();
  fout.close();
}


void StmtPDG::dumpJson(std::string filename) {
  json root_list = json::array();
  json root;
  
  json edges = json::array();
  // ast edge token: 1
  for (auto e : astEdges) {
    for (auto dest : e.second ) {
      json edge = json::array();
      edge.push_back(e.first);
      edge.push_back(1);
      edge.push_back(dest);
      edges.push_back(edge);
    }
  }

  // control dependence edge token: 2
  for (auto e : controlDependenceEdges) {
    for (auto dest : e.second ) {
      json edge = json::array();
      edge.push_back(e.first);
      edge.push_back(2);
      edge.push_back(dest);
      edges.push_back(edge);
    }
  }

  // data dependence edge token: 3
  for (auto e : dataDependenceEdges) {
    for (auto dest : e.second ) {
      json edge = json::array();
      edge.push_back(e.first);
      edge.push_back(3);
      edge.push_back(dest);
      edges.push_back(edge);
    }
  }
  root["graph"] = edges;

  json node_features = json::array();
  for (auto n1 : nodeEmbedding) {
    json single_feature = json::array();
    for (auto n2 : n1) {
      single_feature.push_back(n2);
    }
    node_features.push_back(single_feature);
  }
  root["node_features"] = node_features;

  std::string funcName = common::getFullName(currentFD);
  funcName = common::string_replace_all(funcName, " ", "_");
  root["projName"] = funcName;

  root_list.push_back(root);

  filename = filename.substr(filename.find_first_of("/")+1);
  filename = filename.substr(filename.find_first_of("/")+1);
  filename = filename.substr(filename.find_first_of("/")+1);
  filename = filename.substr(filename.find_first_of("/")+1);
  filename = filename.substr(filename.find_first_of("/")+1);
  filename = "../../../../dataset_json_pdgTokenSequence/" + filename;
  filename = filename.substr(0, filename.find_last_of("."));
  filename = filename + ".json";
  std::cout << filename << std::endl;

  std::ofstream out(filename);
  out << root_list << std::endl;
  out.close();
}

int StmtPDG::handleStmt(Stmt* stmt, int rootID, edgeType et, operationType operType, bool isAddEmbe) {
  if (nullptr == stmt) return -1;

  // This code used to ignore ImplicitCast
  if (stmt->getStmtClass() == Stmt::ImplicitCastExprClass) {
    ImplicitCastExpr *ice = cast<ImplicitCastExpr>(stmt);
    return handleStmt(ice->getSubExpr(), rootID, et, operType, isAddEmbe);
  }

  // This code used to ignore CompoundStmt
  if (stmt->getStmtClass() == Stmt::CompoundStmtClass) {
    clang::CompoundStmt* cs = cast<clang::CompoundStmt>(stmt);
    int res = -1;
    for (auto csIter = cs->body_begin(); csIter != cs->body_end(); ++csIter) {
      Stmt *childStmt = *csIter;
      res = handleStmt(childStmt, rootID, et, operType, isAddEmbe);
    }
    return res;
  }

  // This code used to ignore StmtExpr
  if (stmt->getStmtClass() == Stmt::StmtExprClass) {
    clang::StmtExpr* se = cast<clang::StmtExpr>(stmt);
    return handleStmt(se->getSubStmt(), rootID, et, operType, isAddEmbe);
  }

  int currentID = rootID;
  if (edgeType::controlDependenceEdge == et) {
    currentID = totalNodeNum++;
    StmtPDGNode *currentNode = new StmtPDGNode(stmt, currentID);
    addNode(currentNode);
    addEdges(rootID, currentID, et);
  }

  switch(stmt->getStmtClass()) {
    case Stmt::CaseStmtClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CaseStmt, currentID);
      CaseStmt* casestmt = cast<CaseStmt>(stmt);
      handleStmt(casestmt->getLHS(), currentID, edgeType::astEdge, operType, isAddEmbe);
      handleStmt(casestmt->getSubStmt(), currentID, et, operationType::inBranch, isAddEmbe);
      break;
    }

    case Stmt::CompoundStmtClass: {
      // if(isAddEmbe) addNodeEmbedding(sti.CompoundStmt, currentID);
      clang::CompoundStmt* cs = cast<clang::CompoundStmt>(stmt);
      for (auto csIter = cs->body_begin(); csIter != cs->body_end(); ++csIter) {
        Stmt *childStmt = *csIter;
        handleStmt(childStmt, currentID, edgeType::controlDependenceEdge, operType, isAddEmbe);
      }
      break;
    }

    case Stmt::CXXTryStmtClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CXXTryStmt, currentID);
      CXXTryStmt* cts = cast<CXXTryStmt>(stmt);
      handleStmt(cts->getTryBlock(), currentID, edgeType::controlDependenceEdge, operationType::inBranch, isAddEmbe);
      int catchIdx = 0;
      while(catchIdx < cts->getNumHandlers()) {
        handleStmt(cts->getHandler(catchIdx), currentID, edgeType::controlDependenceEdge, operationType::inBranch, isAddEmbe);
        catchIdx++;
      }
      break;
    }

    case Stmt::CXXForRangeStmtClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CXXForRangeStmt, currentID);
      CXXForRangeStmt* cfrs = cast<CXXForRangeStmt>(stmt);
      
      std::string typeName = cfrs->getLoopVariable()->getType().getAsString();
      addNodeEmbedding(dict->getToken(typeName), currentID);

      std::string loopVarName = cfrs->getLoopVariable()->getNameAsString();
      addNodeEmbedding(dict->getToken(loopVarName), currentID);
      nodeList[currentID]->addWriteVars(cfrs->getLoopVariable()->getGlobalID());

      if (VarDecl* vd = dyn_cast<VarDecl>(cfrs->getRangeStmt()->getSingleDecl())) {
        handleStmt(vd->getInit(), currentID, edgeType::astEdge, operationType::read, isAddEmbe);
      }
            
      handleStmt(cfrs->getBody(), currentID, et, operationType::inBranch, isAddEmbe);

      break;
    }

    case Stmt::DoStmtClass: {
      if(isAddEmbe) addNodeEmbedding(sti.DoStmt, currentID);
      DoStmt* ds = cast<DoStmt>(stmt);
      handleStmt(ds->getCond(), currentID, edgeType::astEdge, operType, isAddEmbe);
      handleStmt(ds->getBody(), currentID, et, operationType::inBranch, isAddEmbe);
      break;
    }

    case Stmt::ForStmtClass: {
      if(isAddEmbe) addNodeEmbedding(sti.ForStmt, currentID);
      ForStmt* fs = cast<ForStmt>(stmt);

      handleStmt(fs->getInit(), currentID, edgeType::astEdge, operationType::defaultOperation, isAddEmbe);
      int condID = handleStmt(fs->getCond(), currentID, edgeType::astEdge, operationType::defaultOperation);
      int incID = handleStmt(fs->getInc(), currentID, edgeType::astEdge, operationType::defaultOperation);

      handleStmt(fs->getBody(), currentID, et, operationType::inBranch, isAddEmbe);
      
      break;
    }

    case Stmt::IfStmtClass: {
      if(isAddEmbe) addNodeEmbedding(sti.IfStmt, currentID);
      IfStmt* is = cast<IfStmt>(stmt);

      handleStmt(is->getCond(), currentID, edgeType::astEdge, operType, isAddEmbe);

      int ifBegin = -1, elseBegin = -1, ifEnd = -1, elseEnd = -1;
      if (nullptr != is->getThen()) {
        if (et == edgeType::controlDependenceEdge) {
          int thenID = totalNodeNum++;
          StmtPDGNode *thenNode = new StmtPDGNode("THEN", thenID);
          addNode(thenNode);
          addEdges(currentID, thenID, edgeType::controlDependenceEdge);
          if(isAddEmbe) addNodeEmbedding(sti.Then, thenID);
          ifBegin = handleStmt(is->getThen(), thenID, et, operationType::inBranch, isAddEmbe);
        }
        else
          ifBegin = handleStmt(is->getThen(), currentID, et, operationType::inBranch, isAddEmbe);
      }
      if (ifBegin != -1) ifEnd = totalNodeNum - 1;
      
      if (nullptr != is->getElse()) {
        if (et == edgeType::controlDependenceEdge) {
          int elseID = totalNodeNum++;
          StmtPDGNode *elseNode = new StmtPDGNode("ELSE", elseID);
          addNode(elseNode);
          addEdges(currentID, elseID, edgeType::controlDependenceEdge);
          if(isAddEmbe) addNodeEmbedding(sti.Else, elseID);
          elseBegin = handleStmt(is->getElse(), elseID, et, operationType::inBranch, isAddEmbe);
        }
        else
          elseBegin = handleStmt(is->getElse(), currentID, et, operationType::inBranch, isAddEmbe);
      }
      if (elseBegin != -1) elseEnd = totalNodeNum - 1;
      if (ifBegin != -1 && ifEnd != -1 && elseBegin != -1 && elseEnd != -1) {
        std::pair<int, int> p1(ifBegin, ifEnd);
        std::pair<int, int> p2(elseBegin, elseEnd);
        ifElsePair[p1] = p2;
      }
      break;
    }

    case Stmt::ObjCAtTryStmtClass: {
      if(isAddEmbe) addNodeEmbedding(sti.ObjCAtTryStmt, currentID);
      ObjCAtTryStmt* ocats = cast<ObjCAtTryStmt>(stmt);
      handleStmt(ocats->getTryBody(), currentID, edgeType::controlDependenceEdge, operationType::inBranch, isAddEmbe);
      break;
    }

    case Stmt::ObjCForCollectionStmtClass: {
      if(isAddEmbe) addNodeEmbedding(sti.ObjCForCollectionStmt, currentID);
      ObjCForCollectionStmt* ocfcs = cast<ObjCForCollectionStmt>(stmt);
      handleStmt(ocfcs->getBody(), currentID, edgeType::controlDependenceEdge, operationType::inBranch, isAddEmbe);
      break;
    }

    case Stmt::SEHFinallyStmtClass: {
      if(isAddEmbe) addNodeEmbedding(sti.SEHFinallyStmt, currentID);
      SEHFinallyStmt* sfs = cast<SEHFinallyStmt>(stmt);
      handleStmt(sfs->getBlock(), currentID, edgeType::controlDependenceEdge, operationType::inBranch, isAddEmbe);
      break;
    }

    case Stmt::SEHTryStmtClass: {
      if(isAddEmbe) addNodeEmbedding(sti.SEHTryStmt, currentID);
      SEHTryStmt* sts = cast<SEHTryStmt>(stmt);
      handleStmt(sts->getTryBlock(), currentID, edgeType::controlDependenceEdge, operationType::inBranch, isAddEmbe);
      break;
    }

    case Stmt::SwitchStmtClass: {
      if(isAddEmbe) addNodeEmbedding(sti.SwitchStmt, currentID);
      SwitchStmt* ss = cast<SwitchStmt>(stmt);
      handleStmt(ss->getCond(), currentID, edgeType::astEdge, operType, isAddEmbe);
      handleStmt(ss->getBody(), currentID, et, operationType::inBranch, isAddEmbe);
      break;
    }

    case Stmt::WhileStmtClass: {
      if(isAddEmbe) addNodeEmbedding(sti.WhileStmt, currentID);
      WhileStmt* ws = cast<WhileStmt>(stmt);
      handleStmt(ws->getCond(), currentID, edgeType::astEdge, operType, isAddEmbe);
      handleStmt(ws->getBody(), currentID, et, operationType::inBranch, isAddEmbe);
      break;
    }

    case Stmt::AddrLabelExprClass: {          // used for goto stmt
      if(isAddEmbe) addNodeEmbedding(sti.AddrLabelExpr, currentID);
      break;
    }

    case Stmt::BinaryConditionalOperatorClass: {
      if(isAddEmbe) addNodeEmbedding(sti.BinaryConditionalOperator, currentID);
      BinaryConditionalOperator* bco = cast<BinaryConditionalOperator>(stmt);
      handleStmt(bco->getCond(), currentID, edgeType::astEdge, operationType::read, isAddEmbe);
      handleStmt(bco->getTrueExpr(), currentID, edgeType::astEdge, operationType::inBranch, isAddEmbe);
      handleStmt(bco->getFalseExpr(), currentID, edgeType::astEdge, operationType::inBranch, isAddEmbe);
      break;
    }

    case Stmt::BinaryOperatorClass: {
      // addNodeEmbedding(sti.BinaryOperator, currentID);
      BinaryOperator* bo = cast<BinaryOperator>(stmt);

      std::string opcodeName = bo->getOpcodeStr().str();

      auto opcode = bo->getOpcode();
      
      if (opcode == clang::BinaryOperatorKind::BO_AddAssign ||
        opcode == clang::BinaryOperatorKind::BO_AndAssign ||
        opcode == clang::BinaryOperatorKind::BO_DivAssign ||
        opcode == clang::BinaryOperatorKind::BO_MulAssign ||
        opcode == clang::BinaryOperatorKind::BO_OrAssign ||
        opcode == clang::BinaryOperatorKind::BO_RemAssign ||
        opcode == clang::BinaryOperatorKind::BO_ShlAssign ||
        opcode == clang::BinaryOperatorKind::BO_ShrAssign ||
        opcode == clang::BinaryOperatorKind::BO_SubAssign ||
        opcode == clang::BinaryOperatorKind::BO_XorAssign ||
        opcode == clang::BinaryOperatorKind::BO_Assign) {
          if (operType == operationType::inBranch || operType == operationType::conditionalWrite || operationType::readAndConditionalWrite)
            handleStmt(bo->getLHS(), currentID, edgeType::astEdge, operationType::readAndConditionalWrite, isAddEmbe);
          else
            handleStmt(bo->getLHS(), currentID, edgeType::astEdge, operationType::readAndWrite, isAddEmbe);
        }
      else
        handleStmt(bo->getLHS(), currentID, edgeType::astEdge, operationType::read, isAddEmbe);

      if(isAddEmbe) addNodeEmbedding(dict->getToken(opcodeName), currentID);
      handleStmt(bo->getRHS(), currentID, edgeType::astEdge, operationType::read, isAddEmbe);
      break;
    }

    case Stmt::BlockExprClass:
      if(isAddEmbe) addNodeEmbedding(sti.BlockExpr, currentID);
      break;
      
    case Stmt::BreakStmtClass:
      if(isAddEmbe) addNodeEmbedding(sti.BreakStmt, currentID);
      break;
      
    case Stmt::CallExprClass: {
      // addNodeEmbedding(sti.CallExpr, currentID);
      clang::CallExpr* ce = cast<clang::CallExpr>(stmt);

      handleStmt(ce->getCallee(), currentID, edgeType::astEdge, operationType::read, isAddEmbe);

      int argIdx = 0;
      while(argIdx < ce->getNumArgs()) {
        handleStmt(ce->getArg(argIdx), currentID, edgeType::astEdge, operationType::read, isAddEmbe);
        argIdx++;
      }
      break;
    }
      
    case Stmt::CXXOperatorCallExprClass: {
      // addNodeEmbedding(sti.CXXOperatorCallExpr, currentID);
      CXXOperatorCallExpr* ce = cast<CXXOperatorCallExpr>(stmt);
      
      handleStmt(ce->getCallee(), currentID, edgeType::astEdge, operationType::read, isAddEmbe);

      int argIdx = 0;
      while(argIdx < ce->getNumArgs()) {
        handleStmt(ce->getArg(argIdx), currentID, edgeType::astEdge, operationType::read, isAddEmbe);
        argIdx++;
      }
      break;
    }
      
    case Stmt::CXXMemberCallExprClass: {
      // addNodeEmbedding(sti.CXXMemberCallExpr, currentID);
      CXXMemberCallExpr* ce = cast<CXXMemberCallExpr>(stmt);
      handleStmt(ce->getImplicitObjectArgument(), currentID, edgeType::astEdge, operationType::read, isAddEmbe);
      handleStmt(ce->getCallee(), currentID, edgeType::astEdge, operationType::read, isAddEmbe);

      int argIdx = 0;
      while(argIdx < ce->getNumArgs()) {
        handleStmt(ce->getArg(argIdx), currentID, edgeType::astEdge, operationType::read, isAddEmbe);
        argIdx++;
      }
      break;
    }
      
    case Stmt::UserDefinedLiteralClass: {
      // addNodeEmbedding(sti.UserDefinedLiteral, currentID);
      UserDefinedLiteral* udl = cast<UserDefinedLiteral>(stmt);

      handleStmt(udl->getCallee(), currentID, edgeType::astEdge, operationType::read, isAddEmbe);

      int argIdx = 0;
      while(argIdx < udl->getNumArgs()) {
        handleStmt(udl->getArg(argIdx), currentID, edgeType::astEdge, operationType::read, isAddEmbe);
        argIdx++;
      }
      break;
    }
      
    case Stmt::ChooseExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.ChooseExpr, currentID);
      ChooseExpr* ce = cast<ChooseExpr>(stmt);
      handleStmt(ce->getCond(), currentID, edgeType::astEdge, operType);
      handleStmt(ce->getLHS(), currentID, edgeType::astEdge, operationType::inBranch, isAddEmbe);
      handleStmt(ce->getRHS(), currentID, edgeType::astEdge, operationType::inBranch, isAddEmbe);
      break;
    }
      
    case Stmt::ConditionalOperatorClass: {
      if(isAddEmbe) addNodeEmbedding(sti.ConditionalOperator, currentID);
      ConditionalOperator* co = cast<ConditionalOperator>(stmt);
      handleStmt(co->getCond(), currentID, edgeType::astEdge, operType, isAddEmbe);
      handleStmt(co->getTrueExpr(), currentID, edgeType::astEdge, operationType::inBranch, isAddEmbe);
      handleStmt(co->getFalseExpr(), currentID, edgeType::astEdge, operationType::inBranch, isAddEmbe);
      break;
    }
      
    case Stmt::ContinueStmtClass:
      if(isAddEmbe) addNodeEmbedding(sti.ContinueStmt, currentID);
      break;
      
    case Stmt::CXXCatchStmtClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CXXCatchStmt, currentID);
      CXXCatchStmt* ccs = cast<CXXCatchStmt>(stmt);

      if (nullptr != ccs->getExceptionDecl()) {
        VarDecl* exceptionDecl = ccs->getExceptionDecl();
        analysisStmtString(currentID, common::getString_of_VarDecl(exceptionDecl));

        nodeList[currentID]->addWriteVars(exceptionDecl->getGlobalID());
      }

      handleStmt(ccs->getHandlerBlock(), currentID, edgeType::controlDependenceEdge, operationType::inBranch, isAddEmbe);
      break;
    }
      
    case Stmt::ExprWithCleanupsClass:
      if(isAddEmbe) addNodeEmbedding(sti.ExprWithCleanups, currentID);
      break;
      
    case Stmt::CXXDefaultArgExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CXXDefaultArgExpr, currentID);
      CXXDefaultArgExpr* cdae = cast<CXXDefaultArgExpr>(stmt);
      handleStmt(cdae->getExpr(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }
      
    case Stmt::CXXDefaultInitExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CXXDefaultInitExpr, currentID);
      CXXDefaultInitExpr* cdie = cast<CXXDefaultInitExpr>(stmt);
      handleStmt(cdie->getExpr(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }
      
    case Stmt::CXXBindTemporaryExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CXXBindTemporaryExpr, currentID);
      CXXBindTemporaryExpr* cbte = cast<CXXBindTemporaryExpr>(stmt);
      handleStmt(cbte->getSubExpr(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }
      
    case Stmt::CXXConstructExprClass: {
      // addNodeEmbedding(sti.CXXConstructExpr, currentID);
      CXXConstructExpr* cce = cast<CXXConstructExpr>(stmt);
      // std::string constructorName = cce->getConstructor()->getNameAsString();
      // addNodeEmbedding(dict->getToken(constructorName), currentID);

      int argIdx = 0;
      while(argIdx < cce->getNumArgs()) {
        handleStmt(cce->getArg(argIdx), currentID, edgeType::astEdge, operType, isAddEmbe);
        argIdx++;
      }
      break;
    }
      
    case Stmt::CXXNewExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CXXNewExpr, currentID);
      CXXNewExpr* cne = cast<CXXNewExpr>(stmt);
      handleStmt(const_cast<CXXConstructExpr*>(cne->getConstructExpr()), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }
      
    case Stmt::CXXDeleteExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CXXDeleteExpr, currentID);
      CXXDeleteExpr* cde = cast<CXXDeleteExpr>(stmt);
      handleStmt(cde->getArgument(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }
      
    case Stmt::CXXFunctionalCastExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CXXFunctionalCastExpr, currentID);
      CXXFunctionalCastExpr* cfce = cast<CXXFunctionalCastExpr>(stmt);
      handleStmt(cfce->getSubExpr(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }
      
    case Stmt::CXXTemporaryObjectExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CXXTemporaryObjectExpr, currentID);
      CXXTemporaryObjectExpr* ctoe = cast<CXXTemporaryObjectExpr>(stmt);
      int argIdx = 0;
      while(argIdx < ctoe->getNumArgs()) {
        handleStmt(ctoe->getArg(argIdx), currentID, edgeType::astEdge, operType, isAddEmbe);
        argIdx++;
      }
      break;
    }
      
    case Stmt::CXXThrowExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CXXThrowExpr, currentID);
      CXXThrowExpr* cte = cast<CXXThrowExpr>(stmt);
      handleStmt(cte->getSubExpr(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }
      
    case Stmt::DeclStmtClass: {
      // addNodeEmbedding(sti.DeclStmt, currentID);
      DeclStmt* ds = cast<DeclStmt>(stmt);
      // std::string declString = common::getString_of_Stmt(stmt);
      // analysisStmtString(currentID, declString);

      if (ds->isSingleDecl()) {
        Decl* decl = ds->getSingleDecl();
        handleDecl (decl, currentID, edgeType::astEdge, operType, isAddEmbe);
      }
      else {
        auto declGroup = ds->getDeclGroup();
        for (auto groupIter = declGroup.begin(); groupIter != declGroup.end(); ++groupIter) {
          if (Decl* d = dyn_cast<Decl>(*groupIter)) {
            // nodeList[currentID]->addWriteVars(vd->getGlobalID());
            // handleStmt(vd->getInit(), currentID, edgeType::astEdge, operType);
            handleDecl (d, currentID, edgeType::astEdge, operType, isAddEmbe);
          }
        }
      }
      break;
    }
      
    case Stmt::DefaultStmtClass: {
      if(isAddEmbe) addNodeEmbedding(sti.DefaultStmt, currentID);
      DefaultStmt* defaultstmt = cast<DefaultStmt>(stmt);
      handleStmt(defaultstmt->getSubStmt(), currentID, et, operationType::inBranch, isAddEmbe);
      break;
    }
      
    case Stmt::GotoStmtClass: {
      if(isAddEmbe) addNodeEmbedding(sti.GotoStmt, currentID);

      GotoStmt* gs = cast<GotoStmt>(stmt);
      std::string gotoLabel = gs->getLabel()->getNameAsString();
      if(isAddEmbe) addNodeEmbedding(dict->getToken(gotoLabel), currentID);
      nodeList[currentID]->addGotoVars(gs->getLabel()->getGlobalID());

      break;
    }
      
    case Stmt::GCCAsmStmtClass:
      if(isAddEmbe) addNodeEmbedding(sti.GCCAsmStmt, currentID);
      break;
      
    case Stmt::ImplicitCastExprClass: {
      ImplicitCastExpr* ice = cast<ImplicitCastExpr>(stmt);
      handleStmt(ice->getSubExpr(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }
      
    case Stmt::ConstantExprClass:
      if(isAddEmbe) addNodeEmbedding(sti.ConstantExpr, currentID);
      break;
      
    case Stmt::IndirectGotoStmtClass: {
      if(isAddEmbe) addNodeEmbedding(sti.IndirectGotoStmt, currentID);
      IndirectGotoStmt* igs = cast<IndirectGotoStmt>(stmt);
      handleStmt(igs->getTarget(), currentID, edgeType::astEdge, operationType::read, isAddEmbe);
      break;
    }
      
    case Stmt::LabelStmtClass: {                       // used for goto label
      // addNodeEmbedding(sti.LabelStmt, currentID);
      LabelStmt* ls = cast<LabelStmt>(stmt);

      std::string labelName = ls->getDecl()->getNameAsString();
      if(isAddEmbe) addNodeEmbedding(dict->getToken(labelName), currentID);
      nodeList[currentID]->addWriteVars(ls->getDecl()->getGlobalID());

      handleStmt(ls->getSubStmt(), currentID, edgeType::controlDependenceEdge, operType, isAddEmbe);

      break;
    }
      
    case Stmt::LambdaExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.LambdaExpr, currentID);
      LambdaExpr* le = cast<LambdaExpr>(stmt);
      handleStmt(le->getBody(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }
      
    case Stmt::MaterializeTemporaryExprClass:
      if(isAddEmbe) addNodeEmbedding(sti.MaterializeTemporaryExpr, currentID);
      break;
      
    case Stmt::MemberExprClass: {
      // addNodeEmbedding(sti.MemberExpr, currentID);
      MemberExpr* me = cast<MemberExpr>(stmt);

      if (operType == operationType::write) {
        nodeList[currentID]->addWriteVars(me->getMemberDecl()->getGlobalID());
      }
      else if (operType == operationType::conditionalWrite) {
        nodeList[currentID]->addConditionalWriteVars(me->getMemberDecl()->getGlobalID());
      }
      else if (operType == operationType::readAndWrite) {
        nodeList[currentID]->addReadVars(me->getMemberDecl()->getGlobalID());
        nodeList[currentID]->addWriteVars(me->getMemberDecl()->getGlobalID());
      }
      else if (operType == operationType::readAndConditionalWrite) {
        nodeList[currentID]->addReadVars(me->getMemberDecl()->getGlobalID());
        nodeList[currentID]->addConditionalWriteVars(me->getMemberDecl()->getGlobalID());
      }
      else {
        nodeList[currentID]->addReadVars(me->getMemberDecl()->getGlobalID());
      }
      
      handleStmt(me->getBase(), currentID, edgeType::astEdge, operType, isAddEmbe);
      std::string memberName = me->getMemberDecl()->getNameAsString();
      if(isAddEmbe) addNodeEmbedding(dict->getToken(memberName), currentID);
      break;
    }
      
    case Stmt::NullStmtClass:
      if(isAddEmbe) addNodeEmbedding(sti.NullStmt, currentID);
      break;
      
    case Stmt::ObjCAtCatchStmtClass:
      if(isAddEmbe) addNodeEmbedding(sti.ObjCAtCatchStmt, currentID);
      break;
      
    case Stmt::ObjCAutoreleasePoolStmtClass:
      if(isAddEmbe) addNodeEmbedding(sti.ObjCAutoreleasePoolStmt, currentID);
      break;
      
    case Stmt::ObjCAtSynchronizedStmtClass:
      if(isAddEmbe) addNodeEmbedding(sti.ObjCAtSynchronizedStmt, currentID);
      break;

    case Stmt::ObjCAtThrowStmtClass:
      if(isAddEmbe) addNodeEmbedding(sti.ObjCAtThrowStmt, currentID);
      break;
      
    case Stmt::ObjCMessageExprClass:
      if(isAddEmbe) addNodeEmbedding(sti.ObjCMessageExpr, currentID);
      break;
      
    case Stmt::OpaqueValueExprClass:
      if(isAddEmbe) addNodeEmbedding(sti.OpaqueValueExpr, currentID);
      break;
      
    case Stmt::PseudoObjectExprClass:
      if(isAddEmbe) addNodeEmbedding(sti.PseudoObjectExpr, currentID);
      break;
      
    case Stmt::ReturnStmtClass: {
      if(isAddEmbe) addNodeEmbedding(sti.ReturnStmt, currentID);
      ReturnStmt* rt = cast<ReturnStmt>(stmt);
      handleStmt(rt->getRetValue(), currentID, edgeType::astEdge, operationType::read, isAddEmbe);
      break;
    }
      
    case Stmt::CoreturnStmtClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CoreturnStmt, currentID);
      CoreturnStmt* cs = cast<CoreturnStmt>(stmt);
      handleStmt(cs->getOperand(), currentID, edgeType::astEdge, operationType::read, isAddEmbe);
      handleStmt(cs->getPromiseCall(), currentID, edgeType::astEdge, operationType::read, isAddEmbe);
      break;
    }
      
    case Stmt::SEHExceptStmtClass:
      if(isAddEmbe) addNodeEmbedding(sti.SEHExceptStmt, currentID);
      break;
      
    case Stmt::SEHLeaveStmtClass:
      if(isAddEmbe) addNodeEmbedding(sti.SEHLeaveStmt, currentID);
      break;
      
    case Stmt::UnaryExprOrTypeTraitExprClass:
      if(isAddEmbe) addNodeEmbedding(sti.UnaryExprOrTypeTraitExpr, currentID);
      break;
      
    case Stmt::StmtExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.StmtExpr, currentID);
      clang::StmtExpr* se = cast<clang::StmtExpr>(stmt);
      handleStmt(se->getSubStmt(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }
    
    case Stmt::UnaryOperatorClass: {
      // addNodeEmbedding(sti.UnaryOperator, currentID);
      UnaryOperator* uo = cast<UnaryOperator>(stmt);
      auto opCode = uo->getOpcode();

      std::string opcodeName = clang::UnaryOperator::getOpcodeStr(opCode).str();
      

      if (opCode == clang::UnaryOperatorKind::UO_PostDec ||
          opCode == clang::UnaryOperatorKind::UO_PostInc) {
        if (opCode == clang::UnaryOperatorKind::UO_PostDec ||
          opCode == clang::UnaryOperatorKind::UO_PostInc ||
          opCode == clang::UnaryOperatorKind::UO_PreDec ||
          opCode == clang::UnaryOperatorKind::UO_PreInc) {
          if (operType == operationType::inBranch || operationType::conditionalWrite || operationType::readAndConditionalWrite)
            handleStmt(uo->getSubExpr(), currentID, edgeType::astEdge, operationType::readAndConditionalWrite, isAddEmbe);
          else
            handleStmt(uo->getSubExpr(), currentID, edgeType::astEdge, operationType::readAndWrite, isAddEmbe);
        }
        else
          handleStmt(uo->getSubExpr(), currentID, edgeType::astEdge, operationType::read, isAddEmbe);

        if(isAddEmbe) addNodeEmbedding(dict->getToken(opcodeName), currentID);
      }
      else {
        if(isAddEmbe) addNodeEmbedding(dict->getToken(opcodeName), currentID);
        if (opCode == clang::UnaryOperatorKind::UO_PostDec ||
          opCode == clang::UnaryOperatorKind::UO_PostInc ||
          opCode == clang::UnaryOperatorKind::UO_PreDec ||
          opCode == clang::UnaryOperatorKind::UO_PreInc) {
          if (operType == operationType::inBranch || operationType::conditionalWrite || operationType::readAndConditionalWrite)
            handleStmt(uo->getSubExpr(), currentID, edgeType::astEdge, operationType::readAndConditionalWrite, isAddEmbe);
          else
            handleStmt(uo->getSubExpr(), currentID, edgeType::astEdge, operationType::readAndWrite, isAddEmbe);
        }
        else
          handleStmt(uo->getSubExpr(), currentID, edgeType::astEdge, operationType::read, isAddEmbe);
      }
      
      break;
    }
      
    case Stmt::IntegerLiteralClass: {
      // addNodeEmbedding(sti.IntegerLiteral, currentID);
      IntegerLiteral* il = cast<IntegerLiteral>(stmt);
      if(isAddEmbe) addNodeEmbedding(dict->getToken(std::to_string(il->getValue().getLimitedValue())), currentID);
      break;
    }

    case Stmt::FloatingLiteralClass: {
      // addNodeEmbedding(sti.FloatingLiteral, currentID);
      FloatingLiteral* fl = cast<FloatingLiteral>(stmt);
      if(isAddEmbe) addNodeEmbedding(dict->getToken(std::to_string(fl->getValue().convertToFloat())), currentID);
      break;
    }

    case Stmt::StringLiteralClass: {
      // addNodeEmbedding(sti.StringLiteral, currentID);
      clang::StringLiteral* sl = cast<clang::StringLiteral>(stmt);
      std::string stringInfo;
      try {
        stringInfo = sl->getString().str();
      }
      catch (std::exception) {
        stringInfo = "std::string";
      }
      std::vector<std::string> wordInfo = splitString(stringInfo, " ");
      if(isAddEmbe) {
        for (auto w : wordInfo) {
          addNodeEmbedding(dict->getToken(w), currentID);
        }
      }
      break;
    }

    case Stmt::DeclRefExprClass: {
      // addNodeEmbedding(sti.DeclRefExpr, currentID);
      DeclRefExpr* drf = cast<DeclRefExpr>(stmt);
      if(isAddEmbe) addNodeEmbedding(dict->getToken(drf->getDecl()->getNameAsString()), currentID);

      switch (operType)
      {
      case operationType::read:
        nodeList[currentID]->addReadVars(drf->getDecl()->getGlobalID());
        break;
      case operationType::write:
        nodeList[currentID]->addWriteVars(drf->getDecl()->getGlobalID());
        break;
      case operationType::conditionalWrite:
        nodeList[currentID]->addConditionalWriteVars(drf->getDecl()->getGlobalID());
        break;
      case operationType::readAndConditionalWrite:
        nodeList[currentID]->addReadVars(drf->getDecl()->getGlobalID());
        nodeList[currentID]->addConditionalWriteVars(drf->getDecl()->getGlobalID());
        break;
      case operationType::inBranch:
        nodeList[currentID]->addReadVars(drf->getDecl()->getGlobalID());
        break;
      case operationType::defaultOperation:
        nodeList[currentID]->addReadVars(drf->getDecl()->getGlobalID());
        break;
      default:
        std::cout << "Current var is: " << drf->getDecl()->getNameAsString() << ", node id is: "<< std::to_string(currentID) << std::endl;
        assert(false && "can not get var type");
        break;
      }
      break;
    }

    case Stmt::ArraySubscriptExprClass:{
      ArraySubscriptExpr* ase = cast<ArraySubscriptExpr>(stmt);
      handleStmt(ase->getLHS(), currentID, edgeType::astEdge, operType, isAddEmbe);
      handleStmt(ase->getRHS(), currentID, edgeType::astEdge, operationType::read, isAddEmbe);
      break;
    }

    case Stmt::InitListExprClass: {
      InitListExpr* ile = cast<InitListExpr>(stmt);
      for (int i = 0; i < ile->getNumInits(); ++i) {
        handleStmt(ile->getInit(i), currentID, edgeType::astEdge, operType, isAddEmbe);
      }
      break;
    }

    case Stmt::CXXBoolLiteralExprClass: {
      CXXBoolLiteralExpr* cble = cast<CXXBoolLiteralExpr>(stmt);
      if (cble->getValue()) {
        if(isAddEmbe) addNodeEmbedding(sti.True, currentID);
      }
      else {
        if(isAddEmbe) addNodeEmbedding(sti.False, currentID);
      }
      break;
    }

    case Stmt::CharacterLiteralClass: {
      clang::CharacterLiteral* cl = cast<clang::CharacterLiteral>(stmt);
      
      char charC = (char)cl->getValue();
      std::string charName(1, charC);
      if(isAddEmbe) addNodeEmbedding(dict->getToken(charName), currentID);
      break;
    }

    case Stmt::CStyleCastExprClass: {
      clang::CStyleCastExpr* csce = cast<clang::CStyleCastExpr>(stmt);
      handleStmt(csce->getSubExpr(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }

    case Stmt::ParenExprClass: {
      clang::ParenExpr* pe = cast<clang::ParenExpr>(stmt);
      handleStmt(pe->getSubExpr(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }

    case Stmt::ParenListExprClass: {
      clang::ParenListExpr* ple = cast<clang::ParenListExpr>(stmt);

      unsigned argIter = 0;
      while (argIter < ple->getNumExprs()) {
        handleStmt(ple->getExpr(argIter), currentID, edgeType::astEdge, operType, isAddEmbe);
        argIter++;
      }
      break;
    }

    case Stmt::CXXStaticCastExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CXXStaticCastExpr, currentID);
      clang::CXXStaticCastExpr* csce = cast<clang::CXXStaticCastExpr>(stmt);
      // TODO: handle the type
      handleStmt(csce->getSubExpr(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }

    case Stmt::PredefinedExprClass: {
      PredefinedExpr* pe = cast<PredefinedExpr>(stmt);
      handleStmt(pe->getFunctionName(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }

    case Stmt::CXXNullPtrLiteralExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CXXNullPtrLiteralExpr, currentID);
      break;
    }

    case Stmt::CXXReinterpretCastExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CXXReinterpretCastExpr, currentID);
      // TODO: handle the type
      clang::CXXReinterpretCastExpr* crce = cast<clang::CXXReinterpretCastExpr>(stmt);
      handleStmt(crce->getSubExpr(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }

    case Stmt::CXXConstCastExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CXXConstCastExpr, currentID);
      // TODO: handle the type
      clang::CXXConstCastExpr* ccce = cast<clang::CXXConstCastExpr>(stmt);
      handleStmt(ccce->getSubExpr(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }

    case Stmt::GNUNullExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.GNUNullExpr, currentID);
      // TODO: get real type
      break;
    }

    case Stmt::CompoundAssignOperatorClass: {
      CompoundAssignOperator* bo = cast<CompoundAssignOperator>(stmt);

      std::string opcodeName = bo->getOpcodeStr().str();

      auto opcode = bo->getOpcode();
      
      if (opcode == clang::BinaryOperatorKind::BO_AddAssign ||
        opcode == clang::BinaryOperatorKind::BO_AndAssign ||
        opcode == clang::BinaryOperatorKind::BO_DivAssign ||
        opcode == clang::BinaryOperatorKind::BO_MulAssign ||
        opcode == clang::BinaryOperatorKind::BO_OrAssign ||
        opcode == clang::BinaryOperatorKind::BO_RemAssign ||
        opcode == clang::BinaryOperatorKind::BO_ShlAssign ||
        opcode == clang::BinaryOperatorKind::BO_ShrAssign ||
        opcode == clang::BinaryOperatorKind::BO_SubAssign ||
        opcode == clang::BinaryOperatorKind::BO_XorAssign ||
        opcode == clang::BinaryOperatorKind::BO_Assign) {
          if (operType == operationType::inBranch || operType == operationType::conditionalWrite || operationType::readAndConditionalWrite)
            handleStmt(bo->getLHS(), currentID, edgeType::astEdge, operationType::readAndConditionalWrite, isAddEmbe);
          else
            handleStmt(bo->getLHS(), currentID, edgeType::astEdge, operationType::readAndWrite, isAddEmbe);
        }
      else
        handleStmt(bo->getLHS(), currentID, edgeType::astEdge, operationType::read, isAddEmbe);

      if(isAddEmbe) addNodeEmbedding(dict->getToken(opcodeName), currentID);
      handleStmt(bo->getRHS(), currentID, edgeType::astEdge, operationType::read, isAddEmbe);
      break;
    }

    case Stmt::UnresolvedLookupExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.UnresolvedLookupExpr, currentID);
      break;
    }

    case Stmt::CXXDependentScopeMemberExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CXXDependentScopeMemberExpr, currentID);
      CXXDependentScopeMemberExpr* me = cast<CXXDependentScopeMemberExpr>(stmt);
      
      std::string memberName = me->getMemberNameInfo().getAsString();
      if(isAddEmbe) addNodeEmbedding(dict->getToken(memberName), currentID);

      handleStmt(me->getBase(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }

    case Stmt::ImplicitValueInitExprClass: {
      ImplicitValueInitExpr* ivie = cast<ImplicitValueInitExpr>(stmt);
      std::string ivieName = common::getString_of_Expr(ivie);
      if(isAddEmbe) addNodeEmbedding(dict->getToken(ivieName), currentID);
      
      break;
    }

    case Stmt::VAArgExprClass: {
      addNodeEmbedding(sti.VAArgExpr, currentID);
      clang::VAArgExpr* vae = cast<clang::VAArgExpr>(stmt);
      handleStmt(vae->getSubExpr(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }

    case Stmt::SizeOfPackExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.SizeOfPackExpr, currentID);
      clang::SizeOfPackExpr* sope = cast<clang::SizeOfPackExpr>(stmt);
      
      std::string packName = sope->getPack()->getNameAsString();
      if(isAddEmbe) addNodeEmbedding(dict->getToken(packName), currentID);
      break;
    }

    case Stmt::PackExpansionExprClass: {
      // addNodeEmbedding(sti.PackExpansionExpr, currentID);
      clang::PackExpansionExpr* pee = cast<clang::PackExpansionExpr>(stmt);
      handleStmt(pee->getPattern(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }

    case Stmt::CXXDynamicCastExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.CXXDynamicCastExpr, currentID);
      // TODO: can not analysis the type
      clang::CXXDynamicCastExpr* cdce = cast<clang::CXXDynamicCastExpr>(stmt);
      handleStmt(cdce->getSubExpr(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }

    case Stmt::CXXScalarValueInitExprClass: {
      clang::CXXScalarValueInitExpr* csvie = cast<clang::CXXScalarValueInitExpr>(stmt);
      std::string typeName = csvie->getTypeSourceInfo()->getType().getAsString();
      if(isAddEmbe) addNodeEmbedding(dict->getToken(typeName), currentID);
      break;
    }

    case Stmt::CXXUnresolvedConstructExprClass: {
      clang::CXXUnresolvedConstructExpr* cuce = cast<clang::CXXUnresolvedConstructExpr>(stmt);
      std::string typeName = cuce->getTypeSourceInfo()->getType().getAsString();
      if(isAddEmbe) addNodeEmbedding(dict->getToken(typeName), currentID);

      int argIter = 0;
      while (argIter < cuce->getNumArgs()) {
        handleStmt(cuce->getArg(argIter), currentID, edgeType::astEdge, operType, isAddEmbe);
        argIter++;
      }
      break;
    }

    case Stmt::DependentScopeDeclRefExprClass: {
      clang::DependentScopeDeclRefExpr* dsdre = cast<clang::DependentScopeDeclRefExpr>(stmt);
      std::string declName = dsdre->getDeclName().getAsString();
      if(isAddEmbe) addNodeEmbedding(dict->getToken(declName), currentID);
      // TODO: This DeclRef can not get Decl, and can not get GlobalID
      break;
    }

    case Stmt::OffsetOfExprClass: {
      clang::OffsetOfExpr* osoe = cast<clang::OffsetOfExpr>(stmt);

      std::string typeName = osoe->getTypeSourceInfo()->getType().getAsString();
      if(isAddEmbe) addNodeEmbedding(dict->getToken(typeName), currentID);

      int indexIter = 0;
      while(indexIter < osoe->getNumExpressions()) {
        handleStmt(osoe->getIndexExpr(indexIter), currentID, edgeType::astEdge, operType, isAddEmbe);
        indexIter++;
      }
      break;
    }

    case Stmt::AttributedStmtClass: {
      //TODO: I do not ensure whether there are other subexpr
      clang::AttributedStmt* as = cast<clang::AttributedStmt>(stmt);
      handleStmt(as->getSubStmt(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }

    case Stmt::CompoundLiteralExprClass: {
      clang::CompoundLiteralExpr* cle = cast<clang::CompoundLiteralExpr>(stmt);
      std::string typeName = cle->getTypeSourceInfo()->getType().getAsString();
      if(isAddEmbe) addNodeEmbedding(dict->getToken(typeName), currentID);

      handleStmt(cle->getInitializer(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }

    case Stmt::CXXTypeidExprClass: {
      addNodeEmbedding(sti.CXXTypeidExpr, currentID);
      CXXTypeidExpr* cte = cast<CXXTypeidExpr>(stmt);
      if (cte->isTypeOperand()){
        if (isAddEmbe)
          addNodeEmbedding(dict->getToken(cte->getTypeOperandSourceInfo()->getType().getAsString()), currentID);
      }
      else
        handleStmt(cte->getExprOperand(), currentID, edgeType::astEdge, operType, isAddEmbe);
      break;
    }

    case Stmt::UnresolvedMemberExprClass: {
      addNodeEmbedding(sti.UnresolvedMemberExpr, currentID);

      clang::UnresolvedMemberExpr* ume = cast<clang::UnresolvedMemberExpr>(stmt);
      
      handleStmt(ume->getBase(), currentID, edgeType::astEdge, operType, isAddEmbe);
      std::string memberName = ume->getMemberName().getAsString();
      if(isAddEmbe) addNodeEmbedding(dict->getToken(memberName), currentID);
      break;
    }

    case Stmt::TypeTraitExprClass: {
      if(isAddEmbe) addNodeEmbedding(sti.TypeTraitExpr, currentID);
      clang::TypeTraitExpr* tte = cast<clang::TypeTraitExpr>(stmt);

      int argIter = 0;
      while(argIter < tte->getNumArgs()) {
        std::string argName = tte->getArg(argIter)->getType().getAsString();
        if(isAddEmbe) addNodeEmbedding(dict->getToken(argName), currentID);
        ++argIter;
      }
      break;
    }

    default:
      if(isAddEmbe) addNodeEmbedding(sti.Other, currentID);
      // stmt->dumpColor();
      // assert(0);
      break;
  }

  return currentID;
}

int StmtPDG::handleDecl(Decl* decl, int rootID, edgeType et, operationType operType, bool isAddEmbe) {
  if (VarDecl* vd = dyn_cast<VarDecl>(decl)) {
    assert((et == edgeType::astEdge) && "ERROR: There is an error in handleDecl.");
      
    std::string declString = common::getString_of_VarDecl(vd);
    analysisStmtString(rootID, declString);
    nodeList[rootID]->addWriteVars(vd->getGlobalID());

    if (vd->hasInit() && nullptr != vd->getInit()) {
      handleStmt(vd->getInit(), rootID, edgeType::astEdge, operType, false);
    }

    return rootID;
  } 
  else if (EnumDecl* ed = dyn_cast<EnumDecl>(decl)) {
    assert((et == edgeType::astEdge) && "ERROR: There is an error in handleDecl.");
    if (isAddEmbe) addNodeEmbedding(sti.Enum, rootID);
    if (isAddEmbe) addNodeEmbedding(dict->getToken(ed->getNameAsString()), rootID);
    nodeList[rootID]->addWriteVars(ed->getGlobalID());
    for (auto enumIter = ed->enumerator_begin(); enumIter != ed->enumerator_end(); ++enumIter) {
      if (EnumConstantDecl* esd = dyn_cast<EnumConstantDecl>(*enumIter)) {
        handleDecl(esd, rootID, edgeType::astEdge, operationType::write);
      }
    }
  }
  else if (EnumConstantDecl* esd = dyn_cast<EnumConstantDecl>(decl)) {
    if (isAddEmbe) addNodeEmbedding(dict->getToken(esd->getNameAsString()), rootID);
    if (operType == operationType::write) {
      nodeList[rootID]->addWriteVars(esd->getGlobalID());
    }
  }
  else if (TypeAliasDecl* tad = dyn_cast<TypeAliasDecl>(decl)) {
    std::string tadName = tad->getName().str();
    if (isAddEmbe) addNodeEmbedding(dict->getToken(tadName), rootID);
  }
  else if (UsingDecl* ud = dyn_cast<UsingDecl>(decl)) {
    if (isAddEmbe) addNodeEmbedding(dict->getToken("Using"), rootID);
    if (isAddEmbe) addNodeEmbedding(dict->getToken(ud->getNameAsString()), rootID);
    if (operType == operationType::inBranch) {
      nodeList[rootID]->addConditionalWriteVars(ud->getGlobalID());
    }
    else {
      nodeList[rootID]->addWriteVars(ud->getGlobalID());
    }
  }
  else if (UsingDirectiveDecl* udd = dyn_cast<UsingDirectiveDecl>(decl)) {
    if (isAddEmbe) addNodeEmbedding(dict->getToken("Using"), rootID);
    if (isAddEmbe) addNodeEmbedding(dict->getToken(udd->getNameAsString()), rootID);
    if (operType == operationType::inBranch) {
      nodeList[rootID]->addConditionalWriteVars(udd->getGlobalID());
    }
    else {
      nodeList[rootID]->addWriteVars(udd->getGlobalID());
    }
  }
  else if (TypedefDecl* td = dyn_cast<TypedefDecl>(decl)) {
    if (isAddEmbe) addNodeEmbedding(dict->getToken("typedef"), rootID);

    std::string typeName = td->getUnderlyingType().getAsString();
    if (isAddEmbe) addNodeEmbedding(dict->getToken(typeName), rootID);

    std::string varName = td->getNameAsString();
    if (isAddEmbe) addNodeEmbedding(dict->getToken(varName), rootID);
  }
  else if (StaticAssertDecl* sad = dyn_cast<StaticAssertDecl>(decl)) {
    if (isAddEmbe) addNodeEmbedding(dict->getToken("static_assert"), rootID);

    handleStmt(sad->getAssertExpr(), rootID, edgeType::astEdge, operType, isAddEmbe);
    handleStmt(sad->getMessage(), rootID, edgeType::astEdge, operType, isAddEmbe);
  }
  else if (RecordDecl* rd = dyn_cast<RecordDecl>(decl)) {
    // TODO: do not handle the body of RecordDecl
    if (rd->isClass()) {
      if (isAddEmbe) addNodeEmbedding(dict->getToken("class"), rootID);
    }
    if (rd->isStruct()) {
      if (isAddEmbe) addNodeEmbedding(dict->getToken("struct"), rootID);
    }
    if (rd->isUnion()) {
      if (isAddEmbe) addNodeEmbedding(dict->getToken("union"), rootID);
    }
    if (isAddEmbe) addNodeEmbedding(dict->getToken(rd->getNameAsString()), rootID);
  }
  else if (CXXRecordDecl* crd = dyn_cast<CXXRecordDecl>(decl)) {
    // TODO: do not handle the body of RecordDecl
    if (crd->isClass()) {
      if (isAddEmbe) addNodeEmbedding(dict->getToken("class"), rootID);
    }
    if (crd->isStruct()) {
      if (isAddEmbe) addNodeEmbedding(dict->getToken("struct"), rootID);
    }
    if (crd->isUnion()) {
      if (isAddEmbe) addNodeEmbedding(dict->getToken("union"), rootID);
    }
    if (isAddEmbe) addNodeEmbedding(dict->getToken(crd->getNameAsString()), rootID);
  }
  else if (NamespaceAliasDecl* nad = dyn_cast<NamespaceAliasDecl>(decl)) {
    if (isAddEmbe) addNodeEmbedding(dict->getToken("namespace"), rootID);

    std::string nestedName = nad->getQualifier()->getAsNamespace()->getNameAsString();
    if (isAddEmbe) addNodeEmbedding(dict->getToken(nestedName), rootID);

    if (isAddEmbe) addNodeEmbedding(dict->getToken("="), rootID);

    std::string aliasName = nad->getAliasedNamespace()->getNameAsString();
    if (isAddEmbe) addNodeEmbedding(dict->getToken(aliasName), rootID);
  }
  else if (FunctionDecl* fd = dyn_cast<FunctionDecl>(decl)) {
    if (fd->isExternC()) {
      if (isAddEmbe) addNodeEmbedding(dict->getToken("extern"), rootID);
    }
    if (!fd->isNoReturn()) {
      if (isAddEmbe) addNodeEmbedding(dict->getToken(fd->getReturnType().getAsString()), rootID);
    }
    if (isAddEmbe) addNodeEmbedding(dict->getToken(fd->getNameAsString()), rootID);
    
    // Handle the params
    int paramsSize = fd->param_size();
    for (int i = 0; i < paramsSize; ++i) {
      handleDecl(fd->getParamDecl(i), rootID, edgeType::astEdge, operationType::defaultOperation, isAddEmbe);
    }

  }
  else if (LabelDecl* ld = dyn_cast<LabelDecl>(decl)) {
    handleStmt(ld->getStmt(), rootID, edgeType::astEdge, operType, isAddEmbe);
  }
  else {
    assert((et == edgeType::astEdge) && "ERROR: There is an error in handleDecl.");
    // std::cout<< "There is a decl can not analysis:"<<std::endl;
    // decl->dumpColor();
    // assert(0);
    if (isAddEmbe) addNodeEmbedding(sti.Decl, rootID);
    return rootID;
  }
  return -1;
}

void StmtPDG::analysisStmtString(int nodeID, std::string stmtString) {
  // split the stmtString
  stmtString = trim(stmtString);
  std::vector<std::string> splitRes1 = splitString(stmtString, " ");

  splitRes1 = splitStrings(splitRes1, ";");

  splitRes1 = splitStrings(splitRes1, "(");
  splitRes1 = splitStrings(splitRes1, ")");

  splitRes1 = splitStrings(splitRes1, "[");
  splitRes1 = splitStrings(splitRes1, "]");

  splitRes1 = splitStrings(splitRes1, "{");
  splitRes1 = splitStrings(splitRes1, "}");

  splitRes1 = splitStrings(splitRes1, "<");
  splitRes1 = splitStrings(splitRes1, ">");

  splitRes1 = splitStrings(splitRes1, ",");
  splitRes1 = splitStrings(splitRes1, ".");
  
  for (auto iter : splitRes1) {
    addNodeEmbedding(dict->getToken(iter), nodeID);
  }
}

std::vector<std::string> StmtPDG::splitStrings(std::vector<std::string> strings, std::string pattern) {
  std::vector<std::string> res1;

  for (auto iter1 : strings) {
    std::vector<std::string> res2 = splitString(iter1, pattern);
    for (auto iter2 : res2) {
      res1.push_back(iter2);
    }
  }
  return res1;
}

std::vector<std::string> StmtPDG::splitString(std::string stmtString, std::string pattern) {
  std::vector<std::string> res;
  if ("" == stmtString) return res;
  std::string str = stmtString + pattern;
  size_t pos = str.find(pattern);

  while(pos != str.npos) {
    std::string temp = str.substr(0, pos);
    res.push_back(temp);
    str = str.substr(pos + pattern.size(), str.size());
    pos = str.find(pattern);
  }
  return res;
}

std::string StmtPDG::trim(std::string s) {
  std::string result = s;
  result.erase(0, result.find_first_not_of(" \t\r\n"));
  result.erase(result.find_last_not_of(" \t\r\n") + 1);
  return result;
}

void StmtPDG::computeDataDependence() {
  for (int i = 0; i < nodeList.size(); ++i) {
    StmtPDGNode* currentNode = nodeList[i];
    auto currentReadVars = currentNode->getReadVars();
    auto currentGotoVars = currentNode->getGotoVars();

    if (currentReadVars.size() != 0) {
      auto currentNodeID = currentNode->getID();
      std::set<std::pair<int, int>> skipNode;
      for (auto n : ifElsePair) {
        auto p1 = n.first;
        auto p2 = n.second;
        if (currentNodeID >= p1.first && currentNodeID <= p1.second) {
          skipNode.insert(p2);
        }
        if (currentNodeID >= p2.first && currentNodeID <= p2.second) {
          skipNode.insert(p1);
        }
      }

      for (int j = i - 1; j >= 0; --j) {
        bool isSkip = false;
        if (skipNode.size() > 0) {
          for (auto iter : skipNode) {
            if (j >= iter.first && j <= iter.second) {
              isSkip = true;
            }
          }
        }
        if (isSkip) continue;
        StmtPDGNode* sourceNode = nodeList[j];
        auto sourceWriteVars = sourceNode->getWriteVars();
        auto sourceReadVars = sourceNode->getReadVars();
        auto sourceConditionalWriteVars = sourceNode->getConditionalWriteVars();

        bool isBreak = false;
        if (currentReadVars.size() > 0 && sourceWriteVars.size() > 0) {
          for (auto iter1 : currentReadVars) {
            for (auto iter2 : sourceWriteVars) {
              if (iter1 == iter2) {
                addDataDependenceEdge(sourceNode->getID(), currentNode->getID());
                isBreak = true;
              }
            }
          }
        }
        if (isBreak) break;
        if (currentReadVars.size() > 0 && sourceConditionalWriteVars.size() > 0) {
          for (auto iter1 : currentReadVars) {
            for (auto iter2 : sourceConditionalWriteVars) {
              if (iter1 == iter2) {
                addDataDependenceEdge(sourceNode->getID(), currentNode->getID());
              }
            }
          }
        }
      }
    }
    if (currentGotoVars.size() > 0) {
      for (int j = 0; j < nodeList.size(); ++j) {
        StmtPDGNode* sourceNode = nodeList[j];
        auto sourceWriteVars = sourceNode->getWriteVars();
        if (currentGotoVars.size() > 0 && sourceWriteVars.size() > 0) {
          for (auto iter1 : currentReadVars) {
            for (auto iter2 : sourceWriteVars) {
              if (iter1 == iter2) {
                addDataDependenceEdge(sourceNode->getID(), currentNode->getID());
              }
            }
          }
        }
      }
    }
  }
}

void PDG2TokenSequence::transform() {
  int i = 0;
  int funcNum = funcList.size();
  int failNum = 0;

  if(funcList.size() != filenames.size()){
    std::cout << "file has more than one function" << std::endl;
    return;
  }

  std::vector<b> temp;
  for(int i=0;i<funcList.size();i++){
    b newone;
    newone.func = funcList[i];
    newone.path = filenames[i];
    temp.push_back(newone);
  }

  for(int j=0;j<temp.size();j++) {
    try {
      StmtPDG *pdg = new StmtPDG(temp[j], dict);
    }
    catch(char const*){
      failNum++;
    }
    i++;
    common::process_bar(float(i) / funcNum);
  }
  std::cout<< "There are total " << std::to_string(funcNum) << " functions. " << std::to_string(failNum) << " of them construct pdg failed." << std::endl;
}
