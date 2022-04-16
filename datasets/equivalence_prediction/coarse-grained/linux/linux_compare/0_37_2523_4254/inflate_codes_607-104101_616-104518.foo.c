#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  ush const   mask_bits[17] ;
  unsigned int e ;
  struct huft *t ;
  ulg b ;
  unsigned int k ;
  int v___3 ;
  int tmp___18 ;
  unsigned int tmp___19 ;
  int v___4 ;
  int tmp___22 ;
  unsigned int tmp___23 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  e = (unsigned int )__dyc_readpre_byte();
  t = __dyc_read_ptr__comp_59huft();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  v___3 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  v___4 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  if (e > 16U) {
    {
    while (1) {
      while_20_continue:  ;
      if (e == 99U) {
        goto __dyc_dummy_label;
      }
      b >>= (int )t->b;
      k -= (unsigned int )t->b;
      e -= 16U;
      {
      while (1) {
        while_21_continue:  ;
        if (! (k < e)) {
          goto while_21_break;
        }
        if (inptr < insize) {
          tmp___19 = inptr;
          inptr ++;
          tmp___18 = (int )*(inbuf + tmp___19);
        } else {
          {
          tmp___18 = __dyc_funcallvar_5;
          }
        }
        v___3 = tmp___18;
        if (v___3 < 0) {
          goto __dyc_dummy_label;
        }
        b |= (unsigned long )((unsigned char )v___3) << k;
        k += 8U;
      }
      while_21_break:  ;
      }
      t = t->v.t + ((unsigned int )b & (unsigned int )mask_bits[e]);
      e = (unsigned int )t->e;
      if (! (e > 16U)) {
        goto while_20_break;
      }
    }
    while_20_break:  ;
    }
  }
  b >>= (int )t->b;
  k -= (unsigned int )t->b;
  while (1) {
    while_22_continue:  ;
    if (! (k < e)) {
      goto __dyc_dummy_label;
    }
    if (inptr < insize) {
      tmp___23 = inptr;
      inptr ++;
      tmp___22 = (int )*(inbuf + tmp___23);
    } else {
      {
      tmp___22 = __dyc_funcallvar_6;
      }
    }
    v___4 = tmp___22;
    if (v___4 < 0) {
      goto __dyc_dummy_label;
    }
    b |= (unsigned long )((unsigned char )v___4) << k;
    k += 8U;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(b);
}
}
