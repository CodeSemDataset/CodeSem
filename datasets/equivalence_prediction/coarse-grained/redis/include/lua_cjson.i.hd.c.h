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
#line 103 "lua.h"
typedef ptrdiff_t lua_Integer;
#line 35 "lauxlib.h"
struct luaL_Reg {
   char *name ;
   int (*func)(lua_State *L ) ;
};
#line 35 "lauxlib.h"
typedef struct luaL_Reg luaL_Reg;
#line 34 "strbuf.h"
struct __anonstruct_strbuf_t_28 {
   char *buf ;
   int size ;
   int length ;
   int increment ;
   int dynamic ;
   int reallocs ;
   int debug ;
};
#line 34 "strbuf.h"
typedef struct __anonstruct_strbuf_t_28 strbuf_t;
#line 79 "lua_cjson.c"
enum __anonenum_json_token_type_t_29 {
    T_OBJ_BEGIN = 0,
    T_OBJ_END = 1,
    T_ARR_BEGIN = 2,
    T_ARR_END = 3,
    T_STRING = 4,
    T_NUMBER = 5,
    T_BOOLEAN = 6,
    T_NULL = 7,
    T_COLON = 8,
    T_COMMA = 9,
    T_END = 10,
    T_WHITESPACE = 11,
    T_ERROR = 12,
    T_UNKNOWN = 13
} ;
#line 79 "lua_cjson.c"
typedef enum __anonenum_json_token_type_t_29 json_token_type_t;
#line 114 "lua_cjson.c"
struct __anonstruct_json_config_t_30 {
   json_token_type_t ch2token[256] ;
   char escape2char[256] ;
   strbuf_t encode_buf ;
   int encode_sparse_convert ;
   int encode_sparse_ratio ;
   int encode_sparse_safe ;
   int encode_max_depth ;
   int encode_invalid_numbers ;
   int encode_number_precision ;
   int encode_keep_buffer ;
   int decode_invalid_numbers ;
   int decode_max_depth ;
};
#line 114 "lua_cjson.c"
typedef struct __anonstruct_json_config_t_30 json_config_t;
#line 134 "lua_cjson.c"
struct __anonstruct_json_parse_t_31 {
   char *data ;
   char *ptr ;
   strbuf_t *tmp ;
   json_config_t *cfg ;
   int current_depth ;
};
#line 134 "lua_cjson.c"
typedef struct __anonstruct_json_parse_t_31 json_parse_t;
#line 142 "lua_cjson.c"
union __anonunion_value_33 {
   char *string ;
   double number ;
   int boolean ;
};
#line 142 "lua_cjson.c"
struct __anonstruct_json_token_t_32 {
   json_token_type_t type ;
   int index ;
   union __anonunion_value_33 value ;
   int string_len ;
};
#line 142 "lua_cjson.c"
typedef struct __anonstruct_json_token_t_32 json_token_t;
extern luaL_Reg *__dyc_random_ptr__typdef_luaL_Reg(unsigned int __dyc_exp ) ;
extern luaL_Reg *__dyc_read_ptr__typdef_luaL_Reg(void) ;
extern void __dyc_print_ptr__typdef_luaL_Reg(luaL_Reg const   *__dyc_thistype ) ;
extern struct __anonstruct_json_parse_t_31 __dyc_random_comp_46__anonstruct_json_parse_t_31(unsigned int __dyc_exp ) ;
extern struct __anonstruct_json_parse_t_31 __dyc_read_comp_46__anonstruct_json_parse_t_31(void) ;
extern void __dyc_print_comp_46__anonstruct_json_parse_t_31(struct __anonstruct_json_parse_t_31 __dyc_thistype ) ;
extern strbuf_t __dyc_random_typdef_strbuf_t(unsigned int __dyc_exp ) ;
extern strbuf_t __dyc_read_typdef_strbuf_t(void) ;
extern void __dyc_print_typdef_strbuf_t(strbuf_t __dyc_thistype ) ;
extern lua_Number __dyc_random_typdef_lua_Number(unsigned int __dyc_exp ) ;
extern lua_Number __dyc_read_typdef_lua_Number(void) ;
extern void __dyc_print_typdef_lua_Number(lua_Number __dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern strbuf_t *__dyc_random_ptr__typdef_strbuf_t(unsigned int __dyc_exp ) ;
extern strbuf_t *__dyc_read_ptr__typdef_strbuf_t(void) ;
extern void __dyc_print_ptr__typdef_strbuf_t(strbuf_t const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_lua_State(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_lua_State(void) ;
extern void __dyc_print_ptr__typdef_lua_State(void const   * const  __dyc_thistype ) ;
extern struct luaL_Reg __dyc_random_comp_16luaL_Reg(unsigned int __dyc_exp ) ;
extern struct luaL_Reg __dyc_read_comp_16luaL_Reg(void) ;
extern void __dyc_print_comp_16luaL_Reg(struct luaL_Reg __dyc_thistype ) ;
extern json_token_t __dyc_random_typdef_json_token_t(unsigned int __dyc_exp ) ;
extern json_token_t __dyc_read_typdef_json_token_t(void) ;
extern void __dyc_print_typdef_json_token_t(json_token_t __dyc_thistype ) ;
extern json_token_t *__dyc_random_ptr__typdef_json_token_t(unsigned int __dyc_exp ) ;
extern json_token_t *__dyc_read_ptr__typdef_json_token_t(void) ;
extern void __dyc_print_ptr__typdef_json_token_t(json_token_t const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_json_config_t_30 __dyc_random_comp_45__anonstruct_json_config_t_30(unsigned int __dyc_exp ) ;
extern struct __anonstruct_json_config_t_30 __dyc_read_comp_45__anonstruct_json_config_t_30(void) ;
extern void __dyc_print_comp_45__anonstruct_json_config_t_30(struct __anonstruct_json_config_t_30 __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern lua_Integer __dyc_random_typdef_lua_Integer(unsigned int __dyc_exp ) ;
extern lua_Integer __dyc_read_typdef_lua_Integer(void) ;
extern void __dyc_print_typdef_lua_Integer(lua_Integer __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern json_config_t __dyc_random_typdef_json_config_t(unsigned int __dyc_exp ) ;
extern json_config_t __dyc_read_typdef_json_config_t(void) ;
extern void __dyc_print_typdef_json_config_t(json_config_t __dyc_thistype ) ;
extern ptrdiff_t __dyc_random_typdef_ptrdiff_t(unsigned int __dyc_exp ) ;
extern ptrdiff_t __dyc_read_typdef_ptrdiff_t(void) ;
extern void __dyc_print_typdef_ptrdiff_t(ptrdiff_t __dyc_thistype ) ;
extern struct __anonstruct_strbuf_t_28 __dyc_random_comp_44__anonstruct_strbuf_t_28(unsigned int __dyc_exp ) ;
extern struct __anonstruct_strbuf_t_28 __dyc_read_comp_44__anonstruct_strbuf_t_28(void) ;
extern void __dyc_print_comp_44__anonstruct_strbuf_t_28(struct __anonstruct_strbuf_t_28 __dyc_thistype ) ;
extern json_token_type_t __dyc_random_typdef_json_token_type_t(unsigned int __dyc_exp ) ;
extern json_token_type_t __dyc_read_typdef_json_token_type_t(void) ;
extern void __dyc_print_typdef_json_token_type_t(json_token_type_t __dyc_thistype ) ;
extern size_t *__dyc_random_ptr__typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t *__dyc_read_ptr__typdef_size_t(void) ;
extern void __dyc_print_ptr__typdef_size_t(size_t const   *__dyc_thistype ) ;
extern json_config_t *__dyc_random_ptr__typdef_json_config_t(unsigned int __dyc_exp ) ;
extern json_config_t *__dyc_read_ptr__typdef_json_config_t(void) ;
extern void __dyc_print_ptr__typdef_json_config_t(json_config_t const   *__dyc_thistype ) ;
extern union __anonunion_value_33 __dyc_random_comp_48__anonunion_value_33(unsigned int __dyc_exp ) ;
extern union __anonunion_value_33 __dyc_read_comp_48__anonunion_value_33(void) ;
extern void __dyc_print_comp_48__anonunion_value_33(union __anonunion_value_33 __dyc_thistype ) ;
extern json_token_type_t *__dyc_random_ptr__typdef_json_token_type_t(unsigned int __dyc_exp ) ;
extern json_token_type_t *__dyc_read_ptr__typdef_json_token_type_t(void) ;
extern void __dyc_print_ptr__typdef_json_token_type_t(json_token_type_t const   *__dyc_thistype ) ;
extern json_parse_t __dyc_random_typdef_json_parse_t(unsigned int __dyc_exp ) ;
extern json_parse_t __dyc_read_typdef_json_parse_t(void) ;
extern void __dyc_print_typdef_json_parse_t(json_parse_t __dyc_thistype ) ;
extern struct __anonstruct_json_token_t_32 __dyc_random_comp_47__anonstruct_json_token_t_32(unsigned int __dyc_exp ) ;
extern struct __anonstruct_json_token_t_32 __dyc_read_comp_47__anonstruct_json_token_t_32(void) ;
extern void __dyc_print_comp_47__anonstruct_json_token_t_32(struct __anonstruct_json_token_t_32 __dyc_thistype ) ;
extern json_parse_t *__dyc_random_ptr__typdef_json_parse_t(unsigned int __dyc_exp ) ;
extern json_parse_t *__dyc_read_ptr__typdef_json_parse_t(void) ;
extern void __dyc_print_ptr__typdef_json_parse_t(json_parse_t const   *__dyc_thistype ) ;
extern luaL_Reg __dyc_random_typdef_luaL_Reg(unsigned int __dyc_exp ) ;
extern luaL_Reg __dyc_read_typdef_luaL_Reg(void) ;
extern void __dyc_print_typdef_luaL_Reg(luaL_Reg __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char const   * const  *__dyc_thistype ) ;
