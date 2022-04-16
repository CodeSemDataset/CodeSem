#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  int i ;
  unsigned int l ;
  unsigned int *ll ;
  ulg b ;
  unsigned int k ;
  int tmp___25 ;
  int v___5 ;
  int tmp___29 ;
  unsigned int tmp___30 ;
  int __dyc_funcallvar_9 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  i = __dyc_readpre_byte();
  l = (unsigned int )__dyc_readpre_byte();
  ll = __dyc_read_ptr__int();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  tmp___25 = 0;
  v___5 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___25 = i;
  i ++;
  *(ll + tmp___25) = l;
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
  __dyc_printpre_byte(i);
  __dyc_printpre_byte(b);
}
}
