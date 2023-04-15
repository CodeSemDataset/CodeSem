
#ifndef TAINT_VALUE_H
#define TAINT_VALUE_H

#include "framework/ASTElement.h"
#include "framework/CallGraph.h"
#include "clang/AST/AST.h"
#include "clang/Frontend/ASTUnit.h"

#define MAX_TAINT_SIZE 2

enum TaintKind {Tainted, Untainted, Gamma};
enum taint_variable_kind {v, fv, av, null, global_v, global_fv, global_av};
struct taint_info {
    union {
        ASTVariable *v;
        ASTFieldVariable *fv;
        ASTArrayVariable *av;
    }variable;
    taint_variable_kind kind;

    taint_info() { kind = taint_variable_kind::null; }
    taint_info(ASTVariable *V) { kind = taint_variable_kind::v; variable.v = V; }
    taint_info(ASTFieldVariable *FV) { kind = taint_variable_kind::fv; variable.fv = FV; }
    taint_info(ASTArrayVariable *AV) { kind = taint_variable_kind::av; variable.av = AV; }
    bool operator== (const struct taint_info &t) const {
        if(kind != t.kind) return false;
        switch(kind) {
            case taint_variable_kind::v: return variable.v == t.variable.v;
            case taint_variable_kind::fv: return variable.fv == t.variable.fv;
            case taint_variable_kind::av: return variable.av == t.variable.av;
            default: return true;
        }
        return false;
    }
    bool operator!= (const struct taint_info &t) const {
        return !(*this == t);
    }
};

struct hash_taint_info{
    size_t operator() (taint_info a)const{
        size_t res = hash<ASTVariable *>()(a.variable.v);
        return res;
    }
};

struct cmp_taint_info{
    bool operator() (taint_info a, taint_info b)const{
        return (a.kind == b.kind) && (a.variable.v == b.variable.v);
    }
};


namespace taint {

/**
 * taint value.
 */
class TaintValue {

public: 
    TaintValue();
    TaintValue(unsigned deviant);
    TaintValue(unsigned long(&input)[MAX_TAINT_SIZE]);
    TaintValue(TaintKind kind);

    bool isTainted() const;
    TaintKind getTaintKind() const;

    void getValue(unsigned long(&input)[MAX_TAINT_SIZE]) const;
    unsigned long getValue() const;

    void update(unsigned long input[MAX_TAINT_SIZE]);
    void update(unsigned long input);
    void update(const TaintValue &v);
    
    friend TaintValue operator +(const TaintValue &v1, const TaintValue &v2);
    friend bool operator ==(const TaintValue &v1, const TaintValue &v2);
    friend bool operator !=(const TaintValue &v1, const TaintValue &v2);

private:
    unsigned long values[MAX_TAINT_SIZE];

    void clear();
    void setDefaultUntaint();
    void setDefaultTaint();
};

TaintValue operator +(const TaintValue &v1, const TaintValue &v2);
bool operator ==(const TaintValue &v1, const TaintValue &v2);
bool operator !=(const TaintValue &v1, const TaintValue &v2);

class TaintValueV {
public:
    //untaint初始化
    TaintValueV();
    //带info信息untaint初始化
    TaintValueV(taint_info info);
    //taint初始化
    TaintValueV(unsigned deviant);
    //包含ASTVariable/ASTFieldVariable/ASTArrayVariable信息初始化
    TaintValueV(taint_info info, unsigned deviant);
    //拷贝构造
    TaintValueV(TaintValue v);
    //由值构造
    TaintValueV(unsigned long(&input)[MAX_TAINT_SIZE]);

    bool is_tainted() const;
    void getValue(unsigned long(&input)[MAX_TAINT_SIZE]) const;
    void setKind(taint_info info) {
        assert(info.kind == taint_variable_kind::global_v || info.kind == taint_variable_kind::fv || info.kind == taint_variable_kind::av);
        this->info = info;
    }
    static TaintValueV copy(const TaintValueV &v);
    static TaintValueV copy_pointer(const TaintValueV &v);
    void update(const TaintValueV &valuev, bool is_pointer = false);
    void update(const TaintValue &v, bool is_pointer = false);
    void update_default_tainted();
    void update_default_untainted();

    //ToBeDeleted
    unsigned long getValue() const {
        return value->getValue();
    }

    taint_info info;

    friend TaintValueV operator +(const TaintValueV &v1, const TaintValueV &v2);
    friend bool operator ==(const TaintValueV &v1, const TaintValueV &v2);
    friend bool operator !=(const TaintValueV &v1, const TaintValueV &v2);
    
    friend TaintValue combineValues(TaintValueV value, std::vector<TaintValueV> values);

private:
    std::shared_ptr<TaintValue> value;
};

TaintValueV operator +(const TaintValueV &v1, const TaintValueV &v2);
bool operator ==(const TaintValueV &v1, const TaintValueV &v2);
bool operator !=(const TaintValueV &v1, const TaintValueV &v2);

void combineTaint(TaintValueV a, TaintValueV b, unsigned long(&res)[MAX_TAINT_SIZE]);

void combineTaint(unsigned long(&a)[MAX_TAINT_SIZE], unsigned long(&b)[MAX_TAINT_SIZE], unsigned long(&res)[MAX_TAINT_SIZE]);

TaintValue combineValues(TaintValueV value, std::vector<TaintValueV> values);

std::vector<unsigned> getTaintIndex(unsigned long(&value)[MAX_TAINT_SIZE]);

}

#endif
