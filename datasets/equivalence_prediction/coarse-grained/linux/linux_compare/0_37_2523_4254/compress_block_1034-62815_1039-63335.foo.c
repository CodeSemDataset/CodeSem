#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ uch length_code[256] ;
  int lc ;
  unsigned int code ;
  int len ;
  int val ;
  int tmp___0 ;
  int tmp___1 ;
  int len___0 ;
  deflate_state *s ;
  ct_data *ltree ;

  {
  lc = __dyc_readpre_byte();
  len = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  ltree = __dyc_read_ptr__typdef_ct_data();
  code = 0;
  val = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  len___0 = 0;
  if (s->bi_valid > (int )(16UL * sizeof(char )) - len) {
    val = (int )(ltree + lc)->fc.code;
    s->bi_buf = (unsigned short )((int )s->bi_buf | (val << s->bi_valid));
    tmp___0 = s->pending;
    (s->pending) ++;
    *(s->pending_buf + tmp___0) = (unsigned char )((int )s->bi_buf & 255);
    tmp___1 = s->pending;
    (s->pending) ++;
    *(s->pending_buf + tmp___1) = (unsigned char )((int )s->bi_buf >> 8);
    s->bi_buf = (unsigned short )((int )((unsigned short )val) >> (16UL * sizeof(char ) - (unsigned long )s->bi_valid));
    s->bi_valid = (int )((unsigned long )s->bi_valid + ((unsigned long )len - 16UL * sizeof(char )));
  } else {
    s->bi_buf = (unsigned short )((int )s->bi_buf | ((int )(ltree + lc)->fc.code << s->bi_valid));
    s->bi_valid += len;
  }
  code = (unsigned int )length_code[lc];
  len___0 = (int )(ltree + ((code + 256U) + 1U))->dl.len;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len___0);
}
}
