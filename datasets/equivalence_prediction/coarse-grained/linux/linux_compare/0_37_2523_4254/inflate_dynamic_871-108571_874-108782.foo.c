#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  unsigned int j ;
  unsigned int m ;
  struct huft *tl ;
  struct huft *td ;
  int bl ;
  ulg b ;
  unsigned int k ;
  int v___3 ;
  int tmp___18 ;
  unsigned int tmp___19 ;
  int __dyc_funcallvar_7 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  m = (unsigned int )__dyc_readpre_byte();
  tl = __dyc_read_ptr__comp_59huft();
  bl = __dyc_readpre_byte();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  j = 0;
  td = 0;
  v___3 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  while (1) {
    while_41_continue:  ;
    if (! (k < (unsigned int )bl)) {
      goto while_41_break;
    }
    if (inptr < insize) {
      tmp___19 = inptr;
      inptr ++;
      tmp___18 = (int )*(inbuf + tmp___19);
    } else {
      {
      tmp___18 = __dyc_funcallvar_7;
      }
    }
    v___3 = tmp___18;
    if (v___3 < 0) {
      goto __dyc_dummy_label;
    }
    b |= (unsigned long )((unsigned char )v___3) << k;
    k += 8U;
  }
  while_41_break:  ;
  td = tl + ((unsigned int )b & m);
  j = (unsigned int )td->b;
  b >>= j;
  k -= j;
  j = (unsigned int )td->v.n;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(j);
  __dyc_printpre_byte(b);
  __dyc_printpre_byte(k);
}
}
