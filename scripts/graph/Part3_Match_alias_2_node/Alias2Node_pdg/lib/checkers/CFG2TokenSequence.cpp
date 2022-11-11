#include "checkers/CFG2TokenSequence.h"

StmtCFGNode::StmtCFGNode(Stmt *stmt, int ID) {
  this->ID = ID;
  this->stmt = stmt;
  this->stmtString = common::getString_of_Stmt(stmt);
}

StmtCFGNode::StmtCFGNode(std::string stmt, int ID) {
  this->stmtString = stmt;
  this->ID = ID;
  this->stmt = nullptr;
}

Stmt* StmtCFGNode::getStmt() {
  return stmt;
}

std::string StmtCFGNode::getStmtString() {
  return stmtString;
}

int StmtCFGNode::getID() {
  return ID;
}

void StmtCFGNode::addWriteVars(int64_t id) {
  // std::cout<< std::to_string(getID()) <<" add write var " << std::to_string(id) <<std::endl;
  writeVars.insert(id);
}

void StmtCFGNode::addReadVars(int64_t id) {
  // std::cout<< std::to_string(getID()) <<" add read var " << std::to_string(id) <<std::endl;
  readVars.insert(id);
}

void StmtCFGNode::addConditionalWriteVars(int64_t id) {
  // std::cout<< std::to_string(getID()) <<" add conditional write var " << std::to_string(id) <<std::endl;
  conditionalWriteVars.insert(id);
}

void StmtCFGNode::addGotoVars(int64_t id) {
  // std::cout<< std::to_string(getID()) <<" add goto var " << std::to_string(id) <<std::endl;
  gotoVars.insert(id);
}

std::set<int64_t> StmtCFGNode::getWriteVars() {
  return writeVars;
}

std::set<int64_t> StmtCFGNode::getReadVars() {
  return readVars;
}

std::set<int64_t> StmtCFGNode::getConditionalWriteVars() {
  return conditionalWriteVars;
}
std::set<int64_t> StmtCFGNode::getGotoVars() {
  return gotoVars;
}

StmtCFG::StmtCFG(FunctionDecl* FD, WordDict *wd, alias_pair input_pair, SourceManager* manager) {
  def1 = -1;
  def2 = -1;

  totalNodeNum = 0;
  currentFD = FD;
  dict = wd;
  current_pair = input_pair;
  this->manager = manager;

  add_CFG_First_Stmts(FD);

  // Decl the function root node, include function params
  int currentRootID = totalNodeNum++;
  StmtCFGNode *rootNode = new StmtCFGNode(common::getFullName(FD), currentRootID);
  addNode(rootNode);
  addNodeEmbedding(sti.FunctionDecl, currentRootID);
  
  // Handle the return type
  std::string typeName = FD->getType().getAsString();
  int typeID = totalNodeNum++;
  StmtCFGNode *typeNode = new StmtCFGNode(typeName, typeID);
  addNode(typeNode);
  addEdges(currentRootID, typeID, edgeType::stmtEdge);
  addNodeEmbedding(dict->getToken(typeName), typeID);

  // Handle the func name
  std::string funcName = FD->getNameAsString();
  int nameID = totalNodeNum++;
  StmtCFGNode * nameNode = new StmtCFGNode(funcName, nameID);
  addNode(nameNode);
  addEdges(typeID, nameID, edgeType::stmtEdge);
  addNodeEmbedding(dict->getToken(funcName), nameID);

  // Handle the params
  int currentPrecID = nameID;
  int paramsSize = FD->param_size();
  for (int i = 0; i < paramsSize; ++i) {
    currentPrecID = handleDecl(FD->getParamDecl(i), currentPrecID, edgeType::stmtEdge, operationType::defaultOperation);
  }

  // Traverse the function body
  auto *FDBody = FD->getBody();
  if (nullptr == FDBody) return;
  for (auto bodyIter = FDBody->child_begin(); bodyIter != FDBody->child_end(); ++bodyIter) {
    Stmt* currentStmt = *bodyIter;
    handleStmt(currentStmt, currentRootID, edgeType::controlDependenceEdge, operationType::defaultOperation);
  }

  computeCFG(FD);
  //computeDataDependence();

  json result = dumpJson();
  if(result != nullptr){
    cfgts_transform_suc = true;
    if(input_pair.llvm_true) {
      int kind = input_pair.alias1.alias_type;
      if(aliasType2Json_c2t.find(kind) == aliasType2Json_c2t.end()) {
        aliasType2Json_c2t.emplace(kind, json::array());
        aliasType2Json_c2t[kind].push_back(result);
      }
      else {
        aliasType2Json_c2t[kind].push_back(result);
      }
    }
    else {
      nonAlias_c2t.push_back(result);
    }
  }
}

void StmtCFG::addNode(StmtCFGNode* node) {
  nodeList.push_back(node);
  if (nodeList.size() != node->getID() + 1) {
    for (auto n : nodeList) {
      std::cout<<"ID: " << std::to_string(n->getID()) << " Stmt:" << std::endl;
      std::cout << n->getStmtString() << std::endl;
    }
  }
  // assert((nodeList.size() == node->getID() + 1) && "ERROR: node ID not euqals to node location.");
  if (nodeList.size() != node->getID() + 1)
    throw "ERROR: node ID not euqals to node location.";
}

void StmtCFG::addNodeEmbedding(int token, int nodeID) {
  nodeEmbedding.push_back(token);
  if (nodeEmbedding.size() != nodeID + 1) {
    throw "ERROR: node ID not euqals to token location.";
    std::cout << "nodeID: " << std::to_string(nodeID) << ", embedding size: " << std::to_string(nodeEmbedding.size()) << std::endl;
    for (auto n : nodeList) {
      std::cout<<"ID: " << std::to_string(n->getID()) << " Stmt:" << std::endl;
      std::cout << n->getStmtString() << std::endl;
      if (nullptr != n->getStmt()) {
        std::cout << n->getStmt()->getStmtClassName() <<std::endl;
      }
    }
    std::cout<<"The graph embedding: " << std::endl << "[";
    for (auto n : nodeEmbedding) {
      std::cout<<std::to_string(n)<<", ";
    }
    std::cout<<"]"<<std::endl;
    std::cout<<"Node ID is " << std::to_string(nodeID)<<std::endl;
    // assert((nodeEmbedding.size() == nodeID + 1) && "ERROR: node ID not euqals to token location.");
  }
}

void StmtCFG::addControlDependenceEdge(int firstID, int secondID) {
  if (controlDependenceEdges.find(firstID) != controlDependenceEdges.end())
    controlDependenceEdges[firstID].insert(secondID);
  else {
    std::set<int> dest;
    dest.insert(secondID);
    controlDependenceEdges[firstID] = dest;
  }
}

void StmtCFG::addDataDependenceEdge(int firstID, int secondID) {
  if (dataDependenceEdges.find(firstID) != dataDependenceEdges.end())
    dataDependenceEdges[firstID].insert(secondID);
  else {
    std::set<int> dest;
    dest.insert(secondID);
    dataDependenceEdges[firstID] = dest;
  }
}

void StmtCFG::addStmtEdge(int firstID, int secondID) {
  if (stmtEdges.find(firstID) != stmtEdges.end())
    stmtEdges[firstID].insert(secondID);
  else {
    std::set<int> dest;
    dest.insert(secondID);
    stmtEdges[firstID] = dest;
  }
}

void StmtCFG::addBasicBlockEdge(int firstID, int secondID){
  if (stmtEdges.find(firstID) != stmtEdges.end())
    basicBlockEdges[firstID].insert(secondID);
  else {
    std::set<int> dest;
    dest.insert(secondID);
    basicBlockEdges[firstID] = dest;
  }
}

void StmtCFG::addEdges(int firstID, int secondID, edgeType t) {
  if(firstID >= nodeList.size() || secondID >= nodeList.size()){
    std::cout << "firstID/secondID segmantation fault" << std::endl;
    return;
  }
  switch (t) {
    case edgeType::controlDependenceEdge:
      addControlDependenceEdge(firstID, secondID);
      break;
    case edgeType::dataDependenceEdge:
      addDataDependenceEdge(firstID, secondID);
      break;
    case edgeType::stmtEdge:
      addStmtEdge(firstID, secondID);
      break;
    case edgeType::BasicBlockEdge:
      addBasicBlockEdge(firstID, secondID);
      break;
    default:
      assert(false && "ERROR: edge type wrong!");
      break;
  }
}

void StmtCFG::printGraph() {
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
    std::cout<<std::to_string(n)<<", ";
  }
  std::cout<<"]"<<std::endl;
}

void StmtCFG::dumpDot() {
  std::ofstream fout;
  fout.open("./pdg_ast.dot", std::ios::out);
  if (!fout) return;

  fout << "digraph pdg {\n";

  // graph nodes
  fout << "  // graph nodes\n";
  for (auto n : nodeList) {
    std::string stmt = n->getStmtString();
    stmt = common::string_replace_all(stmt, "\n", "\\l");
    stmt = common::string_replace_all(stmt, "\"", "\\\"");
    fout << "  v" << std::to_string(n->getID()) << " [label=\"" << std::to_string(n->getID()) << ":\\ltoken: " << std::to_string(nodeEmbedding[n->getID()]) << "\\l" << stmt << "\"];\n";
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
  for (auto ae : stmtEdges) {
    for (auto n : ae.second) {
      fout << "  v" << std::to_string(ae.first) << " -> v" << std::to_string(n) <<" [style=dotted];\n";
    }
  }

  fout << "}\n";
  fout.flush();
  fout.close();
}

json StmtCFG::dumpJson() {
  json root;
  
  json edges = json::array();
  // stmt edge token: 1
  for (auto e : stmtEdges) {
    for (auto dest : e.second ) {
      json edge = json::array();
      edge.push_back(e.first);
      edge.push_back(1);
      edge.push_back(dest);
      edges.push_back(edge);
    }
  }

  for (auto e : basicBlockEdges) {
    for (auto dest : e.second ) {
      json edge = json::array();
      edge.push_back(e.first);
      edge.push_back(2);
      edge.push_back(dest);
      edges.push_back(edge);
    }
  }
  root["graph"] = edges;

  json node_features = json::array();
  for (auto n : nodeEmbedding) {
    node_features.push_back(n);
  }
  root["node_features"] = node_features;
  

  std::string funcName = common::getFullName(currentFD);
  funcName = common::string_replace_all(funcName, " ", "_");
  root["projName"] = funcName;

  if(def1 == -1 || def2 == -1 || use1.empty() || use2.empty()) return nullptr;

  json use_list1 = json::array();
  json use_list2 = json::array();
  for(std::pair<int,int> tmp_pair : use1){
    use_list1.push_back(tmp_pair.second);
  }
  for(std::pair<int,int> tmp_pair : use2){
    use_list2.push_back(tmp_pair.second);
  }
  root["var1_def"] = def1;
  root["var1_use"] = use_list1;
  root["var2_def"] = def2;
  root["var2_use"] = use_list2;
  int label = current_pair.llvm_true?1:0;
  root["label"] = label;

  return root;
}

int StmtCFG::handleStmt(Stmt* stmt, int rootID, edgeType et, operationType operType) {
  if (nullptr == stmt) return rootID;

  int start = manager->getSpellingLineNumber(stmt->getBeginLoc());
  int end = manager->getSpellingLineNumber(stmt->getEndLoc());
  if(start <= current_pair.alias1.def_point && end >= current_pair.alias1.def_point) def1 = totalNodeNum+1;
  if(start <= current_pair.alias2.def_point && end >= current_pair.alias2.def_point) def2 = totalNodeNum+1;
  for(int i=0;i<current_pair.alias1.use_points.size();i++){
    if(start <= current_pair.alias1.use_points[i] && end >= current_pair.alias1.use_points[i])
      use1[current_pair.alias1.use_points[i]] = totalNodeNum+1;
  }
  for(int i=0;i<current_pair.alias2.use_points.size();i++){
    if(start <= current_pair.alias2.use_points[i] && end >= current_pair.alias2.use_points[i])
      use2[current_pair.alias2.use_points[i]] = totalNodeNum+1;
  }

  if(first_stmts.count(stmt) != 0){
    Stmt2FirstToken.insert(std::make_pair(stmt, nodeList.size()));
  }

  // This code used to ignore ImplicitCast
  if (stmt->getStmtClass() == Stmt::ImplicitCastExprClass) {
    ImplicitCastExpr *ice = cast<ImplicitCastExpr>(stmt);
    return handleStmt(ice->getSubExpr(), rootID, et, operType);
  }

  // This code used to ignore CompoundStmt
  if (stmt->getStmtClass() == Stmt::CompoundStmtClass) {
    clang::CompoundStmt* cs = cast<clang::CompoundStmt>(stmt);
    int precID = rootID;
    if (et == edgeType::controlDependenceEdge) {
      for (auto csIter = cs->body_begin(); csIter != cs->body_end(); ++csIter) {
        Stmt *childStmt = *csIter;
        precID = handleStmt(childStmt, rootID, et, operType);
      }
    }
    else {
      for (auto csIter = cs->body_begin(); csIter != cs->body_end(); ++csIter) {
        Stmt *childStmt = *csIter;
        precID = handleStmt(childStmt, precID, et, operType);
      }
    }
    return precID;
  }

  // This code used to ignore StmtExpr
  if (stmt->getStmtClass() == Stmt::StmtExprClass) {
    clang::StmtExpr* se = cast<clang::StmtExpr>(stmt);
    return handleStmt(se->getSubStmt(), rootID, et, operType);
  }

  // ignore ParenExpr
  if (stmt->getStmtClass() == Stmt::ParenExprClass) {
    clang::ParenExpr* pe = cast<clang::ParenExpr>(stmt);
    handleStmt(pe->getSubExpr(), rootID, et, operType);
    return totalNodeNum - 1;
  }

  // ignore ParenListExpr
  if (stmt->getStmtClass() == Stmt::ParenListExprClass) {
    clang::ParenListExpr* ple = cast<clang::ParenListExpr>(stmt);

    unsigned argIter = 0;
    int precID = rootID;
    while (argIter < ple->getNumExprs()) {
      precID = handleStmt(ple->getExpr(argIter), precID, edgeType::stmtEdge, operType);
      argIter++;
    }
    return totalNodeNum - 1;
  }

  // ignore PredefinedExpr
  if (stmt->getStmtClass() ==  Stmt::PredefinedExprClass) {
    PredefinedExpr* pe = cast<PredefinedExpr>(stmt);
    handleStmt(pe->getFunctionName(), rootID, edgeType::stmtEdge, operType);
    return totalNodeNum - 1;
  }

  // handle StringLiteral
  if (stmt->getStmtClass() ==  Stmt::StringLiteralClass) {
    clang::StringLiteral* sl = cast<clang::StringLiteral>(stmt);
    std::string stringInfo;
    try {
      stringInfo = sl->getString().str();
    }
    catch (std::exception) {
      stringInfo = "std::string";
    }
    std::vector<std::string> wordInfo = splitString(stringInfo, " ");
    int precID = rootID;
    for (auto w : wordInfo) {
      int valueID = totalNodeNum++;
      StmtCFGNode *valueNode = new StmtCFGNode(w, valueID);
      addNode(valueNode);
      addEdges(precID, valueID, edgeType::stmtEdge);
      addNodeEmbedding(dict->getToken(w), valueID);
      precID = valueID;
    }
    return totalNodeNum - 1;
  }

  if(stmt->getStmtClass() == Stmt::MemberExprClass) {
    // addNodeEmbedding(sti.MemberExpr, currentID);
    clang::MemberExpr* me = cast<clang::MemberExpr>(stmt);

    int baseID = handleStmt(me->getBase(), rootID, edgeType::stmtEdge, operType);

    std::string memberName = me->getMemberDecl()->getNameAsString();
    int memberID = totalNodeNum++;
    StmtCFGNode *memberNode = new StmtCFGNode(memberName, memberID);
    addNode(memberNode);
    addEdges(baseID, memberID, edgeType::stmtEdge);
    addNodeEmbedding(dict->getToken(memberName), memberID);

    if (operType == operationType::write) {
      memberNode->addWriteVars(me->getMemberDecl()->getGlobalID());
    }
    else if (operType == operationType::conditionalWrite) {
      memberNode->addConditionalWriteVars(me->getMemberDecl()->getGlobalID());
    }
    else if (operType == operationType::readAndWrite) {
      memberNode->addReadVars(me->getMemberDecl()->getGlobalID());
      memberNode->addWriteVars(me->getMemberDecl()->getGlobalID());
    }
    else if (operType == operationType::readAndConditionalWrite) {
      memberNode->addReadVars(me->getMemberDecl()->getGlobalID());
      memberNode->addConditionalWriteVars(me->getMemberDecl()->getGlobalID());
    }
    else {
      memberNode->addReadVars(me->getMemberDecl()->getGlobalID());
    }
      
    return totalNodeNum - 1;
  }

  if (stmt->getStmtClass() == Stmt::CXXMemberCallExprClass) {
    // addNodeEmbedding(sti.CXXMemberCallExpr, currentID);
    CXXMemberCallExpr* ce = cast<CXXMemberCallExpr>(stmt);
    
    int objID = handleStmt(ce->getImplicitObjectArgument(), rootID, edgeType::stmtEdge, operationType::read);
    int calleeID = handleStmt(ce->getCallee(), objID, edgeType::stmtEdge, operationType::read);

    int argIdx = 0;
    int precID = calleeID;
    while(argIdx < ce->getNumArgs()) {
      precID = handleStmt(ce->getArg(argIdx), precID, edgeType::stmtEdge, operationType::read);
      argIdx++;
    }

    return totalNodeNum - 1;
  }

  int currentID = totalNodeNum++;
  StmtCFGNode *currentNode = new StmtCFGNode(stmt, currentID);
  addNode(currentNode);
  addEdges(rootID, currentID, et);

  switch(stmt->getStmtClass()) {
    case Stmt::CaseStmtClass: {
      addNodeEmbedding(sti.CaseStmt, currentID);
      CaseStmt* casestmt = cast<CaseStmt>(stmt);
      handleStmt(casestmt->getLHS(), currentID, edgeType::stmtEdge, operType);
      handleStmt(casestmt->getSubStmt(), currentID, et, operationType::inBranch);
      return totalNodeNum - 1;
      break;
    }

    // case Stmt::CompoundStmtClass: {
    //   clang::CompoundStmt* cs = cast<clang::CompoundStmt>(stmt);
    //   for (auto csIter = cs->body_begin(); csIter != cs->body_end(); ++csIter) {
    //     Stmt *childStmt = *csIter;
    //     handleStmt(childStmt, currentID, edgeType::controlDependenceEdge, operType);
    //   }
    //   break;
    // }

    case Stmt::CXXTryStmtClass: {
      addNodeEmbedding(sti.CXXTryStmt, currentID);
      CXXTryStmt* cts = cast<CXXTryStmt>(stmt);
      handleStmt(cts->getTryBlock(), currentID, edgeType::controlDependenceEdge, operationType::inBranch);
      int catchIdx = 0;
      while(catchIdx < cts->getNumHandlers()) {
        handleStmt(cts->getHandler(catchIdx), currentID, edgeType::controlDependenceEdge, operationType::inBranch);
        catchIdx++;
      }
      return totalNodeNum - 1;
      break;
    }

    case Stmt::CXXForRangeStmtClass: {
      addNodeEmbedding(sti.CXXForRangeStmt, currentID);
      CXXForRangeStmt* cfrs = cast<CXXForRangeStmt>(stmt);
      
      std::string typeName = cfrs->getLoopVariable()->getType().getAsString();
      int typeID = totalNodeNum++;
      StmtCFGNode* typeNode = new StmtCFGNode(typeName, typeID);
      addNode(typeNode);
      addEdges(currentID, typeID, edgeType::stmtEdge);
      addNodeEmbedding(dict->getToken(typeName), typeID);

      std::string loopVarName = cfrs->getLoopVariable()->getNameAsString();
      int loopVarID = totalNodeNum++;
      StmtCFGNode* loopVarNode = new StmtCFGNode(loopVarName, loopVarID);
      addNode(loopVarNode);
      addEdges(typeID, loopVarID, edgeType::stmtEdge);
      addNodeEmbedding(dict->getToken(loopVarName), loopVarID);
      loopVarNode->addWriteVars(cfrs->getLoopVariable()->getGlobalID());

      if (VarDecl* vd = dyn_cast<VarDecl>(cfrs->getRangeStmt()->getSingleDecl())) {
        handleStmt(vd->getInit(), loopVarID, edgeType::stmtEdge, operationType::read);
      }
            
      handleStmt(cfrs->getBody(), currentID, et, operationType::inBranch);

      return totalNodeNum - 1;
      break;
    }

    case Stmt::DoStmtClass: {
      addNodeEmbedding(sti.DoStmt, currentID);
      DoStmt* ds = cast<DoStmt>(stmt);
      handleStmt(ds->getCond(), currentID, edgeType::stmtEdge, operType);
      handleStmt(ds->getBody(), currentID, et, operationType::inBranch);
      
      return totalNodeNum - 1;
      break;
    }

    case Stmt::ForStmtClass: {
      addNodeEmbedding(sti.ForStmt, currentID);
      clang::ForStmt* fs = cast<clang::ForStmt>(stmt);

      int initID = handleStmt(fs->getInit(), currentID, edgeType::stmtEdge, operationType::defaultOperation);
      int condID = handleStmt(fs->getCond(), initID, edgeType::stmtEdge, operationType::defaultOperation);
      int incID = handleStmt(fs->getInc(), condID, edgeType::stmtEdge, operationType::defaultOperation);

      handleStmt(fs->getBody(), currentID, et, operationType::inBranch);
      
      return totalNodeNum - 1;
      break;
    }

    case Stmt::IfStmtClass: {
      addNodeEmbedding(sti.IfStmt, currentID);
      IfStmt* is = cast<IfStmt>(stmt);

      handleStmt(is->getCond(), currentID, edgeType::stmtEdge, operType);

      int ifBegin = -1, elseBegin = -1, ifEnd = -1, elseEnd = -1;
      if (nullptr != is->getThen()) {
        if (et == edgeType::controlDependenceEdge) {
          int thenID = totalNodeNum++;
          StmtCFGNode *thenNode = new StmtCFGNode("THEN", thenID);
          addNode(thenNode);
          addEdges(currentID, thenID, edgeType::controlDependenceEdge);
          addNodeEmbedding(sti.Then, thenID);
          ifBegin = handleStmt(is->getThen(), thenID, et, operationType::inBranch);
        }
        else
          ifBegin = handleStmt(is->getThen(), currentID, et, operationType::inBranch);
      }
      if (ifBegin != -1) ifEnd = totalNodeNum - 1;
      
      if (nullptr != is->getElse()) {
        if (et == edgeType::controlDependenceEdge) {
          int elseID = totalNodeNum++;
          StmtCFGNode *elseNode = new StmtCFGNode("ELSE", elseID);
          addNode(elseNode);
          addEdges(currentID, elseID, edgeType::controlDependenceEdge);
          addNodeEmbedding(sti.Else, elseID);
          elseBegin = handleStmt(is->getElse(), elseID, et, operationType::inBranch);
        }
        else
          elseBegin = handleStmt(is->getElse(), currentID, et, operationType::inBranch);
      }
      if (elseBegin != -1) elseEnd = totalNodeNum - 1;
      if (ifBegin != -1 && ifEnd != -1 && elseBegin != -1 && elseEnd != -1) {
        std::pair<int, int> p1(ifBegin, ifEnd);
        std::pair<int, int> p2(elseBegin, elseEnd);
        ifElsePair[p1] = p2;
      }

      return totalNodeNum - 1;
      break;
    }

    case Stmt::ObjCAtTryStmtClass: {
      addNodeEmbedding(sti.ObjCAtTryStmt, currentID);
      ObjCAtTryStmt* ocats = cast<ObjCAtTryStmt>(stmt);
      handleStmt(ocats->getTryBody(), currentID, edgeType::controlDependenceEdge, operationType::inBranch);

      return totalNodeNum - 1;
      break;
    }

    case Stmt::ObjCForCollectionStmtClass: {
      addNodeEmbedding(sti.ObjCForCollectionStmt, currentID);
      ObjCForCollectionStmt* ocfcs = cast<ObjCForCollectionStmt>(stmt);
      handleStmt(ocfcs->getBody(), currentID, edgeType::controlDependenceEdge, operationType::inBranch);

      return totalNodeNum - 1;
      break;
    }

    case Stmt::SEHFinallyStmtClass: {
      addNodeEmbedding(sti.SEHFinallyStmt, currentID);
      SEHFinallyStmt* sfs = cast<SEHFinallyStmt>(stmt);
      handleStmt(sfs->getBlock(), currentID, edgeType::controlDependenceEdge, operationType::inBranch);
      return totalNodeNum - 1;
      break;
    }

    case Stmt::SEHTryStmtClass: {
      addNodeEmbedding(sti.SEHTryStmt, currentID);
      SEHTryStmt* sts = cast<SEHTryStmt>(stmt);
      handleStmt(sts->getTryBlock(), currentID, edgeType::controlDependenceEdge, operationType::inBranch);
      
      return totalNodeNum - 1;
      break;
    }

    case Stmt::SwitchStmtClass: {
      addNodeEmbedding(sti.SwitchStmt, currentID);
      SwitchStmt* ss = cast<SwitchStmt>(stmt);
      handleStmt(ss->getCond(), currentID, edgeType::stmtEdge, operType);
      handleStmt(ss->getBody(), currentID, et, operationType::inBranch);
      
      return totalNodeNum - 1;
      break;
    }

    case Stmt::WhileStmtClass: {
      addNodeEmbedding(sti.WhileStmt, currentID);
      WhileStmt* ws = cast<WhileStmt>(stmt);
      handleStmt(ws->getCond(), currentID, edgeType::stmtEdge, operType);
      handleStmt(ws->getBody(), currentID, et, operationType::inBranch);

      return totalNodeNum - 1;
      break;
    }

    case Stmt::AddrLabelExprClass: {          // used for goto stmt
      addNodeEmbedding(sti.AddrLabelExpr, currentID);
      break;
    }

    case Stmt::BinaryConditionalOperatorClass: {
      addNodeEmbedding(sti.BinaryConditionalOperator, currentID);
      BinaryConditionalOperator* bco = cast<BinaryConditionalOperator>(stmt);
      int condID = handleStmt(bco->getCond(), currentID, edgeType::stmtEdge, operationType::read);
      int trueID = handleStmt(bco->getTrueExpr(), condID, edgeType::stmtEdge, operationType::inBranch);
      int falseID = handleStmt(bco->getFalseExpr(), trueID, edgeType::stmtEdge, operationType::inBranch);
      
      return totalNodeNum - 1;
      break;
    }

    case Stmt::BinaryOperatorClass: {
      addNodeEmbedding(sti.BinaryOperator, currentID);
      BinaryOperator* bo = cast<BinaryOperator>(stmt);

      std::string opcodeName = bo->getOpcodeStr().str();

      auto opcode = bo->getOpcode();
      int LHSID = currentID;
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
            LHSID = handleStmt(bo->getLHS(), currentID, edgeType::stmtEdge, operationType::readAndConditionalWrite);
          else
            LHSID = handleStmt(bo->getLHS(), currentID, edgeType::stmtEdge, operationType::readAndWrite);
        }
      else
        LHSID = handleStmt(bo->getLHS(), currentID, edgeType::stmtEdge, operationType::read);

      int opcodeID = totalNodeNum++;
      StmtCFGNode* opcodeNode = new StmtCFGNode(opcodeName, opcodeID);
      addNode(opcodeNode);
      addEdges(LHSID, opcodeID, edgeType::stmtEdge);
      addNodeEmbedding(dict->getToken(opcodeName), opcodeID);

      handleStmt(bo->getRHS(), opcodeID, edgeType::stmtEdge, operationType::read);

      return totalNodeNum - 1;
      break;
    }

    case Stmt::BlockExprClass:
      addNodeEmbedding(sti.BlockExpr, currentID);
      return totalNodeNum - 1;
      break;
      
    case Stmt::BreakStmtClass:
      addNodeEmbedding(sti.BreakStmt, currentID);
      return totalNodeNum - 1;
      break;
      
    case Stmt::CallExprClass: {
      addNodeEmbedding(sti.CallExpr, currentID);
      clang::CallExpr* ce = cast<clang::CallExpr>(stmt);

      int calleeID = handleStmt(ce->getCallee(), currentID, edgeType::stmtEdge, operationType::read);

      int argIdx = 0;
      int precID = calleeID;
      while(argIdx < ce->getNumArgs()) {
        precID = handleStmt(ce->getArg(argIdx), precID, edgeType::stmtEdge, operationType::read);
        argIdx++;
      }

      return totalNodeNum - 1;
      break;
    }
      
    case Stmt::CXXOperatorCallExprClass: {
      addNodeEmbedding(sti.CXXOperatorCallExpr, currentID);
      CXXOperatorCallExpr* ce = cast<CXXOperatorCallExpr>(stmt);
      
      int calleeID = handleStmt(ce->getCallee(), currentID, edgeType::stmtEdge, operationType::read);

      int argIdx = 0;
      int precID = calleeID;
      while(argIdx < ce->getNumArgs()) {
        precID = handleStmt(ce->getArg(argIdx), precID, edgeType::stmtEdge, operationType::read);
        argIdx++;
      }

      return totalNodeNum - 1;
      break;
    }
      
    // case Stmt::CXXMemberCallExprClass: {
    //   addNodeEmbedding(sti.CXXMemberCallExpr, currentID);
    //   CXXMemberCallExpr* ce = cast<CXXMemberCallExpr>(stmt);
      
    //   int objID = handleStmt(ce->getImplicitObjectArgument(), currentID, edgeType::stmtEdge, operationType::read);
    //   int calleeID = handleStmt(ce->getCallee(), objID, edgeType::stmtEdge, operationType::read);

    //   int argIdx = 0;
    //   int precID = calleeID;
    //   while(argIdx < ce->getNumArgs()) {
    //     precID = handleStmt(ce->getArg(argIdx), precID, edgeType::stmtEdge, operationType::read);
    //     argIdx++;
    //   }

    //   return totalNodeNum - 1;
    //   break;
    // }
      
    case Stmt::UserDefinedLiteralClass: {
      addNodeEmbedding(sti.UserDefinedLiteral, currentID);
      UserDefinedLiteral* udl = cast<UserDefinedLiteral>(stmt);

      int calleeID = handleStmt(udl->getCallee(), currentID, edgeType::stmtEdge, operationType::read);

      int argIdx = 0;
      int precID = calleeID;
      while(argIdx < udl->getNumArgs()) {
        precID = handleStmt(udl->getArg(argIdx), precID, edgeType::stmtEdge, operationType::read);
        argIdx++;
      }

      return totalNodeNum - 1;
      break;
    }
      
    case Stmt::ChooseExprClass: {
      addNodeEmbedding(sti.ChooseExpr, currentID);
      ChooseExpr* ce = cast<ChooseExpr>(stmt);
      int condID = handleStmt(ce->getCond(), currentID, edgeType::stmtEdge, operType);
      int LHSID = handleStmt(ce->getLHS(), condID, edgeType::stmtEdge, operationType::inBranch);
      int RHSID = handleStmt(ce->getRHS(), currentID, edgeType::stmtEdge, operationType::inBranch);
      
      return totalNodeNum - 1;
      break;
    }
      
    case Stmt::ConditionalOperatorClass: {
      addNodeEmbedding(sti.ConditionalOperator, currentID);
      ConditionalOperator* co = cast<ConditionalOperator>(stmt);
      int condID = handleStmt(co->getCond(), currentID, edgeType::stmtEdge, operType);
      int trueID = handleStmt(co->getTrueExpr(), condID, edgeType::stmtEdge, operationType::inBranch);
      int falseID = handleStmt(co->getFalseExpr(), trueID, edgeType::stmtEdge, operationType::inBranch);

      return totalNodeNum - 1;
      break;
    }
      
    case Stmt::ContinueStmtClass:
      addNodeEmbedding(sti.ContinueStmt, currentID);
      return totalNodeNum - 1;
      break;
      
    case Stmt::CXXCatchStmtClass: {
      addNodeEmbedding(sti.CXXCatchStmt, currentID);
      CXXCatchStmt* ccs = cast<CXXCatchStmt>(stmt);

      int precID = currentID;
      if (nullptr != ccs->getExceptionDecl()) {
        VarDecl* exceptionDecl = ccs->getExceptionDecl();
        
        int exceptionDeclID = totalNodeNum++;
        std::string declTypeName = exceptionDecl->getType().getAsString();
        StmtCFGNode *excetionDeclNode = new StmtCFGNode(declTypeName, exceptionDeclID);
        addNode(excetionDeclNode);
        addEdges(precID, exceptionDeclID, edgeType::stmtEdge);
        addNodeEmbedding(dict->getToken(declTypeName), exceptionDeclID);

        int exceptionVarNodeID = totalNodeNum++;
        StmtCFGNode *excetionVarNode = new StmtCFGNode(exceptionDecl->getNameAsString(), exceptionVarNodeID);
        addNode(excetionVarNode);
        addEdges(exceptionDeclID, exceptionVarNodeID, edgeType::stmtEdge);
        addNodeEmbedding(dict->getToken(exceptionDecl->getNameAsString()), exceptionVarNodeID);
        excetionVarNode->addWriteVars(exceptionDecl->getGlobalID());
        precID = exceptionVarNodeID;

        excetionVarNode->addWriteVars(exceptionDecl->getGlobalID());
      }

      handleStmt(ccs->getHandlerBlock(), precID, edgeType::controlDependenceEdge, operationType::inBranch);
      
      return totalNodeNum - 1;
      break;
    }
      
    case Stmt::ExprWithCleanupsClass:
      addNodeEmbedding(sti.ExprWithCleanups, currentID);

      return totalNodeNum - 1;
      break;
      
    case Stmt::CXXDefaultArgExprClass: {
      addNodeEmbedding(sti.CXXDefaultArgExpr, currentID);
      CXXDefaultArgExpr* cdae = cast<CXXDefaultArgExpr>(stmt);
      handleStmt(cdae->getExpr(), currentID, edgeType::stmtEdge, operType);
      break;
    }
      
    case Stmt::CXXDefaultInitExprClass: {
      addNodeEmbedding(sti.CXXDefaultInitExpr, currentID);
      CXXDefaultInitExpr* cdie = cast<CXXDefaultInitExpr>(stmt);
      handleStmt(cdie->getExpr(), currentID, edgeType::stmtEdge, operType);
      break;
    }
      
    case Stmt::CXXBindTemporaryExprClass: {
      addNodeEmbedding(sti.CXXBindTemporaryExpr, currentID);
      CXXBindTemporaryExpr* cbte = cast<CXXBindTemporaryExpr>(stmt);
      handleStmt(cbte->getSubExpr(), currentID, edgeType::stmtEdge, operType);
      break;
    }
      
    case Stmt::CXXConstructExprClass: {
      // addNodeEmbedding(sti.CXXConstructExpr, currentID);
      CXXConstructExpr* cce = cast<CXXConstructExpr>(stmt);
      std::string constructorName = cce->getConstructor()->getNameAsString();
      addNodeEmbedding(dict->getToken(constructorName), currentID);

      int precID = currentID;
      int argIdx = 0;
      while(argIdx < cce->getNumArgs()) {
        precID = handleStmt(cce->getArg(argIdx), precID, edgeType::stmtEdge, operType);
        argIdx++;
      }

      return totalNodeNum - 1;
      break;
    }
      
    case Stmt::CXXNewExprClass: {
      addNodeEmbedding(sti.CXXNewExpr, currentID);
      CXXNewExpr* cne = cast<CXXNewExpr>(stmt);
      handleStmt(const_cast<CXXConstructExpr*>(cne->getConstructExpr()), currentID, edgeType::stmtEdge, operType);
      
      return totalNodeNum - 1;
      break;
    }
      
    case Stmt::CXXDeleteExprClass: {
      addNodeEmbedding(sti.CXXDeleteExpr, currentID);
      CXXDeleteExpr* cde = cast<CXXDeleteExpr>(stmt);
      handleStmt(cde->getArgument(), currentID, edgeType::stmtEdge, operType);

      return totalNodeNum - 1;
      break;
    }
      
    case Stmt::CXXFunctionalCastExprClass: {
      addNodeEmbedding(sti.CXXFunctionalCastExpr, currentID);
      CXXFunctionalCastExpr* cfce = cast<CXXFunctionalCastExpr>(stmt);
      handleStmt(cfce->getSubExpr(), currentID, edgeType::stmtEdge, operType);

      return totalNodeNum -1;
      break;
    }
      
    case Stmt::CXXTemporaryObjectExprClass: {
      addNodeEmbedding(sti.CXXTemporaryObjectExpr, currentID);
      CXXTemporaryObjectExpr* ctoe = cast<CXXTemporaryObjectExpr>(stmt);
      int argIdx = 0;
      int precID = currentID;
      while(argIdx < ctoe->getNumArgs()) {
        precID = handleStmt(ctoe->getArg(argIdx), precID, edgeType::stmtEdge, operType);
        argIdx++;
      }

      return totalNodeNum - 1;
      break;
    }
      
    case Stmt::CXXThrowExprClass: {
      addNodeEmbedding(sti.CXXThrowExpr, currentID);
      CXXThrowExpr* cte = cast<CXXThrowExpr>(stmt);
      handleStmt(cte->getSubExpr(), currentID, edgeType::stmtEdge, operType);
      
      return totalNodeNum - 1;
      break;
    }
      
    case Stmt::DeclStmtClass: {
      addNodeEmbedding(sti.DeclStmt, currentID);
      DeclStmt* ds = cast<DeclStmt>(stmt);
      // std::string declString = common::getString_of_Stmt(stmt);
      // analysisStmtString(currentID, declString);

      if (ds->isSingleDecl()) {
        Decl* decl = ds->getSingleDecl();
        handleDecl(decl, currentID, edgeType::stmtEdge, operType);
      }
      else {
        auto declGroup = ds->getDeclGroup();
        int precID = currentID;
        for (auto groupIter = declGroup.begin(); groupIter != declGroup.end(); ++groupIter) {
          if (Decl* d = dyn_cast<Decl>(*groupIter)) {
            // nodeList[currentID]->addWriteVars(vd->getGlobalID());
            // handleStmt(vd->getInit(), currentID, edgeType::stmtEdge, operType);
            precID = handleDecl(d, precID, edgeType::stmtEdge, operType);
          }
        }
      }

      return totalNodeNum - 1;
      break;
    }
      
    case Stmt::DefaultStmtClass: {
      addNodeEmbedding(sti.DefaultStmt, currentID);
      DefaultStmt* defaultstmt = cast<DefaultStmt>(stmt);
      handleStmt(defaultstmt->getSubStmt(), currentID, et, operationType::inBranch);
      
      return totalNodeNum - 1;
      break;
    }
      
    case Stmt::GotoStmtClass: {
      addNodeEmbedding(sti.GotoStmt, currentID);

      GotoStmt* gs = cast<GotoStmt>(stmt);
      std::string gotoLabel = gs->getLabel()->getNameAsString();
      int gotoLabelID = totalNodeNum++;
      StmtCFGNode *gotoLabelNode = new StmtCFGNode(gotoLabel, gotoLabelID);
      addNode(gotoLabelNode);
      addEdges(currentID, gotoLabelID, edgeType::stmtEdge);
      addNodeEmbedding(dict->getToken(gotoLabel), gotoLabelID);
      gotoLabelNode->addGotoVars(gs->getLabel()->getGlobalID());

      return totalNodeNum - 1;
      break;
    }
      
    case Stmt::GCCAsmStmtClass: {
      addNodeEmbedding(sti.GCCAsmStmt, currentID);

      return totalNodeNum - 1;
      break;
    }
      
    // case Stmt::ImplicitCastExprClass: {
    //   ImplicitCastExpr* ice = cast<ImplicitCastExpr>(stmt);
    //   handleStmt(ice->getSubExpr(), currentID, edgeType::stmtEdge, operType);
    //   break;
    // }
      
    case Stmt::ConstantExprClass: {
      addNodeEmbedding(sti.ConstantExpr, currentID);
      break;
    }
      
    case Stmt::IndirectGotoStmtClass: {
      addNodeEmbedding(sti.IndirectGotoStmt, currentID);
      IndirectGotoStmt* igs = cast<IndirectGotoStmt>(stmt);
      handleStmt(igs->getTarget(), currentID, edgeType::stmtEdge, operationType::read);
      
      return totalNodeNum - 1;
      break;
    }
      
    case Stmt::LabelStmtClass: {                       // used for goto label
      // addNodeEmbedding(sti.LabelStmt, currentID);
      LabelStmt* ls = cast<LabelStmt>(stmt);

      std::string labelName = ls->getDecl()->getNameAsString();
      addNodeEmbedding(dict->getToken(labelName), currentID);
      nodeList[currentID]->addWriteVars(ls->getDecl()->getGlobalID());

      handleStmt(ls->getSubStmt(), currentID, et, operType);

      return totalNodeNum - 1;
      break;
    }
      
    case Stmt::LambdaExprClass: {
      addNodeEmbedding(sti.LambdaExpr, currentID);
      LambdaExpr* le = cast<LambdaExpr>(stmt);
      handleStmt(le->getBody(), currentID, edgeType::stmtEdge, operType);
      
      return totalNodeNum - 1;
      break;
    }
      
    case Stmt::MaterializeTemporaryExprClass:
      addNodeEmbedding(sti.MaterializeTemporaryExpr, currentID);
      
      return totalNodeNum - 1;
      break;
      
    // case Stmt::MemberExprClass: {
    //   // addNodeEmbedding(sti.MemberExpr, currentID);
    //   MemberExpr* me = cast<MemberExpr>(stmt);

    //   int baseID = handleStmt(me->getBase(), currentID, edgeType::stmtEdge, operType);

    //   std::string memberName = me->getMemberDecl()->getNameAsString();
    //   int memberID = totalNodeNum++;
    //   StmtCFGNode *memberNode = new StmtCFGNode(memberName, memberID);
    //   addNode(memberNode);
    //   addEdges(baseID, memberID, edgeType::stmtEdge);
    //   addNodeEmbedding(dict->getToken(memberName), memberID);

    //   if (operType == operationType::write) {
    //     memberNode->addWriteVars(me->getMemberDecl()->getGlobalID());
    //   }
    //   else if (operType == operationType::conditionalWrite) {
    //     memberNode->addConditionalWriteVars(me->getMemberDecl()->getGlobalID());
    //   }
    //   else if (operType == operationType::readAndWrite) {
    //     memberNode->addReadVars(me->getMemberDecl()->getGlobalID());
    //     memberNode->addWriteVars(me->getMemberDecl()->getGlobalID());
    //   }
    //   else if (operType == operationType::readAndConditionalWrite) {
    //     memberNode->addReadVars(me->getMemberDecl()->getGlobalID());
    //     memberNode->addConditionalWriteVars(me->getMemberDecl()->getGlobalID());
    //   }
    //   else {
    //     memberNode->addReadVars(me->getMemberDecl()->getGlobalID());
    //   }
      
    //   return totalNodeNum - 1;
    //   break;
    // }
      
    case Stmt::NullStmtClass:
      addNodeEmbedding(sti.NullStmt, currentID);
      break;
      
    case Stmt::ObjCAtCatchStmtClass:
      addNodeEmbedding(sti.ObjCAtCatchStmt, currentID);
      break;
      
    case Stmt::ObjCAutoreleasePoolStmtClass:
      addNodeEmbedding(sti.ObjCAutoreleasePoolStmt, currentID);
      break;
      
    case Stmt::ObjCAtSynchronizedStmtClass:
      addNodeEmbedding(sti.ObjCAtSynchronizedStmt, currentID);
      break;

    case Stmt::ObjCAtThrowStmtClass:
      addNodeEmbedding(sti.ObjCAtThrowStmt, currentID);
      break;
      
    case Stmt::ObjCMessageExprClass:
      addNodeEmbedding(sti.ObjCMessageExpr, currentID);
      break;
      
    case Stmt::OpaqueValueExprClass:
      addNodeEmbedding(sti.OpaqueValueExpr, currentID);
      break;
      
    case Stmt::PseudoObjectExprClass:
      addNodeEmbedding(sti.PseudoObjectExpr, currentID);
      break;
      
    case Stmt::ReturnStmtClass: {
      addNodeEmbedding(sti.ReturnStmt, currentID);
      ReturnStmt* rt = cast<ReturnStmt>(stmt);
      handleStmt(rt->getRetValue(), currentID, edgeType::stmtEdge, operationType::read);

      return totalNodeNum - 1;
      break;
    }
      
    case Stmt::CoreturnStmtClass: {
      addNodeEmbedding(sti.CoreturnStmt, currentID);
      CoreturnStmt* cs = cast<CoreturnStmt>(stmt);
      int operID = handleStmt(cs->getOperand(), currentID, edgeType::stmtEdge, operationType::read);
      handleStmt(cs->getPromiseCall(), operID, edgeType::stmtEdge, operationType::read);
      
      return totalNodeNum - 1;
      break;
    }
      
    case Stmt::SEHExceptStmtClass:
      addNodeEmbedding(sti.SEHExceptStmt, currentID);
      break;
      
    case Stmt::SEHLeaveStmtClass:
      addNodeEmbedding(sti.SEHLeaveStmt, currentID);
      break;
      
    case Stmt::UnaryExprOrTypeTraitExprClass:
      addNodeEmbedding(sti.UnaryExprOrTypeTraitExpr, currentID);
      break;
      
    // case Stmt::StmtExprClass: {
    //   if(isAddEmbe) addNodeEmbedding(sti.StmtExpr, currentID);
    //   clang::StmtExpr* se = cast<clang::StmtExpr>(stmt);
    //   handleStmt(se->getSubStmt(), currentID, edgeType::stmtEdge, operType);
    //   break;
    // }
    
    case Stmt::UnaryOperatorClass: {
      addNodeEmbedding(sti.UnaryOperator, currentID);
      UnaryOperator* uo = cast<UnaryOperator>(stmt);
      auto opCode = uo->getOpcode();

      std::string opcodeName = clang::UnaryOperator::getOpcodeStr(opCode).str();
      
      if (opCode == clang::UnaryOperatorKind::UO_PostDec ||
          opCode == clang::UnaryOperatorKind::UO_PostInc) {
        int precID = currentID;
        if (opCode == clang::UnaryOperatorKind::UO_PostDec ||
          opCode == clang::UnaryOperatorKind::UO_PostInc ||
          opCode == clang::UnaryOperatorKind::UO_PreDec ||
          opCode == clang::UnaryOperatorKind::UO_PreInc) {
          if (operType == operationType::inBranch || operationType::conditionalWrite || operationType::readAndConditionalWrite)
            precID = handleStmt(uo->getSubExpr(), currentID, edgeType::stmtEdge, operationType::readAndConditionalWrite);
          else
            precID = handleStmt(uo->getSubExpr(), currentID, edgeType::stmtEdge, operationType::readAndWrite);
        }
        else
          precID = handleStmt(uo->getSubExpr(), currentID, edgeType::stmtEdge, operationType::read);

        int opcodeID = totalNodeNum++;
        StmtCFGNode *opcodeNode = new StmtCFGNode(opcodeName, opcodeID);
        addNode(opcodeNode);
        addEdges(precID, opcodeID, edgeType::stmtEdge);
        addNodeEmbedding(dict->getToken(opcodeName), opcodeID);

      }
      else {
        int opcodeID = totalNodeNum++;
        StmtCFGNode *opcodeNode = new StmtCFGNode(opcodeName, opcodeID);
        addNode(opcodeNode);
        addEdges(currentID, opcodeID, edgeType::stmtEdge);
        addNodeEmbedding(dict->getToken(opcodeName), opcodeID);

        if (opCode == clang::UnaryOperatorKind::UO_PostDec ||
          opCode == clang::UnaryOperatorKind::UO_PostInc ||
          opCode == clang::UnaryOperatorKind::UO_PreDec ||
          opCode == clang::UnaryOperatorKind::UO_PreInc) {
          if (operType == operationType::inBranch || operationType::conditionalWrite || operationType::readAndConditionalWrite)
            handleStmt(uo->getSubExpr(), opcodeID, edgeType::stmtEdge, operationType::readAndConditionalWrite);
          else
            handleStmt(uo->getSubExpr(), opcodeID, edgeType::stmtEdge, operationType::readAndWrite);
        }
        else
          handleStmt(uo->getSubExpr(), opcodeID, edgeType::stmtEdge, operationType::read);
      }
      
      break;
    }
      
    case Stmt::IntegerLiteralClass: {
      // addNodeEmbedding(sti.IntegerLiteral, currentID);
      IntegerLiteral* il = cast<IntegerLiteral>(stmt);
      addNodeEmbedding(dict->getToken(std::to_string(il->getValue().getLimitedValue())), currentID);
      break;
    }

    case Stmt::FloatingLiteralClass: {
      // addNodeEmbedding(sti.FloatingLiteral, currentID);
      FloatingLiteral* fl = cast<FloatingLiteral>(stmt);
      addNodeEmbedding(dict->getToken(std::to_string(fl->getValue().convertToFloat())), currentID);
      break;
    }

    // case Stmt::StringLiteralClass: {
    //   // addNodeEmbedding(sti.StringLiteral, currentID);
    //   clang::StringLiteral* sl = cast<clang::StringLiteral>(stmt);
    //   std::string stringInfo;
    //   try {
    //     stringInfo = sl->getString().str();
    //   }
    //   catch (std::exception) {
    //     stringInfo = "std::string";
    //   }
    //   std::vector<std::string> wordInfo = splitString(stringInfo, " ");
    //   int precID = currentID;
    //   for (auto w : wordInfo) {
    //     int valueID = totalNodeNum++;
    //     StmtCFGNode *valueNode = new StmtCFGNode(w, valueID);
    //     addNode(valueNode);
    //     addEdges(precID, valueID, edgeType::stmtEdge);
    //     addNodeEmbedding(dict->getToken(w), valueID);
    //     precID = valueID;
    //   }
    //   return totalNodeNum - 1;
    //   break;
    // }

    case Stmt::DeclRefExprClass: {
      // addNodeEmbedding(sti.DeclRefExpr, currentID);
      DeclRefExpr* drf = cast<DeclRefExpr>(stmt);
      addNodeEmbedding(dict->getToken(drf->getDecl()->getNameAsString()), currentID);

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
      addNodeEmbedding(sti.ArraySubscriptExpr, currentID);
      ArraySubscriptExpr* ase = cast<ArraySubscriptExpr>(stmt);
      int LHSID = handleStmt(ase->getLHS(), currentID, edgeType::stmtEdge, operType);
      handleStmt(ase->getRHS(), LHSID, edgeType::stmtEdge, operationType::read);
      break;
    }

    case Stmt::InitListExprClass: {
      addNodeEmbedding(sti.InitListExpr, currentID);
      InitListExpr* ile = cast<InitListExpr>(stmt);
      int precID = currentID;
      for (int i = 0; i < ile->getNumInits(); ++i) {
        precID = handleStmt(ile->getInit(i), precID, edgeType::stmtEdge, operType);
      }
      break;
    }

    case Stmt::CXXBoolLiteralExprClass: {
      CXXBoolLiteralExpr* cble = cast<CXXBoolLiteralExpr>(stmt);
      if (cble->getValue()) {
        addNodeEmbedding(sti.True, currentID);
      }
      else {
        addNodeEmbedding(sti.False, currentID);
      }
      break;
    }

    case Stmt::CharacterLiteralClass: {
      clang::CharacterLiteral* cl = cast<clang::CharacterLiteral>(stmt);
      
      char charC = (char)cl->getValue();
      std::string charName(1, charC);
      addNodeEmbedding(dict->getToken(charName), currentID);
      break;
    }

    case Stmt::CStyleCastExprClass: {
      addNodeEmbedding(sti.CStyleCastExpr, currentID);
      clang::CStyleCastExpr* csce = cast<clang::CStyleCastExpr>(stmt);

      int typeID = totalNodeNum++;
      std::string typeName = csce->getTypeAsWritten().getAsString();
      StmtCFGNode *typeNode = new StmtCFGNode(typeName, typeID);
      addNode(typeNode);
      addEdges(currentID, typeID, edgeType::stmtEdge);
      addNodeEmbedding(dict->getToken(typeName), typeID);

      handleStmt(csce->getSubExpr(), typeID, edgeType::stmtEdge, operType);
      break;
    }

    // case Stmt::ParenExprClass: {
    //   clang::ParenExpr* pe = cast<clang::ParenExpr>(stmt);
    //   handleStmt(pe->getSubExpr(), currentID, edgeType::stmtEdge, operType);
    //   break;
    // }

    // case Stmt::ParenListExprClass: {
    //   clang::ParenListExpr* ple = cast<clang::ParenListExpr>(stmt);

    //   unsigned argIter = 0;
    //   while (argIter < ple->getNumExprs()) {
    //     handleStmt(ple->getExpr(argIter), currentID, edgeType::stmtEdge, operType);
    //     argIter++;
    //   }
    //   break;
    // }

    case Stmt::CXXStaticCastExprClass: {
      addNodeEmbedding(sti.CXXStaticCastExpr, currentID);
      clang::CXXStaticCastExpr* csce = cast<clang::CXXStaticCastExpr>(stmt);

      int typeID = totalNodeNum++;
      std::string typeName = csce->getTypeAsWritten().getAsString();
      StmtCFGNode* typeNode = new StmtCFGNode(typeName, typeID);
      addNode(typeNode);
      addEdges(currentID, typeID, edgeType::stmtEdge);
      addNodeEmbedding(dict->getToken(typeName), typeID);

      handleStmt(csce->getSubExpr(), typeID, edgeType::stmtEdge, operType);
      return totalNodeNum - 1;
      break;
    }

    // case Stmt::PredefinedExprClass: {
    //   PredefinedExpr* pe = cast<PredefinedExpr>(stmt);
    //   handleStmt(pe->getFunctionName(), currentID, edgeType::stmtEdge, operType);
    //   break;
    // }

    case Stmt::CXXNullPtrLiteralExprClass: {
      addNodeEmbedding(sti.CXXNullPtrLiteralExpr, currentID);
      
      return totalNodeNum - 1;
      break;
    }

    case Stmt::CXXReinterpretCastExprClass: {
      addNodeEmbedding(sti.CXXReinterpretCastExpr, currentID);
      clang::CXXReinterpretCastExpr* crce = cast<clang::CXXReinterpretCastExpr>(stmt);
      
      int typeID = totalNodeNum++;
      std::string typeName = crce->getTypeAsWritten().getAsString();
      StmtCFGNode* typeNode = new StmtCFGNode(typeName, typeID);
      addNode(typeNode);
      addEdges(currentID, typeID, edgeType::stmtEdge);
      addNodeEmbedding(dict->getToken(typeName), typeID);

      handleStmt(crce->getSubExpr(), typeID, edgeType::stmtEdge, operType);
      return totalNodeNum - 1;
      break;
    }

    case Stmt::CXXConstCastExprClass: {
      addNodeEmbedding(sti.CXXConstCastExpr, currentID);
      clang::CXXConstCastExpr* ccce = cast<clang::CXXConstCastExpr>(stmt);

      int typeID = totalNodeNum++;
      std::string typeName = ccce->getTypeAsWritten().getAsString();
      StmtCFGNode* typeNode = new StmtCFGNode(typeName, typeID);
      addNode(typeNode);
      addEdges(currentID, typeID, edgeType::stmtEdge);
      addNodeEmbedding(dict->getToken(typeName), typeID);

      handleStmt(ccce->getSubExpr(), typeID, edgeType::stmtEdge, operType);
      return totalNodeNum - 1;
      break;
    }

    case Stmt::GNUNullExprClass: {
      addNodeEmbedding(sti.GNUNullExpr, currentID);
      // TODO: get real type
      return totalNodeNum - 1;
      break;
    }

    case Stmt::CompoundAssignOperatorClass: {
      addNodeEmbedding(sti.CompoundAssignOperator, currentID);
      CompoundAssignOperator* bo = cast<CompoundAssignOperator>(stmt);

      std::string opcodeName = bo->getOpcodeStr().str();

      auto opcode = bo->getOpcode();
      
      int lhsID = currentID;
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
            lhsID = handleStmt(bo->getLHS(), currentID, edgeType::stmtEdge, operationType::readAndConditionalWrite);
          else
            lhsID = handleStmt(bo->getLHS(), currentID, edgeType::stmtEdge, operationType::readAndWrite);
        }
      else
        lhsID = handleStmt(bo->getLHS(), currentID, edgeType::stmtEdge, operationType::read);

      int opcodeID = totalNodeNum++;
      StmtCFGNode *opcodeNode = new StmtCFGNode(opcodeName, opcodeID);
      addNode(opcodeNode);
      addEdges(currentID, opcodeID, edgeType::stmtEdge);
      addNodeEmbedding(dict->getToken(opcodeName), opcodeID);

      handleStmt(bo->getRHS(), lhsID, edgeType::stmtEdge, operationType::read);

      return totalNodeNum - 1;
      break;
    }

    case Stmt::UnresolvedLookupExprClass: {
      addNodeEmbedding(sti.UnresolvedLookupExpr, currentID);
      break;
    }

    case Stmt::CXXDependentScopeMemberExprClass: {
      addNodeEmbedding(sti.CXXDependentScopeMemberExpr, currentID);
      CXXDependentScopeMemberExpr* me = cast<CXXDependentScopeMemberExpr>(stmt);
      
      std::string memberName = me->getMemberNameInfo().getAsString();
      int memberID = totalNodeNum++;
      StmtCFGNode *memberNode = new StmtCFGNode(memberName, memberID);
      addNode(memberNode);
      addEdges(currentID, memberID, edgeType::stmtEdge);
      addNodeEmbedding(dict->getToken(memberName), memberID);

      handleStmt(me->getBase(), memberID, edgeType::stmtEdge, operType);

      return totalNodeNum - 1;
      break;
    }

    case Stmt::ImplicitValueInitExprClass: {
      ImplicitValueInitExpr* ivie = cast<ImplicitValueInitExpr>(stmt);
      std::string ivieName = common::getString_of_Expr(ivie);
      addNodeEmbedding(dict->getToken(ivieName), currentID);

      return totalNodeNum - 1;
      break;
    }

    case Stmt::VAArgExprClass: {
      addNodeEmbedding(sti.VAArgExpr, currentID);
      clang::VAArgExpr* vae = cast<clang::VAArgExpr>(stmt);
      handleStmt(vae->getSubExpr(), currentID, edgeType::stmtEdge, operType);
      break;
    }

    case Stmt::SizeOfPackExprClass: {
      addNodeEmbedding(sti.SizeOfPackExpr, currentID);
      clang::SizeOfPackExpr* sope = cast<clang::SizeOfPackExpr>(stmt);
      
      std::string packName = sope->getPack()->getNameAsString();
      int packID = totalNodeNum++;
      StmtCFGNode *packNode = new StmtCFGNode(packName, packID);
      addNode(packNode);
      addEdges(currentID, packID, edgeType::stmtEdge);
      addNodeEmbedding(dict->getToken(packName), packID);
      break;
    }

    case Stmt::PackExpansionExprClass: {
      addNodeEmbedding(sti.PackExpansionExpr, currentID);
      clang::PackExpansionExpr* pee = cast<clang::PackExpansionExpr>(stmt);
      handleStmt(pee->getPattern(), currentID, edgeType::stmtEdge, operType);
      break;
    }

    case Stmt::CXXDynamicCastExprClass: {
      addNodeEmbedding(sti.CXXDynamicCastExpr, currentID);
      clang::CXXDynamicCastExpr* cdce = cast<clang::CXXDynamicCastExpr>(stmt);

      int typeID = totalNodeNum++;
      std::string typeName = cdce->getTypeAsWritten().getAsString();
      StmtCFGNode* typeNode = new StmtCFGNode(typeName, typeID);
      addNode(typeNode);
      addEdges(currentID, typeID, edgeType::stmtEdge);
      addNodeEmbedding(dict->getToken(typeName), typeID);

      handleStmt(cdce->getSubExpr(), typeID, edgeType::stmtEdge, operType);
      break;
    }

    case Stmt::CXXScalarValueInitExprClass: {
      clang::CXXScalarValueInitExpr* csvie = cast<clang::CXXScalarValueInitExpr>(stmt);
      std::string typeName = csvie->getTypeSourceInfo()->getType().getAsString();
      addNodeEmbedding(dict->getToken(typeName), currentID);
      break;
    }

    case Stmt::CXXUnresolvedConstructExprClass: {
      clang::CXXUnresolvedConstructExpr* cuce = cast<clang::CXXUnresolvedConstructExpr>(stmt);
      std::string typeName = cuce->getTypeSourceInfo()->getType().getAsString();
      addNodeEmbedding(dict->getToken(typeName), currentID);

      int argIter = 0;
      int precID = currentID;
      while (argIter < cuce->getNumArgs()) {
        precID = handleStmt(cuce->getArg(argIter), precID, edgeType::stmtEdge, operType);
        argIter++;
      }
      break;
    }

    case Stmt::DependentScopeDeclRefExprClass: {
      clang::DependentScopeDeclRefExpr* dsdre = cast<clang::DependentScopeDeclRefExpr>(stmt);
      std::string declName = dsdre->getDeclName().getAsString();
      addNodeEmbedding(dict->getToken(declName), currentID);
      // TODO: This DeclRef can not get Decl, and can not get GlobalID
      break;
    }

    case Stmt::OffsetOfExprClass: {
      clang::OffsetOfExpr* osoe = cast<clang::OffsetOfExpr>(stmt);

      std::string typeName = osoe->getTypeSourceInfo()->getType().getAsString();
      addNodeEmbedding(dict->getToken(typeName), currentID);

      int indexIter = 0;
      int precID = currentID;
      while(indexIter < osoe->getNumExpressions()) {
        precID = handleStmt(osoe->getIndexExpr(indexIter), precID, edgeType::stmtEdge, operType);
        indexIter++;
      }
      break;
    }

    case Stmt::AttributedStmtClass: {
      addNodeEmbedding(sti.AttributedStmt, currentID);
      clang::AttributedStmt* as = cast<clang::AttributedStmt>(stmt);

      auto attrs = as->getAttrs();
      int precID = currentID;
      for(auto attr : attrs) {
        std::string attrName(attr->getSpelling());
        int attrID = totalNodeNum++;
        StmtCFGNode *attrNode = new StmtCFGNode(attrName, attrID);
        addNode(attrNode);
        addEdges(precID, attrID, edgeType::stmtEdge);
        addNodeEmbedding(dict->getToken(attrName), attrID);
        precID = attrID;
      }

      handleStmt(as->getSubStmt(), precID, edgeType::stmtEdge, operType);
      break;
    }

    case Stmt::CompoundLiteralExprClass: {
      clang::CompoundLiteralExpr* cle = cast<clang::CompoundLiteralExpr>(stmt);
      std::string typeName = cle->getTypeSourceInfo()->getType().getAsString();
      addNodeEmbedding(dict->getToken(typeName), currentID);

      handleStmt(cle->getInitializer(), currentID, edgeType::stmtEdge, operType);
      break;
    }

    case Stmt::CXXTypeidExprClass: {
      addNodeEmbedding(sti.CXXTypeidExpr, currentID);
      CXXTypeidExpr* cte = cast<CXXTypeidExpr>(stmt);
      if (cte->isTypeOperand()){
        int typeOperandID = totalNodeNum++;
        std::string typeOperandName = cte->getTypeOperandSourceInfo()->getType().getAsString();
        StmtCFGNode *typeOperandNode = new StmtCFGNode(typeOperandName, typeOperandID);
        addNode(typeOperandNode);
        addEdges(currentID, typeOperandID, edgeType::stmtEdge);
        addNodeEmbedding(dict->getToken(typeOperandName), typeOperandID);
      }
      else
        handleStmt(cte->getExprOperand(), currentID, edgeType::stmtEdge, operType);
      break;
    }

    case Stmt::UnresolvedMemberExprClass: {
      clang::UnresolvedMemberExpr* ume = cast<clang::UnresolvedMemberExpr>(stmt);
      std::string memberName = ume->getMemberName().getAsString();
      addNodeEmbedding(dict->getToken(memberName), currentID);
      handleStmt(ume->getBase(), currentID, edgeType::stmtEdge, operType);
      break;
    }

    case Stmt::TypeTraitExprClass: {
      addNodeEmbedding(sti.TypeTraitExpr, currentID);
      clang::TypeTraitExpr* tte = cast<clang::TypeTraitExpr>(stmt);

      int argIter = 0;
      int precID = currentID;
      while(argIter < tte->getNumArgs()) {
        std::string argName = tte->getArg(argIter)->getType().getAsString();
        int argID = totalNodeNum++;

        StmtCFGNode *argNode = new StmtCFGNode(argName, argID);
        addNode(argNode);
        addEdges(precID, argID, edgeType::stmtEdge);
        addNodeEmbedding(dict->getToken(argName), argID);
        
        precID = argID;
        ++argIter;
      }
      break;
    }

    default:
      addNodeEmbedding(sti.Other, currentID);
      // stmt->dumpColor();
      // assert(0);
      break;
  }

  return totalNodeNum - 1;
}

int StmtCFG::handleDecl(Decl* decl, int rootID, edgeType et, operationType operType) {
  assert((et == edgeType::stmtEdge) && "ERROR: There is an error in handleDecl.");
  if (VarDecl* vd = dyn_cast<VarDecl>(decl)) {
    int typeNodeID = totalNodeNum++;
    StmtCFGNode *typeNode = new StmtCFGNode(vd->getType().getAsString(), typeNodeID);
    addNode(typeNode);
    addEdges(rootID, typeNodeID, edgeType::stmtEdge);
    addNodeEmbedding(dict->getToken(vd->getType().getAsString()), typeNodeID);

    int varNodeID = totalNodeNum++;
    int begin = manager->getSpellingLineNumber(vd->getBeginLoc());
    int end = manager->getSpellingLineNumber(vd->getEndLoc());
    std::string name = vd->getNameAsString();
    //std::cout << "decl name: " << name << std::endl;
    //std::cout << "Decl name: " << name << std::endl;
    if(name == current_pair.alias1.name && begin <= current_pair.alias1.def_point && end >= current_pair.alias1.def_point)
      def1 = varNodeID;
    if(name == current_pair.alias2.name && begin <= current_pair.alias2.def_point && end >= current_pair.alias2.def_point)
      def2 = varNodeID;

    StmtCFGNode *varNode = new StmtCFGNode(vd->getNameAsString(), varNodeID);
    addNode(varNode);
    addEdges(typeNodeID, varNodeID, edgeType::stmtEdge);
    addNodeEmbedding(dict->getToken(vd->getNameAsString()), varNodeID);
    varNode->addWriteVars(vd->getGlobalID());

    if (vd->hasInit() && nullptr != vd->getInit()) {
      return handleStmt(vd->getInit(), varNodeID, edgeType::stmtEdge, operType);
    }

    return varNodeID;
  } 
  else if (EnumDecl* ed = dyn_cast<EnumDecl>(decl)) {
    int enumNodeID = totalNodeNum++;
    StmtCFGNode *enumNode = new StmtCFGNode("enum", enumNodeID);
    addNode(enumNode);
    addEdges(rootID, enumNodeID, edgeType::stmtEdge);
    addNodeEmbedding(dict->getToken("enum"), enumNodeID);
    
    int nameID = totalNodeNum++;
    StmtCFGNode *nameNode = new StmtCFGNode(ed->getNameAsString(), nameID);
    addNode(nameNode);
    addEdges(enumNodeID, nameID, edgeType::stmtEdge);
    addNodeEmbedding(dict->getToken(ed->getNameAsString()), nameID);
    nodeList[nameID]->addWriteVars(ed->getGlobalID());

    int currentPrecID = nameID;
    for (auto enumIter = ed->enumerator_begin(); enumIter != ed->enumerator_end(); ++enumIter) {
      if (EnumConstantDecl* esd = dyn_cast<EnumConstantDecl>(*enumIter)) {
        currentPrecID = handleDecl(esd, currentPrecID, edgeType::stmtEdge, operationType::write);
      }
    }

    return currentPrecID;
  }
  else if (EnumConstantDecl* esd = dyn_cast<EnumConstantDecl>(decl)) {
    int nameID = totalNodeNum++;
    std::string name = esd->getNameAsString();
    StmtCFGNode *nameNode = new StmtCFGNode(name, nameID);
    addNode(nameNode);
    addEdges(rootID, nameID, edgeType::stmtEdge);
    addNodeEmbedding(dict->getToken(esd->getNameAsString()), nameID);
    if (operType == operationType::write) {
      nameNode->addWriteVars(esd->getGlobalID());
    }

    return nameID;
  }
  else if (TypeAliasDecl* tad = dyn_cast<TypeAliasDecl>(decl)) {
    std::string tadName = tad->getName().str();
    int tadNameID = totalNodeNum++;
    StmtCFGNode *tadNameNode = new StmtCFGNode(tadName, tadNameID);
    addNode(tadNameNode);
    addEdges(rootID, tadNameID, edgeType::stmtEdge);
    addNodeEmbedding(dict->getToken(tadName), tadNameID);

    return tadNameID;
  }
  else if (TypedefDecl* td = dyn_cast<TypedefDecl>(decl)) {
    int typeDefID = totalNodeNum++;
    StmtCFGNode *typeDefNode = new StmtCFGNode("typedef", typeDefID);
    addNode(typeDefNode);
    addEdges(rootID, typeDefID, edgeType::stmtEdge);
    addNodeEmbedding(dict->getToken("typedef"), typeDefID);

    int typeID = totalNodeNum++;
    std::string typeName = td->getUnderlyingType().getAsString();
    StmtCFGNode *typeNode = new StmtCFGNode(typeName, typeID);
    addNode(typeNode);
    addEdges(typeDefID, typeID, edgeType::stmtEdge);
    addNodeEmbedding(dict->getToken(typeName), typeID);

    int varID = totalNodeNum++;
    std::string varName = td->getNameAsString();
    StmtCFGNode *varNode = new StmtCFGNode(varName, varID);
    addNode(varNode);
    addEdges(typeID, varID, et);
    addNodeEmbedding(dict->getToken(varName), varID);

    return varID;
  }
  else if (UsingDecl* ud = dyn_cast<UsingDecl>(decl)) {
    int usingID = totalNodeNum++;
    StmtCFGNode *usingNode = new StmtCFGNode("Using", usingID);
    addNode(usingNode);
    addEdges(rootID, usingID, edgeType::stmtEdge);
    addNodeEmbedding(dict->getToken("Using"), usingID);

    std::string usingName = ud->getNameAsString();
    int usingNameID = totalNodeNum++;
    StmtCFGNode *usingNameNode = new StmtCFGNode(usingName, usingNameID);
    addNode(usingNameNode);
    addEdges(usingID, usingNameID, edgeType::stmtEdge);
    addNodeEmbedding(dict->getToken(usingName), usingNameID);

    return usingNameID;
  }
  else if (UsingDirectiveDecl* udd = dyn_cast<UsingDirectiveDecl>(decl)) {
    int usingID = totalNodeNum++;
    StmtCFGNode *usingNode = new StmtCFGNode("Using", usingID);
    addNode(usingNode);
    addEdges(rootID, usingID, et);
    addNodeEmbedding(dict->getToken("Using"), usingID);

    std::string usingName = udd->getNameAsString();
    int usingNameID = totalNodeNum++;
    StmtCFGNode *usingNameNode = new StmtCFGNode(usingName, usingNameID);
    addNode(usingNameNode);
    addEdges(usingID, usingNameID, et);
    addNodeEmbedding(dict->getToken(usingName), usingNameID);

    return usingNameID;
  }
  else if (StaticAssertDecl* sad = dyn_cast<StaticAssertDecl>(decl)) {
    int staticAssertID = totalNodeNum++;
    StmtCFGNode *staticAssertNode = new StmtCFGNode("static_assert", staticAssertID);
    addNode(staticAssertNode);
    addEdges(rootID, staticAssertID, edgeType::stmtEdge);
    addNodeEmbedding(dict->getToken("static_assert"), staticAssertID);

    int exprID = handleStmt(sad->getAssertExpr(), staticAssertID, edgeType::stmtEdge, operType);
    return handleStmt(sad->getMessage(), exprID, edgeType::stmtEdge, operType);
  }
  else if (RecordDecl* rd = dyn_cast<RecordDecl>(decl)) {
    // TODO: do not handle the body of RecordDecl
    int typeID = totalNodeNum++;
    std::string typeName;
    if(rd->isClass()) typeName = "class";
    else if (rd->isUnion()) typeName = "union";
    else if (rd->isStruct()) typeName = "struct";
    else typeName = "record";
    StmtCFGNode *typeNode = new StmtCFGNode(typeName, typeID);
    addNode(typeNode);
    addEdges(rootID, typeID, edgeType::stmtEdge);
    addNodeEmbedding(dict->getToken(typeName), typeID);

    int nameID = totalNodeNum++;
    std::string nameName = rd->getNameAsString();
    StmtCFGNode *nameNode = new StmtCFGNode(nameName, nameID);
    addNode(nameNode);
    addEdges(typeID, nameID, et);
    addNodeEmbedding(dict->getToken(nameName), nameID);

    return nameID;
  }
  else if (CXXRecordDecl* crd = dyn_cast<CXXRecordDecl>(decl)) {
    // TODO: do not handle the body of RecordDecl
    int typeID = totalNodeNum++;
    std::string typeName;
    if(crd->isClass()) typeName = "class";
    else if (crd->isUnion()) typeName = "union";
    else if (crd->isStruct()) typeName = "struct";
    else typeName = "record";
    StmtCFGNode *typeNode = new StmtCFGNode(typeName, typeID);
    addNode(typeNode);
    addEdges(rootID, typeID, et);
    addNodeEmbedding(dict->getToken(typeName), typeID);

    int nameID = totalNodeNum++;
    std::string nameName = crd->getNameAsString();
    StmtCFGNode *nameNode = new StmtCFGNode(nameName, nameID);
    addNode(nameNode);
    addEdges(typeID, nameID, et);
    addNodeEmbedding(dict->getToken(nameName), nameID);

    return nameID;
  }
  else if (NamespaceAliasDecl* nad = dyn_cast<NamespaceAliasDecl>(decl)) {
    int namespaceID = totalNodeNum++;
    StmtCFGNode *namespaceNode = new StmtCFGNode("namespace", namespaceID);
    addNode(namespaceNode);
    addEdges(rootID, namespaceID, edgeType::stmtEdge);
    addNodeEmbedding(dict->getToken("namespace"), namespaceID);

    int nestedID = totalNodeNum++;
    std::string nestedName = nad->getQualifier()->getAsNamespace()->getNameAsString();
    StmtCFGNode *nestedNode = new StmtCFGNode(nestedName, nestedID);
    addNode(nestedNode);
    addEdges(namespaceID, nestedID, edgeType::stmtEdge);
    addNodeEmbedding(dict->getToken(nestedName), nestedID);

    int aliasID = totalNodeNum++;
    std::string aliasName = nad->getAliasedNamespace()->getNameAsString();
    StmtCFGNode *aliasNode = new StmtCFGNode(aliasName, aliasID);
    addNode(aliasNode);
    addEdges(nestedID, aliasID, et);
    addNodeEmbedding(dict->getToken(aliasName), aliasID);

    return aliasID;
  }
  else if (FunctionDecl* fd = dyn_cast<FunctionDecl>(decl)) {
    int externID = -1;
    if (fd->isExternC()) {
      externID = totalNodeNum++;
      StmtCFGNode *externNode = new StmtCFGNode("extern", externID);
      addNode(externNode);
      addEdges(rootID, externID, edgeType::stmtEdge);
      addNodeEmbedding(dict->getToken("extern"), externID);
    }

    int returnID = -1;
    if (!fd->isNoReturn()) {
      returnID = totalNodeNum++;
      std::string returnName = fd->getReturnType().getAsString();
      StmtCFGNode *returnNode = new StmtCFGNode(returnName, returnID);
      addNode(returnNode);
      if (externID == -1) addEdges(rootID, returnID, edgeType::stmtEdge);
      else addEdges(externID, returnID, edgeType::stmtEdge);
      addNodeEmbedding(dict->getToken(returnName), returnID);
    }

    int precID = rootID;
    if (externID != -1) precID = externID;
    if (returnID != -1) precID = returnID;

    // Handle the params
    int paramsSize = fd->param_size();
    for (int i = 0; i < paramsSize; ++i) {
      precID = handleDecl(fd->getParamDecl(i), precID, edgeType::stmtEdge, operationType::defaultOperation);
    }

    return precID;
  }
  else if (LabelDecl* ld = dyn_cast<LabelDecl>(decl)) {
    return handleStmt(ld->getStmt(), rootID, edgeType::stmtEdge, operType);
  }
  else {
    assert((et == edgeType::stmtEdge) && "ERROR: There is an error in handleDecl.");
    // std::cout<< "There is a decl can not analysis:"<<std::endl;
    // decl->dumpColor();
    // assert(0);
    return rootID;
  }
  return rootID;
}

int StmtCFG::analysisStmtString(int nodeID, std::string stmtString) {
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
  
  int precID = nodeID;
  for (auto iter : splitRes1) {
    int iterID = totalNodeNum++;
    StmtCFGNode* iterNode = new StmtCFGNode(iter, iterID);
    addNode(iterNode);
    addEdges(precID, iterID, edgeType::stmtEdge);
    addNodeEmbedding(dict->getToken(iter), iterID);
    precID = iterID;
  }

  return precID;
}

std::vector<std::string> StmtCFG::splitStrings(std::vector<std::string> strings, std::string pattern) {
  std::vector<std::string> res1;

  for (auto iter1 : strings) {
    std::vector<std::string> res2 = splitString(iter1, pattern);
    for (auto iter2 : res2) {
      res1.push_back(iter2);
    }
  }
  return res1;
}

std::vector<std::string> StmtCFG::splitString(std::string stmtString, std::string pattern) {
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

std::string StmtCFG::trim(std::string s) {
  std::string result = s;
  result.erase(0, result.find_first_not_of(" \t\r\n"));
  result.erase(result.find_last_not_of(" \t\r\n") + 1);
  return result;
}

void StmtCFG::computeDataDependence() {
  for (int i = 0; i < nodeList.size(); ++i) {
    StmtCFGNode* currentNode = nodeList[i];
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
        StmtCFGNode* sourceNode = nodeList[j];
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
        StmtCFGNode* sourceNode = nodeList[j];
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

void StmtCFG::add_CFG_First_Stmts(FunctionDecl* FD){
  std::unique_ptr<CFG> cfg = std::unique_ptr<CFG>(CFG::buildCFG(
      FD, FD->getBody(), &FD->getASTContext(), CFG::BuildOptions()));
  LangOptions LangOpts;
  LangOpts.CPlusPlus = true;
  if(cfg == nullptr) return;

  for (CFG::iterator cfgIter = cfg->begin(); cfgIter != cfg->end(); ++cfgIter) {
    CFGBlock *block = *cfgIter;
    if(block == nullptr) continue;
    const Stmt* first_stmt = get_First_Stmt(block);
    if(first_stmt == nullptr) continue;
    first_stmts.insert(first_stmt);
  }
}

const Stmt* StmtCFG::get_First_Stmt(CFGBlock* block){
  if(block->begin() == block->end()) return nullptr;

  CFGBlock::iterator block_iter = block->begin();
  Stmt* result_stmt = nullptr;
  while(block_iter != block->end()){
    CFGElement root_element = *(block_iter);
    if(root_element.getKind() == CFGElement::Statement){
      const Stmt* root_stmt = ((CFGStmt*) &root_element)->getStmt();
      if(root_stmt == nullptr){
        block_iter++;
        continue;
      }
      result_stmt = (Stmt*)root_stmt;
      break;
    }
    block_iter++;
  }
  const Stmt* stmt_const = result_stmt;
  return stmt_const;
}

void StmtCFG::computeCFG(FunctionDecl* FD){
  std::unique_ptr<CFG> cfg = std::unique_ptr<CFG>(CFG::buildCFG(
      FD, FD->getBody(), &FD->getASTContext(), CFG::BuildOptions()));
  LangOptions LangOpts;
  LangOpts.CPlusPlus = true;
  if(cfg == nullptr) return;

  for (CFG::iterator cfgIter = cfg->begin(); cfgIter != cfg->end(); ++cfgIter) {
    CFGBlock *block = *cfgIter;
    if(block == nullptr) continue;

    const Stmt* stmt_src = get_First_Stmt(block);
    if(stmt_src == nullptr) continue;
    if(Stmt2FirstToken.count(stmt_src) == 0) continue;
  
    for(CFGBlock::succ_iterator block_iter = block->succ_begin(); block_iter!= block->succ_end(); ++block_iter){
      CFGBlock* succ_block = *block_iter;
      if(succ_block == nullptr) continue;
      
      const Stmt* stmt_dst = get_First_Stmt(succ_block);
      if(stmt_dst == nullptr) continue;
      if(Stmt2FirstToken.count(stmt_dst) == 0) continue;

      addEdges(Stmt2FirstToken[stmt_src], Stmt2FirstToken[stmt_dst], edgeType::BasicBlockEdge);
    }
    
    //block->dump();
  }
}

void CFG2TokenSequence::transform() {
  for(std::string current_program_name : program_names) {
    aliasType2Json_c2t.clear();
    nonAlias_c2t.clear();
    nonAlias_c2t = json::array();
    std::vector<alias_pair> allAlias = csvread.getAllAlias(current_program_name);

    int total_alias_num = allAlias.size();
    int true_alias_total = 0, false_alias_total = 0;
    for(int i = 0; i < allAlias.size(); ++i) {
      if(allAlias[i].llvm_true) ++true_alias_total;
      else ++false_alias_total;
    }

    std::cout << "----------" << current_program_name << "----------" << std::endl;
    std::cout << "Total True Pairs : " << true_alias_total << " | Total False Pairs : " << false_alias_total << std::endl;

    for(auto current_alias_pair : allAlias) {
      std::string filename1 = current_alias_pair.alias1.dir;
      std::string filename2 = current_alias_pair.alias2.dir;
      assert(filename1 == filename2);
      //读取所有Function
      std::vector<std::string> ASTs;
      ASTs.push_back(filename1);
      std::list<std::unique_ptr<ASTUnit>> ASTQueue;
      std::vector<FunctionDecl*> funcs = common::getFunctions(ASTs, ASTQueue);
      
      std::unique_ptr<ASTUnit> AU = common::loadFromASTFile(filename1);
      SourceManager* manager = &AU->getASTContext().getSourceManager();
      
      for(FunctionDecl* current_func : funcs){
        SourceLocation start = current_func->getBeginLoc();
        SourceLocation end = current_func->getEndLoc();
        int start_linenum = manager->getSpellingLineNumber(start);
        int end_linenum = manager->getSpellingLineNumber(end);
        int deviant = std::abs(start_linenum - current_alias_pair.alias1.func_st_line);
        if(deviant >= 10) continue;
        deviant = std::abs(end_linenum - current_alias_pair.alias2.func_ed_line);
        if(deviant >= 10) continue;
    
        cfgts_transform_suc = false;
        StmtCFG* mycfg = new StmtCFG(current_func, dict, current_alias_pair, manager);
        if(cfgts_transform_suc) break;
      }
    }

    int total_true_alias_suc = 0;
    for(auto iter = aliasType2Json_c2t.begin(); iter != aliasType2Json_c2t.end(); ++iter) {
      int current_alias_size = iter->second.size();
      std::cout << current_program_name << "_CFG_equal_" << iter->first << " Size : " << current_alias_size << std::endl; 
      total_true_alias_suc += current_alias_size;
      
      std::string output_filename = "./" + current_program_name + "/" + "CFGTS_" + current_program_name + "_equal_" + std::to_string(iter->first) + ".json";
      std::ofstream out(output_filename, ios::trunc);
      out << iter->second;
      out.close();
    }

    std::cout << current_program_name << "_CFG_unequal Size : " << nonAlias_c2t.size() << std::endl;
    std::string output_filename_non_alias = "./" + current_program_name + "/" + "CFGTS_" + current_program_name + "_unequal.json";
    std::ofstream out_non_alias(output_filename_non_alias, ios::trunc);
    out_non_alias << nonAlias_c2t;
    out_non_alias.close();

    std::cout << "True Alias Total : " << total_true_alias_suc << "/" << true_alias_total << std::endl;
    std::cout << "False Alias Total : " << nonAlias_c2t.size() << "/" << false_alias_total << std::endl << std::endl;
  }
}
