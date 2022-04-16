#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ ct_data *tree ;
  ct_data const   *stree ;
  int n ;
  int max_code ;
  int node ;
  deflate_state *s ;
  tree_desc *desc ;

  {
  tree = __dyc_read_ptr__typdef_ct_data();
  stree = (ct_data const   *)__dyc_read_ptr__typdef_ct_data();
  max_code = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  desc = __dyc_read_ptr__typdef_tree_desc();
  n = 0;
  node = 0;
  while (1) {
    while_26_continue:  ;
    if (! (s->heap_len < 2)) {
      goto while_26_break;
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
  }
  while_26_break:  ;
  desc->max_code = max_code;
  n = s->heap_len / 2;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(n);
}
}
