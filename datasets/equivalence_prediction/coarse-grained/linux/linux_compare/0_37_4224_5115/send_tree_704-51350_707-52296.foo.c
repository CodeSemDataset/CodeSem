#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int count ;
  int len___4 ;
  int val___4 ;
  int tmp___9 ;
  int tmp___10 ;
  int len___5 ;
  int val___5 ;
  int tmp___11 ;
  int tmp___12 ;
  int len___6 ;
  deflate_state *s ;

  {
  count = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  len___4 = 0;
  val___4 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  len___5 = 0;
  val___5 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  len___6 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len___6);
}
}
