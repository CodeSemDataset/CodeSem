#include "checkers/PDG2Graph.h"

PDGNode::PDGNode(Stmt *stmt, int ID) {
  this->ID = ID;
  this->stmt = stmt;
  this->stmtString = common::getString_of_Stmt(stmt);

  this->writeVars = -1;
  this->readVars = -1;
  this->conditionalWriteVars = -1;
  this->gotoVars = -1;
}

PDGNode::PDGNode(std::string stmt, int ID) {
  this->stmtString = stmt;
  this->ID = ID;
  this->stmt = nullptr;

  this->writeVars = -1;
  this->readVars = -1;
  this->conditionalWriteVars = -1;
  this->gotoVars = -1;
}

Stmt* PDGNode::getStmt() {
  return stmt;
}

std::string PDGNode::getStmtString() {
  return stmtString;
}

int PDGNode::getID() {
  return ID;
}

void PDGNode::addWriteVars(int64_t id) {
  // std::cout<< std::to_string(getID()) <<" add write var " << std::to_string(id) <<std::endl;
  writeVars = id;
}

void PDGNode::addReadVars(int64_t id) {
  // std::cout<< std::to_string(getID()) <<" add read var " << std::to_string(id) <<std::endl;
  readVars = id;
}

void PDGNode::addConditionalWriteVars(int64_t id) {
  // std::cout<< std::to_string(getID()) <<" add conditional write var " << std::to_string(id) <<std::endl;
  conditionalWriteVars = id;
}

void PDGNode::addGotoVars(int64_t id) {
  // std::cout<< std::to_string(getID()) <<" add goto var " << std::to_string(id) <<std::endl;
  gotoVars = id;
}

int64_t PDGNode::getWriteVars() {
  return writeVars;
}

int64_t PDGNode::getReadVars() {
  return readVars;
}

int64_t PDGNode::getConditionalWriteVars() {
  return conditionalWriteVars;
}
int64_t PDGNode::getGotoVars() {
  return gotoVars;
}

PDG::PDG(FunctionDecl* FD, WordDict *wd, std::string filename) {
  totalNodeNum = 0;
  currentFD = FD;
  dict = wd;

  add_CFG_First_Stmts(FD);

  // Decl the function root node, include function params
  int currentRootID = totalNodeNum++;
  PDGNode *rootNode = new PDGNode(common::getFullName(FD), currentRootID);
  addNode(rootNode);
  addNodeEmbedding(sti.FunctionDecl, currentRootID);

  // Handle the return type
  std::string typeName = FD->getType().getAsString();
  int typeID = totalNodeNum++;
  PDGNode *typeNode = new PDGNode(typeName, typeID);
  addNode(typeNode);
  addEdges(currentRootID, typeID, edgeType::astEdge);
  addNodeEmbedding(dict->getToken(typeName), typeID);

  // Handle the func name
  std::string funcName = FD->getNameAsString();
  int funcNameID = totalNodeNum++;
  PDGNode *nameNode = new PDGNode(funcName, funcNameID);
  addNode(nameNode);
  addEdges(currentRootID, funcNameID, edgeType::astEdge);
  addNodeEmbedding(dict->getToken(funcName), funcNameID);

  // Handle the params
  int paramsSize = FD->param_size();
  for (int i = 0; i < paramsSize; ++i) {
    handleDecl(FD->getParamDecl(i), currentRootID, edgeType::astEdge, operationType::defaultOperation, true);
  }

  // Traverse the functaddNodeion body
  auto *FDBody = FD->getBody();
  if (nullptr == FDBody) return;
  for (auto bodyIter = FDBody->child_begin(); bodyIter != FDBody->child_end(); ++bodyIter) {
    Stmt* currentStmt = *bodyIter;
    handleStmt(currentStmt, currentRootID, edgeType::controlDependenceEdge, operationType::defaultOperation);
  }

  //computeDataDependence();

  computeCFG(FD);

  // printGraph();
  // dumpDot();
  dumpJson(filename);
  //dict->storeDict();
}

void PDG::addNode(PDGNode* node) {
  if(node->getStmt() != nullptr && first_stmts.count(node->getStmt()) != 0){
    bb_first_stmt.insert(std::make_pair(node->getStmt(), node->getID()));
  }
  nodeList.push_back(node);
  // assert((nodeList.size() == node->getID() + 1) && "ERROR: node ID not euqals to node location.");
  if (nodeList.size() != node->getID() + 1)
    throw "ERROR: node ID not euqals to node location.";
}

void PDG::addNodeEmbedding(int token, int nodeID) {
  nodeEmbedding.push_back(token);
  if (nodeEmbedding.size() != nodeID + 1) {
    throw "ERROR: node ID not euqals to token location.";
    std::cout << "nodeID: " << std::to_string(nodeID) << ", embedding size: " << std::to_string(nodeEmbedding.size()) << std::endl;
    for (auto n : nodeList) {
      std::cout<<"ID: " << std::to_string(n->getID()) << " Stmt:" << std::endl;
      std::cout << n->getStmtString() << std::endl;
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

void PDG::addControlDependenceEdge(int firstID, int secondID) {
  if (controlDependenceEdges.find(firstID) != controlDependenceEdges.end())
    controlDependenceEdges[firstID].insert(secondID);
  else {
    std::set<int> dest;
    dest.insert(secondID);
    controlDependenceEdges[firstID] = dest;
  }
}

void PDG::addDataDependenceEdge(int firstID, int secondID) {
  if (dataDependenceEdges.find(firstID) != dataDependenceEdges.end())
    dataDependenceEdges[firstID].insert(secondID);
  else {
    std::set<int> dest;
    dest.insert(secondID);
    dataDependenceEdges[firstID] = dest;
  }
}

void PDG::addASTEdge(int firstID, int secondID) {
  if (astEdges.find(firstID) != astEdges.end())
    astEdges[firstID].insert(secondID);
  else {
    std::set<int> dest;
    dest.insert(secondID);
    astEdges[firstID] = dest;
  }
}

void PDG::addCFGEdge(int firstID, int secondID){
  if (cfgEdges.find(firstID) != cfgEdges.end())
    cfgEdges[firstID].insert(secondID);
  else {
    std::set<int> dest;
    dest.insert(secondID);
    cfgEdges[firstID] = dest;
  }
}

void PDG::addEdges(int firstID, int secondID, edgeType t) {
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
    case edgeType::cfgEdge:
      addCFGEdge(firstID, secondID);
      break;
    default:
      assert(false && "ERROR: edge type wrong!");
      break;
  }
}

void PDG::printGraph() {
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

void PDG::dumpDot() {
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
  for (auto ae : astEdges) {
    for (auto n : ae.second) {
      fout << "  v" << std::to_string(ae.first) << " -> v" << std::to_string(n) <<" [style=dotted];\n";
    }
  }

  fout << "}\n";
  fout.flush();
  fout.close();
}

void PDG::dumpJson(std::string filename) {
  //json root_list = json::array();
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
/*
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
*/
  for (auto e : cfgEdges) {
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

  //root_list.push_back(root);

  json_current = root;
}

int PDG::handleStmt(Stmt* stmt, int rootID, edgeType et, operationType operType) {
  if (nullptr == stmt) return -1;

  // This code used to ignore ImplicitCast
  // if (stmt->getStmtClass() == Stmt::ImplicitCastExprClass) {
  //   ImplicitCastExpr *ice = cast<ImplicitCastExpr>(stmt);
  //   handleStmt(ice->getSubExpr(), rootID, et);
  // }

  int currentID = totalNodeNum++;
  PDGNode *currentNode = new PDGNode(stmt, currentID);
  addNode(currentNode);
  addEdges(rootID, currentID, et);
  if(first_stmts.find(stmt) != first_stmts.end()){
    bb_first_stmt.insert(std::make_pair(stmt,currentID));
  }

  switch(stmt->getStmtClass()) {
    case Stmt::CaseStmtClass: {
      addNodeEmbedding(sti.CaseStmt, currentID);
      CaseStmt* casestmt = cast<CaseStmt>(stmt);
      handleStmt(casestmt->getLHS(), currentID, edgeType::astEdge, operType);
      handleStmt(casestmt->getSubStmt(), currentID, edgeType::controlDependenceEdge, operationType::inBranch);
      break;
    }

    case Stmt::CompoundStmtClass: {
      addNodeEmbedding(sti.CompoundStmt, currentID);
      CompoundStmt* cs = cast<CompoundStmt>(stmt);
      for (auto csIter = cs->body_begin(); csIter != cs->body_end(); ++csIter) {
        Stmt *childStmt = *csIter;
        handleStmt(childStmt, currentID, edgeType::controlDependenceEdge, operType);
      }
      break;
    }

    case Stmt::CXXTryStmtClass: {
      addNodeEmbedding(sti.CXXTryStmt, currentID);
      CXXTryStmt* cts = cast<CXXTryStmt>(stmt);
      handleStmt(cts->getTryBlock(), currentID, edgeType::controlDependenceEdge, operationType::inBranch);
      int catchIdx = 0;
      while(catchIdx < cts->getNumHandlers()) {
        handleStmt(cts->getHandler(catchIdx), currentID, edgeType::controlDependenceEdge, operationType::inBranch);
        catchIdx++;
      }
      break;
    }

    case Stmt::CXXForRangeStmtClass: {
      addNodeEmbedding(sti.CXXForRangeStmt, currentID);
      CXXForRangeStmt* cfrs = cast<CXXForRangeStmt>(stmt);

      handleStmt(cfrs->getRangeStmt(), currentID, edgeType::astEdge, operationType::defaultOperation);
      handleStmt(cfrs->getBeginStmt(), currentID, edgeType::astEdge, operationType::defaultOperation);
      handleStmt(cfrs->getEndStmt(), currentID, edgeType::astEdge, operationType::defaultOperation);
      int condID = handleStmt(cfrs->getCond(), currentID, edgeType::astEdge, operationType::defaultOperation);
      handleStmt(cfrs->getLoopVarStmt(), currentID, edgeType::astEdge, operationType::defaultOperation);
            
      handleStmt(cfrs->getBody(), currentID, edgeType::controlDependenceEdge, operationType::inBranch);
      int incID = handleStmt(cfrs->getInc(), currentID, edgeType::astEdge, operationType::defaultOperation);
      if (condID != -1 && incID != -1)
        addDataDependenceEdge(incID, condID);
      break;
    }

    case Stmt::DoStmtClass: {
      addNodeEmbedding(sti.DoStmt, currentID);
      DoStmt* ds = cast<DoStmt>(stmt);
      handleStmt(ds->getCond(), currentID, edgeType::astEdge, operType);
      handleStmt(ds->getBody(), currentID, edgeType::controlDependenceEdge, operationType::inBranch);
      break;
    }

    case Stmt::ForStmtClass: {
      addNodeEmbedding(sti.ForStmt, currentID);
      ForStmt* fs = cast<ForStmt>(stmt);

      handleStmt(fs->getInit(), currentID, edgeType::astEdge, operationType::defaultOperation);
      int condID = handleStmt(fs->getCond(), currentID, edgeType::astEdge, operationType::defaultOperation);

      handleStmt(fs->getBody(), currentID, edgeType::controlDependenceEdge, operationType::inBranch);
      int incID = handleStmt(fs->getInc(), currentID, edgeType::astEdge, operationType::defaultOperation);
      if (condID != -1 && incID != -1)
        addDataDependenceEdge(incID, condID);
      break;
    }

    case Stmt::IfStmtClass: {
      addNodeEmbedding(sti.IfStmt, currentID);
      IfStmt* is = cast<IfStmt>(stmt);

      handleStmt(is->getCond(), currentID, edgeType::astEdge, operType);

      int ifBegin = -1, elseBegin = -1, ifEnd = -1, elseEnd = -1;
      if (nullptr != is->getThen()) {
        int thenID = totalNodeNum++;
        PDGNode *thenNode = new PDGNode("THEN", thenID);
        addNode(thenNode);
        addEdges(currentID, thenID, edgeType::controlDependenceEdge);
        addNodeEmbedding(sti.Then, thenID);
        ifBegin = handleStmt(is->getThen(), thenID, edgeType::controlDependenceEdge, operationType::inBranch);
      }
      if (ifBegin != -1) ifEnd = totalNodeNum - 1;
      
      if (nullptr != is->getElse()) {
        int elseID = totalNodeNum++;
        PDGNode *elseNode = new PDGNode("ELSE", elseID);
        addNode(elseNode);
        addEdges(currentID, elseID, edgeType::controlDependenceEdge);
        addNodeEmbedding(sti.Else, elseID);
        elseBegin = handleStmt(is->getElse(), elseID, edgeType::controlDependenceEdge, operationType::inBranch);
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
      addNodeEmbedding(sti.ObjCAtTryStmt, currentID);
      ObjCAtTryStmt* ocats = cast<ObjCAtTryStmt>(stmt);
      handleStmt(ocats->getTryBody(), currentID, edgeType::controlDependenceEdge, operationType::inBranch);
      break;
    }

    case Stmt::ObjCForCollectionStmtClass: {
      addNodeEmbedding(sti.ObjCForCollectionStmt, currentID);
      ObjCForCollectionStmt* ocfcs = cast<ObjCForCollectionStmt>(stmt);
      handleStmt(ocfcs->getBody(), currentID, edgeType::controlDependenceEdge, operationType::inBranch);
      break;
    }

    case Stmt::SEHFinallyStmtClass: {
      addNodeEmbedding(sti.SEHFinallyStmt, currentID);
      SEHFinallyStmt* sfs = cast<SEHFinallyStmt>(stmt);
      handleStmt(sfs->getBlock(), currentID, edgeType::controlDependenceEdge, operationType::inBranch);
      break;
    }

    case Stmt::SEHTryStmtClass: {
      addNodeEmbedding(sti.SEHTryStmt, currentID);
      SEHTryStmt* sts = cast<SEHTryStmt>(stmt);
      handleStmt(sts->getTryBlock(), currentID, edgeType::controlDependenceEdge, operationType::inBranch);
      break;
    }

    case Stmt::SwitchStmtClass: {
      addNodeEmbedding(sti.SwitchStmt, currentID);
      SwitchStmt* ss = cast<SwitchStmt>(stmt);
      handleStmt(ss->getCond(), currentID, edgeType::astEdge, operType);
      handleStmt(ss->getBody(), currentID, edgeType::controlDependenceEdge, operationType::inBranch);
      break;
    }

    case Stmt::WhileStmtClass: {
      addNodeEmbedding(sti.WhileStmt, currentID);
      WhileStmt* ws = cast<WhileStmt>(stmt);
      handleStmt(ws->getCond(), currentID, edgeType::astEdge, operType);
      handleStmt(ws->getBody(), currentID, edgeType::controlDependenceEdge, operationType::inBranch);
      break;
    }

    case Stmt::AddrLabelExprClass: {          // used for goto stmt
      addNodeEmbedding(sti.AddrLabelExpr, currentID);
      break;
    }

    case Stmt::BinaryConditionalOperatorClass: {
      addNodeEmbedding(sti.BinaryConditionalOperator, currentID);
      BinaryConditionalOperator* bco = cast<BinaryConditionalOperator>(stmt);
      handleStmt(bco->getCond(), currentID, edgeType::astEdge, operationType::read);
      handleStmt(bco->getTrueExpr(), currentID, edgeType::astEdge, operationType::inBranch);
      handleStmt(bco->getFalseExpr(), currentID, edgeType::astEdge, operationType::inBranch);
      break;
    }

    case Stmt::BinaryOperatorClass: {
      addNodeEmbedding(sti.BinaryOperator, currentID);
      BinaryOperator* bo = cast<BinaryOperator>(stmt);

      std::string opcodeName = bo->getOpcodeStr().str();
      int opcodeID = totalNodeNum++;
      PDGNode *opcodeNode = new PDGNode(opcodeName, opcodeID);
      addNode(opcodeNode);
      addEdges(currentID, opcodeID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(opcodeName), opcodeID);

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
            handleStmt(bo->getLHS(), opcodeID, edgeType::astEdge, operationType::readAndConditionalWrite);
          else
            handleStmt(bo->getLHS(), opcodeID, edgeType::astEdge, operationType::readAndWrite);
        }
      else
        handleStmt(bo->getLHS(), opcodeID, edgeType::astEdge, operationType::read);

      handleStmt(bo->getRHS(), opcodeID, edgeType::astEdge, operationType::read);
      break;
    }

    case Stmt::BlockExprClass:
      addNodeEmbedding(sti.BlockExpr, currentID);
      break;
      
    case Stmt::BreakStmtClass:
      addNodeEmbedding(sti.BreakStmt, currentID);
      break;
      
    case Stmt::CallExprClass: {
      addNodeEmbedding(sti.CallExpr, currentID);
      CallExpr* ce = cast<CallExpr>(stmt);

      handleStmt(ce->getCallee(), currentID, edgeType::astEdge, operationType::read);

      int argIdx = 0;
      while(argIdx < ce->getNumArgs()) {
        handleStmt(ce->getArg(argIdx), currentID, edgeType::astEdge, operationType::read);
        argIdx++;
      }
      break;
    }
      
    case Stmt::CXXOperatorCallExprClass: {
      addNodeEmbedding(sti.CXXOperatorCallExpr, currentID);
      CXXOperatorCallExpr* ce = cast<CXXOperatorCallExpr>(stmt);

      handleStmt(ce->getCallee(), currentID, edgeType::astEdge, operationType::read);

      int argIdx = 0;
      while(argIdx < ce->getNumArgs()) {
        handleStmt(ce->getArg(argIdx), currentID, edgeType::astEdge, operationType::read);
        argIdx++;
      }
      break;
    }
      
    case Stmt::CXXMemberCallExprClass: {
      addNodeEmbedding(sti.CXXMemberCallExpr, currentID);
      CXXMemberCallExpr* ce = cast<CXXMemberCallExpr>(stmt);

      handleStmt(ce->getCallee(), currentID, edgeType::astEdge, operationType::read);

      int argIdx = 0;
      while(argIdx < ce->getNumArgs()) {
        handleStmt(ce->getArg(argIdx), currentID, edgeType::astEdge, operationType::read);
        argIdx++;
      }
      break;
    }
      
    case Stmt::UserDefinedLiteralClass: {
      addNodeEmbedding(sti.UserDefinedLiteral, currentID);
      UserDefinedLiteral* udl = cast<UserDefinedLiteral>(stmt);

      handleStmt(udl->getCallee(), currentID, edgeType::astEdge, operationType::read);

      int argIdx = 0;
      while(argIdx < udl->getNumArgs()) {
        handleStmt(udl->getArg(argIdx), currentID, edgeType::astEdge, operationType::read);
        argIdx++;
      }
      break;
    }
      
    case Stmt::ChooseExprClass: {
      addNodeEmbedding(sti.ChooseExpr, currentID);
      ChooseExpr* ce = cast<ChooseExpr>(stmt);
      handleStmt(ce->getCond(), currentID, edgeType::astEdge, operType);
      handleStmt(ce->getLHS(), currentID, edgeType::astEdge, operationType::inBranch);
      handleStmt(ce->getRHS(), currentID, edgeType::astEdge, operationType::inBranch);
      break;
    }
      
    case Stmt::ConditionalOperatorClass: {
      addNodeEmbedding(sti.ConditionalOperator, currentID);
      ConditionalOperator* co = cast<ConditionalOperator>(stmt);
      handleStmt(co->getCond(), currentID, edgeType::astEdge, operType);
      handleStmt(co->getTrueExpr(), currentID, edgeType::astEdge, operationType::inBranch);
      handleStmt(co->getFalseExpr(), currentID, edgeType::astEdge, operationType::inBranch);
      break;
    }
      
    case Stmt::ContinueStmtClass:
      addNodeEmbedding(sti.ContinueStmt, currentID);
      break;
      
    case Stmt::CXXCatchStmtClass: {
      addNodeEmbedding(sti.CXXCatchStmt, currentID);
      CXXCatchStmt* ccs = cast<CXXCatchStmt>(stmt);

      if (nullptr != ccs->getExceptionDecl()) {
        VarDecl* exceptionDecl = ccs->getExceptionDecl();
        int exceptionDeclID = totalNodeNum++;
        PDGNode *excetionDeclNode = new PDGNode(common::getString_of_VarDecl(exceptionDecl), exceptionDeclID);
        addNode(excetionDeclNode);
        addEdges(currentID, exceptionDeclID, edgeType::astEdge);
        addNodeEmbedding(sti.DeclStmt, exceptionDeclID);

        int exceptionVarNodeID = totalNodeNum++;
        PDGNode *excetionVarNode = new PDGNode(exceptionDecl->getNameAsString(), exceptionVarNodeID);
        addNode(excetionVarNode);
        addEdges(exceptionDeclID, exceptionVarNodeID, edgeType::astEdge);
        addNodeEmbedding(dict->getToken(exceptionDecl->getNameAsString()), exceptionVarNodeID);
        excetionVarNode->addWriteVars(exceptionDecl->getGlobalID());
      }

      handleStmt(ccs->getHandlerBlock(), currentID, edgeType::controlDependenceEdge, operationType::inBranch);
      break;
    }
      
    case Stmt::ExprWithCleanupsClass:
      addNodeEmbedding(sti.ExprWithCleanups, currentID);
      break;
      
    case Stmt::CXXDefaultArgExprClass: {
      addNodeEmbedding(sti.CXXDefaultArgExpr, currentID);
      CXXDefaultArgExpr* cdae = cast<CXXDefaultArgExpr>(stmt);
      handleStmt(cdae->getExpr(), currentID, edgeType::astEdge, operType);
      break;
    }
      
    case Stmt::CXXDefaultInitExprClass: {
      addNodeEmbedding(sti.CXXDefaultInitExpr, currentID);
      CXXDefaultInitExpr* cdie = cast<CXXDefaultInitExpr>(stmt);
      handleStmt(cdie->getExpr(), currentID, edgeType::astEdge, operType);
      break;
    }
      
    case Stmt::CXXBindTemporaryExprClass: {
      addNodeEmbedding(sti.CXXBindTemporaryExpr, currentID);
      CXXBindTemporaryExpr* cbte = cast<CXXBindTemporaryExpr>(stmt);
      handleStmt(cbte->getSubExpr(), currentID, edgeType::astEdge, operType);
      break;
    }
      
    case Stmt::CXXConstructExprClass: {
      addNodeEmbedding(sti.CXXConstructExpr, currentID);
      CXXConstructExpr* cce = cast<CXXConstructExpr>(stmt);

      int constructorID = totalNodeNum++;
      std::string constructorName = cce->getConstructor()->getNameAsString();
      PDGNode* constructorNode = new PDGNode(constructorName, constructorID);
      addNode(constructorNode);
      addEdges(currentID, constructorID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(constructorName), constructorID);

      int argIdx = 0;
      while(argIdx < cce->getNumArgs()) {
        handleStmt(cce->getArg(argIdx), currentID, edgeType::astEdge, operType);
        argIdx++;
      }
      break;
    }
      
    case Stmt::CXXNewExprClass: {
      addNodeEmbedding(sti.CXXNewExpr, currentID);
      CXXNewExpr* cne = cast<CXXNewExpr>(stmt);
      handleStmt(const_cast<CXXConstructExpr*>(cne->getConstructExpr()), currentID, edgeType::astEdge, operType);
      break;
    }
      
    case Stmt::CXXDeleteExprClass: {
      addNodeEmbedding(sti.CXXDeleteExpr, currentID);
      CXXDeleteExpr* cde = cast<CXXDeleteExpr>(stmt);
      handleStmt(cde->getArgument(), currentID, edgeType::astEdge, operType);
      break;
    }
      
    case Stmt::CXXFunctionalCastExprClass: {
      addNodeEmbedding(sti.CXXFunctionalCastExpr, currentID);
      CXXFunctionalCastExpr* cfce = cast<CXXFunctionalCastExpr>(stmt);
      handleStmt(cfce->getSubExpr(), currentID, edgeType::astEdge, operType);
      break;
    }
      
    case Stmt::CXXTemporaryObjectExprClass: {
      addNodeEmbedding(sti.CXXTemporaryObjectExpr, currentID);
      CXXTemporaryObjectExpr* ctoe = cast<CXXTemporaryObjectExpr>(stmt);
      int argIdx = 0;
      while(argIdx < ctoe->getNumArgs()) {
        handleStmt(ctoe->getArg(argIdx), currentID, edgeType::astEdge, operType);
        argIdx++;
      }
      break;
    }
      
    case Stmt::CXXThrowExprClass: {
      addNodeEmbedding(sti.CXXThrowExpr, currentID);
      CXXThrowExpr* cte = cast<CXXThrowExpr>(stmt);
      handleStmt(cte->getSubExpr(), currentID, edgeType::astEdge, operType);
      break;
    }
      
    case Stmt::DeclStmtClass: {
      addNodeEmbedding(sti.DeclStmt, currentID);
      DeclStmt* ds = cast<DeclStmt>(stmt);
      if (ds->isSingleDecl()) {
        Decl* decl = ds->getSingleDecl();
        if (VarDecl* vd = dyn_cast<VarDecl>(decl)) {
          int typeNodeID = totalNodeNum++;
          PDGNode *typeNode = new PDGNode(vd->getType().getAsString(), typeNodeID);
          addNode(typeNode);
          addEdges(currentID, typeNodeID, edgeType::astEdge);
          addNodeEmbedding(dict->getToken(vd->getNameAsString()), typeNodeID);

          int varNodeID = totalNodeNum++;
          PDGNode *varNode = new PDGNode(vd->getNameAsString(), varNodeID);
          addNode(varNode);
          addEdges(currentID, varNodeID, edgeType::astEdge);
          addNodeEmbedding(dict->getToken(vd->getNameAsString()), varNodeID);
          varNode->addWriteVars(vd->getGlobalID());

          if (vd->hasInit() && nullptr != vd->getInit()) {
            handleStmt(vd->getInit(), currentID, edgeType::astEdge, operType);
          }
        }
        else
          handleDecl(decl, currentID, edgeType::astEdge, operType, false);
      }
      else {
        auto declGroup = ds->getDeclGroup();
        for (auto groupIter = declGroup.begin(); groupIter != declGroup.end(); ++groupIter) {
          handleDecl(*groupIter, currentID, edgeType::astEdge, operType, true);
        }
      }
      break;
    }
      
    case Stmt::DefaultStmtClass: {
      addNodeEmbedding(sti.DefaultStmt, currentID);
      DefaultStmt* defaultstmt = cast<DefaultStmt>(stmt);
      handleStmt(defaultstmt->getSubStmt(), currentID, edgeType::controlDependenceEdge, operationType::inBranch);
      break;
    }
      
    case Stmt::GotoStmtClass: {
      addNodeEmbedding(sti.GotoStmt, currentID);

      GotoStmt* gs = cast<GotoStmt>(stmt);
      std::string gotoLabel = gs->getLabel()->getNameAsString();
      int gotoLabelID = totalNodeNum++;
      PDGNode *gotoLabelNode = new PDGNode(gotoLabel, gotoLabelID);
      addNode(gotoLabelNode);
      addEdges(currentID, gotoLabelID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(gotoLabel), gotoLabelID);
      gotoLabelNode->addGotoVars(gs->getLabel()->getGlobalID());

      break;
    }
      
    case Stmt::GCCAsmStmtClass:
      addNodeEmbedding(sti.GCCAsmStmt, currentID);
      break;
      
    case Stmt::ImplicitCastExprClass: {
      addNodeEmbedding(sti.ImplicitCastExpr, currentID);
      ImplicitCastExpr* ice = cast<ImplicitCastExpr>(stmt);
      handleStmt(ice->getSubExpr(), currentID, edgeType::astEdge, operType);
      break;
    }
      
    case Stmt::ConstantExprClass:
      addNodeEmbedding(sti.ConstantExpr, currentID);
      break;
      
    case Stmt::IndirectGotoStmtClass: {
      addNodeEmbedding(sti.IndirectGotoStmt, currentID);
      IndirectGotoStmt* igs = cast<IndirectGotoStmt>(stmt);
      handleStmt(igs->getTarget(), currentID, edgeType::astEdge, operationType::read);
      break;
    }
      
    case Stmt::LabelStmtClass: {                       // used for goto label
      addNodeEmbedding(sti.LabelStmt, currentID);
      LabelStmt* ls = cast<LabelStmt>(stmt);

      std::string labelName = ls->getDecl()->getNameAsString();
      int labelID = totalNodeNum++;
      PDGNode *labelNode = new PDGNode(labelName, labelID);
      addNode(labelNode);
      addEdges(currentID, labelID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(labelName), labelID);
      labelNode->addWriteVars(ls->getDecl()->getGlobalID());

      handleStmt(ls->getSubStmt(), currentID, edgeType::controlDependenceEdge, operType);

      break;
    }
      
    case Stmt::LambdaExprClass: {
      addNodeEmbedding(sti.LambdaExpr, currentID);
      LambdaExpr* le = cast<LambdaExpr>(stmt);
      handleStmt(le->getBody(), currentID, edgeType::astEdge, operType);
      break;
    }
      
    case Stmt::MaterializeTemporaryExprClass:
      addNodeEmbedding(sti.MaterializeTemporaryExpr, currentID);
      break;
      
    case Stmt::MemberExprClass: {
      addNodeEmbedding(sti.MemberExpr, currentID);
      MemberExpr* me = cast<MemberExpr>(stmt);
      
      std::string memberName = me->getMemberDecl()->getNameAsString();
      int memberID = totalNodeNum++;
      PDGNode *memberNode = new PDGNode(memberName, memberID);
      addNode(memberNode);
      addEdges(currentID, memberID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(memberName), memberID);

      if (operType == operationType::write) {
        nodeList[memberID]->addWriteVars(me->getMemberDecl()->getGlobalID());
      }
      else if (operType == operationType::conditionalWrite) {
        nodeList[memberID]->addConditionalWriteVars(me->getMemberDecl()->getGlobalID());
      }
      else if (operType == operationType::readAndWrite) {
        nodeList[memberID]->addReadVars(me->getMemberDecl()->getGlobalID());
        nodeList[memberID]->addWriteVars(me->getMemberDecl()->getGlobalID());
      }
      else if (operType == operationType::readAndConditionalWrite) {
        nodeList[memberID]->addReadVars(me->getMemberDecl()->getGlobalID());
        nodeList[memberID]->addConditionalWriteVars(me->getMemberDecl()->getGlobalID());
      }
      else {
        nodeList[memberID]->addReadVars(me->getMemberDecl()->getGlobalID());
      }

      handleStmt(me->getBase(), currentID, edgeType::astEdge, operType);
      break;
    }
      
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
      handleStmt(rt->getRetValue(), currentID, edgeType::astEdge, operationType::read);
      break;
    }
      
    case Stmt::CoreturnStmtClass: {
      addNodeEmbedding(sti.CoreturnStmt, currentID);
      CoreturnStmt* cs = cast<CoreturnStmt>(stmt);
      handleStmt(cs->getOperand(), currentID, edgeType::astEdge, operationType::read);
      handleStmt(cs->getPromiseCall(), currentID, edgeType::astEdge, operationType::read);
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
      
    case Stmt::StmtExprClass: {
      addNodeEmbedding(sti.StmtExpr, currentID);
      StmtExpr* se = cast<StmtExpr>(stmt);
      handleStmt(se->getSubStmt(), currentID, edgeType::astEdge, operType);
      break;
    }
    
    case Stmt::UnaryOperatorClass: {
      addNodeEmbedding(sti.UnaryOperator, currentID);
      UnaryOperator* uo = cast<UnaryOperator>(stmt);
      auto opCode = uo->getOpcode();

      std::string opcodeName = clang::UnaryOperator::getOpcodeStr(opCode).str();
      int opcodeID = totalNodeNum++;
      PDGNode *memberNode = new PDGNode(opcodeName, opcodeID);
      addNode(memberNode);
      addEdges(currentID, opcodeID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(opcodeName), opcodeID);

      if (opCode == clang::UnaryOperatorKind::UO_PostDec ||
          opCode == clang::UnaryOperatorKind::UO_PostInc ||
          opCode == clang::UnaryOperatorKind::UO_PreDec ||
          opCode == clang::UnaryOperatorKind::UO_PreInc) {
        if (operType == operationType::inBranch || operationType::conditionalWrite || operationType::readAndConditionalWrite)
          handleStmt(uo->getSubExpr(), opcodeID, edgeType::astEdge, operationType::readAndConditionalWrite);
        else
          handleStmt(uo->getSubExpr(), opcodeID, edgeType::astEdge, operationType::readAndWrite);
      }
      else
        handleStmt(uo->getSubExpr(), opcodeID, edgeType::astEdge, operationType::read);
      break;
    }
      
    case Stmt::IntegerLiteralClass: {
      addNodeEmbedding(sti.IntegerLiteral, currentID);
      IntegerLiteral* il = cast<IntegerLiteral>(stmt);

      int valueID = totalNodeNum++;
      PDGNode *valueNode = new PDGNode(std::to_string(il->getValue().getLimitedValue()), valueID);
      addNode(valueNode);
      addEdges(currentID, valueID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(std::to_string(il->getValue().getLimitedValue())), valueID);
      break;
    }

    case Stmt::FloatingLiteralClass: {
      addNodeEmbedding(sti.FloatingLiteral, currentID);
      FloatingLiteral* fl = cast<FloatingLiteral>(stmt);

      int valueID = totalNodeNum++;
      PDGNode *valueNode = new PDGNode(std::to_string(fl->getValue().convertToFloat()), valueID);
      addNode(valueNode);
      addEdges(currentID, valueID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(std::to_string(fl->getValue().convertToFloat())), valueID);
      break;
    }

    case Stmt::StringLiteralClass: {
      addNodeEmbedding(sti.StringLiteral, currentID);
      clang::StringLiteral* sl = cast<clang::StringLiteral>(stmt);

      std::string stringInfo;
      try {
        stringInfo = sl->getString().str();
      }
      catch (std::exception) {
        stringInfo = "std::string";
      }

      std::vector<std::string> wordInfo = splitString(stringInfo, " ");
      for (auto w : wordInfo) {
        int valueID = totalNodeNum++;
        PDGNode *valueNode = new PDGNode(w, valueID);
        addNode(valueNode);
        addEdges(currentID, valueID, edgeType::astEdge);
        addNodeEmbedding(dict->getToken(w), valueID);
      }
      break;
    }

    case Stmt::DeclRefExprClass: {
      addNodeEmbedding(sti.DeclRefExpr, currentID);
      DeclRefExpr* drf = cast<DeclRefExpr>(stmt);
      // addNodeEmbedding(dict->getToken(drf->getDecl()->getNameAsString()), currentID);

      // This code used to add DeclRefExpr as a single node
      int declRefID = totalNodeNum++;
      PDGNode *declRefNode = new PDGNode(drf->getDecl()->getNameAsString(), declRefID);
      addNode(declRefNode);
      addEdges(currentID, declRefID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(drf->getDecl()->getNameAsString()), declRefID);

      switch (operType)
      {
      case operationType::read:
        declRefNode->addReadVars(drf->getDecl()->getGlobalID());
        break;
      case operationType::write:
        declRefNode->addWriteVars(drf->getDecl()->getGlobalID());
        break;
      case operationType::conditionalWrite:
        declRefNode->addConditionalWriteVars(drf->getDecl()->getGlobalID());
        break;
      case operationType::readAndConditionalWrite:
        declRefNode->addReadVars(drf->getDecl()->getGlobalID());
        declRefNode->addConditionalWriteVars(drf->getDecl()->getGlobalID());
        break;
      case operationType::inBranch:
        declRefNode->addReadVars(drf->getDecl()->getGlobalID());
        break;
      case operationType::defaultOperation:
        declRefNode->addReadVars(drf->getDecl()->getGlobalID());
        break;
      default:
        std::cout << "Current var is: " << drf->getDecl()->getNameAsString() << ", node id is: "<< std::to_string(declRefID) << std::endl;
        assert(false && "can not get var type");
        break;
      }
      break;
    }

    case Stmt::ArraySubscriptExprClass:{
      addNodeEmbedding(sti.ArraySubscriptExpr, currentID);
      ArraySubscriptExpr* ase = cast<ArraySubscriptExpr>(stmt);
      handleStmt(ase->getLHS(), currentID, edgeType::astEdge, operType);
      handleStmt(ase->getRHS(), currentID, edgeType::astEdge, operType);
      break;
    }

    case Stmt::InitListExprClass: {
      addNodeEmbedding(sti.InitListExpr, currentID);
      InitListExpr* ile = cast<InitListExpr>(stmt);
      for (int i = 0; i < ile->getNumInits(); ++i) {
        handleStmt(ile->getInit(i), currentID, edgeType::astEdge, operType);
      }
      break;
    }

    case Stmt::CXXBoolLiteralExprClass: {
      addNodeEmbedding(sti.CXXBoolLiteralExpr, currentID);
      CXXBoolLiteralExpr* cble = cast<CXXBoolLiteralExpr>(stmt);
      if (cble->getValue()) {
        int trueID = totalNodeNum++;
        PDGNode *trueNode = new PDGNode("TRUE", trueID);
        addNode(trueNode);
        addEdges(currentID, trueID, edgeType::astEdge);
        addNodeEmbedding(sti.True, trueID);
      }
      else {
        int falseID = totalNodeNum++;
        PDGNode *falseNode = new PDGNode("FALSE", falseID);
        addNode(falseNode);
        addEdges(currentID, falseID, edgeType::astEdge);
        addNodeEmbedding(sti.False, falseID);
      }
      break;
    }

    case Stmt::CharacterLiteralClass: {
      addNodeEmbedding(sti.CharacterLiteral, currentID);
      clang::CharacterLiteral* cl = cast<clang::CharacterLiteral>(stmt);
      
      char charC = (char)cl->getValue();
      std::string charName(1, charC);

      int charID = totalNodeNum++;
      PDGNode *charNode = new PDGNode(charName, charID);
      addNode(charNode);
      addEdges(currentID, charID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(charName), charID);  
      break;    
    }

    case Stmt::CStyleCastExprClass: {
      addNodeEmbedding(sti.CStyleCastExpr, currentID);
      clang::CStyleCastExpr* csce = cast<clang::CStyleCastExpr>(stmt);
      handleStmt(csce->getSubExpr(), currentID, edgeType::astEdge, operType);
      break;
    }

    case Stmt::ParenExprClass: {
      addNodeEmbedding(sti.ParenExpr, currentID);
      clang::ParenExpr* pe = cast<clang::ParenExpr>(stmt);
      handleStmt(pe->getSubExpr(), currentID, edgeType::astEdge, operType);
      break;
    }

    case Stmt::ParenListExprClass: {
      addNodeEmbedding(sti.ParenListExpr, currentID);
      clang::ParenListExpr* ple = cast<clang::ParenListExpr>(stmt);

      unsigned argIter = 0;
      while (argIter < ple->getNumExprs()) {
        handleStmt(ple->getExpr(argIter), currentID, edgeType::astEdge, operType);
        argIter++;
      }
      break;
    }

    case Stmt::CXXStaticCastExprClass: {
      addNodeEmbedding(sti.CXXStaticCastExpr, currentID);
      clang::CXXStaticCastExpr* csce = cast<clang::CXXStaticCastExpr>(stmt);
      // TODO: handle the type
      handleStmt(csce->getSubExpr(), currentID, edgeType::astEdge, operType);
      break;
    }

    case Stmt::PredefinedExprClass: {
      addNodeEmbedding(sti.PredefinedExpr, currentID);
      PredefinedExpr* pe = cast<PredefinedExpr>(stmt);
      handleStmt(pe->getFunctionName(), currentID, edgeType::astEdge, operType);
      break;
    }

    case Stmt::CXXNullPtrLiteralExprClass: {
      addNodeEmbedding(sti.CXXNullPtrLiteralExpr, currentID);
      break;
    }

    case Stmt::CXXReinterpretCastExprClass: {
      addNodeEmbedding(sti.CXXReinterpretCastExpr, currentID);
      // TODO: handle the type
      clang::CXXReinterpretCastExpr* crce = cast<clang::CXXReinterpretCastExpr>(stmt);
      handleStmt(crce->getSubExpr(), currentID, edgeType::astEdge, operType);
      break;
    }

    case Stmt::CXXConstCastExprClass: {
      addNodeEmbedding(sti.CXXConstCastExpr, currentID);
      // TODO: handle the type
      clang::CXXConstCastExpr* ccce = cast<clang::CXXConstCastExpr>(stmt);
      handleStmt(ccce->getSubExpr(), currentID, edgeType::astEdge, operType);
      break;
    }

    case Stmt::GNUNullExprClass: {
      addNodeEmbedding(sti.GNUNullExpr, currentID);
      // TODO: get real type
      break;
    }

    case Stmt::CompoundAssignOperatorClass: {
      addNodeEmbedding(sti.CompoundAssignOperator, currentID);
      CompoundAssignOperator* bo = cast<CompoundAssignOperator>(stmt);

      std::string opcodeName = bo->getOpcodeStr().str();
      int opcodeID = totalNodeNum++;
      PDGNode *opcodeNode = new PDGNode(opcodeName, opcodeID);
      addNode(opcodeNode);
      addEdges(currentID, opcodeID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(opcodeName), opcodeID);

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
            handleStmt(bo->getLHS(), opcodeID, edgeType::astEdge, operationType::readAndConditionalWrite);
          else
            handleStmt(bo->getLHS(), opcodeID, edgeType::astEdge, operationType::readAndWrite);
        }
      else
        handleStmt(bo->getLHS(), opcodeID, edgeType::astEdge, operationType::read);

      handleStmt(bo->getRHS(), opcodeID, edgeType::astEdge, operationType::read);
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
      PDGNode *memberNode = new PDGNode(memberName, memberID);
      addNode(memberNode);
      addEdges(currentID, memberID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(memberName), memberID);

      handleStmt(me->getBase(), currentID, edgeType::astEdge, operType);
      break;
    }

    case Stmt::ImplicitValueInitExprClass: {
      addNodeEmbedding(sti.ImplicitValueInitExpr, currentID);

      ImplicitValueInitExpr* ivie = cast<ImplicitValueInitExpr>(stmt);
      std::string ivieName = common::getString_of_Expr(ivie);
      int ivieID = totalNodeNum++;
      PDGNode *ivieNode = new PDGNode(ivieName, ivieID);
      addNode(ivieNode);
      addEdges(currentID, ivieID, edgeType::astEdge);
      addNodeEmbedding(sti.ImplicitValueInitExpr, ivieID);
      break;
    }

    case Stmt::VAArgExprClass: {
      addNodeEmbedding(sti.VAArgExpr, currentID);
      clang::VAArgExpr* vae = cast<clang::VAArgExpr>(stmt);
      handleStmt(vae->getSubExpr(), currentID, edgeType::astEdge, operType);
      break;
    }

    case Stmt::SizeOfPackExprClass: {
      addNodeEmbedding(sti.SizeOfPackExpr, currentID);
      clang::SizeOfPackExpr* sope = cast<clang::SizeOfPackExpr>(stmt);
      
      std::string packName = sope->getPack()->getNameAsString();
      int packID = totalNodeNum++;
      PDGNode *packNode = new PDGNode(packName, packID);
      addNode(packNode);
      addEdges(currentID, packID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(packName), packID);
      break;
    }

    case Stmt::PackExpansionExprClass: {
      addNodeEmbedding(sti.PackExpansionExpr, currentID);
      clang::PackExpansionExpr* pee = cast<clang::PackExpansionExpr>(stmt);
      handleStmt(pee->getPattern(), currentID, edgeType::astEdge, operType);
      break;
    }

    case Stmt::CXXDynamicCastExprClass: {
      addNodeEmbedding(sti.CXXDynamicCastExpr, currentID);
      // TODO: can not analysis the type
      clang::CXXDynamicCastExpr* cdce = cast<clang::CXXDynamicCastExpr>(stmt);
      handleStmt(cdce->getSubExpr(), currentID, edgeType::astEdge, operType);
      break;
    }

    case Stmt::CXXScalarValueInitExprClass: {
      addNodeEmbedding(sti.CXXScalarValueInitExpr, currentID);

      clang::CXXScalarValueInitExpr* csvie = cast<clang::CXXScalarValueInitExpr>(stmt);
      int typeID = totalNodeNum++;
      std::string typeName = csvie->getTypeSourceInfo()->getType().getAsString();
      PDGNode *typeNode = new PDGNode(typeName, typeID);
      addNode(typeNode);
      addEdges(currentID, typeID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(typeName), typeID);
      break;
    }

    case Stmt::CXXUnresolvedConstructExprClass: {
      addNodeEmbedding(sti.CXXUnresolvedConstructExpr, currentID);

      clang::CXXUnresolvedConstructExpr* cuce = cast<clang::CXXUnresolvedConstructExpr>(stmt);
      std::string typeName = cuce->getTypeSourceInfo()->getType().getAsString();
      int typeID = totalNodeNum++;

      PDGNode *typeNode = new PDGNode(typeName, typeID);
      addNode(typeNode);
      addEdges(currentID, typeID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(typeName), typeID);

      int argIter = 0;
      while (argIter < cuce->getNumArgs()) {
        handleStmt(cuce->getArg(argIter), currentID, edgeType::astEdge, operType);
        argIter++;
      }
      break;
    }

    case Stmt::DependentScopeDeclRefExprClass: {
      addNodeEmbedding(sti.DependentScopeDeclRefExpr, currentID);

      clang::DependentScopeDeclRefExpr* dsdre = cast<clang::DependentScopeDeclRefExpr>(stmt);
      std::string declName = dsdre->getDeclName().getAsString();
      int declID = totalNodeNum++;
      PDGNode *declNode = new PDGNode(declName, declID);
      addNode(declNode);
      addEdges(currentID, declID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(declName), declID);
      // TODO: This DeclRef can not get Decl, and can not get GlobalID
      break;
    }

    case Stmt::OffsetOfExprClass: {
      addNodeEmbedding(sti.OffsetOfExpr, currentID);
      clang::OffsetOfExpr* osoe = cast<clang::OffsetOfExpr>(stmt);

      std::string typeName = osoe->getTypeSourceInfo()->getType().getAsString();
      int typeID = totalNodeNum++;
      PDGNode *typeNode = new PDGNode(typeName, typeID);
      addNode(typeNode);
      addEdges(currentID, typeID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(typeName), typeID);

      int indexIter = 0;
      while(indexIter < osoe->getNumExpressions()) {
        handleStmt(osoe->getIndexExpr(indexIter), currentID, edgeType::astEdge, operType);
        indexIter++;
      }
      break;
    }

    case Stmt::AttributedStmtClass: {
      addNodeEmbedding(sti.AttributedStmt, currentID);

      //TODO: I do not ensure whether there are other subexpr
      clang::AttributedStmt* as = cast<clang::AttributedStmt>(stmt);
      handleStmt(as->getSubStmt(), currentID, edgeType::astEdge, operType);
      break;
    }

    case Stmt::CompoundLiteralExprClass: {
      addNodeEmbedding(sti.CompoundLiteralExpr, currentID);

      clang::CompoundLiteralExpr* cle = cast<clang::CompoundLiteralExpr>(stmt);
      std::string typeName = cle->getTypeSourceInfo()->getType().getAsString();
      int typeID = totalNodeNum++;
      PDGNode *typeNode = new PDGNode(typeName, typeID);
      addNode(typeNode);
      addEdges(currentID, typeID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(typeName), typeID);

      handleStmt(cle->getInitializer(), currentID, edgeType::astEdge, operType);
      break;
    }

    case Stmt::CXXTypeidExprClass: {
      addNodeEmbedding(sti.CXXTypeidExpr, currentID);

      CXXTypeidExpr* cte = cast<CXXTypeidExpr>(stmt);
      std::string typeName = "typeid";
      int typeID = totalNodeNum++;
      PDGNode *typeNode = new PDGNode(typeName, typeID);
      addNode(typeNode);
      addEdges(currentID, typeID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(typeName), typeID);

      if (cte->isTypeOperand()){
        addNodeEmbedding(dict->getToken(cte->getTypeOperandSourceInfo()->getType().getAsString()), currentID);
      }
      else
        handleStmt(cte->getExprOperand(), currentID, edgeType::astEdge, operType);
      
      break;
    }

    case Stmt::UnresolvedMemberExprClass: {
      addNodeEmbedding(sti.UnresolvedMemberExpr, currentID);

      clang::UnresolvedMemberExpr* ume = cast<clang::UnresolvedMemberExpr>(stmt);
      
      std::string memberName = ume->getMemberName().getAsString();
      int memberID = totalNodeNum++;
      PDGNode *memberNode = new PDGNode(memberName, memberID);
      addNode(memberNode);
      addEdges(currentID, memberID, edgeType::astEdge);
      addNodeEmbedding(dict->getToken(memberName), memberID);

      handleStmt(ume->getBase(), currentID, edgeType::astEdge, operType);
      break;
    }

    case Stmt::TypeTraitExprClass: {
      addNodeEmbedding(sti.TypeTraitExpr, currentID);
      clang::TypeTraitExpr* tte = cast<clang::TypeTraitExpr>(stmt);

      int argIter = 0;
      while(argIter < tte->getNumArgs()) {
        std::string argName = tte->getArg(argIter)->getType().getAsString();
        int argID = totalNodeNum++;

        PDGNode *argNode = new PDGNode(argName, argID);
        addNode(argNode);
        addEdges(currentID, argID, edgeType::astEdge);
        addNodeEmbedding(dict->getToken(argName), argID);
        
        ++argIter;
      }
      break;
    }

    default:
      addNodeEmbedding(sti.Other, currentID);
      stmt->dumpColor();
      // assert(0);
      break;
  }

  return currentID;
}

int PDG::handleDecl(Decl* decl, int rootID, edgeType et, operationType operType, bool isAddNewNode) {
  Stmt* convert_stmt = (Stmt*)decl;

  if (VarDecl* vd = dyn_cast<VarDecl>(decl)) {
    if (isAddNewNode) {
      int declID = totalNodeNum++;
      PDGNode *declNode = new PDGNode(common::getString_of_VarDecl(vd), declID);
      addNode(declNode);
      addEdges(rootID, declID, et);
      addNodeEmbedding(sti.DeclStmt, declID);
      rootID = declID;
    }

    int typeNodeID = totalNodeNum++;
    PDGNode *typeNode = new PDGNode(vd->getType().getAsString(), typeNodeID);
    addNode(typeNode);
    addEdges(rootID, typeNodeID, edgeType::astEdge);
    addNodeEmbedding(dict->getToken(vd->getType().getAsString()), typeNodeID);

    int varNodeID = totalNodeNum++;
    PDGNode *varNode = new PDGNode(vd->getNameAsString(), varNodeID);
    addNode(varNode);
    addEdges(rootID, varNodeID, edgeType::astEdge);
    addNodeEmbedding(dict->getToken(vd->getNameAsString()), varNodeID);
    varNode->addWriteVars(vd->getGlobalID());

    if (vd->hasInit() && nullptr != vd->getInit()) {
      handleStmt(vd->getInit(), rootID, edgeType::astEdge, operType);
    }

    return varNodeID;
  }
  else if (EnumDecl* ed = dyn_cast<EnumDecl>(decl)) {
    int enumNodeID = totalNodeNum++;
    PDGNode *enumNode = new PDGNode("enum", enumNodeID);
    addNode(enumNode);
    addEdges(rootID, enumNodeID, edgeType::astEdge);
    addNodeEmbedding(dict->getToken("enum"), enumNodeID);
    
    int nameID = totalNodeNum++;
    PDGNode *nameNode = new PDGNode(ed->getNameAsString(), nameID);
    addNode(nameNode);
    addEdges(rootID, nameID, edgeType::astEdge);
    addNodeEmbedding(dict->getToken(ed->getNameAsString()), nameID);
    nodeList[nameID]->addWriteVars(ed->getGlobalID());

    for (auto enumIter = ed->enumerator_begin(); enumIter != ed->enumerator_end(); ++enumIter) {
      if (EnumConstantDecl* esd = dyn_cast<EnumConstantDecl>(*enumIter)) {
        handleDecl(esd, rootID, edgeType::astEdge, operationType::write, true);
      }
    }
  }
  else if (EnumConstantDecl* esd = dyn_cast<EnumConstantDecl>(decl)) {
    int esdID = totalNodeNum++;
    PDGNode *esdNode = new PDGNode(esd->getNameAsString(), esdID);
    addNode(esdNode);
    addEdges(rootID, esdID, et);
    addNodeEmbedding(dict->getToken(esd->getNameAsString()), esdID);
    if (operType == operationType::write) {
      nodeList[esdID]->addWriteVars(esd->getGlobalID());
    }
  }
  else if (TypeAliasDecl* tad = dyn_cast<TypeAliasDecl>(decl)) {
    std::string tadName = tad->getName().str();
    int tadNameID = totalNodeNum++;
    PDGNode *tadNameNode = new PDGNode(tadName, tadNameID);
    addNode(tadNameNode);
    addEdges(rootID, tadNameID, et);
    addNodeEmbedding(dict->getToken(tadName), tadNameID);
  }
  else if (TypedefDecl* td = dyn_cast<TypedefDecl>(decl)) {
    int typeDefID = totalNodeNum++;
    PDGNode *typeDefNode = new PDGNode("typedef", typeDefID);
    addNode(typeDefNode);
    addEdges(rootID, typeDefID, et);
    addNodeEmbedding(dict->getToken("typedef"), typeDefID);

    int typeID = totalNodeNum++;
    std::string typeName = td->getUnderlyingType().getAsString();
    PDGNode *typeNode = new PDGNode(typeName, typeID);
    addNode(typeNode);
    addEdges(rootID, typeID, et);
    addNodeEmbedding(dict->getToken(typeName), typeID);

    int varID = totalNodeNum++;
    std::string varName = td->getNameAsString();
    PDGNode *varNode = new PDGNode(varName, varID);
    addNode(varNode);
    addEdges(rootID, varID, et);
    addNodeEmbedding(dict->getToken(varName), varID);
  }
  else if (UsingDecl* ud = dyn_cast<UsingDecl>(decl)) {
    int usingID = totalNodeNum++;
    PDGNode *usingNode = new PDGNode("Using", usingID);
    addNode(usingNode);
    addEdges(rootID, usingID, et);
    addNodeEmbedding(dict->getToken("Using"), usingID);

    std::string usingName = ud->getNameAsString();
    int usingNameID = totalNodeNum++;
    PDGNode *usingNameNode = new PDGNode(usingName, usingNameID);
    addNode(usingNameNode);
    addEdges(rootID, usingNameID, et);
    addNodeEmbedding(dict->getToken(usingName), usingNameID);
  }
  else if (StaticAssertDecl* sad = dyn_cast<StaticAssertDecl>(decl)) {
    int staticAssertID = totalNodeNum++;
    PDGNode *staticAssertNode = new PDGNode("static_assert", staticAssertID);
    addNode(staticAssertNode);
    addEdges(rootID, staticAssertID, et);
    addNodeEmbedding(dict->getToken("static_assert"), staticAssertID);

    handleStmt(sad->getAssertExpr(), rootID, edgeType::astEdge, operType);
    handleStmt(sad->getMessage(), rootID, edgeType::astEdge, operType);
  }
  else if (UsingDirectiveDecl* udd = dyn_cast<UsingDirectiveDecl>(decl)) {
    int usingID = totalNodeNum++;
    PDGNode *usingNode = new PDGNode("Using", usingID);
    addNode(usingNode);
    addEdges(rootID, usingID, et);
    addNodeEmbedding(dict->getToken("Using"), usingID);

    std::string usingName = udd->getNameAsString();
    int usingNameID = totalNodeNum++;
    PDGNode *usingNameNode = new PDGNode(usingName, usingNameID);
    addNode(usingNameNode);
    addEdges(rootID, usingNameID, et);
    addNodeEmbedding(dict->getToken(usingName), usingNameID);
  }
  else if (RecordDecl* rd = dyn_cast<RecordDecl>(decl)) {
    // TODO: do not handle the body of RecordDecl
    int typeID = totalNodeNum++;
    std::string typeName;
    if(rd->isClass()) typeName = "class";
    else if (rd->isUnion()) typeName = "union";
    else if (rd->isStruct()) typeName = "struct";
    else typeName = "record";
    PDGNode *typeNode = new PDGNode(typeName, typeID);
    addNode(typeNode);
    addEdges(rootID, typeID, et);
    addNodeEmbedding(dict->getToken(typeName), typeID);

    int nameID = totalNodeNum++;
    std::string nameName = rd->getNameAsString();
    PDGNode *nameNode = new PDGNode(nameName, nameID);
    addNode(nameNode);
    addEdges(rootID, nameID, et);
    addNodeEmbedding(dict->getToken(nameName), nameID);
  }
  else if (CXXRecordDecl* crd = dyn_cast<CXXRecordDecl>(decl)) {
    // TODO: do not handle the body of RecordDecl
    int typeID = totalNodeNum++;
    std::string typeName;
    if(crd->isClass()) typeName = "class";
    else if (crd->isUnion()) typeName = "union";
    else if (crd->isStruct()) typeName = "struct";
    else typeName = "record";
    PDGNode *typeNode = new PDGNode(typeName, typeID);
    addNode(typeNode);
    addEdges(rootID, typeID, et);
    addNodeEmbedding(dict->getToken(typeName), typeID);

    int nameID = totalNodeNum++;
    std::string nameName = crd->getNameAsString();
    PDGNode *nameNode = new PDGNode(nameName, nameID);
    addNode(nameNode);
    addEdges(rootID, nameID, et);
    addNodeEmbedding(dict->getToken(nameName), nameID);
  }
  else if (NamespaceAliasDecl* nad = dyn_cast<NamespaceAliasDecl>(decl)) {
    int namespaceID = totalNodeNum++;
    PDGNode *namespaceNode = new PDGNode("namespace", namespaceID);
    addNode(namespaceNode);
    addEdges(rootID, namespaceID, et);
    addNodeEmbedding(dict->getToken("namespace"), namespaceID);

    int nestedID = totalNodeNum++;
    std::string nestedName = nad->getQualifier()->getAsNamespace()->getNameAsString();
    PDGNode *nestedNode = new PDGNode(nestedName, nestedID);
    addNode(nestedNode);
    addEdges(rootID, nestedID, et);
    addNodeEmbedding(dict->getToken(nestedName), nestedID);

    int aliasID = totalNodeNum++;
    std::string aliasName = nad->getAliasedNamespace()->getNameAsString();
    PDGNode *aliasNode = new PDGNode(aliasName, aliasID);
    addNode(aliasNode);
    addEdges(rootID, aliasID, et);
    addNodeEmbedding(dict->getToken(aliasName), aliasID);
  }
  else if (FunctionDecl* fd = dyn_cast<FunctionDecl>(decl)) {
    if (fd->isExternC()) {
      int externID = totalNodeNum++;
      PDGNode *externNode = new PDGNode("extern", externID);
      addNode(externNode);
      addEdges(rootID, externID, et);
      addNodeEmbedding(dict->getToken("extern"), externID);
    }

    if (!fd->isNoReturn()) {
      int returnID = totalNodeNum++;
      std::string returnName = fd->getReturnType().getAsString();
      PDGNode *returnNode = new PDGNode(returnName, returnID);
      addNode(returnNode);
      addEdges(rootID, returnID, et);
      addNodeEmbedding(dict->getToken(returnName), returnID);
    }

    // Handle the params
    int paramsSize = fd->param_size();
    for (int i = 0; i < paramsSize; ++i) {
      handleDecl(fd->getParamDecl(i), rootID, edgeType::astEdge, operationType::defaultOperation, true);
    }
  }

  else if (LabelDecl* ld = dyn_cast<LabelDecl>(decl)) {
    handleStmt(ld->getStmt(), rootID, edgeType::astEdge, operType);
  }

  else {
    assert((et == edgeType::astEdge) && "ERROR: There is an error in handleDecl.");
    // std::cout<< "There is a decl can not analysis:"<<std::endl;
    // decl->dumpColor();
    // assert(0);
    return rootID;
  }
  return -1;
}

void PDG::computeDataDependence() {
  for (int i = 0; i < nodeList.size(); ++i) {
    PDGNode* currentNode = nodeList[i];
    auto currentReadVars = currentNode->getReadVars();
    auto currentGotoVars = currentNode->getGotoVars();

    if (currentReadVars != -1) {
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
        PDGNode* sourceNode = nodeList[j];
        auto sourceWriteVars = sourceNode->getWriteVars();
        auto sourceReadVars = sourceNode->getReadVars();
        auto sourceConditionalWriteVars = sourceNode->getConditionalWriteVars();

        if (currentReadVars != -1 && currentReadVars == sourceWriteVars) {
          addDataDependenceEdge(sourceNode->getID(), currentNode->getID());
          break;
        }
        if (currentReadVars != -1 && currentReadVars == sourceConditionalWriteVars) {
          addDataDependenceEdge(sourceNode->getID(), currentNode->getID());
        }
      }
    }
    if (currentGotoVars != -1) {
      for (int j = 0; j < nodeList.size(); ++j) {
        PDGNode* sourceNode = nodeList[j];
        auto sourceWriteVars = sourceNode->getWriteVars();
        if (currentGotoVars != -1 && currentGotoVars == sourceWriteVars) {
          addDataDependenceEdge(sourceNode->getID(), currentNode->getID());
        }
      }
    }
  }
}

void PDG::add_CFG_First_Stmts(FunctionDecl* FD){
  //std::cout << "Inside add_CFG_First_Stmts" << std::endl;
  std::unique_ptr<CFG> cfg = std::unique_ptr<CFG>(CFG::buildCFG(
      FD, FD->getBody(), &FD->getASTContext(), CFG::BuildOptions()));
  LangOptions LangOpts;
  LangOpts.CPlusPlus = true;
  //std::cout << "After generating cfg" << std::endl;
  if(cfg == nullptr) return;

  for (CFG::iterator cfgIter = cfg->begin(); cfgIter != cfg->end(); ++cfgIter) {
    if(*cfgIter == nullptr) continue;
    CFGBlock *block = *cfgIter;
    if(block == nullptr) continue;
    const Stmt* first_stmt = get_First_Stmt(block);
    if(first_stmt == nullptr) continue;
    first_stmts.insert(first_stmt);
  }
}

const Stmt* PDG::get_First_Stmt(CFGBlock* block){
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

void PDG::computeCFG(FunctionDecl* FD){
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
    if(bb_first_stmt.count(stmt_src) == 0){
      //std::cout << "cannot find stmt_src: " << block->getBlockID() << "  " << nodeList[0]->getStmtString() << std::endl;
    }
  
    for(CFGBlock::succ_iterator block_iter = block->succ_begin(); block_iter!= block->succ_end(); ++block_iter){
      CFGBlock* succ_block = *block_iter;
      if(succ_block == nullptr) continue;
      
      const Stmt* stmt_dst = get_First_Stmt(succ_block);
      if(stmt_dst == nullptr) continue;
      if(bb_first_stmt.count(stmt_dst) == 0){
        //std::cout << "cannot find stmt_dst: " << succ_block->getBlockID() << "  " << nodeList[0]->getStmtString() << std::endl;
      }

      addEdges(bb_first_stmt[stmt_src], bb_first_stmt[stmt_dst], edgeType::cfgEdge);
    }
    
    //block->dump();
  }
}

std::vector<std::string> PDG::splitString(std::string stmtString, std::string pattern) {
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

void PDG2Graph::transform() {
  int i = 0;
  //int funcNum = funcList.size();
  int failNum = 0;

  assert(funcList1.size() == funcList2.size());

  json allJson = json::array();
  
  for(int j=0;j<funcList1.size();j++){
    FunctionDecl *FD1 = funcList1[j];
    FunctionDecl *FD2 = funcList2[j];

    json current;

    json json1;
    json json2;

    PDG *pdg1 = new PDG(FD1, dict, filename);

    if(json_current == nullptr) continue;
    json1 = json_current;

    PDG *pdg2 = new PDG(FD2, dict, filename);
    if(json_current == nullptr) continue;
    json2 = json_current;

    current["func1"] = json1;
    current["func2"] = json2;
    current["label"] = label?1:0;

    allJson.push_back(current);

    i++;
    common::process_bar(float(i) / funcList1.size());
  }

  std::ofstream os(filename, std::ios::out);
  os << allJson << std::endl;

  //dict->storeDict();

  std::cout<< "There are total " << std::to_string(funcList1.size()) << " functions. " << std::to_string(failNum) << " of them construct pdg failed." << std::endl;
}
