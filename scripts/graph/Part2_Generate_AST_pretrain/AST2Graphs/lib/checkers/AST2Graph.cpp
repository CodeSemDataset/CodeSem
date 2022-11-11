#include "checkers/AST2Graph.h"

static llvm::cl::OptionCategory ToolingSampleCategory("Tooling Sample");
//for sandwich: no Child(1), no ComputedFrom(5) for DeclStmt, no ReturnsTo(7)

void AST2Graph::transform() {
  llvm::errs() << "start transform " << program_name << "\n";
  output_filename = 0;
  int filecount = 0;
  int total_len = FileList.size();
  for(string filename : FileList){
    cout << filecount << "/" << total_len << ":" << filename << endl;
    if(filename.find("redis-cli.ast") != std::string::npos)
            continue;
    if(filename.find("revision.ast") != std::string::npos)
            continue;
    if(filename.find("remote-curl.ast") != std::string::npos)
        continue;
    if(filename.find("duktape.c.ast") != std::string::npos)
      continue;
    TransformSingleFile(filename);
    filecount++;
  }
  dict.dump("dict_final.txt");
}

void AST2Graph::TransformSingleFile(string filename){

 //PHASE0: Initialization
  CXIndex Index = clang_createIndex(0,0);
  TU = clang_createTranslationUnit(Index, filename.c_str());
  if(TU == nullptr){
    cout << "Error: " << filename << " is NULL!" << endl;
    return;
  }
  CXCursor C = clang_getTranslationUnitCursor(TU);

 //PHASE1: get FunctionDecl*
  checkKind(C);
  clang_visitChildren(C, checkChildren, NULL);

  //cout << "total_function:" << FD_List.size() << endl << endl;

  //cout << FD_List.size() << endl;
  std::vector<json> json_output_ggnn;
  std::vector<json> json_output_sandwich;
  std::vector<std::string> json_filename;
  int function_cnt = 1;
  
  for(CXCursor temp : FD_List){
    //avoid repeatly dealing with functions in the same header
    if(clang_Location_isInSystemHeader(clang_getCursorLocation(temp)) != 0)
      continue;

    const char* func_name = clang_getCString(clang_getCursorSpelling(temp));
    Function* current = new Function(func_name, dict);
    func = current;

    Node_Index* root = new Node_Index;
    root->cursor = temp;
    root->index = 0;
    if(PRINT_TREE)  root->depth = 0;
    root->isTerminal = false;
    root->father = -1;
    node_index.push_back(root);
    cnt++;

    if(PRINT_TREE){
      const char* temp_name = clang_getCString(clang_getCursorSpelling(temp));
      print_Kind_And_Spelling(temp);
      clang_visitChildren(temp, print_Child, NULL);
      cnt = 0;
      node_index.clear();
      cout << endl;
      continue;
    }

    clang_visitChildren(temp, find_Child_1, NULL); //Add all (1)Child edges, generate node_index

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

    cnt = 0;
    node_index.clear();

    bool function_exist = false;
    for(Function* F : functions){
      if(current->equal(F)){
        function_exist = true;
        break;
      }
    }
    if(function_exist) continue;

    functions.push_back(current);
    json_output_ggnn.push_back(func->dumpJson_ggnn());
    json_output_sandwich.push_back(func->dumpJson_sandwich());
    string tmp_name = func->getName() + "(" + std::to_string(func->getEdgeNum()) + ")";
    json_filename.push_back(tmp_name);
  }

  if(!PRINT_TREE){
    //int pos = filename.find_last_of("/");
    //string output_filename = filename.substr(pos+1);
    //string ggnn_output_name = output_filename + "_ggnn.json";
    //string sandwich_output_name = output_filename + "_sandwich.json";
    //string dict_name = output_filename + "_Dict.txt";

    //dumpJson(json_output_ggnn, ggnn_output_name);
    //dumpJson(json_output_sandwich, sandwich_output_name);
    dumpJson(json_output_ggnn, json_output_sandwich, json_filename);
    //dict.dump("dict_final.txt");
  }

  functions.clear();
  FD_List.clear();
  
  clang_disposeTranslationUnit(TU);
  clang_disposeIndex(Index);
}

void AST2Graph::dumpJson(std::vector<json> ggnn, std::vector<json> sandwich, std::vector<std::string> json_filename) {
  if(ggnn.size() != sandwich.size() || ggnn.size() != json_filename.size()){
    cout << "unequal ggnn and sandwich!" << endl;
  }
  for(int i=0;i<ggnn.size();i++){
    string path_ggnn = root_path + program_name + "/ggnn/" + json_filename[i] + "_ggnn.json";
    string path_sandwich = root_path + program_name + "/sandwich/" + json_filename[i] + "_sandwich.json";
    if(has_analyse.count(path_ggnn) !=0)
      continue;
    has_analyse.insert(path_ggnn);
  //  cout << path_ggnn << endl;

    ofstream out1(path_ggnn);
    out1 << ggnn[i] << endl;
    out1.close();

    ofstream out2(path_sandwich);
    out2 << sandwich[i] << endl;
    out2.close();
  }
}

void AST2Graph::dumpDict(std::vector<std::string> input, string filename){
	ofstream OutFile(filename); 
	for(int i=0;i<input.size();i++){
    OutFile << input[i] << endl;
  }
	OutFile.close(); 
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

//used to find FunctionDecls which are Definition
bool AST2Graph::checkKind(CXCursor cursor) {
    enum CXCursorKind curKind = clang_getCursorKind(cursor);
    const char *curkindSpelling = clang_getCString(
                                  clang_getCursorKindSpelling(curKind));

    if(strcmp(curkindSpelling, "FunctionDecl") == 0 && clang_isCursorDefinition(cursor))
      FD_List.push_back(cursor);
    
    //printf("The AST node kind spelling is:%s\n", curkindSpelling);
    return true;
}

bool AST2Graph::print_Kind_And_Spelling(CXCursor cursor) {
    enum CXCursorKind curKind = clang_getCursorKind(cursor);
    const char *curkindSpelling = clang_getCString(
                                  clang_getCursorKindSpelling(curKind));
    cout << curkindSpelling << "   ";

    const char *astSpelling = clang_getCString(clang_getCursorSpelling(cursor));
    cout << "spelling: " << astSpelling << endl;
    return true;
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
enum CXChildVisitResult AST2Graph::checkChildren(CXCursor cursor, CXCursor parent,
                                                 CXClientData client_data) {                               
    //const char *astSpelling = clang_getCString(clang_getCursorSpelling(cursor));
    //printSpelling(cursor);
    checkKind(cursor);
    //printLocation(cursor);
    
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

//print AST tree
enum CXChildVisitResult AST2Graph::print_Child(CXCursor cursor, CXCursor parent,
                                        CXClientData client_data){
    //Add (1)Child edge
    int parent_index = -1;
    int parent_depth = 0;
    for(Node_Index* temp : node_index){
      if(clang_equalCursors(temp->cursor, parent)){
        parent_index = temp->index;
        parent_depth = temp->depth;
        break;
      }
    }
    if(parent_index == -1){cout << "error" << endl; return CXChildVisit_Break;}
    
    Node_Index* current = new Node_Index;
    current->cursor = cursor;
    current->index = cnt;
    current->depth = parent_depth + 1;
    cnt++;
    node_index.push_back(current);

    for(int i = 0; i < current->depth ; i++){cout<<"--";}
    
    print_Kind_And_Spelling(cursor);
    //printLocation(cursor);

    //func->addEdge(parent, cursor, parent_index, current.index, 1);
    return CXChildVisit_Recurse;
}

const char* AST2Graph::getKindSpelling(CXCursor cursor){
  enum CXCursorKind curKind = clang_getCursorKind(cursor);
  const char *curkindSpelling = clang_getCString(
                                clang_getCursorKindSpelling(curKind));
  return curkindSpelling;
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
