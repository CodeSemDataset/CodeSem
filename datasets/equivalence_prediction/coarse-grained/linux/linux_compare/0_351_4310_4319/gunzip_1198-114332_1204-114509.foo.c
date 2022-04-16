#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  int v___10 ;
  int v___11 ;
  int tmp___54 ;
  unsigned int tmp___55 ;
  int __dyc_funcallvar_14 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  v___10 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  v___11 = 0;
  tmp___54 = 0;
  tmp___55 = 0;
  if (v___10 < 0) {
    goto __dyc_dummy_label;
  }
  while_56_continue:  ;
  if (inptr < insize) {
    tmp___55 = inptr;
    inptr ++;
    tmp___54 = (int )*(inbuf + tmp___55);
  } else {
    {
    tmp___54 = __dyc_funcallvar_14;
    }
  }
  v___11 = tmp___54;
  if (v___11 < 0) {
    goto __dyc_dummy_label;
  }
  if ((int )((unsigned char )v___11) != 0) {

  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
}
}
