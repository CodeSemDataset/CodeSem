#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int f ;
  int h ;
  unsigned int i ;
  unsigned int j ;
  int k ;
  int l ;
  struct huft *q ;
  struct huft r ;
  int w ;
  unsigned int z ;
  unsigned int *x ;

  {
  h = __dyc_readpre_byte();
  i = (unsigned int )__dyc_readpre_byte();
  k = __dyc_readpre_byte();
  l = __dyc_readpre_byte();
  q = __dyc_read_ptr__comp_59huft();
  r = __dyc_read_comp_59huft();
  w = __dyc_readpre_byte();
  z = (unsigned int )__dyc_readpre_byte();
  x = __dyc_read_ptr__int();
  f = 0;
  j = 0;
  f = (unsigned int )(1 << (k - w));
  j = i >> w;
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
  while (1) {
    while_12_continue:  ;
    if (! ((i & (unsigned int )((1 << w) - 1)) != *(x + h))) {
      goto __dyc_dummy_label;
    }
    h --;
    w -= l;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(f);
}
}
