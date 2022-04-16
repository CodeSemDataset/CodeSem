#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  ulg b ;
  unsigned int k ;
  int v___6 ;
  int tmp___35 ;
  unsigned int tmp___36 ;
  int __dyc_funcallvar_10 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  v___6 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  while (1) {
    while_46_continue:  ;
    if (! (k < 7U)) {
      goto __dyc_dummy_label;
    }
    if (inptr < insize) {
      tmp___36 = inptr;
      inptr ++;
      tmp___35 = (int )*(inbuf + tmp___36);
    } else {
      {
      tmp___35 = __dyc_funcallvar_10;
      }
    }
    v___6 = tmp___35;
    if (v___6 < 0) {
      goto __dyc_dummy_label;
    }
    b |= (unsigned long )((unsigned char )v___6) << k;
    k += 8U;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(b);
}
}
