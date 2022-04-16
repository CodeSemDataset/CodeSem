#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  uch flags ;
  unsigned char magic[2] ;
  char method ;
  int v___1 ;
  int tmp___13 ;
  unsigned int tmp___14 ;
  int __dyc_funcallvar_4 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  v___1 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  flags = 0;
  method = 0;
  tmp___13 = 0;
  tmp___14 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(flags);
  __dyc_printpre_byte(method);
}
}
