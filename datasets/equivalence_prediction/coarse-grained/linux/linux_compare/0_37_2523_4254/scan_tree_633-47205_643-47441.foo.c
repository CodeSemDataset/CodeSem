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
  s = __dyc_read_ptr__typdef_deflate_state();
  tree = __dyc_read_ptr__typdef_ct_data();
  max_code = __dyc_readpre_byte();
  n = 0;
  prevlen = 0;
  curlen = 0;
  nextlen = 0;
  count = 0;
  max_count = 0;
  min_count = 0;
  prevlen = -1;
  nextlen = (int )(tree + 0)->dl.len;
  count = 0;
  max_count = 7;
  min_count = 4;
  if (nextlen == 0) {
    max_count = 138;
    min_count = 3;
  }
  (tree + (max_code + 1))->dl.len = (unsigned short)65535;
  n = 0;
  while (1) {
    while_29_continue:  ;
    if (! (n <= max_code)) {
      goto __dyc_dummy_label;
    }
    curlen = nextlen;
    nextlen = (int )(tree + (n + 1))->dl.len;
    count ++;
    if (count < max_count) {
      if (curlen == nextlen) {
        goto __Cont;
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
    if (nextlen == 0) {
      max_count = 138;
      min_count = 3;
    } else {
      if (curlen == nextlen) {
        max_count = 6;
        min_count = 3;
      } else {
        max_count = 7;
        min_count = 4;
      }
    }
    __Cont:  
    n ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(prevlen);
  __dyc_printpre_byte(count);
  __dyc_printpre_byte(max_count);
  __dyc_printpre_byte(min_count);
}
}
