#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ ct_data *tree ;
  int n ;
  int m ;
  int node ;
  uch _x ;
  uch _y ;
  int tmp___0 ;
  int tmp___1 ;
  deflate_state *s ;

  {
  tree = __dyc_read_ptr__typdef_ct_data();
  n = __dyc_readpre_byte();
  m = __dyc_readpre_byte();
  node = __dyc_readpre_byte();
  _x = (uch )__dyc_readpre_byte();
  _y = (uch )__dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  tmp___0 = 0;
  tmp___1 = 0;
  if ((int )_x > (int )_y) {
    tmp___0 = (int )_x;
  } else {
    tmp___0 = (int )_y;
  }
  s->depth[node] = (unsigned char )(tmp___0 + 1);
  (tree + m)->dl.dad = (unsigned short )node;
  (tree + n)->dl.dad = (tree + m)->dl.dad;
  tmp___1 = node;
  node ++;
  s->heap[1] = tmp___1;

  if (s->heap_len >= 2) {

  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(node);
}
}
