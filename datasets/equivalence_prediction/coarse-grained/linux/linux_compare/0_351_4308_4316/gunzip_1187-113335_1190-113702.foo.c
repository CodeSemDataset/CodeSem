#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  int v___2 ;
  int tmp___17 ;
  int v___3 ;
  int tmp___21 ;
  unsigned int tmp___22 ;
  int v___4 ;
  int tmp___25 ;
  unsigned int tmp___26 ;
  int v___5 ;
  int tmp___29 ;
  unsigned int tmp___30 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  tmp___17 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  v___2 = 0;
  v___3 = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  v___4 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  v___5 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  v___2 = tmp___17;
  if (v___2 < 0) {
    goto __dyc_dummy_label;
  }
  if (inptr < insize) {
    tmp___22 = inptr;
    inptr ++;
    tmp___21 = (int )*(inbuf + tmp___22);
  } else {
    {
    tmp___21 = __dyc_funcallvar_6;
    }
  }
  v___3 = tmp___21;
  if (v___3 < 0) {
    goto __dyc_dummy_label;
  }
  if (inptr < insize) {
    tmp___26 = inptr;
    inptr ++;
    tmp___25 = (int )*(inbuf + tmp___26);
  } else {
    {
    tmp___25 = __dyc_funcallvar_7;
    }
  }
  v___4 = tmp___25;
  if (v___4 < 0) {
    goto __dyc_dummy_label;
  }
  if (inptr < insize) {
    tmp___30 = inptr;
    inptr ++;
    tmp___29 = (int )*(inbuf + tmp___30);
  } else {
    {
    tmp___29 = __dyc_funcallvar_8;
    }
  }
  v___5 = tmp___29;
  if (v___5 < 0) {
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
}
}
