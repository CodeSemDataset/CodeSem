#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char const   *next ;
  unsigned int have ;
  unsigned int left ;
  unsigned long hold ;
  unsigned int bits ;
  unsigned int copy ;

  {
  next = (unsigned char const   *)__dyc_read_ptr__char();
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
  next += copy;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
}
}
