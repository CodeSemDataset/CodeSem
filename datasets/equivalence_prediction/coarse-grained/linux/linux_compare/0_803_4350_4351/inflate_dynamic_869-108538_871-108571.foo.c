#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  int i ;
  unsigned int n ;
  int bl ;
  ulg b ;
  unsigned int k ;
  int v___3 ;
  int tmp___18 ;
  unsigned int tmp___19 ;
  int __dyc_funcallvar_7 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  i = __dyc_readpre_byte();
  n = (unsigned int )__dyc_readpre_byte();
  bl = __dyc_readpre_byte();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  v___3 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  if (! ((unsigned int )i < n)) {
    goto __dyc_dummy_label;
  }
  while (1) {
    while_41_continue:  ;
    if (! (k < (unsigned int )bl)) {
      goto __dyc_dummy_label;
    }
    if (inptr < insize) {
      tmp___19 = inptr;
      inptr ++;
      tmp___18 = (int )*(inbuf + tmp___19);
    } else {
      {
      tmp___18 = __dyc_funcallvar_7;
      }
    }
    v___3 = tmp___18;
    if (v___3 < 0) {
      goto __dyc_dummy_label;
    }
    b |= (unsigned long )((unsigned char )v___3) << k;
    k += 8U;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(b);
}
}
