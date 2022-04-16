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
  int tmp___25 ;
  int v___5 ;
  int tmp___29 ;
  unsigned int tmp___30 ;
  int tmp___31 ;
  unsigned int tmp___32 ;
  int __dyc_funcallvar_9 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  i = __dyc_readpre_byte();
  l = (unsigned int )__dyc_readpre_byte();
  n = (unsigned int )__dyc_readpre_byte();
  ll = __dyc_read_ptr__int();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  j = 0;
  ret = 0;
  tmp___25 = 0;
  v___5 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___25 = i;
  i ++;
  *(ll + tmp___25) = l;
  while (1) {
    while_44_continue:  ;
    if (! (k < 3U)) {
      goto while_44_break;
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
  while_44_break:  ;
  j = 3U + ((unsigned int )b & 7U);
  b >>= 3;
  k -= 3U;
  if ((unsigned int )i + j > n) {
    ret = 1;
    goto __dyc_dummy_label;
  }
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
