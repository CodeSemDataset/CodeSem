#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 198 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef long long int64_t;
#line 147 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef long ptrdiff_t;
#line 50 "lua.h"
struct lua_State;
#line 50 "lua.h"
typedef struct lua_State lua_State;
#line 66 "lua.h"
typedef void *(*lua_Alloc)(void *ud , void *ptr , size_t osize , size_t nsize );
#line 99 "lua.h"
typedef double lua_Number;
#line 103 "lua.h"
typedef ptrdiff_t lua_Integer;
#line 35 "lauxlib.h"
struct luaL_Reg {
   char *name ;
   int (*func)(lua_State *L ) ;
};
#line 93 "lua_cmsgpack.c"
struct mp_buf {
   unsigned char *b ;
   size_t len ;
   size_t free ;
};
#line 93 "lua_cmsgpack.c"
typedef struct mp_buf mp_buf;
#line 148 "lua_cmsgpack.c"
struct mp_cur {
   unsigned char *p ;
   size_t left ;
   int err ;
};
#line 148 "lua_cmsgpack.c"
typedef struct mp_cur mp_cur;
extern lua_Number __dyc_random_typdef_lua_Number(unsigned int __dyc_exp ) ;
extern lua_Number __dyc_read_typdef_lua_Number(void) ;
extern void __dyc_print_typdef_lua_Number(lua_Number __dyc_thistype ) ;
extern struct mp_cur __dyc_random_comp_45mp_cur(unsigned int __dyc_exp ) ;
extern struct mp_cur __dyc_read_comp_45mp_cur(void) ;
extern void __dyc_print_comp_45mp_cur(struct mp_cur __dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern int64_t __dyc_random_typdef_int64_t(unsigned int __dyc_exp ) ;
extern int64_t __dyc_read_typdef_int64_t(void) ;
extern void __dyc_print_typdef_int64_t(int64_t __dyc_thistype ) ;
extern lua_Alloc __dyc_random_typdef_lua_Alloc(unsigned int __dyc_exp ) ;
extern lua_Alloc __dyc_read_typdef_lua_Alloc(void) ;
extern void __dyc_print_typdef_lua_Alloc(lua_Alloc __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_lua_State(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_lua_State(void) ;
extern void __dyc_print_ptr__typdef_lua_State(void const   * const  __dyc_thistype ) ;
extern struct mp_buf __dyc_random_comp_44mp_buf(unsigned int __dyc_exp ) ;
extern struct mp_buf __dyc_read_comp_44mp_buf(void) ;
extern void __dyc_print_comp_44mp_buf(struct mp_buf __dyc_thistype ) ;
extern mp_cur *__dyc_random_ptr__typdef_mp_cur(unsigned int __dyc_exp ) ;
extern mp_cur *__dyc_read_ptr__typdef_mp_cur(void) ;
extern void __dyc_print_ptr__typdef_mp_cur(mp_cur const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern mp_buf *__dyc_random_ptr__typdef_mp_buf(unsigned int __dyc_exp ) ;
extern mp_buf *__dyc_read_ptr__typdef_mp_buf(void) ;
extern void __dyc_print_ptr__typdef_mp_buf(mp_buf const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern lua_Integer __dyc_random_typdef_lua_Integer(unsigned int __dyc_exp ) ;
extern lua_Integer __dyc_read_typdef_lua_Integer(void) ;
extern void __dyc_print_typdef_lua_Integer(lua_Integer __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern ptrdiff_t __dyc_random_typdef_ptrdiff_t(unsigned int __dyc_exp ) ;
extern ptrdiff_t __dyc_read_typdef_ptrdiff_t(void) ;
extern void __dyc_print_typdef_ptrdiff_t(ptrdiff_t __dyc_thistype ) ;
extern size_t *__dyc_random_ptr__typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t *__dyc_read_ptr__typdef_size_t(void) ;
extern void __dyc_print_ptr__typdef_size_t(size_t const   *__dyc_thistype ) ;
extern mp_cur __dyc_random_typdef_mp_cur(unsigned int __dyc_exp ) ;
extern mp_cur __dyc_read_typdef_mp_cur(void) ;
extern void __dyc_print_typdef_mp_cur(mp_cur __dyc_thistype ) ;
extern mp_buf __dyc_random_typdef_mp_buf(unsigned int __dyc_exp ) ;
extern mp_buf __dyc_read_typdef_mp_buf(void) ;
extern void __dyc_print_typdef_mp_buf(mp_buf __dyc_thistype ) ;
extern struct luaL_Reg __dyc_random_comp_42luaL_Reg(unsigned int __dyc_exp ) ;
extern struct luaL_Reg __dyc_read_comp_42luaL_Reg(void) ;
extern void __dyc_print_comp_42luaL_Reg(struct luaL_Reg __dyc_thistype ) ;
extern void **__dyc_random_ptr__ptr__void(unsigned int __dyc_exp ) ;
extern void **__dyc_read_ptr__ptr__void(void) ;
extern void __dyc_print_ptr__ptr__void(void * const  *__dyc_thistype ) ;
