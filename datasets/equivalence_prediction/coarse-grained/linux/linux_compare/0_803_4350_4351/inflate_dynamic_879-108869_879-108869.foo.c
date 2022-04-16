#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  ulg b ;
  unsigned int k ;
  int v___4 ;
  int tmp___23 ;
  unsigned int tmp___24 ;
  int __dyc_funcallvar_8 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  v___4 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  while (1) {
    while_42_continue:  ;
    if (! (k < 2U)) {
      goto __dyc_dummy_label;
    }
    if (inptr < insize) {
      tmp___24 = inptr;
      inptr ++;
      tmp___23 = (int )*(inbuf + tmp___24);
    } else {
      {
      tmp___23 = __dyc_funcallvar_8;
      }
    }
    v___4 = tmp___23;
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
