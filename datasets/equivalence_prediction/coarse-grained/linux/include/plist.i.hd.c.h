#line 21 "include/linux/list.h"
struct list_head {
   struct list_head *next ;
   struct list_head *prev ;
};
#line 80 "include/linux/plist.h"
struct plist_head {
   struct list_head prio_list ;
   struct list_head node_list ;
};
#line 88 "include/linux/plist.h"
struct plist_node {
   int prio ;
   struct plist_head plist ;
};
extern struct plist_node __dyc_random_comp_49plist_node(unsigned int __dyc_exp ) ;
extern struct plist_node __dyc_read_comp_49plist_node(void) ;
extern void __dyc_print_comp_49plist_node(struct plist_node __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct plist_head *__dyc_random_ptr__comp_48plist_head(unsigned int __dyc_exp ) ;
extern struct plist_head *__dyc_read_ptr__comp_48plist_head(void) ;
extern void __dyc_print_ptr__comp_48plist_head(struct plist_head  const  *__dyc_thistype ) ;
extern struct list_head __dyc_random_comp_39list_head(unsigned int __dyc_exp ) ;
extern struct list_head __dyc_read_comp_39list_head(void) ;
extern void __dyc_print_comp_39list_head(struct list_head __dyc_thistype ) ;
extern struct list_head *__dyc_random_ptr__comp_39list_head(unsigned int __dyc_exp ) ;
extern struct list_head *__dyc_read_ptr__comp_39list_head(void) ;
extern void __dyc_print_ptr__comp_39list_head(struct list_head  const  *__dyc_thistype ) ;
extern struct plist_node *__dyc_random_ptr__comp_49plist_node(unsigned int __dyc_exp ) ;
extern struct plist_node *__dyc_read_ptr__comp_49plist_node(void) ;
extern void __dyc_print_ptr__comp_49plist_node(struct plist_node  const  *__dyc_thistype ) ;
extern struct plist_head __dyc_random_comp_48plist_head(unsigned int __dyc_exp ) ;
extern struct plist_head __dyc_read_comp_48plist_head(void) ;
extern void __dyc_print_comp_48plist_head(struct plist_head __dyc_thistype ) ;
