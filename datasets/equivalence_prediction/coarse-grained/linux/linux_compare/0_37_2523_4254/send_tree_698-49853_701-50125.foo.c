#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int count ;
  int len___1 ;
  int val___1 ;
  int tmp___3 ;
  int tmp___4 ;
  deflate_state *s ;

  {
  count = __dyc_readpre_byte();
  len___1 = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  val___1 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  count --;
  val___1 = (int )s->bl_tree[16].fc.code;
  s->bi_buf = (unsigned short )((int )s->bi_buf | (val___1 << s->bi_valid));
  tmp___3 = s->pending;
  (s->pending) ++;
  *(s->pending_buf + tmp___3) = (unsigned char )((int )s->bi_buf & 255);
  tmp___4 = s->pending;
  (s->pending) ++;
  *(s->pending_buf + tmp___4) = (unsigned char )((int )s->bi_buf >> 8);
  s->bi_buf = (unsigned short )((int )((unsigned short )val___1) >> (16UL * sizeof(char ) - (unsigned long )s->bi_valid));
  s->bi_valid = (int )((unsigned long )s->bi_valid + ((unsigned long )len___1 - 16UL * sizeof(char )));
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(count);
}
}
