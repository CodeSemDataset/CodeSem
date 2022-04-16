#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  unsigned int const   border[19] ;
  unsigned int j ;
  unsigned int *ll ;
  ulg b ;
  unsigned int k ;
  int v___2 ;
  int tmp___14 ;
  unsigned int tmp___15 ;
  int __dyc_funcallvar_5 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  j = (unsigned int )__dyc_readpre_byte();
  ll = __dyc_read_ptr__int();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  v___2 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  while (1) {
    while_38_continue:  ;
    if (! (k < 3U)) {
      goto while_38_break;
    }
    if (inptr < insize) {
      tmp___15 = inptr;
      inptr ++;
      tmp___14 = (int )*(inbuf + tmp___15);
    } else {
      {
      tmp___14 = __dyc_funcallvar_5;
      }
    }
    v___2 = tmp___14;
    if (v___2 < 0) {
      goto __dyc_dummy_label;
    }
    b |= (unsigned long )((unsigned char )v___2) << k;
    k += 8U;
  }
  while_38_break:  ;
  *(ll + border[j]) = (unsigned int )b & 7U;
  b >>= 3;
  k -= 3U;
  j ++;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(j);
  __dyc_printpre_byte(b);
  __dyc_printpre_byte(k);
}
}
