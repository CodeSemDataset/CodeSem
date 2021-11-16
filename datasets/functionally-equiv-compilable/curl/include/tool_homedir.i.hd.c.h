#line 135 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uid_t;
#line 136 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __gid_t;
#line 50 "/usr/include/pwd.h"
struct passwd {
   char *pw_name ;
   char *pw_passwd ;
   __uid_t pw_uid ;
   __gid_t pw_gid ;
   char *pw_gecos ;
   char *pw_dir ;
   char *pw_shell ;
};
extern struct passwd *__dyc_random_ptr__comp_77passwd(unsigned int __dyc_exp ) ;
extern struct passwd *__dyc_read_ptr__comp_77passwd(void) ;
extern void __dyc_print_ptr__comp_77passwd(struct passwd  const  *__dyc_thistype ) ;
extern __uid_t __dyc_random_typdef___uid_t(unsigned int __dyc_exp ) ;
extern __uid_t __dyc_read_typdef___uid_t(void) ;
extern void __dyc_print_typdef___uid_t(__uid_t __dyc_thistype ) ;
extern __gid_t __dyc_random_typdef___gid_t(unsigned int __dyc_exp ) ;
extern __gid_t __dyc_read_typdef___gid_t(void) ;
extern void __dyc_print_typdef___gid_t(__gid_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct passwd __dyc_random_comp_77passwd(unsigned int __dyc_exp ) ;
extern struct passwd __dyc_read_comp_77passwd(void) ;
extern void __dyc_print_comp_77passwd(struct passwd __dyc_thistype ) ;
