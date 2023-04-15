
#ifndef TAINT_ENV_H
#define TAINT_ENV_H

#include "taint-check/TaintValue.h"
#include "map"
#include "unordered_map"
#include "xml/pugixml.hpp"

#define MAX_LEVEL 10

struct xml_output {
    std::string source;
    std::string sink;
    std::string callee_name;
    std::string callee_loc;

    bool operator<(const xml_output& b) const {
        return ((source + sink + callee_name + callee_loc) < (b.source + b.sink + b.callee_name + b.callee_loc));
    } 
};

namespace taint {

class Environment {
public:
    Environment(ASTFunction *F, bool is_entry = false);
    Environment(const Environment &env);

    ASTFunction *F;
    std::unordered_map<ASTVariable *, TaintValueV> variables;
    std::unordered_map<ASTFieldVariable *, TaintValueV> fieldVariables;
    std::unordered_map<ASTFieldVariable *, TaintValueV> thisFieldVariables;
    std::unordered_map<ASTArrayVariable *, TaintValueV> arrayVariables;
    std::unordered_map<ASTArrayVariable *, TaintValueV> thisArrayVariables;

    //用于确定某个污染值对应的是具体哪个ASTVariable/ASTFieldVariable/ASTArrayVariable
    std::unordered_map<unsigned, taint_info> deviant2variable;
    unsigned deviant;

    //有关过程间污染和全局变量污染的输出
    std::set<xml_output> global_get_tainted;
    std::set<xml_output> taint_report_inter;
    std::set<xml_output> get_tainted_by_global;

    TaintValueV return_value; //用于代表return_value的污染情况
    ASTFieldVariable *this_variable;
    bool isConfigFunc;

    void initAsTaintSourceConfig(std::set<std::vector<int>> taint_source);
    unsigned initAllParamFields(taint_info info, unsigned dev);
    void outputTaintInfo(Config& config);
    void outputAsXML(pugi::xml_document &xmlDoc, int level);
    void dump4debug();
    TaintValueV getCXXThisValue();

    friend Environment operator +(const Environment &env1, const Environment &env2);
    friend bool operator ==(const Environment &env1, const Environment &env2);
    friend bool operator !=(const Environment &env1, const Environment &env2);
    template<typename OStream>
    friend OStream &operator <<(OStream &out, const Environment &env);
    Environment &operator=(const Environment &env) {
        F = env.F;
        variables.clear();
        fieldVariables.clear();
        thisFieldVariables.clear();
        arrayVariables.clear();
        thisArrayVariables.clear();
        deviant2variable.clear();

        for(auto iter : env.variables) {
            variables.emplace(iter.first, TaintValueV::copy(iter.second));
        }
        for(auto iter : env.fieldVariables) {
            fieldVariables.emplace(iter.first, TaintValueV::copy(iter.second));
        }
        for(auto iter : env.thisFieldVariables) {
            if(iter.first->isReturnValue()) continue;
            thisFieldVariables.emplace(iter.first, TaintValueV::copy(iter.second));
        }
        for(auto iter : env.arrayVariables) {
            arrayVariables.emplace(iter.first, TaintValueV::copy(iter.second));
        }
        for(auto iter : env.thisArrayVariables) {
            if(iter.first->isReturnValue()) continue;
            thisArrayVariables.emplace(iter.first, TaintValueV::copy(iter.second));
        }

        deviant2variable = env.deviant2variable;
        global_get_tainted = env.global_get_tainted;
        taint_report_inter = env.taint_report_inter;
        get_tainted_by_global = env.get_tainted_by_global;

        deviant = env.deviant;
        this_variable = env.this_variable;
        isConfigFunc = env.isConfigFunc;
        return_value = TaintValueV::copy(env.return_value);
        return *this;
    }
};


Environment operator +(const Environment &env1, const Environment &env2);
bool operator ==(const Environment &env1, const Environment &env2);
bool operator !=(const Environment &env1, const Environment &env2);

template<typename OStream>
OStream &operator <<(OStream &out, const Environment &env) {
    assert(0 && "unsupport OSAPI");
    return out;
}

//VisitStmt/Expr APIs
TaintValueV visitStmt(Stmt *S, Environment *env);
TaintValueV visitMemberExpr(MemberExpr *ME, Environment *env);
TaintValueV visitArraySubscriptExpr(ArraySubscriptExpr *ASE, Environment *env);
TaintValueV visitCXXConstructExpr(CXXConstructExpr *CXXE, Environment *env);

//污点值更新API
void update_field_sensitive(TaintValueV &lvalue, TaintValueV &rvalue, Environment *env);
void updateHigherLevel(TaintValueV& lvalue, Environment *env);
void updateLowerLevel(TaintValueV &lvalue, TaintValueV &rvalue, Environment *env, int level = 1);
void updateHigherLeveAsDefaultTaint(TaintValueV &lvalue, Environment *env);
void updateLowerLevelDefault(TaintValueV &lvalue, Environment *env, int level = 1);
taint_info addNewField(taint_info info, FieldDecl *fd, Environment *env);
taint_info addNewArrayElement(taint_info info, unsigned index, Environment *env);

//过程间污点传播API
TaintValueV inFunctionConfigList(ASTFunction *function, CallExpr *E, Environment *env, bool &in_function_list);
TaintValueV updateInterTaintValues(std::vector<TaintValueV> param_values, TaintValueV this_value, Environment *caller_env, Environment *callee_env, bool is_member_func, bool isConstructor = false);
void getLowerLevelParamInfo_Inter(taint_info callee_info, taint_info caller_info, std::unordered_map<taint_info, taint_info, hash_taint_info, cmp_taint_info> &res, Environment *caller_env);
void getTempReturnValue(std::unordered_map<taint_info, taint_info, hash_taint_info, cmp_taint_info> &param_map, 
                        std::unordered_map<taint_info, TaintValueV, hash_taint_info, cmp_taint_info> &info2value_caller,
                        taint_info father_info, TaintValueV callee_value, Environment *callee_env, Environment *caller_env);

//Util APIs
bool isPointerOrReference(TaintValueV value);
TaintValueV *getTaintValueV(taint_info info, Environment *env);
std::string getFullName(taint_info info);
std::string getFunctionInfo(FunctionDecl *FD);

};
#endif
