#include "../../include/dycfoo.h"
#include "../../include/splay.i.hd.c.h"
void __dyc_foo(void) 
{ struct Curl_tree *x ;
  struct Curl_tree *t ;
  struct Curl_tree *removenode ;
  struct Curl_tree *__dyc_funcallvar_2 ;

  {
  t = __dyc_read_ptr__comp_78Curl_tree();
  removenode = __dyc_read_ptr__comp_78Curl_tree();
  __dyc_funcallvar_2 = __dyc_read_ptr__comp_78Curl_tree();
  x = 0;
  if ((unsigned long )t != (unsigned long )removenode) {
    goto __dyc_dummy_label;
  }
  x = t->samen;
  if ((unsigned long )x != (unsigned long )t) {
    x->key = t->key;
    x->larger = t->larger;
    x->smaller = t->smaller;
    x->samep = t->samep;
    (t->samep)->samen = x;
  } else {
    if (! t->smaller) {
      x = t->larger;
    } else {
      {
      x = __dyc_funcallvar_2;
      x->larger = t->larger;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_78Curl_tree(x);
}
}
