#include "../../include/dycfoo.h"
#include "../../include/splay.i.hd.c.h"
void __dyc_foo(void) 
{ int tmp___3 ;
  struct curltime i ;
  struct Curl_tree *t ;
  struct Curl_tree **removed ;

  {
  i = __dyc_read_comp_77curltime();
  t = __dyc_read_ptr__comp_78Curl_tree();
  removed = __dyc_read_ptr__ptr__comp_78Curl_tree();
  tmp___3 = 0;
  *removed = (struct Curl_tree *)((void *)0);
  goto __dyc_dummy_label;
  tmp___3 = -1;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___3);
}
}
