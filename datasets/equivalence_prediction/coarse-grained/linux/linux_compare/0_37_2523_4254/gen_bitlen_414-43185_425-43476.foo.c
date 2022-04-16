#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ ct_data *tree ;
  int max_code ;
  ct_data const   *stree ;
  int const   *extra ;
  int base ;
  int max_length ;
  int bits ;
  int overflow ;
  deflate_state *s ;
  tree_desc *desc ;

  {
  s = __dyc_read_ptr__typdef_deflate_state();
  desc = __dyc_read_ptr__typdef_tree_desc();
  tree = 0;
  max_code = 0;
  stree = 0;
  extra = 0;
  base = 0;
  max_length = 0;
  bits = 0;
  overflow = 0;
  tree = desc->dyn_tree;
  max_code = desc->max_code;
  stree = (desc->stat_desc)->static_tree;
  extra = (desc->stat_desc)->extra_bits;
  base = (desc->stat_desc)->extra_base;
  max_length = (desc->stat_desc)->max_length;
  overflow = 0;
  bits = 0;
  while (1) {
    while_17_continue:  ;
    if (! (bits <= 15)) {
      goto __dyc_dummy_label;
    }
    s->bl_count[bits] = (unsigned short)0;
    bits ++;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ct_data(tree);
  __dyc_printpre_byte(max_code);
  __dyc_print_ptr__typdef_ct_data(stree);
  __dyc_print_ptr__int(extra);
  __dyc_printpre_byte(base);
  __dyc_printpre_byte(max_length);
  __dyc_printpre_byte(overflow);
}
}
