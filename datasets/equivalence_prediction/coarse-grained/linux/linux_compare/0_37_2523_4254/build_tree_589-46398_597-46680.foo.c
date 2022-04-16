#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ ct_data *tree ;
  int n ;
  int m ;
  int node ;
  int tmp ;
  uch _x ;
  deflate_state *s ;

  {
  tree = __dyc_read_ptr__typdef_ct_data();
  node = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  n = 0;
  m = 0;
  tmp = 0;
  _x = 0;
  n = s->heap[1];
  tmp = s->heap_len;
  (s->heap_len) --;
  s->heap[1] = s->heap[tmp];

  m = s->heap[1];
  (s->heap_max) --;
  s->heap[s->heap_max] = n;
  (s->heap_max) --;
  s->heap[s->heap_max] = m;
  (tree + node)->fc.freq = (unsigned short )((int )(tree + n)->fc.freq + (int )(tree + m)->fc.freq);
  _x = s->depth[n];
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(_x);
}
}
