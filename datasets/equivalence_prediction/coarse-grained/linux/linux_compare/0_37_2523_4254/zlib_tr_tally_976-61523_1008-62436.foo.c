#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int const   extra_dbits[30] ;
  uch dist_code[512] ;
  uch length_code[256] ;
  uInt tmp ;
  int tmp___0 ;
  ulg out_length ;
  ulg in_length ;
  int dcode ;
  deflate_state *s ;
  unsigned int dist ;
  unsigned int lc ;

  {
  s = __dyc_read_ptr__typdef_deflate_state();
  dist = (unsigned int )__dyc_readpre_byte();
  lc = (unsigned int )__dyc_readpre_byte();
  tmp = 0;
  tmp___0 = 0;
  out_length = 0;
  in_length = 0;
  dcode = 0;
  *(s->d_buf + s->last_lit) = (unsigned short )dist;
  tmp = s->last_lit;
  (s->last_lit) ++;
  *(s->l_buf + tmp) = (unsigned char )lc;
  if (dist == 0U) {
    s->dyn_ltree[lc].fc.freq = (ush )((int )s->dyn_ltree[lc].fc.freq + 1);
  } else {
    (s->matches) ++;
    dist --;
    s->dyn_ltree[((int )length_code[lc] + 256) + 1].fc.freq = (ush )((int )s->dyn_ltree[((int )length_code[lc] + 256) + 1].fc.freq + 1);
    if (dist < 256U) {
      tmp___0 = (int )dist_code[dist];
    } else {
      tmp___0 = (int )dist_code[256U + (dist >> 7)];
    }
    s->dyn_dtree[tmp___0].fc.freq = (ush )((int )s->dyn_dtree[tmp___0].fc.freq + 1);
  }
  if ((s->last_lit & 4095U) == 0U) {
    if (s->level > 2) {
      out_length = (unsigned long )s->last_lit * 8UL;
      in_length = (unsigned long )((long )s->strstart - s->block_start);
      dcode = 0;
      {
      while (1) {
        while_34_continue:  ;
        if (! (dcode < 30)) {
          goto while_34_break;
        }
        out_length += (unsigned long )s->dyn_dtree[dcode].fc.freq * (unsigned long )(5L + (long )extra_dbits[dcode]);
        dcode ++;
      }
      while_34_break:  ;
      }
      out_length >>= 3;
      if (s->matches < s->last_lit / 2U) {
        if (out_length < in_length / 2UL) {
          goto __dyc_dummy_label;
        }
      }
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(out_length);
  __dyc_printpre_byte(in_length);
}
}
