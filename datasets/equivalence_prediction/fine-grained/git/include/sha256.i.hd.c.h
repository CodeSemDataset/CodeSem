#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h"
typedef unsigned long size_t;
#line 49 "/usr/include/stdint.h"
typedef unsigned char uint8_t;
#line 52 "/usr/include/stdint.h"
typedef unsigned int uint32_t;
#line 56 "/usr/include/stdint.h"
typedef unsigned long uint64_t;
#line 6 "sha256/block/./sha256.h"
struct blk_SHA256_CTX {
   uint32_t state[8] ;
   uint64_t size ;
   uint32_t offset ;
   uint8_t buf[64] ;
};
#line 13 "sha256/block/./sha256.h"
typedef struct blk_SHA256_CTX blk_SHA256_CTX;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern uint8_t *__dyc_random_ptr__typdef_uint8_t(unsigned int __dyc_exp ) ;
extern uint8_t *__dyc_read_ptr__typdef_uint8_t(void) ;
extern void __dyc_print_ptr__typdef_uint8_t(uint8_t const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern unsigned char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern unsigned char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(unsigned char const   *__dyc_thistype ) ;
extern blk_SHA256_CTX __dyc_random_typdef_blk_SHA256_CTX(unsigned int __dyc_exp ) ;
extern blk_SHA256_CTX __dyc_read_typdef_blk_SHA256_CTX(void) ;
extern void __dyc_print_typdef_blk_SHA256_CTX(blk_SHA256_CTX __dyc_thistype ) ;
extern uint32_t __dyc_random_typdef_uint32_t(unsigned int __dyc_exp ) ;
extern uint32_t __dyc_read_typdef_uint32_t(void) ;
extern void __dyc_print_typdef_uint32_t(uint32_t __dyc_thistype ) ;
extern uint8_t __dyc_random_typdef_uint8_t(unsigned int __dyc_exp ) ;
extern uint8_t __dyc_read_typdef_uint8_t(void) ;
extern void __dyc_print_typdef_uint8_t(uint8_t __dyc_thistype ) ;
extern struct blk_SHA256_CTX __dyc_random_comp_405blk_SHA256_CTX(unsigned int __dyc_exp ) ;
extern struct blk_SHA256_CTX __dyc_read_comp_405blk_SHA256_CTX(void) ;
extern void __dyc_print_comp_405blk_SHA256_CTX(struct blk_SHA256_CTX __dyc_thistype ) ;
extern uint64_t __dyc_random_typdef_uint64_t(unsigned int __dyc_exp ) ;
extern uint64_t __dyc_read_typdef_uint64_t(void) ;
extern void __dyc_print_typdef_uint64_t(uint64_t __dyc_thistype ) ;
extern blk_SHA256_CTX *__dyc_random_ptr__typdef_blk_SHA256_CTX(unsigned int __dyc_exp ) ;
extern blk_SHA256_CTX *__dyc_read_ptr__typdef_blk_SHA256_CTX(void) ;
extern void __dyc_print_ptr__typdef_blk_SHA256_CTX(blk_SHA256_CTX const   *__dyc_thistype ) ;
