#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  ulg bb ;
  unsigned int bk ;
  ulg b ;
  unsigned int k ;
  int v ;
  int tmp___2 ;
  unsigned int tmp___3 ;
  int __dyc_funcallvar_2 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  bb = (ulg )__dyc_readpre_byte();
  bk = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  b = 0;
  k = 0;
  v = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  b = bb;
  k = bk;
  while (1) {
    while_34_continue:  ;
    if (! (k < 5U)) {
      goto __dyc_dummy_label;
    }
    if (inptr < insize) {
      tmp___3 = inptr;
      inptr ++;
      tmp___2 = (int )*(inbuf + tmp___3);
    } else {
      {
      tmp___2 = __dyc_funcallvar_2;
      }
    }
    v = tmp___2;
    if (v < 0) {
      goto __dyc_dummy_label;
    }
    b |= (unsigned long )((unsigned char )v) << k;
    k += 8U;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(b);
}
}
