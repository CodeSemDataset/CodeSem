#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ uch dist_code[512] ;
  unsigned int dist ;
  unsigned int code ;
  int len___2 ;
  int val___2 ;
  int tmp___6 ;
  int tmp___7 ;
  deflate_state *s ;
  ct_data *dtree ;

  {
  dist = (unsigned int )__dyc_readpre_byte();
  code = (unsigned int )__dyc_readpre_byte();
  len___2 = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  dtree = __dyc_read_ptr__typdef_ct_data();
  val___2 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  code = (unsigned int )dist_code[256U + (dist >> 7)];
  val___2 = (int )(dtree + code)->fc.code;
  s->bi_buf = (unsigned short )((int )s->bi_buf | (val___2 << s->bi_valid));
  tmp___6 = s->pending;
  (s->pending) ++;
  *(s->pending_buf + tmp___6) = (unsigned char )((int )s->bi_buf & 255);
  tmp___7 = s->pending;
  (s->pending) ++;
  *(s->pending_buf + tmp___7) = (unsigned char )((int )s->bi_buf >> 8);
  s->bi_buf = (unsigned short )((int )((unsigned short )val___2) >> (16UL * sizeof(char ) - (unsigned long )s->bi_valid));
  s->bi_valid = (int )((unsigned long )s->bi_valid + ((unsigned long )len___2 - 16UL * sizeof(char )));
  s->bi_buf = (unsigned short )((int )s->bi_buf | ((int )(dtree + code)->fc.code << s->bi_valid));
  s->bi_valid += len___2;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(code);
}
}
