#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  uch flags ;
  int v___11 ;
  int tmp___54 ;
  unsigned int tmp___55 ;
  int v___12 ;
  int tmp___58 ;
  unsigned int tmp___59 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  flags = (uch )__dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  v___11 = 0;
  tmp___54 = 0;
  tmp___55 = 0;
  v___12 = 0;
  tmp___58 = 0;
  tmp___59 = 0;
  if (((int )flags & 8) != 0) {
    {
    while (1) {
      while_56_continue:  ;
      if (inptr < insize) {
        tmp___55 = inptr;
        inptr ++;
        tmp___54 = (int )*(inbuf + tmp___55);
      } else {
        {
        tmp___54 = __dyc_funcallvar_14;
        }
      }
      v___11 = tmp___54;
      if (v___11 < 0) {
        goto __dyc_dummy_label;
      }
      if (! ((int )((unsigned char )v___11) != 0)) {
        goto while_56_break;
      }
    }
    while_56_break:  ;
    }
  }
  if (((int )flags & 16) != 0) {
    {
    while (1) {
      while_57_continue:  ;
      if (inptr < insize) {
        tmp___59 = inptr;
        inptr ++;
        tmp___58 = (int )*(inbuf + tmp___59);
      } else {
        {
        tmp___58 = __dyc_funcallvar_15;
        }
      }
      v___12 = tmp___58;
      if (v___12 < 0) {
        goto __dyc_dummy_label;
      }
      if (! ((int )((unsigned char )v___12) != 0)) {
        goto while_57_break;
      }
    }
    while_57_break:  ;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
}
}
