#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int max ;
  unsigned int root ;
  unsigned int curr ;
  unsigned int drop ;
  int left ;
  unsigned short count[16] ;

  {
  max = (unsigned int )__dyc_readpre_byte();
  root = (unsigned int )__dyc_readpre_byte();
  curr = (unsigned int )__dyc_readpre_byte();
  drop = (unsigned int )__dyc_readpre_byte();
  left = __dyc_readpre_byte();

  drop = root;
  while_11_continue:  ;
  if (! (curr + drop < max)) {
    goto __dyc_dummy_label;
  }
  left -= (int )count[curr + drop];
  if (left <= 0) {
    goto __dyc_dummy_label;
  }
  curr ++;
  left <<= 1;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(drop);
  __dyc_printpre_byte(left);
}
}
