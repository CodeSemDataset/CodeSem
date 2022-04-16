#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char const   *next ;
  unsigned int have ;
  unsigned long hold ;
  unsigned int bits ;
  unsigned char const   *tmp___0 ;

  {
  next = (unsigned char const   *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  tmp___0 = 0;
  hold = 0UL;
  bits = 0U;
  goto __dyc_dummy_label;
  while_11_continue:  ;
  while (1) {
    while_12_continue:  ;
    if (! (bits < 32U)) {
      goto while_12_break;
    }
    {
    while (1) {
      while_13_continue:  ;
      if (have == 0U) {
        goto __dyc_dummy_label;
      }
      have --;
      tmp___0 = next;
      next ++;
      hold += (unsigned long )*tmp___0 << bits;
      bits += 8U;
      goto while_13_break;
    }
    while_13_break:  ;
    }
  }
  while_12_break:  ;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
}
}
