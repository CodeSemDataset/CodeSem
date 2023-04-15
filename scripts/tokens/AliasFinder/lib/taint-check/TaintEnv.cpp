
#include "framework/Common.h"

#include "taint-check/TaintEnv.h"
#include "taint-check/TaintChecker.h"

namespace taint {

Environment::Environment(ASTFunction *F, bool is_entry) {
    if(is_entry && TaintChecker::taintconfig && TaintChecker::taintconfig->taintSourceConfig.find(F->getName()) != TaintChecker::taintconfig->taintSourceConfig.end()) {
        this->F = F;
        deviant = 0;
        this->isConfigFunc = true;
        std::set<std::vector<int>> taint_source = TaintChecker::taintconfig->taintSourceConfig[F->getName()];
        initAsTaintSourceConfig(taint_source);
    }
    //无配置，是入口Block
    else if(is_entry){
        this->F = F;
        deviant = 0;

        //ASTVariables
        const std::vector<ASTVariable *> &allVariables = F->getVariables();
        int param_size = F->getParamSize();
        for(int i = 0; i < allVariables.size(); ++i) {
            if(i < param_size) {
                allVariables[i]->setParamID(i);
                variables.emplace(allVariables[i], TaintValueV(taint_info(allVariables[i]), ++deviant));
                deviant2variable.emplace(deviant, taint_info(allVariables[i]));
            }
            else {
                variables.emplace(allVariables[i], TaintValueV(allVariables[i]));
            }
        }

        //ASTFieldVariables
        for(auto field : F->getFields()) {
            fieldVariables.emplace(field, TaintValueV(taint_info(field)));
        }

        //ASTArrayVariable
        for(auto array : F->getArrayFields()) {
            arrayVariables.emplace(array, TaintValueV(taint_info(array)));
        }

        //初始化形参对应成员变量污点值
        for(int i = 0; i < param_size; ++i) {
            deviant = initAllParamFields(allVariables[i], deviant);
        }

        if(F->isMemberFunc()) {
            //ASTThisVariables
            for(auto thisField : F->getThisFields()) {
                thisFieldVariables.emplace(thisField, TaintValueV(taint_info(thisField), ++deviant));
                deviant2variable.emplace(deviant, taint_info(thisField));
            }

            //ASTThisArrayVariable
            for(auto thisArray : F->getThisArrayFields()) {
                thisArrayVariables.emplace(thisArray, TaintValueV(taint_info(thisArray), ++deviant));
                deviant2variable.emplace(deviant, taint_info(thisArray));
            }

            //this指针不可能存在ASTArrayVariable作为其child，因为this->arr[1]类型变量必定由arr这一ASTFieldVariable作为其child
            this_variable = new ASTFieldVariable(nullptr);
            this_variable->unsetReturn();
            for(auto iter = thisFieldVariables.begin(); iter != thisFieldVariables.end(); ++iter) {
                if(!iter->first->hasFather()) {
                    this_variable->addRecordChild(iter->first);
                }
            }
        }

        return_value = TaintValueV();

        isConfigFunc = false;
    }
    //无配置，且不是入口Block
    else {
        this->F = F;
        deviant = 0;

        //ASTVariables
        const std::vector<ASTVariable *> &allVariables = F->getVariables();
        int param_size = F->getParamSize();
        for(int i = 0; i < allVariables.size(); ++i) {
            variables.emplace(allVariables[i], TaintValueV(allVariables[i]));
        } 

        //ASTFieldVariables
        for(auto field : F->getFields()) {
            fieldVariables.emplace(field, TaintValueV(taint_info(field)));
        }

        //ASTArrayVariable
        for(auto array : F->getArrayFields()) {
            arrayVariables.emplace(array, TaintValueV(taint_info(array)));
        }        

        if(F->isMemberFunc()) {
            //ASTThisVariables
            for(auto thisField : F->getThisFields()) {
                thisFieldVariables.emplace(thisField, TaintValueV(taint_info(thisField)));
            }

            //ASTThisArrayVariable
            for(auto thisArray : F->getThisArrayFields()) {
                thisArrayVariables.emplace(thisArray, TaintValueV(taint_info(thisArray)));
            }

            //this指针不可能存在ASTArrayVariable作为其child，因为this->arr[1]类型变量必定由arr这一ASTFieldVariable作为其child
            this_variable = new ASTFieldVariable(nullptr);
            this_variable->unsetReturn();
            for(auto iter = thisFieldVariables.begin(); iter != thisFieldVariables.end(); ++iter) {
                if(!iter->first->hasFather()) {
                    this_variable->addRecordChild(iter->first);
                }
            }
        }

        return_value = TaintValueV();

        if(TaintChecker::taintconfig && TaintChecker::taintconfig->taintSourceConfig.find(F->getName()) != TaintChecker::taintconfig->taintSourceConfig.end()) {
            isConfigFunc = true;
        }
    }
}

Environment::Environment(const Environment &env) {
    F = env.F;
    variables = env.variables;
    fieldVariables = env.fieldVariables;
    for(auto iter = env.thisFieldVariables.begin(); iter != env.thisFieldVariables.end(); ++iter) {
        if(iter->first->isReturnValue()) continue;
        thisFieldVariables.emplace(iter->first, iter->second);
    }
    arrayVariables = env.arrayVariables;
    for(auto iter = env.thisArrayVariables.begin(); iter != env.thisArrayVariables.end(); ++iter) {
        if(iter->first->isReturnValue()) continue;
        thisArrayVariables.emplace(iter->first, iter->second);
    }

    deviant2variable = env.deviant2variable;
    deviant = env.deviant;

    global_get_tainted = env.global_get_tainted;
    taint_report_inter = env.taint_report_inter;
    get_tainted_by_global = env.get_tainted_by_global;
    
    this_variable = env.this_variable;
    isConfigFunc = env.isConfigFunc;
    return_value = TaintValueV::copy(env.return_value);
}

void Environment::initAsTaintSourceConfig(std::set<std::vector<int>> taint_source) {
    std::vector<ASTVariable *> allVariables = F->getVariables(); 
    std::vector<taint_info> config_variable_info;
    for(std::vector<int> pos_vec : taint_source) {
        if(pos_vec.size() == 0) continue;
        assert(pos_vec[0] <= F->getParamSize());
        if(pos_vec.size() == 1) config_variable_info.push_back(taint_info(allVariables[pos_vec[0] - 1]));
        taint_info info = TaintChecker::taintmanager->addVariableWithPosVec(allVariables[pos_vec[0] - 1], pos_vec);
        if(info.kind == taint_variable_kind::null) {
            std::cout << "In Function " << F->getName() << " TaintSourceConfig : ";
            for(int i : pos_vec) {
                std::cout << i << " ";
            }
            std::cout << "Invalid" << std::endl;
            assert(0);
        }
        config_variable_info.push_back(info);
    }

    //ASTVariables
    int param_size = F->getParamSize();
    for(int i = 0; i < allVariables.size(); ++i) {
        variables.emplace(allVariables[i], TaintValueV(allVariables[i]));
    }

    //ASTFieldVariables
    for(auto field : F->getFields()) {
        fieldVariables.emplace(field, TaintValueV(field));
    }

    //ASTArrayVariable
    for(auto array : F->getArrayFields()) {
        arrayVariables.emplace(array, TaintValueV(array));
    }

    if(F->isMemberFunc()) {
        //ASTThisVariables
        for(auto thisField : F->getThisFields()) {
            thisFieldVariables.emplace(thisField, TaintValueV(thisField));
        }

        //ASTThisArrayVariable
        for(auto thisArray : F->getThisArrayFields()) {
            thisArrayVariables.emplace(thisArray, TaintValueV(thisArray));
        }

        //this指针不可能存在ASTArrayVariable作为其child，因为this->arr[1]类型变量必定由arr这一ASTFieldVariable作为其child
        this_variable = new ASTFieldVariable(nullptr);
        this_variable->unsetReturn();
        for(auto iter = thisFieldVariables.begin(); iter != thisFieldVariables.end(); ++iter) {
            if(!iter->first->hasFather()) {
                this_variable->addRecordChild(iter->first);
            }
        }
    }

    for(auto configInfo : config_variable_info) {
        //std::cout << getFullName(configInfo) << std::endl;
        switch(configInfo.kind) {
            case taint_variable_kind::v: {
                ASTVariable *V = configInfo.variable.v;
                variables[V] = TaintValueV(taint_info(V), ++deviant);
                deviant2variable.emplace(deviant, taint_info(V));
                deviant = initAllParamFields(taint_info(V), deviant);
                break;
            }
            case taint_variable_kind::fv: {
                ASTFieldVariable *FV = configInfo.variable.fv;
                fieldVariables[FV] = TaintValueV(FV, ++deviant);
                deviant2variable.emplace(deviant, taint_info(FV));
                updateHigherLeveAsDefaultTaint(fieldVariables[FV], this);
                deviant = initAllParamFields(taint_info(FV), deviant);
                break;
            }
            case taint_variable_kind::av: {
                ASTArrayVariable *AV = configInfo.variable.av;
                arrayVariables[AV] = TaintValueV(AV, ++deviant);
                updateHigherLeveAsDefaultTaint(arrayVariables[AV], this);
                deviant2variable.emplace(deviant, taint_info(AV));
                deviant = initAllParamFields(taint_info(AV), deviant);
                break;
            }
            default:
                continue;
        }
    }

    return_value = TaintValueV();
}

unsigned Environment::initAllParamFields(taint_info info, unsigned dev) {
    if(info.kind == taint_variable_kind::v) {
        for(auto field : info.variable.v->getFields()) {
            assert(fieldVariables.find(field) != fieldVariables.end());
            fieldVariables[field] = TaintValueV(taint_info(field), ++dev);
            deviant2variable.emplace(dev, taint_info(field));
            dev = initAllParamFields(taint_info(field), dev);
        }

        for(auto arr : info.variable.v->getArrayChildren()) {
            assert(arrayVariables.find(arr.second) != arrayVariables.end());
            arrayVariables[arr.second] = TaintValueV(taint_info(arr.second), ++dev);
            deviant2variable.emplace(dev, arr.second);
            dev = initAllParamFields(taint_info(arr.second), dev);
        }
    }
    else if(info.kind == taint_variable_kind::fv) {
        for(auto field : info.variable.fv->getRecordChildren()) {
            assert(fieldVariables.find(field) != fieldVariables.end());
            fieldVariables[field] = TaintValueV(taint_info(field), ++dev);
            deviant2variable.emplace(dev, field);
            dev = initAllParamFields(taint_info(field), dev);
        }
        
        for(auto arr : info.variable.fv->getArrayChildren()) {
            assert(arrayVariables.find(arr.second) != arrayVariables.end());
            arrayVariables[arr.second] = TaintValueV(taint_info(arr.second), ++dev);
            deviant2variable.emplace(dev, arr.second);
            dev = initAllParamFields(taint_info(arr.second), dev);
        }
    }
    else if(info.kind == taint_variable_kind::av) {
        for(auto element : info.variable.av->getElementChildren()) {
            assert(arrayVariables.find(element.second) != arrayVariables.end());
            arrayVariables[element.second] = TaintValueV(taint_info(element.second), ++dev);
            deviant2variable.emplace(dev, element.second);
            dev = initAllParamFields(taint_info(element.second), dev);
        }

        for(auto member : info.variable.av->getMemberChildren()) {
            assert(arrayVariables.find(member) != arrayVariables.end());
            arrayVariables[member] = TaintValueV(taint_info(member), ++dev);
            deviant2variable.emplace(dev, member);
            dev = initAllParamFields(taint_info(member), dev);
        }
    }
    else {
        return dev;
    }
    return 0;
}

void Environment::outputTaintInfo(Config &config) {
    std::cout << "----------" << "ASTVariable" << "----------" << std::endl;
    for(auto iter = variables.begin(); iter != variables.end(); ++iter) {
        std::string name = TaintChecker::taintmanager->getFullName(iter->first);
        std::string taint = iter->second.is_tainted() ? "taint" : "untaint";
        std::cout << name << " : " << taint << std::endl;
    }
    
    std::cout << "----------" << "ASTFieldVariable" << "----------" << std::endl;
    for(auto iter = fieldVariables.begin(); iter != fieldVariables.end(); ++iter) {
        std::string name = TaintChecker::taintmanager->getFullName(iter->first);
        std::string taint = iter->second.is_tainted() ? "taint" : "untaint";
        std::cout << name << " : " << taint << std::endl;
    }
    
    std::cout << "----------" << "ASTThisFieldVariable" << "----------" << std::endl;
    for(auto iter = thisFieldVariables.begin(); iter != thisFieldVariables.end(); ++iter) {
        if(iter->first->isReturnValue()) continue;
        std::string name = TaintChecker::taintmanager->getFullName(iter->first);
        std::string taint = iter->second.is_tainted() ? "taint" : "untaint";
        std::cout << name << " : " << taint << std::endl;
    }
    
    std::cout << "----------" << "ASTArrayVariable" << "----------" << std::endl;
    for(auto iter = arrayVariables.begin(); iter != arrayVariables.end(); ++iter) {
        std::string name = TaintChecker::taintmanager->getFullName(iter->first);
        std::string taint = iter->second.is_tainted() ? "taint" : "untaint";
        std::cout << name << " : " << taint << std::endl;
    }
    

    std::cout << "----------" << "ASTThisArrayVariable" << "----------" << std::endl;
    for(auto iter = thisArrayVariables.begin(); iter != thisArrayVariables.end(); ++iter) {
        if(iter->first->isReturnValue()) continue;
        std::string name = TaintChecker::taintmanager->getFullName(iter->first);
        std::string taint = iter->second.is_tainted() ? "taint" : "untaint";
        std::cout << name << " : " << taint << std::endl;
    }
}

void Environment::outputAsXML(pugi::xml_document &xmlDoc, int level) {
    pugi::xml_node function_root = xmlDoc.append_child("Function");
    function_root.append_attribute("name").set_value(F->getFunctionName().c_str());
    function_root.append_attribute("location").set_value(F->getFunctionDecl()->getLocation().printToString(*TaintChecker::astmanager->getSourceManager()).c_str());
    //输出污点环境
    if(level >= 3) {
        pugi::xml_node ASTVariable_xml = function_root.append_child("ASTVariable");
        for(auto iter = variables.begin(); iter != variables.end(); ++iter) {
            pugi::xml_node v = ASTVariable_xml.append_child("V");
            v.append_attribute("name").set_value(TaintChecker::taintmanager->getFullName(iter->first).c_str());
            std::string status;
            if(iter->second.is_tainted()) {
                status = "tainted";
            }
            else {
                status = "untainted";
            }
            v.append_attribute("status").set_value(status.c_str());
        }
        pugi::xml_node ASTFieldVariable_xml = function_root.append_child("ASTFieldVariable");
        for(auto iter = fieldVariables.begin(); iter != fieldVariables.end(); ++iter) {
            pugi::xml_node fv = ASTFieldVariable_xml.append_child("FV");
            fv.append_attribute("name").set_value(TaintChecker::taintmanager->getFullName(iter->first).c_str());
            std::string status;
            if(iter->second.is_tainted()) {
                status = "tainted";
            }
            else {
                status = "untainted";
            }
            fv.append_attribute("status").set_value(status.c_str());
        }
        pugi::xml_node ASTThisFieldVariable_xml = function_root.append_child("ASTThisFieldVariable");
        for(auto iter = thisFieldVariables.begin(); iter != thisFieldVariables.end(); ++iter) {
            pugi::xml_node fv = ASTThisFieldVariable_xml.append_child("TFV");
            fv.append_attribute("name").set_value(TaintChecker::taintmanager->getFullName(iter->first).c_str());
            std::string status;
            if(iter->second.is_tainted()) {
                status = "tainted";
            }
            else {
                status = "untainted";
            }
            fv.append_attribute("status").set_value(status.c_str());
        }
        pugi::xml_node ASTArrayVariable_xml = function_root.append_child("ASTArrayVariable");
        for(auto iter = arrayVariables.begin(); iter != arrayVariables.end(); ++iter) {
            pugi::xml_node av = ASTArrayVariable_xml.append_child("AV");
            av.append_attribute("name").set_value(TaintChecker::taintmanager->getFullName(iter->first).c_str());
            std::string status;
            if(iter->second.is_tainted()) {
                status = "tainted";
            }
            else {
                status = "untainted";
            }
            av.append_attribute("status").set_value(status.c_str());
        }
        pugi::xml_node ASTThisArrayVariable_xml = function_root.append_child("ASTThisArrayVariable");
        for(auto iter = thisArrayVariables.begin(); iter != thisArrayVariables.end(); ++iter) {
            pugi::xml_node av = ASTThisArrayVariable_xml.append_child("TAV");
            av.append_attribute("name").set_value(TaintChecker::taintmanager->getFullName(iter->first).c_str());
            std::string status;
            if(iter->second.is_tainted()) {
                status = "tainted";
            }
            else {
                status = "untainted";
            }
            av.append_attribute("status").set_value(status.c_str());
        }
    }
    //输出全局变量被污染
    if(level >= 1) {
        pugi::xml_node global_tainted = function_root.append_child("Global_Variable_As_Sink");
        for(auto output : global_get_tainted) {
            pugi::xml_node global_child = global_tainted.append_child("Report");
            global_child.append_attribute("source").set_value(output.source.c_str());
            global_child.append_attribute("sink").set_value(output.sink.c_str());
        }

        pugi::xml_node global_taint = function_root.append_child("Global_Variable_As_Source");
        for(auto output : get_tainted_by_global) {
            pugi::xml_node global_child = global_taint.append_child("Report");
            global_child.append_attribute("source").set_value(output.source.c_str());
            global_child.append_attribute("sink").set_value(output.sink.c_str());
        }
    }
    //输出过程间污染
    if(level >= 2) {
        pugi::xml_node inter_taint = function_root.append_child("Inter_Taint_Spread");
        for(auto output : taint_report_inter) {
            pugi::xml_node inter_child = inter_taint.append_child("Report");
            inter_child.append_attribute("source").set_value(output.source.c_str());
            inter_child.append_attribute("sink").set_value(output.sink.c_str());
            inter_child.append_attribute("callee_name").set_value(output.callee_name.c_str());
            inter_child.append_attribute("callee_loc").set_value(output.callee_loc.c_str());
        }
    }
}

void Environment::dump4debug() {
    if(variables.size() != 0) {
        std::cout << "----------" << "ASTVariable" << "----------" << std::endl;
        for(auto iter = variables.begin(); iter != variables.end(); ++iter) {
            std::string name = TaintChecker::taintmanager->getFullName(iter->first);
            std::string taint = iter->second.is_tainted() ? "taint" : "untaint";
            std::cout << name << " : " << taint << std::endl;
        }
    }
    
    if(fieldVariables.size() != 0) {
        std::cout << "----------" << "ASTFieldVariable" << "----------" << std::endl;
        for(auto iter = fieldVariables.begin(); iter != fieldVariables.end(); ++iter) {
            std::string name = TaintChecker::taintmanager->getFullName(iter->first);
            std::string taint = iter->second.is_tainted() ? "taint" : "untaint";
            std::cout << name << " : " << taint << std::endl;
        }
    }
    
    if(thisFieldVariables.size() != 0) {
        std::cout << "----------" << "ASTThisFieldVariable" << "----------" << std::endl;
        for(auto iter = thisFieldVariables.begin(); iter != thisFieldVariables.end(); ++iter) {
            if(iter->first->isReturnValue()) continue;
            std::string name = TaintChecker::taintmanager->getFullName(iter->first);
            std::string taint = iter->second.is_tainted() ? "taint" : "untaint";
            std::cout << name << " : " << taint << std::endl;
        }
    }
    
    if(arrayVariables.size() != 0) {
        std::cout << "----------" << "ASTArrayVariable" << "----------" << std::endl;
        for(auto iter = arrayVariables.begin(); iter != arrayVariables.end(); ++iter) {
            std::string name = TaintChecker::taintmanager->getFullName(iter->first);
            std::string taint = iter->second.is_tainted() ? "taint" : "untaint";
            std::cout << name << " : " << taint << std::endl;
        }
    }
    
    if(thisArrayVariables.size() != 0) {
        std::cout << "----------" << "ASTThisArrayVariable" << "----------" << std::endl;
        for(auto iter = thisArrayVariables.begin(); iter != thisArrayVariables.end(); ++iter) {
            if(iter->first->isReturnValue()) continue;
            std::string name = TaintChecker::taintmanager->getFullName(iter->first);
            std::string taint = iter->second.is_tainted() ? "taint" : "untaint";
            std::cout << name << " : " << taint << std::endl;
        }
    }
}

TaintValueV Environment::getCXXThisValue() {
    assert(F->isMemberFunc());
    TaintValueV temp = TaintValueV();
    for(auto field : this_variable->getRecordChildren()) {
        assert(thisFieldVariables.find(field) != thisFieldVariables.end());
        TaintValueV field_value = thisFieldVariables[field];
        temp = temp + field_value;
    }
    temp.info.kind = taint_variable_kind::fv;
    temp.info.variable.fv = this_variable;
    return temp;
}

Environment operator +(const Environment &env1, const Environment &env2) {
    
    Environment res = env1;
    Environment temp = env2;

    // assert(env1.variables.size() == env2.variables.size());
    // assert(env1.fieldVariables.size() == env2.fieldVariables.size());
    // assert(env1.arrayVariables.size() == env2.arrayVariables.size());
    // assert(env1.thisFieldVariables.size() == env2.thisFieldVariables.size());
    // assert(env1.thisArrayVariables.size() == env2.thisArrayVariables.size());

    for(auto iter : res.variables) {
        ASTVariable *V = iter.first;
        if(temp.variables.find(V) != temp.variables.end()) {
            res.variables[V].update(res.variables[V] + temp.variables[V]);
        }
    }

    for(auto iter : res.fieldVariables) {
        ASTFieldVariable *FV = iter.first;
        if(temp.fieldVariables.find(FV) != temp.fieldVariables.end()) {
            res.fieldVariables[FV].update(res.fieldVariables[FV] + temp.fieldVariables[FV]);
        }
    }

    for(auto iter : res.thisFieldVariables) {
        if(iter.first->isReturnValue()) continue;
        ASTFieldVariable *FV = iter.first;
        if(temp.thisFieldVariables.find(FV) != temp.fieldVariables.end()) {
            res.thisFieldVariables[FV].update(res.thisFieldVariables[FV] + temp.thisFieldVariables[FV]);
        }
    }

    for(auto iter : res.arrayVariables) {
        ASTArrayVariable *AV = iter.first;
        if(temp.arrayVariables.find(AV) != temp.arrayVariables.end()) {
            res.arrayVariables[AV].update(res.arrayVariables[AV] + temp.arrayVariables[AV]);
        }
    }

    for(auto iter : res.thisArrayVariables) {
        if(iter.first->isReturnValue()) continue;
        ASTArrayVariable *AV = iter.first;
        if(temp.thisArrayVariables.find(AV) != temp.thisArrayVariables.end()) {
            res.thisArrayVariables[AV].update(res.thisArrayVariables[AV] + temp.thisArrayVariables[AV]);
        }
    }

    if(env1.deviant2variable.size() == 0) {
        res.deviant2variable = env2.deviant2variable;
    }

    if(env1.deviant == 0) {
        res.deviant = env2.deviant;
    }

    if(env1.this_variable != nullptr) {
        res.this_variable = env1.this_variable;
    }
    else if(env2.this_variable != nullptr) {
        res.this_variable = env2.this_variable;
    }
    else {
        res.this_variable = nullptr;
    }

    for(auto iter = env2.global_get_tainted.begin(); iter != env2.global_get_tainted.end(); ++iter) {
        if(res.global_get_tainted.find(*iter) == res.global_get_tainted.end()) {
            res.global_get_tainted.emplace(*iter);
        }
    }

    for(auto iter = env2.taint_report_inter.begin(); iter != env2.taint_report_inter.end(); ++iter) {
        if(res.taint_report_inter.find(*iter) == res.taint_report_inter.end()) {
            res.taint_report_inter.emplace(*iter);
        }
    }

    for(auto iter = env2.get_tainted_by_global.begin(); iter != env2.get_tainted_by_global.end(); ++iter) {
        if(res.get_tainted_by_global.find(*iter) == res.get_tainted_by_global.end()) {
            res.get_tainted_by_global.emplace(*iter);
        }
    }
    
    res.return_value.update(env1.return_value + env2.return_value);
    return res;
}

bool operator ==(const Environment &env1, const Environment &env2) {
    if(env1.variables.size() != env2.variables.size()) return false;
    if(env1.fieldVariables.size() != env2.fieldVariables.size()) return false;
    if(env1.thisFieldVariables.size() != env2.thisFieldVariables.size()) return false;
    if(env1.arrayVariables.size() != env2.arrayVariables.size()) return false;
    if(env1.thisArrayVariables.size() != env2.thisArrayVariables.size()) return false;
    if(env1.deviant2variable.size() != env2.deviant2variable.size()) return false; 
    if(env1.deviant != env2.deviant) return false;

    for(auto iter = env1.variables.begin(); iter != env1.variables.end(); ++iter) {
        auto iter2 = env2.variables.find(iter->first);
        if(iter2 == env2.variables.end()) return false;
        if(iter->second != iter2->second) return false;
    }

    for(auto iter = env1.fieldVariables.begin(); iter != env1.fieldVariables.end(); ++iter) {
        auto iter2 = env2.fieldVariables.find(iter->first);
        if(iter2 == env2.fieldVariables.end()) return false;
        if(iter->second != iter2->second) return false;
    }

    for(auto iter = env1.thisFieldVariables.begin(); iter != env1.thisFieldVariables.end(); ++iter) {
        if(iter->first->isReturnValue()) continue;
        auto iter2 = env2.thisFieldVariables.find(iter->first);
        if(iter2 == env2.thisFieldVariables.end()) return false;
        if(iter->second != iter2->second) return false;
    }

    for(auto iter = env1.arrayVariables.begin(); iter != env1.arrayVariables.end(); ++iter) {
        auto iter2 = env2.arrayVariables.find(iter->first);
        if(iter2 == env2.arrayVariables.end()) return false;
        if(iter->second != iter2->second) return false;
    }

    for(auto iter = env1.thisArrayVariables.begin(); iter != env1.thisArrayVariables.end(); ++iter) {
        if(iter->first->isReturnValue()) continue;
        auto iter2 = env2.thisArrayVariables.find(iter->first);
        if(iter2 == env2.thisArrayVariables.end()) return false;
        if(iter->second != iter2->second) return false;
    }

    for(auto iter = env1.deviant2variable.begin(); iter != env1.deviant2variable.end(); ++iter) {
        auto iter2 = env2.deviant2variable.find(iter->first);
        if(iter2 == env2.deviant2variable.end()) return false;
        if(iter->second != iter2->second) return false;
    }

    if(env1.return_value != env2.return_value) return false;

    return true;
}

bool operator !=(const Environment &env1, const Environment &env2) {
    return !(env1 == env2);
}

TaintValueV getDefaultCXXConstructorValue(std::vector<TaintValueV> param_values) {
    TaintValueV temp = TaintValueV();
    for(auto value : param_values) {
        temp = temp + value;
    }
    return TaintValueV::copy(temp);
}

TaintValueV visitCXXConstructExpr(CXXConstructExpr *CXXE, Environment *env) {
    std::vector<TaintValueV> param_values;
    for (auto arg : CXXE->arguments()) {
        param_values.push_back(visitStmt(arg, env));
    }
    
    ASTFunction *callee = TaintChecker::call_graph->getFunction(CXXE->getConstructor());
    if(!callee) {
        return getDefaultCXXConstructorValue(param_values);
    }
    if(TaintChecker::function_map.find(callee->getID()) == TaintChecker::function_map.end()) {
        return getDefaultCXXConstructorValue(param_values);
    }

    FunctionEnvironment *callee_func_env = TaintChecker::function_map[callee->getID()];
    if(!callee_func_env->is_visited) {
        return getDefaultCXXConstructorValue(param_values);
    }
    Environment *callee_env = &(callee_func_env->blocks[callee_func_env->exitBlockID]->environment);

    return updateInterTaintValues(param_values, TaintValueV(), env, callee_env, true, true);
}

TaintValueV visitMemberExpr(MemberExpr *ME, Environment *env) {
    FieldDecl *FD = dyn_cast<FieldDecl>(ME->getMemberDecl());
    if(!FD) return TaintValueV();
    
    VarDecl *VD = nullptr;
    std::vector<FieldDecl *> fatherFields;
    std::vector<ArraySubscriptExpr *> fatherArrays;
    bool suc = getFathersChain(ME, VD, fatherFields, fatherArrays, nullptr);
    if(!suc) return TaintValueV();

    if(VD && TaintChecker::astmanager->bimap.getGlobalVariable(VD) != nullptr) {
        //确认属于全局变量
        std::vector<unsigned> fatherIndex_global;
        for(int i = 0; i < fatherArrays.size(); ++i) {
            unsigned current_index = getIndex(fatherArrays[i]);
            if(current_index == UINT_MAX) return TaintValueV();
            fatherIndex_global.push_back(current_index);
        }
        if(fatherArrays.size() == 0) {
            ASTFieldVariable *global_fv = TaintChecker::astmanager->bimap.getGlobalField(fv_info(VD, FD, fatherFields));
            if(!global_fv) {
                global_fv = TaintChecker::astmanager->addGlobalField(VD, FD, fatherFields);
            }
            bool isTaint = TaintChecker::astmanager->resource.isGlobalFieldTaint(global_fv);
            TaintValueV global_value;
            if(isTaint) {
                global_value = TaintValueV(0);   
            }
            else {
                global_value = TaintValueV();
            }
            taint_info info;
            info.kind = taint_variable_kind::global_fv;
            info.variable.fv = global_fv;
            global_value.info = info;
            return global_value;
        }
        else {
            ASTArrayVariable *global_av = TaintChecker::astmanager->bimap.getGlobalArray(av_info(VD, FD, fatherFields, fatherIndex_global));
            if(!global_av) {
                global_av = TaintChecker::astmanager->addGlobalArray(VD, FD, fatherFields, UINT_MAX, fatherIndex_global);
            }
            bool isTaint = TaintChecker::astmanager->resource.isGlobalArrayTaint(global_av);
            TaintValueV global_value;
            if(isTaint) {
                global_value = TaintValueV(0);
            }
            else {
                global_value = TaintValueV();
            }
            taint_info info;
            info.kind = taint_variable_kind::global_av;
            info.variable.av = global_av;
            global_value.info = info;
            return global_value;
        }
        return TaintValueV();
    }

    //ASTFieldVariable/ASTThisFieldVariable
    if(fatherArrays.size() == 0) {
        //ASTFieldVariable
        if(VD) {
            ASTFieldVariable *FV = TaintChecker::taintmanager->getASTFieldVariable(fv_info(VD, FD, fatherFields));
            if(!FV) assert(0 && "ASTFieldVariable unfound in bimap!");
            if(env->fieldVariables.find(FV) == env->fieldVariables.end()) return TaintValueV();
            return env->fieldVariables[FV];
        }
        //ASTThisFieldVariable
        else {
            ASTFieldVariable *FV = TaintChecker::taintmanager->getASTThisFieldVariable(fv_info(VD, FD, fatherFields));
            if(!FV) assert(0 && "ASTThisFieldVariable unfound in bimap!");
            if(env->thisFieldVariables.find(FV) == env->thisFieldVariables.end()) return TaintValueV();
            return env->thisFieldVariables[FV];
        }
    }
    else {
        std::vector<FieldDecl *> allFathers;
        std::vector<unsigned> allIndex;
        int index_pos = 0;
        for(int i = 0; i < fatherFields.size(); ++i) {
            if(fatherFields[i] == nullptr) {
                allIndex.push_back(getIndex(fatherArrays[index_pos]));
                index_pos++;
            }
            else {
                allFathers.push_back(fatherFields[i]);
            }
        }
        //ASTArrayVariable
        if(VD) {
            ASTArrayVariable *AV = TaintChecker::taintmanager->getASTArrayVariable(av_info(VD, FD, allFathers, allIndex));
            if(!AV) assert(0 && "ASTArrayVariable unfound in bimap!");
            if(env->arrayVariables.find(AV) == env->arrayVariables.end()) return TaintValueV();
            return env->arrayVariables[AV];
        }
        else {
            ASTArrayVariable *AV = TaintChecker::taintmanager->getASTThisArrayVariable(av_info(VD, FD, allFathers, allIndex));
            if(!AV) assert(0 && "ASTThisArrayVariable unfound in bimap!");
            if(env->thisArrayVariables.find(AV) == env->thisArrayVariables.end()) return TaintValueV();
            return env->thisArrayVariables[AV];
        }
    }
}

TaintValueV visitArraySubscriptExpr(ArraySubscriptExpr *ASE, Environment *env) {
    int leaf_index = getIndex(ASE);
    if(leaf_index == UINT_MAX) return TaintValueV();
    VarDecl *VD = nullptr;
    std::vector<FieldDecl *> fatherFields;
    std::vector<ArraySubscriptExpr *> fatherArrays;

    bool suc = getFathersChain(nullptr, VD, fatherFields, fatherArrays, ASE);
    if(!suc) return TaintValueV();

    if(VD && TaintChecker::astmanager->bimap.getGlobalVariable(VD) != nullptr) {
        std::vector<unsigned> fatherIndex_global;
        for(int i = 0; i < fatherArrays.size(); ++i) {
            unsigned current_index = getIndex(fatherArrays[i]);
            if(current_index == UINT_MAX) return TaintValueV();
            fatherIndex_global.push_back(current_index);
        }
        fatherIndex_global.push_back(leaf_index);
        ASTArrayVariable *global_av = TaintChecker::astmanager->bimap.getGlobalArray(av_info(VD, nullptr, fatherFields, fatherIndex_global));
        if(!global_av) {
            fatherIndex_global.pop_back();
            global_av = TaintChecker::astmanager->addGlobalArray(VD, nullptr, fatherFields, leaf_index, fatherIndex_global);
        }
        bool isTaint = TaintChecker::astmanager->resource.isGlobalArrayTaint(global_av);
        TaintValueV global_value;
        if(isTaint) {
            global_value = TaintValueV(0);
        }
        else {
            global_value = TaintValueV();
        }
        taint_info info;
        info.kind = taint_variable_kind::global_av;
        info.variable.av = global_av;
        global_value.info = info;
        return global_value;
    }

    std::vector<FieldDecl *> allFathers;
    std::vector<unsigned> allIndex;
    int index_pos = 0;
    for(int i = 0; i < fatherFields.size(); ++i) {
        if(fatherFields[i] == nullptr) {
            unsigned index = getIndex(fatherArrays[index_pos]);
            if(index == UINT_MAX) return TaintValueV();
            allIndex.push_back(getIndex(fatherArrays[index_pos]));
            ++index_pos;
        }
        else {
            allFathers.push_back(fatherFields[i]);
        }
    }
    allIndex.push_back(leaf_index);

    if(VD) {
        ASTArrayVariable *AV = TaintChecker::taintmanager->getASTArrayVariable(av_info(VD, nullptr, allFathers, allIndex));
        if(!AV) return TaintValueV();
        if(env->arrayVariables.find(AV) == env->arrayVariables.end()) return TaintValueV();
        return env->arrayVariables[AV];
    }
    else {
        ASTArrayVariable *AV = TaintChecker::taintmanager->getASTThisArrayVariable(av_info(VD, nullptr, allFathers, allIndex));
        if(!AV) return TaintValueV();
        if(env->thisArrayVariables.find(AV) == env->thisArrayVariables.end()) return TaintValueV();
        return env->thisArrayVariables[AV];
    }
}

TaintValueV visitCallExpr(CallExpr *E, Environment *env) {
    ASTFunction *call_function = TaintChecker::call_graph->getFunction(E->getDirectCallee());
    if (call_function == nullptr) {
        return TaintValueV(TaintKind::Untainted);
    }

    //函数是否在配置项中
    bool in_function_config_list = false;
    TaintValueV config_res = inFunctionConfigList(call_function, E, env, in_function_config_list);
    if(in_function_config_list) {
        return config_res;
    }

    bool isMemberCallee = false;
    TaintValueV this_value = TaintValueV();
    std::vector<TaintValueV> param_values;

    if (CXXMemberCallExpr *CXXCE = dyn_cast<CXXMemberCallExpr>(E)) {
        isMemberCallee = true;
        this_value = visitStmt(CXXCE->getImplicitObjectArgument(), env);
        std::vector<TaintValueV> this_fields;
    }
    
    for (auto arg : E->arguments()) {
        TaintValueV arg_value = visitStmt(arg, env);
        param_values.push_back(arg_value);
    }

    if(TaintChecker::function_map.find(call_function->getID()) == TaintChecker::function_map.end()) {
        return TaintValueV();
    }
    if(!TaintChecker::function_map[call_function->getID()] ->is_visited) {
        return TaintValueV();
    }

    FunctionEnvironment *callee_func_env = TaintChecker::function_map[call_function->getID()];
    Environment *callee_env = &(callee_func_env->blocks[callee_func_env->exitBlockID]->environment);

    return updateInterTaintValues(param_values, this_value, env, callee_env, isMemberCallee);
}

TaintValueV visitStmt(Stmt *S, Environment *env) {
    if (S == nullptr || env == nullptr) {
        return TaintValueV();
    }

    if (S->getStmtClass() == Stmt::IntegerLiteralClass || S->getStmtClass() == Stmt::FloatingLiteralClass) {
        return TaintValueV();
    }
    
    // sizeof 
    if (S->getStmtClass() == Stmt::UnaryExprOrTypeTraitExprClass) {
        return TaintValueV();
    }    

    //reload of =
    if(S->getStmtClass() == Stmt::CXXOperatorCallExprClass){
        CXXOperatorCallExpr *E = dyn_cast<CXXOperatorCallExpr>(S);
        if(E == nullptr) return TaintValueV();
        if(E->isAssignmentOp()) {
            int cnt = 0;
            TaintValueV LValue;
            TaintValueV RValue;
            for(Stmt::child_iterator iter = E->child_begin(); iter != E->child_end(); ++iter) {
                ++cnt;
                if(cnt == 1) continue;
                if(cnt == 2) LValue = visitStmt(*iter, env);
                if(cnt == 3) RValue = visitStmt(*iter, env);
            }
            if(cnt != 3) return TaintValueV();

            update_field_sensitive(LValue, RValue, env);

            return RValue + LValue;
        }    
    }
	
	if(dyn_cast<CXXThisExpr>(S)){
        return env->getCXXThisValue();
	}

    if (ParenExpr *E = dyn_cast<ParenExpr>(S)) {
		return visitStmt(E->getSubExpr(), env);
	}

    if (UnaryOperator *E = dyn_cast<UnaryOperator>(S)) {
        return visitStmt(E->getSubExpr(), env);
    }

    if (CastExpr *E = dyn_cast<CastExpr>(S)) {
        return visitStmt(E->getSubExpr(), env);
    }

    if (MemberExpr *E = dyn_cast<MemberExpr>(S)) {
        return visitMemberExpr(E, env);
    }
	
    if (ArraySubscriptExpr *E = dyn_cast<ArraySubscriptExpr>(S)) {
        return visitArraySubscriptExpr(E, env);
    }

    if (ConditionalOperator *E = dyn_cast<ConditionalOperator>(S)) {
        return visitStmt(E->getTrueExpr(), env) + visitStmt(E->getFalseExpr(), env);
    }
    
    if (CXXNewExpr *E = dyn_cast<CXXNewExpr>(S)) {
        return visitStmt(const_cast<CXXConstructExpr *>(E->getConstructExpr()), env);
    }

    if (CXXConstructExpr *E = dyn_cast<CXXConstructExpr>(S)) {
		return visitCXXConstructExpr(E, env);
    }

    if (WhileStmt *E = dyn_cast<WhileStmt>(S)) {
        return visitStmt(E->getBody(), env);
    }

    if (CallExpr *E = dyn_cast<CallExpr>(S)) {
		return visitCallExpr(E, env);
    }

    if (ReturnStmt *E = dyn_cast<ReturnStmt>(S)) {
        if (E->getRetValue() != nullptr) {
            //采用直接赋值而不是update，便于后续追踪
            env->return_value = visitStmt(E->getRetValue(), env);
        }
        
        return TaintValueV();
    }

    if (DeclRefExpr *DRE = dyn_cast<DeclRefExpr>(S)) {
        VarDecl *VD = dyn_cast<VarDecl>(DRE->getDecl());
        if(!VD) return TaintValueV();

        ASTVariable *V = TaintChecker::taintmanager->getASTVariable(VD);
        if(env->variables.find(V) == env->variables.end()) {
            ASTGlobalVariable *global_V = TaintChecker::astmanager->bimap.getGlobalVariable(VD);
            if(global_V == nullptr) {
                return TaintValueV();
            }
            else {
                VarDecl *VD = global_V->getVarDecl();
                ASTVariable *V = new ASTVariable(VD, global_V->getASTFile());
                if(TaintChecker::manager->resource.isGlobalVariableTaint(global_V)) {
                    TaintValueV global_value = TaintValueV(0);
                    taint_info info;
                    info.kind = taint_variable_kind::global_v;
                    info.variable.v = V;
                    global_value.setKind(info);
                    return global_value;
                }
                else {
                    TaintValueV global_value = TaintValueV();
                    taint_info info;
                    info.kind = taint_variable_kind::global_v;
                    info.variable.v = V;
                    global_value.setKind(info);
                    return global_value;
                }
            }
        }
        return env->variables[V];
    }

    if (DeclStmt *DS = dyn_cast<DeclStmt>(S)) {
        for (Decl *D : DS->decls()) {
            VarDecl *VD = dyn_cast<VarDecl>(D);
            if (!VD || !(VD->hasInit())) continue;
            ASTVariable *V = TaintChecker::taintmanager->getASTVariable(VD);
            if (!V) continue;
            TaintValueV *lvalue = getTaintValueV(taint_info(V), env);
            TaintValueV rvalue = visitStmt(VD->getInit(), env);
            update_field_sensitive(*lvalue, rvalue, env);
        }
        return TaintValueV();
    }

    if (BinaryOperator *E = dyn_cast<BinaryOperator>(S)) {
        TaintValueV RValue = visitStmt(E->getRHS(), env);
        TaintValueV LValue = visitStmt(E->getLHS(), env); 

        if (E->isAssignmentOp()) {
            if (E->isCompoundAssignmentOp()) {
                TaintValueV tmp_value = LValue + RValue;
                update_field_sensitive(LValue, tmp_value, env);
                return LValue;
            }
            if(isPointerOrReference(LValue)) {
                update_field_sensitive(LValue, RValue, env);
                return RValue;
            }
            update_field_sensitive(LValue, RValue, env);
            return LValue;
        }
        return RValue + LValue;
    }

    return TaintValueV();
}

void update_field_sensitive(TaintValueV &lvalue, TaintValueV &rvalue, Environment *env) {
    //首先判断是否与全局变量有关
    if(lvalue.info.kind == taint_variable_kind::global_v) {
        if(rvalue.is_tainted()) {
            VarDecl *VD = lvalue.info.variable.v->getDecl();
            ASTGlobalVariable *global_v = TaintChecker::astmanager->bimap.getGlobalVariable(VD);
            assert(global_v);
            TaintChecker::astmanager->resource.setGlobalVariable(global_v, true);
            xml_output output;
            output.sink = TaintChecker::taintmanager->getGlobalFullName(global_v);
            output.source = getFullName(rvalue.info);
            env->global_get_tainted.emplace(output);
        }
        return;
    }
    if(lvalue.info.kind == taint_variable_kind::global_fv) {
        if(rvalue.is_tainted()) {
            ASTFieldVariable *global_fv = lvalue.info.variable.fv;
            TaintChecker::astmanager->resource.setGlobalField(global_fv, true);
            xml_output output;
            output.sink = TaintChecker::taintmanager->getGlobalFullName(global_fv);
            output.source = getFullName(rvalue.info);
            env->global_get_tainted.emplace(output);
        }
        return;
    }
    if(lvalue.info.kind == taint_variable_kind::global_av) {
        if(rvalue.is_tainted()) {
            ASTArrayVariable *global_av = lvalue.info.variable.av;
            TaintChecker::astmanager->resource.setGlobalArray(global_av, true);
            xml_output output;
            output.sink = TaintChecker::taintmanager->getGlobalFullName(global_av);
            output.source = getFullName(rvalue.info);
            env->global_get_tainted.emplace(output);
        }
        return;
    }

    if(rvalue.info.kind == taint_variable_kind::global_v || rvalue.info.kind == taint_variable_kind::global_fv || rvalue.info.kind == taint_variable_kind::global_av) {
        if(rvalue.is_tainted() && lvalue.info.kind != taint_variable_kind::null) {
            switch(rvalue.info.kind) {
                case taint_variable_kind::global_v: {
                    VarDecl *VD = rvalue.info.variable.v->getDecl();
                    ASTGlobalVariable *global_v = TaintChecker::astmanager->bimap.getGlobalVariable(VD);
                    assert(global_v);
                    xml_output output;
                    output.source = TaintChecker::taintmanager->getGlobalFullName(global_v);
                    output.sink = getFullName(lvalue.info);
                    env->get_tainted_by_global.emplace(output);
                    break;
                }
                case taint_variable_kind::global_fv: {
                    ASTFieldVariable *global_fv = rvalue.info.variable.fv;
                    xml_output output;
                    output.source = TaintChecker::taintmanager->getGlobalFullName(global_fv);
                    output.sink = getFullName(lvalue.info);
                    env->get_tainted_by_global.emplace(output);
                    break;
                }
                case taint_variable_kind::global_av: {
                    ASTArrayVariable *global_av = rvalue.info.variable.av;
                    xml_output output;
                    output.source = TaintChecker::taintmanager->getGlobalFullName(global_av);
                    output.sink = getFullName(lvalue.info);
                    env->get_tainted_by_global.emplace(output);
                    break;
                }
            }
        }
    }

    TaintValueV *lvalue_pt = getTaintValueV(lvalue.info, env);
    TaintValueV *rvalue_pt = getTaintValueV(rvalue.info, env);

    if(lvalue_pt && rvalue_pt) {
        lvalue_pt->update(*rvalue_pt, isPointerOrReference(*lvalue_pt) && isPointerOrReference(*rvalue_pt));
        lvalue = *lvalue_pt;
    }
    //右值为temp
    else if(lvalue_pt && !rvalue_pt) {
        lvalue_pt->update(rvalue, isPointerOrReference(*lvalue_pt) && isPointerOrReference(rvalue));
        lvalue = *lvalue_pt;
        updateLowerLevelDefault(*lvalue_pt, env);
        if(lvalue_pt->is_tainted()) {
            updateHigherLevel(*lvalue_pt, env);
        }
    }
    //左值为temp
    else {
        lvalue.update(rvalue, isPointerOrReference(lvalue) && isPointerOrReference(rvalue));
    }

    if(!lvalue_pt || !rvalue_pt) return;

    //向下更新
    if(lvalue_pt->info.kind != taint_variable_kind::null && rvalue.info.kind != taint_variable_kind::null) {
        updateLowerLevel(*lvalue_pt, rvalue, env);
    }

    //向上更新
    if(lvalue_pt->info.kind == taint_variable_kind::fv || lvalue.info.kind == taint_variable_kind::av) {
        if(lvalue_pt->is_tainted()) {
            updateHigherLevel(*lvalue_pt, env);
        }
    }
}

void updateLowerLevelDefault(TaintValueV &root, Environment *env, int level) {
    if(level > MAX_LEVEL) return;
    switch(root.info.kind) {
        case taint_variable_kind::v: {
            ASTVariable *V = root.info.variable.v;
            for(auto field : V->getFields()) {
                TaintValueV *value = getTaintValueV(taint_info(field), env);
                if(!value) continue;
                value->update(root, false);
                updateLowerLevelDefault(*value, env, level + 1);
            }
            for(auto arr : V->getArrayChildren()) {
                TaintValueV *value = getTaintValueV(taint_info(arr.second), env);
                if(!value) continue;
                value->update(root, false);
                updateLowerLevelDefault(*value, env, level + 1);
            }
            return;
        }
        case taint_variable_kind::fv: {
            ASTFieldVariable *FV = root.info.variable.fv;
            for(auto field : FV->getRecordChildren()) {
                TaintValueV *value = getTaintValueV(taint_info(field), env);
                if(!value) continue;
                value->update(root, false);
                updateLowerLevelDefault(*value, env, level + 1);
            }
            for(auto arr : FV->getArrayChildren()) {
                TaintValueV *value = getTaintValueV(taint_info(arr.second), env);
                if(!value) continue;
                value->update(root, false);
                updateLowerLevelDefault(*value, env, level + 1);
            }
            break;
        }
        case taint_variable_kind::av: {
            ASTArrayVariable *AV = root.info.variable.av;
            for(auto field : AV->getMemberChildren()) {
                TaintValueV *value = getTaintValueV(taint_info(field), env);
                if(!value) continue;
                value->update(root, false);
                updateLowerLevelDefault(*value, env, level + 1);
            }
            for(auto arr : AV->getElementChildren()) {
                TaintValueV *value = getTaintValueV(taint_info(arr.second), env);
                if(!value) continue;
                value->update(root, false);
                updateLowerLevelDefault(*value, env, level + 1);
            }
        }
        default:
            return;
    }
}

void updateHigherLevel(TaintValueV &lvalue, Environment *env) {
    if(!lvalue.is_tainted()) return;

    switch(lvalue.info.kind) {
        case taint_variable_kind::fv: {
            ASTFieldVariable *current = lvalue.info.variable.fv;
            while(current->hasFather()) {
                current = current->getFather();
                if(current->isClassMember()) {
                    if(env->thisFieldVariables.find(current) == env->thisFieldVariables.end()) return;
                    env->thisFieldVariables[current].update(env->thisFieldVariables[current] + lvalue, false);
                }
                else {
                    if(env->fieldVariables.find(current) == env->fieldVariables.end()) return;
                    env->fieldVariables[current].update(env->fieldVariables[current] + lvalue, false); 
                }
            }
            if(!current->isClassMember()) {
                ASTVariable *V = TaintChecker::taintmanager->getASTVariable(current->getVarDecl());
                if(!V) return;
                assert(env->variables.find(V) != env->variables.end());
                env->variables[V].update(env->variables[V] + lvalue, false);
            }
            return;
        }
        case taint_variable_kind::av: {
            ASTArrayVariable *current = lvalue.info.variable.av;
            while(current->hasFather_AAV()) {
                current = current->getFather_AAV();
                if(current->isClassMember()) {
                    if(env->thisArrayVariables.find(current) == env->thisArrayVariables.end()) return;
                    env->thisArrayVariables[current].update(env->thisArrayVariables[current] + lvalue, false);
                }
                else {
                    if(env->arrayVariables.find(current) == env->arrayVariables.end()) return;
                    env->arrayVariables[current].update(env->arrayVariables[current] + lvalue, false);
                }
            } 
            if(current->hasFather_FV()) {
                ASTFieldVariable *fv_leaf = current->getFather_FV();
                if(fv_leaf->isClassMember()) {
                    if(env->thisFieldVariables.find(fv_leaf) == env->thisFieldVariables.end()) return;
                    env->thisFieldVariables[fv_leaf].update(env->thisFieldVariables[fv_leaf] + lvalue, false);
                    updateHigherLevel(env->thisFieldVariables[fv_leaf], env);
                }
                else {
                    if(env->fieldVariables.find(fv_leaf) == env->fieldVariables.end()) return;
                    env->fieldVariables[fv_leaf].update(env->fieldVariables[fv_leaf] + lvalue, false);
                    updateHigherLevel(env->fieldVariables[fv_leaf], env);
                }
            }
            else {
                if(!current->isClassMember()) {
                    ASTVariable *V = TaintChecker::taintmanager->getASTVariable(current->getVarDecl());
                    if(!V) return;
                    assert(env->variables.find(V) != env->variables.end());
                    env->variables[V].update(env->variables[V] + lvalue, false);
                }
            }
            return;
        }
        default:
            return;
    }
}

void updateHigherLeveAsDefaultTaint(TaintValueV &lvalue, Environment *env) {
  if(!lvalue.is_tainted()) return;

    switch(lvalue.info.kind) {
        case taint_variable_kind::fv: {
            ASTFieldVariable *current = lvalue.info.variable.fv;
            while(current->hasFather()) {
                current = current->getFather();
                if(current->isClassMember()) {
                    if(env->thisFieldVariables.find(current) == env->thisFieldVariables.end()) return;
                    env->thisFieldVariables[current].update_default_tainted();
                }
                else {
                    if(env->fieldVariables.find(current) == env->fieldVariables.end()) return;
                    env->fieldVariables[current].update_default_tainted(); 
                }
            }
            if(!current->isClassMember()) {
                ASTVariable *V = TaintChecker::taintmanager->getASTVariable(current->getVarDecl());
                if(!V) return;
                assert(env->variables.find(V) != env->variables.end());
                env->variables[V].update_default_tainted();
            }
            return;
        }
        case taint_variable_kind::av: {
            ASTArrayVariable *current = lvalue.info.variable.av;
            while(current->hasFather_AAV()) {
                current = current->getFather_AAV();
                if(current->isClassMember()) {
                    if(env->thisArrayVariables.find(current) == env->thisArrayVariables.end()) return;
                    env->thisArrayVariables[current].update_default_tainted();
                }
                else {
                    if(env->arrayVariables.find(current) == env->arrayVariables.end()) return;
                    env->arrayVariables[current].update_default_tainted();
                }
            } 
            if(current->hasFather_FV()) {
                ASTFieldVariable *fv_leaf = current->getFather_FV();
                if(fv_leaf->isClassMember()) {
                    if(env->thisFieldVariables.find(fv_leaf) == env->thisFieldVariables.end()) return;
                    env->thisFieldVariables[fv_leaf].update_default_tainted();
                    updateHigherLeveAsDefaultTaint(env->thisFieldVariables[fv_leaf], env);
                }
                else {
                    if(env->fieldVariables.find(fv_leaf) == env->fieldVariables.end()) return;
                    env->fieldVariables[fv_leaf].update_default_tainted();
                    updateHigherLeveAsDefaultTaint(env->fieldVariables[fv_leaf], env);
                }
            }
            else {
                if(!current->isClassMember()) {
                    ASTVariable *V = TaintChecker::taintmanager->getASTVariable(current->getVarDecl());
                    if(!V) return;
                    assert(env->variables.find(V) != env->variables.end());
                    env->variables[V].update_default_tainted();
                }
            }
            return;
        }
        default:
            return;
    }  
}

void updateLowerLevel(TaintValueV &lvalue, TaintValueV &rvalue, Environment *env, int level) {
    if(level > MAX_LEVEL) return;
    //更新Fields
    std::unordered_map<FieldDecl *, taint_info> lvalue_fields = getAllRecordFields(lvalue.info);
    std::unordered_map<FieldDecl *, taint_info> rvalue_fields = getAllRecordFields(rvalue.info);
    //lvalue有rvalue没，补全rvalue相应Field，lvalue直接更新untaint
    //lvalue没rvalue有，lvalue补全相应Field，并做相应更新

    //处理左值没有但右值有
    for(auto iter = rvalue_fields.begin(); iter != rvalue_fields.end(); ++iter) {
        FieldDecl *current_rfield = iter->first;
        TaintValueV *current_rvalue = getTaintValueV(iter->second, env);
        if(!current_rvalue) continue;
        //如果左值存在该field
        if(lvalue_fields.find(current_rfield) != lvalue_fields.end()) {
            TaintValueV *current_lvalue = getTaintValueV(lvalue_fields[current_rfield], env);
            if(current_lvalue) {
                current_lvalue->update(*current_rvalue, isPointerOrReference(*current_lvalue) && isPointerOrReference(*current_rvalue));
                //递归调用更新下一层
                updateLowerLevel(*current_lvalue, *current_rvalue, env, level + 1);
            }
            lvalue_fields.erase(current_rfield);
        }
        //左值不存在该Field
        else {
            taint_info new_field = addNewField(lvalue.info, current_rfield, env);
            //可能存在强制类型转换赋值，不处理该种情况
            if(new_field.kind == taint_variable_kind::null) continue;
            TaintValueV *new_field_value = getTaintValueV(new_field, env);
            if(!new_field_value) continue;
            new_field_value->update(*current_rvalue, isPointerOrReference(*new_field_value) && isPointerOrReference(*current_rvalue));
            updateLowerLevel(*new_field_value, *current_rvalue, env, level + 1);
        }
    }

    //处理左值有但右值没有
    for(auto iter = lvalue_fields.begin(); iter != lvalue_fields.end(); ++iter) {
        taint_info new_field = addNewField(rvalue.info, iter->first, env);
        if(new_field.kind == taint_variable_kind::null) {
            TaintValueV *lvalue_field = getTaintValueV(iter->second, env);
            if(!lvalue_field) continue;
            lvalue_field->update(rvalue, false);
            continue;
        }
        TaintValueV *new_field_value = getTaintValueV(new_field, env);
        if(!new_field_value) continue;
        
        TaintValueV *lvalue_field = getTaintValueV(iter->second, env);
        if(!lvalue_field) continue;
        lvalue_field->update(*new_field_value, isPointerOrReference(*lvalue_field) && isPointerOrReference(*new_field_value));
        updateLowerLevel(*lvalue_field, *new_field_value, env, level + 1);
    }

    //更新Array
    std::unordered_map<unsigned, ASTArrayVariable *> lvalue_arr = getAllArrayFields(lvalue.info);
    std::unordered_map<unsigned, ASTArrayVariable *> rvalue_arr = getAllArrayFields(rvalue.info);

    //左值没有但右值有
    for(auto iter = rvalue_arr.begin(); iter != rvalue_arr.end(); ++iter) {
        unsigned current_rvalue_index = iter->first;
        TaintValueV *current_rvalue = getTaintValueV(taint_info(iter->second), env);
        if(!current_rvalue) continue;
        if(lvalue_arr.find(current_rvalue_index) != lvalue_arr.end()) {
            TaintValueV *current_lvalue = getTaintValueV(taint_info(lvalue_arr[current_rvalue_index]), env);
            if(!current_lvalue) continue;
            current_lvalue->update(*current_rvalue, isPointerOrReference(*current_lvalue) && isPointerOrReference(*current_rvalue));
            updateLowerLevel(*current_lvalue, *current_rvalue, env, level + 1);
            lvalue_arr.erase(current_rvalue_index);
        }
        else {
            taint_info new_lvalue_field = addNewArrayElement(lvalue.info, current_rvalue_index, env);
            if(new_lvalue_field.kind == taint_variable_kind::null) continue;
            TaintValueV *new_lvalue = getTaintValueV(new_lvalue_field, env);
            if(!new_lvalue) continue;
            new_lvalue->update(*current_rvalue, isPointerOrReference(*new_lvalue) && isPointerOrReference(*current_rvalue));
            updateLowerLevel(*new_lvalue, *current_rvalue, env, level + 1);
        }
    }  

    //右值没有但左值有
    for(auto iter = lvalue_arr.begin(); iter != lvalue_arr.end(); ++iter) {
        unsigned current_lvalue_index = iter->first;
        TaintValueV *current_lvalue = getTaintValueV(taint_info(iter->second), env);
        if(!current_lvalue) continue;
        //右值添加相应field
        taint_info new_rvalue_info = addNewArrayElement(rvalue.info, current_lvalue_index, env);
        if(new_rvalue_info.kind == taint_variable_kind::null) {
            current_lvalue->update(rvalue, false);
            continue;
        }

        TaintValueV *new_rvalue = getTaintValueV(new_rvalue_info, env);
        if(!new_rvalue) continue;
        current_lvalue->update(*new_rvalue, isPointerOrReference(*current_lvalue) && isPointerOrReference(*new_rvalue));
        updateLowerLevel(*current_lvalue, *new_rvalue, env, level + 1);
    }
}

bool isPointerOrReference(TaintValueV value) {
    switch(value.info.kind) {
        case taint_variable_kind::v: return value.info.variable.v->isPointerOrReferenceType();
        case taint_variable_kind::fv: {
            if(value.info.variable.fv->isReturnValue()) return false;
            ASTFieldVariable *FV = value.info.variable.fv;
            if(FV->isPointerOrReferenceType()) return true;
            ASTFieldVariable *current = FV;
            while(current->hasFather()) {
                current = current->getFather();
                if(current->isPointerOrReferenceType()) return true;
            }
            if(!FV->isClassMember()) {
                ASTVariable *V = TaintChecker::taintmanager->getASTVariable(FV->getVarDecl());
                if(!V) return false;
                return V->isPointerOrReferenceType();
            }
            return false;
        }
        case taint_variable_kind::av: {
            if(value.info.variable.av->isReturnValue()) return false;
            ASTArrayVariable *AV = value.info.variable.av;
            if(AV->isPointerOrReferenceType()) return true;
            ASTArrayVariable *current = AV;
            while(current->hasFather_AAV()) {
                current = current->getFather_AAV();
                if(current->isPointerOrReferenceType()) return true;
            }
            if(current->hasFather_FV()) {
                ASTFieldVariable *FV = current->getFather_FV();
                return isPointerOrReference(TaintValueV(taint_info(FV)));
            }
            else {
                if(!AV->isClassMember()) {
                    ASTVariable *V = TaintChecker::taintmanager->getASTVariable(AV->getVarDecl());
                    if(!V) return false;
                    return V->isPointerOrReferenceType();
                }
                return false;
            }
        }
        default:
            return false;
    }
}

TaintValueV *getTaintValueV(taint_info info, Environment *env) {
    switch(info.kind) {
        case taint_variable_kind::v: {
            ASTVariable *V = info.variable.v;
            if(env->variables.find(V) == env->variables.end()) return nullptr;
            return &(env->variables[V]);
        }
        case taint_variable_kind::fv: {
            ASTFieldVariable *FV = info.variable.fv;
            if(FV->isClassMember()) {
                if(env->thisFieldVariables.find(FV) == env->thisFieldVariables.end()) return nullptr;
                return &(env->thisFieldVariables[FV]);
            }
            else {
                if(env->fieldVariables.find(FV) == env->fieldVariables.end()) return nullptr;
                return &(env->fieldVariables[FV]);
            }
        }
        case taint_variable_kind::av: {
            ASTArrayVariable *AV = info.variable.av;
            if(AV->isClassMember()) {
                if(env->thisArrayVariables.find(AV) == env->thisArrayVariables.end()) return nullptr;
                return &(env->thisArrayVariables[AV]);
            }
            else {
                if(env->arrayVariables.find(AV) == env->arrayVariables.end()) return nullptr;
                return &(env->arrayVariables[AV]);
            }
        }
        default:
            return nullptr;
    }
}

taint_info addNewField(taint_info info, FieldDecl *fd, Environment *env) {
    switch(info.kind) {
        case taint_variable_kind::v: {
            ASTFieldVariable *new_fv = TaintChecker::taintmanager->addASTFieldVariable(info.variable.v->getDecl(), fd, nullptr);
            if(env->fieldVariables.find(new_fv) == env->fieldVariables.end()) {
                info.variable.v->addField(new_fv);
                env->fieldVariables.emplace(new_fv, TaintValueV(new_fv));
                TaintValueV *root_value = getTaintValueV(taint_info(info.variable.v), env);
                if(root_value) {
                    env->fieldVariables[new_fv].update(*root_value, false);
                }
                return taint_info(new_fv);
            }
            return taint_info(new_fv);
        }
        case taint_variable_kind::fv: {
            TaintValueV *root_value = getTaintValueV(taint_info(info.variable.fv), env);
            std::vector<FieldDecl *> fatherFields = info.variable.fv->getAllFathers();
            for(auto field : fatherFields) {
                if(field == fd) return taint_info();
            }
            ASTFieldVariable *new_fv = TaintChecker::taintmanager->addASTFieldVariable(info.variable.fv->getVarDecl(), fd, info.variable.fv);
            if(info.variable.fv->isClassMember()) {
                if(env->thisFieldVariables.find(new_fv) == env->thisFieldVariables.end()) {
                    env->thisFieldVariables.emplace(new_fv, TaintValueV(new_fv));
                    if(root_value) {
                        env->thisFieldVariables[new_fv].update(*root_value, false);
                    }
                    return taint_info(new_fv);
                }
                return taint_info(new_fv);
            }
            else {
                if(env->fieldVariables.find(new_fv) == env->fieldVariables.end()) {
                    env->fieldVariables.emplace(new_fv, TaintValueV(new_fv));
                    if(root_value) {
                        env->fieldVariables[new_fv].update(*root_value, false);
                    }
                    return taint_info(new_fv);
                }
                return taint_info(new_fv);
            }
        }
        case taint_variable_kind::av: {
            TaintValueV *root_value = getTaintValueV(taint_info(info.variable.av), env);
            ASTArrayVariable *father = info.variable.av;
            std::vector<FieldDecl *> fatherFields = father->getAllFathers();
            for(auto field : fatherFields) {
                if(field == fd) return taint_info();
            }
            ASTArrayVariable *new_av = TaintChecker::taintmanager->addASTArrayVariable(father->getVarDecl(), fd, UINT_MAX, nullptr, father);
            if(father->isClassMember()) {
                if(env->thisArrayVariables.find(new_av) == env->thisArrayVariables.end()) {
                    env->thisArrayVariables.emplace(new_av, TaintValueV(new_av));
                    if(root_value) {
                        env->thisArrayVariables[new_av].update(*root_value, false);
                    }
                    return taint_info(new_av);
                }
                return taint_info(new_av);
            }
            else {
                if(env->arrayVariables.find(new_av) == env->arrayVariables.end()) {
                    env->arrayVariables.emplace(new_av, TaintValueV(new_av));
                    if(root_value) {
                        env->arrayVariables[new_av].update(*root_value, false);
                    }
                    return taint_info(new_av);
                }
                return taint_info(new_av);
            }
        }
        default:
            return taint_info();
    }
}

taint_info addNewArrayElement(taint_info info, unsigned index, Environment *env) {
    switch(info.kind) {
        case taint_variable_kind::v: {
            TaintValueV *root_value = getTaintValueV(info, env);
            ASTVariable *V = info.variable.v;
            ASTArrayVariable *new_av = TaintChecker::taintmanager->addASTArrayVariable(V->getDecl(), nullptr, index, nullptr, nullptr);
            if(env->arrayVariables.find(new_av) == env->arrayVariables.end()) {
                V->addArrayChild(index, new_av);
                env->arrayVariables.emplace(new_av, TaintValueV(new_av));
                if(root_value) {
                    env->arrayVariables[new_av].update(*root_value, false);
                }
                return taint_info(new_av);
            }
            return taint_info();
        }
        case taint_variable_kind::fv: {
            TaintValueV *root_value = getTaintValueV(info, env);
            ASTFieldVariable *FV = info.variable.fv;
            ASTArrayVariable *new_av = TaintChecker::taintmanager->addASTArrayVariable(FV->getVarDecl(), nullptr, index, FV, nullptr);
            if(FV->isClassMember()) {
                if(env->thisArrayVariables.find(new_av) == env->thisArrayVariables.end()) {
                    env->thisArrayVariables.emplace(new_av, TaintValueV(new_av));
                    if(root_value) {
                        env->thisArrayVariables[new_av].update(*root_value, false);
                    }
                    return taint_info(new_av);
                }
                return taint_info();
            }
            else {
                if(env->arrayVariables.find(new_av) == env->arrayVariables.end()) {
                    env->arrayVariables.emplace(new_av, TaintValueV(new_av));
                    if(root_value) {
                        env->arrayVariables[new_av].update(*root_value, false);
                    }
                    return taint_info(new_av);
                }
                return taint_info();
            }
        }
        case taint_variable_kind::av: {
            TaintValueV *root_value = getTaintValueV(info, env);
            ASTArrayVariable *AV = info.variable.av;
            ASTArrayVariable *new_av = TaintChecker::taintmanager->addASTArrayVariable(AV->getVarDecl(), nullptr, index, nullptr, AV);
            if(AV->isClassMember()) {
                if(env->thisArrayVariables.find(new_av) == env->thisArrayVariables.end()) {
                    env->thisArrayVariables.emplace(new_av, TaintValueV(new_av));
                    if(root_value) {
                        env->thisArrayVariables[new_av].update(*root_value, false);
                    }
                    return taint_info(new_av);
                }
                return taint_info();
            }
            else {
                if(env->arrayVariables.find(new_av) == env->arrayVariables.end()) {
                    env->arrayVariables.emplace(new_av, TaintValueV(new_av));
                    if(root_value) {
                        env->arrayVariables[new_av].update(*root_value, false);
                    }
                    return taint_info(new_av);
                }
                return taint_info();
            }
        }
        default:
            return taint_info();
    }
}

std::string getFullName(taint_info info) {
    switch(info.kind) {
        case taint_variable_kind::v: return TaintChecker::taintmanager->getFullName(info.variable.v);
        case taint_variable_kind::fv: return TaintChecker::taintmanager->getFullName(info.variable.fv);
        case taint_variable_kind::av: return TaintChecker::taintmanager->getFullName(info.variable.av);
        default: return "temp";
    }
}

TaintValueV inFunctionConfigList(ASTFunction *called_function, CallExpr *E, Environment *env, bool &in_function_list) {
    in_function_list = false;

    //默认配置函数 memcpy
    if(called_function->getName() == "memcpy") {
        in_function_list = true;
        TaintValueV lvalue;
        TaintValueV rvalue;
        int arg_cnt = 0;
        if(called_function->getParamSize() != 3) return TaintValueV();
        for(auto iter = E->arg_begin(); iter != E->arg_end(); ++iter) {
            ++arg_cnt;
            if(arg_cnt == 1) lvalue = visitStmt(*iter, env);
            if(arg_cnt == 2) rvalue = visitStmt(*iter, env);
            if(arg_cnt > 2) break;
        }
        update_field_sensitive(lvalue, rvalue, env);
        return TaintValueV();
    }

    //默认配置函数 memset
    if(called_function->getName() == "memset") {
        in_function_list = true;
        TaintValueV lvalue;
        TaintValueV rvalue;
        int arg_cnt = 0;
        if(called_function->getParamSize() != 3) return TaintValueV();
        for(auto iter = E->arg_begin(); iter != E->arg_end(); ++iter) {
            ++arg_cnt;
            if(arg_cnt == 1) lvalue = visitStmt(*iter, env);
            if(arg_cnt == 2) rvalue = visitStmt(*iter, env);
            if(arg_cnt > 2) break;
        }
        update_field_sensitive(lvalue, rvalue, env);
        return TaintValueV();
    }

    if(TaintChecker::taintconfig) {
        std::unordered_map<std::string, bool> &blackList = TaintChecker::taintconfig->blackList;
        std::unordered_map<std::string, bool> &whiteList = TaintChecker::taintconfig->whiteList;
        //blackList
        if(TaintChecker::taintconfig->taintCheckerConfig["BlackList"] == "true") {
            if(blackList.find(called_function->getName()) != blackList.end()) {
                in_function_list = true;
                TaintValueV *temp_value = new TaintValueV(0);
                if (CXXMemberCallExpr *CXXCE = dyn_cast<CXXMemberCallExpr>(E)) {
                    TaintValueV this_value = visitStmt(CXXCE->getImplicitObjectArgument(), env);
                    update_field_sensitive(this_value, *temp_value, env);
                }
                
                for (auto arg : E->arguments()) {
                    TaintValueV arg_value = visitStmt(arg, env);
                    update_field_sensitive(arg_value, *temp_value, env);
                }

                bool isReturnValueTaint = blackList[called_function->getName()];
                if(isReturnValueTaint) {
                    return TaintValueV(0);
                }
                else {
                    return TaintValueV();
                }
            }
        }
        

        //whiteList
        if(TaintChecker::taintconfig->taintCheckerConfig["WhiteList"] == "true") {
            if(whiteList.find(called_function->getName()) != whiteList.end()) {
                in_function_list = true;
                TaintValueV *temp_value = new TaintValueV();
                if (CXXMemberCallExpr *CXXCE = dyn_cast<CXXMemberCallExpr>(E)) {
                    TaintValueV this_value = visitStmt(CXXCE->getImplicitObjectArgument(), env);
                    update_field_sensitive(this_value, *temp_value, env);
                }
                
                for (auto arg : E->arguments()) {
                    TaintValueV arg_value = visitStmt(arg, env);
                    update_field_sensitive(arg_value, *temp_value, env);
                }

                bool isReturnValueTaint = whiteList[called_function->getName()];
                if(isReturnValueTaint) {
                    return TaintValueV(0);
                }
                else {
                    return TaintValueV();
                }
            }
        }
    }

    return TaintValueV();
}

bool needToBeUpdate(taint_info info, Environment *env) {
    switch(info.kind) {
        case taint_variable_kind::v: {
            return info.variable.v->isPointerOrReferenceType();
        }
        case taint_variable_kind::fv: {
            if(info.variable.fv->isClassMember()) return true;
            else {
                TaintManager *my_manager = TaintChecker::taint_map[env->F->getID()];
                if(!my_manager) return false;
                ASTVariable *V = my_manager->getASTVariable(info.variable.fv->getVarDecl());
                if(!V) return false;
                return V->isPointerOrReferenceType();
            }
        }
        case taint_variable_kind::av: {
            if(info.variable.av->isClassMember()) return true;
            else {
                TaintManager *my_manager = TaintChecker::taint_map[env->F->getID()];
                if(!my_manager) return false;
                ASTVariable *V = my_manager->getASTVariable(info.variable.av->getVarDecl());
                if(!V) return false;
                return V->isPointerOrReferenceType();
            }
        }
    }
    return false;
}

TaintValueV updateInterTaintValues(std::vector<TaintValueV> param_values, TaintValueV this_value, 
                                   Environment *caller_env, Environment *callee_env, bool is_member_func, bool is_constructor) {
    //存储两边Variable之间的对应关系
    std::unordered_map<taint_info, taint_info, hash_taint_info, cmp_taint_info> param_map;
    //由于Caller方Variable需要根据调用前的值进行更新，因此做copy处理
    std::unordered_map<taint_info, TaintValueV, hash_taint_info, cmp_taint_info> info2value_caller;

    if(param_values.size() != callee_env->F->getParamSize()) {
        return TaintValueV();
    }

    int param_size = callee_env->F->getParamSize();

    //将params一一对应
    for(int i = 0; i < param_size; ++i) {
        ASTVariable *V = callee_env->F->getVariables()[i];
        param_map.emplace(taint_info(V), param_values[i].info);
        getLowerLevelParamInfo_Inter(taint_info(V), param_values[i].info, param_map, caller_env);
    }

    //将ASTThisFieldVariable和ASTThisArrayVariable进行对应
    if(is_member_func && !is_constructor) {
        //将所有this_variable一一对应
        std::unordered_map<FieldDecl *, ASTFieldVariable *> topLevel_thisVariable_callee;
        std::unordered_map<FieldDecl *, taint_info> topLevel_thisVariable_caller;

        for(auto iter = callee_env->thisFieldVariables.begin(); iter != callee_env->thisFieldVariables.end(); ++iter) {
            ASTFieldVariable *field = iter->first;
            if(!field->hasFather() && field->getFieldDecl()) {
                topLevel_thisVariable_callee.emplace(field->getFieldDecl(), field);
            }
        }

        switch(this_value.info.kind) {
            case taint_variable_kind::v: {
                for(auto field : this_value.info.variable.v->getFields()) {
                    topLevel_thisVariable_caller.emplace(field->getFieldDecl(), taint_info(field));
                }
                break;
            }
            case taint_variable_kind::fv: {
                for(auto field : this_value.info.variable.fv->getRecordChildren()) {
                    topLevel_thisVariable_caller.emplace(field->getFieldDecl(), taint_info(field));
                }
                break;
            }
            case taint_variable_kind::av: {
                for(auto field : this_value.info.variable.av->getMemberChildren()) {
                    topLevel_thisVariable_caller.emplace(field->getFieldDecl(), taint_info(field));
                }
                break;
            }
            default: break;
        }

        for(auto iter = topLevel_thisVariable_callee.begin(); iter != topLevel_thisVariable_callee.end(); ++iter) {
            FieldDecl *field = iter->first;
            if(topLevel_thisVariable_caller.find(iter->first) == topLevel_thisVariable_caller.end()) {
                if(this_value.info.kind == taint_variable_kind::v) {
                    ASTFieldVariable *new_fv = TaintChecker::taintmanager->addASTFieldVariable(this_value.info.variable.v->getDecl(), field, nullptr);
                    caller_env->fieldVariables.emplace(new_fv, TaintValueV(new_fv));
                    param_map.emplace(taint_info(iter->second), taint_info(new_fv));
                    getLowerLevelParamInfo_Inter(taint_info(iter->second), taint_info(new_fv), param_map, caller_env);
                }
                else if(this_value.info.kind == taint_variable_kind::fv) {
                    ASTFieldVariable *new_fv = TaintChecker::taintmanager->addASTFieldVariable(this_value.info.variable.fv->getVarDecl(), field, this_value.info.variable.fv);
                    if(this_value.info.variable.fv->isClassMember()) {
                        caller_env->thisFieldVariables.emplace(new_fv, TaintValueV(new_fv));
                    }
                    else {
                        caller_env->fieldVariables.emplace(new_fv, TaintValueV(new_fv));
                    }
                    getLowerLevelParamInfo_Inter(taint_info(iter->second), taint_info(new_fv), param_map, caller_env);
                    param_map.emplace(taint_info(iter->second), taint_info(new_fv));
                }
                else if(this_value.info.kind == taint_variable_kind::av) {
                    ASTArrayVariable *new_av = TaintChecker::taintmanager->addASTArrayVariable(this_value.info.variable.av->getVarDecl(), field, UINT_MAX, nullptr, this_value.info.variable.av);
                    if(this_value.info.variable.av->isClassMember()) {
                        caller_env->thisArrayVariables.emplace(new_av, TaintValueV(new_av));
                    }
                    else {
                        caller_env->arrayVariables.emplace(new_av, TaintValueV(new_av));
                    }
                    getLowerLevelParamInfo_Inter(taint_info(iter->second), taint_info(new_av), param_map, caller_env);
                    param_map.emplace(taint_info(iter->second), taint_info(new_av));
                }
                else {
                    continue;
                }
            }   
            else {
                ASTFieldVariable *callee_fv = iter->second;
                taint_info caller_info = topLevel_thisVariable_caller[iter->first];
                param_map.emplace(taint_info(callee_fv), caller_info);
                getLowerLevelParamInfo_Inter(taint_info(callee_fv), caller_info, param_map, caller_env);
                topLevel_thisVariable_caller.erase(iter->first);
            }
        }

        for(auto iter = topLevel_thisVariable_caller.begin(); iter != topLevel_thisVariable_caller.end(); ++iter) {
            TaintValueV *value = getTaintValueV(iter->second, caller_env);
            if(!value) continue;
            value->update_default_untainted();
        }   

    }

    //构建info2value_caller
    for(auto iter = param_map.begin(); iter != param_map.end(); ++iter) {
        taint_info caller_info = iter->second;
        TaintValueV *caller_value = getTaintValueV(caller_info, caller_env);
        if(!caller_value) continue;
        TaintValueV copy_value = TaintValueV::copy_pointer(*caller_value);
        info2value_caller.emplace(caller_info, copy_value);
    }

    //开始进行分析
    for(auto iter = param_map.begin(); iter != param_map.end(); ++iter) {
        //首先确定是否需要更新，只有指针/引用类的形参和ThisVariable需要进行更新
        if(!needToBeUpdate(iter->first, callee_env)) continue;        

        TaintValueV *callee_value = getTaintValueV(iter->first, callee_env);
        if(!callee_value) continue;
        unsigned long taint_value[MAX_TAINT_SIZE];
        callee_value->getValue(taint_value);

        TaintValueV *temp_value = new TaintValueV();
        bool is_empty = true;
        bool has_multi_taint_index = false;
        
        std::vector<unsigned> deviants = getTaintIndex(taint_value);
        std::vector<taint_info> tainted_sources;
        for(int i = 0; i < deviants.size(); ++i) {
            unsigned current_deviant = deviants[i];
            if(current_deviant == 0) continue;
            assert(callee_env->deviant2variable.find(current_deviant) != callee_env->deviant2variable.end());
            taint_info callee_info = callee_env->deviant2variable[current_deviant];
            assert(param_map.find(callee_info) != param_map.end());
            TaintValueV caller_value = info2value_caller[param_map[callee_info]];

            tainted_sources.push_back(caller_value.info);

            if(is_empty) {
                temp_value->update(caller_value);
                temp_value->info = caller_value.info;
                is_empty = false;
            }
            else {
                temp_value->update(*temp_value + caller_value);
                has_multi_taint_index = true;
            }
        }

        TaintValueV *caller_value = getTaintValueV(iter->second, caller_env);
        if(!caller_value) continue;
        for(taint_info info : tainted_sources) {
            if(getFullName(caller_value->info) == getFullName(info)) continue;
            xml_output output;
            output.source = getFullName(info);
            output.sink = getFullName(caller_value->info);
            output.callee_name = callee_env->F->getFunctionName();
            output.callee_loc = getFunctionInfo(callee_env->F->getFunctionDecl());
            caller_env->taint_report_inter.emplace(output);
        }
        if(has_multi_taint_index) {
            caller_value->update(*temp_value, false);
        }
        else {
            caller_value->update(*temp_value, isPointerOrReference(caller_value->info) && isPointerOrReference(temp_value->info));
        }
    }

    for(auto iter = info2value_caller.begin(); iter != info2value_caller.end(); ++iter) {
        TaintValueV *new_value = getTaintValueV(iter->first, caller_env);
        if(!new_value) continue;
        if(new_value->is_tainted()) {
            updateHigherLevel(*new_value, caller_env);
        }
    }  

    //获取return_value
    TaintValueV return_value_callee = callee_env->return_value;
    unsigned long temp_arr[MAX_TAINT_SIZE];
    return_value_callee.getValue(temp_arr);
    std::vector<unsigned> return_value_taint_index = getTaintIndex(temp_arr);
    TaintValueV temp_return_value_caller = TaintValueV();
    for(auto index : return_value_taint_index) {
        if(index == 0) {
            continue;
        }
        if(callee_env->deviant2variable.find(index) == callee_env->deviant2variable.end()) continue;
        taint_info callee_info = callee_env->deviant2variable[index];
        assert(param_map.find(callee_info) != param_map.end());
        TaintValueV matched_caller_value = info2value_caller[param_map[callee_info]];
        temp_return_value_caller = temp_return_value_caller + matched_caller_value;
    }

    //将Callee函数的Return值视作一个ASTThisVariable值
    ASTFieldVariable *temp_return_variable = new ASTFieldVariable(nullptr);
    temp_return_value_caller.info.kind = taint_variable_kind::fv;
    temp_return_value_caller.info.variable.fv = temp_return_variable;
    caller_env->thisFieldVariables.emplace(temp_return_variable, temp_return_value_caller);
    getTempReturnValue(param_map, info2value_caller, taint_info(temp_return_variable), return_value_callee, callee_env, caller_env);

    return temp_return_value_caller;
}

void getTempReturnValue(std::unordered_map<taint_info, taint_info, hash_taint_info, cmp_taint_info> &param_map, 
                        std::unordered_map<taint_info, TaintValueV, hash_taint_info, cmp_taint_info> &info2value_caller,
                        taint_info father_info, TaintValueV callee_value, Environment *callee_env, Environment *caller_env) 
{
    //Callee returnvalue --> Caller temp_return_value
    //对于最顶层Callee returnvalue, 无论Callee returnvalue类型是v/fv/av，Caller temp return_value都默认创建为ASTThisFieldVariable
    //对于下层Fields，再根据实际情况决定是FieldVariable还是ArrayVariable
    if(callee_value.info.kind == taint_variable_kind::null) return;

    std::set<ASTFieldVariable *> recordChildren;
    std::set<ASTArrayVariable *> recordChildren_av;
    std::unordered_map<unsigned, ASTArrayVariable *> arrayChildren;
    switch(callee_value.info.kind) {
        case taint_variable_kind::v: {
            recordChildren = callee_value.info.variable.v->getFields();
            arrayChildren = callee_value.info.variable.v->getArrayChildren();
            break;
        }
        case taint_variable_kind::fv: {
            recordChildren = callee_value.info.variable.fv->getRecordChildren();
            arrayChildren = callee_value.info.variable.fv->getArrayChildren();
            break;
        }
        case taint_variable_kind::av: {
            recordChildren_av = callee_value.info.variable.av->getMemberChildren();
            arrayChildren = callee_value.info.variable.av->getElementChildren();
        }
    } 

    if(callee_value.info.kind == taint_variable_kind::v || callee_value.info.kind == taint_variable_kind::fv) {
        for(auto field : recordChildren) {
            TaintValueV temp_return_value_caller = TaintValueV();
            assert(field->getFieldDecl());
            TaintValueV *value = getTaintValueV(taint_info(field), callee_env);
            if(!value) continue;
            unsigned long value_arr[MAX_TAINT_SIZE];
            value->getValue(value_arr);
            std::vector<unsigned> deviants = getTaintIndex(value_arr);
            for(auto index : deviants) {
                if(index == 0) continue;
                if(callee_env->deviant2variable.find(index) == callee_env->deviant2variable.end()) continue;
                taint_info callee_info = callee_env->deviant2variable[index];
                assert(param_map.find(callee_info) != param_map.end());
                TaintValueV matched_caller_value = info2value_caller[param_map[callee_info]];
                temp_return_value_caller = temp_return_value_caller + matched_caller_value;
            }

            //根据当前father_info类型创建对应的variable
            assert(father_info.kind == taint_variable_kind::fv);
            ASTFieldVariable *temp_return_variable = new ASTFieldVariable(field->getFieldDecl());
            father_info.variable.fv->addRecordChild(temp_return_variable);
            temp_return_variable->setFather(father_info.variable.fv);
            temp_return_value_caller.info.kind = taint_variable_kind::fv;
            temp_return_value_caller.info.variable.fv = temp_return_variable;
            caller_env->thisFieldVariables.emplace(temp_return_variable, temp_return_value_caller);
            getTempReturnValue(param_map, info2value_caller, taint_info(temp_return_variable), *value, callee_env, caller_env);
        }
    }
    else {
        for(auto field : recordChildren_av) {
            TaintValueV temp_return_value_caller = TaintValueV();
            assert(field->getFieldDecl());
            TaintValueV *value = getTaintValueV(taint_info(field), callee_env);
            if(!value) continue;
            unsigned long value_arr[MAX_TAINT_SIZE];
            value->getValue(value_arr);
            std::vector<unsigned> deviants = getTaintIndex(value_arr);
            for(auto index : deviants) {
                if(index == 0) continue;
                if(callee_env->deviant2variable.find(index) == callee_env->deviant2variable.end()) continue;
                taint_info callee_info = callee_env->deviant2variable[index];
                assert(param_map.find(callee_info) != param_map.end());
                TaintValueV matched_caller_value = info2value_caller[param_map[callee_info]];
                temp_return_value_caller = temp_return_value_caller + matched_caller_value;
            }

            //根据当前father_info类型创建对应的variable
            assert(father_info.kind == taint_variable_kind::fv || father_info.kind == taint_variable_kind::av);
            if(father_info.kind == fv) {
                ASTFieldVariable *temp_return_variable = new ASTFieldVariable(field->getFieldDecl());
                father_info.variable.fv->addRecordChild(temp_return_variable);
                temp_return_variable->setFather(father_info.variable.fv);
                temp_return_value_caller.info.kind = taint_variable_kind::fv;
                temp_return_value_caller.info.variable.fv = temp_return_variable;
                caller_env->thisFieldVariables.emplace(temp_return_variable, temp_return_value_caller);
                getTempReturnValue(param_map, info2value_caller, taint_info(temp_return_variable), *value, callee_env, caller_env);
            }
            else {
                ASTArrayVariable *temp_return_variable = new ASTArrayVariable(field->getFieldDecl());
                father_info.variable.av->addMemberChild(temp_return_variable);
                temp_return_variable->setAAVFather(father_info.variable.av);
                temp_return_variable->setIndex(father_info.variable.av->getIndex());
                temp_return_value_caller.info.kind = taint_variable_kind::av;
                temp_return_value_caller.info.variable.av = temp_return_variable;
                caller_env->thisArrayVariables.emplace(temp_return_variable, temp_return_value_caller);
                getTempReturnValue(param_map, info2value_caller, taint_info(temp_return_variable), *value, callee_env, caller_env);
            }
        }
    }

    for(auto iter = arrayChildren.begin(); iter != arrayChildren.end(); ++iter) {
        ASTArrayVariable *AV = iter->second;
        TaintValueV temp_return_value_caller = TaintValueV();
        TaintValueV *value = getTaintValueV(taint_info(AV), callee_env);
        if(!value) continue;
        unsigned long value_arr[MAX_TAINT_SIZE];
        value->getValue(value_arr);
        std::vector<unsigned> deviants = getTaintIndex(value_arr);
        for(auto index : deviants) {
            if(index == 0) continue;
            if(callee_env->deviant2variable.find(index) == callee_env->deviant2variable.end()) continue;
            taint_info callee_info = callee_env->deviant2variable[index];
            assert(param_map.find(callee_info) != param_map.end());
            TaintValueV matched_caller_value = info2value_caller[param_map[callee_info]];
            temp_return_value_caller = temp_return_value_caller + matched_caller_value;
        }
        assert(father_info.kind == taint_variable_kind::fv || father_info.kind == taint_variable_kind::av);
        ASTArrayVariable *temp_return_variable = new ASTArrayVariable(nullptr);
        temp_return_variable->setElementIndex(iter->first);

        if(father_info.kind == taint_variable_kind::fv) {
            father_info.variable.fv->addArrayChild(iter->first, temp_return_variable);
            temp_return_variable->setFVFather(father_info.variable.fv);
            std::vector<unsigned> index = {iter->first};
            temp_return_variable->setIndex(index);
            temp_return_value_caller.info.kind = taint_variable_kind::av;
            temp_return_value_caller.info.variable.av = temp_return_variable;
            caller_env->thisArrayVariables.emplace(temp_return_variable, temp_return_value_caller);
            getTempReturnValue(param_map, info2value_caller, taint_info(temp_return_variable), *value, callee_env, caller_env);
        }
        else {
            father_info.variable.av->addElementChild(iter->first, temp_return_variable);
            temp_return_variable->setAAVFather(father_info.variable.av);
            std::vector<unsigned> index = father_info.variable.av->getIndex();
            index.push_back(iter->first);
            temp_return_variable->setIndex(index);
            temp_return_value_caller.info.kind = taint_variable_kind::av;
            temp_return_value_caller.info.variable.av = temp_return_variable;
            caller_env->thisArrayVariables.emplace(temp_return_variable, temp_return_value_caller);
            getTempReturnValue(param_map, info2value_caller, taint_info(temp_return_variable), *value, callee_env, caller_env);
        }
    }
}

void getLowerLevelParamInfo_Inter(taint_info callee_info, taint_info caller_info, std::unordered_map<taint_info, taint_info, hash_taint_info, cmp_taint_info> &res, Environment *caller_env) {
    std::unordered_map<FieldDecl *, taint_info> callee_fields = getAllRecordFields(callee_info);
    std::unordered_map<FieldDecl *, taint_info> caller_fields = getAllRecordFields(caller_info);
    
    for(auto iter = callee_fields.begin(); iter != callee_fields.end(); ++iter) {
        if(caller_fields.find(iter->first) == caller_fields.end()) {
            taint_info new_field = addNewField(caller_info, iter->first, caller_env);
            res.emplace(iter->second, new_field);  
            getLowerLevelParamInfo_Inter(iter->second, new_field, res, caller_env); 
        }
        else {
            res.emplace(iter->second, caller_fields[iter->first]);
            getLowerLevelParamInfo_Inter(iter->second, caller_fields[iter->first], res, caller_env);
            caller_fields.erase(iter->first);
        }
    }

    // 对于不在Callee处理范围内的taint_info，将其更新为untaint
    // for(auto iter = caller_fields.begin(); iter != caller_fields.end(); ++iter) {
    //     TaintValueV *value = getTaintValueV(iter->second, caller_env);
    //     if(!value) continue;
    //     value->update_default_untainted();
    // }

    //修正：Callee没处理的taint_info，应该不更新

    std::unordered_map<unsigned, ASTArrayVariable *> callee_arrays = getAllArrayFields(callee_info);
    std::unordered_map<unsigned, ASTArrayVariable *> caller_arrays = getAllArrayFields(caller_info);

    for(auto iter = callee_arrays.begin(); iter != callee_arrays.end(); ++iter) {
        if(caller_arrays.find(iter->first) == caller_arrays.end()) {
            taint_info new_element = addNewArrayElement(caller_info, iter->first, caller_env);
            res.emplace(iter->second, new_element);
            getLowerLevelParamInfo_Inter(taint_info(iter->second), new_element, res, caller_env);
        }
        else {
            res.emplace(iter->second, caller_arrays[iter->first]);
            getLowerLevelParamInfo_Inter(taint_info(iter->second), taint_info(caller_arrays[iter->first]), res, caller_env);
            caller_arrays.erase(iter->first);
        }
    }

    // for(auto iter = caller_arrays.begin(); iter != caller_arrays.end(); ++iter) {
    //     TaintValueV *value = getTaintValueV(iter->second, caller_env);
    //     if(!value) continue;
    //     value->update_default_untainted();
    // }
}

std::string getFunctionInfo(FunctionDecl *FD) {
    std::string location = FD->getLocation().printToString(*TaintChecker::astmanager->getSourceManager());
    return location;
}

}