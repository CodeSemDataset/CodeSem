#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int len ;
  unsigned int max ;
  int left ;
  unsigned short count[16] ;
  unsigned short offs[16] ;
  codetype type ;

  {
  len = (unsigned int )__dyc_readpre_byte();
  max = (unsigned int )__dyc_readpre_byte();
  left = __dyc_readpre_byte();
  type = (codetype )__dyc_readpre_byte();

  while (1) {
    while_4_continue:  ;
    if (! (len <= 15U)) {
      goto while_4_break;
    }
    left <<= 1;
    left -= (int )count[len];
    if (left < 0) {
      goto __dyc_dummy_label;
    }
    len ++;
  }
  while_4_break:  ;
  if (left > 0) {
    if ((int )type == 0) {
      goto __dyc_dummy_label;
    } else {
      if (max != 1U) {
        goto __dyc_dummy_label;
      }
    }
  }
  offs[1] = (unsigned short)0;
  len = 1U;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len);
}
}
