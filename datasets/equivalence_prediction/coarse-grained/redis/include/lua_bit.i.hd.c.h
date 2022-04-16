#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 50 "lua.h"
struct lua_State;
#line 50 "lua.h"
typedef struct lua_State lua_State;
#line 99 "lua.h"
typedef double lua_Number;
#line 35 "lauxlib.h"
struct luaL_Reg {
   char *name ;
   int (*func)(lua_State *L ) ;
};
#line 35 "lauxlib.h"
typedef struct luaL_Reg luaL_Reg;
#line 39 "/usr/include/stdint.h"
typedef int int32_t;
#line 52 "/usr/include/stdint.h"
typedef unsigned int uint32_t;
#line 56 "/usr/include/stdint.h"
typedef unsigned long uint64_t;
#line 44 "lua_bit.c"
typedef int32_t SBits;
#line 45 "lua_bit.c"
typedef uint32_t UBits;
#line 47 "lua_bit.c"
union __anonunion_BitNum_6 {
   lua_Number n ;
   uint64_t b ;
};
#line 47 "lua_bit.c"
typedef union __anonunion_BitNum_6 BitNum;
extern luaL_Reg *__dyc_random_ptr__typdef_luaL_Reg(unsigned int __dyc_exp ) ;
extern luaL_Reg *__dyc_read_ptr__typdef_luaL_Reg(void) ;
extern void __dyc_print_ptr__typdef_luaL_Reg(luaL_Reg const   *__dyc_thistype ) ;
extern lua_Number __dyc_random_typdef_lua_Number(unsigned int __dyc_exp ) ;
extern lua_Number __dyc_read_typdef_lua_Number(void) ;
extern void __dyc_print_typdef_lua_Number(lua_Number __dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct luaL_Reg __dyc_random_comp_12luaL_Reg(unsigned int __dyc_exp ) ;
extern struct luaL_Reg __dyc_read_comp_12luaL_Reg(void) ;
extern void __dyc_print_comp_12luaL_Reg(struct luaL_Reg __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_lua_State(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_lua_State(void) ;
extern void __dyc_print_ptr__typdef_lua_State(void const   * const  __dyc_thistype ) ;
extern union __anonunion_BitNum_6 __dyc_random_comp_14__anonunion_BitNum_6(unsigned int __dyc_exp ) ;
extern union __anonunion_BitNum_6 __dyc_read_comp_14__anonunion_BitNum_6(void) ;
extern void __dyc_print_comp_14__anonunion_BitNum_6(union __anonunion_BitNum_6 __dyc_thistype ) ;
extern BitNum __dyc_random_typdef_BitNum(unsigned int __dyc_exp ) ;
extern BitNum __dyc_read_typdef_BitNum(void) ;
extern void __dyc_print_typdef_BitNum(BitNum __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern SBits __dyc_random_typdef_SBits(unsigned int __dyc_exp ) ;
extern SBits __dyc_read_typdef_SBits(void) ;
extern void __dyc_print_typdef_SBits(SBits __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern uint32_t __dyc_random_typdef_uint32_t(unsigned int __dyc_exp ) ;
extern uint32_t __dyc_read_typdef_uint32_t(void) ;
extern void __dyc_print_typdef_uint32_t(uint32_t __dyc_thistype ) ;
extern UBits __dyc_random_typdef_UBits(unsigned int __dyc_exp ) ;
extern UBits __dyc_read_typdef_UBits(void) ;
extern void __dyc_print_typdef_UBits(UBits __dyc_thistype ) ;
extern int32_t __dyc_random_typdef_int32_t(unsigned int __dyc_exp ) ;
extern int32_t __dyc_read_typdef_int32_t(void) ;
extern void __dyc_print_typdef_int32_t(int32_t __dyc_thistype ) ;
extern luaL_Reg __dyc_random_typdef_luaL_Reg(unsigned int __dyc_exp ) ;
extern luaL_Reg __dyc_read_typdef_luaL_Reg(void) ;
extern void __dyc_print_typdef_luaL_Reg(luaL_Reg __dyc_thistype ) ;
extern uint64_t __dyc_random_typdef_uint64_t(unsigned int __dyc_exp ) ;
extern uint64_t __dyc_read_typdef_uint64_t(void) ;
extern void __dyc_print_typdef_uint64_t(uint64_t __dyc_thistype ) ;
