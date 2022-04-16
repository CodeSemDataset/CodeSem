#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int const   extra_lbits[29] ;
  int const   extra_dbits[30] ;
  uch dist_code[512] ;
  uch length_code[256] ;
  int base_length[29] ;
  int base_dist[30] ;
  unsigned int dist ;
  int lc ;
  unsigned int lx ;
  unsigned int code ;
  int extra ;
  unsigned int tmp ;
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
  int len___2 ;
  int val___2 ;
  int tmp___6 ;
  int tmp___7 ;
  int len___3 ;
  int val___3 ;
  int tmp___8 ;
  int tmp___9 ;
  int len___4 ;
  int val___4 ;
  int tmp___10 ;
  int tmp___11 ;
  deflate_state *s ;
  ct_data *ltree ;
  ct_data *dtree ;

  {
  s = __dyc_read_ptr__typdef_deflate_state();
  ltree = __dyc_read_ptr__typdef_ct_data();
  dtree = __dyc_read_ptr__typdef_ct_data();
  dist = 0;
  lc = 0;
  lx = 0;
  code = 0;
  extra = 0;
  tmp = 0;
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
  len___2 = 0;
  val___2 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  len___3 = 0;
  val___3 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  len___4 = 0;
  val___4 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  lx = 0U;
  if (s->last_lit != 0U) {
    {
    while (1) {
      while_35_continue:  ;
      dist = (unsigned int )*(s->d_buf + lx);
      tmp = lx;
      lx ++;
      lc = (int )*(s->l_buf + tmp);
      if (dist == 0U) {
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
      } else {
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
        if (extra != 0) {
          dist -= (unsigned int )base_dist[code];
          len___3 = extra;
          if (s->bi_valid > (int )(16UL * sizeof(char )) - len___3) {
            val___3 = (int )dist;
            s->bi_buf = (unsigned short )((int )s->bi_buf | (val___3 << s->bi_valid));
            tmp___8 = s->pending;
            (s->pending) ++;
            *(s->pending_buf + tmp___8) = (unsigned char )((int )s->bi_buf & 255);
            tmp___9 = s->pending;
            (s->pending) ++;
            *(s->pending_buf + tmp___9) = (unsigned char )((int )s->bi_buf >> 8);
            s->bi_buf = (unsigned short )((int )((unsigned short )val___3) >> (16UL * sizeof(char ) - (unsigned long )s->bi_valid));
            s->bi_valid = (int )((unsigned long )s->bi_valid + ((unsigned long )len___3 - 16UL * sizeof(char )));
          } else {
            s->bi_buf = (unsigned short )((unsigned int )s->bi_buf | (dist << s->bi_valid));
            s->bi_valid += len___3;
          }
        }
      }
      if (! (lx < s->last_lit)) {
        goto while_35_break;
      }
    }
    while_35_break:  ;
    }
  }
  len___4 = (int )(ltree + 256)->dl.len;
  if (s->bi_valid > (int )(16UL * sizeof(char )) - len___4) {
    val___4 = (int )(ltree + 256)->fc.code;
    s->bi_buf = (unsigned short )((int )s->bi_buf | (val___4 << s->bi_valid));
    tmp___10 = s->pending;
    (s->pending) ++;
    *(s->pending_buf + tmp___10) = (unsigned char )((int )s->bi_buf & 255);
    tmp___11 = s->pending;
    (s->pending) ++;
    *(s->pending_buf + tmp___11) = (unsigned char )((int )s->bi_buf >> 8);
    s->bi_buf = (unsigned short )((int )((unsigned short )val___4) >> (16UL * sizeof(char ) - (unsigned long )s->bi_valid));
    s->bi_valid = (int )((unsigned long )s->bi_valid + ((unsigned long )len___4 - 16UL * sizeof(char )));
  } else {
    s->bi_buf = (unsigned short )((int )s->bi_buf | ((int )(ltree + 256)->fc.code << s->bi_valid));
    s->bi_valid += len___4;
  }
  s->last_eob_len = (int )(ltree + 256)->dl.len;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(lx);
}
}
