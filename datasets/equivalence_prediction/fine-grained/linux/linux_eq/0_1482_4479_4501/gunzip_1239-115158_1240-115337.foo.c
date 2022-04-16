#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  ulg orig_crc ;
  int v___13 ;
  int tmp___62 ;
  int v___14 ;
  int tmp___66 ;
  unsigned int tmp___67 ;
  int __dyc_funcallvar_18 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  tmp___62 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  orig_crc = 0;
  v___13 = 0;
  v___14 = 0;
  tmp___66 = 0;
  tmp___67 = 0;
  v___13 = tmp___62;
  if (v___13 < 0) {
    goto __dyc_dummy_label;
  }
  orig_crc = (unsigned long )((unsigned char )v___13);
  if (inptr < insize) {
    tmp___67 = inptr;
    inptr ++;
    tmp___66 = (int )*(inbuf + tmp___67);
  } else {
    {
    tmp___66 = __dyc_funcallvar_18;
    }
  }
  v___14 = tmp___66;
  if (v___14 < 0) {
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(orig_crc);
}
}
