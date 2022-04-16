#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  uch *window ;
  unsigned int insize ;
  unsigned int inptr ;
  unsigned int outcnt ;
  ush const   mask_bits[17] ;
  unsigned int e ;
  unsigned int n ;
  unsigned int d ;
  unsigned int w ;
  struct huft *t ;
  ulg b ;
  unsigned int k ;
  int v___4 ;
  int tmp___22 ;
  unsigned int tmp___23 ;
  unsigned int tmp___25 ;
  unsigned int tmp___26 ;
  unsigned int tmp___27 ;
  int __dyc_funcallvar_6 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  window = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  e = (unsigned int )__dyc_readpre_byte();
  n = (unsigned int )__dyc_readpre_byte();
  w = (unsigned int )__dyc_readpre_byte();
  t = __dyc_read_ptr__comp_59huft();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  outcnt = 0;
  d = 0;
  v___4 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  b >>= (int )t->b;
  k -= (unsigned int )t->b;
  while (1) {
    while_22_continue:  ;
    if (! (k < e)) {
      goto while_22_break;
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
  while_22_break:  ;
  d = (w - (unsigned int )t->v.n) - ((unsigned int )b & (unsigned int )mask_bits[e]);
  b >>= e;
  k -= e;
  while (1) {
    while_23_continue:  ;
    d &= 2147483647U;
    if (d > w) {
      tmp___25 = d;
    } else {
      tmp___25 = w;
    }
    e = 2147483648U - tmp___25;
    if (e > n) {
      e = n;
    } else {
      e = e;
    }
    n -= e;
    if (w - d >= e) {
      {

      w += e;
      d += e;
      }
    } else {
      {
      while (1) {
        while_24_continue:  ;
        tmp___26 = w;
        w ++;
        tmp___27 = d;
        d ++;
        *(window + tmp___26) = *(window + tmp___27);
        e --;
        if (! e) {
          goto while_24_break;
        }
      }
      while_24_break:  ;
      }
    }
    if (w == 2147483648U) {
      {
      outcnt = w;

      w = 0U;
      }
    }
    if (! n) {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(outcnt);
  __dyc_printpre_byte(d);
  __dyc_printpre_byte(w);
  __dyc_printpre_byte(b);
  __dyc_printpre_byte(k);
}
}
