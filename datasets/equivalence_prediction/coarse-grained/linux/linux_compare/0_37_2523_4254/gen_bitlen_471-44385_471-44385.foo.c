#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ ct_data *tree ;
  int max_code ;
  int h ;
  int n ;
  int m ;
  int bits ;
  deflate_state *s ;

  {
  tree = __dyc_read_ptr__typdef_ct_data();
  max_code = __dyc_readpre_byte();
  h = __dyc_readpre_byte();
  bits = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  n = 0;
  m = 0;
  if (! (bits != 0)) {
    goto __dyc_dummy_label;
  }
  n = (int )s->bl_count[bits];
  while (1) {
    while_22_continue:  ;
    if (! (n != 0)) {
      goto while_22_break;
    }
    h --;
    m = s->heap[h];
    if (m > max_code) {
      goto while_22_continue;
    }
    if ((unsigned int )(tree + m)->dl.len != (unsigned int )bits) {
      s->opt_len += (ulg )(((long )bits - (long )(tree + m)->dl.len) * (long )(tree + m)->fc.freq);
      (tree + m)->dl.len = (unsigned short )bits;
    }
    n --;
  }
  while_22_break:  ;
  bits --;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(bits);
}
}
