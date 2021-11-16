#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int len ;
  int val ;
  int tmp ;
  int tmp___0 ;
  int len___0 ;
  deflate_state *s ;
  int lcodes ;

  {
  len = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  lcodes = __dyc_readpre_byte();
  val = 0;
  tmp = 0;
  tmp___0 = 0;
  len___0 = 0;
  if (s->bi_valid > (int )(16UL * sizeof(char )) - len) {
    val = lcodes - 257;
    s->bi_buf = (unsigned short )((int )s->bi_buf | (val << s->bi_valid));
    tmp = s->pending;
    (s->pending) ++;
    *(s->pending_buf + tmp) = (unsigned char )((int )s->bi_buf & 255);
    tmp___0 = s->pending;
    (s->pending) ++;
    *(s->pending_buf + tmp___0) = (unsigned char )((int )s->bi_buf >> 8);
    s->bi_buf = (unsigned short )((int )((unsigned short )val) >> (16UL * sizeof(char ) - (unsigned long )s->bi_valid));
    s->bi_valid = (int )((unsigned long )s->bi_valid + ((unsigned long )len - 16UL * sizeof(char )));
  } else {
    s->bi_buf = (unsigned short )((int )s->bi_buf | ((lcodes - 257) << s->bi_valid));
    s->bi_valid += len;
  }
  len___0 = 5;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len___0);
}
}
