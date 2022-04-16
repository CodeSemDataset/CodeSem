#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  ulg b ;
  unsigned int k ;
  int v ;
  int tmp___1 ;
  unsigned int tmp___2 ;
  int bl ;
  int __dyc_funcallvar_1 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  bl = __dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  v = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  while (1) {
    while_15_continue:  ;
    if (! (k < (unsigned int )bl)) {
      goto __dyc_dummy_label;
    }
    if (inptr < insize) {
      tmp___2 = inptr;
      inptr ++;
      tmp___1 = (int )*(inbuf + tmp___2);
    } else {
      {
      tmp___1 = __dyc_funcallvar_1;
      }
    }
    v = tmp___1;
    if (v < 0) {
      goto __dyc_dummy_label;
    }
    b |= (unsigned long )((unsigned char )v) << k;
    k += 8U;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(b);
}
}
