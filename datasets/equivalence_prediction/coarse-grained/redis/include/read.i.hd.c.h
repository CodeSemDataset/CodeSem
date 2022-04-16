#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 63 "read.h"
struct redisReadTask {
   int type ;
   int elements ;
   int idx ;
   void *obj ;
   struct redisReadTask *parent ;
   void *privdata ;
};
#line 63 "read.h"
typedef struct redisReadTask redisReadTask;
#line 72 "read.h"
struct redisReplyObjectFunctions {
   void *(*createString)(redisReadTask const   * , char * , size_t  ) ;
   void *(*createArray)(redisReadTask const   * , int  ) ;
   void *(*createInteger)(redisReadTask const   * , long long  ) ;
   void *(*createNil)(redisReadTask const   * ) ;
   void (*freeObject)(void * ) ;
};
#line 72 "read.h"
typedef struct redisReplyObjectFunctions redisReplyObjectFunctions;
#line 80 "read.h"
struct redisReader {
   int err ;
   char errstr[128] ;
   char *buf ;
   size_t pos ;
   size_t len ;
   size_t maxbuf ;
   redisReadTask rstack[9] ;
   int ridx ;
   void *reply ;
   redisReplyObjectFunctions *fn ;
   void *privdata ;
};
#line 80 "read.h"
typedef struct redisReader redisReader;
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
extern struct sdshdr32 *__dyc_random_ptr__comp_42sdshdr32(unsigned int __dyc_exp ) ;
extern struct sdshdr32 *__dyc_read_ptr__comp_42sdshdr32(void) ;
extern void __dyc_print_ptr__comp_42sdshdr32(struct sdshdr32  const  *__dyc_thistype ) ;
extern redisReader __dyc_random_typdef_redisReader(unsigned int __dyc_exp ) ;
extern redisReader __dyc_read_typdef_redisReader(void) ;
extern void __dyc_print_typdef_redisReader(redisReader __dyc_thistype ) ;
extern unsigned short **__dyc_random_ptr__ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short **__dyc_read_ptr__ptr__short(void) ;
extern void __dyc_print_ptr__ptr__short(unsigned short const   * const  *__dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct sdshdr8 __dyc_random_comp_40sdshdr8(unsigned int __dyc_exp ) ;
extern struct sdshdr8 __dyc_read_comp_40sdshdr8(void) ;
extern void __dyc_print_comp_40sdshdr8(struct sdshdr8 __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern unsigned short *__dyc_random_ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short *__dyc_read_ptr__short(void) ;
extern void __dyc_print_ptr__short(unsigned short const   *__dyc_thistype ) ;
extern sds __dyc_random_typdef_sds(unsigned int __dyc_exp ) ;
extern sds __dyc_read_typdef_sds(void) ;
extern void __dyc_print_typdef_sds(sds __dyc_thistype ) ;
extern struct redisReplyObjectFunctions __dyc_random_comp_37redisReplyObjectFunctions(unsigned int __dyc_exp ) ;
extern struct redisReplyObjectFunctions __dyc_read_comp_37redisReplyObjectFunctions(void) ;
extern void __dyc_print_comp_37redisReplyObjectFunctions(struct redisReplyObjectFunctions __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct sdshdr16 __dyc_random_comp_41sdshdr16(unsigned int __dyc_exp ) ;
extern struct sdshdr16 __dyc_read_comp_41sdshdr16(void) ;
extern void __dyc_print_comp_41sdshdr16(struct sdshdr16 __dyc_thistype ) ;
extern struct sdshdr16 *__dyc_random_ptr__comp_41sdshdr16(unsigned int __dyc_exp ) ;
extern struct sdshdr16 *__dyc_read_ptr__comp_41sdshdr16(void) ;
extern void __dyc_print_ptr__comp_41sdshdr16(struct sdshdr16  const  *__dyc_thistype ) ;
extern uint32_t __dyc_random_typdef_uint32_t(unsigned int __dyc_exp ) ;
extern uint32_t __dyc_read_typdef_uint32_t(void) ;
extern void __dyc_print_typdef_uint32_t(uint32_t __dyc_thistype ) ;
extern redisReadTask __dyc_random_typdef_redisReadTask(unsigned int __dyc_exp ) ;
extern redisReadTask __dyc_read_typdef_redisReadTask(void) ;
extern void __dyc_print_typdef_redisReadTask(redisReadTask __dyc_thistype ) ;
extern struct redisReadTask __dyc_random_comp_36redisReadTask(unsigned int __dyc_exp ) ;
extern struct redisReadTask __dyc_read_comp_36redisReadTask(void) ;
extern void __dyc_print_comp_36redisReadTask(struct redisReadTask __dyc_thistype ) ;
extern uint8_t __dyc_random_typdef_uint8_t(unsigned int __dyc_exp ) ;
extern uint8_t __dyc_read_typdef_uint8_t(void) ;
extern void __dyc_print_typdef_uint8_t(uint8_t __dyc_thistype ) ;
extern uint16_t __dyc_random_typdef_uint16_t(unsigned int __dyc_exp ) ;
extern uint16_t __dyc_read_typdef_uint16_t(void) ;
extern void __dyc_print_typdef_uint16_t(uint16_t __dyc_thistype ) ;
extern struct sdshdr64 __dyc_random_comp_43sdshdr64(unsigned int __dyc_exp ) ;
extern struct sdshdr64 __dyc_read_comp_43sdshdr64(void) ;
extern void __dyc_print_comp_43sdshdr64(struct sdshdr64 __dyc_thistype ) ;
extern redisReplyObjectFunctions __dyc_random_typdef_redisReplyObjectFunctions(unsigned int __dyc_exp ) ;
extern redisReplyObjectFunctions __dyc_read_typdef_redisReplyObjectFunctions(void) ;
extern void __dyc_print_typdef_redisReplyObjectFunctions(redisReplyObjectFunctions __dyc_thistype ) ;
extern redisReader *__dyc_random_ptr__typdef_redisReader(unsigned int __dyc_exp ) ;
extern redisReader *__dyc_read_ptr__typdef_redisReader(void) ;
extern void __dyc_print_ptr__typdef_redisReader(redisReader const   *__dyc_thistype ) ;
extern redisReadTask *__dyc_random_ptr__typdef_redisReadTask(unsigned int __dyc_exp ) ;
extern redisReadTask *__dyc_read_ptr__typdef_redisReadTask(void) ;
extern void __dyc_print_ptr__typdef_redisReadTask(redisReadTask const   *__dyc_thistype ) ;
extern struct sdshdr64 *__dyc_random_ptr__comp_43sdshdr64(unsigned int __dyc_exp ) ;
extern struct sdshdr64 *__dyc_read_ptr__comp_43sdshdr64(void) ;
extern void __dyc_print_ptr__comp_43sdshdr64(struct sdshdr64  const  *__dyc_thistype ) ;
extern struct redisReadTask *__dyc_random_ptr__comp_36redisReadTask(unsigned int __dyc_exp ) ;
extern struct redisReadTask *__dyc_read_ptr__comp_36redisReadTask(void) ;
extern void __dyc_print_ptr__comp_36redisReadTask(struct redisReadTask  const  *__dyc_thistype ) ;
extern struct sdshdr8 *__dyc_random_ptr__comp_40sdshdr8(unsigned int __dyc_exp ) ;
extern struct sdshdr8 *__dyc_read_ptr__comp_40sdshdr8(void) ;
extern void __dyc_print_ptr__comp_40sdshdr8(struct sdshdr8  const  *__dyc_thistype ) ;
extern redisReplyObjectFunctions *__dyc_random_ptr__typdef_redisReplyObjectFunctions(unsigned int __dyc_exp ) ;
extern redisReplyObjectFunctions *__dyc_read_ptr__typdef_redisReplyObjectFunctions(void) ;
extern void __dyc_print_ptr__typdef_redisReplyObjectFunctions(redisReplyObjectFunctions const   *__dyc_thistype ) ;
extern struct redisReader __dyc_random_comp_38redisReader(unsigned int __dyc_exp ) ;
extern struct redisReader __dyc_read_comp_38redisReader(void) ;
extern void __dyc_print_comp_38redisReader(struct redisReader __dyc_thistype ) ;
extern void **__dyc_random_ptr__ptr__void(unsigned int __dyc_exp ) ;
extern void **__dyc_read_ptr__ptr__void(void) ;
extern void __dyc_print_ptr__ptr__void(void * const  *__dyc_thistype ) ;
extern uint64_t __dyc_random_typdef_uint64_t(unsigned int __dyc_exp ) ;
extern uint64_t __dyc_read_typdef_uint64_t(void) ;
extern void __dyc_print_typdef_uint64_t(uint64_t __dyc_thistype ) ;
extern struct sdshdr32 __dyc_random_comp_42sdshdr32(unsigned int __dyc_exp ) ;
extern struct sdshdr32 __dyc_read_comp_42sdshdr32(void) ;
extern void __dyc_print_comp_42sdshdr32(struct sdshdr32 __dyc_thistype ) ;
