#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ ct_data *tree ;
  int elems ;
  int n ;
  int m ;
  int node ;
  int tmp ;
  uch _x ;
  uch _y ;
  int tmp___0 ;
  int tmp___1 ;
  deflate_state *s ;

  {
  tree = __dyc_read_ptr__typdef_ct_data();
  elems = __dyc_readpre_byte();
  n = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  m = 0;
  node = 0;
  tmp = 0;
  _x = 0;
  _y = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  while (1) {
    while_27_continue:  ;
    if (! (n >= 1)) {
      goto while_27_break;
    }
    {

    n --;
    }
  }
  while_27_break:  ;
  node = elems;
  while (1) {
    while_28_continue:  ;
    {
    n = s->heap[1];
    tmp = s->heap_len;
    (s->heap_len) --;
    s->heap[1] = s->heap[tmp];

    m = s->heap[1];
    (s->heap_max) --;
    s->heap[s->heap_max] = n;
    (s->heap_max) --;
    s->heap[s->heap_max] = m;
    (tree + node)->fc.freq = (unsigned short )((int )(tree + n)->fc.freq + (int )(tree + m)->fc.freq);
    _x = s->depth[n];
    _y = s->depth[m];
    }
    if ((int )_x > (int )_y) {
      tmp___0 = (int )_x;
    } else {
      tmp___0 = (int )_y;
    }
    {
    s->depth[node] = (unsigned char )(tmp___0 + 1);
    (tree + m)->dl.dad = (unsigned short )node;
    (tree + n)->dl.dad = (tree + m)->dl.dad;
    tmp___1 = node;
    node ++;
    s->heap[1] = tmp___1;

    }
    if (! (s->heap_len >= 2)) {
      goto while_28_break;
    }
  }
  while_28_break:  ;
  (s->heap_max) --;
  s->heap[s->heap_max] = s->heap[1];
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(node);
}
}
