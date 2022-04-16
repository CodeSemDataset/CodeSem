#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  unsigned int len ;
  int v___8 ;
  int tmp___41 ;
  int v___9 ;
  int tmp___45 ;
  unsigned int tmp___46 ;
  int __dyc_funcallvar_12 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  tmp___41 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  len = 0;
  v___8 = 0;
  v___9 = 0;
  tmp___45 = 0;
  tmp___46 = 0;
  v___8 = tmp___41;
  if (v___8 < 0) {
    goto __dyc_dummy_label;
  }
  len = (unsigned int )((unsigned char )v___8);
  if (inptr < insize) {
    tmp___46 = inptr;
    inptr ++;
    tmp___45 = (int )*(inbuf + tmp___46);
  } else {
    {
    tmp___45 = __dyc_funcallvar_12;
    }
  }
  v___9 = tmp___45;
  if (v___9 < 0) {
    goto __dyc_dummy_label;
  }
  len |= (unsigned int )((unsigned char )v___9) << 8;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(len);
}
}
