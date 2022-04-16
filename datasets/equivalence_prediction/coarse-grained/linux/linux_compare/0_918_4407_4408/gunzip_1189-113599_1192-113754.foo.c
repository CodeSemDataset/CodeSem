#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  int v___4 ;
  int v___5 ;
  int tmp___29 ;
  unsigned int tmp___30 ;
  int v___6 ;
  int tmp___33 ;
  unsigned int tmp___34 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  v___4 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  v___5 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  v___6 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(v___6);
}
}
