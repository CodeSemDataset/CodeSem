#include "../../include/dycfoo.h"
#include "../../include/hash.i.hd.c.h"
void __dyc_foo(void) 
{ struct Curl_llist_element *le ;
  struct Curl_llist_element *lnext ;
  struct Curl_llist *list ;
  int i ;
  struct Curl_hash_element *he ;
  int tmp ;
  struct Curl_hash *h ;
  int (*comp)(void * , void * ) ;
  int __dyc_funcallvar_1 ;

  {
  i = __dyc_readpre_byte();
  h = __dyc_read_ptr__comp_79Curl_hash();
  comp = (int (*)(void * , void * ))__dyc_read_ptr__fun_name_is_not_here();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  le = 0;
  lnext = 0;
  list = 0;
  he = 0;
  tmp = 0;
  if (! (i < h->slots)) {
    goto __dyc_dummy_label;
  }
  list = h->table + i;
  le = list->head;
  while (1) {
    while_7_continue:  ;
    if (! le) {
      goto while_7_break;
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
  while_7_break:  ;
  i ++;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
  __dyc_print_ptr__comp_80Curl_hash_element(he);
}
}
