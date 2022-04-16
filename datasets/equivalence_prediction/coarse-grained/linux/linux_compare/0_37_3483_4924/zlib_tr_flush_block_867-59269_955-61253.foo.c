#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ ulg opt_lenb ;
  ulg static_lenb ;
  int max_blindex ;
  int len ;
  int val ;
  int tmp ;
  int tmp___0 ;
  int len___0 ;
  int val___0 ;
  int tmp___1 ;
  int tmp___2 ;
  deflate_state *s ;
  char *buf ;
  ulg stored_len ;
  int eof ;
  int __dyc_funcallvar_1 ;

  {
  s = __dyc_read_ptr__typdef_deflate_state();
  buf = __dyc_read_ptr__char();
  stored_len = (ulg )__dyc_readpre_byte();
  eof = __dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  opt_lenb = 0;
  static_lenb = 0;
  max_blindex = 0;
  len = 0;
  val = 0;
  tmp = 0;
  tmp___0 = 0;
  len___0 = 0;
  val___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  if (s->level > 0) {
    if ((int )s->data_type == 2) {
      {

      }
    }
    {


    max_blindex = __dyc_funcallvar_1;
    opt_lenb = ((s->opt_len + 3UL) + 7UL) >> 3;
    static_lenb = ((s->static_len + 3UL) + 7UL) >> 3;
    }
    if (static_lenb <= opt_lenb) {
      opt_lenb = static_lenb;
    }
  } else {
    static_lenb = stored_len + 5UL;
    opt_lenb = static_lenb;
  }
  if (stored_len + 4UL <= opt_lenb) {
    if ((unsigned long )buf != (unsigned long )((char *)0)) {
      {

      }
    } else {
      goto _L;
    }
  } else {
    _L:  
    if (static_lenb == opt_lenb) {
      len = 3;
      if (s->bi_valid > (int )(16UL * sizeof(char )) - len) {
        val = (1 << 1) + eof;
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
        s->bi_buf = (unsigned short )((int )s->bi_buf | (((1 << 1) + eof) << s->bi_valid));
        s->bi_valid += len;
      }
      {

      s->compressed_len += 3UL + s->static_len;
      }
    } else {
      len___0 = 3;
      if (s->bi_valid > (int )(16UL * sizeof(char )) - len___0) {
        val___0 = (2 << 1) + eof;
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
        s->bi_buf = (unsigned short )((int )s->bi_buf | (((2 << 1) + eof) << s->bi_valid));
        s->bi_valid += len___0;
      }
      {


      s->compressed_len += 3UL + s->opt_len;
      }
    }
  }

  if (eof) {
    {

    s->compressed_len += 7UL;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(max_blindex);
}
}
