#ifndef MY_STMT_H
#define MY_STMT_H
#include <clang/Analysis/CFG.h>

class MyStmt{
    unsigned _line;
    unsigned _offset; // offset in a block
    const CFGBlock *_block;
public:
    MyStmt() {}
    
    MyStmt(unsigned line,unsigned offset,const CFGBlock *block){
        _line=line;
        _offset=offset;
        _block=block;
    }

    unsigned getOffset(){
        return _offset;
    }

    const CFGBlock *getCFGBlock(){
        return _block;
    }

};
#endif // end of CFG_STAT_H