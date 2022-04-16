#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  uch *window ;
  unsigned int insize ;
  unsigned int inptr ;
  unsigned int outcnt ;
  ulg bb ;
  unsigned int bk ;
  unsigned int n ;
  unsigned int w ;
  ulg b ;
  unsigned int k ;
  int v___1 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned int tmp___11 ;
  unsigned int tmp___12 ;
  int __dyc_funcallvar_3 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  window = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  n = (unsigned int )__dyc_readpre_byte();
  w = (unsigned int )__dyc_readpre_byte();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  outcnt = 0;
  bb = 0;
  bk = 0;
  v___1 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  while (1) {
    while_27_continue:  ;
    tmp___12 = n;
    n --;
    if (! tmp___12) {
      goto while_27_break;
    }
    {
    while (1) {
      while_28_continue:  ;
      if (! (k < 8U)) {
        goto while_28_break;
      }
      if (inptr < insize) {
        tmp___10 = inptr;
        inptr ++;
        tmp___9 = (int )*(inbuf + tmp___10);
      } else {
        {
        tmp___9 = __dyc_funcallvar_3;
        }
      }
      v___1 = tmp___9;
      if (v___1 < 0) {
        goto __dyc_dummy_label;
      }
      b |= (unsigned long )((unsigned char )v___1) << k;
      k += 8U;
    }
    while_28_break:  ;
    }
    tmp___11 = w;
    w ++;
    *(window + tmp___11) = (unsigned char )b;
    if (w == 2147483648U) {
      {
      outcnt = w;

      w = 0U;
      }
    }
    b >>= 8;
    k -= 8U;
  }
  while_27_break:  ;
  outcnt = w;
  bb = b;
  bk = k;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(outcnt);
  __dyc_printpre_byte(bb);
  __dyc_printpre_byte(bk);
  __dyc_printpre_byte(n);
  __dyc_printpre_byte(w);
  __dyc_printpre_byte(b);
}
}
