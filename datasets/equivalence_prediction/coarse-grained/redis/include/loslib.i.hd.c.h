#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 145 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __clock_t;
#line 149 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __time_t;
#line 60 "/usr/include/time.h"
typedef __clock_t clock_t;
#line 76 "/usr/include/time.h"
typedef __time_t time_t;
#line 133 "/usr/include/time.h"
struct tm {
   int tm_sec ;
   int tm_min ;
   int tm_hour ;
   int tm_mday ;
   int tm_mon ;
   int tm_year ;
   int tm_wday ;
   int tm_yday ;
   int tm_isdst ;
   long tm_gmtoff ;
   char *tm_zone ;
};
#line 147 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef long ptrdiff_t;
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
extern time_t __dyc_random_typdef_time_t(unsigned int __dyc_exp ) ;
extern time_t __dyc_read_typdef_time_t(void) ;
extern void __dyc_print_typdef_time_t(time_t __dyc_thistype ) ;
extern struct luaL_Buffer __dyc_random_comp_45luaL_Buffer(unsigned int __dyc_exp ) ;
extern struct luaL_Buffer __dyc_read_comp_45luaL_Buffer(void) ;
extern void __dyc_print_comp_45luaL_Buffer(struct luaL_Buffer __dyc_thistype ) ;
extern luaL_Reg *__dyc_random_ptr__typdef_luaL_Reg(unsigned int __dyc_exp ) ;
extern luaL_Reg *__dyc_read_ptr__typdef_luaL_Reg(void) ;
extern void __dyc_print_ptr__typdef_luaL_Reg(luaL_Reg const   *__dyc_thistype ) ;
extern lua_Number __dyc_random_typdef_lua_Number(unsigned int __dyc_exp ) ;
extern lua_Number __dyc_read_typdef_lua_Number(void) ;
extern void __dyc_print_typdef_lua_Number(lua_Number __dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern __clock_t __dyc_random_typdef___clock_t(unsigned int __dyc_exp ) ;
extern __clock_t __dyc_read_typdef___clock_t(void) ;
extern void __dyc_print_typdef___clock_t(__clock_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_lua_State(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_lua_State(void) ;
extern void __dyc_print_ptr__typdef_lua_State(void const   * const  __dyc_thistype ) ;
extern clock_t __dyc_random_typdef_clock_t(unsigned int __dyc_exp ) ;
extern clock_t __dyc_read_typdef_clock_t(void) ;
extern void __dyc_print_typdef_clock_t(clock_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct luaL_Reg __dyc_random_comp_44luaL_Reg(unsigned int __dyc_exp ) ;
extern struct luaL_Reg __dyc_read_comp_44luaL_Reg(void) ;
extern void __dyc_print_comp_44luaL_Reg(struct luaL_Reg __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern lua_Integer __dyc_random_typdef_lua_Integer(unsigned int __dyc_exp ) ;
extern lua_Integer __dyc_read_typdef_lua_Integer(void) ;
extern void __dyc_print_typdef_lua_Integer(lua_Integer __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern __time_t __dyc_random_typdef___time_t(unsigned int __dyc_exp ) ;
extern __time_t __dyc_read_typdef___time_t(void) ;
extern void __dyc_print_typdef___time_t(__time_t __dyc_thistype ) ;
extern luaL_Buffer *__dyc_random_ptr__typdef_luaL_Buffer(unsigned int __dyc_exp ) ;
extern luaL_Buffer *__dyc_read_ptr__typdef_luaL_Buffer(void) ;
extern void __dyc_print_ptr__typdef_luaL_Buffer(luaL_Buffer const   *__dyc_thistype ) ;
extern struct tm *__dyc_random_ptr__comp_31tm(unsigned int __dyc_exp ) ;
extern struct tm *__dyc_read_ptr__comp_31tm(void) ;
extern void __dyc_print_ptr__comp_31tm(struct tm  const  *__dyc_thistype ) ;
extern ptrdiff_t __dyc_random_typdef_ptrdiff_t(unsigned int __dyc_exp ) ;
extern ptrdiff_t __dyc_read_typdef_ptrdiff_t(void) ;
extern void __dyc_print_typdef_ptrdiff_t(ptrdiff_t __dyc_thistype ) ;
extern time_t *__dyc_random_ptr__typdef_time_t(unsigned int __dyc_exp ) ;
extern time_t *__dyc_read_ptr__typdef_time_t(void) ;
extern void __dyc_print_ptr__typdef_time_t(time_t const   *__dyc_thistype ) ;
extern size_t *__dyc_random_ptr__typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t *__dyc_read_ptr__typdef_size_t(void) ;
extern void __dyc_print_ptr__typdef_size_t(size_t const   *__dyc_thistype ) ;
extern luaL_Buffer __dyc_random_typdef_luaL_Buffer(unsigned int __dyc_exp ) ;
extern luaL_Buffer __dyc_read_typdef_luaL_Buffer(void) ;
extern void __dyc_print_typdef_luaL_Buffer(luaL_Buffer __dyc_thistype ) ;
extern luaL_Reg __dyc_random_typdef_luaL_Reg(unsigned int __dyc_exp ) ;
extern luaL_Reg __dyc_read_typdef_luaL_Reg(void) ;
extern void __dyc_print_typdef_luaL_Reg(luaL_Reg __dyc_thistype ) ;
extern struct tm __dyc_random_comp_31tm(unsigned int __dyc_exp ) ;
extern struct tm __dyc_read_comp_31tm(void) ;
extern void __dyc_print_comp_31tm(struct tm __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char const   * const  *__dyc_thistype ) ;
