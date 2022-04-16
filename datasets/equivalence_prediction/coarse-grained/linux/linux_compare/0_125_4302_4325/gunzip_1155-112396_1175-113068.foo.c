#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  uch flags ;
  unsigned char magic[2] ;
  char method ;
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
  int tmp___13 ;
  unsigned int tmp___14 ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  flags = 0;
  method = 0;
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
  tmp___13 = 0;
  tmp___14 = 0;
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
  if (v___1 < 0) {
    goto __dyc_dummy_label;
  }
  method = (char )((unsigned char )v___1);
  if ((int )magic[0] != 31) {
    {

    }
    goto __dyc_dummy_label;
  } else {
    if ((int )magic[1] != 139) {
      if ((int )magic[1] != 158) {
        {

        }
        goto __dyc_dummy_label;
      }
    }
  }
  if ((int )method != 8) {
    {

    }
    goto __dyc_dummy_label;
  }
  if (inptr < insize) {
    tmp___14 = inptr;
    inptr ++;
    tmp___13 = (int )*(inbuf + tmp___14);
  } else {
    {
    tmp___13 = __dyc_funcallvar_4;
    }
  }
  flags = (unsigned char )tmp___13;
  if (((int )flags & 32) != 0) {
    {

    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(method);
  __dyc_printpre_byte(orig_crc);
  __dyc_printpre_byte(orig_len);
}
}
