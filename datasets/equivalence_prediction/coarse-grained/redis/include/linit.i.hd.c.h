#line 50 "lua.h"
struct lua_State;
#line 50 "lua.h"
typedef struct lua_State lua_State;
#line 35 "lauxlib.h"
struct luaL_Reg {
   char *name ;
   int (*func)(lua_State *L ) ;
};
#line 35 "lauxlib.h"
typedef struct luaL_Reg luaL_Reg;
extern luaL_Reg *__dyc_random_ptr__typdef_luaL_Reg(unsigned int __dyc_exp ) ;
extern luaL_Reg *__dyc_read_ptr__typdef_luaL_Reg(void) ;
extern void __dyc_print_ptr__typdef_luaL_Reg(luaL_Reg const   *__dyc_thistype ) ;
extern struct luaL_Reg __dyc_random_comp_12luaL_Reg(unsigned int __dyc_exp ) ;
extern struct luaL_Reg __dyc_read_comp_12luaL_Reg(void) ;
extern void __dyc_print_comp_12luaL_Reg(struct luaL_Reg __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_lua_State(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_lua_State(void) ;
extern void __dyc_print_ptr__typdef_lua_State(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern luaL_Reg __dyc_random_typdef_luaL_Reg(unsigned int __dyc_exp ) ;
extern luaL_Reg __dyc_read_typdef_luaL_Reg(void) ;
extern void __dyc_print_typdef_luaL_Reg(luaL_Reg __dyc_thistype ) ;
