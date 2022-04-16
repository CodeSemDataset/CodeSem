#include "checkers/AST2Graph.h"

static llvm::cl::OptionCategory ToolingSampleCategory("Tooling Sample");
//for sandwich: no Child(1), no ComputedFrom(5) for DeclStmt, no ReturnsTo(7)

void AST2Graph::transform(int kind) {
  find_cnt = 0;
  find_true_cnt = 0;
  find_false_cnt = 0;
  empty_files_ast = 0;
  node_index.clear();
  FD_List.clear();
  TU = nullptr;
  func = nullptr;
  cnt = 0;
  allPairs_ggnn = json::array();
  allPairs_sandwich = json::array();

  CSVRead temp("../datasets");
  temp.readSingleCSV(kind);
  // temp.outputAll(0);
  
  int size = temp.getSize(kind);
  for(int i=0;i<size;i++){
    //if(temp.getPair(0,i).function.path != "../../gcc/gcc.c") continue;
    alias_pair temp_pair = temp.getPair(kind,i);
    if(kind == 0 || kind == 1){
      std::string filename = CSVRead::deal_with_filename(temp_pair.function.path, kind);
      findMatchedASTNode(temp_pair, filename);
    }
    if(kind == 2){
      std::set<std::string> all_filenames = CSVRead::deal_with_filename_sql(temp_pair.function.path);
      if(!all_filenames.empty()){
        int current_size = allPairs_ggnn.size();
        for(std::string temp_filename : all_filenames){
          // std::cout << temp_filename << std::endl;
          findMatchedASTNode(temp_pair, temp_filename);
          if(allPairs_ggnn.size() == current_size + 1)
            break;
        }
      }
    }
    common::process_bar(float(i) / size);
  }
  std::cout << "=============================================" << std::endl;
  std::cout << "find " << find_cnt << " ASTNodes" << std::endl;
  std::cout << "find " << find_true_cnt << " true ASTNodes" << std::endl;
  std::cout << "find " << find_false_cnt << " false ASTNodes" << std::endl;
  std::cout << "find " << empty_files_ast << " empty files" << std::endl;
  std::cout << "=============================================" << std::endl;

  std::string outputfilename;
  if(kind == 0) outputfilename = "./result/ggnn/ggnn_gcc.json";
  else if(kind == 1) outputfilename = "./result/ggnn/ggnn_linux.json";
  else if(kind == 2) outputfilename = "./result/ggnn/ggnn_sql.json";

  std::ofstream out(outputfilename);
  out << allPairs_ggnn << std::endl;
  out.close();

  std::string outputfilename2;
  if(kind == 0) outputfilename2 = "./result/sandwich/sandwich_gcc.json";
  else if(kind == 1) outputfilename2 = "./result/sandwich/sandwich_linux.json";
  else if(kind == 2) outputfilename2 = "./result/sandwich/sandwich_sql.json";

  std::ofstream out2(outputfilename2);
  out2 << allPairs_sandwich << std::endl;
  out2.close();
  dict.storeDict();
}

bool AST2Graph::findMatchedASTNode(alias_pair input_pair, std::string filename){
//======================
//PHASE0: Initialization
//======================
  //filename = CSVRead::deal_with_filename(input_pair.function.path);
  
  CXIndex Index = clang_createIndex(0,0);
  TU = clang_createTranslationUnit(Index, filename.c_str());
  if(TU == nullptr){
    empty_files_ast++;
    return false;
  }
  CXCursor C = clang_getTranslationUnitCursor(TU);
  
//=========================  
//PHASE1: get FunctionDecl*
//=========================
  clang_visitChildren(C, getFunctions, NULL);

//=======================================================================
//PHASE2: find matched function and find matched AST node for input alias
//=======================================================================
  for(CXCursor temp : FD_List){
    int startLine = getCursorStartLine(temp);
    int endLine = getCursorEndLine(temp);

    const char* func_name = getCursorSpelling(temp);

    //if(func_name != input_pair.function.name) continue;

    int deviant = (int)startLine - input_pair.function.start;
    // if(deviant != 1 && deviant != 0 && deviant != -1) continue;
    // deviant = (int)endLine - input_pair.function.end;
    // if(deviant != 1 && deviant != 0 && deviant != -1) continue;
    if(std::abs(deviant) >= 10) continue;

    //std::cout << "find Function" << std::endl;
    generateGraph(temp, input_pair);
  }

  FD_List.clear();
  TU = nullptr; 
  clang_disposeTranslationUnit(TU);
  clang_disposeIndex(Index);
  return true;
}

void AST2Graph::generateGraph(CXCursor functiondecl, alias_pair input_pair){
    // if(clang_Location_isInSystemHeader(clang_getCursorLocation(temp)) != 0)
    //   continue;
    node_index.clear();
    cnt = 0;

    const char* func_name = clang_getCString(clang_getCursorSpelling(functiondecl));
    func = nullptr;
    func = new Function(func_name, dict);

    Node_Index* root = new Node_Index;
    root->cursor = functiondecl;
    root->index = 0;
    root->isTerminal = false;
    root->father = -1;
    node_index.push_back(root);
    ++cnt;

    clang_visitChildren(functiondecl, find_Child_1, NULL); //Add all (1)Child edges, generate node_index

    for(int t=0;t<node_index.size();t++){
      if(node_index[t]->children.size()!=0){
        node_index[t]->isTerminal = false;
      }
    }

    add_sandwich_index();
    func->addAllNodesToDict(node_index);

    find_NextToken_2(); // Add all (2)NextToken edges
    find_LastRW_3_4();//Add all (3)LastRead edges (4)LastWrite edges
    find_ComputedFrom_5(); //Add all (5)ComputedFrom edges
    find_LastLexicalUse_6();//Add all (6)LastLexicalUses edges
    find_ReturnsTo_7();//Add all (7)ReturnsTo edges
    find_GuardedBy_8_9();//Add all (8)GuardedBy edges (9)GuardedByNevigation

    findAlias(input_pair);
    node_index.clear();
    func = nullptr;
}

void AST2Graph::findAlias(alias_pair input_pair){
  int def1 = -1;
  int def2 = -1;
  std::set<int> use1;
  std::set<int> use2;
  
  //find def1 && def2
  for(int i=0;i<node_index.size();i++){
      if(getCursorStartLine(node_index[i]->cursor) > input_pair.alias1.def_point) continue;
      if(getCursorEndLine(node_index[i]->cursor) < input_pair.alias1.def_point) continue;
      //if(getCursorSpelling(node_index[i]->cursor) == nullptr || getCursorSpelling(node_index[i]->cursor) != input_pair.alias1.name) continue;
      def1 = node_index[i]->index;
      //break;
  }
  if(def1 == -1) return;
  //std::cout << "find def1" << std::endl;

  for(int i=0;i<node_index.size();i++){
      if(getCursorStartLine(node_index[i]->cursor) > input_pair.alias2.def_point) continue;
      if(getCursorEndLine(node_index[i]->cursor) < input_pair.alias2.def_point) continue;
      //if(getCursorSpelling(node_index[i]->cursor) == nullptr || getCursorSpelling(node_index[i]->cursor) != input_pair.alias2.name) continue;
      def2 = node_index[i]->index;
      //break;
  }
  if(def2 == -1) return;
  //std::cout << "find def2" << std::endl;

  //find use1
  for(int i=0;i<input_pair.alias1.use_points.size();i++){
    int result = -1;
    for(int j=0;j<node_index.size();j++){
      if(getCursorStartLine(node_index[j]->cursor) > input_pair.alias1.use_points[i]) continue;
      if(getCursorEndLine(node_index[j]->cursor) < input_pair.alias1.use_points[i]) continue;
      //if(getCursorSpelling(node_index[j]->cursor) == nullptr || getCursorSpelling(node_index[j]->cursor) != input_pair.alias1.name) continue;
      result = node_index[j]->index;
    }
    if(result == -1) continue;
    use1.insert(result);
  }
  if(use1.empty()) return;
  //std::cout << "find use1" << std::endl;

  //find use2
  for(int i=0;i<input_pair.alias2.use_points.size();i++){
    int result = -1;
    for(int j=0;j<node_index.size();j++){
      if(getCursorStartLine(node_index[j]->cursor) > input_pair.alias2.use_points[i]) continue;
      if(getCursorEndLine(node_index[j]->cursor) < input_pair.alias2.use_points[i]) continue;
      //if(getCursorSpelling(node_index[j]->cursor) == nullptr || getCursorSpelling(node_index[j]->cursor) != input_pair.alias2.name) continue;
      result = node_index[j]->index;
    }
    if(result == -1) continue;
    use2.insert(result);
  }
  if(use2.empty()) return;
  //std::cout << "find use2" << std::endl;
  ++find_cnt;
  if(input_pair.llvm_true) ++find_true_cnt;
  else ++find_false_cnt;

  //output
  json output_ggnn = func->dumpJson_ggnn();
  json use_list_1 = json::array();
  for(int tmp : use1){
    use_list_1.push_back(tmp);
  }
  json use_list_2 = json::array();
  for(int tmp : use2){
    use_list_2.push_back(tmp);
  }

  output_ggnn["var1_def"] = def1;
  output_ggnn["var1_use"] = use_list_1;
  output_ggnn["var2_def"] = def2;
  output_ggnn["var2_use"] = use_list_2;
  int label = input_pair.llvm_true?1:0;
  output_ggnn["label"] = label;
  allPairs_ggnn.push_back(output_ggnn);

  json output_sandwich = func->dumpJson_sandwich();
  output_sandwich["var1_def"] = def1;
  output_sandwich["var1_use"] = use_list_1;
  output_sandwich["var2_def"] = def2;
  output_sandwich["var2_use"] = use_list_2;
  output_sandwich["label"] = label;
  allPairs_sandwich.push_back(output_sandwich);
}

void AST2Graph::find_NextToken_2(){
  //for every terminal AST node, traverse forward to find its next brother
  Node_Index* current = node_index[0];
  for(int i = 0; i < node_index.size(); i++){
    if(node_index[i]->isTerminal){
      CXCursor src_parent = clang_getCursorSemanticParent(node_index[i]->cursor);
      //find the next brother AST node
      for(int j=i+1;j<node_index.size();j++){
        if(node_index[j]->isTerminal && clang_equalCursors(src_parent, clang_getCursorSemanticParent(node_index[j]->cursor))){
          add_edge(node_index[i], node_index[j], 2, true);
          //func->addEdge(node_index[i]->cursor, node_index[j]->cursor, node_index[i]->index, node_index[j]->index, 2);
          break;
        }
      }
    }
  }
}

void AST2Graph::find_LastRW_3_4(){
  //TODO: if-else statement, paramDecl
  for(int i=0;i<node_index.size();i++){
    const char *curkindSpelling = getKindSpelling(node_index[i]->cursor);
    if(strcmp(curkindSpelling, "VarDecl") == 0 || strcmp(curkindSpelling, "ParmDecl") == 0){ 
      //find the definition point, now try to find LastRead & LastWrite
      const char *VarName = clang_getCString(clang_getCursorSpelling(node_index[i]->cursor));

      //recorf all def/use points
      std::vector<Node_Index*> write;
      std::vector<Node_Index*> read;

      //assume LastRead/Write will only occur in BinaryOperator
      for(int j=i;j<node_index.size();j++){
        if(strcmp(getKindSpelling(node_index[j]->cursor), "BinaryOperator") == 0){
          std::vector<Node_Index*> def;
          std::vector<Node_Index*> use;
          bool result = BinaryOp(node_index[j], def, use);
          if(!result) continue;

          for(Node_Index* temp : def){
            const char* tempName = clang_getCString(clang_getCursorSpelling(temp->cursor));
            if(count(write.begin(), write.end(), temp) == 0 && strcmp(tempName, VarName) == 0)
              write.push_back(temp);
          }
          for(Node_Index* temp : use){
            const char* tempName = clang_getCString(clang_getCursorSpelling(temp->cursor));
            if(count(read.begin(), read.end(), temp) == 0 && strcmp(tempName, VarName) == 0)
              read.push_back(temp);
          }
        }
      }

      //special condition: if-else conditional branch could lead to more than one LastRead for one VarDec
      bool exist_if_read = false;
      bool exist_if_write = false;

      if(!read.empty()){
        Node_Index* temp = read.back();
        int father_index;
        int child_index;
        while(temp->father != -1){
          father_index = temp->father;
          child_index = temp->index;
          temp = node_index[temp->father];
          //find IfStmt father
          if(strcmp(getKindSpelling(temp->cursor), "IfStmt") == 0){
            if(temp->children.size() != 3) continue;
            if(child_index != temp->children[2]) continue;
            
            //means now there is a readpoint in else part of a statement
            //needs to make sure whether there is another read point in if part of the IfStmt
            int tar_father_index = temp->children[1];
            for(int t = read.size()-2; t >= 0; t--){
              if(has_Parent(read[t], tar_father_index)){
                exist_if_read = true;
                add_edge(node_index[i], read.back(), 3, true);
                add_edge(node_index[i], read[t], 3, true);
                //func->addEdge(node_index[i]->cursor, read.back()->cursor, node_index[i]->index, read.back()->index, 3);
                //func->addEdge(node_index[i]->cursor, read[t]->cursor, node_index[i]->index, read[t]->index, 3);
                break;
              }
            }
          }        
        }
      }

      if(!write.empty()){
        Node_Index* temp = write.back();
        int father_index;
        int child_index;
        while(temp->father != -1){
          father_index = temp->father;
          child_index = temp->index;
          temp = node_index[temp->father];
          //find IfStmt father
          if(strcmp(getKindSpelling(temp->cursor), "IfStmt") == 0){
            if(temp->children.size() != 3) continue;
            if(child_index != temp->children[2]) continue;
            
            //means now there is a readpoint in else part of a statement
            //needs to make sure whether there is another read point in if part of the IfStmt
            int tar_father_index = temp->children[1];
            for(int t = write.size()-2; t>=0 ;t--){
              if(has_Parent(write[t], tar_father_index)){
                exist_if_write = true;
                add_edge(node_index[i], write.back(), 4, true);
                add_edge(node_index[i], write[t], 4, true);
                //func->addEdge(node_index[i]->cursor, write.back()->cursor, node_index[i]->index, write.back()->index, 4);
                //func->addEdge(node_index[i]->cursor, write[t]->cursor, node_index[i]->index, write[t]->index, 4);
                break;
              }
            }
          }        
        }
      } 

      if(!read.empty() && !exist_if_read)
        add_edge(node_index[i], read.back(), 3, true);
        //func->addEdge(node_index[i]->cursor, read.back()->cursor, node_index[i]->index, read.back()->index, 3);
      if(!write.empty() && !exist_if_write)
        add_edge(node_index[i], write.back(), 4, true);
        //func->addEdge(node_index[i]->cursor, write.back()->cursor, node_index[i]->index, write.back()->index, 4);
    }
  }
}

void AST2Graph::find_ComputedFrom_5(){
  //consider 2 kinds of assignment
  //1. DeclStmt e.g. int a = b;
  //2. BinaryOperator e.g. int b = c;

  //first traverse:find DeclStmt
  for(int i=0;i<node_index.size();i++){
    const char *curkindSpelling = getKindSpelling(node_index[i]->cursor);
    if(strcmp(curkindSpelling, "DeclStmt") == 0){
      if(node_index[i]->children.size() != 1) continue;
      Node_Index* my_VarDecl = node_index[node_index[i]->children[0]];

      if(strcmp(getKindSpelling(my_VarDecl->cursor), "VarDecl") == 0){
        std::queue<Node_Index*> traverse;
        std::vector<Node_Index*> variables;
        traverse.push(my_VarDecl);
        while(!traverse.empty()){
          Node_Index* current = traverse.front();
          traverse.pop();

          if(current->isTerminal){
            const char* name = getKindSpelling(current->cursor);
            string name_ = name;
            if(name_.find("Expr") != string::npos && clang_getCString(clang_getCursorSpelling(current->cursor)))
              variables.push_back(current);
          }

          for(int temp : current->children){
            traverse.push(node_index[temp]);
          }
        }
        //add computedFrom edges
        for(Node_Index* temp : variables){
          //add_edge(my_VarDecl, temp, 5);
          add_edge(my_VarDecl, temp, 5, false);
        }
      }
    }
  }

  //second traverse:find BinaryOperator
  for(int j=0;j<node_index.size();j++){
    const char *curkindSpelling = getKindSpelling(node_index[j]->cursor);
    if(strcmp(curkindSpelling, "BinaryOperator") == 0){
      std::vector<Node_Index*> def;
      std::vector<Node_Index*> use;
      bool result = BinaryOp(node_index[j], def, use);
      
      for(Node_Index* temp : def){
        for(Node_Index* temp2 : use){
          add_edge(temp, temp2, 5, true);
          //func->addEdge(temp->cursor, temp2->cursor, temp->index, temp2->index, 5);
        }
      }
    }
  }
}

//return all variable on the left and all variable on the right
//if is assignment, return true
bool AST2Graph::BinaryOp(Node_Index* tar, std::vector<Node_Index*> &def, std::vector<Node_Index*> &use){
  if(strcmp(getKindSpelling(tar->cursor), "BinaryOperator") !=0 ) return false;
  if(tar->children.size()!=2) return false;

  bool assignment = false;
  //check whether this BinaryOp has assngnmentOp (e.g. b = c)
  CXToken *tokens;
  unsigned numTokens;
  CXSourceRange range = clang_getCursorExtent(tar->cursor);

  clang_tokenize(TU, range, &tokens, &numTokens);

  bool isAssignment = false;
  for(unsigned i=0; i<numTokens; i++) {
    CXString s = clang_getTokenSpelling(TU, tokens[i]);
    const char* str = clang_getCString(s);
    //find compute symbol
    if(strcmp(str, "=") == 0){
      //cout << "Find =" << endl;
      assignment = true;
      break;
    }
    clang_disposeString(s);
  }
  clang_disposeTokens(TU, tokens, numTokens);
  
  //recursively traverse all children nodes for finding Child BinaryOperator
  Node_Index* left = node_index[tar->children[0]];
  Node_Index* right = node_index[tar->children[1]];
  
//find all computedFrom 
  if(strcmp(getKindSpelling(left->cursor), "BinaryOperator") == 0){
    //cout << "The left child Node of BinaryOperator is BinaryOperator: Unexpected" << endl;
    return false;
  }else{
    std::queue<Node_Index*> traverse;
    traverse.push(left);
    while(!traverse.empty()){
      Node_Index* current = traverse.front();
      traverse.pop();

      if(current->isTerminal){
        const char* name = getKindSpelling(current->cursor);
        string name_ = name;
        if(name_.find("Expr") != string::npos && clang_getCString(clang_getCursorSpelling(current->cursor))){
          if(assignment) 
            def.push_back(current); //find target variable
          else 
            use.push_back(current); //BinaryOperator like a+b, variables both in left&right belongs to use
        }
      }

      for(int temp : current->children){
        traverse.push(node_index[temp]);
      }
    }
  }

  if(strcmp(getKindSpelling(right->cursor), "BinaryOperator") == 0){
    std::vector<Node_Index*> child_def;
    std::vector<Node_Index*> child_use;
    bool child_result = BinaryOp(right, child_def, child_use);
    if(child_result){
      //a = b = c
      for(Node_Index* temp : child_def){
        use.push_back(temp);
      }
    }else{
      //a = b + c
      for(Node_Index* temp : child_use){
        use.push_back(temp);
      }
    }
  }else{
    std::queue<Node_Index*> traverse;
    traverse.push(right);
    while(!traverse.empty()){
      Node_Index* current = traverse.front();
      traverse.pop();

      if(current->isTerminal){
        const char* name = getKindSpelling(current->cursor);
        string name_ = name;
        if(name_.find("Expr") != string::npos && clang_getCString(clang_getCursorSpelling(current->cursor))) 
          use.push_back(current); //find target variable
      }

      for(int temp : current->children){
        traverse.push(node_index[temp]);
      }
    }
  }

  return assignment;
}

void AST2Graph::find_LastLexicalUse_6(){
  for(int i=0;i<node_index.size();i++){
    const char *curkindSpelling = getKindSpelling(node_index[i]->cursor);

    if(strcmp(curkindSpelling, "VarDecl") == 0){
      const char *VarName = clang_getCString(clang_getCursorSpelling(node_index[i]->cursor));
      Node_Index* tail = node_index[i]; //current tail of lex-chain

      for(int j=i+1;j<node_index.size();j++){
        //UnexposedExpr should not be counted
        const char *tempKindSpelling = getKindSpelling(node_index[j]->cursor);
        if(strcmp(tempKindSpelling, "UnexposedExpr") == 0) continue;

        //if Spelling == VarDecl_name, connect it to the end of current lex-chain
        if(strcmp(VarName, clang_getCString(clang_getCursorSpelling(node_index[j]->cursor))) == 0){
            add_edge(tail, node_index[j], 6, true);
            //func->addEdge(tail->cursor, node_index[j]->cursor, tail->index, node_index[j]->index, 6);
            tail = node_index[j];
        }
      }    
    }
  }
}

void AST2Graph::find_ReturnsTo_7(){
  for(Node_Index* temp : node_index){
    const char *curkindSpelling = getKindSpelling(temp->cursor);
    if(strcmp(curkindSpelling, "ReturnStmt") == 0){
      add_edge(node_index[0], temp, 7, false);
    }
  }
}

void AST2Graph::find_GuardedBy_8_9(){
  for(int i=0;i<node_index.size();i++){
    const char *curkindSpelling = getKindSpelling(node_index[i]->cursor);
    if(strcmp(curkindSpelling, "IfStmt") == 0){
      //find IfStatement
      if(node_index[i]->children.size() != 2 && node_index[i]->children.size() != 3){
        cout << "IfStmt has neither 2 children nor 3 children: unexpected" << endl;
        continue;
      }

      std::vector<Node_Index*> condition_var;
      std::vector<Node_Index*> if_var;
      std::vector<Node_Index*> else_var;

      //find all variables in condition expression(condition_var)
      std::queue<Node_Index*> traverse;
      traverse.push(node_index[node_index[i]->children[0]]);
      while(!traverse.empty()){
        Node_Index* current = traverse.front();
        traverse.pop();

        if(current->isTerminal){
          const char* name = getKindSpelling(current->cursor);
          string name_ = name;
          if(name_.find("Expr") != string::npos && clang_getCString(clang_getCursorSpelling(current->cursor)))
            condition_var.push_back(current);
        }

        for(int temp : current->children){
          traverse.push(node_index[temp]);
        }
      }

      //find all if_var
      traverse.push(node_index[node_index[i]->children[1]]);
      while(!traverse.empty()){
        Node_Index* current = traverse.front();
        traverse.pop();

        if(current->isTerminal){
          const char* name = getKindSpelling(current->cursor);
          string name_ = name;
          if(name_.find("Expr") != string::npos && clang_getCString(clang_getCursorSpelling(current->cursor)))
            if_var.push_back(current);
        }

        for(int temp : current->children){
          traverse.push(node_index[temp]);
        }
      }

      //find all else_var(if exist)
      if(node_index[i]->children.size() == 3){
        traverse.push(node_index[node_index[i]->children[2]]);
        while(!traverse.empty()){
          Node_Index* current = traverse.front();
          traverse.pop();

          if(current->isTerminal){
            const char* name = getKindSpelling(current->cursor);
            string name_ = name;
            if(name_.find("Expr") != string::npos && clang_getCString(clang_getCursorSpelling(current->cursor)))
              else_var.push_back(current);
          }

          for(int temp : current->children){
            traverse.push(node_index[temp]);
          }
        }
      }

      for(Node_Index* dst : condition_var){
        const char* dst_name = clang_getCString(clang_getCursorSpelling(dst->cursor));
        for(Node_Index* src : if_var){
          const char* src_name = clang_getCString(clang_getCursorSpelling(src->cursor));
          if(strcmp(src_name, dst_name) == 0){
            add_edge(src, dst, 8, true);
            //func->addEdge(src->cursor, dst->cursor, src->index, dst->index, 8);
          }
        }
        for(Node_Index* src : else_var){
          const char* src_name = clang_getCString(clang_getCursorSpelling(src->cursor));
          if(strcmp(src_name, dst_name) == 0){
            add_edge(src, dst, 9, true);
            //func->addEdge(src->cursor, dst->cursor, src->index, dst->index, 9);
          }
        } 
      }
    }
  }
}

unsigned int AST2Graph::getCursorStartLine(CXCursor cursor){
    CXSourceRange extent = clang_getCursorExtent(cursor);
    CXSourceLocation startLocation = clang_getRangeStart(extent);
    CXSourceLocation endLocation = clang_getRangeEnd(extent);
    unsigned int startLine = 0, startColumn = 0; 
    clang_getSpellingLocation(startLocation, nullptr, &startLine, &startColumn, nullptr);
    return startLine;
}

unsigned int AST2Graph::getCursorEndLine(CXCursor cursor){
    CXSourceRange extent = clang_getCursorExtent(cursor);
    CXSourceLocation endLocation = clang_getRangeEnd(extent);
    unsigned int endLine = 0, endColumn = 0; 
    clang_getSpellingLocation(endLocation, nullptr, &endLine, &endColumn, nullptr);
    return endLine;
}

const char* AST2Graph::getKindSpelling(CXCursor cursor){
  enum CXCursorKind curKind = clang_getCursorKind(cursor);
  return clang_getCString(clang_getCursorKindSpelling(curKind));
}

const char* AST2Graph::getCursorSpelling(CXCursor cursor){
  return clang_getCString(clang_getCursorSpelling(cursor));
}

void AST2Graph::add_sandwich_index(){
  int sandwich_cnt = 0;
  for(int i=0;i<node_index.size();i++){
    if(node_index[i]->isTerminal){
      node_index[i]->sandwich_index = sandwich_cnt;
      sandwich_cnt++;
    }
    else{
      node_index[i]->sandwich_index = -1;
    }
  }
}

// Finding all FunctionDecl definition
enum CXChildVisitResult AST2Graph::getFunctions(CXCursor cursor, CXCursor parent,
                                                 CXClientData client_data) {                               
    enum CXCursorKind curKind = clang_getCursorKind(cursor);
    const char *curkindSpelling = clang_getCString(clang_getCursorKindSpelling(curKind));

    if(strcmp(curkindSpelling, "FunctionDecl") == 0 && clang_isCursorDefinition(cursor))
      FD_List.push_back(cursor);
    
    return CXChildVisit_Recurse;
}

//find all (1)Child edges
enum CXChildVisitResult AST2Graph::find_Child_1(CXCursor cursor, CXCursor parent,
                                              CXClientData client_data) {
    //const char *astSpelling = clang_getCString(clang_getCursorSpelling(cursor));

    //Add (1)Child edge
    Node_Index* parent_node = nullptr;
    //int parent_index = -1;
    for(Node_Index* temp : node_index){
      if(clang_equalCursors(temp->cursor, parent)){
        parent_node = temp;
        break;
      }
    }
    if(parent_node == nullptr){
      cout << "Fail finding parent node!" << endl; 
      return CXChildVisit_Break;
    }
    
    Node_Index* current = new Node_Index;
    current->cursor = cursor;
    current->index = cnt;
    current->isTerminal = true;
    current->father = parent_node->index;
    cnt++;
    node_index.push_back(current);
    parent_node->children.push_back(current->index); //add new Node to children list of parent_node

    add_edge(parent_node, current, 1, false);
    
    return CXChildVisit_Recurse;
}

bool AST2Graph::has_Parent(Node_Index* src, int father){
  if(src->index == father) return true;
  Node_Index* temp = src;
  while(temp->father != -1){
    if(temp->father == father) return true;
    temp = node_index[temp->father];
  }

  return false;
}

void AST2Graph::add_edge(Node_Index* ggnn_src, Node_Index* ggnn_dst, int data_type, bool sandwich){
  func->addEdge_ggnn(ggnn_src, ggnn_dst, data_type);
  if(sandwich){
    Node_Index* sandwich_src = ggnn_src;
    Node_Index* sandwich_dst = ggnn_dst;

    while(sandwich_src->children.size()!=0){
      sandwich_src = node_index[sandwich_src->children[0]];
    }
    while(sandwich_dst->children.size()!=0){
      sandwich_dst = node_index[sandwich_dst->children[0]];
    }

    func->addEdge_sandwich(sandwich_src, sandwich_dst, data_type);
  }
}
