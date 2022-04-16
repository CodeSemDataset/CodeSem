#include "../../include/dycfoo.h"
#include "../../include/splay.i.hd.c.h"
void __dyc_foo(void) 
{ struct Curl_tree *l ;
  struct Curl_tree *r ;
  struct Curl_tree *y ;
  long comp ;
  int tmp___11 ;
  int tmp___19 ;
  struct curltime i ;
  struct Curl_tree *t ;

  {
  l = __dyc_read_ptr__comp_78Curl_tree();
  r = __dyc_read_ptr__comp_78Curl_tree();
  comp = (long )__dyc_readpre_byte();
  tmp___11 = __dyc_readpre_byte();
  i = __dyc_read_comp_77curltime();
  t = __dyc_read_ptr__comp_78Curl_tree();
  y = 0;
  tmp___19 = 0;
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
  if (comp > 0L) {
    if (! t->larger) {
      goto __dyc_dummy_label;
    }
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
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_78Curl_tree(l);
  __dyc_print_ptr__comp_78Curl_tree(r);
  __dyc_print_ptr__comp_78Curl_tree(t);
}
}
