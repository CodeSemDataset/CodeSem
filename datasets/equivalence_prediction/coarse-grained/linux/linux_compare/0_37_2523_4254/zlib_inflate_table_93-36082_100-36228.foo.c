#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int len ;
  unsigned int sym ;
  unsigned int max ;
  unsigned int root ;
  unsigned short count[16] ;
  unsigned short *lens ;
  unsigned int codes ;
  unsigned int *bits ;

  {
  len = (unsigned int )__dyc_readpre_byte();
  lens = __dyc_read_ptr__short();
  codes = (unsigned int )__dyc_readpre_byte();
  bits = __dyc_read_ptr__int();
  sym = 0;
  max = 0;
  root = 0;
  while (1) {
    while_0_continue:  ;
    if (! (len <= 15U)) {
      goto while_0_break;
    }
    count[len] = (unsigned short)0;
    len ++;
  }
  while_0_break:  ;
  sym = 0U;
  while (1) {
    while_1_continue:  ;
    if (! (sym < codes)) {
      goto while_1_break;
    }
    count[*(lens + sym)] = (unsigned short )((int )count[*(lens + sym)] + 1);
    sym ++;
  }
  while_1_break:  ;
  root = *bits;
  max = 15U;
  while (1) {
    while_2_continue:  ;
    if (! (max >= 1U)) {
      goto __dyc_dummy_label;
    }
    if ((int )count[max] != 0) {
      goto __dyc_dummy_label;
    }
    max --;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(root);
}
}
