#line 149 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __time_t;
#line 76 "/usr/include/time.h"
typedef __time_t time_t;
#line 35 "/home/chenqian/Downloads/curl-curl-7_79_0/lib/timeval.h"
struct curltime {
   time_t tv_sec ;
   int tv_usec ;
};
#line 27 "/home/chenqian/Downloads/curl-curl-7_79_0/lib/splay.h"
struct Curl_tree {
   struct Curl_tree *smaller ;
   struct Curl_tree *larger ;
   struct Curl_tree *samen ;
   struct Curl_tree *samep ;
   struct curltime key ;
   void *payload ;
};
extern time_t __dyc_random_typdef_time_t(unsigned int __dyc_exp ) ;
extern time_t __dyc_read_typdef_time_t(void) ;
extern void __dyc_print_typdef_time_t(time_t __dyc_thistype ) ;
extern struct Curl_tree *__dyc_random_ptr__comp_78Curl_tree(unsigned int __dyc_exp ) ;
extern struct Curl_tree *__dyc_read_ptr__comp_78Curl_tree(void) ;
extern void __dyc_print_ptr__comp_78Curl_tree(struct Curl_tree  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern __time_t __dyc_random_typdef___time_t(unsigned int __dyc_exp ) ;
extern __time_t __dyc_read_typdef___time_t(void) ;
extern void __dyc_print_typdef___time_t(__time_t __dyc_thistype ) ;
extern struct curltime __dyc_random_comp_77curltime(unsigned int __dyc_exp ) ;
extern struct curltime __dyc_read_comp_77curltime(void) ;
extern void __dyc_print_comp_77curltime(struct curltime __dyc_thistype ) ;
extern struct Curl_tree **__dyc_random_ptr__ptr__comp_78Curl_tree(unsigned int __dyc_exp ) ;
extern struct Curl_tree **__dyc_read_ptr__ptr__comp_78Curl_tree(void) ;
extern void __dyc_print_ptr__ptr__comp_78Curl_tree(struct Curl_tree * const  *__dyc_thistype ) ;
extern struct Curl_tree __dyc_random_comp_78Curl_tree(unsigned int __dyc_exp ) ;
extern struct Curl_tree __dyc_read_comp_78Curl_tree(void) ;
extern void __dyc_print_comp_78Curl_tree(struct Curl_tree __dyc_thistype ) ;
