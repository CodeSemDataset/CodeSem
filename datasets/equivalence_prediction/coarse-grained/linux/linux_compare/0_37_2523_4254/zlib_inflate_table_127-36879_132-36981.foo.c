#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int len ;
  unsigned int sym ;
  unsigned short count[16] ;
  unsigned short offs[16] ;
  unsigned short tmp___1 ;
  unsigned short *lens ;
  unsigned int codes ;
  unsigned short *work ;

  {
  lens = __dyc_read_ptr__short();
  codes = (unsigned int )__dyc_readpre_byte();
  work = __dyc_read_ptr__short();
  len = 0;
  sym = 0;
  tmp___1 = 0;
  offs[1] = (unsigned short)0;
  len = 1U;
  while (1) {
    while_5_continue:  ;
    if (! (len < 15U)) {
      goto while_5_break;
    }
    offs[len + 1U] = (unsigned short )((int )offs[len] + (int )count[len]);
    len ++;
  }
  while_5_break:  ;
  sym = 0U;
  while (1) {
    while_6_continue:  ;
    if (! (sym < codes)) {
      goto __dyc_dummy_label;
    }
    if ((int )*(lens + sym) != 0) {
      tmp___1 = offs[*(lens + sym)];
      offs[*(lens + sym)] = (unsigned short )((int )offs[*(lens + sym)] + 1);
      *(work + tmp___1) = (unsigned short )sym;
    }
    sym ++;
  }
  __dyc_dummy_label:  ;

}
}
