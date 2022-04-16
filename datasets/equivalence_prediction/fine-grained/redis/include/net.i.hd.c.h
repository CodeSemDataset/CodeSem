#line 149 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __time_t;
#line 151 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __suseconds_t;
#line 192 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __socklen_t;
#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 31 "/usr/include/x86_64-linux-gnu/bits/time.h"
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
#line 35 "/usr/include/x86_64-linux-gnu/bits/socket.h"
typedef __socklen_t socklen_t;
#line 29 "/usr/include/x86_64-linux-gnu/bits/sockaddr.h"
typedef unsigned short sa_family_t;
#line 180 "/usr/include/x86_64-linux-gnu/bits/socket.h"
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};
#line 30 "/usr/include/x86_64-linux-gnu/sys/un.h"
struct sockaddr_un {
   sa_family_t sun_family ;
   char sun_path[108] ;
};
#line 569 "/usr/include/netdb.h"
struct addrinfo {
   int ai_flags ;
   int ai_family ;
   int ai_socktype ;
   int ai_protocol ;
   socklen_t ai_addrlen ;
   struct sockaddr *ai_addr ;
   char *ai_canonname ;
   struct addrinfo *ai_next ;
};
#line 37 "/usr/include/x86_64-linux-gnu/sys/poll.h"
typedef unsigned long nfds_t;
#line 40 "/usr/include/x86_64-linux-gnu/sys/poll.h"
struct pollfd {
   int fd ;
   short events ;
   short revents ;
};
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
#line 134 "hiredis.h"
enum redisConnectionType {
    REDIS_CONN_TCP = 0,
    REDIS_CONN_UNIX = 1
} ;
#line 140 "hiredis.h"
struct __anonstruct_tcp_35 {
   char *host ;
   char *source_addr ;
   int port ;
};
#line 140 "hiredis.h"
struct __anonstruct_unix_sock_36 {
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
   struct __anonstruct_tcp_35 tcp ;
   struct __anonstruct_unix_sock_36 unix_sock ;
};
#line 140 "hiredis.h"
typedef struct redisContext redisContext;
extern struct addrinfo __dyc_random_comp_53addrinfo(unsigned int __dyc_exp ) ;
extern struct addrinfo __dyc_read_comp_53addrinfo(void) ;
extern void __dyc_print_comp_53addrinfo(struct addrinfo __dyc_thistype ) ;
extern redisReader __dyc_random_typdef_redisReader(unsigned int __dyc_exp ) ;
extern redisReader __dyc_read_typdef_redisReader(void) ;
extern void __dyc_print_typdef_redisReader(redisReader __dyc_thistype ) ;
extern struct addrinfo *__dyc_random_ptr__comp_53addrinfo(unsigned int __dyc_exp ) ;
extern struct addrinfo *__dyc_read_ptr__comp_53addrinfo(void) ;
extern void __dyc_print_ptr__comp_53addrinfo(struct addrinfo  const  *__dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern struct redisReader __dyc_random_comp_74redisReader(unsigned int __dyc_exp ) ;
extern struct redisReader __dyc_read_comp_74redisReader(void) ;
extern void __dyc_print_comp_74redisReader(struct redisReader __dyc_thistype ) ;
extern struct redisReplyObjectFunctions __dyc_random_comp_73redisReplyObjectFunctions(unsigned int __dyc_exp ) ;
extern struct redisReplyObjectFunctions __dyc_read_comp_73redisReplyObjectFunctions(void) ;
extern void __dyc_print_comp_73redisReplyObjectFunctions(struct redisReplyObjectFunctions __dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern redisContext __dyc_random_typdef_redisContext(unsigned int __dyc_exp ) ;
extern redisContext __dyc_read_typdef_redisContext(void) ;
extern void __dyc_print_typdef_redisContext(redisContext __dyc_thistype ) ;
extern redisContext *__dyc_random_ptr__typdef_redisContext(unsigned int __dyc_exp ) ;
extern redisContext *__dyc_read_ptr__typdef_redisContext(void) ;
extern void __dyc_print_ptr__typdef_redisContext(redisContext const   *__dyc_thistype ) ;
extern struct timeval __dyc_random_comp_4timeval(unsigned int __dyc_exp ) ;
extern struct timeval __dyc_read_comp_4timeval(void) ;
extern void __dyc_print_comp_4timeval(struct timeval __dyc_thistype ) ;
extern struct pollfd __dyc_random_comp_62pollfd(unsigned int __dyc_exp ) ;
extern struct pollfd __dyc_read_comp_62pollfd(void) ;
extern void __dyc_print_comp_62pollfd(struct pollfd __dyc_thistype ) ;
extern struct addrinfo **__dyc_random_ptr__ptr__comp_53addrinfo(unsigned int __dyc_exp ) ;
extern struct addrinfo **__dyc_read_ptr__ptr__comp_53addrinfo(void) ;
extern void __dyc_print_ptr__ptr__comp_53addrinfo(struct addrinfo * const  * __restrict  __dyc_thistype ) ;
extern long *__dyc_random_ptr__long(unsigned int __dyc_exp ) ;
extern long *__dyc_read_ptr__long(void) ;
extern void __dyc_print_ptr__long(long const   *__dyc_thistype ) ;
extern struct redisReadTask __dyc_random_comp_72redisReadTask(unsigned int __dyc_exp ) ;
extern struct redisReadTask __dyc_read_comp_72redisReadTask(void) ;
extern void __dyc_print_comp_72redisReadTask(struct redisReadTask __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern socklen_t __dyc_random_typdef_socklen_t(unsigned int __dyc_exp ) ;
extern socklen_t __dyc_read_typdef_socklen_t(void) ;
extern void __dyc_print_typdef_socklen_t(socklen_t __dyc_thistype ) ;
extern __suseconds_t __dyc_random_typdef___suseconds_t(unsigned int __dyc_exp ) ;
extern __suseconds_t __dyc_read_typdef___suseconds_t(void) ;
extern void __dyc_print_typdef___suseconds_t(__suseconds_t __dyc_thistype ) ;
extern struct sockaddr_un __dyc_random_comp_27sockaddr_un(unsigned int __dyc_exp ) ;
extern struct sockaddr_un __dyc_read_comp_27sockaddr_un(void) ;
extern void __dyc_print_comp_27sockaddr_un(struct sockaddr_un __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct __anonstruct_unix_sock_36 __dyc_random_comp_85__anonstruct_unix_sock_36(unsigned int __dyc_exp ) ;
extern struct __anonstruct_unix_sock_36 __dyc_read_comp_85__anonstruct_unix_sock_36(void) ;
extern void __dyc_print_comp_85__anonstruct_unix_sock_36(struct __anonstruct_unix_sock_36 __dyc_thistype ) ;
extern __time_t __dyc_random_typdef___time_t(unsigned int __dyc_exp ) ;
extern __time_t __dyc_read_typdef___time_t(void) ;
extern void __dyc_print_typdef___time_t(__time_t __dyc_thistype ) ;
extern struct redisReadTask *__dyc_random_ptr__comp_72redisReadTask(unsigned int __dyc_exp ) ;
extern struct redisReadTask *__dyc_read_ptr__comp_72redisReadTask(void) ;
extern void __dyc_print_ptr__comp_72redisReadTask(struct redisReadTask  const  *__dyc_thistype ) ;
extern __socklen_t __dyc_random_typdef___socklen_t(unsigned int __dyc_exp ) ;
extern __socklen_t __dyc_read_typdef___socklen_t(void) ;
extern void __dyc_print_typdef___socklen_t(__socklen_t __dyc_thistype ) ;
extern socklen_t *__dyc_random_ptr__typdef_socklen_t(unsigned int __dyc_exp ) ;
extern socklen_t *__dyc_read_ptr__typdef_socklen_t(void) ;
extern void __dyc_print_ptr__typdef_socklen_t(socklen_t const   * __restrict  __dyc_thistype ) ;
extern redisReadTask __dyc_random_typdef_redisReadTask(unsigned int __dyc_exp ) ;
extern redisReadTask __dyc_read_typdef_redisReadTask(void) ;
extern void __dyc_print_typdef_redisReadTask(redisReadTask __dyc_thistype ) ;
extern struct __anonstruct_tcp_35 __dyc_random_comp_84__anonstruct_tcp_35(unsigned int __dyc_exp ) ;
extern struct __anonstruct_tcp_35 __dyc_read_comp_84__anonstruct_tcp_35(void) ;
extern void __dyc_print_comp_84__anonstruct_tcp_35(struct __anonstruct_tcp_35 __dyc_thistype ) ;
extern struct redisContext __dyc_random_comp_83redisContext(unsigned int __dyc_exp ) ;
extern struct redisContext __dyc_read_comp_83redisContext(void) ;
extern void __dyc_print_comp_83redisContext(struct redisContext __dyc_thistype ) ;
extern struct sockaddr __dyc_random_comp_20sockaddr(unsigned int __dyc_exp ) ;
extern struct sockaddr __dyc_read_comp_20sockaddr(void) ;
extern void __dyc_print_comp_20sockaddr(struct sockaddr __dyc_thistype ) ;
extern nfds_t __dyc_random_typdef_nfds_t(unsigned int __dyc_exp ) ;
extern nfds_t __dyc_read_typdef_nfds_t(void) ;
extern void __dyc_print_typdef_nfds_t(nfds_t __dyc_thistype ) ;
extern struct sockaddr *__dyc_random_ptr__comp_20sockaddr(unsigned int __dyc_exp ) ;
extern struct sockaddr *__dyc_read_ptr__comp_20sockaddr(void) ;
extern void __dyc_print_ptr__comp_20sockaddr(struct sockaddr  const  *__dyc_thistype ) ;
extern redisReplyObjectFunctions __dyc_random_typdef_redisReplyObjectFunctions(unsigned int __dyc_exp ) ;
extern redisReplyObjectFunctions __dyc_read_typdef_redisReplyObjectFunctions(void) ;
extern void __dyc_print_typdef_redisReplyObjectFunctions(redisReplyObjectFunctions __dyc_thistype ) ;
extern redisReader *__dyc_random_ptr__typdef_redisReader(unsigned int __dyc_exp ) ;
extern redisReader *__dyc_read_ptr__typdef_redisReader(void) ;
extern void __dyc_print_ptr__typdef_redisReader(redisReader const   *__dyc_thistype ) ;
extern redisReadTask *__dyc_random_ptr__typdef_redisReadTask(unsigned int __dyc_exp ) ;
extern redisReadTask *__dyc_read_ptr__typdef_redisReadTask(void) ;
extern void __dyc_print_ptr__typdef_redisReadTask(redisReadTask const   *__dyc_thistype ) ;
extern struct timeval *__dyc_random_ptr__comp_4timeval(unsigned int __dyc_exp ) ;
extern struct timeval *__dyc_read_ptr__comp_4timeval(void) ;
extern void __dyc_print_ptr__comp_4timeval(struct timeval  const  *__dyc_thistype ) ;
extern sa_family_t __dyc_random_typdef_sa_family_t(unsigned int __dyc_exp ) ;
extern sa_family_t __dyc_read_typdef_sa_family_t(void) ;
extern void __dyc_print_typdef_sa_family_t(sa_family_t __dyc_thistype ) ;
extern struct pollfd *__dyc_random_ptr__comp_62pollfd(unsigned int __dyc_exp ) ;
extern struct pollfd *__dyc_read_ptr__comp_62pollfd(void) ;
extern void __dyc_print_ptr__comp_62pollfd(struct pollfd  const  *__dyc_thistype ) ;
extern redisReplyObjectFunctions *__dyc_random_ptr__typdef_redisReplyObjectFunctions(unsigned int __dyc_exp ) ;
extern redisReplyObjectFunctions *__dyc_read_ptr__typdef_redisReplyObjectFunctions(void) ;
extern void __dyc_print_ptr__typdef_redisReplyObjectFunctions(redisReplyObjectFunctions const   *__dyc_thistype ) ;
