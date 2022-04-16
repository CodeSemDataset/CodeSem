#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  unsigned int n ;
  ulg b ;
  unsigned int k ;
  int v ;
  int tmp___1 ;
  unsigned int tmp___2 ;
  int v___0 ;
  int tmp___5 ;
  unsigned int tmp___6 ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  n = 0;
  v = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  v___0 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  while (1) {
    while_25_continue:  ;
    if (! (k < 16U)) {
      goto while_25_break;
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
  while_25_break:  ;
  n = (unsigned int )b & 65535U;
  b >>= 16;
  k -= 16U;
  while (1) {
    while_26_continue:  ;
    if (! (k < 16U)) {
      goto __dyc_dummy_label;
    }
    if (inptr < insize) {
      tmp___6 = inptr;
      inptr ++;
      tmp___5 = (int )*(inbuf + tmp___6);
    } else {
      {
      tmp___5 = __dyc_funcallvar_2;
      }
    }
    v___0 = tmp___5;
    if (v___0 < 0) {
      goto __dyc_dummy_label;
    }
    b |= (unsigned long )((unsigned char )v___0) << k;
    k += 8U;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(n);
  __dyc_printpre_byte(b);
}
}
