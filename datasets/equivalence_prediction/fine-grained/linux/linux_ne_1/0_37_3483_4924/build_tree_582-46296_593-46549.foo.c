#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int n ;
  int m ;
  int tmp ;
  deflate_state *s ;

  {
  n = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  m = 0;
  tmp = 0;
  n --;
  while_28_continue:  ;
  n = s->heap[1];
  tmp = s->heap_len;
  (s->heap_len) --;
  s->heap[1] = s->heap[tmp];

  m = s->heap[1];
  (s->heap_max) --;
  s->heap[s->heap_max] = n;
  (s->heap_max) --;
  s->heap[s->heap_max] = m;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(n);
}
}
