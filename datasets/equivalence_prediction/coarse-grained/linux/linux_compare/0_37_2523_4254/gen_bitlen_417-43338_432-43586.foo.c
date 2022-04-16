#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ ct_data *tree ;
  int max_code ;
  ct_data const   *stree ;
  int const   *extra ;
  int base ;
  int max_length ;
  int h ;
  int n ;
  int bits ;
  int xbits ;
  ush f ;
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
  h = 0;
  n = 0;
  bits = 0;
  xbits = 0;
  f = 0;
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
      goto while_17_break;
    }
    s->bl_count[bits] = (unsigned short)0;
    bits ++;
  }
  while_17_break:  ;
  (tree + s->heap[s->heap_max])->dl.len = (unsigned short)0;
  h = s->heap_max + 1;
  while (1) {
    while_18_continue:  ;
    if (! (h < 573)) {
      goto __dyc_dummy_label;
    }
    n = s->heap[h];
    bits = (int )(tree + (tree + n)->dl.dad)->dl.len + 1;
    if (bits > max_length) {
      bits = max_length;
      overflow ++;
    }
    (tree + n)->dl.len = (unsigned short )bits;
    if (n > max_code) {
      goto __Cont;
    }
    s->bl_count[bits] = (ush )((int )s->bl_count[bits] + 1);
    xbits = 0;
    if (n >= base) {
      xbits = (int )*(extra + (n - base));
    }
    f = (tree + n)->fc.freq;
    s->opt_len += (unsigned long )f * (unsigned long )(bits + xbits);
    if (stree) {
      s->static_len += (unsigned long )f * (unsigned long )((int const   )(stree + n)->dl.len + (int const   )xbits);
    }
    __Cont:  
    h ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(max_code);
  __dyc_print_ptr__typdef_ct_data(stree);
  __dyc_print_ptr__int(extra);
  __dyc_printpre_byte(base);
  __dyc_printpre_byte(max_length);
  __dyc_printpre_byte(overflow);
}
}
