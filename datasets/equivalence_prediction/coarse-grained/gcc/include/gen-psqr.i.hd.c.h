#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h"
typedef unsigned long size_t;
#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off_t;
#line 142 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off64_t;
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
#line 150 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h"
typedef long ptrdiff_t;
#line 56 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/gmp/mini-gmp/mini-gmp.h"
typedef unsigned long mp_limb_t;
#line 57 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/gmp/mini-gmp/mini-gmp.h"
typedef long mp_size_t;
#line 58 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/gmp/mini-gmp/mini-gmp.h"
typedef unsigned long mp_bitcnt_t;
#line 60 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/gmp/mini-gmp/mini-gmp.h"
typedef mp_limb_t *mp_ptr;
#line 61 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/gmp/mini-gmp/mini-gmp.h"
typedef mp_limb_t *mp_srcptr;
#line 63 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/gmp/mini-gmp/mini-gmp.h"
struct __anonstruct___mpz_struct_26 {
   int _mp_alloc ;
   int _mp_size ;
   mp_limb_t *_mp_d ;
};
#line 63 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/gmp/mini-gmp/mini-gmp.h"
typedef struct __anonstruct___mpz_struct_26 __mpz_struct;
#line 73 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/gmp/mini-gmp/mini-gmp.h"
typedef __mpz_struct mpz_t[1];
#line 75 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/gmp/mini-gmp/mini-gmp.h"
typedef __mpz_struct *mpz_ptr;
#line 76 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/gmp/mini-gmp/mini-gmp.h"
typedef __mpz_struct *mpz_srcptr;
#line 785 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/gmp/mini-gmp/mini-gmp.c"
struct gmp_div_inverse {
   unsigned int shift ;
   mp_limb_t d1 ;
   mp_limb_t d0 ;
   mp_limb_t di ;
};
#line 1123 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/gmp/mini-gmp/mini-gmp.c"
struct mpn_base_info {
   unsigned int exp ;
   mp_limb_t bb ;
};
#line 2120
enum mpz_div_round_mode {
    GMP_DIV_FLOOR = 0,
    GMP_DIV_CEIL = 1,
    GMP_DIV_TRUNC = 2
} ;
#line 115 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/gmp/gen-psqr.c"
struct rawfactor_t {
   int divisor ;
   int multiplicity ;
};
#line 123 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/gmp/gen-psqr.c"
struct factor_t {
   int divisor ;
   mpz_t inverse ;
   mpz_t mask ;
   double fraction ;
};
extern FILE *__dyc_random_ptr__typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE *__dyc_read_ptr__typdef_FILE(void) ;
extern void __dyc_print_ptr__typdef_FILE(FILE const   * __restrict  __dyc_thistype ) ;
extern struct rawfactor_t __dyc_random_comp_41rawfactor_t(unsigned int __dyc_exp ) ;
extern struct rawfactor_t __dyc_read_comp_41rawfactor_t(void) ;
extern void __dyc_print_comp_41rawfactor_t(struct rawfactor_t __dyc_thistype ) ;
extern unsigned short **__dyc_random_ptr__ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short **__dyc_read_ptr__ptr__short(void) ;
extern void __dyc_print_ptr__ptr__short(unsigned short const   * const  *__dyc_thistype ) ;
extern mpz_ptr __dyc_random_typdef_mpz_ptr(unsigned int __dyc_exp ) ;
extern mpz_ptr __dyc_read_typdef_mpz_ptr(void) ;
extern void __dyc_print_typdef_mpz_ptr(mpz_ptr __dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct _IO_marker __dyc_random_comp_8_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker __dyc_read_comp_8_IO_marker(void) ;
extern void __dyc_print_comp_8_IO_marker(struct _IO_marker __dyc_thistype ) ;
extern __mpz_struct __dyc_random_typdef___mpz_struct(unsigned int __dyc_exp ) ;
extern __mpz_struct __dyc_read_typdef___mpz_struct(void) ;
extern void __dyc_print_typdef___mpz_struct(__mpz_struct __dyc_thistype ) ;
extern mp_limb_t *__dyc_random_ptr__typdef_mp_limb_t(unsigned int __dyc_exp ) ;
extern mp_limb_t *__dyc_read_ptr__typdef_mp_limb_t(void) ;
extern void __dyc_print_ptr__typdef_mp_limb_t(mp_limb_t const   *__dyc_thistype ) ;
extern mp_ptr __dyc_random_typdef_mp_ptr(unsigned int __dyc_exp ) ;
extern mp_ptr __dyc_read_typdef_mp_ptr(void) ;
extern void __dyc_print_typdef_mp_ptr(mp_ptr __dyc_thistype ) ;
extern __mpz_struct *__dyc_random_ptr__typdef___mpz_struct(unsigned int __dyc_exp ) ;
extern __mpz_struct *__dyc_read_ptr__typdef___mpz_struct(void) ;
extern void __dyc_print_ptr__typdef___mpz_struct(__mpz_struct const   *__dyc_thistype ) ;
extern __off_t __dyc_random_typdef___off_t(unsigned int __dyc_exp ) ;
extern __off_t __dyc_read_typdef___off_t(void) ;
extern void __dyc_print_typdef___off_t(__off_t __dyc_thistype ) ;
extern struct _IO_marker *__dyc_random_ptr__comp_8_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker *__dyc_read_ptr__comp_8_IO_marker(void) ;
extern void __dyc_print_ptr__comp_8_IO_marker(struct _IO_marker  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct___mpz_struct_26 __dyc_random_comp_38__anonstruct___mpz_struct_26(unsigned int __dyc_exp ) ;
extern struct __anonstruct___mpz_struct_26 __dyc_read_comp_38__anonstruct___mpz_struct_26(void) ;
extern void __dyc_print_comp_38__anonstruct___mpz_struct_26(struct __anonstruct___mpz_struct_26 __dyc_thistype ) ;
extern struct factor_t __dyc_random_comp_42factor_t(unsigned int __dyc_exp ) ;
extern struct factor_t __dyc_read_comp_42factor_t(void) ;
extern void __dyc_print_comp_42factor_t(struct factor_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern unsigned short *__dyc_random_ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short *__dyc_read_ptr__short(void) ;
extern void __dyc_print_ptr__short(unsigned short const   *__dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct factor_t *__dyc_random_ptr__comp_42factor_t(unsigned int __dyc_exp ) ;
extern struct factor_t *__dyc_read_ptr__comp_42factor_t(void) ;
extern void __dyc_print_ptr__comp_42factor_t(struct factor_t  const  *__dyc_thistype ) ;
extern struct mpn_base_info __dyc_random_comp_40mpn_base_info(unsigned int __dyc_exp ) ;
extern struct mpn_base_info __dyc_read_comp_40mpn_base_info(void) ;
extern void __dyc_print_comp_40mpn_base_info(struct mpn_base_info __dyc_thistype ) ;
extern mp_bitcnt_t __dyc_random_typdef_mp_bitcnt_t(unsigned int __dyc_exp ) ;
extern mp_bitcnt_t __dyc_read_typdef_mp_bitcnt_t(void) ;
extern void __dyc_print_typdef_mp_bitcnt_t(mp_bitcnt_t __dyc_thistype ) ;
extern struct _IO_FILE *__dyc_random_ptr__comp_2_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE *__dyc_read_ptr__comp_2_IO_FILE(void) ;
extern void __dyc_print_ptr__comp_2_IO_FILE(struct _IO_FILE  const  *__dyc_thistype ) ;
extern mpz_srcptr __dyc_random_typdef_mpz_srcptr(unsigned int __dyc_exp ) ;
extern mpz_srcptr __dyc_read_typdef_mpz_srcptr(void) ;
extern void __dyc_print_typdef_mpz_srcptr(mpz_srcptr __dyc_thistype ) ;
extern ptrdiff_t __dyc_random_typdef_ptrdiff_t(unsigned int __dyc_exp ) ;
extern ptrdiff_t __dyc_read_typdef_ptrdiff_t(void) ;
extern void __dyc_print_typdef_ptrdiff_t(ptrdiff_t __dyc_thistype ) ;
extern mp_srcptr __dyc_random_typdef_mp_srcptr(unsigned int __dyc_exp ) ;
extern mp_srcptr __dyc_read_typdef_mp_srcptr(void) ;
extern void __dyc_print_typdef_mp_srcptr(mp_srcptr __dyc_thistype ) ;
extern struct mpn_base_info *__dyc_random_ptr__comp_40mpn_base_info(unsigned int __dyc_exp ) ;
extern struct mpn_base_info *__dyc_read_ptr__comp_40mpn_base_info(void) ;
extern void __dyc_print_ptr__comp_40mpn_base_info(struct mpn_base_info  const  *__dyc_thistype ) ;
extern size_t *__dyc_random_ptr__typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t *__dyc_read_ptr__typdef_size_t(void) ;
extern void __dyc_print_ptr__typdef_size_t(size_t const   *__dyc_thistype ) ;
extern __off64_t __dyc_random_typdef___off64_t(unsigned int __dyc_exp ) ;
extern __off64_t __dyc_read_typdef___off64_t(void) ;
extern void __dyc_print_typdef___off64_t(__off64_t __dyc_thistype ) ;
extern struct gmp_div_inverse *__dyc_random_ptr__comp_39gmp_div_inverse(unsigned int __dyc_exp ) ;
extern struct gmp_div_inverse *__dyc_read_ptr__comp_39gmp_div_inverse(void) ;
extern void __dyc_print_ptr__comp_39gmp_div_inverse(struct gmp_div_inverse  const  *__dyc_thistype ) ;
extern mp_size_t __dyc_random_typdef_mp_size_t(unsigned int __dyc_exp ) ;
extern mp_size_t __dyc_read_typdef_mp_size_t(void) ;
extern void __dyc_print_typdef_mp_size_t(mp_size_t __dyc_thistype ) ;
extern struct rawfactor_t *__dyc_random_ptr__comp_41rawfactor_t(unsigned int __dyc_exp ) ;
extern struct rawfactor_t *__dyc_read_ptr__comp_41rawfactor_t(void) ;
extern void __dyc_print_ptr__comp_41rawfactor_t(struct rawfactor_t  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_mpz_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_mpz_t(void) ;
extern void __dyc_print_ptr__typdef_mpz_t(void const   * const  __dyc_thistype ) ;
extern struct _IO_FILE __dyc_random_comp_2_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE __dyc_read_comp_2_IO_FILE(void) ;
extern void __dyc_print_comp_2_IO_FILE(struct _IO_FILE __dyc_thistype ) ;
extern void *(**__dyc_random_ptr__ptr__fun_name_is_not_here(unsigned int __dyc_exp ))(size_t  ) ;
extern void *(**__dyc_read_ptr__ptr__fun_name_is_not_here(void))(size_t  ) ;
extern void __dyc_print_ptr__ptr__fun_name_is_not_here(void *(* const  *__dyc_thistype)(size_t  ) ) ;
extern void *__dyc_random_ptr__typdef__IO_lock_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef__IO_lock_t(void) ;
extern void __dyc_print_ptr__typdef__IO_lock_t(void const   * const  __dyc_thistype ) ;
extern FILE __dyc_random_typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE __dyc_read_typdef_FILE(void) ;
extern void __dyc_print_typdef_FILE(FILE __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
extern mp_limb_t __dyc_random_typdef_mp_limb_t(unsigned int __dyc_exp ) ;
extern mp_limb_t __dyc_read_typdef_mp_limb_t(void) ;
extern void __dyc_print_typdef_mp_limb_t(mp_limb_t __dyc_thistype ) ;
extern struct gmp_div_inverse __dyc_random_comp_39gmp_div_inverse(unsigned int __dyc_exp ) ;
extern struct gmp_div_inverse __dyc_read_comp_39gmp_div_inverse(void) ;
extern void __dyc_print_comp_39gmp_div_inverse(struct gmp_div_inverse __dyc_thistype ) ;
