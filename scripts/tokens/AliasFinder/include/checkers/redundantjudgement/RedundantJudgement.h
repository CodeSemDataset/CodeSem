#ifndef _REDUNDANTJUDGEMENT_H
#define _REDUNDANTJUDGEMENT_H
#include <fstream>
#include <iostream>
#include <list>
#include <queue>
#include <sstream>
#include <stack>
#include <string>
#include <set>
#include <vector>
#include <map>

#include <clang/AST/AST.h>
#include <clang/AST/ASTConsumer.h>
#include <clang/AST/Attr.h>
#include <clang/AST/Expr.h>
#include <clang/AST/RecursiveASTVisitor.h>
// #include <clang/Analysis/CFG.h>
// #include "CFG/CFG.h"
#include <clang/Analysis/CFG.h>

#include <clang/Frontend/ASTConsumers.h>
#include <clang/Frontend/ASTUnit.h>
#include <clang/Frontend/CompilerInstance.h>
#include <clang/Frontend/FrontendActions.h>
#include <clang/Lex/Lexer.h>
#include <clang/Rewrite/Core/Rewriter.h>
#include <clang/Tooling/CommonOptionsParser.h>
#include <clang/Tooling/Tooling.h>
#include <llvm/Support/raw_ostream.h>

#include "CFG/InterProcedureCFG.h"
#include "framework/BasicChecker.h"

#include "clang/AST/Decl.h"

#include "toml.hpp"
#include "xml/pugixml.hpp"

using namespace clang;
using namespace llvm;
using namespace clang::driver;
using namespace clang::tooling;
using namespace std;

// 获取语句信息，包括位置，源码和^
string get_stmt_info(const Stmt *S, FunctionDecl *fd);
// 在终端打印语句信息，包括位置，源码和^。仅用于临时debug。
void tmp_print(const Stmt *S, FunctionDecl *fd);
// 判断变量是否是函数参数，并返回对应参数位置。参数位置从0开始计数，若为-1则表示不是参数
int is_param(FunctionDecl *fd, DeclRefExpr *dre);
int is_param(FunctionDecl *fd, const ValueDecl *vd);

// 打印颜色
static string YELLOW_COLOR = "\033[0;33m";
static string BLUE_COLOR = "\033[0;34m";
static string CLOSE_COLOR = "\033[0m";

// 二元逻辑表达式符号
static set<BinaryOperatorKind>
    bo_logical_opc = {BinaryOperatorKind::BO_LAnd,
                      BinaryOperatorKind::BO_LOr};
// 二元条件表达式符号
static set<BinaryOperatorKind> bo_cond_opc = {BinaryOperatorKind::BO_LT,
                                              BinaryOperatorKind::BO_LE,
                                              BinaryOperatorKind::BO_GT,
                                              BinaryOperatorKind::BO_GE,
                                              BinaryOperatorKind::BO_EQ,
                                              BinaryOperatorKind::BO_NE};
// 一元条件表达式符号
static set<UnaryOperatorKind> unary_cond_opc = {UnaryOperatorKind::UO_LNot};
// 除零/模零语句操作符
static set<BinaryOperatorKind> div0_opc = {BinaryOperatorKind::BO_Div,
                                           BinaryOperatorKind::BO_Rem,
                                           BinaryOperatorKind::BO_DivAssign,
                                           BinaryOperatorKind::BO_RemAssign};
// 赋值操作符
static set<BinaryOperatorKind> binary_assigned = {BinaryOperatorKind::BO_Assign,
                                                  BinaryOperatorKind::BO_MulAssign,
                                                  BinaryOperatorKind::BO_DivAssign,
                                                  BinaryOperatorKind::BO_RemAssign,
                                                  BinaryOperatorKind::BO_AddAssign,
                                                  BinaryOperatorKind::BO_SubAssign,
                                                  BinaryOperatorKind::BO_ShlAssign,
                                                  BinaryOperatorKind::BO_ShrAssign,
                                                  BinaryOperatorKind::BO_AndAssign,
                                                  BinaryOperatorKind::BO_XorAssign,
                                                  BinaryOperatorKind::BO_OrAssign};
// 自增自减操作符
static set<UnaryOperatorKind> unary_assigned = {UnaryOperatorKind::UO_PreDec,
                                                UnaryOperatorKind::UO_PreInc,
                                                UnaryOperatorKind::UO_PostDec,
                                                UnaryOperatorKind::UO_PostInc};
// 常量类型
static set<clang::Stmt::StmtClass> literal_class = {clang::Stmt::StmtClass::IntegerLiteralClass,
                                                    clang::Stmt::StmtClass::StringLiteralClass,
                                                    clang::Stmt::StmtClass::FloatingLiteralClass,
                                                    clang::Stmt::StmtClass::CharacterLiteralClass,
                                                    clang::Stmt::StmtClass::UserDefinedLiteralClass,
                                                    clang::Stmt::StmtClass::ImaginaryLiteralClass,
                                                    clang::Stmt::StmtClass::ObjCArrayLiteralClass,
                                                    clang::Stmt::StmtClass::ObjCStringLiteralClass,
                                                    clang::Stmt::StmtClass::FixedPointLiteralClass,
                                                    clang::Stmt::StmtClass::CXXBoolLiteralExprClass,
                                                    clang::Stmt::StmtClass::CompoundLiteralExprClass,
                                                    clang::Stmt::StmtClass::ObjCDictionaryLiteralClass,
                                                    clang::Stmt::StmtClass::CXXNullPtrLiteralExprClass};

// 冗余保护模块配置项
static struct
{
    bool UsePointCheck = false;
    bool NoUsePointCheck = false;
    bool InterCheck = false;
    bool IntraCheck = false;
    bool SpecificTargetCheck = false;
    string SpecificTargetConfigPath = "";
    bool PrintUsePointsInfo = false;
    size_t CheckDepth = 1;
} RJ_Checker_Config;
// 使用点信息
struct UsePointInfo
{
    UsePointInfo(DeclRefExpr *s, int i)
        : stmt{s}, param_idx{i} {}
    DeclRefExpr *stmt; // 使用点对应的语句
    int param_idx;     // 使用点对应的函数参数位置

    friend bool operator<(const UsePointInfo &lhs, const UsePointInfo &rhs)
    {
        return (lhs.stmt < rhs.stmt);
    }
};
// 条件语句信息
struct CondInfo
{
public:
    CondInfo(Expr *e, const Expr *s, string m_name)
        : cond{e}, sub_cond{s}, member_key{m_name} {}
    Expr *cond;           // 保护语句所在的复合条件表达式（若没有复合条件表达式，则与sub_cond相同）
    const Expr *sub_cond; // 保护语句对应的子条件表达式
    string member_key;    // 变量涉及的成员变量名
};

// 指定检测对象配置项
struct RJ_Specific_Target_Config
{
    // 指定检测对象信息
    struct Specific_Info
    {
        Specific_Info(){};
        string func_fullname;
        vector<string> target_var;
        vector<size_t> target_idx;
    };

    map<string, Specific_Info> specific_infos;
    RJ_Specific_Target_Config() {}
    // 构造函数，读取toml文件中的信息
    RJ_Specific_Target_Config(string specific_target_config_path)
    {
        const toml::parse_result &config = toml::parse_file(specific_target_config_path);
        for (auto table : config)
        {
            string table_name = (string)table.first;
            string func_fullname = (string)config[table_name]["function_fullname"].value_or(""sv);
            if (func_fullname == "")
                break;
            specific_infos[func_fullname].func_fullname = func_fullname;
            for (size_t j = 0;; j++)
            {
                string target_var = (string)config[table_name]["target_var"][j].value_or(""sv);
                if (target_var == "")
                    break;
                specific_infos[func_fullname].target_var.emplace_back(target_var);
            }
            for (size_t j = 0;; j++)
            {
                int target_idx = config[table_name]["target_param_idx"][j].value_or(-1);
                if (target_idx == -1)
                    break;
                specific_infos[func_fullname].target_idx.emplace_back(target_idx);
            }
        }
    }

    // 判断是否为指定函数
    bool is_specific_func(FunctionDecl *fd)
    {
        string func_fullname = common::getFullName(fd);
        if (specific_infos.find(func_fullname) == specific_infos.end())
            return false;

        return true;
    }

    // 判断是否为指定变量
    bool is_specific_var(FunctionDecl *fd, ValueDecl *vd)
    {
        auto specific_it = specific_infos.find(common::getFullName(fd));
        if (specific_it == specific_infos.end())
            return false;
        // target var
        string var_fullname = vd->getType().getAsString() + " " + vd->getNameAsString();
        for (auto var : specific_it->second.target_var)
        {
            if (var_fullname == var)
            {
                return true;
            }
        }
        // target idx
        int param_idx = is_param(fd, vd);
        if (param_idx == -1)
            return false;
        for (auto idx : specific_it->second.target_idx)
        {
            if (param_idx == idx)
                return true;
        }
        return false;
    }

    // 判断是否为指定变量
    bool is_specific_var(FunctionDecl *fd, DeclRefExpr *dre)
    {
        auto specific_it = specific_infos.find(common::getFullName(fd));
        if (specific_it == specific_infos.end())
            return false;
        // target var
        string var_fullname = dre->getType().getAsString() + " " + dre->getNameInfo().getAsString();
        for (auto var : specific_it->second.target_var)
        {
            if (var_fullname == var)
            {
                return true;
            }
        }
        // target idx
        int param_idx = is_param(fd, dre);
        if (param_idx == -1)
            return false;
        for (auto idx : specific_it->second.target_idx)
        {
            if (param_idx == idx)
                return true;
        }
        return false;
    }

    // 判断是否为指定参数
    bool is_specific_param(FunctionDecl *fd, size_t param_idx)
    {
        auto specific_it = specific_infos.find(common::getFullName(fd));
        if (specific_it == specific_infos.end())
            return false;
        // target idx
        for (auto idx : specific_it->second.target_idx)
        {
            if (param_idx == idx)
                return true;
        }
        return false;
    }

    // 将读取的配置项信息打印到终端，仅用于临时debug
    void print()
    {
        cout << "----- print specific information -----\n";
        cout << "total size of specific infos: " << specific_infos.size() << endl;
        for (auto it : specific_infos)
        {
            cout << "function: " << it.second.func_fullname << endl;
            for (size_t j = 0; j < it.second.target_var.size(); j++)
            {
                cout << it.second.target_var[j] << " " << endl;
            }
            for (size_t j = 0; j < it.second.target_idx.size(); j++)
            {
                cout << it.second.target_idx[j] << " " << endl;
            }
        }
        cout << "------------- print end -------------\n";
    }
};
static RJ_Specific_Target_Config RJ_sepcific_target_config;

// 函数信息，包括使用点信息和条件语句信息
struct FuncInfo
{
public:
    // 构造函数,构造一个FuncInfo
    FuncInfo(FunctionDecl *_fd, ASTFunction *_ast) : fd{_fd}, ast{_ast} {}

    // 分析函数中条件语句
    void initialize_ifstmts();
    // 处理条件表达式，将复合条件表达式拆分为与变量关联的单个条件表达式
    void traverse_compound_cond(const Expr *expr, Expr *cond, const Expr *sub_cond);

    // 分析函数使用点
    void initialize_use_points();
    // 分析数组下标使用点 to get array use points
    void analyse_array_index();
    // 分析指针使用点 to get pointer use points
    void analyse_pointer();
    // 分析除零模零情况的除数使用点
    void analyse_div0();
    // 判断是否为合法的使用点
    bool is_legal_usepoint(DeclRefExpr *dre);

    // 将条件语句信息打印到终端，仅用于临时debug
    void conds_dump()
    {
        if (conds_info.size() == 0)
            return;
        string log_info;
        log_info = "----- function " + fd->getNameAsString() + " conds -----\n";
        for (auto it : conds_info)
        {
            log_info += ("var: " + it.first->getNameAsString() + "\n");
            for (auto cond : it.second)
            {
                log_info += (get_stmt_info(cond.sub_cond, fd));
            }
        }
        cout << log_info;
    }

    FunctionDecl *fd;
    ASTFunction *ast;
    map<size_t, set<UsePointInfo>> use_points;                  // 函数内的使用点
    map<const ValueDecl *, set<UsePointInfo>> intra_use_points; // 仅用于过程内检测的使用点
    map<const ValueDecl *, vector<CondInfo>> conds_info;        // 函数内的保护语句
};

// 冗余保护检测结果信息
struct RJ_ErrorInfo
{
public:
    RJ_ErrorInfo() {}
    RJ_ErrorInfo(FunctionDecl *_callee_fd, size_t _param_idx)
    {
        callee_info.callee_fd = _callee_fd;
        callee_info.param_idx = _param_idx;
    }

    // caller信息
    struct CallerInfo
    {
        CallerInfo(FunctionDecl *caller_FD,
                   ValueDecl *_arg,
                   set<const Expr *> Callsites)
            : caller_fd{caller_FD},
              arg{_arg},
              callsites{Callsites} {}

        FunctionDecl *caller_fd;                                     // caller的fd
        ValueDecl *arg;                                              // 使用点变量在caller中对应的实参变量
        set<const Expr *> callsites;                                 // caller中callsites集合
        vector<CondInfo *> caller_conds;                             // caller中条件语句
        map<string, vector<const Stmt *>> caller_conds_with_members; // 以成员变量分类的条件语句
    };

    // callee信息
    struct CalleeInfo
    {
        CalleeInfo(FunctionDecl *_fd, size_t _idx)
            : callee_fd{_fd}, param_idx{_idx} {}
        CalleeInfo() {}
        FunctionDecl *callee_fd;                                     // callee的fd
        size_t param_idx;                                            // 使用点变量在callee中对应的参数
        vector<CondInfo *> callee_conds;                             // callee中条件语句
        map<string, vector<const Stmt *>> callee_conds_with_members; // 以成员变量分类的条件语句
    };

    CalleeInfo callee_info;          // callee的信息
    vector<CallerInfo> callers_info; // callers的信息

    // 增加一个caller信息
    void add_caller(FunctionDecl *caller_fd,
                    ValueDecl *arg,
                    set<const Expr *> callsites)
    {
        CallerInfo caller_info(caller_fd, arg, callsites);
        callers_info.emplace_back(caller_info);
    }

    // 检测并删除成员变量导致的假阳性结果
    bool delete_false_positives()
    {
        //
        if (callers_info.size() == 0)
            return false;

        // 记录在caller中有对应成员变量的callee条件语句中
        set<string> visited_key;

        // 将callee中的条件语句按照成员变量分类
        for (size_t i = 0; i < callee_info.callee_conds.size(); i++)
        {
            callee_info.callee_conds_with_members[callee_info.callee_conds[i]->member_key].emplace_back(callee_info.callee_conds[i]->sub_cond);
        }

        // 将caller中的条件语句按照成员变量分类
        for (int i = callers_info.size() - 1; i >= 0; i--)
        {
            for (size_t j = 0; j < callers_info[i].caller_conds.size(); j++)
            {
                // 如果在callee的条件语句中没有对应的成员变量，直接跳过
                if (callee_info.callee_conds_with_members.find(callers_info[i].caller_conds[j]->member_key) ==
                    callee_info.callee_conds_with_members.end())
                {
                    continue;
                }
                else
                {
                    visited_key.insert(callers_info[i].caller_conds[j]->member_key);
                }
                callers_info[i].caller_conds_with_members[callers_info[i].caller_conds[j]->member_key].emplace_back(callers_info[i].caller_conds[j]->sub_cond);
            }
            // 如果按成员变量分类结果为0，且caller在逆向调用链末尾，删去该caller
            if (callers_info[i].caller_conds_with_members.size() == 0 &&
                i == callers_info.size() - 1)
            {
                callers_info.pop_back();
            }
        }
        // 将在caller的条件语句中没有对应成员变量的callee条件语句删除
        for (auto it = callee_info.callee_conds_with_members.begin();
             it != callee_info.callee_conds_with_members.end();)
        {
            if (visited_key.find(it->first) == visited_key.end())
            {
                callee_info.callee_conds_with_members.erase(it++);
            }
            else
            {
                it++;
            }
        }
        // 判断该条res是否需要整体删除
        bool is_res = false;
        if (callers_info.size() > 0 && callee_info.callee_conds_with_members.size() > 0)
        {
            is_res = true;
        }
        return is_res;
    }
};

// 冗余保护检测类
class RedundantJudgement : public BasicChecker
{
public:
    RedundantJudgement(ASTResource *resource, ASTManager *manager, CallGraph *call_graph, Config *configure)
        : BasicChecker(resource, manager, call_graph, configure){};
    // 冗余保护检测函数
    void check();

private:
    // 初始化冗余保护检测模块的配置项
    void initialize_RJ_checker_configuration();
    // 分析函数ast_func的信息
    bool analyse_func_info(ASTFunction *ast_func);
    // 过程内检查
    void intra_check();
    // 过程间检查
    void inter_check();
    // 过程间检查-检测并在结果中记录逆向调用链
    void check_caller(FunctionDecl *callee_fd,
                      FunctionDecl *caller_fd,
                      size_t param_idx,
                      RJ_ErrorInfo res);
    // 过程间检测-判断条件语句之间是否冗余并记录在结果中
    void check_cond(ValueDecl *vd);

    // 打印使用点信息
    void print_use_points_info();
    // 打印过程间冗余保护结果
    void print_RJ_result();

    map<FunctionDecl *, FuncInfo *> funcs_info;           // 函数信息
    set<FunctionDecl *> callees_under_detection;          // 待检测的函数
    map<ValueDecl *, vector<RJ_ErrorInfo>> RJ_result;     // 基于使用点的过程间检测结果
    map<ValueDecl *, vector<RJ_ErrorInfo>> RJ_result_NUP; // 无使用点的过程间检测结果
};

// 遍历并处理成员变量
class AnalyseMember : public RecursiveASTVisitor<AnalyseMember>
{
public:
    bool VisitMemberExpr(MemberExpr *mbe);

    map<DeclRefExpr *, vector<MemberExpr *>> member_vars;
    set<MemberExpr *> visited_members;
    set<DeclRefExpr *> visited_dres;
};

// 遍历并处理变量
class AnalyseVar : public RecursiveASTVisitor<AnalyseVar>
{
public:
    bool VisitDeclRefExpr(DeclRefExpr *dre)
    {
        vars.emplace_back(dre);
        return true;
    }
    vector<DeclRefExpr *> vars;
};

// 遍历并处理指定变量的被赋值位置，包括自增自减
class AnalyseValueChange : public RecursiveASTVisitor<AnalyseValueChange>
{
public:
    bool VisitBinaryOperator(BinaryOperator *bo)
    {
        if (binary_assigned.find(bo->getOpcode()) != binary_assigned.end())
        {
            AnalyseVar *analyse_var = new AnalyseVar();
            analyse_var->TraverseStmt(bo->getLHS());
            if (analyse_var->vars.size() == 1)
            {
                DeclRefExpr *var = analyse_var->vars[0];
                if (var->getDecl() == vd)
                {
                    vars.emplace_back(var);
                }
            }
        }
        return true;
    }
    bool VisitUnaryOperator(UnaryOperator *uo)
    {
        if (unary_assigned.find(uo->getOpcode()) != unary_assigned.end())
        {
            AnalyseVar *analyse_var = new AnalyseVar();
            analyse_var->TraverseStmt(uo);
            if (analyse_var->vars.size() == 1)
            {
                DeclRefExpr *var = analyse_var->vars[0];
                if (var->getDecl() == vd)
                {
                    vars.emplace_back(var);
                }
            }
        }
        return true;
    }
    vector<DeclRefExpr *> vars;
    AnalyseValueChange(const ValueDecl *_var) : vd{_var} {}
    AnalyseValueChange(const DeclRefExpr *_dre) : dre{_dre} { vd = _dre->getDecl(); }
    const ValueDecl *vd;
    const DeclRefExpr *dre;
};

// 遍历并处理return语句
class AnalyseRetStmt : public RecursiveASTVisitor<AnalyseRetStmt>
{
public:
    bool VisitBinaryOperator(BinaryOperator *bo)
    {
        if (bo_logical_opc.find(bo->getOpcode()) != bo_logical_opc.end())
        {
            conds.emplace_back(bo);
            return false;
        }
        else if (bo_cond_opc.find(bo->getOpcode()) != bo_cond_opc.end())
        {
            conds.emplace_back(bo);
        }
        return true;
    }
    vector<Expr *> conds;
};

// 遍历并处理三元表达式
class AnalyseConditionalOperator : public RecursiveASTVisitor<AnalyseConditionalOperator>
{
public:
    bool VisitConditionalOperator(ConditionalOperator *condop)
    {
        // 去除可能的外层括号
        const Stmt *cond_LHS = condop->getLHS(), *cond_RHS = condop->getRHS();
        while (cond_LHS->getStmtClass() == clang::Stmt::StmtClass::ParenExprClass)
        {
            cond_LHS = (*cond_LHS->child_begin());
        }
        while (cond_RHS->getStmtClass() == clang::Stmt::StmtClass::ParenExprClass)
        {
            cond_RHS = (*cond_RHS->child_begin());
        }
        // 判断三元表达式中是否包含常量
        if ((cond_LHS != nullptr && literal_class.find(cond_LHS->getStmtClass()) != literal_class.end()) ||
            (cond_RHS != nullptr && literal_class.find(cond_RHS->getStmtClass()) != literal_class.end()))
            condop_cond = condop->getCond();
        else
            condop_cond = nullptr;
        return true;
    }
    Expr *condop_cond;
};

// 遍历并处理条件语句
class AnalyseCond : public RecursiveASTVisitor<AnalyseCond>
{
public:
    bool VisitIfStmt(IfStmt *ifstmt)
    {
        conds.emplace_back(ifstmt->getCond());
        return true;
    }
    // bool VisitForStmt(ForStmt *forstmt)
    // {
    //     conds.emplace_back(forstmt->getCond());
    //     return true;
    // }
    // bool VisitWhileStmt(WhileStmt *whilestmt)
    // {
    //     conds.emplace_back(whilestmt->getCond());
    //     return true;
    // }
    // bool VisitDoStmt(DoStmt *dostmt)
    // {
    //     conds.emplace_back(dostmt->getCond());
    //     return true;
    // }
    bool VisitReturnStmt(ReturnStmt *retstmt)
    {
        AnalyseRetStmt *analyseret = new AnalyseRetStmt();
        analyseret->TraverseStmt(retstmt);
        for (auto cond : analyseret->conds)
        {
            conds.emplace_back(cond);
        }
        return true;
    }
    // 处理三元表达式 ( ) ? : 声明变量的情况
    bool VisitVarDecl(VarDecl *vardecl)
    {
        AnalyseConditionalOperator *analysecondop = new AnalyseConditionalOperator();
        analysecondop->TraverseStmt(vardecl->getInit());
        if (analysecondop->condop_cond != nullptr)
        {
            condops_decl.emplace_back(pair<VarDecl *, Expr *>(vardecl, analysecondop->condop_cond));
        }
        return true;
    }
    // 处理三元表达式 ( ) ? : 赋值变量的情况
    bool VisitBinaryOperator(BinaryOperator *bo)
    {
        if (bo->getOpcode() == BinaryOperatorKind::BO_Assign)
        {
            // 处理右值，获取三元表达式
            AnalyseConditionalOperator *analysecondop = new AnalyseConditionalOperator();
            analysecondop->TraverseStmt(bo->getRHS());
            // 处理左值，获取变量
            if (analysecondop->condop_cond != nullptr)
            {
                vector<string> _members;
                AnalyseVar *analyse_var = new AnalyseVar();
                analyse_var->TraverseStmt(bo->getLHS());
                if (analyse_var->vars.size() == 1)
                {
                    DeclRefExpr *_dre = analyse_var->vars[0];
                    AnalyseMember *analyse_member = new AnalyseMember();
                    analyse_member->TraverseStmt(bo->getLHS());
                    if (analyse_member->member_vars.find(const_cast<DeclRefExpr *>(analyse_var->vars[0])) != analyse_member->member_vars.end())
                    {
                        auto members = analyse_member->member_vars.find(const_cast<DeclRefExpr *>(analyse_var->vars[0]))->second;
                        for (auto it : members)
                        {
                            _members.emplace_back(it->getMemberNameInfo().getAsString());
                        }
                    }
                    condops_assign.emplace_back(CondopAssign(_dre, _members, analysecondop->condop_cond));
                }
            }
        }
        return true;
    }
    struct CondopAssign
    {
        CondopAssign(DeclRefExpr *_dre, vector<string> _members, Expr *_cond)
            : var_dre{_dre}, members{_members}, cond{_cond} {}
        DeclRefExpr *var_dre;
        vector<string> members;
        Expr *cond;
    };
    vector<Expr *> conds;
    vector<pair<VarDecl *, Expr *>> condops_decl;
    vector<CondopAssign> condops_assign;
};

// 遍历并处理除零使用点
class AnalyseDiv0 : public RecursiveASTVisitor<AnalyseDiv0>
{
public:
    bool VisitBinaryOperator(BinaryOperator *bo)
    {
        if (div0_opc.find(bo->getOpcode()) != div0_opc.end())
        {
            AnalyseVar *analyse_var = new AnalyseVar();
            analyse_var->TraverseStmt(bo->getRHS());
            // 只对除数涉及单个变量的情况分析
            if (analyse_var->vars.size() == 1)
            {
                DeclRefExpr *dre = analyse_var->vars[0];
                if (!RJ_Checker_Config.SpecificTargetCheck ||
                    RJ_sepcific_target_config.is_specific_var(fd, dre))
                {
                    divisors.emplace_back(dre);
                }
            }
        }
        return true;
    }
    AnalyseDiv0(FunctionDecl *_fd) : fd{_fd} {}

    vector<DeclRefExpr *> divisors;
    FunctionDecl *fd;
};

// 遍历并处理指针使用点
class AnalysePointer : public RecursiveASTVisitor<AnalysePointer>
{
public:
    bool VisitDeclRefExpr(DeclRefExpr *dre)
    {
        if (dre->getType().getTypePtrOrNull()->isPointerType())
        {
            if (!RJ_Checker_Config.SpecificTargetCheck ||
                RJ_sepcific_target_config.is_specific_var(fd, dre))
                pointers.emplace_back(dre);
        }
        return true;
    }
    AnalysePointer(FunctionDecl *_fd) : fd{_fd} {}

    vector<DeclRefExpr *> pointers;
    FunctionDecl *fd;
};

// 遍历并处理数组下标使用点
class AnalyseArray : public RecursiveASTVisitor<AnalyseArray>
{
public:
    bool VisitArraySubscriptExpr(ArraySubscriptExpr *ase)
    {
        AnalyseVar *analyse_base = new AnalyseVar();
        DeclRefExpr *base_dre = nullptr, *idx_dre = nullptr;
        // base
        analyse_base->TraverseStmt(ase->getBase());
        if (analyse_base->vars.size() > 0)
            base_dre = analyse_base->vars[0];
        // idx
        AnalyseVar *analyse_idx = new AnalyseVar();
        analyse_idx->TraverseStmt(ase->getIdx());
        if (analyse_idx->vars.size() == 1)
        {
            idx_dre = analyse_idx->vars[0];
        }
        // 只对数组下标涉及单个变量的情况分析
        if (base_dre != nullptr && idx_dre != nullptr)
        {
            if (!RJ_Checker_Config.SpecificTargetCheck ||
                RJ_sepcific_target_config.is_specific_var(fd, base_dre) ||
                RJ_sepcific_target_config.is_specific_var(fd, idx_dre))
            {
                array_idxs.emplace_back(idx_dre);
            }
        }
        return true;
    }
    AnalyseArray(FunctionDecl *_fd) : fd{_fd} {}

    vector<DeclRefExpr *> array_idxs;
    FunctionDecl *fd;
};

// 遍历并处理callsite语句
class AnalyseCallExpr : public RecursiveASTVisitor<AnalyseCallExpr>
{
public:
    bool VisitCallExpr(CallExpr *call_expr)
    {
        int64_t id = call_expr->getID(fd->getASTContext());
        if (callsite_ids.find(id) != callsite_ids.end())
        {
            ValueDecl *arg;
            Expr *arg_expr = const_cast<Expr *>(call_expr->getArg(param_idx));
            AnalyseVar *analyse_var = new AnalyseVar();
            analyse_var->TraverseStmt(arg_expr);
            // ask args size to be 1 and only 1
            if (analyse_var->vars.size() > 0)
            {
                arg = analyse_var->vars[0]->getDecl();
                // 将callsite插入args_callsites中对应的位置
                args_callsites[arg].insert(call_expr);
            }
        }
        return true;
    }

    AnalyseCallExpr(FunctionDecl *_fd, set<int64_t> _callsite_ids, size_t _param_idx)
        : fd{_fd}, callsite_ids{_callsite_ids}, param_idx{_param_idx} {}

    map<ValueDecl *, set<const Expr *>> args_callsites;

private:
    set<int64_t> callsite_ids;
    size_t param_idx;
    FunctionDecl *fd;
};
#endif