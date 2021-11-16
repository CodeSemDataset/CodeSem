#line 192 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __socklen_t;
#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 35 "/usr/include/x86_64-linux-gnu/bits/socket.h"
typedef __socklen_t socklen_t;
#line 29 "/usr/include/x86_64-linux-gnu/bits/sockaddr.h"
typedef unsigned short sa_family_t;
#line 180 "/usr/include/x86_64-linux-gnu/bits/socket.h"
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};
#line 447 "/home/chenqian/Downloads/curl-curl-7_79_0/include/curl/system.h"
typedef socklen_t curl_socklen_t;
#line 453 "/home/chenqian/Downloads/curl-curl-7_79_0/include/curl/system.h"
typedef long curl_off_t;
#line 135 "/home/chenqian/Downloads/curl-curl-7_79_0/include/curl/curl.h"
typedef int curl_socket_t;
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
#line 225 "/usr/include/netinet/in.h"
struct sockaddr_in {
   sa_family_t sin_family ;
   in_port_t sin_port ;
   struct in_addr sin_addr ;
   unsigned char sin_zero[((sizeof(struct sockaddr ) - sizeof(unsigned short )) - sizeof(in_port_t )) - sizeof(struct in_addr )] ;
};
#line 29 "/home/chenqian/Downloads/curl-curl-7_79_0/lib/timeval.h"
typedef curl_off_t timediff_t;
#line 40 "/usr/include/x86_64-linux-gnu/sys/poll.h"
struct pollfd {
   int fd ;
   short events ;
   short revents ;
};
#line 63 "/home/chenqian/Downloads/curl-curl-7_79_0/lib/socketpair.c"
union __anonunion_a_74 {
   struct sockaddr_in inaddr ;
   struct sockaddr addr ;
};
extern curl_off_t __dyc_random_typdef_curl_off_t(unsigned int __dyc_exp ) ;
extern curl_off_t __dyc_read_typdef_curl_off_t(void) ;
extern void __dyc_print_typdef_curl_off_t(curl_off_t __dyc_thistype ) ;
extern struct in_addr __dyc_random_comp_77in_addr(unsigned int __dyc_exp ) ;
extern struct in_addr __dyc_read_comp_77in_addr(void) ;
extern void __dyc_print_comp_77in_addr(struct in_addr __dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct pollfd *__dyc_random_ptr__comp_99pollfd(unsigned int __dyc_exp ) ;
extern struct pollfd *__dyc_read_ptr__comp_99pollfd(void) ;
extern void __dyc_print_ptr__comp_99pollfd(struct pollfd  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern socklen_t __dyc_random_typdef_socklen_t(unsigned int __dyc_exp ) ;
extern socklen_t __dyc_read_typdef_socklen_t(void) ;
extern void __dyc_print_typdef_socklen_t(socklen_t __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern union __anonunion_a_74 __dyc_random_comp_100__anonunion_a_74(unsigned int __dyc_exp ) ;
extern union __anonunion_a_74 __dyc_read_comp_100__anonunion_a_74(void) ;
extern void __dyc_print_comp_100__anonunion_a_74(union __anonunion_a_74 __dyc_thistype ) ;
extern in_addr_t __dyc_random_typdef_in_addr_t(unsigned int __dyc_exp ) ;
extern in_addr_t __dyc_read_typdef_in_addr_t(void) ;
extern void __dyc_print_typdef_in_addr_t(in_addr_t __dyc_thistype ) ;
extern curl_socket_t __dyc_random_typdef_curl_socket_t(unsigned int __dyc_exp ) ;
extern curl_socket_t __dyc_read_typdef_curl_socket_t(void) ;
extern void __dyc_print_typdef_curl_socket_t(curl_socket_t __dyc_thistype ) ;
extern __socklen_t __dyc_random_typdef___socklen_t(unsigned int __dyc_exp ) ;
extern __socklen_t __dyc_read_typdef___socklen_t(void) ;
extern void __dyc_print_typdef___socklen_t(__socklen_t __dyc_thistype ) ;
extern struct sockaddr_in __dyc_random_comp_80sockaddr_in(unsigned int __dyc_exp ) ;
extern struct sockaddr_in __dyc_read_comp_80sockaddr_in(void) ;
extern void __dyc_print_comp_80sockaddr_in(struct sockaddr_in __dyc_thistype ) ;
extern socklen_t *__dyc_random_ptr__typdef_socklen_t(unsigned int __dyc_exp ) ;
extern socklen_t *__dyc_read_ptr__typdef_socklen_t(void) ;
extern void __dyc_print_ptr__typdef_socklen_t(socklen_t const   * __restrict  __dyc_thistype ) ;
extern uint32_t __dyc_random_typdef_uint32_t(unsigned int __dyc_exp ) ;
extern uint32_t __dyc_read_typdef_uint32_t(void) ;
extern void __dyc_print_typdef_uint32_t(uint32_t __dyc_thistype ) ;
extern timediff_t __dyc_random_typdef_timediff_t(unsigned int __dyc_exp ) ;
extern timediff_t __dyc_read_typdef_timediff_t(void) ;
extern void __dyc_print_typdef_timediff_t(timediff_t __dyc_thistype ) ;
extern in_port_t __dyc_random_typdef_in_port_t(unsigned int __dyc_exp ) ;
extern in_port_t __dyc_read_typdef_in_port_t(void) ;
extern void __dyc_print_typdef_in_port_t(in_port_t __dyc_thistype ) ;
extern struct sockaddr __dyc_random_comp_20sockaddr(unsigned int __dyc_exp ) ;
extern struct sockaddr __dyc_read_comp_20sockaddr(void) ;
extern void __dyc_print_comp_20sockaddr(struct sockaddr __dyc_thistype ) ;
extern uint16_t __dyc_random_typdef_uint16_t(unsigned int __dyc_exp ) ;
extern uint16_t __dyc_read_typdef_uint16_t(void) ;
extern void __dyc_print_typdef_uint16_t(uint16_t __dyc_thistype ) ;
extern struct sockaddr *__dyc_random_ptr__comp_20sockaddr(unsigned int __dyc_exp ) ;
extern struct sockaddr *__dyc_read_ptr__comp_20sockaddr(void) ;
extern void __dyc_print_ptr__comp_20sockaddr(struct sockaddr  const  *__dyc_thistype ) ;
extern curl_socket_t *__dyc_random_ptr__typdef_curl_socket_t(unsigned int __dyc_exp ) ;
extern curl_socket_t *__dyc_read_ptr__typdef_curl_socket_t(void) ;
extern void __dyc_print_ptr__typdef_curl_socket_t(curl_socket_t const   *__dyc_thistype ) ;
extern struct pollfd __dyc_random_comp_99pollfd(unsigned int __dyc_exp ) ;
extern struct pollfd __dyc_read_comp_99pollfd(void) ;
extern void __dyc_print_comp_99pollfd(struct pollfd __dyc_thistype ) ;
extern sa_family_t __dyc_random_typdef_sa_family_t(unsigned int __dyc_exp ) ;
extern sa_family_t __dyc_read_typdef_sa_family_t(void) ;
extern void __dyc_print_typdef_sa_family_t(sa_family_t __dyc_thistype ) ;
extern curl_socklen_t __dyc_random_typdef_curl_socklen_t(unsigned int __dyc_exp ) ;
extern curl_socklen_t __dyc_read_typdef_curl_socklen_t(void) ;
extern void __dyc_print_typdef_curl_socklen_t(curl_socklen_t __dyc_thistype ) ;
