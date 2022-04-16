#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  uch flags ;
  int v___6 ;
  int v___7 ;
  int tmp___37 ;
  unsigned int tmp___38 ;
  unsigned int len ;
  int v___8 ;
  int tmp___41 ;
  unsigned int tmp___42 ;
  int v___9 ;
  int tmp___45 ;
  unsigned int tmp___46 ;
  int v___10 ;
  int tmp___49 ;
  unsigned int tmp___50 ;
  unsigned int tmp___51 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  flags = (uch )__dyc_readpre_byte();
  v___6 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  v___7 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  len = 0;
  v___8 = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  v___9 = 0;
  tmp___45 = 0;
  tmp___46 = 0;
  v___10 = 0;
  tmp___49 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  if (v___6 < 0) {
    goto __dyc_dummy_label;
  }
  if (inptr < insize) {
    tmp___38 = inptr;
    inptr ++;
    tmp___37 = (int )*(inbuf + tmp___38);
  } else {
    {
    tmp___37 = __dyc_funcallvar_10;
    }
  }
  v___7 = tmp___37;
  if (v___7 < 0) {
    goto __dyc_dummy_label;
  }
  if (((int )flags & 4) != 0) {
    if (inptr < insize) {
      tmp___42 = inptr;
      inptr ++;
      tmp___41 = (int )*(inbuf + tmp___42);
    } else {
      {
      tmp___41 = __dyc_funcallvar_11;
      }
    }
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
    {
    while (1) {
      while_55_continue:  ;
      tmp___51 = len;
      len --;
      if (! tmp___51) {
        goto while_55_break;
      }
      if (inptr < insize) {
        tmp___50 = inptr;
        inptr ++;
        tmp___49 = (int )*(inbuf + tmp___50);
      } else {
        {
        tmp___49 = __dyc_funcallvar_13;
        }
      }
      v___10 = tmp___49;
      if (v___10 < 0) {
        goto __dyc_dummy_label;
      }
    }
    while_55_break:  ;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(len);
}
}
