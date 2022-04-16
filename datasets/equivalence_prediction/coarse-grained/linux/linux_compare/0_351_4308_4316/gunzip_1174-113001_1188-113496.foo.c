#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  uch flags ;
  int tmp___13 ;
  int v___2 ;
  int tmp___17 ;
  unsigned int tmp___18 ;
  int v___3 ;
  int tmp___21 ;
  unsigned int tmp___22 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  tmp___13 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  flags = 0;
  v___2 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  v___3 = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  flags = (unsigned char )tmp___13;
  if (((int )flags & 32) != 0) {
    {

    }
    goto __dyc_dummy_label;
  }
  if (((int )flags & 2) != 0) {
    {

    }
    goto __dyc_dummy_label;
  }
  if (((int )flags & 192) != 0) {
    {

    }
    goto __dyc_dummy_label;
  }
  if (inptr < insize) {
    tmp___18 = inptr;
    inptr ++;
    tmp___17 = (int )*(inbuf + tmp___18);
  } else {
    {
    tmp___17 = __dyc_funcallvar_5;
    }
  }
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
}
}
