#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  ulg b ;
  unsigned int k ;
  int v___5 ;
  int tmp___29 ;
  unsigned int tmp___30 ;
  int __dyc_funcallvar_9 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  v___5 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  while (1) {
    while_44_continue:  ;
    if (! (k < 3U)) {
      goto __dyc_dummy_label;
    }
    if (inptr < insize) {
      tmp___30 = inptr;
      inptr ++;
      tmp___29 = (int )*(inbuf + tmp___30);
    } else {
      {
      tmp___29 = __dyc_funcallvar_9;
      }
    }
    v___5 = tmp___29;
    if (v___5 < 0) {
      goto __dyc_dummy_label;
    }
    b |= (unsigned long )((unsigned char )v___5) << k;
    k += 8U;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(b);
}
}
