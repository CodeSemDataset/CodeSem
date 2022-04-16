#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 147 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef long ptrdiff_t;
#line 50 "lua.h"
struct lua_State;
#line 50 "lua.h"
typedef struct lua_State lua_State;
#line 99 "lua.h"
typedef double lua_Number;
#line 326
struct lua_Debug;
#line 326 "lua.h"
typedef struct lua_Debug lua_Debug;
#line 346 "lua.h"
struct lua_Debug {
   int event ;
   char *name ;
   char *namewhat ;
   char *what ;
   char *source ;
   int currentline ;
   int nups ;
   int linedefined ;
   int lastlinedefined ;
   char short_src[60] ;
   int i_ci ;
};
#line 18 "llimits.h"
typedef unsigned int lu_int32;
#line 20 "llimits.h"
typedef size_t lu_mem;
#line 27 "llimits.h"
typedef unsigned char lu_byte;
#line 47 "llimits.h"
union __anonunion_L_Umaxalign_5 {
   double u ;
   void *s ;
   long l ;
};
#line 47 "llimits.h"
typedef union __anonunion_L_Umaxalign_5 L_Umaxalign;
#line 88 "llimits.h"
typedef lu_int32 Instruction;
#line 36 "lobject.h"
union GCObject;
#line 36 "lobject.h"
typedef union GCObject GCObject;
#line 49 "lobject.h"
struct GCheader {
   GCObject *next ;
   lu_byte tt ;
   lu_byte marked ;
};
#line 49 "lobject.h"
typedef struct GCheader GCheader;
#line 59 "lobject.h"
union __anonunion_Value_6 {
   GCObject *gc ;
   void *p ;
   lua_Number n ;
   int b ;
};
#line 59 "lobject.h"
typedef union __anonunion_Value_6 Value;
#line 73 "lobject.h"
struct lua_TValue {
   Value value ;
   int tt ;
};
#line 73 "lobject.h"
typedef struct lua_TValue TValue;
#line 193 "lobject.h"
typedef TValue *StkId;
#line 199 "lobject.h"
struct __anonstruct_tsv_7 {
   GCObject *next ;
   lu_byte tt ;
   lu_byte marked ;
   lu_byte reserved ;
   unsigned int hash ;
   size_t len ;
};
#line 199 "lobject.h"
union TString {
   L_Umaxalign dummy ;
   struct __anonstruct_tsv_7 tsv ;
};
#line 199 "lobject.h"
typedef union TString TString;
#line 215
struct Table;
#line 215 "lobject.h"
struct __anonstruct_uv_8 {
   GCObject *next ;
   lu_byte tt ;
   lu_byte marked ;
   struct Table *metatable ;
   struct Table *env ;
   size_t len ;
};
#line 215 "lobject.h"
union Udata {
   L_Umaxalign dummy ;
   struct __anonstruct_uv_8 uv ;
};
#line 231
struct LocVar;
#line 231 "lobject.h"
struct Proto {
   GCObject *next ;
   lu_byte tt ;
   lu_byte marked ;
   TValue *k ;
   Instruction *code ;
   struct Proto **p ;
   int *lineinfo ;
   struct LocVar *locvars ;
   TString **upvalues ;
   TString *source ;
   int sizeupvalues ;
   int sizek ;
   int sizecode ;
   int sizelineinfo ;
   int sizep ;
   int sizelocvars ;
   int linedefined ;
   int lastlinedefined ;
   GCObject *gclist ;
   lu_byte nups ;
   lu_byte numparams ;
   lu_byte is_vararg ;
   lu_byte maxstacksize ;
};
#line 231 "lobject.h"
typedef struct Proto Proto;
#line 262 "lobject.h"
struct LocVar {
   TString *varname ;
   int startpc ;
   int endpc ;
};
#line 262 "lobject.h"
typedef struct LocVar LocVar;
#line 274 "lobject.h"
struct __anonstruct_l_10 {
   struct UpVal *prev ;
   struct UpVal *next ;
};
#line 274 "lobject.h"
union __anonunion_u_9 {
   TValue value ;
   struct __anonstruct_l_10 l ;
};
#line 274 "lobject.h"
struct UpVal {
   GCObject *next ;
   lu_byte tt ;
   lu_byte marked ;
   TValue *v ;
   union __anonunion_u_9 u ;
};
#line 274 "lobject.h"
typedef struct UpVal UpVal;
#line 295 "lobject.h"
struct CClosure {
   GCObject *next ;
   lu_byte tt ;
   lu_byte marked ;
   lu_byte isC ;
   lu_byte nupvalues ;
   GCObject *gclist ;
   struct Table *env ;
   int (*f)(lua_State *L ) ;
   TValue upvalue[1] ;
};
#line 295 "lobject.h"
typedef struct CClosure CClosure;
#line 302 "lobject.h"
struct LClosure {
   GCObject *next ;
   lu_byte tt ;
   lu_byte marked ;
   lu_byte isC ;
   lu_byte nupvalues ;
   GCObject *gclist ;
   struct Table *env ;
   struct Proto *p ;
   UpVal *upvals[1] ;
};
#line 302 "lobject.h"
typedef struct LClosure LClosure;
#line 309 "lobject.h"
union Closure {
   CClosure c ;
   LClosure l ;
};
#line 323
struct Node;
#line 323 "lobject.h"
struct __anonstruct_nk_11 {
   Value value ;
   int tt ;
   struct Node *next ;
};
#line 323 "lobject.h"
union TKey {
   struct __anonstruct_nk_11 nk ;
   TValue tvk ;
};
#line 323 "lobject.h"
typedef union TKey TKey;
#line 332 "lobject.h"
struct Node {
   TValue i_val ;
   TKey i_key ;
};
#line 332 "lobject.h"
typedef struct Node Node;
#line 338 "lobject.h"
struct Table {
   GCObject *next ;
   lu_byte tt ;
   lu_byte marked ;
   lu_byte flags ;
   lu_byte lsizenode ;
   struct Table *metatable ;
   TValue *array ;
   Node *node ;
   Node *lastfree ;
   GCObject *gclist ;
   int sizearray ;
};
#line 338 "lobject.h"
typedef struct Table Table;
#line 18 "lzio.h"
struct Zio;
#line 18 "lzio.h"
typedef struct Zio ZIO;
#line 24 "lzio.h"
struct Mbuffer {
   char *buffer ;
   size_t n ;
   size_t buffsize ;
};
#line 24 "lzio.h"
typedef struct Mbuffer Mbuffer;
#line 56 "lzio.h"
struct Zio {
   size_t n ;
   char *p ;
   char const   *(*reader)(lua_State *L , void *ud , size_t *sz ) ;
   void *data ;
   lua_State *L ;
};
#line 43 "llex.h"
union __anonunion_SemInfo_12 {
   lua_Number r ;
   TString *ts ;
};
#line 43 "llex.h"
typedef union __anonunion_SemInfo_12 SemInfo;
#line 49 "llex.h"
struct Token {
   int token ;
   SemInfo seminfo ;
};
#line 49 "llex.h"
typedef struct Token Token;
#line 55
struct FuncState;
#line 55 "llex.h"
struct LexState {
   int current ;
   int linenumber ;
   int lastline ;
   Token t ;
   Token lookahead ;
   struct FuncState *fs ;
   struct lua_State *L ;
   ZIO *z ;
   Mbuffer *buff ;
   TString *source ;
   char decpoint ;
};
#line 55 "llex.h"
typedef struct LexState LexState;
#line 150 "lopcodes.h"
enum __anonenum_OpCode_13 {
    OP_MOVE = 0,
    OP_LOADK = 1,
    OP_LOADBOOL = 2,
    OP_LOADNIL = 3,
    OP_GETUPVAL = 4,
    OP_GETGLOBAL = 5,
    OP_GETTABLE = 6,
    OP_SETGLOBAL = 7,
    OP_SETUPVAL = 8,
    OP_SETTABLE = 9,
    OP_NEWTABLE = 10,
    OP_SELF = 11,
    OP_ADD = 12,
    OP_SUB = 13,
    OP_MUL = 14,
    OP_DIV = 15,
    OP_MOD = 16,
    OP_POW = 17,
    OP_UNM = 18,
    OP_NOT = 19,
    OP_LEN = 20,
    OP_CONCAT = 21,
    OP_JMP = 22,
    OP_EQ = 23,
    OP_LT = 24,
    OP_LE = 25,
    OP_TEST = 26,
    OP_TESTSET = 27,
    OP_CALL = 28,
    OP_TAILCALL = 29,
    OP_RETURN = 30,
    OP_FORLOOP = 31,
    OP_FORPREP = 32,
    OP_TFORLOOP = 33,
    OP_SETLIST = 34,
    OP_CLOSE = 35,
    OP_CLOSURE = 36,
    OP_VARARG = 37
} ;
#line 150 "lopcodes.h"
typedef enum __anonenum_OpCode_13 OpCode;
#line 19 "lparser.h"
enum __anonenum_expkind_14 {
    VVOID = 0,
    VNIL = 1,
    VTRUE = 2,
    VFALSE = 3,
    VK = 4,
    VKNUM = 5,
    VLOCAL = 6,
    VUPVAL = 7,
    VGLOBAL = 8,
    VINDEXED = 9,
    VJMP = 10,
    VRELOCABLE = 11,
    VNONRELOC = 12,
    VCALL = 13,
    VVARARG = 14
} ;
#line 19 "lparser.h"
typedef enum __anonenum_expkind_14 expkind;
#line 37 "lparser.h"
struct __anonstruct_s_16 {
   int info ;
   int aux ;
};
#line 37 "lparser.h"
union __anonunion_u_15 {
   struct __anonstruct_s_16 s ;
   lua_Number nval ;
};
#line 37 "lparser.h"
struct expdesc {
   expkind k ;
   union __anonunion_u_15 u ;
   int t ;
   int f ;
};
#line 37 "lparser.h"
typedef struct expdesc expdesc;
#line 48 "lparser.h"
struct upvaldesc {
   lu_byte k ;
   lu_byte info ;
};
#line 48 "lparser.h"
typedef struct upvaldesc upvaldesc;
#line 54
struct BlockCnt;
#line 54
struct BlockCnt;
#line 58 "lparser.h"
struct FuncState {
   Proto *f ;
   Table *h ;
   struct FuncState *prev ;
   struct LexState *ls ;
   struct lua_State *L ;
   struct BlockCnt *bl ;
   int pc ;
   int lasttarget ;
   int jpc ;
   int freereg ;
   int nk ;
   int np ;
   short nlocvars ;
   lu_byte nactvar ;
   upvaldesc upvalues[60] ;
   unsigned short actvar[200] ;
};
#line 58 "lparser.h"
typedef struct FuncState FuncState;
#line 26 "lcode.h"
enum BinOpr {
    OPR_ADD = 0,
    OPR_SUB = 1,
    OPR_MUL = 2,
    OPR_DIV = 3,
    OPR_MOD = 4,
    OPR_POW = 5,
    OPR_CONCAT = 6,
    OPR_NE = 7,
    OPR_EQ = 8,
    OPR_LT = 9,
    OPR_LE = 10,
    OPR_GT = 11,
    OPR_GE = 12,
    OPR_AND = 13,
    OPR_OR = 14,
    OPR_NOBINOPR = 15
} ;
#line 26 "lcode.h"
typedef enum BinOpr BinOpr;
#line 36
enum UnOpr {
    OPR_MINUS = 0,
    OPR_NOT = 1,
    OPR_LEN = 2,
    OPR_NOUNOPR = 3
} ;
#line 36 "lcode.h"
typedef enum UnOpr UnOpr;
#line 18 "lstate.h"
struct lua_longjmp;
#line 18
struct lua_longjmp;
#line 38 "lstate.h"
struct stringtable {
   GCObject **hash ;
   lu_int32 nuse ;
   int size ;
};
#line 38 "lstate.h"
typedef struct stringtable stringtable;
#line 48 "lstate.h"
struct CallInfo {
   StkId base ;
   StkId func ;
   StkId top ;
   Instruction *savedpc ;
   int nresults ;
   int tailcalls ;
};
#line 48 "lstate.h"
typedef struct CallInfo CallInfo;
#line 68 "lstate.h"
struct global_State {
   stringtable strt ;
   void *(*frealloc)(void *ud , void *ptr , size_t osize , size_t nsize ) ;
   void *ud ;
   lu_byte currentwhite ;
   lu_byte gcstate ;
   int sweepstrgc ;
   GCObject *rootgc ;
   GCObject **sweepgc ;
   GCObject *gray ;
   GCObject *grayagain ;
   GCObject *weak ;
   GCObject *tmudata ;
   Mbuffer buff ;
   lu_mem GCthreshold ;
   lu_mem totalbytes ;
   lu_mem estimate ;
   lu_mem gcdept ;
   int gcpause ;
   int gcstepmul ;
   int (*panic)(lua_State *L ) ;
   TValue l_registry ;
   struct lua_State *mainthread ;
   UpVal uvhead ;
   struct Table *mt[9] ;
   TString *tmname[17] ;
};
#line 68 "lstate.h"
typedef struct global_State global_State;
#line 100 "lstate.h"
struct lua_State {
   GCObject *next ;
   lu_byte tt ;
   lu_byte marked ;
   lu_byte status ;
   StkId top ;
   StkId base ;
   global_State *l_G ;
   CallInfo *ci ;
   Instruction *savedpc ;
   StkId stack_last ;
   StkId stack ;
   CallInfo *end_ci ;
   CallInfo *base_ci ;
   int stacksize ;
   int size_ci ;
   unsigned short nCcalls ;
   unsigned short baseCcalls ;
   lu_byte hookmask ;
   lu_byte allowhook ;
   int basehookcount ;
   int hookcount ;
   void (*hook)(lua_State *L , lua_Debug *ar ) ;
   TValue l_gt ;
   TValue env ;
   GCObject *openupval ;
   GCObject *gclist ;
   struct lua_longjmp *errorJmp ;
   ptrdiff_t errfunc ;
};
#line 136 "lstate.h"
union GCObject {
   GCheader gch ;
   union TString ts ;
   union Udata u ;
   union Closure cl ;
   struct Table h ;
   struct Proto p ;
   struct UpVal uv ;
   struct lua_State th ;
};
#line 40 "lparser.c"
struct BlockCnt {
   struct BlockCnt *previous ;
   int breaklist ;
   lu_byte nactvar ;
   lu_byte upval ;
   lu_byte isbreakable ;
};
#line 40 "lparser.c"
typedef struct BlockCnt BlockCnt;
#line 434 "lparser.c"
struct ConsControl {
   expdesc v ;
   expdesc *t ;
   int nh ;
   int na ;
   int tostore ;
};
#line 810 "lparser.c"
struct __anonstruct_priority_18 {
   lu_byte left ;
   lu_byte right ;
};
#line 896 "lparser.c"
struct LHS_assign {
   struct LHS_assign *prev ;
   expdesc v ;
};
extern struct LHS_assign *__dyc_random_ptr__comp_46LHS_assign(unsigned int __dyc_exp ) ;
extern struct LHS_assign *__dyc_read_ptr__comp_46LHS_assign(void) ;
extern void __dyc_print_ptr__comp_46LHS_assign(struct LHS_assign  const  *__dyc_thistype ) ;
extern union Udata __dyc_random_comp_15Udata(unsigned int __dyc_exp ) ;
extern union Udata __dyc_read_comp_15Udata(void) ;
extern void __dyc_print_comp_15Udata(union Udata __dyc_thistype ) ;
extern CallInfo *__dyc_random_ptr__typdef_CallInfo(unsigned int __dyc_exp ) ;
extern CallInfo *__dyc_read_ptr__typdef_CallInfo(void) ;
extern void __dyc_print_ptr__typdef_CallInfo(CallInfo const   *__dyc_thistype ) ;
extern Proto __dyc_random_typdef_Proto(unsigned int __dyc_exp ) ;
extern Proto __dyc_read_typdef_Proto(void) ;
extern void __dyc_print_typdef_Proto(Proto __dyc_thistype ) ;
extern struct Table *__dyc_random_ptr__comp_17Table(unsigned int __dyc_exp ) ;
extern struct Table *__dyc_read_ptr__comp_17Table(void) ;
extern void __dyc_print_ptr__comp_17Table(struct Table  const  *__dyc_thistype ) ;
extern expdesc __dyc_random_typdef_expdesc(unsigned int __dyc_exp ) ;
extern expdesc __dyc_read_typdef_expdesc(void) ;
extern void __dyc_print_typdef_expdesc(expdesc __dyc_thistype ) ;
extern struct lua_State __dyc_random_comp_6lua_State(unsigned int __dyc_exp ) ;
extern struct lua_State __dyc_read_comp_6lua_State(void) ;
extern void __dyc_print_comp_6lua_State(struct lua_State __dyc_thistype ) ;
extern CClosure __dyc_random_typdef_CClosure(unsigned int __dyc_exp ) ;
extern CClosure __dyc_read_typdef_CClosure(void) ;
extern void __dyc_print_typdef_CClosure(CClosure __dyc_thistype ) ;
extern struct FuncState __dyc_random_comp_34FuncState(unsigned int __dyc_exp ) ;
extern struct FuncState __dyc_read_comp_34FuncState(void) ;
extern void __dyc_print_comp_34FuncState(struct FuncState __dyc_thistype ) ;
extern lua_Number __dyc_random_typdef_lua_Number(unsigned int __dyc_exp ) ;
extern lua_Number __dyc_read_typdef_lua_Number(void) ;
extern void __dyc_print_typdef_lua_Number(lua_Number __dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct lua_State *__dyc_random_ptr__comp_6lua_State(unsigned int __dyc_exp ) ;
extern struct lua_State *__dyc_read_ptr__comp_6lua_State(void) ;
extern void __dyc_print_ptr__comp_6lua_State(struct lua_State  const  *__dyc_thistype ) ;
extern struct LexState __dyc_random_comp_33LexState(unsigned int __dyc_exp ) ;
extern struct LexState __dyc_read_comp_33LexState(void) ;
extern void __dyc_print_comp_33LexState(struct LexState __dyc_thistype ) ;
extern struct Node __dyc_random_comp_28Node(unsigned int __dyc_exp ) ;
extern struct Node __dyc_read_comp_28Node(void) ;
extern void __dyc_print_comp_28Node(struct Node __dyc_thistype ) ;
extern L_Umaxalign __dyc_random_typdef_L_Umaxalign(unsigned int __dyc_exp ) ;
extern L_Umaxalign __dyc_read_typdef_L_Umaxalign(void) ;
extern void __dyc_print_typdef_L_Umaxalign(L_Umaxalign __dyc_thistype ) ;
extern union __anonunion_SemInfo_12 __dyc_random_comp_31__anonunion_SemInfo_12(unsigned int __dyc_exp ) ;
extern union __anonunion_SemInfo_12 __dyc_read_comp_31__anonunion_SemInfo_12(void) ;
extern void __dyc_print_comp_31__anonunion_SemInfo_12(union __anonunion_SemInfo_12 __dyc_thistype ) ;
extern struct lua_Debug __dyc_random_comp_7lua_Debug(unsigned int __dyc_exp ) ;
extern struct lua_Debug __dyc_read_comp_7lua_Debug(void) ;
extern void __dyc_print_comp_7lua_Debug(struct lua_Debug __dyc_thistype ) ;
extern GCheader __dyc_random_typdef_GCheader(unsigned int __dyc_exp ) ;
extern GCheader __dyc_read_typdef_GCheader(void) ;
extern void __dyc_print_typdef_GCheader(GCheader __dyc_thistype ) ;
extern TValue *__dyc_random_ptr__typdef_TValue(unsigned int __dyc_exp ) ;
extern TValue *__dyc_read_ptr__typdef_TValue(void) ;
extern void __dyc_print_ptr__typdef_TValue(TValue const   *__dyc_thistype ) ;
extern union GCObject __dyc_random_comp_9GCObject(unsigned int __dyc_exp ) ;
extern union GCObject __dyc_read_comp_9GCObject(void) ;
extern void __dyc_print_comp_9GCObject(union GCObject __dyc_thistype ) ;
extern union TKey __dyc_random_comp_26TKey(unsigned int __dyc_exp ) ;
extern union TKey __dyc_read_comp_26TKey(void) ;
extern void __dyc_print_comp_26TKey(union TKey __dyc_thistype ) ;
extern UpVal __dyc_random_typdef_UpVal(unsigned int __dyc_exp ) ;
extern UpVal __dyc_read_typdef_UpVal(void) ;
extern void __dyc_print_typdef_UpVal(UpVal __dyc_thistype ) ;
extern lua_State *__dyc_random_ptr__typdef_lua_State(unsigned int __dyc_exp ) ;
extern lua_State *__dyc_read_ptr__typdef_lua_State(void) ;
extern void __dyc_print_ptr__typdef_lua_State(lua_State const   *__dyc_thistype ) ;
extern lua_Debug __dyc_random_typdef_lua_Debug(unsigned int __dyc_exp ) ;
extern lua_Debug __dyc_read_typdef_lua_Debug(void) ;
extern void __dyc_print_typdef_lua_Debug(lua_Debug __dyc_thistype ) ;
extern struct LexState *__dyc_random_ptr__comp_33LexState(unsigned int __dyc_exp ) ;
extern struct LexState *__dyc_read_ptr__comp_33LexState(void) ;
extern void __dyc_print_ptr__comp_33LexState(struct LexState  const  *__dyc_thistype ) ;
extern struct Mbuffer __dyc_random_comp_30Mbuffer(unsigned int __dyc_exp ) ;
extern struct Mbuffer __dyc_read_comp_30Mbuffer(void) ;
extern void __dyc_print_comp_30Mbuffer(struct Mbuffer __dyc_thistype ) ;
extern Instruction *__dyc_random_ptr__typdef_Instruction(unsigned int __dyc_exp ) ;
extern Instruction *__dyc_read_ptr__typdef_Instruction(void) ;
extern void __dyc_print_ptr__typdef_Instruction(Instruction const   *__dyc_thistype ) ;
extern struct Node *__dyc_random_ptr__comp_28Node(unsigned int __dyc_exp ) ;
extern struct Node *__dyc_read_ptr__comp_28Node(void) ;
extern void __dyc_print_ptr__comp_28Node(struct Node  const  *__dyc_thistype ) ;
extern Proto *__dyc_random_ptr__typdef_Proto(unsigned int __dyc_exp ) ;
extern Proto *__dyc_read_ptr__typdef_Proto(void) ;
extern void __dyc_print_ptr__typdef_Proto(Proto const   *__dyc_thistype ) ;
extern Mbuffer *__dyc_random_ptr__typdef_Mbuffer(unsigned int __dyc_exp ) ;
extern Mbuffer *__dyc_read_ptr__typdef_Mbuffer(void) ;
extern void __dyc_print_ptr__typdef_Mbuffer(Mbuffer const   *__dyc_thistype ) ;
extern union __anonunion_u_9 __dyc_random_comp_21__anonunion_u_9(unsigned int __dyc_exp ) ;
extern union __anonunion_u_9 __dyc_read_comp_21__anonunion_u_9(void) ;
extern void __dyc_print_comp_21__anonunion_u_9(union __anonunion_u_9 __dyc_thistype ) ;
extern lu_byte __dyc_random_typdef_lu_byte(unsigned int __dyc_exp ) ;
extern lu_byte __dyc_read_typdef_lu_byte(void) ;
extern void __dyc_print_typdef_lu_byte(lu_byte __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_40lua_longjmp(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_40lua_longjmp(void) ;
extern void __dyc_print_ptr__comp_40lua_longjmp(void const   * const  __dyc_thistype ) ;
extern struct lua_TValue __dyc_random_comp_12lua_TValue(unsigned int __dyc_exp ) ;
extern struct lua_TValue __dyc_read_comp_12lua_TValue(void) ;
extern void __dyc_print_comp_12lua_TValue(struct lua_TValue __dyc_thistype ) ;
extern struct FuncState *__dyc_random_ptr__comp_34FuncState(unsigned int __dyc_exp ) ;
extern struct FuncState *__dyc_read_ptr__comp_34FuncState(void) ;
extern void __dyc_print_ptr__comp_34FuncState(struct FuncState  const  *__dyc_thistype ) ;
extern struct __anonstruct_l_10 __dyc_random_comp_22__anonstruct_l_10(unsigned int __dyc_exp ) ;
extern struct __anonstruct_l_10 __dyc_read_comp_22__anonstruct_l_10(void) ;
extern void __dyc_print_comp_22__anonstruct_l_10(struct __anonstruct_l_10 __dyc_thistype ) ;
extern Token __dyc_random_typdef_Token(unsigned int __dyc_exp ) ;
extern Token __dyc_read_typdef_Token(void) ;
extern void __dyc_print_typdef_Token(Token __dyc_thistype ) ;
extern struct LocVar __dyc_random_comp_19LocVar(unsigned int __dyc_exp ) ;
extern struct LocVar __dyc_read_comp_19LocVar(void) ;
extern void __dyc_print_comp_19LocVar(struct LocVar __dyc_thistype ) ;
extern ZIO *__dyc_random_ptr__typdef_ZIO(unsigned int __dyc_exp ) ;
extern ZIO *__dyc_read_ptr__typdef_ZIO(void) ;
extern void __dyc_print_ptr__typdef_ZIO(ZIO const   *__dyc_thistype ) ;
extern struct LClosure __dyc_random_comp_24LClosure(unsigned int __dyc_exp ) ;
extern struct LClosure __dyc_read_comp_24LClosure(void) ;
extern void __dyc_print_comp_24LClosure(struct LClosure __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern union __anonunion_L_Umaxalign_5 __dyc_random_comp_8__anonunion_L_Umaxalign_5(unsigned int __dyc_exp ) ;
extern union __anonunion_L_Umaxalign_5 __dyc_read_comp_8__anonunion_L_Umaxalign_5(void) ;
extern void __dyc_print_comp_8__anonunion_L_Umaxalign_5(union __anonunion_L_Umaxalign_5 __dyc_thistype ) ;
extern UpVal *__dyc_random_ptr__typdef_UpVal(unsigned int __dyc_exp ) ;
extern UpVal *__dyc_read_ptr__typdef_UpVal(void) ;
extern void __dyc_print_ptr__typdef_UpVal(UpVal const   *__dyc_thistype ) ;
extern lua_Debug *__dyc_random_ptr__typdef_lua_Debug(unsigned int __dyc_exp ) ;
extern lua_Debug *__dyc_read_ptr__typdef_lua_Debug(void) ;
extern void __dyc_print_ptr__typdef_lua_Debug(lua_Debug const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern struct CClosure __dyc_random_comp_23CClosure(unsigned int __dyc_exp ) ;
extern struct CClosure __dyc_read_comp_23CClosure(void) ;
extern void __dyc_print_comp_23CClosure(struct CClosure __dyc_thistype ) ;
extern SemInfo __dyc_random_typdef_SemInfo(unsigned int __dyc_exp ) ;
extern SemInfo __dyc_read_typdef_SemInfo(void) ;
extern void __dyc_print_typdef_SemInfo(SemInfo __dyc_thistype ) ;
extern union __anonunion_Value_6 __dyc_random_comp_11__anonunion_Value_6(unsigned int __dyc_exp ) ;
extern union __anonunion_Value_6 __dyc_read_comp_11__anonunion_Value_6(void) ;
extern void __dyc_print_comp_11__anonunion_Value_6(union __anonunion_Value_6 __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern union __anonunion_u_15 __dyc_random_comp_36__anonunion_u_15(unsigned int __dyc_exp ) ;
extern union __anonunion_u_15 __dyc_read_comp_36__anonunion_u_15(void) ;
extern void __dyc_print_comp_36__anonunion_u_15(union __anonunion_u_15 __dyc_thistype ) ;
extern struct BlockCnt __dyc_random_comp_39BlockCnt(unsigned int __dyc_exp ) ;
extern struct BlockCnt __dyc_read_comp_39BlockCnt(void) ;
extern void __dyc_print_comp_39BlockCnt(struct BlockCnt __dyc_thistype ) ;
extern upvaldesc __dyc_random_typdef_upvaldesc(unsigned int __dyc_exp ) ;
extern upvaldesc __dyc_read_typdef_upvaldesc(void) ;
extern void __dyc_print_typdef_upvaldesc(upvaldesc __dyc_thistype ) ;
extern struct LHS_assign __dyc_random_comp_46LHS_assign(unsigned int __dyc_exp ) ;
extern struct LHS_assign __dyc_read_comp_46LHS_assign(void) ;
extern void __dyc_print_comp_46LHS_assign(struct LHS_assign __dyc_thistype ) ;
extern union Closure __dyc_random_comp_25Closure(unsigned int __dyc_exp ) ;
extern union Closure __dyc_read_comp_25Closure(void) ;
extern void __dyc_print_comp_25Closure(union Closure __dyc_thistype ) ;
extern Value __dyc_random_typdef_Value(unsigned int __dyc_exp ) ;
extern Value __dyc_read_typdef_Value(void) ;
extern void __dyc_print_typdef_Value(Value __dyc_thistype ) ;
extern struct Proto **__dyc_random_ptr__ptr__comp_18Proto(unsigned int __dyc_exp ) ;
extern struct Proto **__dyc_read_ptr__ptr__comp_18Proto(void) ;
extern void __dyc_print_ptr__ptr__comp_18Proto(struct Proto * const  *__dyc_thistype ) ;
extern GCObject __dyc_random_typdef_GCObject(unsigned int __dyc_exp ) ;
extern GCObject __dyc_read_typdef_GCObject(void) ;
extern void __dyc_print_typdef_GCObject(GCObject __dyc_thistype ) ;
extern struct BlockCnt *__dyc_random_ptr__comp_39BlockCnt(unsigned int __dyc_exp ) ;
extern struct BlockCnt *__dyc_read_ptr__comp_39BlockCnt(void) ;
extern void __dyc_print_ptr__comp_39BlockCnt(struct BlockCnt  const  *__dyc_thistype ) ;
extern struct expdesc __dyc_random_comp_35expdesc(unsigned int __dyc_exp ) ;
extern struct expdesc __dyc_read_comp_35expdesc(void) ;
extern void __dyc_print_comp_35expdesc(struct expdesc __dyc_thistype ) ;
extern Instruction __dyc_random_typdef_Instruction(unsigned int __dyc_exp ) ;
extern Instruction __dyc_read_typdef_Instruction(void) ;
extern void __dyc_print_typdef_Instruction(Instruction __dyc_thistype ) ;
extern UnOpr __dyc_random_typdef_UnOpr(unsigned int __dyc_exp ) ;
extern UnOpr __dyc_read_typdef_UnOpr(void) ;
extern void __dyc_print_typdef_UnOpr(UnOpr __dyc_thistype ) ;
extern global_State __dyc_random_typdef_global_State(unsigned int __dyc_exp ) ;
extern global_State __dyc_read_typdef_global_State(void) ;
extern void __dyc_print_typdef_global_State(global_State __dyc_thistype ) ;
extern Mbuffer __dyc_random_typdef_Mbuffer(unsigned int __dyc_exp ) ;
extern Mbuffer __dyc_read_typdef_Mbuffer(void) ;
extern void __dyc_print_typdef_Mbuffer(Mbuffer __dyc_thistype ) ;
extern LocVar *__dyc_random_ptr__typdef_LocVar(unsigned int __dyc_exp ) ;
extern LocVar *__dyc_read_ptr__typdef_LocVar(void) ;
extern void __dyc_print_ptr__typdef_LocVar(LocVar const   *__dyc_thistype ) ;
extern struct upvaldesc __dyc_random_comp_38upvaldesc(unsigned int __dyc_exp ) ;
extern struct upvaldesc __dyc_read_comp_38upvaldesc(void) ;
extern void __dyc_print_comp_38upvaldesc(struct upvaldesc __dyc_thistype ) ;
extern GCObject *__dyc_random_ptr__typdef_GCObject(unsigned int __dyc_exp ) ;
extern GCObject *__dyc_read_ptr__typdef_GCObject(void) ;
extern void __dyc_print_ptr__typdef_GCObject(GCObject const   *__dyc_thistype ) ;
extern ptrdiff_t __dyc_random_typdef_ptrdiff_t(unsigned int __dyc_exp ) ;
extern ptrdiff_t __dyc_read_typdef_ptrdiff_t(void) ;
extern void __dyc_print_typdef_ptrdiff_t(ptrdiff_t __dyc_thistype ) ;
extern struct __anonstruct_uv_8 __dyc_random_comp_16__anonstruct_uv_8(unsigned int __dyc_exp ) ;
extern struct __anonstruct_uv_8 __dyc_read_comp_16__anonstruct_uv_8(void) ;
extern void __dyc_print_comp_16__anonstruct_uv_8(struct __anonstruct_uv_8 __dyc_thistype ) ;
extern struct ConsControl *__dyc_random_ptr__comp_44ConsControl(unsigned int __dyc_exp ) ;
extern struct ConsControl *__dyc_read_ptr__comp_44ConsControl(void) ;
extern void __dyc_print_ptr__comp_44ConsControl(struct ConsControl  const  *__dyc_thistype ) ;
extern FuncState __dyc_random_typdef_FuncState(unsigned int __dyc_exp ) ;
extern FuncState __dyc_read_typdef_FuncState(void) ;
extern void __dyc_print_typdef_FuncState(FuncState __dyc_thistype ) ;
extern global_State *__dyc_random_ptr__typdef_global_State(unsigned int __dyc_exp ) ;
extern global_State *__dyc_read_ptr__typdef_global_State(void) ;
extern void __dyc_print_ptr__typdef_global_State(global_State const   *__dyc_thistype ) ;
extern TString *__dyc_random_ptr__typdef_TString(unsigned int __dyc_exp ) ;
extern TString *__dyc_read_ptr__typdef_TString(void) ;
extern void __dyc_print_ptr__typdef_TString(TString const   *__dyc_thistype ) ;
extern TValue __dyc_random_typdef_TValue(unsigned int __dyc_exp ) ;
extern TValue __dyc_read_typdef_TValue(void) ;
extern void __dyc_print_typdef_TValue(TValue __dyc_thistype ) ;
extern lu_mem __dyc_random_typdef_lu_mem(unsigned int __dyc_exp ) ;
extern lu_mem __dyc_read_typdef_lu_mem(void) ;
extern void __dyc_print_typdef_lu_mem(lu_mem __dyc_thistype ) ;
extern ZIO __dyc_random_typdef_ZIO(unsigned int __dyc_exp ) ;
extern ZIO __dyc_read_typdef_ZIO(void) ;
extern void __dyc_print_typdef_ZIO(ZIO __dyc_thistype ) ;
extern lu_int32 __dyc_random_typdef_lu_int32(unsigned int __dyc_exp ) ;
extern lu_int32 __dyc_read_typdef_lu_int32(void) ;
extern void __dyc_print_typdef_lu_int32(lu_int32 __dyc_thistype ) ;
extern struct UpVal __dyc_random_comp_20UpVal(unsigned int __dyc_exp ) ;
extern struct UpVal __dyc_read_comp_20UpVal(void) ;
extern void __dyc_print_comp_20UpVal(struct UpVal __dyc_thistype ) ;
extern Node __dyc_random_typdef_Node(unsigned int __dyc_exp ) ;
extern Node __dyc_read_typdef_Node(void) ;
extern void __dyc_print_typdef_Node(Node __dyc_thistype ) ;
extern BlockCnt __dyc_random_typdef_BlockCnt(unsigned int __dyc_exp ) ;
extern BlockCnt __dyc_read_typdef_BlockCnt(void) ;
extern void __dyc_print_typdef_BlockCnt(BlockCnt __dyc_thistype ) ;
extern struct stringtable __dyc_random_comp_41stringtable(unsigned int __dyc_exp ) ;
extern struct stringtable __dyc_read_comp_41stringtable(void) ;
extern void __dyc_print_comp_41stringtable(struct stringtable __dyc_thistype ) ;
extern TString **__dyc_random_ptr__ptr__typdef_TString(unsigned int __dyc_exp ) ;
extern TString **__dyc_read_ptr__ptr__typdef_TString(void) ;
extern void __dyc_print_ptr__ptr__typdef_TString(TString * const  *__dyc_thistype ) ;
extern Table __dyc_random_typdef_Table(unsigned int __dyc_exp ) ;
extern Table __dyc_read_typdef_Table(void) ;
extern void __dyc_print_typdef_Table(Table __dyc_thistype ) ;
extern size_t *__dyc_random_ptr__typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t *__dyc_read_ptr__typdef_size_t(void) ;
extern void __dyc_print_ptr__typdef_size_t(size_t const   *__dyc_thistype ) ;
extern expkind __dyc_random_typdef_expkind(unsigned int __dyc_exp ) ;
extern expkind __dyc_read_typdef_expkind(void) ;
extern void __dyc_print_typdef_expkind(expkind __dyc_thistype ) ;
extern Node *__dyc_random_ptr__typdef_Node(unsigned int __dyc_exp ) ;
extern Node *__dyc_read_ptr__typdef_Node(void) ;
extern void __dyc_print_ptr__typdef_Node(Node const   *__dyc_thistype ) ;
extern LClosure __dyc_random_typdef_LClosure(unsigned int __dyc_exp ) ;
extern LClosure __dyc_read_typdef_LClosure(void) ;
extern void __dyc_print_typdef_LClosure(LClosure __dyc_thistype ) ;
extern BlockCnt *__dyc_random_ptr__typdef_BlockCnt(unsigned int __dyc_exp ) ;
extern BlockCnt *__dyc_read_ptr__typdef_BlockCnt(void) ;
extern void __dyc_print_ptr__typdef_BlockCnt(BlockCnt const   *__dyc_thistype ) ;
extern expdesc *__dyc_random_ptr__typdef_expdesc(unsigned int __dyc_exp ) ;
extern expdesc *__dyc_read_ptr__typdef_expdesc(void) ;
extern void __dyc_print_ptr__typdef_expdesc(expdesc const   *__dyc_thistype ) ;
extern struct Proto __dyc_random_comp_18Proto(unsigned int __dyc_exp ) ;
extern struct Proto __dyc_read_comp_18Proto(void) ;
extern void __dyc_print_comp_18Proto(struct Proto __dyc_thistype ) ;
extern GCObject **__dyc_random_ptr__ptr__typdef_GCObject(unsigned int __dyc_exp ) ;
extern GCObject **__dyc_read_ptr__ptr__typdef_GCObject(void) ;
extern void __dyc_print_ptr__ptr__typdef_GCObject(GCObject * const  *__dyc_thistype ) ;
extern struct Token __dyc_random_comp_32Token(unsigned int __dyc_exp ) ;
extern struct Token __dyc_read_comp_32Token(void) ;
extern void __dyc_print_comp_32Token(struct Token __dyc_thistype ) ;
extern FuncState *__dyc_random_ptr__typdef_FuncState(unsigned int __dyc_exp ) ;
extern FuncState *__dyc_read_ptr__typdef_FuncState(void) ;
extern void __dyc_print_ptr__typdef_FuncState(FuncState const   *__dyc_thistype ) ;
extern Proto **__dyc_random_ptr__ptr__typdef_Proto(unsigned int __dyc_exp ) ;
extern Proto **__dyc_read_ptr__ptr__typdef_Proto(void) ;
extern void __dyc_print_ptr__ptr__typdef_Proto(Proto * const  *__dyc_thistype ) ;
extern struct __anonstruct_nk_11 __dyc_random_comp_27__anonstruct_nk_11(unsigned int __dyc_exp ) ;
extern struct __anonstruct_nk_11 __dyc_read_comp_27__anonstruct_nk_11(void) ;
extern void __dyc_print_comp_27__anonstruct_nk_11(struct __anonstruct_nk_11 __dyc_thistype ) ;
extern stringtable __dyc_random_typdef_stringtable(unsigned int __dyc_exp ) ;
extern stringtable __dyc_read_typdef_stringtable(void) ;
extern void __dyc_print_typdef_stringtable(stringtable __dyc_thistype ) ;
extern OpCode __dyc_random_typdef_OpCode(unsigned int __dyc_exp ) ;
extern OpCode __dyc_read_typdef_OpCode(void) ;
extern void __dyc_print_typdef_OpCode(OpCode __dyc_thistype ) ;
extern struct UpVal *__dyc_random_ptr__comp_20UpVal(unsigned int __dyc_exp ) ;
extern struct UpVal *__dyc_read_ptr__comp_20UpVal(void) ;
extern void __dyc_print_ptr__comp_20UpVal(struct UpVal  const  *__dyc_thistype ) ;
extern struct GCheader __dyc_random_comp_10GCheader(unsigned int __dyc_exp ) ;
extern struct GCheader __dyc_read_comp_10GCheader(void) ;
extern void __dyc_print_comp_10GCheader(struct GCheader __dyc_thistype ) ;
extern struct CallInfo __dyc_random_comp_42CallInfo(unsigned int __dyc_exp ) ;
extern struct CallInfo __dyc_read_comp_42CallInfo(void) ;
extern void __dyc_print_comp_42CallInfo(struct CallInfo __dyc_thistype ) ;
extern StkId __dyc_random_typdef_StkId(unsigned int __dyc_exp ) ;
extern StkId __dyc_read_typdef_StkId(void) ;
extern void __dyc_print_typdef_StkId(StkId __dyc_thistype ) ;
extern struct Table __dyc_random_comp_17Table(unsigned int __dyc_exp ) ;
extern struct Table __dyc_read_comp_17Table(void) ;
extern void __dyc_print_comp_17Table(struct Table __dyc_thistype ) ;
extern Table *__dyc_random_ptr__typdef_Table(unsigned int __dyc_exp ) ;
extern Table *__dyc_read_ptr__typdef_Table(void) ;
extern void __dyc_print_ptr__typdef_Table(Table const   *__dyc_thistype ) ;
extern struct LocVar *__dyc_random_ptr__comp_19LocVar(unsigned int __dyc_exp ) ;
extern struct LocVar *__dyc_read_ptr__comp_19LocVar(void) ;
extern void __dyc_print_ptr__comp_19LocVar(struct LocVar  const  *__dyc_thistype ) ;
extern struct __anonstruct_priority_18 __dyc_random_comp_45__anonstruct_priority_18(unsigned int __dyc_exp ) ;
extern struct __anonstruct_priority_18 __dyc_read_comp_45__anonstruct_priority_18(void) ;
extern void __dyc_print_comp_45__anonstruct_priority_18(struct __anonstruct_priority_18 __dyc_thistype ) ;
extern struct ConsControl __dyc_random_comp_44ConsControl(unsigned int __dyc_exp ) ;
extern struct ConsControl __dyc_read_comp_44ConsControl(void) ;
extern void __dyc_print_comp_44ConsControl(struct ConsControl __dyc_thistype ) ;
extern BinOpr __dyc_random_typdef_BinOpr(unsigned int __dyc_exp ) ;
extern BinOpr __dyc_read_typdef_BinOpr(void) ;
extern void __dyc_print_typdef_BinOpr(BinOpr __dyc_thistype ) ;
extern LexState __dyc_random_typdef_LexState(unsigned int __dyc_exp ) ;
extern LexState __dyc_read_typdef_LexState(void) ;
extern void __dyc_print_typdef_LexState(LexState __dyc_thistype ) ;
extern TString __dyc_random_typdef_TString(unsigned int __dyc_exp ) ;
extern TString __dyc_read_typdef_TString(void) ;
extern void __dyc_print_typdef_TString(TString __dyc_thistype ) ;
extern struct Zio __dyc_random_comp_29Zio(unsigned int __dyc_exp ) ;
extern struct Zio __dyc_read_comp_29Zio(void) ;
extern void __dyc_print_comp_29Zio(struct Zio __dyc_thistype ) ;
extern struct Proto *__dyc_random_ptr__comp_18Proto(unsigned int __dyc_exp ) ;
extern struct Proto *__dyc_read_ptr__comp_18Proto(void) ;
extern void __dyc_print_ptr__comp_18Proto(struct Proto  const  *__dyc_thistype ) ;
extern struct global_State __dyc_random_comp_43global_State(unsigned int __dyc_exp ) ;
extern struct global_State __dyc_read_comp_43global_State(void) ;
extern void __dyc_print_comp_43global_State(struct global_State __dyc_thistype ) ;
extern TKey __dyc_random_typdef_TKey(unsigned int __dyc_exp ) ;
extern TKey __dyc_read_typdef_TKey(void) ;
extern void __dyc_print_typdef_TKey(TKey __dyc_thistype ) ;
extern union TString __dyc_random_comp_13TString(unsigned int __dyc_exp ) ;
extern union TString __dyc_read_comp_13TString(void) ;
extern void __dyc_print_comp_13TString(union TString __dyc_thistype ) ;
extern LexState *__dyc_random_ptr__typdef_LexState(unsigned int __dyc_exp ) ;
extern LexState *__dyc_read_ptr__typdef_LexState(void) ;
extern void __dyc_print_ptr__typdef_LexState(LexState const   *__dyc_thistype ) ;
extern struct __anonstruct_tsv_7 __dyc_random_comp_14__anonstruct_tsv_7(unsigned int __dyc_exp ) ;
extern struct __anonstruct_tsv_7 __dyc_read_comp_14__anonstruct_tsv_7(void) ;
extern void __dyc_print_comp_14__anonstruct_tsv_7(struct __anonstruct_tsv_7 __dyc_thistype ) ;
extern CallInfo __dyc_random_typdef_CallInfo(unsigned int __dyc_exp ) ;
extern CallInfo __dyc_read_typdef_CallInfo(void) ;
extern void __dyc_print_typdef_CallInfo(CallInfo __dyc_thistype ) ;
extern struct __anonstruct_s_16 __dyc_random_comp_37__anonstruct_s_16(unsigned int __dyc_exp ) ;
extern struct __anonstruct_s_16 __dyc_read_comp_37__anonstruct_s_16(void) ;
extern void __dyc_print_comp_37__anonstruct_s_16(struct __anonstruct_s_16 __dyc_thistype ) ;
extern lua_State __dyc_random_typdef_lua_State(unsigned int __dyc_exp ) ;
extern lua_State __dyc_read_typdef_lua_State(void) ;
extern void __dyc_print_typdef_lua_State(lua_State __dyc_thistype ) ;
extern LocVar __dyc_random_typdef_LocVar(unsigned int __dyc_exp ) ;
extern LocVar __dyc_read_typdef_LocVar(void) ;
extern void __dyc_print_typdef_LocVar(LocVar __dyc_thistype ) ;
