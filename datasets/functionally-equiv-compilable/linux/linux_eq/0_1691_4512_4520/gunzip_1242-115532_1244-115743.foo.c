#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  ulg orig_crc ;
  ulg orig_len ;
  int v___16 ;
  int tmp___74 ;
  int v___17 ;
  int tmp___78 ;
  unsigned int tmp___79 ;
  int __dyc_funcallvar_21 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  orig_crc = (ulg )__dyc_readpre_byte();
  tmp___74 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  orig_len = 0;
  v___16 = 0;
  v___17 = 0;
  tmp___78 = 0;
  tmp___79 = 0;
  v___16 = tmp___74;
  if (v___16 < 0) {
    goto __dyc_dummy_label;
  }
  orig_crc |= (unsigned long )((unsigned char )v___16) << 24;
  if (inptr < insize) {
    tmp___79 = inptr;
    inptr ++;
    tmp___78 = (int )*(inbuf + tmp___79);
  } else {
    {
    tmp___78 = __dyc_funcallvar_21;
    }
  }
  v___17 = tmp___78;
  if (v___17 < 0) {
    goto __dyc_dummy_label;
  }
  orig_len = (unsigned long )((unsigned char )v___17);
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(orig_crc);
  __dyc_printpre_byte(orig_len);
}
}
