#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  ulg b ;
  unsigned int k ;
  int v___1 ;
  int tmp___10 ;
  unsigned int tmp___11 ;
  int __dyc_funcallvar_4 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  v___1 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  while (1) {
    while_36_continue:  ;
    if (! (k < 4U)) {
      goto __dyc_dummy_label;
    }
    if (inptr < insize) {
      tmp___11 = inptr;
      inptr ++;
      tmp___10 = (int )*(inbuf + tmp___11);
    } else {
      {
      tmp___10 = __dyc_funcallvar_4;
      }
    }
    v___1 = tmp___10;
    if (v___1 < 0) {
      goto __dyc_dummy_label;
    }
    b |= (unsigned long )((unsigned char )v___1) << k;
    k += 8U;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(b);
}
}
