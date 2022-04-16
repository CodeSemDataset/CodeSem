#line 139 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __mode_t;
#line 149 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __time_t;
#line 151 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __suseconds_t;
#line 180 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __ssize_t;
#line 192 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __socklen_t;
#line 71 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __mode_t mode_t;
#line 110 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __ssize_t ssize_t;
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
#line 193 "/usr/include/x86_64-linux-gnu/bits/socket.h"
struct sockaddr_storage {
   sa_family_t ss_family ;
   unsigned long __ss_align ;
   char __ss_padding[128UL - 2UL * sizeof(unsigned long )] ;
};
#line 92 "/usr/include/x86_64-linux-gnu/sys/socket.h"
struct sockaddr_in;
#line 92
struct sockaddr_in6;
#line 92
struct sockaddr_un;
#line 30 "/usr/include/x86_64-linux-gnu/sys/un.h"
struct sockaddr_un {
   sa_family_t sun_family ;
   char sun_path[108] ;
};
#line 49 "/usr/include/stdint.h"
typedef unsigned char uint8_t;
#line 50 "/usr/include/stdint.h"
typedef unsigned short uint16_t;
#line 52 "/usr/include/stdint.h"
typedef unsigned int uint32_t;
#line 97 "/usr/include/netinet/in.h"
typedef uint16_t in_port_t;
#line 141 "/usr/include/netinet/in.h"
typedef uint32_t in_addr_t;
#line 142 "/usr/include/netinet/in.h"
struct in_addr {
   in_addr_t s_addr ;
};
#line 198 "/usr/include/netinet/in.h"
union __anonunion___in6_u_22 {
   uint8_t __u6_addr8[16] ;
   uint16_t __u6_addr16[8] ;
   uint32_t __u6_addr32[4] ;
};
#line 198 "/usr/include/netinet/in.h"
struct in6_addr {
   union __anonunion___in6_u_22 __in6_u ;
};
#line 225 "/usr/include/netinet/in.h"
struct sockaddr_in {
   sa_family_t sin_family ;
   in_port_t sin_port ;
   struct in_addr sin_addr ;
   unsigned char sin_zero[((sizeof(struct sockaddr ) - sizeof(unsigned short )) - sizeof(in_port_t )) - sizeof(struct in_addr )] ;
};
#line 239 "/usr/include/netinet/in.h"
struct sockaddr_in6 {
   sa_family_t sin6_family ;
   in_port_t sin6_port ;
   uint32_t sin6_flowinfo ;
   struct in6_addr sin6_addr ;
   uint32_t sin6_scope_id ;
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
#line 40 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
#line 98 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h"
typedef __gnuc_va_list va_list;
extern struct sockaddr_storage __dyc_random_comp_21sockaddr_storage(unsigned int __dyc_exp ) ;
extern struct sockaddr_storage __dyc_read_comp_21sockaddr_storage(void) ;
extern void __dyc_print_comp_21sockaddr_storage(struct sockaddr_storage __dyc_thistype ) ;
extern struct sockaddr_in6 *__dyc_random_ptr__comp_34sockaddr_in6(unsigned int __dyc_exp ) ;
extern struct sockaddr_in6 *__dyc_read_ptr__comp_34sockaddr_in6(void) ;
extern void __dyc_print_ptr__comp_34sockaddr_in6(struct sockaddr_in6  const  *__dyc_thistype ) ;
extern struct in6_addr __dyc_random_comp_49in6_addr(unsigned int __dyc_exp ) ;
extern struct in6_addr __dyc_read_comp_49in6_addr(void) ;
extern void __dyc_print_comp_49in6_addr(struct in6_addr __dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct timeval __dyc_random_comp_4timeval(unsigned int __dyc_exp ) ;
extern struct timeval __dyc_read_comp_4timeval(void) ;
extern void __dyc_print_comp_4timeval(struct timeval __dyc_thistype ) ;
extern struct in_addr __dyc_random_comp_48in_addr(unsigned int __dyc_exp ) ;
extern struct in_addr __dyc_read_comp_48in_addr(void) ;
extern void __dyc_print_comp_48in_addr(struct in_addr __dyc_thistype ) ;
extern struct sockaddr_in *__dyc_random_ptr__comp_33sockaddr_in(unsigned int __dyc_exp ) ;
extern struct sockaddr_in *__dyc_read_ptr__comp_33sockaddr_in(void) ;
extern void __dyc_print_ptr__comp_33sockaddr_in(struct sockaddr_in  const  *__dyc_thistype ) ;
extern __mode_t __dyc_random_typdef___mode_t(unsigned int __dyc_exp ) ;
extern __mode_t __dyc_read_typdef___mode_t(void) ;
extern void __dyc_print_typdef___mode_t(__mode_t __dyc_thistype ) ;
extern struct addrinfo __dyc_random_comp_79addrinfo(unsigned int __dyc_exp ) ;
extern struct addrinfo __dyc_read_comp_79addrinfo(void) ;
extern void __dyc_print_comp_79addrinfo(struct addrinfo __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern socklen_t __dyc_random_typdef_socklen_t(unsigned int __dyc_exp ) ;
extern socklen_t __dyc_read_typdef_socklen_t(void) ;
extern void __dyc_print_typdef_socklen_t(socklen_t __dyc_thistype ) ;
extern __suseconds_t __dyc_random_typdef___suseconds_t(unsigned int __dyc_exp ) ;
extern __suseconds_t __dyc_read_typdef___suseconds_t(void) ;
extern void __dyc_print_typdef___suseconds_t(__suseconds_t __dyc_thistype ) ;
extern union __anonunion___in6_u_22 __dyc_random_comp_50__anonunion___in6_u_22(unsigned int __dyc_exp ) ;
extern union __anonunion___in6_u_22 __dyc_read_comp_50__anonunion___in6_u_22(void) ;
extern void __dyc_print_comp_50__anonunion___in6_u_22(union __anonunion___in6_u_22 __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct addrinfo *__dyc_random_ptr__comp_79addrinfo(unsigned int __dyc_exp ) ;
extern struct addrinfo *__dyc_read_ptr__comp_79addrinfo(void) ;
extern void __dyc_print_ptr__comp_79addrinfo(struct addrinfo  const  *__dyc_thistype ) ;
extern struct sockaddr_un __dyc_random_comp_39sockaddr_un(unsigned int __dyc_exp ) ;
extern struct sockaddr_un __dyc_read_comp_39sockaddr_un(void) ;
extern void __dyc_print_comp_39sockaddr_un(struct sockaddr_un __dyc_thistype ) ;
extern in_addr_t __dyc_random_typdef_in_addr_t(unsigned int __dyc_exp ) ;
extern in_addr_t __dyc_read_typdef_in_addr_t(void) ;
extern void __dyc_print_typdef_in_addr_t(in_addr_t __dyc_thistype ) ;
extern __time_t __dyc_random_typdef___time_t(unsigned int __dyc_exp ) ;
extern __time_t __dyc_read_typdef___time_t(void) ;
extern void __dyc_print_typdef___time_t(__time_t __dyc_thistype ) ;
extern __socklen_t __dyc_random_typdef___socklen_t(unsigned int __dyc_exp ) ;
extern __socklen_t __dyc_read_typdef___socklen_t(void) ;
extern void __dyc_print_typdef___socklen_t(__socklen_t __dyc_thistype ) ;
extern socklen_t *__dyc_random_ptr__typdef_socklen_t(unsigned int __dyc_exp ) ;
extern socklen_t *__dyc_read_ptr__typdef_socklen_t(void) ;
extern void __dyc_print_ptr__typdef_socklen_t(socklen_t const   * __restrict  __dyc_thistype ) ;
extern uint32_t __dyc_random_typdef_uint32_t(unsigned int __dyc_exp ) ;
extern uint32_t __dyc_read_typdef_uint32_t(void) ;
extern void __dyc_print_typdef_uint32_t(uint32_t __dyc_thistype ) ;
extern struct addrinfo **__dyc_random_ptr__ptr__comp_79addrinfo(unsigned int __dyc_exp ) ;
extern struct addrinfo **__dyc_read_ptr__ptr__comp_79addrinfo(void) ;
extern void __dyc_print_ptr__ptr__comp_79addrinfo(struct addrinfo * const  * __restrict  __dyc_thistype ) ;
extern in_port_t __dyc_random_typdef_in_port_t(unsigned int __dyc_exp ) ;
extern in_port_t __dyc_read_typdef_in_port_t(void) ;
extern void __dyc_print_typdef_in_port_t(in_port_t __dyc_thistype ) ;
extern struct sockaddr __dyc_random_comp_20sockaddr(unsigned int __dyc_exp ) ;
extern struct sockaddr __dyc_read_comp_20sockaddr(void) ;
extern void __dyc_print_comp_20sockaddr(struct sockaddr __dyc_thistype ) ;
extern struct sockaddr_in __dyc_random_comp_33sockaddr_in(unsigned int __dyc_exp ) ;
extern struct sockaddr_in __dyc_read_comp_33sockaddr_in(void) ;
extern void __dyc_print_comp_33sockaddr_in(struct sockaddr_in __dyc_thistype ) ;
extern uint8_t __dyc_random_typdef_uint8_t(unsigned int __dyc_exp ) ;
extern uint8_t __dyc_read_typdef_uint8_t(void) ;
extern void __dyc_print_typdef_uint8_t(uint8_t __dyc_thistype ) ;
extern uint16_t __dyc_random_typdef_uint16_t(unsigned int __dyc_exp ) ;
extern uint16_t __dyc_read_typdef_uint16_t(void) ;
extern void __dyc_print_typdef_uint16_t(uint16_t __dyc_thistype ) ;
extern __ssize_t __dyc_random_typdef___ssize_t(unsigned int __dyc_exp ) ;
extern __ssize_t __dyc_read_typdef___ssize_t(void) ;
extern void __dyc_print_typdef___ssize_t(__ssize_t __dyc_thistype ) ;
extern struct sockaddr *__dyc_random_ptr__comp_20sockaddr(unsigned int __dyc_exp ) ;
extern struct sockaddr *__dyc_read_ptr__comp_20sockaddr(void) ;
extern void __dyc_print_ptr__comp_20sockaddr(struct sockaddr  const  *__dyc_thistype ) ;
extern ssize_t __dyc_random_typdef_ssize_t(unsigned int __dyc_exp ) ;
extern ssize_t __dyc_read_typdef_ssize_t(void) ;
extern void __dyc_print_typdef_ssize_t(ssize_t __dyc_thistype ) ;
extern sa_family_t __dyc_random_typdef_sa_family_t(unsigned int __dyc_exp ) ;
extern sa_family_t __dyc_read_typdef_sa_family_t(void) ;
extern void __dyc_print_typdef_sa_family_t(sa_family_t __dyc_thistype ) ;
extern mode_t __dyc_random_typdef_mode_t(unsigned int __dyc_exp ) ;
extern mode_t __dyc_read_typdef_mode_t(void) ;
extern void __dyc_print_typdef_mode_t(mode_t __dyc_thistype ) ;
extern struct sockaddr_in6 __dyc_random_comp_34sockaddr_in6(unsigned int __dyc_exp ) ;
extern struct sockaddr_in6 __dyc_read_comp_34sockaddr_in6(void) ;
extern void __dyc_print_comp_34sockaddr_in6(struct sockaddr_in6 __dyc_thistype ) ;
