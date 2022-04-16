#include "../../include/dycfoo.h"
#include "../../include/splay.i.hd.c.h"
void __dyc_foo(void) 
{ struct Curl_tree *l ;
  struct Curl_tree *y ;
  int tmp___19 ;
  struct curltime i ;
  struct Curl_tree *t ;

  {
  l = __dyc_read_ptr__comp_78Curl_tree();
  i = __dyc_read_comp_77curltime();
  t = __dyc_read_ptr__comp_78Curl_tree();
  y = 0;
  tmp___19 = 0;
  if (i.tv_sec < (t->larger)->key.tv_sec) {
    tmp___19 = -1;
  } else {
    if (i.tv_sec > (t->larger)->key.tv_sec) {
      tmp___19 = 1;
    } else {
      if (i.tv_usec < (t->larger)->key.tv_usec) {
        tmp___19 = -1;
      } else {
        if (i.tv_usec > (t->larger)->key.tv_usec) {
          tmp___19 = 1;
        } else {
          tmp___19 = 0;
        }
      }
    }
  }
  if (tmp___19 > 0) {
    y = t->larger;
    t->larger = y->smaller;
    y->smaller = t;
    t = y;
    if (! t->larger) {
      goto __dyc_dummy_label;
    }
  }
  l->larger = t;
  l = t;
  t = t->larger;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_78Curl_tree(l);
  __dyc_print_ptr__comp_78Curl_tree(t);
}
}
