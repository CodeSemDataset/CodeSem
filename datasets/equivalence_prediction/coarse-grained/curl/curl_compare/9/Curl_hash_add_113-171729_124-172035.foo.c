#include "../../include/dycfoo.h"
#include "../../include/hash.i.hd.c.h"
void __dyc_foo(void) 
{ struct Curl_hash_element *he ;
  struct Curl_llist_element *le ;
  struct Curl_llist *l ;
  size_t tmp ;
  size_t tmp___0 ;
  struct Curl_hash *h ;
  size_t __dyc_funcallvar_2 ;
  struct Curl_hash_element *__dyc_funcallvar_3 ;

  {
  tmp = (size_t )__dyc_readpre_byte();
  h = __dyc_read_ptr__comp_79Curl_hash();
  __dyc_funcallvar_2 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_read_ptr__comp_80Curl_hash_element();
  he = 0;
  le = 0;
  l = 0;
  tmp___0 = 0;
  l = h->table + tmp;
  le = l->head;
  while (1) {
    while_1_continue:  ;
    if (! le) {
      goto while_1_break;
    }
    {
    he = (struct Curl_hash_element *)le->ptr;
    tmp___0 = __dyc_funcallvar_2;
    }
    if (tmp___0) {
      {

      (h->size) --;
      }
      goto while_1_break;
    }
    le = le->next;
  }
  while_1_break:  ;
  he = __dyc_funcallvar_3;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_80Curl_hash_element(he);
}
}
