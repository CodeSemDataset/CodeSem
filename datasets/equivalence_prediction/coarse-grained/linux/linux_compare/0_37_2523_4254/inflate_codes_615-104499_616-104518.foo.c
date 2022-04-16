#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  unsigned int e ;
  struct huft *t ;
  ulg b ;
  unsigned int k ;
  int v___4 ;
  int tmp___22 ;
  unsigned int tmp___23 ;
  int __dyc_funcallvar_6 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  e = (unsigned int )__dyc_readpre_byte();
  t = __dyc_read_ptr__comp_59huft();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  v___4 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  b >>= (int )t->b;
  k -= (unsigned int )t->b;
  while (1) {
    while_22_continue:  ;
    if (! (k < e)) {
      goto __dyc_dummy_label;
    }
    if (inptr < insize) {
      tmp___23 = inptr;
      inptr ++;
      tmp___22 = (int )*(inbuf + tmp___23);
    } else {
      {
      tmp___22 = __dyc_funcallvar_6;
      }
    }
    v___4 = tmp___22;
    if (v___4 < 0) {
      goto __dyc_dummy_label;
    }
    b |= (unsigned long )((unsigned char )v___4) << k;
    k += 8U;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(b);
}
}
