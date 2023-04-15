
#include "taint-check/TaintValue.h"

namespace taint {

// TaintValue

TaintValue::TaintValue() {
    for(int i = 0; i < MAX_TAINT_SIZE; ++i) {
        values[i] = 0;
    }
}

TaintValue::TaintValue(unsigned deviant) {
    unsigned index = deviant / (8 * sizeof(unsigned long));
    if(index >= MAX_TAINT_SIZE) {
        //越界，设定为默认污染值
        clear();
        values[0] = 1;
        return;
    }
    deviant %= (8 * sizeof(unsigned long));
    clear();
    values[index] = 1 << deviant;
}

TaintValue::TaintValue(unsigned long(&input)[MAX_TAINT_SIZE]) {
    for(int i = 0; i < MAX_TAINT_SIZE; ++i) {
        values[i] = input[i];
    }
}

TaintValue::TaintValue(TaintKind kind) {
    if (kind == TaintKind::Untainted) setDefaultUntaint();
    else setDefaultTaint();
}

bool TaintValue::isTainted() const {
    for(int i = 0; i < MAX_TAINT_SIZE; ++i) {
            if(values[i] != 0) 
                return true;
        }
    return false;
}

TaintKind TaintValue::getTaintKind() const {
    if (!isTainted()) return TaintKind::Untainted;
    return TaintKind::Tainted;
}

void TaintValue::getValue(unsigned long(&input)[MAX_TAINT_SIZE]) const{
    for(int i = 0; i < MAX_TAINT_SIZE; ++i) {
        input[i] = values[i];
    }
}

unsigned long TaintValue::getValue() const{
    return values[0];
}

void TaintValue::update(unsigned long input[MAX_TAINT_SIZE]) {
    clear();
    for(int i = 0; i < MAX_TAINT_SIZE; ++i) {
        values[i] = input[i];
    }
}

void TaintValue::update(unsigned long input) {
    clear();
    values[0] = input;
}

void TaintValue::update(const TaintValue &v) {
    this->clear();
    unsigned long new_value[MAX_TAINT_SIZE] = {};
    v.getValue(new_value);
    for(int i = 0; i < MAX_TAINT_SIZE; ++i) {
        values[i] = new_value[i];
    }
}

void TaintValue::clear() {
    for(int i = 0; i < MAX_TAINT_SIZE; ++i) {
        values[i] = 0;
    }
}

void TaintValue::setDefaultTaint() {
    clear();
    values[0] = 1;
}

void TaintValue::setDefaultUntaint() {
    clear();
}

TaintValue operator +(const TaintValue &v1, const TaintValue &v2) {
    unsigned long value_1[MAX_TAINT_SIZE];
    unsigned long value_2[MAX_TAINT_SIZE];
    v1.getValue(value_1);
    v2.getValue(value_2);
    for(int i = 0; i < MAX_TAINT_SIZE; ++i) {
        value_2[i] |= value_1[i];
    }
    
    return TaintValue(value_2);
}

bool operator ==(const TaintValue &v1, const TaintValue &v2) {
    unsigned long value_1[MAX_TAINT_SIZE];
    unsigned long value_2[MAX_TAINT_SIZE];
    v1.getValue(value_1);
    v2.getValue(value_2); 
    for(int i = 0; i < MAX_TAINT_SIZE; ++i) {
        if(value_1[i] != value_2[i])
            return false;
    }

    return true;
}

bool operator !=(const TaintValue &v1, const TaintValue &v2) {
    return !(v1 == v2);
}

// TaintValueV

TaintValueV::TaintValueV() {
    info.kind = taint_variable_kind::null;
    value = std::make_shared<TaintValue>();
}

TaintValueV::TaintValueV(taint_info info) {
    this->info = info;
    value = std::make_shared<TaintValue>();
}

TaintValueV::TaintValueV(unsigned deviant) {
    info.kind = taint_variable_kind::null;
    value = std::make_shared<TaintValue>(deviant);
}

TaintValueV::TaintValueV(taint_info info, unsigned deviant) {
    this->info = info;
    value = std::make_shared<TaintValue>(deviant);
}

TaintValueV::TaintValueV(TaintValue v) {
    info.kind = taint_variable_kind::null;
    unsigned long values[MAX_TAINT_SIZE];
    v.getValue(values);
    value = std::make_shared<TaintValue>(values);
}

TaintValueV::TaintValueV(unsigned long(&input)[MAX_TAINT_SIZE]) {
    info.kind = taint_variable_kind::null;
    value = std::make_shared<TaintValue>(input);
}

TaintValueV TaintValueV::copy(const TaintValueV &v) {
    unsigned long value_[MAX_TAINT_SIZE];
    v.getValue(value_);
    TaintValueV v2 = TaintValueV(value_);
    v2.info = v.info;
    return v2;
}

TaintValueV TaintValueV::copy_pointer(const TaintValueV &v) {
    TaintValueV v2 = TaintValueV();
    v2.info = v.info;
    v2.value = v.value;
    return v2;
}

bool TaintValueV::is_tainted() const {
    return value->isTainted();
}

void TaintValueV::getValue(unsigned long(&input)[MAX_TAINT_SIZE]) const {
    value->getValue(input);
}

void TaintValueV::update(const TaintValueV &valuev, bool is_pointer) {
    if (is_pointer) {
        value = valuev.value;
    }
    else {
        value->update(*valuev.value);
    }
}

void TaintValueV::update(const TaintValue &v, bool is_pointer) {
    if (is_pointer) {
        unsigned long value_[MAX_TAINT_SIZE];
        v.getValue(value_);
        value = std::make_shared<TaintValue>(value_);
    }
    else {
        value->update(v);
    }
}

void TaintValueV::update_default_tainted() {
    value->update((unsigned long)(1));
}

void TaintValueV::update_default_untainted() {
    value->update((unsigned long)(0));
}

TaintValueV operator +(const TaintValueV &v1, const TaintValueV &v2) {
    TaintValueV result = TaintValueV();
    result.value->update(*v1.value + *v2.value);
    result.info = v1.info;
    return result;
}

bool operator ==(const TaintValueV &v1, const TaintValueV &v2) {
    if(v1.info != v2.info) return false;
    return *v1.value == *v2.value;
}

bool operator !=(const TaintValueV &v1, const TaintValueV &v2) {
    return !(v1 == v2);
}

void combineTaint(TaintValueV a, TaintValueV b, unsigned long(&res)[MAX_TAINT_SIZE]) {
    unsigned long temp[MAX_TAINT_SIZE];
    a.getValue(temp);
    b.getValue(res);
    for(int i = 0; i < MAX_TAINT_SIZE; ++i) {
        res[i] |= temp[i];
    }
}

void combineTaint(unsigned long(&a)[MAX_TAINT_SIZE], unsigned long(&b)[MAX_TAINT_SIZE], unsigned long(&res)[MAX_TAINT_SIZE]) {
    for(int i = 0; i < MAX_TAINT_SIZE; ++i) {
        res[i] = a[i] | b[i];
    }
}

TaintValue combineValues(TaintValueV value, std::vector<TaintValueV> values) {
    if(!value.is_tainted()) return TaintValue(0);
    
    unsigned long res[MAX_TAINT_SIZE] = {};

    unsigned long temp[MAX_TAINT_SIZE] = {};
    value.getValue(temp);
    if(temp[0] % 2 == 1) res[0] = 1;

    unsigned deviant = 1;
    for(TaintValueV tmp : values) {
        if(tmp.is_tainted()) {
            unsigned index = deviant / (8 * sizeof(unsigned long));
            unsigned real_deviant = deviant % (8 * sizeof(unsigned long));

            if(index > 9) continue;

            res[index] |= (1 << real_deviant);
            ++deviant;
        }
        else {
            ++deviant;
        }
    }

    for(int i = 0; i < MAX_TAINT_SIZE; ++i) {
        res[i] &= temp[i];
    }

    return TaintValue(res);
}

std::vector<unsigned> getTaintIndex(unsigned long(&value)[MAX_TAINT_SIZE]) {
    std::vector<unsigned> res;
    unsigned len = 8 * sizeof(unsigned long);

    for(int i = 0; i < MAX_TAINT_SIZE; ++i) {
        unsigned long current = value[i];
        for(unsigned j = 0; j < len; ++j) {
            if(current % 2 == 1) res.push_back(i * 8 * sizeof(unsigned long) + j);
            current /= 2;
        }
    }
    
    return res;
}

}

