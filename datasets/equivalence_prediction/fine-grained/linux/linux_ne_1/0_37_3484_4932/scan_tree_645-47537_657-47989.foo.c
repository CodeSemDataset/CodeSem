#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int prevlen ;
  int curlen ;
  int nextlen ;
  int count ;
  int max_count ;
  int min_count ;
  deflate_state *s ;

  {
  prevlen = __dyc_readpre_byte();
  curlen = __dyc_readpre_byte();
  nextlen = __dyc_readpre_byte();
  count = __dyc_readpre_byte();
  max_count = __dyc_readpre_byte();
  min_count = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();

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
  count = 0;
  prevlen = curlen;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(prevlen);
  __dyc_printpre_byte(count);
}
}
