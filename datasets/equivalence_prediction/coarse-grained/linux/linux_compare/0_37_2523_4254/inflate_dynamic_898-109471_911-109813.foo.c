#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  int i ;
  unsigned int j ;
  unsigned int l ;
  unsigned int n ;
  unsigned int *ll ;
  ulg b ;
  unsigned int k ;
  int ret ;
  int tmp___31 ;
  unsigned int tmp___32 ;
  int v___6 ;
  int tmp___35 ;
  unsigned int tmp___36 ;
  int tmp___37 ;
  unsigned int tmp___38 ;
  int __dyc_funcallvar_10 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  i = __dyc_readpre_byte();
  j = (unsigned int )__dyc_readpre_byte();
  n = (unsigned int )__dyc_readpre_byte();
  ll = __dyc_read_ptr__int();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  l = 0;
  ret = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  v___6 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  while (1) {
    while_45_continue:  ;
    tmp___32 = j;
    j --;
    if (! tmp___32) {
      goto while_45_break;
    }
    tmp___31 = i;
    i ++;
    *(ll + tmp___31) = 0U;
  }
  while_45_break:  ;
  l = 0U;
  while (1) {
    while_46_continue:  ;
    if (! (k < 7U)) {
      goto while_46_break;
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
  while_46_break:  ;
  j = 11U + ((unsigned int )b & 127U);
  b >>= 7;
  k -= 7U;
  if ((unsigned int )i + j > n) {
    ret = 1;
    goto __dyc_dummy_label;
  }
  while (1) {
    while_47_continue:  ;
    tmp___38 = j;
    j --;
    if (! tmp___38) {
      goto __dyc_dummy_label;
    }
    tmp___37 = i;
    i ++;
    *(ll + tmp___37) = 0U;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(i);
  __dyc_printpre_byte(j);
  __dyc_printpre_byte(l);
  __dyc_printpre_byte(b);
  __dyc_printpre_byte(k);
  __dyc_printpre_byte(ret);
}
}
