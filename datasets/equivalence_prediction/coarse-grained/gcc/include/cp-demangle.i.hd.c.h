#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h"
typedef unsigned long size_t;
#line 170 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/demangle.h"
enum gnu_v3_ctor_kinds {
    gnu_v3_complete_object_ctor = 1,
    gnu_v3_base_object_ctor = 2,
    gnu_v3_complete_object_allocating_ctor = 3,
    gnu_v3_unified_ctor = 4,
    gnu_v3_object_ctor_group = 5
} ;
#line 189
enum gnu_v3_dtor_kinds {
    gnu_v3_deleting_dtor = 1,
    gnu_v3_complete_object_dtor = 2,
    gnu_v3_base_object_dtor = 3,
    gnu_v3_unified_dtor = 4,
    gnu_v3_object_dtor_group = 5
} ;
#line 221
enum demangle_component_type {
    DEMANGLE_COMPONENT_NAME = 0,
    DEMANGLE_COMPONENT_QUAL_NAME = 1,
    DEMANGLE_COMPONENT_LOCAL_NAME = 2,
    DEMANGLE_COMPONENT_TYPED_NAME = 3,
    DEMANGLE_COMPONENT_TEMPLATE = 4,
    DEMANGLE_COMPONENT_TEMPLATE_PARAM = 5,
    DEMANGLE_COMPONENT_FUNCTION_PARAM = 6,
    DEMANGLE_COMPONENT_CTOR = 7,
    DEMANGLE_COMPONENT_DTOR = 8,
    DEMANGLE_COMPONENT_VTABLE = 9,
    DEMANGLE_COMPONENT_VTT = 10,
    DEMANGLE_COMPONENT_CONSTRUCTION_VTABLE = 11,
    DEMANGLE_COMPONENT_TYPEINFO = 12,
    DEMANGLE_COMPONENT_TYPEINFO_NAME = 13,
    DEMANGLE_COMPONENT_TYPEINFO_FN = 14,
    DEMANGLE_COMPONENT_THUNK = 15,
    DEMANGLE_COMPONENT_VIRTUAL_THUNK = 16,
    DEMANGLE_COMPONENT_COVARIANT_THUNK = 17,
    DEMANGLE_COMPONENT_JAVA_CLASS = 18,
    DEMANGLE_COMPONENT_GUARD = 19,
    DEMANGLE_COMPONENT_TLS_INIT = 20,
    DEMANGLE_COMPONENT_TLS_WRAPPER = 21,
    DEMANGLE_COMPONENT_REFTEMP = 22,
    DEMANGLE_COMPONENT_HIDDEN_ALIAS = 23,
    DEMANGLE_COMPONENT_SUB_STD = 24,
    DEMANGLE_COMPONENT_RESTRICT = 25,
    DEMANGLE_COMPONENT_VOLATILE = 26,
    DEMANGLE_COMPONENT_CONST = 27,
    DEMANGLE_COMPONENT_RESTRICT_THIS = 28,
    DEMANGLE_COMPONENT_VOLATILE_THIS = 29,
    DEMANGLE_COMPONENT_CONST_THIS = 30,
    DEMANGLE_COMPONENT_REFERENCE_THIS = 31,
    DEMANGLE_COMPONENT_RVALUE_REFERENCE_THIS = 32,
    DEMANGLE_COMPONENT_VENDOR_TYPE_QUAL = 33,
    DEMANGLE_COMPONENT_POINTER = 34,
    DEMANGLE_COMPONENT_REFERENCE = 35,
    DEMANGLE_COMPONENT_RVALUE_REFERENCE = 36,
    DEMANGLE_COMPONENT_COMPLEX = 37,
    DEMANGLE_COMPONENT_IMAGINARY = 38,
    DEMANGLE_COMPONENT_BUILTIN_TYPE = 39,
    DEMANGLE_COMPONENT_VENDOR_TYPE = 40,
    DEMANGLE_COMPONENT_FUNCTION_TYPE = 41,
    DEMANGLE_COMPONENT_ARRAY_TYPE = 42,
    DEMANGLE_COMPONENT_PTRMEM_TYPE = 43,
    DEMANGLE_COMPONENT_FIXED_TYPE = 44,
    DEMANGLE_COMPONENT_VECTOR_TYPE = 45,
    DEMANGLE_COMPONENT_ARGLIST = 46,
    DEMANGLE_COMPONENT_TEMPLATE_ARGLIST = 47,
    DEMANGLE_COMPONENT_TPARM_OBJ = 48,
    DEMANGLE_COMPONENT_INITIALIZER_LIST = 49,
    DEMANGLE_COMPONENT_OPERATOR = 50,
    DEMANGLE_COMPONENT_EXTENDED_OPERATOR = 51,
    DEMANGLE_COMPONENT_CAST = 52,
    DEMANGLE_COMPONENT_CONVERSION = 53,
    DEMANGLE_COMPONENT_NULLARY = 54,
    DEMANGLE_COMPONENT_UNARY = 55,
    DEMANGLE_COMPONENT_BINARY = 56,
    DEMANGLE_COMPONENT_BINARY_ARGS = 57,
    DEMANGLE_COMPONENT_TRINARY = 58,
    DEMANGLE_COMPONENT_TRINARY_ARG1 = 59,
    DEMANGLE_COMPONENT_TRINARY_ARG2 = 60,
    DEMANGLE_COMPONENT_LITERAL = 61,
    DEMANGLE_COMPONENT_LITERAL_NEG = 62,
    DEMANGLE_COMPONENT_JAVA_RESOURCE = 63,
    DEMANGLE_COMPONENT_COMPOUND_NAME = 64,
    DEMANGLE_COMPONENT_CHARACTER = 65,
    DEMANGLE_COMPONENT_NUMBER = 66,
    DEMANGLE_COMPONENT_DECLTYPE = 67,
    DEMANGLE_COMPONENT_GLOBAL_CONSTRUCTORS = 68,
    DEMANGLE_COMPONENT_GLOBAL_DESTRUCTORS = 69,
    DEMANGLE_COMPONENT_LAMBDA = 70,
    DEMANGLE_COMPONENT_DEFAULT_ARG = 71,
    DEMANGLE_COMPONENT_UNNAMED_TYPE = 72,
    DEMANGLE_COMPONENT_TRANSACTION_CLONE = 73,
    DEMANGLE_COMPONENT_NONTRANSACTION_CLONE = 74,
    DEMANGLE_COMPONENT_PACK_EXPANSION = 75,
    DEMANGLE_COMPONENT_TAGGED_NAME = 76,
    DEMANGLE_COMPONENT_TRANSACTION_SAFE = 77,
    DEMANGLE_COMPONENT_CLONE = 78,
    DEMANGLE_COMPONENT_NOEXCEPT = 79,
    DEMANGLE_COMPONENT_THROW_SPEC = 80
} ;
#line 454
struct demangle_operator_info;
#line 454
struct demangle_operator_info;
#line 455
struct demangle_builtin_type_info;
#line 455
struct demangle_builtin_type_info;
#line 462 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/demangle.h"
struct __anonstruct_s_name_27 {
   char *s ;
   int len ;
};
#line 462 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/demangle.h"
struct __anonstruct_s_operator_28 {
   struct demangle_operator_info *op ;
};
#line 462 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/demangle.h"
struct __anonstruct_s_extended_operator_29 {
   int args ;
   struct demangle_component *name ;
};
#line 462 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/demangle.h"
struct __anonstruct_s_fixed_30 {
   struct demangle_component *length ;
   short accum ;
   short sat ;
};
#line 462 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/demangle.h"
struct __anonstruct_s_ctor_31 {
   enum gnu_v3_ctor_kinds kind ;
   struct demangle_component *name ;
};
#line 462 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/demangle.h"
struct __anonstruct_s_dtor_32 {
   enum gnu_v3_dtor_kinds kind ;
   struct demangle_component *name ;
};
#line 462 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/demangle.h"
struct __anonstruct_s_builtin_33 {
   struct demangle_builtin_type_info *type ;
};
#line 462 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/demangle.h"
struct __anonstruct_s_string_34 {
   char *string ;
   int len ;
};
#line 462 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/demangle.h"
struct __anonstruct_s_number_35 {
   long number ;
};
#line 462 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/demangle.h"
struct __anonstruct_s_character_36 {
   int character ;
};
#line 462 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/demangle.h"
struct __anonstruct_s_binary_37 {
   struct demangle_component *left ;
   struct demangle_component *right ;
};
#line 462 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/demangle.h"
struct __anonstruct_s_unary_num_38 {
   struct demangle_component *sub ;
   int num ;
};
#line 462 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/demangle.h"
union __anonunion_u_26 {
   struct __anonstruct_s_name_27 s_name ;
   struct __anonstruct_s_operator_28 s_operator ;
   struct __anonstruct_s_extended_operator_29 s_extended_operator ;
   struct __anonstruct_s_fixed_30 s_fixed ;
   struct __anonstruct_s_ctor_31 s_ctor ;
   struct __anonstruct_s_dtor_32 s_dtor ;
   struct __anonstruct_s_builtin_33 s_builtin ;
   struct __anonstruct_s_string_34 s_string ;
   struct __anonstruct_s_number_35 s_number ;
   struct __anonstruct_s_character_36 s_character ;
   struct __anonstruct_s_binary_37 s_binary ;
   struct __anonstruct_s_unary_num_38 s_unary_num ;
};
#line 462 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/demangle.h"
struct demangle_component {
   enum demangle_component_type type ;
   int d_printing ;
   int d_counting ;
   union __anonunion_u_26 u ;
};
#line 36 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/cp-demangle.h"
struct demangle_operator_info {
   char *code ;
   char *name ;
   int len ;
   int args ;
};
#line 50
enum d_builtin_type_print {
    D_PRINT_DEFAULT = 0,
    D_PRINT_INT = 1,
    D_PRINT_UNSIGNED = 2,
    D_PRINT_LONG = 3,
    D_PRINT_UNSIGNED_LONG = 4,
    D_PRINT_LONG_LONG = 5,
    D_PRINT_UNSIGNED_LONG_LONG = 6,
    D_PRINT_BOOL = 7,
    D_PRINT_FLOAT = 8,
    D_PRINT_VOID = 9
} ;
#line 76 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/cp-demangle.h"
struct demangle_builtin_type_info {
   char *name ;
   int len ;
   char *java_name ;
   int java_len ;
   enum d_builtin_type_print print ;
};
#line 92 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/cp-demangle.h"
struct d_info {
   char *s ;
   char *send ;
   int options ;
   char *n ;
   struct demangle_component *comps ;
   int next_comp ;
   int num_comps ;
   struct demangle_component **subs ;
   int next_sub ;
   int num_subs ;
   struct demangle_component *last_name ;
   int expansion ;
   int is_expression ;
   int is_conversion ;
   unsigned int recursion_level ;
};
#line 223 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/cp-demangle.c"
struct d_standard_sub_info {
   char code ;
   char *simple_expansion ;
   int simple_len ;
   char *full_expansion ;
   int full_len ;
   char *set_last_name ;
   int set_last_name_len ;
};
#line 251 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/cp-demangle.c"
struct d_print_template {
   struct d_print_template *next ;
   struct demangle_component *template_decl ;
};
#line 261 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/cp-demangle.c"
struct d_print_mod {
   struct d_print_mod *next ;
   struct demangle_component *mod ;
   int printed ;
   struct d_print_template *templates ;
};
#line 276 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/cp-demangle.c"
struct d_growable_string {
   char *buf ;
   size_t len ;
   size_t alc ;
   int allocation_failure ;
};
#line 290 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/cp-demangle.c"
struct d_component_stack {
   struct demangle_component *dc ;
   struct d_component_stack *parent ;
};
#line 301 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/cp-demangle.c"
struct d_saved_scope {
   struct demangle_component *container ;
   struct d_print_template *templates ;
};
#line 314 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/cp-demangle.c"
struct d_info_checkpoint {
   char *n ;
   int next_comp ;
   int next_sub ;
   int expansion ;
};
#line 326 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/cp-demangle.c"
struct d_print_info {
   char buf[256] ;
   size_t len ;
   char last_char ;
   void (*callback)(char const   * , size_t  , void * ) ;
   void *opaque ;
   struct d_print_template *templates ;
   struct d_print_mod *modifiers ;
   int demangle_failure ;
   int recursion ;
   int is_lambda_arg ;
   int pack_index ;
   unsigned long flush_count ;
   struct d_component_stack *component_stack ;
   struct d_saved_scope *saved_scopes ;
   int next_saved_scope ;
   int num_saved_scopes ;
   struct d_print_template *copy_templates ;
   int next_copy_template ;
   int num_copy_templates ;
   struct demangle_component *current_template ;
};
#line 6269
enum __anonenum_type_40 {
    DCT_TYPE = 0,
    DCT_MANGLED = 1,
    DCT_GLOBAL_CTORS = 2,
    DCT_GLOBAL_DTORS = 3
} ;
extern struct d_standard_sub_info __dyc_random_comp_61d_standard_sub_info(unsigned int __dyc_exp ) ;
extern struct d_standard_sub_info __dyc_read_comp_61d_standard_sub_info(void) ;
extern void __dyc_print_comp_61d_standard_sub_info(struct d_standard_sub_info __dyc_thistype ) ;
extern struct __anonstruct_s_number_35 __dyc_random_comp_56__anonstruct_s_number_35(unsigned int __dyc_exp ) ;
extern struct __anonstruct_s_number_35 __dyc_read_comp_56__anonstruct_s_number_35(void) ;
extern void __dyc_print_comp_56__anonstruct_s_number_35(struct __anonstruct_s_number_35 __dyc_thistype ) ;
extern struct demangle_component __dyc_random_comp_46demangle_component(unsigned int __dyc_exp ) ;
extern struct demangle_component __dyc_read_comp_46demangle_component(void) ;
extern void __dyc_print_comp_46demangle_component(struct demangle_component __dyc_thistype ) ;
extern struct demangle_operator_info *__dyc_random_ptr__comp_44demangle_operator_info(unsigned int __dyc_exp ) ;
extern struct demangle_operator_info *__dyc_read_ptr__comp_44demangle_operator_info(void) ;
extern void __dyc_print_ptr__comp_44demangle_operator_info(struct demangle_operator_info  const  *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct __anonstruct_s_dtor_32 __dyc_random_comp_53__anonstruct_s_dtor_32(unsigned int __dyc_exp ) ;
extern struct __anonstruct_s_dtor_32 __dyc_read_comp_53__anonstruct_s_dtor_32(void) ;
extern void __dyc_print_comp_53__anonstruct_s_dtor_32(struct __anonstruct_s_dtor_32 __dyc_thistype ) ;
extern struct demangle_builtin_type_info __dyc_random_comp_45demangle_builtin_type_info(unsigned int __dyc_exp ) ;
extern struct demangle_builtin_type_info __dyc_read_comp_45demangle_builtin_type_info(void) ;
extern void __dyc_print_comp_45demangle_builtin_type_info(struct demangle_builtin_type_info __dyc_thistype ) ;
extern struct __anonstruct_s_binary_37 __dyc_random_comp_58__anonstruct_s_binary_37(unsigned int __dyc_exp ) ;
extern struct __anonstruct_s_binary_37 __dyc_read_comp_58__anonstruct_s_binary_37(void) ;
extern void __dyc_print_comp_58__anonstruct_s_binary_37(struct __anonstruct_s_binary_37 __dyc_thistype ) ;
extern struct d_growable_string *__dyc_random_ptr__comp_64d_growable_string(unsigned int __dyc_exp ) ;
extern struct d_growable_string *__dyc_read_ptr__comp_64d_growable_string(void) ;
extern void __dyc_print_ptr__comp_64d_growable_string(struct d_growable_string  const  *__dyc_thistype ) ;
extern struct d_print_mod *__dyc_random_ptr__comp_63d_print_mod(unsigned int __dyc_exp ) ;
extern struct d_print_mod *__dyc_read_ptr__comp_63d_print_mod(void) ;
extern void __dyc_print_ptr__comp_63d_print_mod(struct d_print_mod  const  *__dyc_thistype ) ;
extern struct d_info_checkpoint __dyc_random_comp_67d_info_checkpoint(unsigned int __dyc_exp ) ;
extern struct d_info_checkpoint __dyc_read_comp_67d_info_checkpoint(void) ;
extern void __dyc_print_comp_67d_info_checkpoint(struct d_info_checkpoint __dyc_thistype ) ;
extern struct d_print_template __dyc_random_comp_62d_print_template(unsigned int __dyc_exp ) ;
extern struct d_print_template __dyc_read_comp_62d_print_template(void) ;
extern void __dyc_print_comp_62d_print_template(struct d_print_template __dyc_thistype ) ;
extern struct demangle_component **__dyc_random_ptr__ptr__comp_46demangle_component(unsigned int __dyc_exp ) ;
extern struct demangle_component **__dyc_read_ptr__ptr__comp_46demangle_component(void) ;
extern void __dyc_print_ptr__ptr__comp_46demangle_component(struct demangle_component * const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_s_unary_num_38 __dyc_random_comp_59__anonstruct_s_unary_num_38(unsigned int __dyc_exp ) ;
extern struct __anonstruct_s_unary_num_38 __dyc_read_comp_59__anonstruct_s_unary_num_38(void) ;
extern void __dyc_print_comp_59__anonstruct_s_unary_num_38(struct __anonstruct_s_unary_num_38 __dyc_thistype ) ;
extern struct d_print_template *__dyc_random_ptr__comp_62d_print_template(unsigned int __dyc_exp ) ;
extern struct d_print_template *__dyc_read_ptr__comp_62d_print_template(void) ;
extern void __dyc_print_ptr__comp_62d_print_template(struct d_print_template  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_s_name_27 __dyc_random_comp_48__anonstruct_s_name_27(unsigned int __dyc_exp ) ;
extern struct __anonstruct_s_name_27 __dyc_read_comp_48__anonstruct_s_name_27(void) ;
extern void __dyc_print_comp_48__anonstruct_s_name_27(struct __anonstruct_s_name_27 __dyc_thistype ) ;
extern struct __anonstruct_s_operator_28 __dyc_random_comp_49__anonstruct_s_operator_28(unsigned int __dyc_exp ) ;
extern struct __anonstruct_s_operator_28 __dyc_read_comp_49__anonstruct_s_operator_28(void) ;
extern void __dyc_print_comp_49__anonstruct_s_operator_28(struct __anonstruct_s_operator_28 __dyc_thistype ) ;
extern struct d_info_checkpoint *__dyc_random_ptr__comp_67d_info_checkpoint(unsigned int __dyc_exp ) ;
extern struct d_info_checkpoint *__dyc_read_ptr__comp_67d_info_checkpoint(void) ;
extern void __dyc_print_ptr__comp_67d_info_checkpoint(struct d_info_checkpoint  const  *__dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern enum gnu_v3_dtor_kinds *__dyc_random_ptr__enum_gnu_v3_dtor_kinds(unsigned int __dyc_exp ) ;
extern enum gnu_v3_dtor_kinds *__dyc_read_ptr__enum_gnu_v3_dtor_kinds(void) ;
extern void __dyc_print_ptr__enum_gnu_v3_dtor_kinds(enum gnu_v3_dtor_kinds  const  *__dyc_thistype ) ;
extern struct demangle_operator_info __dyc_random_comp_44demangle_operator_info(unsigned int __dyc_exp ) ;
extern struct demangle_operator_info __dyc_read_comp_44demangle_operator_info(void) ;
extern void __dyc_print_comp_44demangle_operator_info(struct demangle_operator_info __dyc_thistype ) ;
extern struct d_info *__dyc_random_ptr__comp_60d_info(unsigned int __dyc_exp ) ;
extern struct d_info *__dyc_read_ptr__comp_60d_info(void) ;
extern void __dyc_print_ptr__comp_60d_info(struct d_info  const  *__dyc_thistype ) ;
extern struct d_saved_scope __dyc_random_comp_66d_saved_scope(unsigned int __dyc_exp ) ;
extern struct d_saved_scope __dyc_read_comp_66d_saved_scope(void) ;
extern void __dyc_print_comp_66d_saved_scope(struct d_saved_scope __dyc_thistype ) ;
extern struct d_print_mod __dyc_random_comp_63d_print_mod(unsigned int __dyc_exp ) ;
extern struct d_print_mod __dyc_read_comp_63d_print_mod(void) ;
extern void __dyc_print_comp_63d_print_mod(struct d_print_mod __dyc_thistype ) ;
extern struct d_print_template **__dyc_random_ptr__ptr__comp_62d_print_template(unsigned int __dyc_exp ) ;
extern struct d_print_template **__dyc_read_ptr__ptr__comp_62d_print_template(void) ;
extern void __dyc_print_ptr__ptr__comp_62d_print_template(struct d_print_template * const  *__dyc_thistype ) ;
extern enum gnu_v3_ctor_kinds *__dyc_random_ptr__enum_gnu_v3_ctor_kinds(unsigned int __dyc_exp ) ;
extern enum gnu_v3_ctor_kinds *__dyc_read_ptr__enum_gnu_v3_ctor_kinds(void) ;
extern void __dyc_print_ptr__enum_gnu_v3_ctor_kinds(enum gnu_v3_ctor_kinds  const  *__dyc_thistype ) ;
extern struct demangle_component *__dyc_random_ptr__comp_46demangle_component(unsigned int __dyc_exp ) ;
extern struct demangle_component *__dyc_read_ptr__comp_46demangle_component(void) ;
extern void __dyc_print_ptr__comp_46demangle_component(struct demangle_component  const  *__dyc_thistype ) ;
extern size_t *__dyc_random_ptr__typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t *__dyc_read_ptr__typdef_size_t(void) ;
extern void __dyc_print_ptr__typdef_size_t(size_t const   *__dyc_thistype ) ;
extern struct __anonstruct_s_builtin_33 __dyc_random_comp_54__anonstruct_s_builtin_33(unsigned int __dyc_exp ) ;
extern struct __anonstruct_s_builtin_33 __dyc_read_comp_54__anonstruct_s_builtin_33(void) ;
extern void __dyc_print_comp_54__anonstruct_s_builtin_33(struct __anonstruct_s_builtin_33 __dyc_thistype ) ;
extern struct __anonstruct_s_extended_operator_29 __dyc_random_comp_50__anonstruct_s_extended_operator_29(unsigned int __dyc_exp ) ;
extern struct __anonstruct_s_extended_operator_29 __dyc_read_comp_50__anonstruct_s_extended_operator_29(void) ;
extern void __dyc_print_comp_50__anonstruct_s_extended_operator_29(struct __anonstruct_s_extended_operator_29 __dyc_thistype ) ;
extern struct d_standard_sub_info *__dyc_random_ptr__comp_61d_standard_sub_info(unsigned int __dyc_exp ) ;
extern struct d_standard_sub_info *__dyc_read_ptr__comp_61d_standard_sub_info(void) ;
extern void __dyc_print_ptr__comp_61d_standard_sub_info(struct d_standard_sub_info  const  *__dyc_thistype ) ;
extern struct d_saved_scope *__dyc_random_ptr__comp_66d_saved_scope(unsigned int __dyc_exp ) ;
extern struct d_saved_scope *__dyc_read_ptr__comp_66d_saved_scope(void) ;
extern void __dyc_print_ptr__comp_66d_saved_scope(struct d_saved_scope  const  *__dyc_thistype ) ;
extern struct __anonstruct_s_ctor_31 __dyc_random_comp_52__anonstruct_s_ctor_31(unsigned int __dyc_exp ) ;
extern struct __anonstruct_s_ctor_31 __dyc_read_comp_52__anonstruct_s_ctor_31(void) ;
extern void __dyc_print_comp_52__anonstruct_s_ctor_31(struct __anonstruct_s_ctor_31 __dyc_thistype ) ;
extern struct demangle_builtin_type_info *__dyc_random_ptr__comp_45demangle_builtin_type_info(unsigned int __dyc_exp ) ;
extern struct demangle_builtin_type_info *__dyc_read_ptr__comp_45demangle_builtin_type_info(void) ;
extern void __dyc_print_ptr__comp_45demangle_builtin_type_info(struct demangle_builtin_type_info  const  *__dyc_thistype ) ;
extern struct __anonstruct_s_string_34 __dyc_random_comp_55__anonstruct_s_string_34(unsigned int __dyc_exp ) ;
extern struct __anonstruct_s_string_34 __dyc_read_comp_55__anonstruct_s_string_34(void) ;
extern void __dyc_print_comp_55__anonstruct_s_string_34(struct __anonstruct_s_string_34 __dyc_thistype ) ;
extern union __anonunion_u_26 __dyc_random_comp_47__anonunion_u_26(unsigned int __dyc_exp ) ;
extern union __anonunion_u_26 __dyc_read_comp_47__anonunion_u_26(void) ;
extern void __dyc_print_comp_47__anonunion_u_26(union __anonunion_u_26 __dyc_thistype ) ;
extern struct d_component_stack __dyc_random_comp_65d_component_stack(unsigned int __dyc_exp ) ;
extern struct d_component_stack __dyc_read_comp_65d_component_stack(void) ;
extern void __dyc_print_comp_65d_component_stack(struct d_component_stack __dyc_thistype ) ;
extern struct __anonstruct_s_character_36 __dyc_random_comp_57__anonstruct_s_character_36(unsigned int __dyc_exp ) ;
extern struct __anonstruct_s_character_36 __dyc_read_comp_57__anonstruct_s_character_36(void) ;
extern void __dyc_print_comp_57__anonstruct_s_character_36(struct __anonstruct_s_character_36 __dyc_thistype ) ;
extern struct d_print_info __dyc_random_comp_68d_print_info(unsigned int __dyc_exp ) ;
extern struct d_print_info __dyc_read_comp_68d_print_info(void) ;
extern void __dyc_print_comp_68d_print_info(struct d_print_info __dyc_thistype ) ;
extern struct __anonstruct_s_fixed_30 __dyc_random_comp_51__anonstruct_s_fixed_30(unsigned int __dyc_exp ) ;
extern struct __anonstruct_s_fixed_30 __dyc_read_comp_51__anonstruct_s_fixed_30(void) ;
extern void __dyc_print_comp_51__anonstruct_s_fixed_30(struct __anonstruct_s_fixed_30 __dyc_thistype ) ;
extern struct d_print_info *__dyc_random_ptr__comp_68d_print_info(unsigned int __dyc_exp ) ;
extern struct d_print_info *__dyc_read_ptr__comp_68d_print_info(void) ;
extern void __dyc_print_ptr__comp_68d_print_info(struct d_print_info  const  *__dyc_thistype ) ;
extern struct d_info __dyc_random_comp_60d_info(unsigned int __dyc_exp ) ;
extern struct d_info __dyc_read_comp_60d_info(void) ;
extern void __dyc_print_comp_60d_info(struct d_info __dyc_thistype ) ;
extern struct d_component_stack *__dyc_random_ptr__comp_65d_component_stack(unsigned int __dyc_exp ) ;
extern struct d_component_stack *__dyc_read_ptr__comp_65d_component_stack(void) ;
extern void __dyc_print_ptr__comp_65d_component_stack(struct d_component_stack  const  *__dyc_thistype ) ;
extern struct d_growable_string __dyc_random_comp_64d_growable_string(unsigned int __dyc_exp ) ;
extern struct d_growable_string __dyc_read_comp_64d_growable_string(void) ;
extern void __dyc_print_comp_64d_growable_string(struct d_growable_string __dyc_thistype ) ;
