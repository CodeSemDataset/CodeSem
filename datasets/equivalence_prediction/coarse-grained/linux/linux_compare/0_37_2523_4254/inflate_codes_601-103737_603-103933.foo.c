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
  int v___1 ;
  int tmp___10 ;
  unsigned int tmp___11 ;
  int __dyc_funcallvar_3 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  e = (unsigned int )__dyc_readpre_byte();
  t = __dyc_read_ptr__comp_59huft();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  n = 0;
  v___1 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  while (1) {
    while_18_continue:  ;
    if (! (k < e)) {
      goto while_18_break;
    }
    if (inptr < insize) {
      tmp___11 = inptr;
      inptr ++;
      tmp___10 = (int )*(inbuf + tmp___11);
    } else {
      {
      tmp___10 = __dyc_funcallvar_3;
      }
    }
    v___1 = tmp___10;
    if (v___1 < 0) {
      goto __dyc_dummy_label;
    }
    b |= (unsigned long )((unsigned char )v___1) << k;
    k += 8U;
  }
  while_18_break:  ;
  n = (unsigned int )t->v.n + ((unsigned int )b & (unsigned int )mask_bits[e]);
  b >>= e;
  k -= e;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(n);
  __dyc_printpre_byte(b);
  __dyc_printpre_byte(k);
}
}
