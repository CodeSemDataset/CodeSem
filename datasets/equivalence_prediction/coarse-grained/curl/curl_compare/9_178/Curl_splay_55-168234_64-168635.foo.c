#include "../../include/dycfoo.h"
#include "../../include/splay.i.hd.c.h"
void __dyc_foo(void) 
{ struct Curl_tree *r ;
  struct Curl_tree *y ;
  int tmp___11 ;
  struct curltime i ;
  struct Curl_tree *t ;

  {
  r = __dyc_read_ptr__comp_78Curl_tree();
  i = __dyc_read_comp_77curltime();
  t = __dyc_read_ptr__comp_78Curl_tree();
  y = 0;
  tmp___11 = 0;
  if (i.tv_sec < (t->smaller)->key.tv_sec) {
    tmp___11 = -1;
  } else {
    if (i.tv_sec > (t->smaller)->key.tv_sec) {
      tmp___11 = 1;
    } else {
      if (i.tv_usec < (t->smaller)->key.tv_usec) {
        tmp___11 = -1;
      } else {
        if (i.tv_usec > (t->smaller)->key.tv_usec) {
          tmp___11 = 1;
        } else {
          tmp___11 = 0;
        }
      }
    }
  }
  if (tmp___11 < 0) {
    y = t->smaller;
    t->smaller = y->larger;
    y->larger = t;
    t = y;
    if (! t->smaller) {
      goto __dyc_dummy_label;
    }
  }
  r->smaller = t;
  r = t;
  t = t->smaller;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_78Curl_tree(r);
  __dyc_print_ptr__comp_78Curl_tree(t);
}
}
