#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int have ;
  unsigned int left ;
  unsigned long hold ;
  unsigned int bits ;
  unsigned int copy ;

  {
  have = (unsigned int )__dyc_readpre_byte();
  left = (unsigned int )__dyc_readpre_byte();
  copy = (unsigned int )__dyc_readpre_byte();
  hold = 0;
  bits = 0;
  hold = 0UL;
  bits = 0U;
  goto __dyc_dummy_label;
  if (copy > have) {
    copy = have;
  }
  if (copy > left) {
    copy = left;
  }
  if (copy == 0U) {
    goto __dyc_dummy_label;
  }

  have -= copy;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
}
}
