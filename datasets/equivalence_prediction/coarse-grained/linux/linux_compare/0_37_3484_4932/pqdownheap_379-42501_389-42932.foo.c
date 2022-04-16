#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int v ;
  int j ;
  deflate_state *s ;
  ct_data *tree ;
  int k ;

  {
  v = __dyc_readpre_byte();
  j = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  tree = __dyc_read_ptr__typdef_ct_data();
  k = __dyc_readpre_byte();

  if (! (j <= s->heap_len)) {
    goto __dyc_dummy_label;
  }
  if (j < s->heap_len) {
    if ((int )(tree + s->heap[j + 1])->fc.freq < (int )(tree + s->heap[j])->fc.freq) {
      j ++;
    } else {
      if ((int )(tree + s->heap[j + 1])->fc.freq == (int )(tree + s->heap[j])->fc.freq) {
        if ((int )s->depth[s->heap[j + 1]] <= (int )s->depth[s->heap[j]]) {
          j ++;
        }
      }
    }
  }
  if ((int )(tree + v)->fc.freq < (int )(tree + s->heap[j])->fc.freq) {
    goto __dyc_dummy_label;
  } else {
    if ((int )(tree + v)->fc.freq == (int )(tree + s->heap[j])->fc.freq) {
      if ((int )s->depth[v] <= (int )s->depth[s->heap[j]]) {
        goto __dyc_dummy_label;
      }
    }
  }
  s->heap[k] = s->heap[j];
  k = j;
  j <<= 1;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(j);
  __dyc_printpre_byte(k);
}
}
