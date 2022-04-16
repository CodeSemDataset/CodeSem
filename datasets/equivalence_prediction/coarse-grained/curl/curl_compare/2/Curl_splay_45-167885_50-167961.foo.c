#include "../../include/dycfoo.h"
#include "../../include/splay.i.hd.c.h"
void __dyc_foo(void) 
{ struct Curl_tree N ;
  struct Curl_tree *l ;
  struct Curl_tree *r ;
  struct Curl_tree *y ;
  long comp ;
  int tmp___3 ;
  int tmp___11 ;
  int tmp___19 ;
  struct curltime i ;
  struct Curl_tree *t ;

  {
  i = __dyc_read_comp_77curltime();
  t = __dyc_read_ptr__comp_78Curl_tree();
  memset(& N, 0, sizeof(struct Curl_tree ));
  l = 0;
  r = 0;
  y = 0;
  comp = 0;
  tmp___3 = 0;
  tmp___11 = 0;
  tmp___19 = 0;
  if (! t) {
    goto __dyc_dummy_label;
  }
  N.larger = (struct Curl_tree *)((void *)0);
  N.smaller = N.larger;
  r = & N;
  l = r;
  while (1) {
    while_0_continue:  ;
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
    comp = (long )tmp___3;
    if (comp < 0L) {
      if (! t->smaller) {
        goto __dyc_dummy_label;
      }
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
    } else {
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
      } else {
        goto __dyc_dummy_label;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_78Curl_tree(l);
  __dyc_print_ptr__comp_78Curl_tree(r);
}
}
