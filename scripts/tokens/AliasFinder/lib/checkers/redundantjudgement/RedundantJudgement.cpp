#include "checkers/redundantjudgement/RedundantJudgement.h"

void split(std::string &s, std::string &delim, std::vector<std::string> *ret);
// 获取语句的源码
string get_stmt_string(const Stmt *S);
// 获取语句的位置
string get_location(const Stmt *S, FunctionDecl *fd);

void RedundantJudgement::check()
{
    // read configuration from config files
    initialize_RJ_checker_configuration();

    // analyse function infomation ( usepoints and conditional stmts)
    cerr << " RJ: Start analysing function information\n";
    int count = 0;
    for (ASTFunction *ast_func : resource->getFunctions())
    {
        count++;
        cerr << "\r  is processing functions information(" << count << '/' << resource->getFunctions().size() << ")";
        analyse_func_info(ast_func);
    }
    std::cerr << '\n';

    // print usepoints information
    if (RJ_Checker_Config.PrintUsePointsInfo)
    {
        cerr << "\r RJ: Start printing usepoints information\n";
        print_use_points_info();
    }

    bool RJ_UP = RJ_Checker_Config.UsePointCheck;
    bool RJ_NUP = RJ_Checker_Config.NoUsePointCheck;

    // intra check (with usepoint and without usepoint)
    if (RJ_Checker_Config.IntraCheck)
    {
        if (RJ_Checker_Config.UsePointCheck)
        {
            RJ_Checker_Config.NoUsePointCheck = false; // UP & NUP should not be true at the same time
            cerr << " RJ: Start intra checking (with usepoint)\n";
            intra_check();
            RJ_Checker_Config.NoUsePointCheck = RJ_NUP; // restore UP's value
        }
        if (RJ_Checker_Config.NoUsePointCheck)
        {
            RJ_Checker_Config.UsePointCheck = false; // UP & NUP should not be true at the same time
            cerr << " RJ: Start intra checking (without usepoint)\n";
            intra_check();
            RJ_Checker_Config.UsePointCheck = RJ_UP; // restore UP's value
        }
    }

    // inter check (with usepoint and without usepoint)
    if (RJ_Checker_Config.InterCheck)
    {
        if (RJ_Checker_Config.UsePointCheck)
        {
            RJ_Checker_Config.NoUsePointCheck = false; // UP & NUP should not be true at the same time
            cerr << " RJ: Start inter checking (with usepoint)\n";
            inter_check();
            print_RJ_result();
            RJ_Checker_Config.NoUsePointCheck = RJ_NUP; // restore UP's value
        }
        if (RJ_Checker_Config.NoUsePointCheck)
        {
            RJ_Checker_Config.UsePointCheck = false; // UP & NUP should not be true at the same time
            cerr << " RJ: Start inter checking (without usepoint)\n";
            inter_check();
            print_RJ_result();
            RJ_Checker_Config.UsePointCheck = RJ_UP; // restore UP's value
        }
    }
}

void RedundantJudgement::initialize_RJ_checker_configuration()
{
    auto RJ = configure->getOptionBlock("RedundantJudgement");
    if (RJ.find("UsePointCheck") != RJ.end() && RJ.find("UsePointCheck")->second == "true")
        RJ_Checker_Config.UsePointCheck = true;
    if (RJ.find("NoUsePointCheck") != RJ.end() && RJ.find("NoUsePointCheck")->second == "true")
        RJ_Checker_Config.NoUsePointCheck = true;
    if (RJ.find("InterCheck") != RJ.end() && RJ.find("InterCheck")->second == "true")
        RJ_Checker_Config.InterCheck = true;
    if (RJ.find("IntraCheck") != RJ.end() && RJ.find("IntraCheck")->second == "true")
        RJ_Checker_Config.IntraCheck = true;
    if (RJ.find("SpecificTargetCheck") != RJ.end() && RJ.find("SpecificTargetCheck")->second == "true")
    {
        RJ_Checker_Config.SpecificTargetCheck = true;
        if (RJ.find("SpecificTargetConfigPath") != RJ.end())
        {
            RJ_Checker_Config.SpecificTargetConfigPath = RJ.find("SpecificTargetConfigPath")->second;
            RJ_sepcific_target_config = RJ_Specific_Target_Config(RJ_Checker_Config.SpecificTargetConfigPath);
        }
    }
    if (RJ.find("PrintUsePointsInfo") != RJ.end() && RJ.find("PrintUsePointsInfo")->second == "true")
        RJ_Checker_Config.PrintUsePointsInfo = true;
    if (RJ.find("CheckDepth") != RJ.end())
    {
        std::stringstream ss;
        ss << RJ.find("CheckDepth")->second;
        ss >> RJ_Checker_Config.CheckDepth;
    }
}

bool RedundantJudgement::analyse_func_info(ASTFunction *ast_func)
{
    // step 1: 过滤不需要被处理的函数，主要为库函数
    FunctionDecl *fd = manager->getFunctionDecl(ast_func);
    if (!fd->isDefined())
        return false;
    // 过滤掉因为头文件而包含的库函数
    const clang::SourceManager &SM = fd->getASTContext().getSourceManager();
    if (SM.isInSystemHeader(fd->getBeginLoc()))
        return false;
    // 会导致回调函数被漏掉，不能处理
    // if (!SM.isInMainFile(fd->getLocation()))
    //     return false;
    // 过滤掉没有函数体的函数，防止后面分析函数时出错
    if (!fd->hasBody())
        return false;
    fd = fd->getDefinition();
    if (funcs_info.find(fd) != funcs_info.end())
        return false;
    // step1 end

    // for debug: 临时输出，查看正在处理的函数
    // cout << "processing function " << common::getFullName(fd) << " ......\n";
    // for debug end

    // for debug: 测试逆向调用链 test getReverseCallChains in call graph
    // vector<vector<ASTFunction *>> callchains = call_graph->getReverseCallChains(ast_func, 100);
    // int count = 1;
    // for (int i = 0; i < callchains.size(); i++)
    // {
    //     cout << "callchain " << i << endl;
    //     for (size_t j = 0; j < callchains[i].size(); j++)
    //     {
    //         cout << callchains[i][j]->getName();
    //         if (j != callchains[i].size() - 1)
    //             cout << " <- ";
    //         else
    //             cout << endl;
    //     }
    // }
    // cout << endl;
    // for debug end

    // step2: 分析函数，收集函数信息
    FuncInfo *func_info = new FuncInfo(fd, ast_func);
    funcs_info.insert(pair<FunctionDecl *, FuncInfo *>(fd, func_info));
    func_info->initialize_ifstmts();    //分析函数中条件语句
    func_info->initialize_use_points(); //分析函数使用点
    // step2 end

    // step3: 根据配置项，将函数加入待（作为callee）检测的函数数组中
    if (RJ_Checker_Config.SpecificTargetCheck)
    {

        if (RJ_sepcific_target_config.is_specific_func(fd))
        {
            callees_under_detection.insert(fd);
        }
    }
    else
    {
        callees_under_detection.insert(fd);
    }
    // step3 end
    return true;
}

void RedundantJudgement::intra_check()
{
    // xml
    pugi::xml_document RJ_xml;
    pugi::xml_node RJ_node = RJ_xml.append_child("RedundantJudgement");
    pugi::xml_node check_type_node = RJ_node.append_child("check_type");
    check_type_node.append_child(pugi::node_pcdata).set_value("intra check");
    // xml end
    string check_type;
    string xml_file;
    if (RJ_Checker_Config.UsePointCheck)
    {
        check_type = "[Intra Redundant Judgement with usepoint]\n";
        xml_file = "RJ_Intra_Result_UP.xml";
    }
    else
    {
        check_type = "[Intra Redundant Judgement without usepoint]\n";
        xml_file = "RJ_Intra_Result_NUP.xml";
    }
    string log_intra_check = YELLOW_COLOR + check_type + CLOSE_COLOR;
    common::printLog(log_intra_check, common::CheckerName::RedundantJudgement, 2, *configure);
    bool has_intra_result = false;
    for (auto fd : callees_under_detection)
    {
        FuncInfo *fi = funcs_info.find(fd)->second;
        map<const ValueDecl *, set<const Stmt *>> intra_result; // <变量，对应的条件语句集合>
        for (auto cond_info : fi->conds_info)
        {
            const ValueDecl *vd = cond_info.first;
            if (RJ_Checker_Config.UsePointCheck)
            {
                int param_i = is_param(fd, vd);
                if (param_i == -1 && fi->intra_use_points.find(vd) == fi->intra_use_points.end())
                    continue;
                else if (param_i != -1 && fi->use_points.find(param_i) == fi->use_points.end())
                    continue;
            }
            set<const Stmt *> conds;
            for (auto cond : cond_info.second)
            {
                conds.insert(cond.cond);
            }
            if (conds.size() >= 2)
            {
                intra_result.emplace(vd, conds);
            }
        }
        // 打印结果
        if (intra_result.size() > 0)
        {
            has_intra_result = true;
            // xml
            pugi::xml_node func_node = RJ_node.append_child("function");
            pugi::xml_node func_name = func_node.append_child("func_name");
            func_name.append_child(pugi::node_pcdata).set_value(fi->ast->getFullName().c_str());
            // xml end
            string log_func = "----- function " + fd->getNameAsString() +
                              " has " + to_string(intra_result.size()) +
                              " intra results -----\n";
            common::printLog(log_func, common::CheckerName::RedundantJudgement, 2, *configure);
            int count = 1;
            string log_info;
            for (auto it : intra_result)
            {
                string var_name = it.first->getNameAsString();
                // xml
                pugi::xml_node result = func_node.append_child("result");
                result.append_attribute("id").set_value(count);
                // xml end
                log_info += ("----- redendant protection " + to_string(count) + " -----\n");

                // use point & target var
                // xml
                pugi::xml_node target_var;
                DeclRefExpr *var_stmt;
                if (RJ_Checker_Config.UsePointCheck)
                {
                    target_var = result.append_child("use_point");
                    int param_idx = is_param(fd, it.first);
                    if (param_idx == -1)
                        var_stmt = fi->intra_use_points.find(it.first)->second.begin()->stmt;
                    else
                        var_stmt = fi->use_points.find(param_idx)->second.begin()->stmt;
                    target_var.append_child(pugi::node_pcdata).set_value(var_name.c_str());
                    pugi::xml_node target_log = result.append_child("usepoint_loc");
                    target_log.append_child(pugi::node_pcdata).set_value(get_location(var_stmt, fd).c_str());
                }
                else
                {
                    target_var = result.append_child("target_var");
                    target_var.append_child(pugi::node_pcdata).set_value(var_name.c_str());
                }
                // xml end
                if (RJ_Checker_Config.UsePointCheck)
                    log_info += (BLUE_COLOR + "[use point]\n" + CLOSE_COLOR +
                                 "var: " + var_name + "\n" + get_stmt_info(var_stmt, fd));
                else
                    log_info += (BLUE_COLOR + "[target var]\n" + CLOSE_COLOR +
                                 "var: " + var_name + "\n");
                // cond
                log_info += (BLUE_COLOR + "[redundant conds]\n" + CLOSE_COLOR);
                for (auto cond : it.second)
                {
                    // xml
                    pugi::xml_node loc_cond = result.append_child("cond_location");
                    loc_cond.append_child(pugi::node_pcdata).set_value(get_location(cond, fi->fd).c_str());
                    pugi::xml_node code_cond = result.append_child("cond_code");
                    code_cond.append_child(pugi::node_pcdata).set_value(get_stmt_string(cond).c_str());
                    // xml end
                    log_info += get_stmt_info(cond, fd);
                }
                count++;
            }
            common::printLog(log_info, common::CheckerName::RedundantJudgement, 1, *configure);
        }
    }
    if (!has_intra_result)
    {
        common::printLog("No results.\n", common::CheckerName::RedundantJudgement, 2, *configure);
    }

    RJ_xml.save_file(xml_file.c_str());
}

void RedundantJudgement::inter_check()
{
    for (auto callee_fd : callees_under_detection)
    {
        // debug
        // cout << YELLOW_COLOR << "inter check for function " << callee_fd->getNameAsString()
        //      << "............" << CLOSE_COLOR << endl;
        // debug end
        FuncInfo *fi = funcs_info.find(callee_fd)->second;
        for (size_t param_idx = 0; param_idx < fi->fd->param_size(); param_idx++)
        {
            if (RJ_Checker_Config.UsePointCheck &&
                fi->use_points.find(param_idx) == fi->use_points.end())
                continue;

            if (RJ_Checker_Config.NoUsePointCheck &&
                RJ_Checker_Config.SpecificTargetCheck &&
                !RJ_sepcific_target_config.is_specific_param(fi->fd, param_idx))
                continue;

            AnalyseValueChange *analyse_change = new AnalyseValueChange(fi->fd->getParamDecl(param_idx));
            analyse_change->TraverseStmt(fi->fd->getBody());

            vector<CondInfo *> callee_conds;
            auto conds_info = fi->conds_info.find(fi->fd->getDefinition()->getParamDecl(param_idx));
            if (conds_info == fi->conds_info.end())
                continue;
            else
            {
                // 判断条件语句之前是否有对变量的赋值
                for (size_t i = 0; i < conds_info->second.size(); i++)
                {
                    bool ju = true;
                    int64_t cond_id = conds_info->second[i].sub_cond->getID(fi->fd->getASTContext());
                    for (auto it : analyse_change->vars)
                    {
                        if (cond_id < it->getID(fi->fd->getASTContext()))
                        {
                            ju = false;
                            break;
                        }
                    }
                    if (ju)
                        callee_conds.emplace_back(&conds_info->second[i]);
                }
                // end
            }
            // 检测caller
            ASTFunction *callee_ast = fi->ast;
            for (auto caller_ast : call_graph->getParents(callee_ast))
            {
                if (caller_ast == callee_ast)
                    continue;
                RJ_ErrorInfo res(fi->fd, param_idx);
                res.callee_info.callee_conds = callee_conds;
                FunctionDecl *caller_fd = manager->getFunctionDecl(caller_ast);
                check_caller(fi->fd, caller_fd, param_idx, res);
            }
            ValueDecl *vd = callee_fd->getDefinition()->getParamDecl(param_idx);
            check_cond(vd);
        }
    }
}

void RedundantJudgement::check_caller(FunctionDecl *callee_fd,
                                      FunctionDecl *caller_fd,
                                      size_t param_idx,
                                      RJ_ErrorInfo res)
{

    // debug
    // cout << YELLOW_COLOR << "  check caller for " << callee_fd->getNameAsString() << " and "
    //      << caller_fd->getNameAsString() << "............" << CLOSE_COLOR << endl;
    // debug end

    if (funcs_info.find(caller_fd) == funcs_info.end())
    {
        return;
    }

    FuncInfo *callee_fi = funcs_info.find(callee_fd)->second;
    FuncInfo *caller_fi = funcs_info.find(caller_fd)->second;
    // step1: 分析caller中调用callee的调用点，并将调用点按照实参变量分类
    //获取caller中调用该callee的callsites的id
    set<int64_t> callsite_ids;
    for (auto it : call_graph->getParentsWithCallsite(callee_fi->ast))
    {
        if (it.first == caller_fi->ast)
            callsite_ids.insert(it.second);
    }
    AnalyseCallExpr *analyse_callexpr = new AnalyseCallExpr(caller_fd, callsite_ids, param_idx);
    analyse_callexpr->TraverseStmt(caller_fd->getBody());
    map<ValueDecl *, set<const Expr *>> args_callsites = analyse_callexpr->args_callsites;

    // step2: 对每个arg生成一条记录，加入res，并且分析是否沿调用链逆向方向递归检测下一个caller
    for (auto arg_callsites : args_callsites)
    {
        RJ_ErrorInfo new_res = res;
        new_res.add_caller(caller_fd, arg_callsites.first, arg_callsites.second);

        // 判断是否继续沿调用链检测 judge next_check
        // 满足配置项设置的检测深度，实参变量为caller函数的形参，且有调用caller函数的父节点等三个条件时，
        // next_check为true，继续沿调用链逆向方向进行检测
        int next_param_idx = is_param(caller_fd, arg_callsites.first);
        if (new_res.callers_info.size() >= RJ_Checker_Config.CheckDepth ||
            next_param_idx == -1 ||
            call_graph->getParents(caller_fi->ast).size() == 0)
        {
            ValueDecl *param_vd = new_res.callee_info.callee_fd->getDefinition()->getParamDecl(new_res.callee_info.param_idx);
            if (RJ_Checker_Config.UsePointCheck)
                RJ_result[param_vd].emplace_back(new_res);
            else if (RJ_Checker_Config.NoUsePointCheck)
                RJ_result_NUP[param_vd].emplace_back(new_res);
            continue;
        }

        for (ASTFunction *next_caller_ast : call_graph->getParents(caller_fi->ast))
        {
            bool no_loop = true;
            FunctionDecl *next_caller_fd = manager->getFunctionDecl(next_caller_ast);
            for (auto caller_info : new_res.callers_info)
            {
                if (next_caller_fd == caller_info.caller_fd)
                {
                    no_loop = false;
                    break;
                }
            }
            if (no_loop)
            {
                check_caller(caller_fd, next_caller_fd, next_param_idx, new_res);
            }
        }
    }
}

void RedundantJudgement::check_cond(ValueDecl *vd)
{
    vector<RJ_ErrorInfo> results;
    // 判断是基于使用点的检测还是无使用点检测
    // 获得对应的结果集results
    auto it_UP = RJ_result.find(vd);
    auto it_NUP = RJ_result_NUP.find(vd);
    if (RJ_Checker_Config.UsePointCheck)
    {
        if (it_UP == RJ_result.end())
            return;
        results = it_UP->second;
    }
    else if (RJ_Checker_Config.NoUsePointCheck)
    {
        if (it_NUP == RJ_result_NUP.end())
            return;
        results = it_NUP->second;
    }

    // 对results中的每个结果进行判断
    // 每个结果对应同一使用点变量的不同逆向调用链
    for (size_t i = 0; i < results.size(); i++)
    {
        // 从逆向调用链的尾端开始，判断caller中是否有对应于使用点变量（实参变量）的条件语句
        // 若没有，则删除该caller，否则将对应的条件语句加入caller_conds
        for (int j = results[i].callers_info.size() - 1; j >= 0; j--)
        {
            FunctionDecl *caller_fd = results[i].callers_info[j].caller_fd;
            ValueDecl *arg = results[i].callers_info[j].arg;
            FuncInfo *caller_fi = funcs_info[caller_fd];
            auto caller_conds = caller_fi->conds_info.find(arg);
            if (caller_conds == caller_fi->conds_info.end())
            {
                if (j == results[i].callers_info.size() - 1)
                {
                    results[i].callers_info.erase(results[i].callers_info.begin() + j);
                }
            }
            else
            {
                // 判断在条件语句和callsite之间是否有对应变量被赋值（变量值更新）
                AnalyseValueChange *analyse_change = new AnalyseValueChange(arg);
                analyse_change->TraverseStmt(caller_fd->getBody());
                int64_t callsite_max = -1, callsite_min = -1;
                for (auto it : results[i].callers_info[j].callsites)
                {
                    int64_t id = it->getID(caller_fd->getASTContext());
                    if (callsite_max == -1)
                    {
                        callsite_max = id;
                        callsite_min = id;
                    }
                    else
                    {
                        if (id > callsite_max)
                            callsite_max = id;
                        if (id < callsite_min)
                            callsite_min = id;
                    }
                }

                for (size_t k = 0; k < caller_conds->second.size(); k++)
                {
                    bool ju = true;
                    int64_t cond_id = caller_conds->second[k].sub_cond->getID(caller_fd->getASTContext());
                    for (auto it : analyse_change->vars)
                    {
                        int64_t id = it->getID(caller_fd->getASTContext());
                        if ((id < callsite_max && id > cond_id) ||
                            (id < cond_id && id > callsite_min))
                        {
                            ju = false;
                            break;
                        }
                    }
                    if (ju)
                        results[i].callers_info[j].caller_conds.emplace_back(&caller_conds->second[k]);
                }
                // end
            }
        }

        // 针对成员变量进行冗余判断，并删除假阳性的结果
        // 即若条件语句对同一变量的不同成员变量进行判断，则不认为是冗余的
        if (!results[i].delete_false_positives())
        {
            results.erase(results.begin() + i);
            i--;
        }
        else
        {
            // 判断是否与前面的检测结果重复
            // 在删除无冗余保护的caller时，可能造成结果重复
            for (int j = i - 1; j >= 0; j--)
            {
                if (results[i].callers_info.size() != results[j].callers_info.size())
                    continue;
                bool is_same = true;
                for (size_t k = 0; k < results[i].callers_info.size(); k++)
                {
                    if (results[i].callers_info[k].caller_fd !=
                        results[j].callers_info[k].caller_fd)
                    {
                        is_same = false;
                        break;
                    }
                    else if (results[i].callers_info[k].arg !=
                             results[j].callers_info[k].arg)
                    {
                        is_same = false;
                        break;
                    }
                }
                if (is_same)
                {
                    results.erase(results.begin() + i);
                    i--;
                    break;
                }
            }
        }
    }
    if (results.size() == 0)
    {
        if (RJ_Checker_Config.UsePointCheck)
            RJ_result.erase(it_UP);
        else if (RJ_Checker_Config.NoUsePointCheck)
            RJ_result_NUP.erase(it_NUP);
    }
    else
    {
        if (RJ_Checker_Config.UsePointCheck)
            RJ_result[vd] = results;
        else if (RJ_Checker_Config.NoUsePointCheck)
            RJ_result_NUP[vd] = results;
    }
}

void RedundantJudgement::print_RJ_result()
{
    int res_count = 0;
    string check_type;
    string xml_file;
    map<ValueDecl *, vector<RJ_ErrorInfo>> *print_result;
    if (RJ_Checker_Config.UsePointCheck)
    {
        check_type = "[Inter Redundant Rrotection with usepoint]\n";
        xml_file = "RJ_Inter_Result_UP.xml";
        print_result = &RJ_result;
    }
    else
    {
        check_type = "[Inter Redundant Rrotection without usepoint]\n";
        xml_file = "RJ_Inter_Result_NUP.xml";
        print_result = &RJ_result_NUP;
    }
    for (auto it : *print_result)
        res_count += it.second.size();

    string log_inter_check = YELLOW_COLOR + check_type + "total number of redundant protection: " +
                             to_string(res_count) + "\n" + CLOSE_COLOR;
    common::printLog(log_inter_check, common::CheckerName::RedundantJudgement, 2, *configure);

    // xml
    pugi::xml_document RJ_xml;
    pugi::xml_node RJ_node = RJ_xml.append_child("RedundantJudgement");
    // xml end

    res_count = 1;
    for (auto results : *print_result)
    {
        for (auto res : results.second)
        {
            FuncInfo *callee_fi = funcs_info[res.callee_info.callee_fd];
            string callee_fullname = callee_fi->ast->getFullName();

            // xml
            pugi::xml_node result = RJ_node.append_child("result");
            result.append_attribute("id").set_value(res_count);
            pugi::xml_node check_type = result.append_child("check_type");
            check_type.append_child(pugi::node_pcdata).set_value("inter check");
            // xml end

            // part1: print callchain
            string log_info = "----- redendant protection " + to_string(res_count) + " -----\n" +
                              BLUE_COLOR + "[callchain]\n" + CLOSE_COLOR;

            // xml
            pugi::xml_node callchain = result.append_child("callchain");
            // xml end
            // part1-1: callee
            // xml
            pugi::xml_node func_callee = callchain.append_child("function");
            func_callee.append_attribute("type").set_value("CALLEE");
            pugi::xml_node loc_callee = func_callee.append_child("location");
            string loc_str = res.callee_info.callee_fd->getLocation().printToString(res.callee_info.callee_fd->getASTContext().getSourceManager());
            loc_callee.append_child(pugi::node_pcdata).set_value(loc_str.c_str());
            pugi::xml_node code_callee = func_callee.append_child("code");
            code_callee.append_child(pugi::node_pcdata).set_value(callee_fullname.c_str());
            // xml end
            log_info += callee_fullname + "\n";
            // part1-1 end
            // part1-2: caller
            for (size_t i = 0; i < res.callers_info.size(); i++)
            {
                auto caller_info = res.callers_info[i];
                // xml
                pugi::xml_node func_node = callchain.append_child("function");
                func_node.append_attribute("type").set_value("CALLSITE");
                // xml end
                string caller_fullname = funcs_info[caller_info.caller_fd]->ast->getFullName();
                log_info += ("  <-- " + caller_fullname + "\n");
                for (auto callsite : caller_info.callsites)
                {
                    // xml
                    pugi::xml_node loc_callsite = func_node.append_child("location");
                    loc_callsite.append_child(pugi::node_pcdata).set_value(get_location(callsite, caller_info.caller_fd).c_str());
                    pugi::xml_node code_callsite = func_node.append_child("code");
                    code_callsite.append_child(pugi::node_pcdata).set_value(get_stmt_string(callsite).c_str());
                    // xml end
                    log_info += get_stmt_info(callsite, caller_info.caller_fd);
                }
            }
            // part1-2 end
            // part1 end

            // part2: print usepoint
            int param_idx_int = res.callee_info.param_idx;
            string usepoint_param_idx = to_string(param_idx_int);
            ParmVarDecl *p_vd = res.callee_info.callee_fd->getDefinition()->getParamDecl(param_idx_int);
            string usepoint_var = p_vd->getNameAsString();
            const Stmt *usepoint_stmt;
            if (RJ_Checker_Config.UsePointCheck)
                usepoint_stmt = callee_fi->use_points[res.callee_info.param_idx].begin()->stmt;
            // xml
            pugi::xml_node use_point;
            if (RJ_Checker_Config.UsePointCheck)
                use_point = result.append_child("use_point");
            else
                use_point = result.append_child("target_var");
            pugi::xml_node param_idx = use_point.append_child("param_index");
            param_idx.append_child(pugi::node_pcdata).set_value(usepoint_param_idx.c_str());
            pugi::xml_node var_node = use_point.append_child("var");
            var_node.append_child(pugi::node_pcdata).set_value(usepoint_var.c_str());
            if (RJ_Checker_Config.UsePointCheck)
            {
                pugi::xml_node loc_usepoint = use_point.append_child("location");
                loc_usepoint.append_child(pugi::node_pcdata).set_value(get_location(usepoint_stmt, res.callee_info.callee_fd).c_str());
            }
            // xml end
            if (RJ_Checker_Config.UsePointCheck)
                log_info += (BLUE_COLOR + "[use point]\n" + CLOSE_COLOR +
                             "param_index: " + usepoint_param_idx +
                             "  var: " + usepoint_var + "\n" +
                             get_stmt_info(usepoint_stmt, res.callee_info.callee_fd));
            else
                log_info += (BLUE_COLOR + "[target var]\n" + CLOSE_COLOR +
                             "param_index: " + usepoint_param_idx +
                             "  var: " + usepoint_var + "\n");
            // part2 end

            // part3: conds
            for (auto callee_conds_with_member : res.callee_info.callee_conds_with_members)
            {
                // part3-1: callee conds
                // xml
                pugi::xml_node callee_protection = result.append_child("callee_protection");
                pugi::xml_node callee_name = callee_protection.append_child("callee_name");
                callee_name.append_child(pugi::node_pcdata).set_value(res.callee_info.callee_fd->getNameAsString().c_str());
                // xml end
                log_info += (BLUE_COLOR + "[callee's conds] in " +
                             res.callee_info.callee_fd->getNameAsString() + "\n" + CLOSE_COLOR);
                for (auto callee_cond : callee_conds_with_member.second)
                {
                    // xml
                    pugi::xml_node loc_cond = callee_protection.append_child("location");
                    loc_cond.append_child(pugi::node_pcdata).set_value(get_location(callee_cond, res.callee_info.callee_fd).c_str());
                    pugi::xml_node code_cond = callee_protection.append_child("code");
                    code_cond.append_child(pugi::node_pcdata).set_value(get_stmt_string(callee_cond).c_str());
                    // xml end
                    log_info += get_stmt_info(callee_cond, res.callee_info.callee_fd);
                }
                // part3-1 end

                // part3-2: caller conds
                // xml
                pugi::xml_node caller_protection = result.append_child("caller_protection");
                // xml end
                for (auto caller_info : res.callers_info)
                {
                    // xml
                    pugi::xml_node caller_function = caller_protection.append_child("caller_function");
                    pugi::xml_node caller_name = caller_function.append_child("caller_name");
                    caller_name.append_child(pugi::node_pcdata).set_value(caller_info.caller_fd->getNameAsString().c_str());
                    // xml end
                    log_info += (BLUE_COLOR + "[caller's conds] in " +
                                 caller_info.caller_fd->getNameAsString() + "\n" + CLOSE_COLOR);
                    auto caller_conds_with_members = caller_info.caller_conds_with_members.find(callee_conds_with_member.first);
                    if (caller_conds_with_members != caller_info.caller_conds_with_members.end())
                    {
                        for (auto caller_cond : caller_conds_with_members->second)
                        {
                            // xml
                            pugi::xml_node loc_cond = caller_function.append_child("location");
                            loc_cond.append_child(pugi::node_pcdata).set_value(get_location(caller_cond, caller_info.caller_fd).c_str());
                            pugi::xml_node code_cond = caller_function.append_child("code");
                            code_cond.append_child(pugi::node_pcdata).set_value(get_stmt_string(caller_cond).c_str());
                            // xml end
                            log_info += get_stmt_info(caller_cond, caller_info.caller_fd);
                        }
                    }
                }
                // part3-2 end
            }
            // part3 end
            common::printLog(log_info, common::CheckerName::RedundantJudgement, 1, *configure);
            res_count++;
        }
    }
    RJ_xml.save_file(xml_file.c_str());
}

void RedundantJudgement::print_use_points_info()
{
    // xml
    pugi::xml_document RJUP_xml;
    pugi::xml_node RJUP_node = RJUP_xml.append_child("RJUsePointInfo");
    // xml end
    string log_usepoint_info = YELLOW_COLOR + "[all use points information]\n" + CLOSE_COLOR;
    string log_info;
    for (auto fd : callees_under_detection)
    {
        FuncInfo *fi = funcs_info.find(fd)->second;
        if (fi->use_points.size() == 0 && fi->intra_use_points.size() == 0)
            continue;
        // xml
        pugi::xml_node func_node = RJUP_node.append_child("function");
        pugi::xml_node func_name = func_node.append_child("func_name");
        func_name.append_child(pugi::node_pcdata).set_value(fd->getNameAsString().c_str());
        // xml end
        log_info += ("---------------- function " + fd->getNameAsString() +
                     " has " + to_string(fi->use_points.size() + fi->intra_use_points.size()) +
                     " use points totally ----------------\n");

        // use point
        for (auto it_usepoint = fi->use_points.begin(); it_usepoint != fi->use_points.end(); it_usepoint++)
        {
            string var_name = it_usepoint->second.begin()->stmt->getNameInfo().getAsString();
            int param_idx = it_usepoint->second.begin()->param_idx;
            // xml
            pugi::xml_node param_node = func_node.append_child("param");
            pugi::xml_node param_idx_node = param_node.append_child("param_idx");
            param_idx_node.append_child(pugi::node_pcdata).set_value(to_string(param_idx).c_str());
            pugi::xml_node var_node = param_node.append_child("var_name");
            var_node.append_child(pugi::node_pcdata).set_value(var_name.c_str());
            // xml end
            log_info += ("param: " + to_string(param_idx) + "  var:" + var_name + "\n");
            for (auto use_point : it_usepoint->second)
            {
                // xml
                pugi::xml_node loc_node = param_node.append_child("var_location");
                loc_node.append_child(pugi::node_pcdata).set_value(get_location(use_point.stmt, fd).c_str());
                // xml end
                log_info += (get_stmt_info(use_point.stmt, fd));
            }
        }
        // intra use point
        for (auto it_usepoint = fi->intra_use_points.begin(); it_usepoint != fi->intra_use_points.end(); it_usepoint++)
        {
            string var_name = it_usepoint->second.begin()->stmt->getNameInfo().getAsString();
            int param_idx = it_usepoint->second.begin()->param_idx;
            // xml
            pugi::xml_node param_node = func_node.append_child("param");
            pugi::xml_node param_idx_node = param_node.append_child("param_idx");
            param_idx_node.append_child(pugi::node_pcdata).set_value(to_string(param_idx).c_str());
            pugi::xml_node var_node = param_node.append_child("var_name");
            var_node.append_child(pugi::node_pcdata).set_value(var_name.c_str());
            // xml end
            log_info += ("param: " + to_string(param_idx) + "  var:" + var_name + "\n");
            for (auto use_point : it_usepoint->second)
            {
                // xml
                pugi::xml_node loc_node = param_node.append_child("var_location");
                loc_node.append_child(pugi::node_pcdata).set_value(get_location(use_point.stmt, fd).c_str());
                // xml end
                log_info += (get_stmt_info(use_point.stmt, fd));
            }
        }
    }
    // xml
    RJUP_xml.save_file("RJ_UsePoint.xml");
    // xml end
    common::printLog(log_usepoint_info + log_info, common::CheckerName::RedundantJudgement, 2, *configure);
}

void FuncInfo::initialize_ifstmts()
{
    // 递归遍历类,遍历函数体内的条件语句
    AnalyseCond *analyse_cond = new AnalyseCond();
    analyse_cond->TraverseStmt(fd->getBody()); //可以

    // 处理条件表达式，将复合条件表达式拆分为与变量关联的单个条件表达式
    for (auto cond : analyse_cond->conds)
    {
        if (cond != nullptr)
        {
            traverse_compound_cond(cond, cond, cond);
        }
    }
    // 处理三元表达式()  ? : 导致的保护语句
    for (auto condop : analyse_cond->condops_decl)
    {
        string member_key;
        conds_info[condop.first].emplace_back(CondInfo(condop.second, condop.second, member_key));
    }
    for (auto condop : analyse_cond->condops_assign)
    {
        vector<string> members_name = condop.members;
        string member_key;
        for (size_t i = 0; i < members_name.size(); i++)
        {
            member_key += members_name[i];
        }
        conds_info[condop.var_dre->getDecl()].emplace_back(CondInfo(condop.cond, condop.cond, member_key));
    }
}

void FuncInfo::traverse_compound_cond(const Expr *expr, Expr *cond, const Expr *sub_cond)
{
    if (expr == nullptr)
        return;
    if (const DeclRefExpr *declref_expr = dyn_cast<DeclRefExpr>(expr))
    {
        vector<string> members_name;
        string member_key;
        AnalyseMember *analyse_member = new AnalyseMember();
        Expr *sub_expr = const_cast<Expr *>(sub_cond);
        analyse_member->TraverseStmt(sub_expr);
        if (analyse_member->member_vars.find(const_cast<DeclRefExpr *>(declref_expr)) != analyse_member->member_vars.end())
        {
            auto members = analyse_member->member_vars.find(const_cast<DeclRefExpr *>(declref_expr))->second;
            for (auto it : members)
            {
                members_name.emplace_back(it->getMemberNameInfo().getAsString());
                member_key += it->getMemberNameInfo().getAsString();
            }
        }
        //
        bool unvisited = true;
        auto it_conds_info = conds_info.find(declref_expr->getDecl());
        if (it_conds_info != conds_info.end())
        {
            for (auto cond_info : it_conds_info->second)
            {
                if (cond_info.sub_cond == sub_cond)
                {
                    unvisited = false;
                    break;
                }
            }
        }
        if (unvisited)
            conds_info[declref_expr->getDecl()].emplace_back(CondInfo(cond, sub_cond, member_key));
    }
    // 不对数组变量的条件语句分析
    else if (const ArraySubscriptExpr *array = dyn_cast<ArraySubscriptExpr>(expr))
    {
        return;
    }
    else if (const CallExpr *call_expr = dyn_cast<CallExpr>(expr))
    {
        return;
    }
    else
    {
        for (auto it : expr->children())
        {
            const Expr *child_expr = dyn_cast<Expr>(it);
            const Expr *new_sub = sub_cond;
            // 判断单个子保护语句是否要更新为子表达式
            // 父表达式是否为逻辑与、逻辑或
            if (const BinaryOperator *bo = dyn_cast<BinaryOperator>(expr))
            {
                if (bo_logical_opc.find(bo->getOpcode()) != bo_logical_opc.end())
                {
                    new_sub = child_expr;
                }
            }
            // 子表达式是否为二元条件表达式或一元条件表达式逻辑非
            if (child_expr != nullptr)
            {
                if (const BinaryOperator *bo = dyn_cast<BinaryOperator>(child_expr))
                {
                    if (bo_cond_opc.find(bo->getOpcode()) != bo_cond_opc.end())
                    {
                        new_sub = child_expr;
                    }
                }
                else if (const UnaryOperator *uo = dyn_cast<UnaryOperator>(child_expr))
                {
                    if (unary_cond_opc.find(uo->getOpcode()) != unary_cond_opc.end())
                    {
                        new_sub = child_expr;
                    }
                }
            }
            traverse_compound_cond(child_expr, cond, new_sub);
        }
    }
}

void FuncInfo::initialize_use_points()
{
    analyse_array_index(); // 分析数组下标使用点
    analyse_div0();        // 分析除零模零情况的除数使用点
    analyse_pointer();     //分析指针使用点
}

void FuncInfo::analyse_div0()
{
    AnalyseDiv0 *analyse_div0 = new AnalyseDiv0(fd);
    analyse_div0->TraverseStmt(fd->getBody());
    for (DeclRefExpr *divisor : analyse_div0->divisors)
    {
        int param_i = is_param(fd, divisor);
        if (param_i == -1)
        {
            if (RJ_Checker_Config.IntraCheck &&
                is_legal_usepoint(divisor))
            {
                intra_use_points[divisor->getDecl()].insert(UsePointInfo(divisor, param_i));
            }
        }
        else if (is_legal_usepoint(divisor))
            use_points[param_i].insert(UsePointInfo(divisor, param_i));
    }
}

void FuncInfo ::analyse_array_index()
{
    AnalyseArray *analyse_array = new AnalyseArray(fd);
    analyse_array->TraverseStmt(fd->getBody());
    for (auto idx : analyse_array->array_idxs)
    {
        int param_i = is_param(fd, idx);
        if (param_i == -1)
        {
            if (RJ_Checker_Config.IntraCheck &&
                is_legal_usepoint(idx))
            {
                intra_use_points[idx->getDecl()].insert(UsePointInfo(idx, param_i));
            }
        }
        else if (is_legal_usepoint(idx))
            use_points[param_i].insert(UsePointInfo(idx, param_i));
    }
}

void FuncInfo::analyse_pointer()
{
    AnalysePointer *analyse_pointer = new AnalysePointer(fd);
    analyse_pointer->TraverseStmt(fd->getBody());

    for (DeclRefExpr *pointer : analyse_pointer->pointers)
    {
        int param_i = is_param(fd, pointer);
        if (param_i == -1)
        {
            if (RJ_Checker_Config.IntraCheck &&
                is_legal_usepoint(pointer))
            {
                intra_use_points[pointer->getDecl()].insert(UsePointInfo(pointer, param_i));
            }
        }
        else if (is_legal_usepoint(pointer))
            use_points[param_i].insert(UsePointInfo(pointer, param_i));
    }
}

bool FuncInfo::is_legal_usepoint(DeclRefExpr *dre)
{
    // step1: 判断使用点在函数内是否有对应的条件语句
    auto it = conds_info.find(dre->getDecl());
    if (it == conds_info.end())
    {
        return false;
    }

    // step2: 判断使用点是否在条件语句内，若是，则将该使用点删除
    for (auto cond_info : it->second)
    {
        AnalyseVar *analyse_var = new AnalyseVar();
        analyse_var->TraverseStmt(const_cast<Expr *>(cond_info.sub_cond));
        for (auto var : analyse_var->vars)
        {
            if (dre == var)
                return false;
        }
    }
    return true;
}

int is_param(FunctionDecl *fd, DeclRefExpr *dre)
{
    if (!fd->isDefined())
        return -1;
    auto fd_def = fd->getDefinition();
    for (size_t i = 0; i < fd_def->param_size(); i++)
    {
        if (dre->getDecl() == fd_def->getParamDecl(i))
        {
            return i;
        }
    }
    return -1;
}

int is_param(FunctionDecl *fd, const ValueDecl *vd)
{
    if (!fd->isDefined())
        return -1;
    auto fd_def = fd->getDefinition();
    for (size_t i = 0; i < fd_def->param_size(); i++)
    {
        if (vd == fd_def->getParamDecl(i))
        {
            return i;
        }
    }
    return -1;
}

bool AnalyseMember::VisitMemberExpr(MemberExpr *mbe)
{
    if (visited_members.find(mbe) != visited_members.end())
        return true;
    visited_members.insert(mbe);

    if (mbe->getBase() != nullptr)
    {
        AnalyseMember *analyse_base = new AnalyseMember();
        analyse_base->TraverseStmt(mbe->getBase());
        // 没有member变量了，遍历结构体变量
        if (analyse_base->visited_members.size() == 0)
        {
            AnalyseVar *analyse_dre = new AnalyseVar();
            analyse_dre->TraverseStmt(mbe->getBase());
            if (analyse_dre->vars.size() == 1)
            {
                visited_dres.insert(analyse_dre->vars[0]);
                vector<MemberExpr *> members;
                members.emplace_back(mbe);
                member_vars.insert(pair<DeclRefExpr *, vector<MemberExpr *>>(analyse_dre->vars[0], members));
            }
            else
            {
                if (analyse_dre->vars.size() > 0)
                {
                    visited_dres.insert(analyse_dre->vars[0]);
                    vector<MemberExpr *> members;
                    members.emplace_back(mbe);
                    member_vars.insert(pair<DeclRefExpr *, vector<MemberExpr *>>(analyse_dre->vars[0], members));
                }
            }
        }
        else
        {
            for (auto it = analyse_base->visited_members.begin();
                 it != analyse_base->visited_members.end();
                 it++)
            {
                visited_members.insert(*it);
            }
            for (auto it = analyse_base->visited_dres.begin();
                 it != analyse_base->visited_dres.end();
                 it++)
            {
                visited_dres.insert(*it);
            }
            if (analyse_base->member_vars.size() == 1)
            {
                auto it = analyse_base->member_vars.begin();
                (*it).second.emplace_back(mbe);
                member_vars.insert(*it);
            }
        }
    }

    return true;
}

string get_stmt_string(const Stmt *S)
{
    LangOptions LO;
    LO.CPlusPlus = 1;
    string buffer;
    llvm::raw_string_ostream strout(buffer);
    S->printPretty(strout, nullptr, PrintingPolicy(LO));
    return strout.str();
}

string get_location(const Stmt *S, FunctionDecl *fd)
{
    const SourceManager &SM = fd->getASTContext().getSourceManager();
    SourceLocation SL = S->getBeginLoc();
    return SL.printToString(SM);
}

string get_stmt_info(const Stmt *S, FunctionDecl *fd)
{
    const SourceManager &SM = fd->getASTContext().getSourceManager();
    SourceLocation SL = S->getBeginLoc();

    int line = SM.getPresumedLineNumber(SL);
    string sourcecode = SM.getBufferData(SM.getFileID(SL)).str();
    if (!SL.isFileID())
    {
        SourceLocation SL_1 = SM.getExpansionLoc(SL);
        sourcecode = SM.getBufferData(SM.getFileID(SL_1)).str();
    }
    string p = "\n";
    vector<string> SourceCodeItem;
    split(sourcecode, p, &SourceCodeItem);

    string info_str = SL.printToString(SM) + "\n" + SourceCodeItem[line - 1] + "\n";

    int col;
    // col = SM.getExpansionColumnNumber(SL);
    if (SM.getFileID(SM.getExpansionLoc(SL)) == SM.getFileID(SM.getSpellingLoc(SL)))
        // if (SL == SM.getSpellingLoc(SL))
        col = SM.getSpellingColumnNumber(SL);
    else
        col = SM.getExpansionColumnNumber(SL);

    for (int i = 0; i < col - 1; i++)
        info_str += " ";
    info_str += "^\n";
    return info_str;
}

void tmp_print(const Stmt *S, FunctionDecl *fd)
{
    const SourceManager &SM = fd->getASTContext().getSourceManager();
    SourceLocation SL = S->getBeginLoc();
    // print(SM, SL);
    int line = SM.getPresumedLineNumber(SL);
    string sourcecode = SM.getBufferData(SM.getFileID(SL)).str();
    if (!SL.isFileID())
    {
        SourceLocation SL_1 = SM.getExpansionLoc(SL);
        sourcecode = SM.getBufferData(SM.getFileID(SL_1)).str();
    }
    string p = "\n";
    vector<string> SourceCodeItem;
    split(sourcecode, p, &SourceCodeItem);

    SL.dump(SM);
    // SL.printToString(SM);
    cout << SourceCodeItem[line - 1] << "\n";

    int col;
    // col = SM.getExpansionColumnNumber(SL);
    if (SM.getFileID(SM.getExpansionLoc(SL)) == SM.getFileID(SM.getSpellingLoc(SL)))
        // if (SL == SM.getSpellingLoc(SL))
        col = SM.getSpellingColumnNumber(SL);
    else
        col = SM.getExpansionColumnNumber(SL);

    for (int i = 0; i < col - 1; i++)
        cout << " ";
    cout << "^\n";
}

void split(std::string &s, std::string &delim, std::vector<std::string> *ret)
{
    size_t last = 0;
    size_t index = s.find_first_of(delim, last);
    while (index != string::npos)
    {
        ret->push_back(s.substr(last, index - last));
        last = index + 1;
        index = s.find_first_of(delim, last);
    }
    if (index - last > 0)
    {
        ret->push_back(s.substr(last, index - last));
    }
}