#include "P2A/PointToAnalysis.h"


void PointToAnalysis::ConstructPartialCFG() {
  std::string green = "\033[32m";
  std::string close = "\033[0m";
  std::cout << green << "[+] ConstructPartialCFG" << close << std::endl;
  auto functions = manager->getFunctions();
  auto f_iter = functions.begin();
  auto f_iter_end = functions.end();
  // handle all functions
  int i = 0;

  while (f_iter != f_iter_end) {
    // VarDecls outside FunctionDecls
    // auto vds = astr_iter->second.GetVarDecls();
    // for (auto vd : vds) {
    //   HandleVarDecl(vd, file_node);
    // }

    // FunctionDecls
    // auto fd = manager->getFunctionDecl(*f_iter);
    HandleFuncDecl(*f_iter);
    i++;
    prcoess_bar(float(i) / funcNums);
    // CXXRecordDecls
    // TODO

    // FieldVarDecls
    // TODO

    // CXXMethodDecl
    // TODO

    // path generate test
    // std::unique_ptr<CFG> &fd_cfg = manager->getCFG(*f_iter);
    // std::vector<std::list<CFGBlock *>> path =
    //     getPathInFunc(&(fd_cfg->getEntry()), &(fd_cfg->getExit()));
    // for (auto it1 = path.begin(); it1 != path.end(); ++it1) {
    //   std::cout << "the path is: " << std::endl;
    //   for (auto it2 = (*it1).begin(); it2 != (*it1).end(); ++it2) {
    //     std::cout << (*it2)->getBlockID() << " ";
    //   }
    //   std::cout << std::endl;
    // }
    // std::cout << std::endl;
    // const PTAVar *var_alise = _pvm.getPTAVar(
    //     "/home/zhangchi/SAFE-HW/tests/alise_test/main.cpp:7:3:p");
    // std::set<const PTAVar *> alise =
    //     get_alias_in_func(manager->getFunctionDecl(*f_iter), var_alise);
    // std::cout << "the res size is: " << alise.size() << std::endl;
    // for (auto resIter = alise.begin(); resIter != alise.end(); resIter++) {
    //   std::cout << (*resIter)->get_name() << std::endl;
    // }

    ++f_iter;
  }
  //_pvm.dump();

  if (!config.empty() && config.find("Point_to_test1") != config.end()) {
    if (config.at("Point_to_test1") == "true")
      Point_to_test1();
  }
  if (!config.empty() && config.find("Point_to_test2") != config.end()) {
    if (config.at("Point_to_test2") == "true")
      Point_to_test2();
  }
  if (!config.empty() && config.find("Alias_test1") != config.end()) {
    if (config.at("Alias_test1") == "true")
      Alias_test1();
  }
  if (!config.empty() && config.find("Alias_test2") != config.end()) {
    if (config.at("Alias_test2") == "true")
      Alias_test2();
  }
  if (!config.empty() && config.find("Alias_test3") != config.end()) {
    if (config.at("Alias_test3") == "true")
      Alias_test3();
  }

  return;
}

void PointToAnalysis::HandleFuncDecl(ASTFunction *F) {
  // used to avoid analysis library func, maybe not use
  // if (F->getFunctionName().find("std::") != std::string::npos)
  //   return;
  auto func_decl = manager->getFunctionDecl(F);
  // if (func_decl->getBeginLoc()
  //         .printToString(func_decl->getASTContext().getSourceManager())
  //         .find("/usr/lib/gcc") != std::string::npos)
  //   return;
  // if (func_decl->getBeginLoc()
  //         .printToString(func_decl->getASTContext().getSourceManager())
  //         .find("/usr/include") != std::string::npos)
  //   return;
  // end

  FunctionDecl *FD = manager->getFunctionDecl(F);

  SourceLocation SL = FD->getLocation();
  SourceManager &SM = FD->getASTContext().getSourceManager();
  // //排除系统头文件中的函数
  std::string analysisSystemHeader = "";
  if (!config.empty() && config.find("analysisSystemHeader") != config.end())
    analysisSystemHeader = config.at("analysisSystemHeader");

  if (analysisSystemHeader == "false")
    if (SM.isInSystemHeader(SL) || SM.isInExternCSystemHeader(SL) ||
        SM.isInSystemMacro(SL)) {

      return;
    }

  std::unique_ptr<CFG> &fd_cfg = manager->getCFG(F);
  if (nullptr == fd_cfg || !func_decl->hasBody())
    return;
  // LangOptions LangOpts;
  // LangOpts.CPlusPlus = true;
  // fd_cfg->dump(LangOpts, true);
  auto entry_block = fd_cfg->getEntry();
  auto exit_block = fd_cfg->getExit();
  auto *func_node =
      new FunctionNode(F->getID(), fd_cfg->size(), func_decl->getNameAsString(),
                       func_decl->getType().getAsString(),
                       entry_block.getBlockID(), exit_block.getBlockID());
  unsigned func_id = F->getID();
  if (_func_nodes.find(func_id) != _func_nodes.end()) {
    std::string red = "\033[31m";
    std::string close = "\033[0m";
    std::cout << red << "[!] there is a duplicate in _func_nodes" << std::endl
              << "[!] the function name is: " << F->getFunctionName()
              << std::endl
              << "[!] the function in _func_nodes is: "
              << _func_nodes[func_id]->get_name() << close << std::endl;
    assert(0);
  }
  _func_nodes.insert({func_id, func_node});

  // parameter
  if (func_decl->getNumParams() > 0) {
    // printf(" Parameters: \n");
    for (unsigned i = 0; i < func_decl->getNumParams(); ++i) {
      HandleVarDecl(func_decl->getParamDecl(i), func_id,
                    fd_cfg->getEntry().getBlockID(), i);
    }
  }

  // a function has a return value, the return ver id is the function id
  if (!func_decl->isNoReturn()) {
    if (func_decl->getDeclaredReturnType()->isPointerType()) {
      auto pta_var = _pvm.insertPTAVar(func_decl);
    }
  }
  // Traverse CFG by Deep First
  std::list<CFGBlock> work_list;
  std::set<unsigned> handle_already;
  work_list.push_back(fd_cfg->getEntry());
  while (!work_list.empty()) {
    // Prepare for Handle block stmt
    auto block = work_list.front();
    auto block_id = work_list.front().getBlockID();
    work_list.pop_front();
    if (handle_already.find(block_id) != handle_already.end())
      continue;
    handle_already.insert(block_id);
    auto block_node = func_node->get_block_node(block_id);
    _blockToBlockMap.putBlockNode(func_id, block.getBlockID(), block_node);
    // BlockNode::_kind
    // block->getTerminator();
    // auto term_stmt = block.getTerminatorStmt();
    // if (nullptr != term_stmt) {
    //   // std::cout << block_id << std::endl;
    //   switch (term_stmt->getStmtClass()) {
    //   case Stmt::WhileStmtClass:
    //     block_node->set_kind(BlockNode::_WhileLoop);
    //     break;
    //   case Stmt::ForStmtClass:
    //     block_node->set_kind(BlockNode::_ForLoop);
    //     break;
    //   case Stmt::DoStmtClass:
    //     block_node->set_kind(BlockNode::_DoWhileLoop);
    //     break;
    //   }
    // }
    // BlockNode::_elem_size
    block_node->set_elem_size(block.size());
    // Handle block stmt
    unsigned elem_id = 0;
    for (auto &element : block) {
      if (element.getKind() == CFGStmt::Statement) {
        HandleStmt(element.getAs<CFGStmt>()->getStmt(), &block, func_id,
                   block_id, elem_id++);
      }
    }

    // BlockNode::_preds
    auto preds = block_node->get_preds();
    // block.dump();
    for (auto pred : block.preds()) {
      if (nullptr == pred) {
        break;
      }
      preds->push_back(func_node->get_block_node(pred->getBlockID()));
    }

    // BlockNode::_succs
    auto succs = block_node->get_succs();
    for (auto succ : block.succs()) {
      if (nullptr == succ)
        succs->push_back(nullptr);
      else {
        work_list.push_back(*succ);
        succs->push_back(func_node->get_block_node(succ->getBlockID()));
      }
    }
  }
  // func_node->dump();
  return;
}

void PointToAnalysis::HandleStmt(const Stmt *stmt, CFGBlock *block,
                                 unsigned func_id, unsigned block_id,
                                 unsigned elem_id) {
  switch (stmt->getStmtClass()) {
  case Stmt::DeclStmtClass:
    if (auto decl_stmt = dyn_cast<DeclStmt>(stmt)) {
      auto decl = decl_stmt->getSingleDecl();
      if (auto var_decl = dyn_cast<VarDecl>(decl)) {
        HandleVarDecl(var_decl, func_id, block_id, elem_id);
      }
    }
    break;

  case Stmt::BinaryOperatorClass:
    if (auto bo_stmt = dyn_cast<BinaryOperator>(stmt)) {
      // p = &q; +=, -=;
      if (bo_stmt->isAssignmentOp()) {
        HandleAssignStmt(bo_stmt, func_id, block_id, elem_id);
      }
      // +, -
      if (bo_stmt->isAdditiveOp()) {
      }
      // ->, .
      if (bo_stmt->isPtrMemOp()) {
      }
    }
    break;

  case Stmt::CallExprClass:
    if (auto callExpr = dyn_cast<CallExpr>(stmt)) {
      auto callee = callExpr->getDirectCallee();
      ASTFunction *calleeF =
          manager->getASTFunction(const_cast<FunctionDecl *>(callee));
      if (nullptr == callee || nullptr == calleeF) {
        break;
      }
      for (unsigned i = 0, argsNum = callExpr->getNumArgs(); i != argsNum;
           ++i) {
        auto arg = callExpr->getArg(i);
        _callerInfo.putArgInfo(calleeF->getID(), block->getBlockID(), arg);
      }
    }
    break;

  case Stmt::CXXMemberCallExprClass:
    if (auto cxxMemberCallExpr = dyn_cast<CXXMemberCallExpr>(stmt)) {
      auto callee = cxxMemberCallExpr->getDirectCallee();
      ASTFunction *calleeF =
          manager->getASTFunction(const_cast<FunctionDecl *>(callee));
      if (nullptr == calleeF)
        break;
      auto callerExpr = cxxMemberCallExpr->getImplicitObjectArgument();
      if (auto memberExpr = dyn_cast<MemberExpr>(callerExpr)) {
        std::list<std::string> callerList = TraverseMemberExpr(memberExpr);
        _callerInfo.putCallerInfo(calleeF->getID(), block->getBlockID(),
                                  callerList);
      }

      for (unsigned i = 0, argsNum = cxxMemberCallExpr->getNumArgs();
           i != argsNum; ++i) {
        auto arg = cxxMemberCallExpr->getArg(i);
        // if (arg->getType().getTypePtr()->isPointerType()) {
        _callerInfo.putArgInfo(calleeF->getID(), block->getBlockID(), arg);
        // }
      }
    }

    break;

  default:
    // std::cout << "stmt class is: " << stmt->getStmtClassName()
    //           << " that not handle" << std::endl;
    break;
  }
  return;
}

/// Pointer VarDecl outside function and no-pointer VarDecl
void PointToAnalysis::HandleVarDecl(const VarDecl *var_decl,
                                    bool pointer_only) {
  if (pointer_only && var_decl->getType()->isPointerType()) {
    auto pta_var = _pvm.insertPTAVar(var_decl);
    if (var_decl->hasInit()) {
      auto pta_update_map = _pvm.getPTAUpdateMap(pta_var);
      auto update_node = new PointerUpdateNode();
      // ToDo_wef
      pta_update_map->insert_update_node(update_node);
    }
  }

  return;
}

/// Pointer VarDecl inside function
void PointToAnalysis::HandleVarDecl(const VarDecl *var_decl, unsigned func_id,
                                    unsigned block_id, unsigned elem_id) {
  if (var_decl->getType()->isPointerType()) {
    auto pta_var = _pvm.insertPTAVar(var_decl);
    if (var_decl->hasInit()) {
      auto pta_update_map = _pvm.getPTAUpdateMap(pta_var);

      // ToDo_wef
      if (var_decl->getInit()->getStmtClass() ==
          Stmt::ConditionalOperatorClass) {
        if (auto co = dyn_cast<ConditionalOperator>(var_decl->getInit())) {
          auto trueExpr = co->getTrueExpr();
          auto falseExpr = co->getFalseExpr();
          auto update_node_true = new PointerUpdateNode(elem_id);
          auto update_node_false = new PointerUpdateNode(++elem_id);
          HandleExpr(trueExpr, update_node_true);
          HandleExpr(falseExpr, update_node_false);

          _func_nodes[func_id]->get_block_node(block_id)->add_var_update(
              pta_var);
          pta_update_map->insert_update_node(func_id, block_id,
                                             update_node_true);
          pta_update_map->insert_update_node(func_id, block_id,
                                             update_node_false);
        }
      } else {
        auto update_node = new PointerUpdateNode(elem_id);
        HandleExpr(var_decl->getInit()->IgnoreCasts(), update_node);
        _func_nodes[func_id]->get_block_node(block_id)->add_var_update(pta_var);
        pta_update_map->insert_update_node(func_id, block_id, update_node);
      }
    }
  }
  // else if (var_decl->getType()->isArrayType()) {
  //   if (var_decl->getType()->getBaseElementTypeUnsafe()->isPointerType()) {
  //     auto pta_var = _pvm.insertPTAVar(var_decl);
  //   }
  // }
  return;
}

void PointToAnalysis::HandleAssignStmt(const BinaryOperator *bo_stmt,
                                       unsigned func_id, unsigned block_id,
                                       unsigned elem_id) {
  Expr *lhs = bo_stmt->getLHS()->IgnoreParenCasts()->IgnoreImpCasts();
  Expr *rhs = bo_stmt->getRHS()->IgnoreParenCasts()->IgnoreImpCasts();
  if (lhs->getType().getTypePtr()->isPointerType()) {
    // single pointer
    if (auto dre = dyn_cast<DeclRefExpr>(lhs)) {
      // std::cout << "HandleAssignStmt lhs in declrefexpr" << std::endl;
      auto decl = dre->getDecl();
      auto var_decl = dyn_cast<VarDecl>(decl);
      auto pta_var = _pvm.insertPTAVar(var_decl);
      auto pta_update_map = _pvm.getPTAUpdateMap(pta_var);

      // lhs->dump();
      // decl->dump();
      // var_decl->dump();
      // std::cout << "HandleAssignStmt rhs" << std::endl;
      // rhs->dump();
      if (rhs->getStmtClass() == Stmt::ConditionalOperatorClass) {
        if (auto co = dyn_cast<ConditionalOperator>(rhs)) {
          auto trueExpr = co->getTrueExpr();
          auto falseExpr = co->getFalseExpr();
          auto update_node_true = new PointerUpdateNode(elem_id);
          auto update_node_false = new PointerUpdateNode(++elem_id);
          HandleExpr(trueExpr, update_node_true);
          HandleExpr(falseExpr, update_node_false);

          _func_nodes[func_id]->get_block_node(block_id)->add_var_update(
              pta_var);
          pta_update_map->insert_update_node(func_id, block_id,
                                             update_node_true);
          pta_update_map->insert_update_node(func_id, block_id,
                                             update_node_false);
        }
      } else {
        auto update_node = new PointerUpdateNode(elem_id);
        HandleExpr(rhs, update_node);
        _func_nodes[func_id]->get_block_node(block_id)->add_var_update(pta_var);
        pta_update_map->insert_update_node(func_id, block_id, update_node);
      }

      // if (!file_node->is_var_exist(pointer_id)) {
      //   if (auto val_decl = dyn_cast<VarDecl>(dre->getDecl())) {
      //     HandleVarDecl(val_decl, file_node, false);
      //   }
      // }

      // auto pointer_var_node =
      //     (PointerVarNode *)(file_node->get_var_node(pointer_id));

      // // to avoid handlevardecl fail cause dump
      // if (nullptr != pointer_var_node) {
      //   pointer_var_node->insert_update_node(func_id, block_id, update_node);
      //   HandleExpr(bo_stmt->getRHS(), file_node, update_node);
      // }
    } else if (auto me = dyn_cast<MemberExpr>(lhs)) {
      // std::cout << "HandleAssignStmt lhs in memberexpr" << std::endl;
      // bo_stmt->dumpColor();
      auto pta_var = _pvm.insertPTAVar(me);
      auto pta_update_map = _pvm.getPTAUpdateMap(pta_var);
      auto update_node = new PointerUpdateNode(elem_id);
      HandleExpr(rhs, update_node);
      _func_nodes[func_id]->get_block_node(block_id)->add_var_update(pta_var);
      pta_update_map->insert_update_node(func_id, block_id, update_node);
    }
  }
}

void PointToAnalysis::HandleExpr(const Expr *expr,
                                 PointerUpdateNode *update_node) {
  switch (expr->getStmtClass()) {
  case Stmt::UnaryOperatorClass: { // TODO
    if (auto uo_stmt = dyn_cast<UnaryOperator>(expr)) {
      switch (uo_stmt->getOpcode()) {
      case UnaryOperatorKind::UO_AddrOf: { // &
        auto val_stmt = uo_stmt->getSubExpr();
        const PTAVar *pta_var = nullptr;
        if (auto dre = dyn_cast<DeclRefExpr>(val_stmt)) {
          if (auto me = dyn_cast<MemberExpr>(dre)) {
            pta_var = _pvm.insertPTAVar(me);
          } else {
            if (auto val_decl = dyn_cast<VarDecl>(dre->getDecl())) {
              pta_var = _pvm.insertPTAVar(val_decl);
            }
          }
        } else if (auto me = dyn_cast<MemberExpr>(val_stmt)) {
          pta_var = _pvm.insertPTAVar(me);
        } else if (auto ase = dyn_cast<ArraySubscriptExpr>(val_stmt)) {
          if (auto dre = dyn_cast<DeclRefExpr>(ase->getBase()->IgnoreCasts())) {
            if (auto val_decl = dyn_cast<VarDecl>(dre->getDecl())) {
              pta_var = _pvm.insertPTAVar(val_decl);
            }
          }
        } else {
          // ToDo
          // assert(0);
        }
        // assert(pta_var);
        if (pta_var)
          update_node->set_pointee(pta_var);
      } break;
      case UnaryOperatorKind::UO_Deref: { // *
      } break;
        // TODO
      } // End of switch (uo_stmt->getOpcode())
    }
  } break;
  case Stmt::ImplicitCastExprClass: { // TODO
    if (auto ice_stmt = dyn_cast<ImplicitCastExpr>(expr)) {
      const PTAVar *pta_var = nullptr;
      if (auto dre = dyn_cast<DeclRefExpr>(ice_stmt->getSubExpr())) {
        if (auto val_decl = dyn_cast<VarDecl>(dre->getDecl())) {
          pta_var = _pvm.insertPTAVar(val_decl);
        }
      } else if (auto me = dyn_cast<MemberExpr>(ice_stmt->getSubExpr())) {
        pta_var = _pvm.insertPTAVar(me);
      } else {
        // ToDo
        // assert(0);
      }
      // assert(pta_var);
      if (pta_var)
        update_node->set_alias(pta_var);
    }
  } break;
  case Stmt::DeclRefExprClass: {
    if (auto dre = dyn_cast<DeclRefExpr>(expr)) {
      const PTAVar *pta_var = nullptr;
      if (auto val_decl = dyn_cast<VarDecl>(dre->getDecl())) {
        pta_var = _pvm.insertPTAVar(val_decl);
      }
      if (pta_var)
        update_node->set_alias(pta_var);
    }
  } break;
  case Stmt::CallExprClass: {
    if (auto ce = dyn_cast<CallExpr>(expr)) {
      const PTAVar *pta_var = nullptr;

      const FunctionDecl *fd = ce->getDirectCallee();
      ASTFunction *F = manager->getASTFunction(const_cast<FunctionDecl *>(fd));
      if (nullptr == fd || nullptr == F) {
        break;
      }
      if (!fd->isNoReturn()) {
        if (memoryMallocFunc.find(fd->getNameAsString()) !=
            memoryMallocFunc.end()) {
          pta_var = _pvm.insertPTAVar(fd->getNameAsString());
          update_node->set_pointee(pta_var);
        } else {
          pta_var = _pvm.insertPTAVar(fd);
          if (fd->getDeclaredReturnType()->isPointerType()) {
            update_node->set_alias(pta_var);
          } else {
            update_node->set_pointee(pta_var);
          }
        }
      }
    }
  } break;
  // case Stmt::MemberExprClass: {
  //   if (auto me = dyn_cast<MemberExpr>(expr)) {
  //     const PTAVar *pta_var = nullptr;
  //     pta_var = _pvm.insertPTAVar(me);
  //     if (pta_var)
  //       update_node->set_pointee(pta_var);
  //   }
  // } break;
  // case Stmt::ConditionalOperatorClass: {
  //   if (auto co = dyn_cast<ConditionalOperator>(expr)) {
  //   }
  // } break;
  default: {
    // std::cout << "in handleExpr() do not handle the class" << std::endl;
    // expr->dumpColor();

  } break;
  } // End of switch (expr->getStmtClass())
  return;
}

std::list<std::string>
PointToAnalysis::TraverseMemberExpr(MemberExpr *memberExpr) {
  std::list<std::string> bases;
  const Expr *base = memberExpr;
  while (true) {
    base = base->IgnoreCasts();
    if (auto me = dyn_cast<MemberExpr>(base)) {
      auto fd = dyn_cast<FieldDecl>(me->getMemberDecl());
      std::string declLoc = fd->getSourceRange().getBegin().printToString(
                                fd->getASTContext().getSourceManager()) +
                            ":" + fd->getNameAsString();
      bases.push_front(declLoc);
      base = me->getBase();
    } else if (auto ice = dyn_cast<ImplicitCastExpr>(base)) {
      base = ice->getSubExpr();
    } else if (Stmt::CXXThisExprClass == base->getStmtClass()) {
      std::string declLoc =
          base->getType()
              ->getPointeeCXXRecordDecl()
              ->getSourceRange()
              .getBegin()
              .printToString(base->getType()
                                 ->getPointeeCXXRecordDecl()
                                 ->getASTContext()
                                 .getSourceManager()) +
          ":" + base->getType()->getPointeeCXXRecordDecl()->getNameAsString();
      bases.push_front(declLoc);
      break;
    } else if (auto dre = dyn_cast<DeclRefExpr>(base)) {
      std::string declLoc =
          dre->getDecl()->getSourceRange().getBegin().printToString(
              dre->getDecl()->getASTContext().getSourceManager()) +
          ":" + dre->getDecl()->getNameAsString();
      bases.push_front(declLoc);
      break;
    } else {
      break;
    }
  }

  return bases;
}

void PointToAnalysis::dump() {
  // for (auto fn : _file_nodes) {
  //   fn.second->dump_var_nodes();
  // }
}

std::list<std::string>
PointToAnalysis::getInstanceInPath(std::list<const CFGBlock *> path) {
  std::list<std::string> result;
  auto iter = path.begin();
  auto iterEnd = path.end();
  for (; iter != iterEnd; ++iter) {
    const CFGBlock *block = *iter;
    auto blockIter = block->rbegin();
    if (block->empty())
      continue;
    if (auto stmt = (*blockIter).getAs<CFGStmt>()->getStmt()) {
      if (auto cxxMemberCallExpr = dyn_cast<CXXMemberCallExpr>(stmt)) {
        if (cxxMemberCallExpr == nullptr)
          continue;
        // cxxMemberCallExpr->dump();
        auto callerExpr = cxxMemberCallExpr->getImplicitObjectArgument();
        if (nullptr == callerExpr)
          continue;
        if (auto memberExpr = dyn_cast<MemberExpr>(callerExpr)) {
          std::list<std::string> callerList = TraverseMemberExpr(memberExpr);
          auto listIter = callerList.begin(), listIterEnd = callerList.end();
          for (; listIter != listIterEnd; ++listIter) {
            result.push_back(*listIter);
          }
        }
      }
    }
  }
  return result;
}

std::vector<std::list<const CFGBlock *>>
PointToAnalysis::getPathInFunc(CFGBlock *startBlock, CFGBlock *endBlock, int pathlen, int pathnum) {
  std::vector<std::list<const CFGBlock *>> reachablePath;

  std::list<const CFGBlock *> path;
  path.push_back(startBlock);
  if (startBlock == endBlock) {
    reachablePath.push_back(path);
    return reachablePath;
  }
  // auto childs = startBlock->getParent()->getNonRecursiveSucc(startBlock);
  auto childs = common::getNonRecursiveSucc(startBlock);
  auto iter = childs.begin();
  while (iter != childs.end()) {
    if (reachablePath.size()>=pathnum) break;
    if (path.size()>=pathlen) break;
    traverseCFGForGetReachablePath(reachablePath, *iter, endBlock, path, pathlen,pathnum);
    ++iter;
  }
  return reachablePath;
}

void PointToAnalysis::traverseCFGForGetReachablePath(
    std::vector<std::list<const CFGBlock *>> &reachablePath,
    CFGBlock *startBlock, CFGBlock *endBlock,
    std::list<const CFGBlock *> path, int pathlen, int pathnum) {
  if (nullptr == startBlock ) {
    return;
  }
  path.push_back(startBlock);
  if (startBlock == endBlock) {
    reachablePath.push_back(path);
    return;
  }
  if (path.size()>=pathlen) {
    reachablePath.push_back(path);
    return;
  } 
  if (reachablePath.size()>=pathnum) return;

  // auto childs = startBlock->getParent()->getNonRecursiveSucc(startBlock);
  auto childs = common::getNonRecursiveSucc(startBlock);
  auto iter = childs.begin();
  int cnt=0;
  while (iter != childs.end()) {
    if (cnt>=pathnum) break;
    if (reachablePath.size()>=pathnum) break;
    if (path.size()>=pathlen) break;
    traverseCFGForGetReachablePath(reachablePath, *iter, endBlock, path, pathlen,pathnum);
    ++iter;
    cnt++;
  }
  path.pop_back();
}

std::string PointToAnalysis::getPTAVarKey(VarDecl *vd) {
  return vd->getBeginLoc().printToString(
             vd->getASTContext().getSourceManager()) +
         ":" + vd->getNameAsString();
}

// used to test get all point to of a var in a path
void PointToAnalysis::Point_to_test1() {
  std::cout << "-------------- begin point_to_test 1 --------------"
            << std::endl;
  ASTFunction *main_func;
  ASTFunction *a_func;

  auto functions = manager->getFunctions();
  auto f_iter = functions.begin();
  auto f_iter_end = functions.end();

  while (f_iter != f_iter_end) {
    if ((*f_iter)->getFunctionName().find("main") != std::string::npos)
      main_func = *f_iter;
    if ((*f_iter)->getFunctionName().find("A") != std::string::npos)
      a_func = *f_iter;
    ++f_iter;
  }

  if (nullptr == main_func || nullptr == a_func)
    return;

  std::unique_ptr<CFG> &main_cfg = manager->getCFG(main_func);
  std::unique_ptr<CFG> &a_cfg = manager->getCFG(a_func);

  std::list<const CFGBlock *> path;
/*
  path.push_back(main_cfg->getBlockWithID(15));
  path.push_back(main_cfg->getBlockWithID(14));
  path.push_back(main_cfg->getBlockWithID(12));
  path.push_back(main_cfg->getBlockWithID(11));
  path.push_back(a_cfg->getBlockWithID(2));
  path.push_back(a_cfg->getBlockWithID(1));
  path.push_back(a_cfg->getBlockWithID(0));
  path.push_back(main_cfg->getBlockWithID(10));
  path.push_back(main_cfg->getBlockWithID(8));
  */
  
  path.push_back(common::getBlockWithID(main_cfg,15));
  path.push_back(common::getBlockWithID(main_cfg,14));
  path.push_back(common::getBlockWithID(main_cfg,12));
  path.push_back(common::getBlockWithID(main_cfg,11));
  path.push_back(common::getBlockWithID(a_cfg,2));
  path.push_back(common::getBlockWithID(a_cfg,1));
  path.push_back(common::getBlockWithID(a_cfg,0));
  path.push_back(common::getBlockWithID(main_cfg,10));
  path.push_back(common::getBlockWithID(main_cfg,8));

  const PTAVar *var;

  auto vars = main_func->getVariables();
  for (auto v_iter = vars.begin(); v_iter != vars.end(); ++v_iter) {
    if ((*v_iter)->getName() == "ptr") {
      auto ptr_vd = manager->getVarDecl(*v_iter);
      var = _pvm.getPTAVar(getPTAVarKey(ptr_vd));
    }
  }
  if (var == nullptr) {
    std::cout << "do not get the var, it is nullptr" << std::endl;
    return;
  }

  std::cout << "the res of point-to analysis is: " << std::endl;
  std::set<const PTAVar *> res = get_pointee_of_l3(path, 5, var);
  for (auto resIter = res.begin(); resIter != res.end(); resIter++) {
    std::cout << (*resIter)->get_name() << std::endl;
  }

  return;
}

// used to test get all point to of a var at a point of func
void PointToAnalysis::Point_to_test2() {
  std::cout << "-------------- begin point_to_test 2 --------------"
            << std::endl;
  ASTFunction *main_func;

  auto functions = manager->getFunctions();
  auto f_iter = functions.begin();
  auto f_iter_end = functions.end();

  while (f_iter != f_iter_end) {
    if ((*f_iter)->getFunctionName().find("main") != std::string::npos)
      main_func = *f_iter;

    ++f_iter;
  }
  std::unique_ptr<CFG> &main_cfg = manager->getCFG(main_func);
  // CFGBlock *pathEnd = const_cast<CFGBlock *>(main_cfg->getBlockWithID(0));
  CFGBlock *pathEnd = const_cast<CFGBlock *>(common::getBlockWithID(main_cfg,0));

  const PTAVar *var;

  auto vars = main_func->getVariables();
  for (auto v_iter = vars.begin(); v_iter != vars.end(); ++v_iter) {
    if ((*v_iter)->getName() == "ptr") {
      auto ptr_vd = manager->getVarDecl(*v_iter);
      
      var = _pvm.getPTAVar(getPTAVarKey(ptr_vd));
    }
  }
  if (var == nullptr) {
    std::cout << "do not get the var, it is nullptr" << std::endl;
    return;
  }

  std::set<const PTAVar *> res = get_pointee_at_point(pathEnd, 5, var);
  std::cout << "the res of point-to analysis is: " << std::endl;
  for (auto resIter = res.begin(); resIter != res.end(); resIter++) {
    std::cout << (*resIter)->get_name() << std::endl;
  }

  return;
}

// used to test does two vars are alias
void PointToAnalysis::Alias_test1() {
  std::cout << "-------------- begin alias_test 1 --------------" << std::endl;
  ASTFunction *main_func;
  ASTFunction *a_func;

  auto functions = manager->getFunctions();
  auto f_iter = functions.begin();
  auto f_iter_end = functions.end();

  while (f_iter != f_iter_end) {
    if ((*f_iter)->getFunctionName().find("main") != std::string::npos)
      main_func = *f_iter;
    if ((*f_iter)->getFunctionName().find("A") != std::string::npos)
      a_func = *f_iter;
    ++f_iter;
  }

  if (nullptr == main_func || nullptr == a_func)
    return;

  std::unique_ptr<CFG> &main_cfg = manager->getCFG(main_func);
  std::unique_ptr<CFG> &a_cfg = manager->getCFG(a_func);

  std::list<const CFGBlock *> path;
/*
  path.push_back(main_cfg->getBlockWithID(15));
  path.push_back(main_cfg->getBlockWithID(14));
  path.push_back(main_cfg->getBlockWithID(12));
  path.push_back(main_cfg->getBlockWithID(9));
  path.push_back(main_cfg->getBlockWithID(8));
*/
  path.push_back(common::getBlockWithID(main_cfg,15));
  path.push_back(common::getBlockWithID(main_cfg,14));
  path.push_back(common::getBlockWithID(main_cfg,12));
  path.push_back(common::getBlockWithID(main_cfg,9));
  path.push_back(common::getBlockWithID(main_cfg,8));

  const PTAVar *var;
  const PTAVar *q_var;
  const PTAVar *p_var;

  auto vars = main_func->getVariables();
  for (auto v_iter = vars.begin(); v_iter != vars.end(); ++v_iter) {
    if ((*v_iter)->getName() == "ptr") {
      auto ptr_vd = manager->getVarDecl(*v_iter);
      var = _pvm.getPTAVar(getPTAVarKey(ptr_vd));
    }
    if ((*v_iter)->getName() == "p") {
      auto p_vd = manager->getVarDecl(*v_iter);
      p_var = _pvm.getPTAVar(getPTAVarKey(p_vd));
    }
    if ((*v_iter)->getName() == "q") {
      auto q_vd = manager->getVarDecl(*v_iter);
      q_var = _pvm.getPTAVar(getPTAVarKey(q_vd));
    }
  }

  // const PTAVar *var = _pvm.getPTAVar(
  //     "/home/zhangchi/SAFE-HW/tests/alias_test/main.cpp:12:3:ptr");

  // const PTAVar *q_var =
  //     _pvm.getPTAVar("/home/zhangchi/SAFE-HW/tests/alias_test/main.cpp:11:3:q");

  // const PTAVar *p_var =
  //     _pvm.getPTAVar("/home/zhangchi/SAFE-HW/tests/alias_test/main.cpp:10:3:p");

  if (nullptr == var && nullptr == q_var && nullptr == p_var) {
    std::cout << "do not get the var, it is nullptr" << std::endl;
    return;
  }

  std::cout << "the res of alias analysis of ptr with q is: ";
  if (is_alias_of(path, 5, var, path, 5, q_var))
    std::cout << "true" << std::endl;
  else {
    std::cout << "false" << std::endl;
  }

  std::cout << "the res of alias analysis of ptr with p is: ";
  if (is_alias_of(path, 5, var, path, 5, p_var))
    std::cout << "true" << std::endl;
  else {
    std::cout << "false" << std::endl;
  }

  return;
}

// used to test at the end of func, get all alias of one var
void PointToAnalysis::Alias_test2() {
  std::cout << "-------------- begin alias_test 2 --------------" << std::endl;
  ASTFunction *main_func;

  auto functions = manager->getFunctions();
  auto f_iter = functions.begin();
  auto f_iter_end = functions.end();

  while (f_iter != f_iter_end) {
    if ((*f_iter)->getFunctionName().find("main") != std::string::npos)
      main_func = *f_iter;

    ++f_iter;
  }
  FunctionDecl *FD = manager->getFunctionDecl(main_func);

  const PTAVar *var;

  auto vars = main_func->getVariables();
  for (auto v_iter = vars.begin(); v_iter != vars.end(); ++v_iter) {
    if ((*v_iter)->getName() == "ptr") {
      auto ptr_vd = manager->getVarDecl(*v_iter);
      var = _pvm.getPTAVar(getPTAVarKey(ptr_vd));
    }
  }
  if (var == nullptr) {
    std::cout << "do not get the var, it is nullptr" << std::endl;
    return;
  }

  std::set<const PTAVar *> res = get_alias_in_func(main_func, var);
  std::cout << "the res of alias analysis is: " << std::endl;
  for (auto resIter = res.begin(); resIter != res.end(); resIter++) {
    std::cout << (*resIter)->get_name() << std::endl;
  }

  return;
}

// used to test at a point of func, does the two vars are alias
void PointToAnalysis::Alias_test3() {
  std::cout << "-------------- begin alias_test 3 --------------" << std::endl;
  ASTFunction *main_func;

  auto functions = manager->getFunctions();
  auto f_iter = functions.begin();
  auto f_iter_end = functions.end();

  while (f_iter != f_iter_end) {
    if ((*f_iter)->getFunctionName().find("main") != std::string::npos)
      main_func = *f_iter;

    ++f_iter;
  }
  FunctionDecl *FD = manager->getFunctionDecl(main_func);
  std::unique_ptr<CFG> &cfg = manager->getCFG(main_func);

  const PTAVar *q_var;
  const PTAVar *p_var;

  auto vars = main_func->getVariables();
  for (auto v_iter = vars.begin(); v_iter != vars.end(); ++v_iter) {
    if ((*v_iter)->getName() == "p_malloc") {
      auto p_vd = manager->getVarDecl(*v_iter);
      p_var = _pvm.getPTAVar(getPTAVarKey(p_vd));
    }
    if ((*v_iter)->getName() == "q_malloc") {
      auto q_vd = manager->getVarDecl(*v_iter);
      q_var = _pvm.getPTAVar(getPTAVarKey(q_vd));
    }
  }

  // const PTAVar *var1 =
  //     _pvm.getPTAVar("/home/zhangchi/SAFE-HW/tests/alias_test2/main.cpp:7:3:p");

  // const PTAVar *var2 =
  //     _pvm.getPTAVar("/home/zhangchi/SAFE-HW/tests/alias_test2/main.cpp:8:3:q");
  if (nullptr == p_var || nullptr == q_var) {
    std::cout << "do not get the var, it is nullptr" << std::endl;
    return;
  }

  // auto test_block = cfg->getBlockWithID(5);
  auto test_block = common::getBlockWithID(cfg,5);

  auto isAlias = is_alias_of_at_point(const_cast<CFGBlock *>(test_block), 2,
                                      p_var, q_var, 100);
  std::cout << "the query res of p is the alias of q is: " << std::endl;
  if (isAlias)
    std::cout << "true" << std::endl;
  else {
    std::cout << "false " << std::endl;
  }
}

// void PointToAnalysis::test() { // test/class
//   auto astr_iter = getASTRsBegin();
//   auto astr_iter_end = getASTRsEnd();

//   FunctionDecl *main_func;
//   FunctionDecl *double_func;
//   FunctionDecl *set_f_ptr;

//   while (astr_iter != astr_iter_end) {

//     auto filename = astr_iter->first;
//     auto fds = astr_iter->second.GetFunctionDecls();
//     for (auto fd : fds) {
//       // std::unique_ptr<CFG> &cfg = getCFG(fd);
//       // LangOptions LangOpts;
//       // LangOpts.CPlusPlus = true;
//       // cfg->dump(LangOpts, true);
//       auto funcName = fd->getNameAsString();
//       if (funcName.find("main") != funcName.npos) {
//         main_func = fd;
//       }
//       if (funcName.find("double_func") != funcName.npos) {
//         double_func = fd;
//       }
//       if (funcName.find("set_f_ptr") != funcName.npos) {
//         set_f_ptr = fd;
//       }
//     }
//     ++astr_iter;
//   }

//   // std::cout << "main: " << std::endl;
//   // main_func->dumpColor();
//   // std::cout << "double_func: " << std::endl;
//   // double_func->dumpColor();
//   // std::cout << "set_f_ptr: " << std::endl;
//   // set_f_ptr->dumpColor();

//   std::list<const CFGBlock *> path;
//   std::unique_ptr<CFG> &main_cfg = getCFG(main_func);
//   std::unique_ptr<CFG> &double_func_cfg = getCFG(double_func);
//   std::unique_ptr<CFG> &set_f_ptr_cfg = getCFG(set_f_ptr);

//   path.push_back(main_cfg->getBlockWithID(9));
//   path.push_back(double_func_cfg->getBlockWithID(3));
//   path.push_back(double_func_cfg->getBlockWithID(2));
//   path.push_back(set_f_ptr_cfg->getBlockWithID(2));
//   path.push_back(set_f_ptr_cfg->getBlockWithID(1));
//   path.push_back(set_f_ptr_cfg->getBlockWithID(0));
//   path.push_back(double_func_cfg->getBlockWithID(1));
//   path.push_back(double_func_cfg->getBlockWithID(0));
//   path.push_back(main_cfg->getBlockWithID(8));

//   std::list<unsigned> varList({47, 26});

//   const PTAVar *var = _pvm.getPTAVar(varList);

//   // if (nullptr == var) {
//   //   std::cout << "nullptr" << std::endl;
//   // }

//   for (auto it = path.begin(); it != path.end(); it++) {
//     (*it)->dump();
//   }

//   std::set<const PTAVar *> res = get_pointee_of_l3(path, 2, var);
//   std::cout << res.size() << std::endl;
//   for (auto resIter = res.begin(); resIter != res.end(); resIter++) {
//     std::cout << (*resIter)->get_name() << std::endl;
//   }

//   return;
// }

// void PointToAnalysis::test() {
//   auto astr_iter = getASTRsBegin();
//   auto astr_iter_end = getASTRsEnd();

//   FunctionDecl *main_func;
//   FunctionDecl *func;

//   while (astr_iter != astr_iter_end) {

//     auto filename = astr_iter->first;
//     auto fds = astr_iter->second.GetFunctionDecls();
//     for (auto fd : fds) {
//       std::unique_ptr<CFG> &cfg = getCFG(fd);
//       LangOptions LangOpts;
//       LangOpts.CPlusPlus = true;
//       cfg->dump(LangOpts, true);
//       auto funcName = fd->getNameAsString();
//       if (funcName.find("main") != funcName.npos) {
//         main_func = fd;
//       }
//       if (funcName.find("func") != funcName.npos) {
//         func = fd;
//       }
//     }
//     ++astr_iter;
//   }

//   std::cout << "main: " << std::endl;
//   main_func->dumpColor();
//   std::cout << "func: " << std::endl;
//   func->dumpColor();

//   std::list<const CFGBlock *> path;
//   std::unique_ptr<CFG> &main_cfg = getCFG(main_func);
//   std::unique_ptr<CFG> &func_cfg = getCFG(func);

//   path.push_back(main_cfg->getBlockWithID(10));
//   path.push_back(func_cfg->getBlockWithID(2));
//   path.push_back(func_cfg->getBlockWithID(1));
//   path.push_back(func_cfg->getBlockWithID(0));
//   path.push_back(main_cfg->getBlockWithID(9));

//   const PTAVar *var = _pvm.getPTAVar(17);

//   // if (nullptr == var) {
//   //   std::cout << "nullptr" << std::endl;
//   // }

//   for (auto it = path.begin(); it != path.end(); it++) {
//     (*it)->dump();
//   }

//   std::set<const PTAVar *> res = get_pointee_of_l3(path, 2, var);
//   std::cout << res.size() << std::endl;
//   for (auto resIter = res.begin(); resIter != res.end(); resIter++) {
//     std::cout << (*resIter)->get_name() << std::endl;
//   }

//   return;
// }
