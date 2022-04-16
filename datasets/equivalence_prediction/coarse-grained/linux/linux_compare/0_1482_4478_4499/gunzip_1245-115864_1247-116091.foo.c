#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  ulg orig_len ;
  int v___18 ;
  int v___19 ;
  int tmp___86 ;
  unsigned int tmp___87 ;
  int v___20 ;
  int tmp___90 ;
  unsigned int tmp___91 ;
  int __dyc_funcallvar_23 ;
  int __dyc_funcallvar_24 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  orig_len = (ulg )__dyc_readpre_byte();
  v___18 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_readpre_byte();
  v___19 = 0;
  tmp___86 = 0;
  tmp___87 = 0;
  v___20 = 0;
  tmp___90 = 0;
  tmp___91 = 0;
  orig_len |= (unsigned long )((unsigned char )v___18) << 8;
  if (inptr < insize) {
    tmp___87 = inptr;
    inptr ++;
    tmp___86 = (int )*(inbuf + tmp___87);
  } else {
    {
    tmp___86 = __dyc_funcallvar_23;
    }
  }
  v___19 = tmp___86;
  if (v___19 < 0) {
    goto __dyc_dummy_label;
  }
  orig_len |= (unsigned long )((unsigned char )v___19) << 16;
  if (inptr < insize) {
    tmp___91 = inptr;
    inptr ++;
    tmp___90 = (int )*(inbuf + tmp___91);
  } else {
    {
    tmp___90 = __dyc_funcallvar_24;
    }
  }
  v___20 = tmp___90;
  if (v___20 < 0) {
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(orig_len);
}
}
