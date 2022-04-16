#include "../../include/dycfoo.h"
#include "../../include/string.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char const   *s1 ;
  unsigned char const   *s2 ;
  int delta ;
  char const   *str1 ;
  char const   *str2 ;

  {
  str1 = (char const   *)__dyc_read_ptr__char();
  str2 = (char const   *)__dyc_read_ptr__char();
  s1 = 0;
  s2 = 0;
  delta = 0;
  s1 = (unsigned char const   *)str1;
  s2 = (unsigned char const   *)str2;
  delta = 0;
  while (1) {
    while_0_continue:  ;
    if (! *s1) {
      if (! *s2) {
        goto while_0_break;
      }
    }
    delta = (int )((int const   )*s2 - (int const   )*s1);
    if (delta) {
      goto __dyc_dummy_label;
    }
    s1 ++;
    s2 ++;
  }
  while_0_break:  ;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(delta);
}
}
