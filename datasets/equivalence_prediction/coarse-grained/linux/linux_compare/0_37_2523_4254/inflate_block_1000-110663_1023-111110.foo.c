#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  ulg bb ;
  unsigned int bk ;
  unsigned int t ;
  ulg b ;
  unsigned int k ;
  int v ;
  int tmp___1 ;
  unsigned int tmp___2 ;
  int v___0 ;
  int tmp___5 ;
  unsigned int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int *e ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  bb = (ulg )__dyc_readpre_byte();
  bk = (unsigned int )__dyc_readpre_byte();
  e = (int *)__dyc_read_ptr__int();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  t = 0;
  b = 0;
  k = 0;
  v = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  v___0 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  b = bb;
  k = bk;
  while (1) {
    while_48_continue:  ;
    if (! (k < 1U)) {
      goto while_48_break;
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
  while_48_break:  ;
  *e = (int )b & 1;
  b >>= 1;
  k --;
  while (1) {
    while_49_continue:  ;
    if (! (k < 2U)) {
      goto while_49_break;
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
  while_49_break:  ;
  t = (unsigned int )b & 3U;
  b >>= 2;
  k -= 2U;
  bb = b;
  bk = k;
  if (t == 2U) {
    {
    tmp___7 = __dyc_funcallvar_3;
    }
    goto __dyc_dummy_label;
  }
  if (t == 0U) {
    {
    tmp___8 = __dyc_funcallvar_4;
    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(bb);
  __dyc_printpre_byte(bk);
  __dyc_printpre_byte(b);
  __dyc_printpre_byte(tmp___7);
  __dyc_printpre_byte(tmp___8);
}
}
