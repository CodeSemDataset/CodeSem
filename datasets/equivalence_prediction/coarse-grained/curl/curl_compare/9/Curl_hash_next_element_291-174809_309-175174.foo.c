#include "../../include/dycfoo.h"
#include "../../include/hash.i.hd.c.h"
void __dyc_foo(void) 
{ struct Curl_hash *h ;
  int i ;
  struct Curl_hash_element *he ;
  struct Curl_hash_iterator *iter ;

  {
  iter = __dyc_read_ptr__comp_81Curl_hash_iterator();
  h = 0;
  i = 0;
  he = 0;
  h = iter->hash;
  if (iter->current_element) {
    iter->current_element = (iter->current_element)->next;
  }
  if (! iter->current_element) {
    i = iter->slot_index;
    {
    while (1) {
      while_9_continue:  ;
      if (! (i < h->slots)) {
        goto while_9_break;
      }
      if ((h->table + i)->head) {
        iter->current_element = (h->table + i)->head;
        iter->slot_index = i + 1;
        goto while_9_break;
      }
      i ++;
    }
    while_9_break:  ;
    }
  }
  if (iter->current_element) {
    he = (struct Curl_hash_element *)(iter->current_element)->ptr;
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_79Curl_hash(h);
  __dyc_print_ptr__comp_80Curl_hash_element(he);
}
}
