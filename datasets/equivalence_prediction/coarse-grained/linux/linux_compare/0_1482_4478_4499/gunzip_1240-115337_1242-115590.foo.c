#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  ulg orig_crc ;
  int v___14 ;
  int v___15 ;
  int tmp___70 ;
  unsigned int tmp___71 ;
  int v___16 ;
  int tmp___74 ;
  unsigned int tmp___75 ;
  int __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  orig_crc = (ulg )__dyc_readpre_byte();
  v___14 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  v___15 = 0;
  tmp___70 = 0;
  tmp___71 = 0;
  v___16 = 0;
  tmp___74 = 0;
  tmp___75 = 0;
  if (v___14 < 0) {
    goto __dyc_dummy_label;
  }
  orig_crc |= (unsigned long )((unsigned char )v___14) << 8;
  if (inptr < insize) {
    tmp___71 = inptr;
    inptr ++;
    tmp___70 = (int )*(inbuf + tmp___71);
  } else {
    {
    tmp___70 = __dyc_funcallvar_19;
    }
  }
  v___15 = tmp___70;
  if (v___15 < 0) {
    goto __dyc_dummy_label;
  }
  orig_crc |= (unsigned long )((unsigned char )v___15) << 16;
  if (inptr < insize) {
    tmp___75 = inptr;
    inptr ++;
    tmp___74 = (int )*(inbuf + tmp___75);
  } else {
    {
    tmp___74 = __dyc_funcallvar_20;
    }
  }
  v___16 = tmp___74;
  if (v___16 < 0) {
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(orig_crc);
}
}
