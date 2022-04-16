#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ ct_data *tree ;
  ct_data const   *stree ;
  int n ;
  int max_code ;
  int node ;
  deflate_state *s ;

  {
  tree = __dyc_read_ptr__typdef_ct_data();
  stree = (ct_data const   *)__dyc_read_ptr__typdef_ct_data();
  n = __dyc_readpre_byte();
  max_code = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  node = 0;
  n ++;
  while_26_continue:  ;
  if (! (s->heap_len < 2)) {
    goto __dyc_dummy_label;
  }
  (s->heap_len) ++;
  if (max_code < 2) {
    max_code ++;
    s->heap[s->heap_len] = max_code;
  } else {
    s->heap[s->heap_len] = 0;
  }
  node = s->heap[s->heap_len];
  (tree + node)->fc.freq = (unsigned short)1;
  s->depth[node] = (unsigned char)0;
  (s->opt_len) --;
  if (stree) {
    s->static_len -= (ulg )(stree + node)->dl.len;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(n);
}
}
