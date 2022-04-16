#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  int i ;
  unsigned int *ll ;
  unsigned int k ;
  int tmp___31 ;
  int v___6 ;
  int tmp___35 ;
  unsigned int tmp___36 ;
  int __dyc_funcallvar_10 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  i = __dyc_readpre_byte();
  ll = __dyc_read_ptr__int();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  tmp___31 = 0;
  v___6 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___31 = i;
  i ++;
  *(ll + tmp___31) = 0U;
  while_46_continue:  ;
  if (! (k < 7U)) {
    goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(i);
  __dyc_printpre_byte(v___6);
}
}
