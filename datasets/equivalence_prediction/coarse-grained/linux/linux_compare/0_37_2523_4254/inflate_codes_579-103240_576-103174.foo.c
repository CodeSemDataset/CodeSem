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
  int v___0 ;
  int tmp___5 ;
  unsigned int tmp___6 ;
  int __dyc_funcallvar_2 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  e = (unsigned int )__dyc_readpre_byte();
  t = __dyc_read_ptr__comp_59huft();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  v___0 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  b >>= (int )t->b;
  k -= (unsigned int )t->b;
  e -= 16U;
  while (1) {
    while_17_continue:  ;
    if (! (k < e)) {
      goto while_17_break;
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
  while_17_break:  ;
  t = t->v.t + ((unsigned int )b & (unsigned int )mask_bits[e]);
  e = (unsigned int )t->e;
  if (e > 16U) {

  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(b);
}
}
