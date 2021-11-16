#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int len___0 ;
  int val___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int len___1 ;
  deflate_state *s ;
  int dcodes ;

  {
  s = __dyc_read_ptr__typdef_deflate_state();
  dcodes = __dyc_readpre_byte();
  len___0 = 0;
  val___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  len___1 = 0;
  len___0 = 5;
  if (s->bi_valid > (int )(16UL * sizeof(char )) - len___0) {
    val___0 = dcodes - 1;
    s->bi_buf = (unsigned short )((int )s->bi_buf | (val___0 << s->bi_valid));
    tmp___1 = s->pending;
    (s->pending) ++;
    *(s->pending_buf + tmp___1) = (unsigned char )((int )s->bi_buf & 255);
    tmp___2 = s->pending;
    (s->pending) ++;
    *(s->pending_buf + tmp___2) = (unsigned char )((int )s->bi_buf >> 8);
    s->bi_buf = (unsigned short )((int )((unsigned short )val___0) >> (16UL * sizeof(char ) - (unsigned long )s->bi_valid));
    s->bi_valid = (int )((unsigned long )s->bi_valid + ((unsigned long )len___0 - 16UL * sizeof(char )));
  } else {
    s->bi_buf = (unsigned short )((int )s->bi_buf | ((dcodes - 1) << s->bi_valid));
    s->bi_valid += len___0;
  }
  len___1 = 4;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len___1);
}
}
