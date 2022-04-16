#include "../../include/dycfoo.h"
#include "../../include/splay.i.hd.c.h"
void __dyc_foo(void) 
{ struct curltime KEY_NOTUSED___0 ;
  int tmp___3 ;
  struct Curl_tree *removenode ;

  {
  KEY_NOTUSED___0 = (struct curltime  const  )__dyc_read_comp_77curltime();
  removenode = __dyc_read_ptr__comp_78Curl_tree();
  tmp___3 = 0;
  if (! removenode) {
    goto __dyc_dummy_label;
  }
  tmp___3 = -1;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___3);
}
}
