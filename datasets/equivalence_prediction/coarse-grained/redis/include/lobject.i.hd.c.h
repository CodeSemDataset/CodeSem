#line 40 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
#line 98 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h"
typedef __gnuc_va_list va_list;
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
union __anonunion_L_Umaxalign_29 {
   double u ;
   void *s ;
   long l ;
};
#line 47 "llimits.h"
typedef union __anonunion_L_Umaxalign_29 L_Umaxalign;
#line 51 "llimits.h"
typedef double l_uacNumber;
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
union __anonunion_Value_30 {
   GCObject *gc ;
   void *p ;
   lua_Number n ;
   int b ;
};
#line 59 "lobject.h"
typedef union __anonunion_Value_30 Value;
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
struct __anonstruct_tsv_31 {
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
   struct __anonstruct_tsv_31 tsv ;
};
#line 199 "lobject.h"
typedef union TString TString;
#line 215
struct Table;
#line 215 "lobject.h"
struct __anonstruct_uv_32 {
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
   struct __anonstruct_uv_32 uv ;
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
#line 262 "lobject.h"
struct LocVar {
   TString *varname ;
   int startpc ;
   int endpc ;
};
#line 274 "lobject.h"
struct __anonstruct_l_34 {
   struct UpVal *prev ;
   struct UpVal *next ;
};
#line 274 "lobject.h"
union __anonunion_u_33 {
   TValue value ;
   struct __anonstruct_l_34 l ;
};
#line 274 "lobject.h"
struct UpVal {
   GCObject *next ;
   lu_byte tt ;
   lu_byte marked ;
   TValue *v ;
   union __anonunion_u_33 u ;
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
struct __anonstruct_nk_35 {
   Value value ;
   int tt ;
   struct Node *next ;
};
#line 323 "lobject.h"
union TKey {
   struct __anonstruct_nk_35 nk ;
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
#line 24 "lzio.h"
struct Mbuffer {
   char *buffer ;
   size_t n ;
   size_t buffsize ;
};
#line 24 "lzio.h"
typedef struct Mbuffer Mbuffer;
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
extern CallInfo *__dyc_random_ptr__typdef_CallInfo(unsigned int __dyc_exp ) ;
extern CallInfo *__dyc_read_ptr__typdef_CallInfo(void) ;
extern void __dyc_print_ptr__typdef_CallInfo(CallInfo const   *__dyc_thistype ) ;
extern struct LocVar *__dyc_random_ptr__comp_53LocVar(unsigned int __dyc_exp ) ;
extern struct LocVar *__dyc_read_ptr__comp_53LocVar(void) ;
extern void __dyc_print_ptr__comp_53LocVar(struct LocVar  const  *__dyc_thistype ) ;
extern struct LClosure __dyc_random_comp_58LClosure(unsigned int __dyc_exp ) ;
extern struct LClosure __dyc_read_comp_58LClosure(void) ;
extern void __dyc_print_comp_58LClosure(struct LClosure __dyc_thistype ) ;
extern CClosure __dyc_random_typdef_CClosure(unsigned int __dyc_exp ) ;
extern CClosure __dyc_read_typdef_CClosure(void) ;
extern void __dyc_print_typdef_CClosure(CClosure __dyc_thistype ) ;
extern struct lua_Debug __dyc_random_comp_41lua_Debug(unsigned int __dyc_exp ) ;
extern struct lua_Debug __dyc_read_comp_41lua_Debug(void) ;
extern void __dyc_print_comp_41lua_Debug(struct lua_Debug __dyc_thistype ) ;
extern unsigned short **__dyc_random_ptr__ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short **__dyc_read_ptr__ptr__short(void) ;
extern void __dyc_print_ptr__ptr__short(unsigned short const   * const  *__dyc_thistype ) ;
extern union Closure __dyc_random_comp_59Closure(unsigned int __dyc_exp ) ;
extern union Closure __dyc_read_comp_59Closure(void) ;
extern void __dyc_print_comp_59Closure(union Closure __dyc_thistype ) ;
extern lua_Number __dyc_random_typdef_lua_Number(unsigned int __dyc_exp ) ;
extern lua_Number __dyc_read_typdef_lua_Number(void) ;
extern void __dyc_print_typdef_lua_Number(lua_Number __dyc_thistype ) ;
extern struct stringtable __dyc_random_comp_66stringtable(unsigned int __dyc_exp ) ;
extern struct stringtable __dyc_read_comp_66stringtable(void) ;
extern void __dyc_print_comp_66stringtable(struct stringtable __dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern union __anonunion_Value_30 __dyc_random_comp_45__anonunion_Value_30(unsigned int __dyc_exp ) ;
extern union __anonunion_Value_30 __dyc_read_comp_45__anonunion_Value_30(void) ;
extern void __dyc_print_comp_45__anonunion_Value_30(union __anonunion_Value_30 __dyc_thistype ) ;
extern struct Proto **__dyc_random_ptr__ptr__comp_52Proto(unsigned int __dyc_exp ) ;
extern struct Proto **__dyc_read_ptr__ptr__comp_52Proto(void) ;
extern void __dyc_print_ptr__ptr__comp_52Proto(struct Proto * const  *__dyc_thistype ) ;
extern struct CClosure __dyc_random_comp_57CClosure(unsigned int __dyc_exp ) ;
extern struct CClosure __dyc_read_comp_57CClosure(void) ;
extern void __dyc_print_comp_57CClosure(struct CClosure __dyc_thistype ) ;
extern struct __anonstruct_l_34 __dyc_random_comp_56__anonstruct_l_34(unsigned int __dyc_exp ) ;
extern struct __anonstruct_l_34 __dyc_read_comp_56__anonstruct_l_34(void) ;
extern void __dyc_print_comp_56__anonstruct_l_34(struct __anonstruct_l_34 __dyc_thistype ) ;
extern struct lua_State *__dyc_random_ptr__comp_40lua_State(unsigned int __dyc_exp ) ;
extern struct lua_State *__dyc_read_ptr__comp_40lua_State(void) ;
extern void __dyc_print_ptr__comp_40lua_State(struct lua_State  const  *__dyc_thistype ) ;
extern L_Umaxalign __dyc_random_typdef_L_Umaxalign(unsigned int __dyc_exp ) ;
extern L_Umaxalign __dyc_read_typdef_L_Umaxalign(void) ;
extern void __dyc_print_typdef_L_Umaxalign(L_Umaxalign __dyc_thistype ) ;
extern GCheader __dyc_random_typdef_GCheader(unsigned int __dyc_exp ) ;
extern GCheader __dyc_read_typdef_GCheader(void) ;
extern void __dyc_print_typdef_GCheader(GCheader __dyc_thistype ) ;
extern TValue *__dyc_random_ptr__typdef_TValue(unsigned int __dyc_exp ) ;
extern TValue *__dyc_read_ptr__typdef_TValue(void) ;
extern void __dyc_print_ptr__typdef_TValue(TValue const   *__dyc_thistype ) ;
extern UpVal __dyc_random_typdef_UpVal(unsigned int __dyc_exp ) ;
extern UpVal __dyc_read_typdef_UpVal(void) ;
extern void __dyc_print_typdef_UpVal(UpVal __dyc_thistype ) ;
extern lua_State *__dyc_random_ptr__typdef_lua_State(unsigned int __dyc_exp ) ;
extern lua_State *__dyc_read_ptr__typdef_lua_State(void) ;
extern void __dyc_print_ptr__typdef_lua_State(lua_State const   *__dyc_thistype ) ;
extern lua_Debug __dyc_random_typdef_lua_Debug(unsigned int __dyc_exp ) ;
extern lua_Debug __dyc_read_typdef_lua_Debug(void) ;
extern void __dyc_print_typdef_lua_Debug(lua_Debug __dyc_thistype ) ;
extern Instruction *__dyc_random_ptr__typdef_Instruction(unsigned int __dyc_exp ) ;
extern Instruction *__dyc_read_ptr__typdef_Instruction(void) ;
extern void __dyc_print_ptr__typdef_Instruction(Instruction const   *__dyc_thistype ) ;
extern lu_byte __dyc_random_typdef_lu_byte(unsigned int __dyc_exp ) ;
extern lu_byte __dyc_read_typdef_lu_byte(void) ;
extern void __dyc_print_typdef_lu_byte(lu_byte __dyc_thistype ) ;
extern union TString *__dyc_random_ptr__comp_47TString(unsigned int __dyc_exp ) ;
extern union TString *__dyc_read_ptr__comp_47TString(void) ;
extern void __dyc_print_ptr__comp_47TString(union TString  const  *__dyc_thistype ) ;
extern l_uacNumber __dyc_random_typdef_l_uacNumber(unsigned int __dyc_exp ) ;
extern l_uacNumber __dyc_read_typdef_l_uacNumber(void) ;
extern void __dyc_print_typdef_l_uacNumber(l_uacNumber __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern UpVal *__dyc_random_ptr__typdef_UpVal(unsigned int __dyc_exp ) ;
extern UpVal *__dyc_read_ptr__typdef_UpVal(void) ;
extern void __dyc_print_ptr__typdef_UpVal(UpVal const   *__dyc_thistype ) ;
extern lua_Debug *__dyc_random_ptr__typdef_lua_Debug(unsigned int __dyc_exp ) ;
extern lua_Debug *__dyc_read_ptr__typdef_lua_Debug(void) ;
extern void __dyc_print_ptr__typdef_lua_Debug(lua_Debug const   *__dyc_thistype ) ;
extern struct Proto __dyc_random_comp_52Proto(unsigned int __dyc_exp ) ;
extern struct Proto __dyc_read_comp_52Proto(void) ;
extern void __dyc_print_comp_52Proto(struct Proto __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern struct global_State __dyc_random_comp_68global_State(unsigned int __dyc_exp ) ;
extern struct global_State __dyc_read_comp_68global_State(void) ;
extern void __dyc_print_comp_68global_State(struct global_State __dyc_thistype ) ;
extern unsigned short *__dyc_random_ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short *__dyc_read_ptr__short(void) ;
extern void __dyc_print_ptr__short(unsigned short const   *__dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct Node __dyc_random_comp_62Node(unsigned int __dyc_exp ) ;
extern struct Node __dyc_read_comp_62Node(void) ;
extern void __dyc_print_comp_62Node(struct Node __dyc_thistype ) ;
extern union TKey __dyc_random_comp_60TKey(unsigned int __dyc_exp ) ;
extern union TKey __dyc_read_comp_60TKey(void) ;
extern void __dyc_print_comp_60TKey(union TKey __dyc_thistype ) ;
extern struct LocVar __dyc_random_comp_53LocVar(unsigned int __dyc_exp ) ;
extern struct LocVar __dyc_read_comp_53LocVar(void) ;
extern void __dyc_print_comp_53LocVar(struct LocVar __dyc_thistype ) ;
extern union __anonunion_L_Umaxalign_29 __dyc_random_comp_42__anonunion_L_Umaxalign_29(unsigned int __dyc_exp ) ;
extern union __anonunion_L_Umaxalign_29 __dyc_read_comp_42__anonunion_L_Umaxalign_29(void) ;
extern void __dyc_print_comp_42__anonunion_L_Umaxalign_29(union __anonunion_L_Umaxalign_29 __dyc_thistype ) ;
extern struct __anonstruct_uv_32 __dyc_random_comp_50__anonstruct_uv_32(unsigned int __dyc_exp ) ;
extern struct __anonstruct_uv_32 __dyc_read_comp_50__anonstruct_uv_32(void) ;
extern void __dyc_print_comp_50__anonstruct_uv_32(struct __anonstruct_uv_32 __dyc_thistype ) ;
extern Value __dyc_random_typdef_Value(unsigned int __dyc_exp ) ;
extern Value __dyc_read_typdef_Value(void) ;
extern void __dyc_print_typdef_Value(Value __dyc_thistype ) ;
extern struct Table __dyc_random_comp_51Table(unsigned int __dyc_exp ) ;
extern struct Table __dyc_read_comp_51Table(void) ;
extern void __dyc_print_comp_51Table(struct Table __dyc_thistype ) ;
extern GCObject __dyc_random_typdef_GCObject(unsigned int __dyc_exp ) ;
extern GCObject __dyc_read_typdef_GCObject(void) ;
extern void __dyc_print_typdef_GCObject(GCObject __dyc_thistype ) ;
extern struct Node *__dyc_random_ptr__comp_62Node(unsigned int __dyc_exp ) ;
extern struct Node *__dyc_read_ptr__comp_62Node(void) ;
extern void __dyc_print_ptr__comp_62Node(struct Node  const  *__dyc_thistype ) ;
extern union __anonunion_u_33 __dyc_random_comp_55__anonunion_u_33(unsigned int __dyc_exp ) ;
extern union __anonunion_u_33 __dyc_read_comp_55__anonunion_u_33(void) ;
extern void __dyc_print_comp_55__anonunion_u_33(union __anonunion_u_33 __dyc_thistype ) ;
extern Instruction __dyc_random_typdef_Instruction(unsigned int __dyc_exp ) ;
extern Instruction __dyc_read_typdef_Instruction(void) ;
extern void __dyc_print_typdef_Instruction(Instruction __dyc_thistype ) ;
extern struct __anonstruct_nk_35 __dyc_random_comp_61__anonstruct_nk_35(unsigned int __dyc_exp ) ;
extern struct __anonstruct_nk_35 __dyc_read_comp_61__anonstruct_nk_35(void) ;
extern void __dyc_print_comp_61__anonstruct_nk_35(struct __anonstruct_nk_35 __dyc_thistype ) ;
extern global_State __dyc_random_typdef_global_State(unsigned int __dyc_exp ) ;
extern global_State __dyc_read_typdef_global_State(void) ;
extern void __dyc_print_typdef_global_State(global_State __dyc_thistype ) ;
extern Mbuffer __dyc_random_typdef_Mbuffer(unsigned int __dyc_exp ) ;
extern Mbuffer __dyc_read_typdef_Mbuffer(void) ;
extern void __dyc_print_typdef_Mbuffer(Mbuffer __dyc_thistype ) ;
extern struct lua_TValue __dyc_random_comp_46lua_TValue(unsigned int __dyc_exp ) ;
extern struct lua_TValue __dyc_read_comp_46lua_TValue(void) ;
extern void __dyc_print_comp_46lua_TValue(struct lua_TValue __dyc_thistype ) ;
extern union TString __dyc_random_comp_47TString(unsigned int __dyc_exp ) ;
extern union TString __dyc_read_comp_47TString(void) ;
extern void __dyc_print_comp_47TString(union TString __dyc_thistype ) ;
extern GCObject *__dyc_random_ptr__typdef_GCObject(unsigned int __dyc_exp ) ;
extern GCObject *__dyc_read_ptr__typdef_GCObject(void) ;
extern void __dyc_print_ptr__typdef_GCObject(GCObject const   *__dyc_thistype ) ;
extern ptrdiff_t __dyc_random_typdef_ptrdiff_t(unsigned int __dyc_exp ) ;
extern ptrdiff_t __dyc_read_typdef_ptrdiff_t(void) ;
extern void __dyc_print_typdef_ptrdiff_t(ptrdiff_t __dyc_thistype ) ;
extern struct UpVal __dyc_random_comp_54UpVal(unsigned int __dyc_exp ) ;
extern struct UpVal __dyc_read_comp_54UpVal(void) ;
extern void __dyc_print_comp_54UpVal(struct UpVal __dyc_thistype ) ;
extern struct Proto *__dyc_random_ptr__comp_52Proto(unsigned int __dyc_exp ) ;
extern struct Proto *__dyc_read_ptr__comp_52Proto(void) ;
extern void __dyc_print_ptr__comp_52Proto(struct Proto  const  *__dyc_thistype ) ;
extern struct GCheader __dyc_random_comp_44GCheader(unsigned int __dyc_exp ) ;
extern struct GCheader __dyc_read_comp_44GCheader(void) ;
extern void __dyc_print_comp_44GCheader(struct GCheader __dyc_thistype ) ;
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
extern lu_int32 __dyc_random_typdef_lu_int32(unsigned int __dyc_exp ) ;
extern lu_int32 __dyc_read_typdef_lu_int32(void) ;
extern void __dyc_print_typdef_lu_int32(lu_int32 __dyc_thistype ) ;
extern union GCObject __dyc_random_comp_43GCObject(unsigned int __dyc_exp ) ;
extern union GCObject __dyc_read_comp_43GCObject(void) ;
extern void __dyc_print_comp_43GCObject(union GCObject __dyc_thistype ) ;
extern Node __dyc_random_typdef_Node(unsigned int __dyc_exp ) ;
extern Node __dyc_read_typdef_Node(void) ;
extern void __dyc_print_typdef_Node(Node __dyc_thistype ) ;
extern lua_Number *__dyc_random_ptr__typdef_lua_Number(unsigned int __dyc_exp ) ;
extern lua_Number *__dyc_read_ptr__typdef_lua_Number(void) ;
extern void __dyc_print_ptr__typdef_lua_Number(lua_Number const   *__dyc_thistype ) ;
extern TString **__dyc_random_ptr__ptr__typdef_TString(unsigned int __dyc_exp ) ;
extern TString **__dyc_read_ptr__ptr__typdef_TString(void) ;
extern void __dyc_print_ptr__ptr__typdef_TString(TString * const  *__dyc_thistype ) ;
extern struct Table *__dyc_random_ptr__comp_51Table(unsigned int __dyc_exp ) ;
extern struct Table *__dyc_read_ptr__comp_51Table(void) ;
extern void __dyc_print_ptr__comp_51Table(struct Table  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_65lua_longjmp(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_65lua_longjmp(void) ;
extern void __dyc_print_ptr__comp_65lua_longjmp(void const   * const  __dyc_thistype ) ;
extern Node *__dyc_random_ptr__typdef_Node(unsigned int __dyc_exp ) ;
extern Node *__dyc_read_ptr__typdef_Node(void) ;
extern void __dyc_print_ptr__typdef_Node(Node const   *__dyc_thistype ) ;
extern LClosure __dyc_random_typdef_LClosure(unsigned int __dyc_exp ) ;
extern LClosure __dyc_read_typdef_LClosure(void) ;
extern void __dyc_print_typdef_LClosure(LClosure __dyc_thistype ) ;
extern GCObject **__dyc_random_ptr__ptr__typdef_GCObject(unsigned int __dyc_exp ) ;
extern GCObject **__dyc_read_ptr__ptr__typdef_GCObject(void) ;
extern void __dyc_print_ptr__ptr__typdef_GCObject(GCObject * const  *__dyc_thistype ) ;
extern struct UpVal *__dyc_random_ptr__comp_54UpVal(unsigned int __dyc_exp ) ;
extern struct UpVal *__dyc_read_ptr__comp_54UpVal(void) ;
extern void __dyc_print_ptr__comp_54UpVal(struct UpVal  const  *__dyc_thistype ) ;
extern stringtable __dyc_random_typdef_stringtable(unsigned int __dyc_exp ) ;
extern stringtable __dyc_read_typdef_stringtable(void) ;
extern void __dyc_print_typdef_stringtable(stringtable __dyc_thistype ) ;
extern struct Mbuffer __dyc_random_comp_64Mbuffer(unsigned int __dyc_exp ) ;
extern struct Mbuffer __dyc_read_comp_64Mbuffer(void) ;
extern void __dyc_print_comp_64Mbuffer(struct Mbuffer __dyc_thistype ) ;
extern StkId __dyc_random_typdef_StkId(unsigned int __dyc_exp ) ;
extern StkId __dyc_read_typdef_StkId(void) ;
extern void __dyc_print_typdef_StkId(StkId __dyc_thistype ) ;
extern TString __dyc_random_typdef_TString(unsigned int __dyc_exp ) ;
extern TString __dyc_read_typdef_TString(void) ;
extern void __dyc_print_typdef_TString(TString __dyc_thistype ) ;
extern TKey __dyc_random_typdef_TKey(unsigned int __dyc_exp ) ;
extern TKey __dyc_read_typdef_TKey(void) ;
extern void __dyc_print_typdef_TKey(TKey __dyc_thistype ) ;
extern struct CallInfo __dyc_random_comp_67CallInfo(unsigned int __dyc_exp ) ;
extern struct CallInfo __dyc_read_comp_67CallInfo(void) ;
extern void __dyc_print_comp_67CallInfo(struct CallInfo __dyc_thistype ) ;
extern union Udata __dyc_random_comp_49Udata(unsigned int __dyc_exp ) ;
extern union Udata __dyc_read_comp_49Udata(void) ;
extern void __dyc_print_comp_49Udata(union Udata __dyc_thistype ) ;
extern struct lua_State __dyc_random_comp_40lua_State(unsigned int __dyc_exp ) ;
extern struct lua_State __dyc_read_comp_40lua_State(void) ;
extern void __dyc_print_comp_40lua_State(struct lua_State __dyc_thistype ) ;
extern CallInfo __dyc_random_typdef_CallInfo(unsigned int __dyc_exp ) ;
extern CallInfo __dyc_read_typdef_CallInfo(void) ;
extern void __dyc_print_typdef_CallInfo(CallInfo __dyc_thistype ) ;
extern lua_State __dyc_random_typdef_lua_State(unsigned int __dyc_exp ) ;
extern lua_State __dyc_read_typdef_lua_State(void) ;
extern void __dyc_print_typdef_lua_State(lua_State __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  * __restrict  __dyc_thistype ) ;
extern struct __anonstruct_tsv_31 __dyc_random_comp_48__anonstruct_tsv_31(unsigned int __dyc_exp ) ;
extern struct __anonstruct_tsv_31 __dyc_read_comp_48__anonstruct_tsv_31(void) ;
extern void __dyc_print_comp_48__anonstruct_tsv_31(struct __anonstruct_tsv_31 __dyc_thistype ) ;
