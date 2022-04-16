#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  unsigned int nl ;
  unsigned int nd ;
  ulg b ;
  unsigned int k ;
  int v___0 ;
  int tmp___6 ;
  unsigned int tmp___7 ;
  int v___1 ;
  int tmp___10 ;
  unsigned int tmp___11 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  nl = 0;
  nd = 0;
  v___0 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  v___1 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  nl = 257U + ((unsigned int )b & 31U);
  b >>= 5;
  k -= 5U;
  while (1) {
    while_35_continue:  ;
    if (! (k < 5U)) {
      goto while_35_break;
    }
    if (inptr < insize) {
      tmp___7 = inptr;
      inptr ++;
      tmp___6 = (int )*(inbuf + tmp___7);
    } else {
      {
      tmp___6 = __dyc_funcallvar_3;
      }
    }
    v___0 = tmp___6;
    if (v___0 < 0) {
      goto __dyc_dummy_label;
    }
    b |= (unsigned long )((unsigned char )v___0) << k;
    k += 8U;
  }
  while_35_break:  ;
  nd = 1U + ((unsigned int )b & 31U);
  b >>= 5;
  k -= 5U;
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
  __dyc_printpre_byte(nl);
  __dyc_printpre_byte(nd);
  __dyc_printpre_byte(b);
}
}
