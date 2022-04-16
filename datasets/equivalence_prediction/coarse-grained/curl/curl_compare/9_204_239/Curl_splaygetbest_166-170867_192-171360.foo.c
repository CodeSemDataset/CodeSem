#include "../../include/dycfoo.h"
#include "../../include/splay.i.hd.c.h"
void __dyc_foo(void) 
{ struct Curl_tree *x ;
  int tmp___3 ;
  struct curltime i ;
  struct Curl_tree *t ;
  struct Curl_tree **removed ;
  struct Curl_tree *__dyc_funcallvar_1 ;

  {
  i = __dyc_read_comp_77curltime();
  removed = __dyc_read_ptr__ptr__comp_78Curl_tree();
  __dyc_funcallvar_1 = __dyc_read_ptr__comp_78Curl_tree();
  x = 0;
  tmp___3 = 0;
  t = 0;
  t = __dyc_funcallvar_1;
  if (i.tv_sec < t->key.tv_sec) {
    tmp___3 = -1;
  } else {
    if (i.tv_sec > t->key.tv_sec) {
      tmp___3 = 1;
    } else {
      if (i.tv_usec < t->key.tv_usec) {
        tmp___3 = -1;
      } else {
        if (i.tv_usec > t->key.tv_usec) {
          tmp___3 = 1;
        } else {
          tmp___3 = 0;
        }
      }
    }
  }
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
