#include "../../include/dycfoo.h"
#include "../../include/splay.i.hd.c.h"
void __dyc_foo(void) 
{ struct curltime KEY_NOTUSED___0 ;
  struct Curl_tree *x ;
  int tmp___3 ;
  struct Curl_tree *t ;
  struct Curl_tree *removenode ;
  struct Curl_tree **newroot ;
  struct Curl_tree *__dyc_funcallvar_1 ;

  {
  KEY_NOTUSED___0 = (struct curltime  const  )__dyc_read_comp_77curltime();
  t = __dyc_read_ptr__comp_78Curl_tree();
  removenode = __dyc_read_ptr__comp_78Curl_tree();
  newroot = __dyc_read_ptr__ptr__comp_78Curl_tree();
  __dyc_funcallvar_1 = __dyc_read_ptr__comp_78Curl_tree();
  x = 0;
  tmp___3 = 0;
  if (KEY_NOTUSED___0.tv_sec < (time_t const   )removenode->key.tv_sec) {
    tmp___3 = -1;
  } else {
    if (KEY_NOTUSED___0.tv_sec > (time_t const   )removenode->key.tv_sec) {
      tmp___3 = 1;
    } else {
      if (KEY_NOTUSED___0.tv_usec < (int const   )removenode->key.tv_usec) {
        tmp___3 = -1;
      } else {
        if (KEY_NOTUSED___0.tv_usec > (int const   )removenode->key.tv_usec) {
          tmp___3 = 1;
        } else {
          tmp___3 = 0;
        }
      }
    }
  }
  if (tmp___3 == 0) {
    if ((unsigned long )removenode->samen == (unsigned long )removenode) {
      goto __dyc_dummy_label;
    }
    (removenode->samep)->samen = removenode->samen;
    (removenode->samen)->samep = removenode->samep;
    removenode->samen = removenode;
    *newroot = t;
    goto __dyc_dummy_label;
  }
  t = __dyc_funcallvar_1;
  if ((unsigned long )t != (unsigned long )removenode) {
    goto __dyc_dummy_label;
  }
  x = t->samen;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_78Curl_tree(x);
}
}
