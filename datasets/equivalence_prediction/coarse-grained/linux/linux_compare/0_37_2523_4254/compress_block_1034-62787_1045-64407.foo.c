#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int const   extra_lbits[29] ;
  uch length_code[256] ;
  int base_length[29] ;
  unsigned int dist ;
  int lc ;
  unsigned int code ;
  int extra ;
  int len ;
  int val ;
  int tmp___0 ;
  int tmp___1 ;
  int len___0 ;
  int val___0 ;
  int tmp___2 ;
  int tmp___3 ;
  int len___1 ;
  int val___1 ;
  int tmp___4 ;
  int tmp___5 ;
  deflate_state *s ;
  ct_data *ltree ;

  {
  dist = (unsigned int )__dyc_readpre_byte();
  lc = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  ltree = __dyc_read_ptr__typdef_ct_data();
  code = 0;
  extra = 0;
  len = 0;
  val = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  len___0 = 0;
  val___0 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  len___1 = 0;
  val___1 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  len = (int )(ltree + lc)->dl.len;
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
  if (s->bi_valid > (int )(16UL * sizeof(char )) - len___0) {
    val___0 = (int )(ltree + ((code + 256U) + 1U))->fc.code;
    s->bi_buf = (unsigned short )((int )s->bi_buf | (val___0 << s->bi_valid));
    tmp___2 = s->pending;
    (s->pending) ++;
    *(s->pending_buf + tmp___2) = (unsigned char )((int )s->bi_buf & 255);
    tmp___3 = s->pending;
    (s->pending) ++;
    *(s->pending_buf + tmp___3) = (unsigned char )((int )s->bi_buf >> 8);
    s->bi_buf = (unsigned short )((int )((unsigned short )val___0) >> (16UL * sizeof(char ) - (unsigned long )s->bi_valid));
    s->bi_valid = (int )((unsigned long )s->bi_valid + ((unsigned long )len___0 - 16UL * sizeof(char )));
  } else {
    s->bi_buf = (unsigned short )((int )s->bi_buf | ((int )(ltree + ((code + 256U) + 1U))->fc.code << s->bi_valid));
    s->bi_valid += len___0;
  }
  extra = (int )extra_lbits[code];
  if (extra != 0) {
    lc -= base_length[code];
    len___1 = extra;
    if (s->bi_valid > (int )(16UL * sizeof(char )) - len___1) {
      val___1 = lc;
      s->bi_buf = (unsigned short )((int )s->bi_buf | (val___1 << s->bi_valid));
      tmp___4 = s->pending;
      (s->pending) ++;
      *(s->pending_buf + tmp___4) = (unsigned char )((int )s->bi_buf & 255);
      tmp___5 = s->pending;
      (s->pending) ++;
      *(s->pending_buf + tmp___5) = (unsigned char )((int )s->bi_buf >> 8);
      s->bi_buf = (unsigned short )((int )((unsigned short )val___1) >> (16UL * sizeof(char ) - (unsigned long )s->bi_valid));
      s->bi_valid = (int )((unsigned long )s->bi_valid + ((unsigned long )len___1 - 16UL * sizeof(char )));
    } else {
      s->bi_buf = (unsigned short )((int )s->bi_buf | (lc << s->bi_valid));
      s->bi_valid += len___1;
    }
  }
  dist --;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(dist);
}
}
