#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ ct_data *tree ;
  ct_data const   *stree ;
  int elems ;
  int n ;
  int max_code ;
  deflate_state *s ;
  tree_desc *desc ;

  {
  s = __dyc_read_ptr__typdef_deflate_state();
  desc = __dyc_read_ptr__typdef_tree_desc();
  tree = 0;
  stree = 0;
  elems = 0;
  n = 0;
  max_code = 0;
  tree = desc->dyn_tree;
  stree = (desc->stat_desc)->static_tree;
  elems = (desc->stat_desc)->elems;
  max_code = -1;
  s->heap_len = 0;
  s->heap_max = 573;
  n = 0;
  while (1) {
    while_25_continue:  ;
    if (! (n < elems)) {
      goto __dyc_dummy_label;
    }
    if ((int )(tree + n)->fc.freq != 0) {
      (s->heap_len) ++;
      max_code = n;
      s->heap[s->heap_len] = max_code;
      s->depth[n] = (unsigned char)0;
    } else {
      (tree + n)->dl.len = (unsigned short)0;
    }
    n ++;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ct_data(tree);
  __dyc_print_ptr__typdef_ct_data(stree);
  __dyc_printpre_byte(max_code);
}
}
