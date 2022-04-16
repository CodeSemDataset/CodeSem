#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int const   extra_lbits[29] ;
  int const   extra_dbits[30] ;
  uch dist_code[512] ;
  int base_length[29] ;
  unsigned int dist ;
  int lc ;
  unsigned int code ;
  int extra ;
  int len___1 ;
  int val___1 ;
  int tmp___4 ;
  int tmp___5 ;
  int len___2 ;
  int val___2 ;
  int tmp___6 ;
  int tmp___7 ;
  deflate_state *s ;
  ct_data *dtree ;

  {
  dist = (unsigned int )__dyc_readpre_byte();
  lc = __dyc_readpre_byte();
  code = (unsigned int )__dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  dtree = __dyc_read_ptr__typdef_ct_data();
  extra = 0;
  len___1 = 0;
  val___1 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  len___2 = 0;
  val___2 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
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
  if (dist < 256U) {
    code = (unsigned int )dist_code[dist];
  } else {
    code = (unsigned int )dist_code[256U + (dist >> 7)];
  }
  len___2 = (int )(dtree + code)->dl.len;
  if (s->bi_valid > (int )(16UL * sizeof(char )) - len___2) {
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
  } else {
    s->bi_buf = (unsigned short )((int )s->bi_buf | ((int )(dtree + code)->fc.code << s->bi_valid));
    s->bi_valid += len___2;
  }
  extra = (int )extra_dbits[code];
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(extra);
}
}
