#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int n ;
  int prevlen ;
  int curlen ;
  int nextlen ;
  int count ;
  int max_count ;
  int min_count ;
  int len ;
  int val ;
  int tmp ;
  int tmp___0 ;
  int len___0 ;
  int val___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int len___1 ;
  int val___1 ;
  int tmp___3 ;
  int tmp___4 ;
  int len___2 ;
  int val___2 ;
  int tmp___5 ;
  int tmp___6 ;
  int len___3 ;
  int val___3 ;
  int tmp___7 ;
  int tmp___8 ;
  int len___4 ;
  int val___4 ;
  int tmp___9 ;
  int tmp___10 ;
  int len___5 ;
  int val___5 ;
  int tmp___11 ;
  int tmp___12 ;
  int len___6 ;
  int val___6 ;
  int tmp___13 ;
  int tmp___14 ;
  deflate_state *s ;
  ct_data *tree ;

  {
  n = __dyc_readpre_byte();
  prevlen = __dyc_readpre_byte();
  nextlen = __dyc_readpre_byte();
  count = __dyc_readpre_byte();
  max_count = __dyc_readpre_byte();
  min_count = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  tree = __dyc_read_ptr__typdef_ct_data();
  curlen = 0;
  len = 0;
  val = 0;
  tmp = 0;
  tmp___0 = 0;
  len___0 = 0;
  val___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  len___1 = 0;
  val___1 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  len___2 = 0;
  val___2 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  len___3 = 0;
  val___3 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  len___4 = 0;
  val___4 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  len___5 = 0;
  val___5 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  len___6 = 0;
  val___6 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  curlen = nextlen;
  nextlen = (int )(tree + (n + 1))->dl.len;
  count ++;
  if (count < max_count) {
    if (curlen == nextlen) {
      goto __dyc_dummy_label;
    } else {
      goto _L;
    }
  } else {
    _L:  
    if (count < min_count) {
      {
      while (1) {
        while_31_continue:  ;
        len = (int )s->bl_tree[curlen].dl.len;
        if (s->bi_valid > (int )(16UL * sizeof(char )) - len) {
          val = (int )s->bl_tree[curlen].fc.code;
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
          s->bi_buf = (unsigned short )((int )s->bi_buf | ((int )s->bl_tree[curlen].fc.code << s->bi_valid));
          s->bi_valid += len;
        }
        count --;
        if (! (count != 0)) {
          goto while_31_break;
        }
      }
      while_31_break:  ;
      }
    } else {
      if (curlen != 0) {
        if (curlen != prevlen) {
          len___0 = (int )s->bl_tree[curlen].dl.len;
          if (s->bi_valid > (int )(16UL * sizeof(char )) - len___0) {
            val___0 = (int )s->bl_tree[curlen].fc.code;
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
            s->bi_buf = (unsigned short )((int )s->bi_buf | ((int )s->bl_tree[curlen].fc.code << s->bi_valid));
            s->bi_valid += len___0;
          }
          count --;
        }
        len___1 = (int )s->bl_tree[16].dl.len;
        if (s->bi_valid > (int )(16UL * sizeof(char )) - len___1) {
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
        } else {
          s->bi_buf = (unsigned short )((int )s->bi_buf | ((int )s->bl_tree[16].fc.code << s->bi_valid));
          s->bi_valid += len___1;
        }
        len___2 = 2;
        if (s->bi_valid > (int )(16UL * sizeof(char )) - len___2) {
          val___2 = count - 3;
          s->bi_buf = (unsigned short )((int )s->bi_buf | (val___2 << s->bi_valid));
          tmp___5 = s->pending;
          (s->pending) ++;
          *(s->pending_buf + tmp___5) = (unsigned char )((int )s->bi_buf & 255);
          tmp___6 = s->pending;
          (s->pending) ++;
          *(s->pending_buf + tmp___6) = (unsigned char )((int )s->bi_buf >> 8);
          s->bi_buf = (unsigned short )((int )((unsigned short )val___2) >> (16UL * sizeof(char ) - (unsigned long )s->bi_valid));
          s->bi_valid = (int )((unsigned long )s->bi_valid + ((unsigned long )len___2 - 16UL * sizeof(char )));
        } else {
          s->bi_buf = (unsigned short )((int )s->bi_buf | ((count - 3) << s->bi_valid));
          s->bi_valid += len___2;
        }
      } else {
        if (count <= 10) {
          len___3 = (int )s->bl_tree[17].dl.len;
          if (s->bi_valid > (int )(16UL * sizeof(char )) - len___3) {
            val___3 = (int )s->bl_tree[17].fc.code;
            s->bi_buf = (unsigned short )((int )s->bi_buf | (val___3 << s->bi_valid));
            tmp___7 = s->pending;
            (s->pending) ++;
            *(s->pending_buf + tmp___7) = (unsigned char )((int )s->bi_buf & 255);
            tmp___8 = s->pending;
            (s->pending) ++;
            *(s->pending_buf + tmp___8) = (unsigned char )((int )s->bi_buf >> 8);
            s->bi_buf = (unsigned short )((int )((unsigned short )val___3) >> (16UL * sizeof(char ) - (unsigned long )s->bi_valid));
            s->bi_valid = (int )((unsigned long )s->bi_valid + ((unsigned long )len___3 - 16UL * sizeof(char )));
          } else {
            s->bi_buf = (unsigned short )((int )s->bi_buf | ((int )s->bl_tree[17].fc.code << s->bi_valid));
            s->bi_valid += len___3;
          }
          len___4 = 3;
          if (s->bi_valid > (int )(16UL * sizeof(char )) - len___4) {
            val___4 = count - 3;
            s->bi_buf = (unsigned short )((int )s->bi_buf | (val___4 << s->bi_valid));
            tmp___9 = s->pending;
            (s->pending) ++;
            *(s->pending_buf + tmp___9) = (unsigned char )((int )s->bi_buf & 255);
            tmp___10 = s->pending;
            (s->pending) ++;
            *(s->pending_buf + tmp___10) = (unsigned char )((int )s->bi_buf >> 8);
            s->bi_buf = (unsigned short )((int )((unsigned short )val___4) >> (16UL * sizeof(char ) - (unsigned long )s->bi_valid));
            s->bi_valid = (int )((unsigned long )s->bi_valid + ((unsigned long )len___4 - 16UL * sizeof(char )));
          } else {
            s->bi_buf = (unsigned short )((int )s->bi_buf | ((count - 3) << s->bi_valid));
            s->bi_valid += len___4;
          }
        } else {
          len___5 = (int )s->bl_tree[18].dl.len;
          if (s->bi_valid > (int )(16UL * sizeof(char )) - len___5) {
            val___5 = (int )s->bl_tree[18].fc.code;
            s->bi_buf = (unsigned short )((int )s->bi_buf | (val___5 << s->bi_valid));
            tmp___11 = s->pending;
            (s->pending) ++;
            *(s->pending_buf + tmp___11) = (unsigned char )((int )s->bi_buf & 255);
            tmp___12 = s->pending;
            (s->pending) ++;
            *(s->pending_buf + tmp___12) = (unsigned char )((int )s->bi_buf >> 8);
            s->bi_buf = (unsigned short )((int )((unsigned short )val___5) >> (16UL * sizeof(char ) - (unsigned long )s->bi_valid));
            s->bi_valid = (int )((unsigned long )s->bi_valid + ((unsigned long )len___5 - 16UL * sizeof(char )));
          } else {
            s->bi_buf = (unsigned short )((int )s->bi_buf | ((int )s->bl_tree[18].fc.code << s->bi_valid));
            s->bi_valid += len___5;
          }
          len___6 = 7;
          if (s->bi_valid > (int )(16UL * sizeof(char )) - len___6) {
            val___6 = count - 11;
            s->bi_buf = (unsigned short )((int )s->bi_buf | (val___6 << s->bi_valid));
            tmp___13 = s->pending;
            (s->pending) ++;
            *(s->pending_buf + tmp___13) = (unsigned char )((int )s->bi_buf & 255);
            tmp___14 = s->pending;
            (s->pending) ++;
            *(s->pending_buf + tmp___14) = (unsigned char )((int )s->bi_buf >> 8);
            s->bi_buf = (unsigned short )((int )((unsigned short )val___6) >> (16UL * sizeof(char ) - (unsigned long )s->bi_valid));
            s->bi_valid = (int )((unsigned long )s->bi_valid + ((unsigned long )len___6 - 16UL * sizeof(char )));
          } else {
            s->bi_buf = (unsigned short )((int )s->bi_buf | ((count - 11) << s->bi_valid));
            s->bi_valid += len___6;
          }
        }
      }
    }
  }
  count = 0;
  prevlen = curlen;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(prevlen);
  __dyc_printpre_byte(nextlen);
  __dyc_printpre_byte(count);
}
}
