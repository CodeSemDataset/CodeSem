#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  ulg orig_len ;
  int v___17 ;
  int v___18 ;
  int tmp___82 ;
  unsigned int tmp___83 ;
  int __dyc_funcallvar_22 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  v___17 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  orig_len = 0;
  v___18 = 0;
  tmp___82 = 0;
  tmp___83 = 0;
  if (v___17 < 0) {
    goto __dyc_dummy_label;
  }
  orig_len = (unsigned long )((unsigned char )v___17);
  if (inptr < insize) {
    tmp___83 = inptr;
    inptr ++;
    tmp___82 = (int )*(inbuf + tmp___83);
  } else {
    {
    tmp___82 = __dyc_funcallvar_22;
    }
  }
  v___18 = tmp___82;
  if (v___18 < 0) {
    goto __dyc_dummy_label;
  }
  orig_len |= (unsigned long )((unsigned char )v___18) << 8;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(orig_len);
}
}
