#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ ct_data static_ltree[288] ;
  int len___1 ;
  int val___1 ;
  int tmp___3 ;
  int tmp___4 ;
  int len___2 ;
  deflate_state *s ;

  {
  len___1 = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  val___1 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  len___2 = 0;
  if (s->bi_valid > (int )(16UL * sizeof(char )) - len___1) {
    val___1 = 1 << 1;
    s->bi_buf = (unsigned short )((int )s->bi_buf | (val___1 << s->bi_valid));
    tmp___3 = s->pending;
    (s->pending) ++;
    *(s->pending_buf + tmp___3) = (unsigned char )((int )s->bi_buf & 255);
    tmp___4 = s->pending;
    (s->pending) ++;
    *(s->pending_buf + tmp___4) = (unsigned char )((int )s->bi_buf >> 8);
    s->bi_buf = (unsigned short )((int )((unsigned short )val___1) >> (16UL * sizeof(char ) - (unsigned long )s->bi_valid));
    s->bi_valid = (int )((unsigned long )s->bi_valid + ((unsigned long )len___1 - 16UL * sizeof(char )));
  } else {
    s->bi_buf = (unsigned short )((int )s->bi_buf | ((1 << 1) << s->bi_valid));
    s->bi_valid += len___1;
  }
  len___2 = (int )static_ltree[256].dl.len;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len___2);
}
}
