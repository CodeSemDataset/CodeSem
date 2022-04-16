#include "../../include/dycfoo.h"
#include "../../include/hash.i.hd.c.h"
void __dyc_foo(void) 
{ struct Curl_llist_element *le ;
  struct Curl_llist *l ;
  size_t tmp ;
  struct Curl_hash_element *he ;
  size_t tmp___0 ;
  struct Curl_hash *h ;
  size_t __dyc_funcallvar_1 ;
  size_t __dyc_funcallvar_2 ;

  {
  h = __dyc_read_ptr__comp_79Curl_hash();
  __dyc_funcallvar_1 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (size_t )__dyc_readpre_byte();
  le = 0;
  l = 0;
  tmp = 0;
  he = 0;
  tmp___0 = 0;
  tmp = __dyc_funcallvar_1;
  l = h->table + tmp;
  le = l->head;
  while (1) {
    while_2_continue:  ;
    if (! le) {
      goto __dyc_dummy_label;
    }
    {
    he = (struct Curl_hash_element *)le->ptr;
    tmp___0 = __dyc_funcallvar_2;
    }
    if (tmp___0) {
      {

      (h->size) --;
      }
      goto __dyc_dummy_label;
    }
    le = le->next;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_80Curl_hash_element(he);
}
}
