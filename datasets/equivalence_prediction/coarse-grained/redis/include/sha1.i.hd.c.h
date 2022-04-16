#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 52 "/usr/include/stdint.h"
typedef unsigned int uint32_t;
#line 10 "sha1.h"
struct __anonstruct_SHA1_CTX_6 {
   uint32_t state[5] ;
   uint32_t count[2] ;
   unsigned char buffer[64] ;
};
#line 10 "sha1.h"
typedef struct __anonstruct_SHA1_CTX_6 SHA1_CTX;
#line 59 "sha1.c"
union __anonunion_CHAR64LONG16_7 {
   unsigned char c[64] ;
   uint32_t l[16] ;
};
#line 59 "sha1.c"
typedef union __anonunion_CHAR64LONG16_7 CHAR64LONG16;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct __anonstruct_SHA1_CTX_6 __dyc_random_comp_10__anonstruct_SHA1_CTX_6(unsigned int __dyc_exp ) ;
extern struct __anonstruct_SHA1_CTX_6 __dyc_read_comp_10__anonstruct_SHA1_CTX_6(void) ;
extern void __dyc_print_comp_10__anonstruct_SHA1_CTX_6(struct __anonstruct_SHA1_CTX_6 __dyc_thistype ) ;
extern SHA1_CTX __dyc_random_typdef_SHA1_CTX(unsigned int __dyc_exp ) ;
extern SHA1_CTX __dyc_read_typdef_SHA1_CTX(void) ;
extern void __dyc_print_typdef_SHA1_CTX(SHA1_CTX __dyc_thistype ) ;
extern SHA1_CTX *__dyc_random_ptr__typdef_SHA1_CTX(unsigned int __dyc_exp ) ;
extern SHA1_CTX *__dyc_read_ptr__typdef_SHA1_CTX(void) ;
extern void __dyc_print_ptr__typdef_SHA1_CTX(SHA1_CTX const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern unsigned char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern unsigned char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(unsigned char const   *__dyc_thistype ) ;
extern uint32_t __dyc_random_typdef_uint32_t(unsigned int __dyc_exp ) ;
extern uint32_t __dyc_read_typdef_uint32_t(void) ;
extern void __dyc_print_typdef_uint32_t(uint32_t __dyc_thistype ) ;
extern uint32_t *__dyc_random_ptr__typdef_uint32_t(unsigned int __dyc_exp ) ;
extern uint32_t *__dyc_read_ptr__typdef_uint32_t(void) ;
extern void __dyc_print_ptr__typdef_uint32_t(uint32_t const   *__dyc_thistype ) ;
extern union __anonunion_CHAR64LONG16_7 __dyc_random_comp_11__anonunion_CHAR64LONG16_7(unsigned int __dyc_exp ) ;
extern union __anonunion_CHAR64LONG16_7 __dyc_read_comp_11__anonunion_CHAR64LONG16_7(void) ;
extern void __dyc_print_comp_11__anonunion_CHAR64LONG16_7(union __anonunion_CHAR64LONG16_7 __dyc_thistype ) ;
extern CHAR64LONG16 __dyc_random_typdef_CHAR64LONG16(unsigned int __dyc_exp ) ;
extern CHAR64LONG16 __dyc_read_typdef_CHAR64LONG16(void) ;
extern void __dyc_print_typdef_CHAR64LONG16(CHAR64LONG16 __dyc_thistype ) ;
