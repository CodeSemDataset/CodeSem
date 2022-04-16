#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ ulg crc_32_tab[256] ;
  unsigned long c ;
  unsigned long e ;
  int i ;
  int k ;

  {
  c = (unsigned long )__dyc_readpre_byte();
  e = (unsigned long )__dyc_readpre_byte();
  i = __dyc_readpre_byte();
  k = __dyc_readpre_byte();

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
  crc_32_tab[i] = c;
  i ++;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
}
}
