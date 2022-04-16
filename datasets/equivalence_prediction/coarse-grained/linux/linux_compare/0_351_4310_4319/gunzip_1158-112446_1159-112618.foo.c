#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  unsigned char magic[2] ;
  int v ;
  int tmp___1 ;
  int v___0 ;
  int tmp___5 ;
  unsigned int tmp___6 ;
  int __dyc_funcallvar_2 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  tmp___1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  v = 0;
  v___0 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
}
}
