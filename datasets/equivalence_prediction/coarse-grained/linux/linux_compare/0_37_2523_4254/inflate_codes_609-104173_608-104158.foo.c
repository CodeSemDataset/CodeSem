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
  int __dyc_funcallvar_5 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  e = (unsigned int )__dyc_readpre_byte();
  t = __dyc_read_ptr__comp_59huft();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  v___3 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  if (e == 99U) {
    goto __dyc_dummy_label;
  }
  b >>= (int )t->b;
  k -= (unsigned int )t->b;
  e -= 16U;
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
  t = t->v.t + ((unsigned int )b & (unsigned int )mask_bits[e]);
  e = (unsigned int )t->e;
  if (e > 16U) {

  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(b);
}
}
