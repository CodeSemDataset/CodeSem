#line 150 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h"
typedef long ptrdiff_t;
#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h"
typedef unsigned long size_t;
#line 41 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __int32_t;
#line 46 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/xregex2.h"
typedef unsigned long active_reg_t;
#line 53 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/xregex2.h"
typedef unsigned long reg_syntax_t;
#line 290
enum __anonenum_reg_errcode_t_21 {
    REG_ENOSYS = -1,
    REG_NOERROR = 0,
    REG_NOMATCH = 1,
    REG_BADPAT = 2,
    REG_ECOLLATE = 3,
    REG_ECTYPE = 4,
    REG_EESCAPE = 5,
    REG_ESUBREG = 6,
    REG_EBRACK = 7,
    REG_EPAREN = 8,
    REG_EBRACE = 9,
    REG_BADBR = 10,
    REG_ERANGE = 11,
    REG_ESPACE = 12,
    REG_BADRPT = 13,
    REG_EEND = 14,
    REG_ESIZE = 15,
    REG_ERPAREN = 16
} ;
#line 290 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/xregex2.h"
typedef enum __anonenum_reg_errcode_t_21 reg_errcode_t;
#line 330 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/xregex2.h"
struct re_pattern_buffer {
   unsigned char *buffer ;
   unsigned long allocated ;
   unsigned long used ;
   reg_syntax_t syntax ;
   char *fastmap ;
   char *translate ;
   size_t re_nsub ;
   unsigned int can_be_null : 1 ;
   unsigned int regs_allocated : 2 ;
   unsigned int fastmap_accurate : 1 ;
   unsigned int no_sub : 1 ;
   unsigned int not_bol : 1 ;
   unsigned int not_eol : 1 ;
   unsigned int newline_anchor : 1 ;
};
#line 398 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/xregex2.h"
typedef struct re_pattern_buffer regex_t;
#line 401 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/xregex2.h"
typedef int xregoff_t;
#line 406 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/xregex2.h"
struct re_registers {
   unsigned int num_regs ;
   xregoff_t *start ;
   xregoff_t *end ;
};
#line 425 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/xregex2.h"
struct __anonstruct_regmatch_t_22 {
   xregoff_t rm_so ;
   xregoff_t rm_eo ;
};
#line 425 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/xregex2.h"
typedef struct __anonstruct_regmatch_t_22 regmatch_t;
#line 405 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/regex.c"
typedef char boolean;
#line 454
enum __anonenum_re_opcode_t_24 {
    no_op = 0,
    succeed = 1,
    exactn = 2,
    anychar = 3,
    charset = 4,
    charset_not = 5,
    start_memory = 6,
    stop_memory = 7,
    duplicate = 8,
    begline = 9,
    endline = 10,
    begbuf = 11,
    endbuf = 12,
    jump = 13,
    jump_past_alt = 14,
    on_failure_jump = 15,
    on_failure_keep_string_jump = 16,
    pop_failure_jump = 17,
    maybe_pop_jump = 18,
    dummy_failure_jump = 19,
    push_dummy_failure = 20,
    succeed_n = 21,
    jump_n = 22,
    set_number_at = 23,
    wordchar = 24,
    notwordchar = 25,
    wordbeg = 26,
    wordend = 27,
    wordbound = 28,
    notwordbound = 29
} ;
#line 454 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/regex.c"
typedef enum __anonenum_re_opcode_t_24 re_opcode_t;
#line 1466 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/regex.c"
union byte_fail_stack_elt {
   unsigned char *pointer ;
   int integer ;
};
#line 1472 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/regex.c"
typedef union byte_fail_stack_elt byte_fail_stack_elt_t;
#line 1474 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/regex.c"
struct __anonstruct_byte_fail_stack_type_25 {
   byte_fail_stack_elt_t *stack ;
   unsigned int size ;
   unsigned int avail ;
};
#line 1474 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/regex.c"
typedef struct __anonstruct_byte_fail_stack_type_25 byte_fail_stack_type;
#line 1795 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/regex.c"
struct __anonstruct_bits_27 {
   unsigned int match_null_string_p : 2 ;
   unsigned int is_active : 1 ;
   unsigned int matched_something : 1 ;
   unsigned int ever_matched_something : 1 ;
};
#line 1795 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/regex.c"
union __anonunion_byte_register_info_type_26 {
   byte_fail_stack_elt_t word ;
   struct __anonstruct_bits_27 bits ;
};
#line 1795 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/regex.c"
typedef union __anonunion_byte_register_info_type_26 byte_register_info_type;
#line 2108 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/regex.c"
typedef unsigned int regnum_t;
#line 2116 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/regex.c"
typedef long pattern_offset_t;
#line 2118 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/regex.c"
struct __anonstruct_compile_stack_elt_t_28 {
   pattern_offset_t begalt_offset ;
   pattern_offset_t fixup_alt_jump ;
   pattern_offset_t inner_group_offset ;
   pattern_offset_t laststart_offset ;
   regnum_t regnum ;
};
#line 2118 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/regex.c"
typedef struct __anonstruct_compile_stack_elt_t_28 compile_stack_elt_t;
#line 2128 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/regex.c"
struct __anonstruct_compile_stack_type_29 {
   compile_stack_elt_t *stack ;
   unsigned int size ;
   unsigned int avail ;
};
#line 2128 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/regex.c"
typedef struct __anonstruct_compile_stack_type_29 compile_stack_type;
extern struct re_pattern_buffer __dyc_random_comp_30re_pattern_buffer(unsigned int __dyc_exp ) ;
extern struct re_pattern_buffer __dyc_read_comp_30re_pattern_buffer(void) ;
extern void __dyc_print_comp_30re_pattern_buffer(struct re_pattern_buffer __dyc_thistype ) ;
extern unsigned short **__dyc_random_ptr__ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short **__dyc_read_ptr__ptr__short(void) ;
extern void __dyc_print_ptr__ptr__short(unsigned short const   * const  *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct __anonstruct_compile_stack_elt_t_28 __dyc_random_comp_37__anonstruct_compile_stack_elt_t_28(unsigned int __dyc_exp ) ;
extern struct __anonstruct_compile_stack_elt_t_28 __dyc_read_comp_37__anonstruct_compile_stack_elt_t_28(void) ;
extern void __dyc_print_comp_37__anonstruct_compile_stack_elt_t_28(struct __anonstruct_compile_stack_elt_t_28 __dyc_thistype ) ;
extern union __anonunion_byte_register_info_type_26 __dyc_random_comp_35__anonunion_byte_register_info_type_26(unsigned int __dyc_exp ) ;
extern union __anonunion_byte_register_info_type_26 __dyc_read_comp_35__anonunion_byte_register_info_type_26(void) ;
extern void __dyc_print_comp_35__anonunion_byte_register_info_type_26(union __anonunion_byte_register_info_type_26 __dyc_thistype ) ;
extern regex_t *__dyc_random_ptr__typdef_regex_t(unsigned int __dyc_exp ) ;
extern regex_t *__dyc_read_ptr__typdef_regex_t(void) ;
extern void __dyc_print_ptr__typdef_regex_t(regex_t const   * __restrict  __dyc_thistype ) ;
extern byte_register_info_type __dyc_random_typdef_byte_register_info_type(unsigned int __dyc_exp ) ;
extern byte_register_info_type __dyc_read_typdef_byte_register_info_type(void) ;
extern void __dyc_print_typdef_byte_register_info_type(byte_register_info_type __dyc_thistype ) ;
extern struct re_pattern_buffer *__dyc_random_ptr__comp_30re_pattern_buffer(unsigned int __dyc_exp ) ;
extern struct re_pattern_buffer *__dyc_read_ptr__comp_30re_pattern_buffer(void) ;
extern void __dyc_print_ptr__comp_30re_pattern_buffer(struct re_pattern_buffer  const  *__dyc_thistype ) ;
extern struct __anonstruct_compile_stack_type_29 __dyc_random_comp_38__anonstruct_compile_stack_type_29(unsigned int __dyc_exp ) ;
extern struct __anonstruct_compile_stack_type_29 __dyc_read_comp_38__anonstruct_compile_stack_type_29(void) ;
extern void __dyc_print_comp_38__anonstruct_compile_stack_type_29(struct __anonstruct_compile_stack_type_29 __dyc_thistype ) ;
extern reg_syntax_t __dyc_random_typdef_reg_syntax_t(unsigned int __dyc_exp ) ;
extern reg_syntax_t __dyc_read_typdef_reg_syntax_t(void) ;
extern void __dyc_print_typdef_reg_syntax_t(reg_syntax_t __dyc_thistype ) ;
extern regmatch_t __dyc_random_typdef_regmatch_t(unsigned int __dyc_exp ) ;
extern regmatch_t __dyc_read_typdef_regmatch_t(void) ;
extern void __dyc_print_typdef_regmatch_t(regmatch_t __dyc_thistype ) ;
extern byte_fail_stack_type __dyc_random_typdef_byte_fail_stack_type(unsigned int __dyc_exp ) ;
extern byte_fail_stack_type __dyc_read_typdef_byte_fail_stack_type(void) ;
extern void __dyc_print_typdef_byte_fail_stack_type(byte_fail_stack_type __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern byte_fail_stack_elt_t __dyc_random_typdef_byte_fail_stack_elt_t(unsigned int __dyc_exp ) ;
extern byte_fail_stack_elt_t __dyc_read_typdef_byte_fail_stack_elt_t(void) ;
extern void __dyc_print_typdef_byte_fail_stack_elt_t(byte_fail_stack_elt_t __dyc_thistype ) ;
extern __int32_t **__dyc_random_ptr__ptr__typdef___int32_t(unsigned int __dyc_exp ) ;
extern __int32_t **__dyc_read_ptr__ptr__typdef___int32_t(void) ;
extern void __dyc_print_ptr__ptr__typdef___int32_t(__int32_t const   * const  *__dyc_thistype ) ;
extern unsigned short *__dyc_random_ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short *__dyc_read_ptr__short(void) ;
extern void __dyc_print_ptr__short(unsigned short const   *__dyc_thistype ) ;
extern union byte_fail_stack_elt __dyc_random_comp_33byte_fail_stack_elt(unsigned int __dyc_exp ) ;
extern union byte_fail_stack_elt __dyc_read_comp_33byte_fail_stack_elt(void) ;
extern void __dyc_print_comp_33byte_fail_stack_elt(union byte_fail_stack_elt __dyc_thistype ) ;
extern unsigned char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern unsigned char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(unsigned char const   *__dyc_thistype ) ;
extern struct __anonstruct_regmatch_t_22 __dyc_random_comp_32__anonstruct_regmatch_t_22(unsigned int __dyc_exp ) ;
extern struct __anonstruct_regmatch_t_22 __dyc_read_comp_32__anonstruct_regmatch_t_22(void) ;
extern void __dyc_print_comp_32__anonstruct_regmatch_t_22(struct __anonstruct_regmatch_t_22 __dyc_thistype ) ;
extern struct __anonstruct_bits_27 __dyc_random_comp_36__anonstruct_bits_27(unsigned int __dyc_exp ) ;
extern struct __anonstruct_bits_27 __dyc_read_comp_36__anonstruct_bits_27(void) ;
extern void __dyc_print_comp_36__anonstruct_bits_27(struct __anonstruct_bits_27 __dyc_thistype ) ;
extern boolean __dyc_random_typdef_boolean(unsigned int __dyc_exp ) ;
extern boolean __dyc_read_typdef_boolean(void) ;
extern void __dyc_print_typdef_boolean(boolean __dyc_thistype ) ;
extern compile_stack_elt_t *__dyc_random_ptr__typdef_compile_stack_elt_t(unsigned int __dyc_exp ) ;
extern compile_stack_elt_t *__dyc_read_ptr__typdef_compile_stack_elt_t(void) ;
extern void __dyc_print_ptr__typdef_compile_stack_elt_t(compile_stack_elt_t const   *__dyc_thistype ) ;
extern reg_errcode_t __dyc_random_typdef_reg_errcode_t(unsigned int __dyc_exp ) ;
extern reg_errcode_t __dyc_read_typdef_reg_errcode_t(void) ;
extern void __dyc_print_typdef_reg_errcode_t(reg_errcode_t __dyc_thistype ) ;
extern regnum_t __dyc_random_typdef_regnum_t(unsigned int __dyc_exp ) ;
extern regnum_t __dyc_read_typdef_regnum_t(void) ;
extern void __dyc_print_typdef_regnum_t(regnum_t __dyc_thistype ) ;
extern regex_t __dyc_random_typdef_regex_t(unsigned int __dyc_exp ) ;
extern regex_t __dyc_read_typdef_regex_t(void) ;
extern void __dyc_print_typdef_regex_t(regex_t __dyc_thistype ) ;
extern struct re_registers __dyc_random_comp_31re_registers(unsigned int __dyc_exp ) ;
extern struct re_registers __dyc_read_comp_31re_registers(void) ;
extern void __dyc_print_comp_31re_registers(struct re_registers __dyc_thistype ) ;
extern pattern_offset_t __dyc_random_typdef_pattern_offset_t(unsigned int __dyc_exp ) ;
extern pattern_offset_t __dyc_read_typdef_pattern_offset_t(void) ;
extern void __dyc_print_typdef_pattern_offset_t(pattern_offset_t __dyc_thistype ) ;
extern ptrdiff_t __dyc_random_typdef_ptrdiff_t(unsigned int __dyc_exp ) ;
extern ptrdiff_t __dyc_read_typdef_ptrdiff_t(void) ;
extern void __dyc_print_typdef_ptrdiff_t(ptrdiff_t __dyc_thistype ) ;
extern struct __anonstruct_byte_fail_stack_type_25 __dyc_random_comp_34__anonstruct_byte_fail_stack_type_25(unsigned int __dyc_exp ) ;
extern struct __anonstruct_byte_fail_stack_type_25 __dyc_read_comp_34__anonstruct_byte_fail_stack_type_25(void) ;
extern void __dyc_print_comp_34__anonstruct_byte_fail_stack_type_25(struct __anonstruct_byte_fail_stack_type_25 __dyc_thistype ) ;
extern byte_fail_stack_elt_t *__dyc_random_ptr__typdef_byte_fail_stack_elt_t(unsigned int __dyc_exp ) ;
extern byte_fail_stack_elt_t *__dyc_read_ptr__typdef_byte_fail_stack_elt_t(void) ;
extern void __dyc_print_ptr__typdef_byte_fail_stack_elt_t(byte_fail_stack_elt_t const   *__dyc_thistype ) ;
extern struct re_registers *__dyc_random_ptr__comp_31re_registers(unsigned int __dyc_exp ) ;
extern struct re_registers *__dyc_read_ptr__comp_31re_registers(void) ;
extern void __dyc_print_ptr__comp_31re_registers(struct re_registers  const  *__dyc_thistype ) ;
extern re_opcode_t __dyc_random_typdef_re_opcode_t(unsigned int __dyc_exp ) ;
extern re_opcode_t __dyc_read_typdef_re_opcode_t(void) ;
extern void __dyc_print_typdef_re_opcode_t(re_opcode_t __dyc_thistype ) ;
extern __int32_t __dyc_random_typdef___int32_t(unsigned int __dyc_exp ) ;
extern __int32_t __dyc_read_typdef___int32_t(void) ;
extern void __dyc_print_typdef___int32_t(__int32_t __dyc_thistype ) ;
extern compile_stack_type __dyc_random_typdef_compile_stack_type(unsigned int __dyc_exp ) ;
extern compile_stack_type __dyc_read_typdef_compile_stack_type(void) ;
extern void __dyc_print_typdef_compile_stack_type(compile_stack_type __dyc_thistype ) ;
extern xregoff_t __dyc_random_typdef_xregoff_t(unsigned int __dyc_exp ) ;
extern xregoff_t __dyc_read_typdef_xregoff_t(void) ;
extern void __dyc_print_typdef_xregoff_t(xregoff_t __dyc_thistype ) ;
extern compile_stack_elt_t __dyc_random_typdef_compile_stack_elt_t(unsigned int __dyc_exp ) ;
extern compile_stack_elt_t __dyc_read_typdef_compile_stack_elt_t(void) ;
extern void __dyc_print_typdef_compile_stack_elt_t(compile_stack_elt_t __dyc_thistype ) ;
extern __int32_t *__dyc_random_ptr__typdef___int32_t(unsigned int __dyc_exp ) ;
extern __int32_t *__dyc_read_ptr__typdef___int32_t(void) ;
extern void __dyc_print_ptr__typdef___int32_t(__int32_t const   *__dyc_thistype ) ;
extern byte_register_info_type *__dyc_random_ptr__typdef_byte_register_info_type(unsigned int __dyc_exp ) ;
extern byte_register_info_type *__dyc_read_ptr__typdef_byte_register_info_type(void) ;
extern void __dyc_print_ptr__typdef_byte_register_info_type(byte_register_info_type const   *__dyc_thistype ) ;
extern regmatch_t *__dyc_random_ptr__typdef_regmatch_t(unsigned int __dyc_exp ) ;
extern regmatch_t *__dyc_read_ptr__typdef_regmatch_t(void) ;
extern void __dyc_print_ptr__typdef_regmatch_t(regmatch_t const   * __restrict  __dyc_thistype ) ;
extern xregoff_t *__dyc_random_ptr__typdef_xregoff_t(unsigned int __dyc_exp ) ;
extern xregoff_t *__dyc_read_ptr__typdef_xregoff_t(void) ;
extern void __dyc_print_ptr__typdef_xregoff_t(xregoff_t const   *__dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char const   * const  *__dyc_thistype ) ;
extern active_reg_t __dyc_random_typdef_active_reg_t(unsigned int __dyc_exp ) ;
extern active_reg_t __dyc_read_typdef_active_reg_t(void) ;
extern void __dyc_print_typdef_active_reg_t(active_reg_t __dyc_thistype ) ;
