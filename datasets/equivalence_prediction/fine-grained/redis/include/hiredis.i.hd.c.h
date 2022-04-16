#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 149 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __time_t;
#line 151 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __suseconds_t;
#line 180 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __ssize_t;
#line 110 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __ssize_t ssize_t;
#line 31 "/usr/include/x86_64-linux-gnu/bits/time.h"
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
#line 40 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
#line 80 "/usr/include/stdio.h"
typedef __gnuc_va_list va_list;
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
#line 112 "hiredis.h"
struct redisReply {
   int type ;
   long long integer ;
   size_t len ;
   char *str ;
   size_t elements ;
   struct redisReply **element ;
};
#line 112 "hiredis.h"
typedef struct redisReply redisReply;
#line 134
enum redisConnectionType {
    REDIS_CONN_TCP = 0,
    REDIS_CONN_UNIX = 1
} ;
#line 140 "hiredis.h"
struct __anonstruct_tcp_29 {
   char *host ;
   char *source_addr ;
   int port ;
};
#line 140 "hiredis.h"
struct __anonstruct_unix_sock_30 {
   char *path ;
};
#line 140 "hiredis.h"
struct redisContext {
   int err ;
   char errstr[128] ;
   int fd ;
   int flags ;
   char *obuf ;
   redisReader *reader ;
   enum redisConnectionType connection_type ;
   struct timeval *timeout ;
   struct __anonstruct_tcp_29 tcp ;
   struct __anonstruct_unix_sock_30 unix_sock ;
};
#line 140 "hiredis.h"
typedef struct redisContext redisContext;
extern struct sdshdr16 *__dyc_random_ptr__comp_43sdshdr16(unsigned int __dyc_exp ) ;
extern struct sdshdr16 *__dyc_read_ptr__comp_43sdshdr16(void) ;
extern void __dyc_print_ptr__comp_43sdshdr16(struct sdshdr16  const  *__dyc_thistype ) ;
extern struct redisContext __dyc_random_comp_47redisContext(unsigned int __dyc_exp ) ;
extern struct redisContext __dyc_read_comp_47redisContext(void) ;
extern void __dyc_print_comp_47redisContext(struct redisContext __dyc_thistype ) ;
extern redisReader __dyc_random_typdef_redisReader(unsigned int __dyc_exp ) ;
extern redisReader __dyc_read_typdef_redisReader(void) ;
extern void __dyc_print_typdef_redisReader(redisReader __dyc_thistype ) ;
extern struct sdshdr8 __dyc_random_comp_42sdshdr8(unsigned int __dyc_exp ) ;
extern struct sdshdr8 __dyc_read_comp_42sdshdr8(void) ;
extern void __dyc_print_comp_42sdshdr8(struct sdshdr8 __dyc_thistype ) ;
extern unsigned short **__dyc_random_ptr__ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short **__dyc_read_ptr__ptr__short(void) ;
extern void __dyc_print_ptr__ptr__short(unsigned short const   * const  *__dyc_thistype ) ;
extern sds *__dyc_random_ptr__typdef_sds(unsigned int __dyc_exp ) ;
extern sds *__dyc_read_ptr__typdef_sds(void) ;
extern void __dyc_print_ptr__typdef_sds(sds const   *__dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern redisContext __dyc_random_typdef_redisContext(unsigned int __dyc_exp ) ;
extern redisContext __dyc_read_typdef_redisContext(void) ;
extern void __dyc_print_typdef_redisContext(redisContext __dyc_thistype ) ;
extern redisContext *__dyc_random_ptr__typdef_redisContext(unsigned int __dyc_exp ) ;
extern redisContext *__dyc_read_ptr__typdef_redisContext(void) ;
extern void __dyc_print_ptr__typdef_redisContext(redisContext const   *__dyc_thistype ) ;
extern struct sdshdr64 __dyc_random_comp_45sdshdr64(unsigned int __dyc_exp ) ;
extern struct sdshdr64 __dyc_read_comp_45sdshdr64(void) ;
extern void __dyc_print_comp_45sdshdr64(struct sdshdr64 __dyc_thistype ) ;
extern struct __anonstruct_tcp_29 __dyc_random_comp_48__anonstruct_tcp_29(unsigned int __dyc_exp ) ;
extern struct __anonstruct_tcp_29 __dyc_read_comp_48__anonstruct_tcp_29(void) ;
extern void __dyc_print_comp_48__anonstruct_tcp_29(struct __anonstruct_tcp_29 __dyc_thistype ) ;
extern struct redisReply __dyc_random_comp_46redisReply(unsigned int __dyc_exp ) ;
extern struct redisReply __dyc_read_comp_46redisReply(void) ;
extern void __dyc_print_comp_46redisReply(struct redisReply __dyc_thistype ) ;
extern struct sdshdr64 *__dyc_random_ptr__comp_45sdshdr64(unsigned int __dyc_exp ) ;
extern struct sdshdr64 *__dyc_read_ptr__comp_45sdshdr64(void) ;
extern void __dyc_print_ptr__comp_45sdshdr64(struct sdshdr64  const  *__dyc_thistype ) ;
extern redisReply __dyc_random_typdef_redisReply(unsigned int __dyc_exp ) ;
extern redisReply __dyc_read_typdef_redisReply(void) ;
extern void __dyc_print_typdef_redisReply(redisReply __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern __suseconds_t __dyc_random_typdef___suseconds_t(unsigned int __dyc_exp ) ;
extern __suseconds_t __dyc_read_typdef___suseconds_t(void) ;
extern void __dyc_print_typdef___suseconds_t(__suseconds_t __dyc_thistype ) ;
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
extern __time_t __dyc_random_typdef___time_t(unsigned int __dyc_exp ) ;
extern __time_t __dyc_read_typdef___time_t(void) ;
extern void __dyc_print_typdef___time_t(__time_t __dyc_thistype ) ;
extern struct sdshdr32 __dyc_random_comp_44sdshdr32(unsigned int __dyc_exp ) ;
extern struct sdshdr32 __dyc_read_comp_44sdshdr32(void) ;
extern void __dyc_print_comp_44sdshdr32(struct sdshdr32 __dyc_thistype ) ;
extern struct redisReply **__dyc_random_ptr__ptr__comp_46redisReply(unsigned int __dyc_exp ) ;
extern struct redisReply **__dyc_read_ptr__ptr__comp_46redisReply(void) ;
extern void __dyc_print_ptr__ptr__comp_46redisReply(struct redisReply * const  *__dyc_thistype ) ;
extern struct sdshdr32 *__dyc_random_ptr__comp_44sdshdr32(unsigned int __dyc_exp ) ;
extern struct sdshdr32 *__dyc_read_ptr__comp_44sdshdr32(void) ;
extern void __dyc_print_ptr__comp_44sdshdr32(struct sdshdr32  const  *__dyc_thistype ) ;
extern uint32_t __dyc_random_typdef_uint32_t(unsigned int __dyc_exp ) ;
extern uint32_t __dyc_read_typdef_uint32_t(void) ;
extern void __dyc_print_typdef_uint32_t(uint32_t __dyc_thistype ) ;
extern redisReadTask __dyc_random_typdef_redisReadTask(unsigned int __dyc_exp ) ;
extern redisReadTask __dyc_read_typdef_redisReadTask(void) ;
extern void __dyc_print_typdef_redisReadTask(redisReadTask __dyc_thistype ) ;
extern struct redisReadTask __dyc_random_comp_36redisReadTask(unsigned int __dyc_exp ) ;
extern struct redisReadTask __dyc_read_comp_36redisReadTask(void) ;
extern void __dyc_print_comp_36redisReadTask(struct redisReadTask __dyc_thistype ) ;
extern size_t *__dyc_random_ptr__typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t *__dyc_read_ptr__typdef_size_t(void) ;
extern void __dyc_print_ptr__typdef_size_t(size_t const   *__dyc_thistype ) ;
extern uint8_t __dyc_random_typdef_uint8_t(unsigned int __dyc_exp ) ;
extern uint8_t __dyc_read_typdef_uint8_t(void) ;
extern void __dyc_print_typdef_uint8_t(uint8_t __dyc_thistype ) ;
extern uint16_t __dyc_random_typdef_uint16_t(unsigned int __dyc_exp ) ;
extern uint16_t __dyc_read_typdef_uint16_t(void) ;
extern void __dyc_print_typdef_uint16_t(uint16_t __dyc_thistype ) ;
extern struct timeval *__dyc_random_ptr__comp_11timeval(unsigned int __dyc_exp ) ;
extern struct timeval *__dyc_read_ptr__comp_11timeval(void) ;
extern void __dyc_print_ptr__comp_11timeval(struct timeval  const  *__dyc_thistype ) ;
extern __ssize_t __dyc_random_typdef___ssize_t(unsigned int __dyc_exp ) ;
extern __ssize_t __dyc_read_typdef___ssize_t(void) ;
extern void __dyc_print_typdef___ssize_t(__ssize_t __dyc_thistype ) ;
extern struct __anonstruct_unix_sock_30 __dyc_random_comp_49__anonstruct_unix_sock_30(unsigned int __dyc_exp ) ;
extern struct __anonstruct_unix_sock_30 __dyc_read_comp_49__anonstruct_unix_sock_30(void) ;
extern void __dyc_print_comp_49__anonstruct_unix_sock_30(struct __anonstruct_unix_sock_30 __dyc_thistype ) ;
extern redisReplyObjectFunctions __dyc_random_typdef_redisReplyObjectFunctions(unsigned int __dyc_exp ) ;
extern redisReplyObjectFunctions __dyc_read_typdef_redisReplyObjectFunctions(void) ;
extern void __dyc_print_typdef_redisReplyObjectFunctions(redisReplyObjectFunctions __dyc_thistype ) ;
extern redisReader *__dyc_random_ptr__typdef_redisReader(unsigned int __dyc_exp ) ;
extern redisReader *__dyc_read_ptr__typdef_redisReader(void) ;
extern void __dyc_print_ptr__typdef_redisReader(redisReader const   *__dyc_thistype ) ;
extern redisReadTask *__dyc_random_ptr__typdef_redisReadTask(unsigned int __dyc_exp ) ;
extern redisReadTask *__dyc_read_ptr__typdef_redisReadTask(void) ;
extern void __dyc_print_ptr__typdef_redisReadTask(redisReadTask const   *__dyc_thistype ) ;
extern struct sdshdr8 *__dyc_random_ptr__comp_42sdshdr8(unsigned int __dyc_exp ) ;
extern struct sdshdr8 *__dyc_read_ptr__comp_42sdshdr8(void) ;
extern void __dyc_print_ptr__comp_42sdshdr8(struct sdshdr8  const  *__dyc_thistype ) ;
extern ssize_t __dyc_random_typdef_ssize_t(unsigned int __dyc_exp ) ;
extern ssize_t __dyc_read_typdef_ssize_t(void) ;
extern void __dyc_print_typdef_ssize_t(ssize_t __dyc_thistype ) ;
extern struct redisReadTask *__dyc_random_ptr__comp_36redisReadTask(unsigned int __dyc_exp ) ;
extern struct redisReadTask *__dyc_read_ptr__comp_36redisReadTask(void) ;
extern void __dyc_print_ptr__comp_36redisReadTask(struct redisReadTask  const  *__dyc_thistype ) ;
extern struct redisReply *__dyc_random_ptr__comp_46redisReply(unsigned int __dyc_exp ) ;
extern struct redisReply *__dyc_read_ptr__comp_46redisReply(void) ;
extern void __dyc_print_ptr__comp_46redisReply(struct redisReply  const  *__dyc_thistype ) ;
extern redisReply *__dyc_random_ptr__typdef_redisReply(unsigned int __dyc_exp ) ;
extern redisReply *__dyc_read_ptr__typdef_redisReply(void) ;
extern void __dyc_print_ptr__typdef_redisReply(redisReply const   *__dyc_thistype ) ;
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
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
extern struct sdshdr16 __dyc_random_comp_43sdshdr16(unsigned int __dyc_exp ) ;
extern struct sdshdr16 __dyc_read_comp_43sdshdr16(void) ;
extern void __dyc_print_comp_43sdshdr16(struct sdshdr16 __dyc_thistype ) ;
extern struct timeval __dyc_random_comp_11timeval(unsigned int __dyc_exp ) ;
extern struct timeval __dyc_read_comp_11timeval(void) ;
extern void __dyc_print_comp_11timeval(struct timeval __dyc_thistype ) ;
