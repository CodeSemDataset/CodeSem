#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ ct_data *tree ;
  int max_code ;
  int max_length ;
  int h ;
  int n ;
  int bits ;
  int xbits ;
  int overflow ;
  deflate_state *s ;

  {
  tree = __dyc_read_ptr__typdef_ct_data();
  max_code = __dyc_readpre_byte();
  max_length = __dyc_readpre_byte();
  h = __dyc_readpre_byte();
  overflow = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  n = 0;
  bits = 0;
  xbits = 0;
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
    goto __dyc_dummy_label;
  }
  s->bl_count[bits] = (ush )((int )s->bl_count[bits] + 1);
  xbits = 0;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(xbits);
  __dyc_printpre_byte(overflow);
}
}
