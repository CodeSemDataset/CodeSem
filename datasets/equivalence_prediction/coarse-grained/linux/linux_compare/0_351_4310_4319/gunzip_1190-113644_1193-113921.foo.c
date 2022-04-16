#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  int v___5 ;
  int tmp___29 ;
  int v___6 ;
  int tmp___33 ;
  unsigned int tmp___34 ;
  int v___7 ;
  int tmp___37 ;
  unsigned int tmp___38 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  tmp___29 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  v___5 = 0;
  v___6 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  v___7 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  v___5 = tmp___29;
  if (v___5 < 0) {
    goto __dyc_dummy_label;
  }
  if (inptr < insize) {
    tmp___34 = inptr;
    inptr ++;
    tmp___33 = (int )*(inbuf + tmp___34);
  } else {
    {
    tmp___33 = __dyc_funcallvar_9;
    }
  }
  v___6 = tmp___33;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
}
}
