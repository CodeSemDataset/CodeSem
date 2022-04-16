#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  unsigned char magic[2] ;
  ulg orig_crc ;
  ulg orig_len ;
  int v ;
  int tmp___1 ;
  unsigned int tmp___2 ;
  int v___0 ;
  int tmp___5 ;
  unsigned int tmp___6 ;
  int v___1 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  orig_crc = 0;
  orig_len = 0;
  v = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  v___0 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  v___1 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  orig_crc = (ulg )0;
  orig_len = (ulg )0;
  if (inptr < insize) {
    tmp___2 = inptr;
    inptr ++;
    tmp___1 = (int )*(inbuf + tmp___2);
  } else {
    {
    tmp___1 = __dyc_funcallvar_1;
    }
  }
  v = tmp___1;
  if (v < 0) {
    goto __dyc_dummy_label;
  }
  magic[0] = (unsigned char )v;
  if (inptr < insize) {
    tmp___6 = inptr;
    inptr ++;
    tmp___5 = (int )*(inbuf + tmp___6);
  } else {
    {
    tmp___5 = __dyc_funcallvar_2;
    }
  }
  v___0 = tmp___5;
  if (v___0 < 0) {
    goto __dyc_dummy_label;
  }
  magic[1] = (unsigned char )v___0;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(orig_crc);
  __dyc_printpre_byte(orig_len);
  __dyc_printpre_byte(v___1);
}
}
