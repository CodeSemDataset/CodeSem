#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off_t;
#line 142 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off64_t;
#line 40 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
#line 98 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h"
typedef __gnuc_va_list va_list;
#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 45 "/usr/include/stdio.h"
struct _IO_FILE;
#line 45
struct _IO_FILE;
#line 49 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE;
#line 172 "/usr/include/libio.h"
struct _IO_FILE;
#line 182 "/usr/include/libio.h"
typedef void _IO_lock_t;
#line 188 "/usr/include/libio.h"
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
#line 273 "/usr/include/libio.h"
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15UL * sizeof(int ) - 4UL * sizeof(void *)) - sizeof(size_t )] ;
};
#line 343 "/usr/include/libio.h"
typedef struct _IO_FILE _IO_FILE;
#line 147 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef long ptrdiff_t;
#line 50 "lua.h"
struct lua_State;
#line 50 "lua.h"
typedef struct lua_State lua_State;
#line 52 "lua.h"
typedef int (*lua_CFunction)(lua_State *L );
#line 99 "lua.h"
typedef double lua_Number;
#line 103 "lua.h"
typedef ptrdiff_t lua_Integer;
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
#line 522 "lauxlib.c"
struct LoadF {
   int extraline ;
   FILE *f ;
   char buff[8192] ;
};
#line 522 "lauxlib.c"
typedef struct LoadF LoadF;
#line 593 "lauxlib.c"
struct LoadS {
   char *s ;
   size_t size ;
};
#line 593 "lauxlib.c"
typedef struct LoadS LoadS;
extern FILE *__dyc_random_ptr__typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE *__dyc_read_ptr__typdef_FILE(void) ;
extern void __dyc_print_ptr__typdef_FILE(FILE const   *__dyc_thistype ) ;
extern luaL_Reg *__dyc_random_ptr__typdef_luaL_Reg(unsigned int __dyc_exp ) ;
extern luaL_Reg *__dyc_read_ptr__typdef_luaL_Reg(void) ;
extern void __dyc_print_ptr__typdef_luaL_Reg(luaL_Reg const   *__dyc_thistype ) ;
extern _IO_FILE *__dyc_random_ptr__typdef__IO_FILE(unsigned int __dyc_exp ) ;
extern _IO_FILE *__dyc_read_ptr__typdef__IO_FILE(void) ;
extern void __dyc_print_ptr__typdef__IO_FILE(_IO_FILE const   *__dyc_thistype ) ;
extern struct _IO_FILE *__dyc_random_ptr__comp_4_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE *__dyc_read_ptr__comp_4_IO_FILE(void) ;
extern void __dyc_print_ptr__comp_4_IO_FILE(struct _IO_FILE  const  *__dyc_thistype ) ;
extern lua_Number __dyc_random_typdef_lua_Number(unsigned int __dyc_exp ) ;
extern lua_Number __dyc_read_typdef_lua_Number(void) ;
extern void __dyc_print_typdef_lua_Number(lua_Number __dyc_thistype ) ;
extern lua_CFunction __dyc_random_typdef_lua_CFunction(unsigned int __dyc_exp ) ;
extern lua_CFunction __dyc_read_typdef_lua_CFunction(void) ;
extern void __dyc_print_typdef_lua_CFunction(lua_CFunction __dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_lua_State(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_lua_State(void) ;
extern void __dyc_print_ptr__typdef_lua_State(void const   * const  __dyc_thistype ) ;
extern struct lua_Debug __dyc_random_comp_39lua_Debug(unsigned int __dyc_exp ) ;
extern struct lua_Debug __dyc_read_comp_39lua_Debug(void) ;
extern void __dyc_print_comp_39lua_Debug(struct lua_Debug __dyc_thistype ) ;
extern lua_Debug __dyc_random_typdef_lua_Debug(unsigned int __dyc_exp ) ;
extern lua_Debug __dyc_read_typdef_lua_Debug(void) ;
extern void __dyc_print_typdef_lua_Debug(lua_Debug __dyc_thistype ) ;
extern struct _IO_marker __dyc_random_comp_10_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker __dyc_read_comp_10_IO_marker(void) ;
extern void __dyc_print_comp_10_IO_marker(struct _IO_marker __dyc_thistype ) ;
extern __off_t __dyc_random_typdef___off_t(unsigned int __dyc_exp ) ;
extern __off_t __dyc_read_typdef___off_t(void) ;
extern void __dyc_print_typdef___off_t(__off_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct luaL_Reg __dyc_random_comp_40luaL_Reg(unsigned int __dyc_exp ) ;
extern struct luaL_Reg __dyc_read_comp_40luaL_Reg(void) ;
extern void __dyc_print_comp_40luaL_Reg(struct luaL_Reg __dyc_thistype ) ;
extern struct _IO_FILE __dyc_random_comp_4_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE __dyc_read_comp_4_IO_FILE(void) ;
extern void __dyc_print_comp_4_IO_FILE(struct _IO_FILE __dyc_thistype ) ;
extern lua_Debug *__dyc_random_ptr__typdef_lua_Debug(unsigned int __dyc_exp ) ;
extern lua_Debug *__dyc_read_ptr__typdef_lua_Debug(void) ;
extern void __dyc_print_ptr__typdef_lua_Debug(lua_Debug const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern lua_Integer __dyc_random_typdef_lua_Integer(unsigned int __dyc_exp ) ;
extern lua_Integer __dyc_read_typdef_lua_Integer(void) ;
extern void __dyc_print_typdef_lua_Integer(lua_Integer __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern luaL_Buffer *__dyc_random_ptr__typdef_luaL_Buffer(unsigned int __dyc_exp ) ;
extern luaL_Buffer *__dyc_read_ptr__typdef_luaL_Buffer(void) ;
extern void __dyc_print_ptr__typdef_luaL_Buffer(luaL_Buffer const   *__dyc_thistype ) ;
extern LoadF __dyc_random_typdef_LoadF(unsigned int __dyc_exp ) ;
extern LoadF __dyc_read_typdef_LoadF(void) ;
extern void __dyc_print_typdef_LoadF(LoadF __dyc_thistype ) ;
extern ptrdiff_t __dyc_random_typdef_ptrdiff_t(unsigned int __dyc_exp ) ;
extern ptrdiff_t __dyc_read_typdef_ptrdiff_t(void) ;
extern void __dyc_print_typdef_ptrdiff_t(ptrdiff_t __dyc_thistype ) ;
extern struct LoadS __dyc_random_comp_43LoadS(unsigned int __dyc_exp ) ;
extern struct LoadS __dyc_read_comp_43LoadS(void) ;
extern void __dyc_print_comp_43LoadS(struct LoadS __dyc_thistype ) ;
extern LoadS __dyc_random_typdef_LoadS(unsigned int __dyc_exp ) ;
extern LoadS __dyc_read_typdef_LoadS(void) ;
extern void __dyc_print_typdef_LoadS(LoadS __dyc_thistype ) ;
extern size_t *__dyc_random_ptr__typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t *__dyc_read_ptr__typdef_size_t(void) ;
extern void __dyc_print_ptr__typdef_size_t(size_t const   *__dyc_thistype ) ;
extern __off64_t __dyc_random_typdef___off64_t(unsigned int __dyc_exp ) ;
extern __off64_t __dyc_read_typdef___off64_t(void) ;
extern void __dyc_print_typdef___off64_t(__off64_t __dyc_thistype ) ;
extern struct luaL_Buffer __dyc_random_comp_41luaL_Buffer(unsigned int __dyc_exp ) ;
extern struct luaL_Buffer __dyc_read_comp_41luaL_Buffer(void) ;
extern void __dyc_print_comp_41luaL_Buffer(struct luaL_Buffer __dyc_thistype ) ;
extern LoadF *__dyc_random_ptr__typdef_LoadF(unsigned int __dyc_exp ) ;
extern LoadF *__dyc_read_ptr__typdef_LoadF(void) ;
extern void __dyc_print_ptr__typdef_LoadF(LoadF const   *__dyc_thistype ) ;
extern struct _IO_marker *__dyc_random_ptr__comp_10_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker *__dyc_read_ptr__comp_10_IO_marker(void) ;
extern void __dyc_print_ptr__comp_10_IO_marker(struct _IO_marker  const  *__dyc_thistype ) ;
extern luaL_Buffer __dyc_random_typdef_luaL_Buffer(unsigned int __dyc_exp ) ;
extern luaL_Buffer __dyc_read_typdef_luaL_Buffer(void) ;
extern void __dyc_print_typdef_luaL_Buffer(luaL_Buffer __dyc_thistype ) ;
extern LoadS *__dyc_random_ptr__typdef_LoadS(unsigned int __dyc_exp ) ;
extern LoadS *__dyc_read_ptr__typdef_LoadS(void) ;
extern void __dyc_print_ptr__typdef_LoadS(LoadS const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef__IO_lock_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef__IO_lock_t(void) ;
extern void __dyc_print_ptr__typdef__IO_lock_t(void const   * const  __dyc_thistype ) ;
extern struct LoadF __dyc_random_comp_42LoadF(unsigned int __dyc_exp ) ;
extern struct LoadF __dyc_read_comp_42LoadF(void) ;
extern void __dyc_print_comp_42LoadF(struct LoadF __dyc_thistype ) ;
extern FILE __dyc_random_typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE __dyc_read_typdef_FILE(void) ;
extern void __dyc_print_typdef_FILE(FILE __dyc_thistype ) ;
extern luaL_Reg __dyc_random_typdef_luaL_Reg(unsigned int __dyc_exp ) ;
extern luaL_Reg __dyc_read_typdef_luaL_Reg(void) ;
extern void __dyc_print_typdef_luaL_Reg(luaL_Reg __dyc_thistype ) ;
extern _IO_FILE __dyc_random_typdef__IO_FILE(unsigned int __dyc_exp ) ;
extern _IO_FILE __dyc_read_typdef__IO_FILE(void) ;
extern void __dyc_print_typdef__IO_FILE(_IO_FILE __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char const   * const  *__dyc_thistype ) ;
