#include "../../include/dycfoo.h"
#include "../../include/splay.i.hd.c.h"
void __dyc_foo(void) 
{ struct Curl_tree *x ;
  int tmp___3 ;
  struct Curl_tree *t ;
  struct Curl_tree **removed ;

  {
  tmp___3 = __dyc_readpre_byte();
  t = __dyc_read_ptr__comp_78Curl_tree();
  removed = __dyc_read_ptr__ptr__comp_78Curl_tree();
  x = 0;
  if (tmp___3 < 0) {
    *removed = (struct Curl_tree *)((void *)0);
    goto __dyc_dummy_label;
  }
  x = t->samen;
  if ((unsigned long )x != (unsigned long )t) {
    x->key = t->key;
    x->larger = t->larger;
    x->smaller = t->smaller;
    x->samep = t->samep;
    (t->samep)->samen = x;
    *removed = t;
    goto __dyc_dummy_label;
  }
  x = t->larger;
  *removed = t;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_78Curl_tree(x);
}
}
