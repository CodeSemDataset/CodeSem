#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int a ;
  int g ;
  unsigned int i ;
  int k ;
  unsigned int *c ;
  unsigned int n ;

  {
  g = __dyc_readpre_byte();
  i = (unsigned int )__dyc_readpre_byte();
  k = __dyc_readpre_byte();
  c = __dyc_read_ptr__int();
  n = (unsigned int )__dyc_readpre_byte();
  a = 0;
  if (! (i < n)) {
    goto __dyc_dummy_label;
  }
  while_6_continue:  ;
  if (! (k <= g)) {
    goto __dyc_dummy_label;
  }
  a = *(c + k);
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(a);
}
}
