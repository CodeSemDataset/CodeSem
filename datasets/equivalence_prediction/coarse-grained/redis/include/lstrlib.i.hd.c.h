#line 41 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __int32_t;
#line 147 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef long ptrdiff_t;
#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 50 "lua.h"
struct lua_State;
#line 50 "lua.h"
typedef struct lua_State lua_State;
#line 99 "lua.h"
typedef double lua_Number;
#line 103 "lua.h"
typedef ptrdiff_t lua_Integer;
#line 35 "lauxlib.h"
struct luaL_Reg {
   char *name ;
   int (*func)(lua_State *L ) ;
};
#line 35 "lauxlib.h"
typedef struct luaL_Reg luaL_Reg;
#line 129 "lauxlib.h"
struct luaL_Buffer {
   char *p ;
   int lvl ;
   lua_State *L ;
   char buffer[8192] ;
};
#line 129 "lauxlib.h"
typedef struct luaL_Buffer luaL_Buffer;
#line 170 "lstrlib.c"
struct __anonstruct_capture_26 {
   char *init ;
   ptrdiff_t len ;
};
#line 170 "lstrlib.c"
struct MatchState {
   char *src_init ;
   char *src_end ;
   lua_State *L ;
   int level ;
   struct __anonstruct_capture_26 capture[32] ;
};
#line 170 "lstrlib.c"
typedef struct MatchState MatchState;
extern luaL_Reg *__dyc_random_ptr__typdef_luaL_Reg(unsigned int __dyc_exp ) ;
extern luaL_Reg *__dyc_read_ptr__typdef_luaL_Reg(void) ;
extern void __dyc_print_ptr__typdef_luaL_Reg(luaL_Reg const   *__dyc_thistype ) ;
extern unsigned short **__dyc_random_ptr__ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short **__dyc_read_ptr__ptr__short(void) ;
extern void __dyc_print_ptr__ptr__short(unsigned short const   * const  *__dyc_thistype ) ;
extern lua_Number __dyc_random_typdef_lua_Number(unsigned int __dyc_exp ) ;
extern lua_Number __dyc_read_typdef_lua_Number(void) ;
extern void __dyc_print_typdef_lua_Number(lua_Number __dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_lua_State(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_lua_State(void) ;
extern void __dyc_print_ptr__typdef_lua_State(void const   * const  __dyc_thistype ) ;
extern MatchState *__dyc_random_ptr__typdef_MatchState(unsigned int __dyc_exp ) ;
extern MatchState *__dyc_read_ptr__typdef_MatchState(void) ;
extern void __dyc_print_ptr__typdef_MatchState(MatchState const   *__dyc_thistype ) ;
extern struct MatchState __dyc_random_comp_42MatchState(unsigned int __dyc_exp ) ;
extern struct MatchState __dyc_read_comp_42MatchState(void) ;
extern void __dyc_print_comp_42MatchState(struct MatchState __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct luaL_Reg __dyc_random_comp_40luaL_Reg(unsigned int __dyc_exp ) ;
extern struct luaL_Reg __dyc_read_comp_40luaL_Reg(void) ;
extern void __dyc_print_comp_40luaL_Reg(struct luaL_Reg __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern lua_Integer __dyc_random_typdef_lua_Integer(unsigned int __dyc_exp ) ;
extern lua_Integer __dyc_read_typdef_lua_Integer(void) ;
extern void __dyc_print_typdef_lua_Integer(lua_Integer __dyc_thistype ) ;
extern __int32_t **__dyc_random_ptr__ptr__typdef___int32_t(unsigned int __dyc_exp ) ;
extern __int32_t **__dyc_read_ptr__ptr__typdef___int32_t(void) ;
extern void __dyc_print_ptr__ptr__typdef___int32_t(__int32_t const   * const  *__dyc_thistype ) ;
extern unsigned short *__dyc_random_ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short *__dyc_read_ptr__short(void) ;
extern void __dyc_print_ptr__short(unsigned short const   *__dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern luaL_Buffer *__dyc_random_ptr__typdef_luaL_Buffer(unsigned int __dyc_exp ) ;
extern luaL_Buffer *__dyc_read_ptr__typdef_luaL_Buffer(void) ;
extern void __dyc_print_ptr__typdef_luaL_Buffer(luaL_Buffer const   *__dyc_thistype ) ;
extern ptrdiff_t __dyc_random_typdef_ptrdiff_t(unsigned int __dyc_exp ) ;
extern ptrdiff_t __dyc_read_typdef_ptrdiff_t(void) ;
extern void __dyc_print_typdef_ptrdiff_t(ptrdiff_t __dyc_thistype ) ;
extern MatchState __dyc_random_typdef_MatchState(unsigned int __dyc_exp ) ;
extern MatchState __dyc_read_typdef_MatchState(void) ;
extern void __dyc_print_typdef_MatchState(MatchState __dyc_thistype ) ;
extern __int32_t __dyc_random_typdef___int32_t(unsigned int __dyc_exp ) ;
extern __int32_t __dyc_read_typdef___int32_t(void) ;
extern void __dyc_print_typdef___int32_t(__int32_t __dyc_thistype ) ;
extern size_t *__dyc_random_ptr__typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t *__dyc_read_ptr__typdef_size_t(void) ;
extern void __dyc_print_ptr__typdef_size_t(size_t const   *__dyc_thistype ) ;
extern struct luaL_Buffer __dyc_random_comp_41luaL_Buffer(unsigned int __dyc_exp ) ;
extern struct luaL_Buffer __dyc_read_comp_41luaL_Buffer(void) ;
extern void __dyc_print_comp_41luaL_Buffer(struct luaL_Buffer __dyc_thistype ) ;
extern luaL_Buffer __dyc_random_typdef_luaL_Buffer(unsigned int __dyc_exp ) ;
extern luaL_Buffer __dyc_read_typdef_luaL_Buffer(void) ;
extern void __dyc_print_typdef_luaL_Buffer(luaL_Buffer __dyc_thistype ) ;
extern __int32_t *__dyc_random_ptr__typdef___int32_t(unsigned int __dyc_exp ) ;
extern __int32_t *__dyc_read_ptr__typdef___int32_t(void) ;
extern void __dyc_print_ptr__typdef___int32_t(__int32_t const   *__dyc_thistype ) ;
extern struct __anonstruct_capture_26 __dyc_random_comp_43__anonstruct_capture_26(unsigned int __dyc_exp ) ;
extern struct __anonstruct_capture_26 __dyc_read_comp_43__anonstruct_capture_26(void) ;
extern void __dyc_print_comp_43__anonstruct_capture_26(struct __anonstruct_capture_26 __dyc_thistype ) ;
extern luaL_Reg __dyc_random_typdef_luaL_Reg(unsigned int __dyc_exp ) ;
extern luaL_Reg __dyc_read_typdef_luaL_Reg(void) ;
extern void __dyc_print_typdef_luaL_Reg(luaL_Reg __dyc_thistype ) ;
