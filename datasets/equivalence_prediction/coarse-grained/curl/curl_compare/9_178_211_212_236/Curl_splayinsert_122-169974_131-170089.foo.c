#include "../../include/dycfoo.h"
#include "../../include/splay.i.hd.c.h"
void __dyc_foo(void) 
{ struct curltime KEY_NOTUSED ;
  int tmp___11 ;
  struct curltime i ;
  struct Curl_tree *t ;
  struct Curl_tree *node ;

  {
  KEY_NOTUSED = (struct curltime  const  )__dyc_read_comp_77curltime();
  i = __dyc_read_comp_77curltime();
  t = __dyc_read_ptr__comp_78Curl_tree();
  node = __dyc_read_ptr__comp_78Curl_tree();
  tmp___11 = 0;
  node->key = (struct curltime )KEY_NOTUSED;
  node->samen = t;
  node->samep = t->samep;
  (t->samep)->samen = node;
  t->samep = node;
  goto __dyc_dummy_label;
  tmp___11 = -1;
  if (i.tv_sec > t->key.tv_sec) {
    tmp___11 = 1;
  } else {
    if (i.tv_usec < t->key.tv_usec) {
      tmp___11 = -1;
    } else {
      if (i.tv_usec > t->key.tv_usec) {
        tmp___11 = 1;
      } else {
        tmp___11 = 0;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___11);
}
}
