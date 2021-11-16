#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 30 "/home/chenqian/Downloads/curl-curl-7_79_0/lib/llist.h"
struct Curl_llist_element {
   void *ptr ;
   struct Curl_llist_element *prev ;
   struct Curl_llist_element *next ;
};
#line 36 "/home/chenqian/Downloads/curl-curl-7_79_0/lib/llist.h"
struct Curl_llist {
   struct Curl_llist_element *head ;
   struct Curl_llist_element *tail ;
   void (*dtor)(void * , void * ) ;
   size_t size ;
};
#line 46 "/home/chenqian/Downloads/curl-curl-7_79_0/lib/hash.h"
struct Curl_hash {
   struct Curl_llist *table ;
   size_t (*hash_func)(void *key , size_t key_length , size_t slots_num ) ;
   size_t (*comp_func)(void *key1 , size_t key1_len , void *key2 ,
                       size_t key2_len ) ;
   void (*dtor)(void * ) ;
   int slots ;
   size_t size ;
};
#line 59 "/home/chenqian/Downloads/curl-curl-7_79_0/lib/hash.h"
struct Curl_hash_element {
   struct Curl_llist_element list ;
   void *ptr ;
   size_t key_len ;
   char key[1] ;
};
#line 66 "/home/chenqian/Downloads/curl-curl-7_79_0/lib/hash.h"
struct Curl_hash_iterator {
   struct Curl_hash *hash ;
   int slot_index ;
   struct Curl_llist_element *current_element ;
};
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct Curl_llist_element *__dyc_random_ptr__comp_77Curl_llist_element(unsigned int __dyc_exp ) ;
extern struct Curl_llist_element *__dyc_read_ptr__comp_77Curl_llist_element(void) ;
extern void __dyc_print_ptr__comp_77Curl_llist_element(struct Curl_llist_element  const  *__dyc_thistype ) ;
extern struct Curl_hash_iterator __dyc_random_comp_81Curl_hash_iterator(unsigned int __dyc_exp ) ;
extern struct Curl_hash_iterator __dyc_read_comp_81Curl_hash_iterator(void) ;
extern void __dyc_print_comp_81Curl_hash_iterator(struct Curl_hash_iterator __dyc_thistype ) ;
extern struct Curl_hash *__dyc_random_ptr__comp_79Curl_hash(unsigned int __dyc_exp ) ;
extern struct Curl_hash *__dyc_read_ptr__comp_79Curl_hash(void) ;
extern void __dyc_print_ptr__comp_79Curl_hash(struct Curl_hash  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct Curl_llist *__dyc_random_ptr__comp_78Curl_llist(unsigned int __dyc_exp ) ;
extern struct Curl_llist *__dyc_read_ptr__comp_78Curl_llist(void) ;
extern void __dyc_print_ptr__comp_78Curl_llist(struct Curl_llist  const  *__dyc_thistype ) ;
extern struct Curl_llist_element __dyc_random_comp_77Curl_llist_element(unsigned int __dyc_exp ) ;
extern struct Curl_llist_element __dyc_read_comp_77Curl_llist_element(void) ;
extern void __dyc_print_comp_77Curl_llist_element(struct Curl_llist_element __dyc_thistype ) ;
extern struct Curl_hash_element __dyc_random_comp_80Curl_hash_element(unsigned int __dyc_exp ) ;
extern struct Curl_hash_element __dyc_read_comp_80Curl_hash_element(void) ;
extern void __dyc_print_comp_80Curl_hash_element(struct Curl_hash_element __dyc_thistype ) ;
extern struct Curl_hash_iterator *__dyc_random_ptr__comp_81Curl_hash_iterator(unsigned int __dyc_exp ) ;
extern struct Curl_hash_iterator *__dyc_read_ptr__comp_81Curl_hash_iterator(void) ;
extern void __dyc_print_ptr__comp_81Curl_hash_iterator(struct Curl_hash_iterator  const  *__dyc_thistype ) ;
extern struct Curl_hash_element *__dyc_random_ptr__comp_80Curl_hash_element(unsigned int __dyc_exp ) ;
extern struct Curl_hash_element *__dyc_read_ptr__comp_80Curl_hash_element(void) ;
extern void __dyc_print_ptr__comp_80Curl_hash_element(struct Curl_hash_element  const  *__dyc_thistype ) ;
extern struct Curl_llist __dyc_random_comp_78Curl_llist(unsigned int __dyc_exp ) ;
extern struct Curl_llist __dyc_read_comp_78Curl_llist(void) ;
extern void __dyc_print_comp_78Curl_llist(struct Curl_llist __dyc_thistype ) ;
extern struct Curl_hash __dyc_random_comp_79Curl_hash(unsigned int __dyc_exp ) ;
extern struct Curl_hash __dyc_read_comp_79Curl_hash(void) ;
extern void __dyc_print_comp_79Curl_hash(struct Curl_hash __dyc_thistype ) ;
