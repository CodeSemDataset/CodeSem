#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 50 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef unsigned long pthread_t;
#line 53 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union __anonunion_pthread_attr_t_4 {
   char __size[56] ;
   long __align ;
};
#line 53 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union __anonunion_pthread_attr_t_4 pthread_attr_t;
#line 44 "/home/chenqian/Downloads/curl-curl-7_79_0/lib/curl_threads.c"
struct Curl_actual_call {
   unsigned int (*func)(void * ) ;
   void *arg ;
};
extern struct Curl_actual_call __dyc_random_comp_85Curl_actual_call(unsigned int __dyc_exp ) ;
extern struct Curl_actual_call __dyc_read_comp_85Curl_actual_call(void) ;
extern void __dyc_print_comp_85Curl_actual_call(struct Curl_actual_call __dyc_thistype ) ;
extern pthread_t **__dyc_random_ptr__ptr__typdef_pthread_t(unsigned int __dyc_exp ) ;
extern pthread_t **__dyc_read_ptr__ptr__typdef_pthread_t(void) ;
extern void __dyc_print_ptr__ptr__typdef_pthread_t(pthread_t * const  *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct Curl_actual_call *__dyc_random_ptr__comp_85Curl_actual_call(unsigned int __dyc_exp ) ;
extern struct Curl_actual_call *__dyc_read_ptr__comp_85Curl_actual_call(void) ;
extern void __dyc_print_ptr__comp_85Curl_actual_call(struct Curl_actual_call  const  *__dyc_thistype ) ;
extern union __anonunion_pthread_attr_t_4 __dyc_random_comp_6__anonunion_pthread_attr_t_4(unsigned int __dyc_exp ) ;
extern union __anonunion_pthread_attr_t_4 __dyc_read_comp_6__anonunion_pthread_attr_t_4(void) ;
extern void __dyc_print_comp_6__anonunion_pthread_attr_t_4(union __anonunion_pthread_attr_t_4 __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern pthread_t __dyc_random_typdef_pthread_t(unsigned int __dyc_exp ) ;
extern pthread_t __dyc_read_typdef_pthread_t(void) ;
extern void __dyc_print_typdef_pthread_t(pthread_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern pthread_attr_t __dyc_random_typdef_pthread_attr_t(unsigned int __dyc_exp ) ;
extern pthread_attr_t __dyc_read_typdef_pthread_attr_t(void) ;
extern void __dyc_print_typdef_pthread_attr_t(pthread_attr_t __dyc_thistype ) ;
extern pthread_t *__dyc_random_ptr__typdef_pthread_t(unsigned int __dyc_exp ) ;
extern pthread_t *__dyc_read_ptr__typdef_pthread_t(void) ;
extern void __dyc_print_ptr__typdef_pthread_t(pthread_t const   * __restrict  __dyc_thistype ) ;
extern void **__dyc_random_ptr__ptr__void(unsigned int __dyc_exp ) ;
extern void **__dyc_read_ptr__ptr__void(void) ;
extern void __dyc_print_ptr__ptr__void(void * const  *__dyc_thistype ) ;
extern pthread_attr_t *__dyc_random_ptr__typdef_pthread_attr_t(unsigned int __dyc_exp ) ;
extern pthread_attr_t *__dyc_read_ptr__typdef_pthread_attr_t(void) ;
extern void __dyc_print_ptr__typdef_pthread_attr_t(pthread_attr_t const   * __restrict  __dyc_thistype ) ;
