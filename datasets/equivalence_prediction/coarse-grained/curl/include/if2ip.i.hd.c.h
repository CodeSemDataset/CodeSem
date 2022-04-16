typedef char *__caddr_t;
typedef unsigned long size_t;
typedef unsigned short sa_family_t;
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};
typedef int curl_socket_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef uint16_t in_port_t;
typedef uint32_t in_addr_t;
struct in_addr {
   in_addr_t s_addr ;
};
union __anonunion___in6_u_73 {
   uint8_t __u6_addr8[16] ;
   uint16_t __u6_addr16[8] ;
   uint32_t __u6_addr32[4] ;
};
struct in6_addr {
   union __anonunion___in6_u_73 __in6_u ;
};
struct sockaddr_in {
   sa_family_t sin_family ;
   in_port_t sin_port ;
   struct in_addr sin_addr ;
   unsigned char sin_zero[((sizeof(struct sockaddr ) - sizeof(unsigned short )) - sizeof(in_port_t )) - sizeof(struct in_addr )] ;
};
struct sockaddr_in6 {
   sa_family_t sin6_family ;
   in_port_t sin6_port ;
   uint32_t sin6_flowinfo ;
   struct in6_addr sin6_addr ;
   uint32_t sin6_scope_id ;
};
struct ifmap {
   unsigned long mem_start ;
   unsigned long mem_end ;
   unsigned short base_addr ;
   unsigned char irq ;
   unsigned char dma ;
   unsigned char port ;
};
union __anonunion_ifr_ifrn_76 {
   char ifrn_name[16] ;
};
union __anonunion_ifr_ifru_77 {
   struct sockaddr ifru_addr ;
   struct sockaddr ifru_dstaddr ;
   struct sockaddr ifru_broadaddr ;
   struct sockaddr ifru_netmask ;
   struct sockaddr ifru_hwaddr ;
   short ifru_flags ;
   int ifru_ivalue ;
   int ifru_mtu ;
   struct ifmap ifru_map ;
   char ifru_slave[16] ;
   char ifru_newname[16] ;
   __caddr_t ifru_data ;
};
struct ifreq {
   union __anonunion_ifr_ifrn_76 ifr_ifrn ;
   union __anonunion_ifr_ifru_77 ifr_ifru ;
};
enum __anonenum_if2ip_result_t_80 {
    IF2IP_NOT_FOUND = 0,
    IF2IP_AF_NOT_SUPPORTED = 1,
    IF2IP_FOUND = 2
} ;
typedef enum __anonenum_if2ip_result_t_80 if2ip_result_t;
extern struct in_addr __dyc_random_comp_77in_addr(unsigned int __dyc_exp ) ;
extern struct in_addr __dyc_read_comp_77in_addr(void) ;
extern void __dyc_print_comp_77in_addr(struct in_addr __dyc_thistype ) ;
extern struct ifmap __dyc_random_comp_96ifmap(unsigned int __dyc_exp ) ;
extern struct ifmap __dyc_read_comp_96ifmap(void) ;
extern void __dyc_print_comp_96ifmap(struct ifmap __dyc_thistype ) ;
extern union __anonunion___in6_u_73 __dyc_random_comp_79__anonunion___in6_u_73(unsigned int __dyc_exp ) ;
extern union __anonunion___in6_u_73 __dyc_read_comp_79__anonunion___in6_u_73(void) ;
extern void __dyc_print_comp_79__anonunion___in6_u_73(union __anonunion___in6_u_73 __dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct sockaddr_in6 __dyc_random_comp_81sockaddr_in6(unsigned int __dyc_exp ) ;
extern struct sockaddr_in6 __dyc_read_comp_81sockaddr_in6(void) ;
extern void __dyc_print_comp_81sockaddr_in6(struct sockaddr_in6 __dyc_thistype ) ;
extern struct sockaddr_in *__dyc_random_ptr__comp_80sockaddr_in(unsigned int __dyc_exp ) ;
extern struct sockaddr_in *__dyc_read_ptr__comp_80sockaddr_in(void) ;
extern void __dyc_print_ptr__comp_80sockaddr_in(struct sockaddr_in  const  *__dyc_thistype ) ;
extern __caddr_t __dyc_random_typdef___caddr_t(unsigned int __dyc_exp ) ;
extern __caddr_t __dyc_read_typdef___caddr_t(void) ;
extern void __dyc_print_typdef___caddr_t(__caddr_t __dyc_thistype ) ;
extern union __anonunion_ifr_ifru_77 __dyc_random_comp_99__anonunion_ifr_ifru_77(unsigned int __dyc_exp ) ;
extern union __anonunion_ifr_ifru_77 __dyc_read_comp_99__anonunion_ifr_ifru_77(void) ;
extern void __dyc_print_comp_99__anonunion_ifr_ifru_77(union __anonunion_ifr_ifru_77 __dyc_thistype ) ;
extern struct sockaddr_in6 *__dyc_random_ptr__comp_81sockaddr_in6(unsigned int __dyc_exp ) ;
extern struct sockaddr_in6 *__dyc_read_ptr__comp_81sockaddr_in6(void) ;
extern void __dyc_print_ptr__comp_81sockaddr_in6(struct sockaddr_in6  const  *__dyc_thistype ) ;
extern struct ifreq __dyc_random_comp_97ifreq(unsigned int __dyc_exp ) ;
extern struct ifreq __dyc_read_comp_97ifreq(void) ;
extern void __dyc_print_comp_97ifreq(struct ifreq __dyc_thistype ) ;
extern if2ip_result_t __dyc_random_typdef_if2ip_result_t(unsigned int __dyc_exp ) ;
extern if2ip_result_t __dyc_read_typdef_if2ip_result_t(void) ;
extern void __dyc_print_typdef_if2ip_result_t(if2ip_result_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern in_addr_t __dyc_random_typdef_in_addr_t(unsigned int __dyc_exp ) ;
extern in_addr_t __dyc_read_typdef_in_addr_t(void) ;
extern void __dyc_print_typdef_in_addr_t(in_addr_t __dyc_thistype ) ;
extern struct in6_addr __dyc_random_comp_78in6_addr(unsigned int __dyc_exp ) ;
extern struct in6_addr __dyc_read_comp_78in6_addr(void) ;
extern void __dyc_print_comp_78in6_addr(struct in6_addr __dyc_thistype ) ;
extern curl_socket_t __dyc_random_typdef_curl_socket_t(unsigned int __dyc_exp ) ;
extern curl_socket_t __dyc_read_typdef_curl_socket_t(void) ;
extern void __dyc_print_typdef_curl_socket_t(curl_socket_t __dyc_thistype ) ;
extern struct sockaddr_in __dyc_random_comp_80sockaddr_in(unsigned int __dyc_exp ) ;
extern struct sockaddr_in __dyc_read_comp_80sockaddr_in(void) ;
extern void __dyc_print_comp_80sockaddr_in(struct sockaddr_in __dyc_thistype ) ;
extern uint32_t __dyc_random_typdef_uint32_t(unsigned int __dyc_exp ) ;
extern uint32_t __dyc_read_typdef_uint32_t(void) ;
extern void __dyc_print_typdef_uint32_t(uint32_t __dyc_thistype ) ;
extern in_port_t __dyc_random_typdef_in_port_t(unsigned int __dyc_exp ) ;
extern in_port_t __dyc_read_typdef_in_port_t(void) ;
extern void __dyc_print_typdef_in_port_t(in_port_t __dyc_thistype ) ;
extern struct sockaddr __dyc_random_comp_20sockaddr(unsigned int __dyc_exp ) ;
extern struct sockaddr __dyc_read_comp_20sockaddr(void) ;
extern void __dyc_print_comp_20sockaddr(struct sockaddr __dyc_thistype ) ;
extern uint8_t __dyc_random_typdef_uint8_t(unsigned int __dyc_exp ) ;
extern uint8_t __dyc_read_typdef_uint8_t(void) ;
extern void __dyc_print_typdef_uint8_t(uint8_t __dyc_thistype ) ;
extern uint16_t __dyc_random_typdef_uint16_t(unsigned int __dyc_exp ) ;
extern uint16_t __dyc_read_typdef_uint16_t(void) ;
extern void __dyc_print_typdef_uint16_t(uint16_t __dyc_thistype ) ;
extern union __anonunion_ifr_ifrn_76 __dyc_random_comp_98__anonunion_ifr_ifrn_76(unsigned int __dyc_exp ) ;
extern union __anonunion_ifr_ifrn_76 __dyc_read_comp_98__anonunion_ifr_ifrn_76(void) ;
extern void __dyc_print_comp_98__anonunion_ifr_ifrn_76(union __anonunion_ifr_ifrn_76 __dyc_thistype ) ;
extern struct sockaddr *__dyc_random_ptr__comp_20sockaddr(unsigned int __dyc_exp ) ;
extern struct sockaddr *__dyc_read_ptr__comp_20sockaddr(void) ;
extern void __dyc_print_ptr__comp_20sockaddr(struct sockaddr  const  *__dyc_thistype ) ;
extern sa_family_t __dyc_random_typdef_sa_family_t(unsigned int __dyc_exp ) ;
extern sa_family_t __dyc_read_typdef_sa_family_t(void) ;
extern void __dyc_print_typdef_sa_family_t(sa_family_t __dyc_thistype ) ;
