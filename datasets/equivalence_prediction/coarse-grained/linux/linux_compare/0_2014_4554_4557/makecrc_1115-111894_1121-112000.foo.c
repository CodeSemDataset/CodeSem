#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ ulg crc_32_tab[256] ;
  int const   p[14] ;
  unsigned long c ;
  unsigned long e ;
  int i ;
  int k ;

  {

  c = 0;
  e = 0;
  i = 0;
  k = 0;
  e = 0UL;
  i = 0;
  while (1) {
    while_52_continue:  ;
    if (! ((unsigned long )i < sizeof(int const   [14]) / sizeof(int ))) {
      goto while_52_break;
    }
    e |= (unsigned long )(1L << (31 - (int )p[i]));
    i ++;
  }
  while_52_break:  ;
  crc_32_tab[0] = 0UL;
  i = 1;
  while (1) {
    while_53_continue:  ;
    if (! (i < 256)) {
      goto __dyc_dummy_label;
    }
    c = 0UL;
    k = i | 256;
    {
    while (1) {
      while_54_continue:  ;
      if (! (k != 1)) {
        goto while_54_break;
      }
      if (c & 1UL) {
        c = (c >> 1) ^ e;
      } else {
        c >>= 1;
      }
      if (k & 1) {
        c ^= e;
      }
      k >>= 1;
    }
    while_54_break:  ;
    }
    crc_32_tab[i] = c;
    i ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(e);
}
}
