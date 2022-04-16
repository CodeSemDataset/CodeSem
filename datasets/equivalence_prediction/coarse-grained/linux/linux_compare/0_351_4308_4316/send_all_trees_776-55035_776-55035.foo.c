#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ uch const   bl_order[19] ;
  int rank ;
  int len___2 ;
  int val___2 ;
  int tmp___5 ;
  int tmp___6 ;
  deflate_state *s ;
  int blcodes ;

  {
  rank = __dyc_readpre_byte();
  s = __dyc_read_ptr__typdef_deflate_state();
  blcodes = __dyc_readpre_byte();
  len___2 = 0;
  val___2 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  if (! (rank < blcodes)) {
    goto __dyc_dummy_label;
  }
  len___2 = 3;
  if (s->bi_valid > (int )(16UL * sizeof(char )) - len___2) {
    val___2 = (int )s->bl_tree[bl_order[rank]].dl.len;
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
    s->bi_buf = (unsigned short )((int )s->bi_buf | ((int )s->bl_tree[bl_order[rank]].dl.len << s->bi_valid));
    s->bi_valid += len___2;
  }
  rank ++;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(rank);
}
}
