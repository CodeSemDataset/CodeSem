#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int f ;
  unsigned int i ;
  unsigned int j ;
  int k ;
  struct huft *q ;
  struct huft r ;
  unsigned int z ;

  {
  f = (unsigned int )__dyc_readpre_byte();
  i = (unsigned int )__dyc_readpre_byte();
  j = (unsigned int )__dyc_readpre_byte();
  k = __dyc_readpre_byte();
  q = __dyc_read_ptr__comp_59huft();
  r = __dyc_read_comp_59huft();
  z = (unsigned int )__dyc_readpre_byte();

  while (1) {
    while_10_continue:  ;
    if (! (j < z)) {
      goto while_10_break;
    }
    *(q + j) = r;
    j += f;
  }
  while_10_break:  ;
  j = (unsigned int )(1 << (k - 1));
  while (1) {
    while_11_continue:  ;
    if (! (i & j)) {
      goto while_11_break;
    }
    i ^= j;
    j >>= 1;
  }
  while_11_break:  ;
  i ^= j;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
}
}
