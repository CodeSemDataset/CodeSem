#include "../../include/dycfoo.h"
#include "../../include/hash.i.hd.c.h"
void __dyc_foo(void) 
{ struct Curl_llist_element *le ;
  struct Curl_llist_element *lnext ;
  struct Curl_hash_element *he ;
  int tmp ;
  struct Curl_hash *h ;
  int (*comp)(void * , void * ) ;
  int __dyc_funcallvar_1 ;

  {
  le = __dyc_read_ptr__comp_77Curl_llist_element();
  h = __dyc_read_ptr__comp_79Curl_hash();
  comp = (int (*)(void * , void * ))__dyc_read_ptr__fun_name_is_not_here();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  lnext = 0;
  he = 0;
  tmp = 0;
  while (1) {
    while_7_continue:  ;
    if (! le) {
      goto __dyc_dummy_label;
    }
    he = (struct Curl_hash_element *)le->ptr;
    lnext = le->next;
    if (! comp) {
      {

      (h->size) --;
      }
    } else {
      {
      tmp = __dyc_funcallvar_1;
      }
      if (tmp) {
        {

        (h->size) --;
        }
      }
    }
    le = lnext;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_80Curl_hash_element(he);
}
}
