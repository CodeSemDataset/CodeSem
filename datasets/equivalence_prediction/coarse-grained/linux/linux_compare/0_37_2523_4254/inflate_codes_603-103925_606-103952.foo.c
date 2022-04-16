#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  ush const   mask_bits[17] ;
  unsigned int e ;
  unsigned int n ;
  struct huft *t ;
  ulg b ;
  unsigned int k ;
  int v___2 ;
  int tmp___14 ;
  unsigned int tmp___15 ;
  int bd ;
  int __dyc_funcallvar_4 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  e = (unsigned int )__dyc_readpre_byte();
  t = __dyc_read_ptr__comp_59huft();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  bd = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  n = 0;
  v___2 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  n = (unsigned int )t->v.n + ((unsigned int )b & (unsigned int )mask_bits[e]);
  b >>= e;
  k -= e;
  while (1) {
    while_19_continue:  ;
    if (! (k < (unsigned int )bd)) {
      goto __dyc_dummy_label;
    }
    if (inptr < insize) {
      tmp___15 = inptr;
      inptr ++;
      tmp___14 = (int )*(inbuf + tmp___15);
    } else {
      {
      tmp___14 = __dyc_funcallvar_4;
      }
    }
    v___2 = tmp___14;
    if (v___2 < 0) {
      goto __dyc_dummy_label;
    }
    b |= (unsigned long )((unsigned char )v___2) << k;
    k += 8U;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(n);
  __dyc_printpre_byte(b);
}
}
