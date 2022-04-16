#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ ct_data static_ltree[288] ;
  int len ;
  int val ;
  int tmp ;
  int tmp___0 ;
  int len___0 ;
  deflate_state *s ;

  {
  len = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  val = 0;
  tmp = 0;
  tmp___0 = 0;
  len___0 = 0;
  if (s->bi_valid > (int )(16UL * sizeof(char )) - len) {
    val = 1 << 1;
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
    s->bi_buf = (unsigned short )((int )s->bi_buf | ((1 << 1) << s->bi_valid));
    s->bi_valid += len;
  }
  len___0 = (int )static_ltree[256].dl.len;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len___0);
}
}
