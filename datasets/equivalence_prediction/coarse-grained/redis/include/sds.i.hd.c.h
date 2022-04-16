#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 41 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __int32_t;
#line 40 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
#line 98 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h"
typedef __gnuc_va_list va_list;
#line 49 "/usr/include/stdint.h"
typedef unsigned char uint8_t;
#line 50 "/usr/include/stdint.h"
typedef unsigned short uint16_t;
#line 52 "/usr/include/stdint.h"
typedef unsigned int uint32_t;
#line 56 "/usr/include/stdint.h"
typedef unsigned long uint64_t;
#line 42 "sds.h"
typedef char *sds;
#line 46 "sds.h"
struct sdshdr5 {
   unsigned char flags ;
   char buf[] ;
};
#line 50 "sds.h"
struct sdshdr8 {
   uint8_t len ;
   uint8_t alloc ;
   unsigned char flags ;
   char buf[] ;
};
#line 56 "sds.h"
struct sdshdr16 {
   uint16_t len ;
   uint16_t alloc ;
   unsigned char flags ;
   char buf[] ;
};
#line 62 "sds.h"
struct sdshdr32 {
   uint32_t len ;
   uint32_t alloc ;
   unsigned char flags ;
   char buf[] ;
};
#line 68 "sds.h"
struct sdshdr64 {
   uint64_t len ;
   uint64_t alloc ;
   unsigned char flags ;
   char buf[] ;
};
extern struct sdshdr64 __dyc_random_comp_17sdshdr64(unsigned int __dyc_exp ) ;
extern struct sdshdr64 __dyc_read_comp_17sdshdr64(void) ;
extern void __dyc_print_comp_17sdshdr64(struct sdshdr64 __dyc_thistype ) ;
extern unsigned short **__dyc_random_ptr__ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short **__dyc_read_ptr__ptr__short(void) ;
extern void __dyc_print_ptr__ptr__short(unsigned short const   * const  *__dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern sds *__dyc_random_ptr__typdef_sds(unsigned int __dyc_exp ) ;
extern sds *__dyc_read_ptr__typdef_sds(void) ;
extern void __dyc_print_ptr__typdef_sds(sds const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct sdshdr64 *__dyc_random_ptr__comp_17sdshdr64(unsigned int __dyc_exp ) ;
extern struct sdshdr64 *__dyc_read_ptr__comp_17sdshdr64(void) ;
extern void __dyc_print_ptr__comp_17sdshdr64(struct sdshdr64  const  *__dyc_thistype ) ;
extern struct sdshdr8 __dyc_random_comp_14sdshdr8(unsigned int __dyc_exp ) ;
extern struct sdshdr8 __dyc_read_comp_14sdshdr8(void) ;
extern void __dyc_print_comp_14sdshdr8(struct sdshdr8 __dyc_thistype ) ;
extern struct sdshdr5 __dyc_random_comp_13sdshdr5(unsigned int __dyc_exp ) ;
extern struct sdshdr5 __dyc_read_comp_13sdshdr5(void) ;
extern void __dyc_print_comp_13sdshdr5(struct sdshdr5 __dyc_thistype ) ;
extern struct sdshdr32 __dyc_random_comp_16sdshdr32(unsigned int __dyc_exp ) ;
extern struct sdshdr32 __dyc_read_comp_16sdshdr32(void) ;
extern void __dyc_print_comp_16sdshdr32(struct sdshdr32 __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern struct sdshdr32 *__dyc_random_ptr__comp_16sdshdr32(unsigned int __dyc_exp ) ;
extern struct sdshdr32 *__dyc_read_ptr__comp_16sdshdr32(void) ;
extern void __dyc_print_ptr__comp_16sdshdr32(struct sdshdr32  const  *__dyc_thistype ) ;
extern __int32_t **__dyc_random_ptr__ptr__typdef___int32_t(unsigned int __dyc_exp ) ;
extern __int32_t **__dyc_read_ptr__ptr__typdef___int32_t(void) ;
extern void __dyc_print_ptr__ptr__typdef___int32_t(__int32_t const   * const  *__dyc_thistype ) ;
extern unsigned short *__dyc_random_ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short *__dyc_read_ptr__short(void) ;
extern void __dyc_print_ptr__short(unsigned short const   *__dyc_thistype ) ;
extern sds __dyc_random_typdef_sds(unsigned int __dyc_exp ) ;
extern sds __dyc_read_typdef_sds(void) ;
extern void __dyc_print_typdef_sds(sds __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern uint32_t __dyc_random_typdef_uint32_t(unsigned int __dyc_exp ) ;
extern uint32_t __dyc_read_typdef_uint32_t(void) ;
extern void __dyc_print_typdef_uint32_t(uint32_t __dyc_thistype ) ;
extern __int32_t __dyc_random_typdef___int32_t(unsigned int __dyc_exp ) ;
extern __int32_t __dyc_read_typdef___int32_t(void) ;
extern void __dyc_print_typdef___int32_t(__int32_t __dyc_thistype ) ;
extern uint8_t __dyc_random_typdef_uint8_t(unsigned int __dyc_exp ) ;
extern uint8_t __dyc_read_typdef_uint8_t(void) ;
extern void __dyc_print_typdef_uint8_t(uint8_t __dyc_thistype ) ;
extern uint16_t __dyc_random_typdef_uint16_t(unsigned int __dyc_exp ) ;
extern uint16_t __dyc_read_typdef_uint16_t(void) ;
extern void __dyc_print_typdef_uint16_t(uint16_t __dyc_thistype ) ;
extern struct sdshdr16 __dyc_random_comp_15sdshdr16(unsigned int __dyc_exp ) ;
extern struct sdshdr16 __dyc_read_comp_15sdshdr16(void) ;
extern void __dyc_print_comp_15sdshdr16(struct sdshdr16 __dyc_thistype ) ;
extern __int32_t *__dyc_random_ptr__typdef___int32_t(unsigned int __dyc_exp ) ;
extern __int32_t *__dyc_read_ptr__typdef___int32_t(void) ;
extern void __dyc_print_ptr__typdef___int32_t(__int32_t const   *__dyc_thistype ) ;
extern struct sdshdr16 *__dyc_random_ptr__comp_15sdshdr16(unsigned int __dyc_exp ) ;
extern struct sdshdr16 *__dyc_read_ptr__comp_15sdshdr16(void) ;
extern void __dyc_print_ptr__comp_15sdshdr16(struct sdshdr16  const  *__dyc_thistype ) ;
extern struct sdshdr8 *__dyc_random_ptr__comp_14sdshdr8(unsigned int __dyc_exp ) ;
extern struct sdshdr8 *__dyc_read_ptr__comp_14sdshdr8(void) ;
extern void __dyc_print_ptr__comp_14sdshdr8(struct sdshdr8  const  *__dyc_thistype ) ;
extern uint64_t __dyc_random_typdef_uint64_t(unsigned int __dyc_exp ) ;
extern uint64_t __dyc_read_typdef_uint64_t(void) ;
extern void __dyc_print_typdef_uint64_t(uint64_t __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
