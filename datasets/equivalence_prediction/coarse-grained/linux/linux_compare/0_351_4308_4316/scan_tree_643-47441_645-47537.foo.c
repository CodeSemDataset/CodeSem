#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int n ;
  int prevlen ;
  int curlen ;
  int nextlen ;
  int count ;
  int max_count ;
  int min_count ;
  deflate_state *s ;
  ct_data *tree ;
  int max_code ;

  {
  n = __dyc_readpre_byte();
  prevlen = __dyc_readpre_byte();
  nextlen = __dyc_readpre_byte();
  count = __dyc_readpre_byte();
  max_count = __dyc_readpre_byte();
  min_count = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  tree = __dyc_read_ptr__typdef_ct_data();
  max_code = __dyc_readpre_byte();
  curlen = 0;
  if (! (n <= max_code)) {
    goto __dyc_dummy_label;
  }
  curlen = nextlen;
  nextlen = (int )(tree + (n + 1))->dl.len;
  count ++;
  if (count < max_count) {
    if (curlen == nextlen) {
      goto __dyc_dummy_label;
    } else {
      goto _L;
    }
  } else {
    _L:  
    if (count < min_count) {
      s->bl_tree[curlen].fc.freq = (unsigned short )((int )s->bl_tree[curlen].fc.freq + count);
    } else {
      if (curlen != 0) {
        if (curlen != prevlen) {
          s->bl_tree[curlen].fc.freq = (ush )((int )s->bl_tree[curlen].fc.freq + 1);
        }
        s->bl_tree[16].fc.freq = (ush )((int )s->bl_tree[16].fc.freq + 1);
      } else {
        if (count <= 10) {
          s->bl_tree[17].fc.freq = (ush )((int )s->bl_tree[17].fc.freq + 1);
        } else {
          s->bl_tree[18].fc.freq = (ush )((int )s->bl_tree[18].fc.freq + 1);
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(nextlen);
}
}
