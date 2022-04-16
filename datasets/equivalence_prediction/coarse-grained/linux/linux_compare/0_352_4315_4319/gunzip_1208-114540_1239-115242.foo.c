#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  uch flags ;
  ulg orig_crc ;
  int res ;
  int v___12 ;
  int tmp___58 ;
  unsigned int tmp___59 ;
  int v___13 ;
  int tmp___62 ;
  unsigned int tmp___63 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  int __dyc_funcallvar_17 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  flags = (uch )__dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_readpre_byte();
  orig_crc = 0;
  res = 0;
  v___12 = 0;
  tmp___58 = 0;
  tmp___59 = 0;
  v___13 = 0;
  tmp___62 = 0;
  tmp___63 = 0;
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
  res = __dyc_funcallvar_16;
  if (res) {
    if (res == 0) {
      goto switch_58_0;
    } else {
      if (res == 1) {
        goto switch_58_1;
      } else {
        if (res == 2) {
          goto switch_58_2;
        } else {
          if (res == 3) {
            goto switch_58_3;
          } else {
            if (res == 4) {
              goto switch_58_4;
            } else {
              {
              goto switch_58_default;
              if (0) {
                switch_58_0:  
                goto switch_58_break;
                switch_58_1:  
                {

                }
                goto switch_58_break;
                switch_58_2:  
                {

                }
                goto switch_58_break;
                switch_58_3:  
                {

                }
                goto switch_58_break;
                switch_58_4:  
                {

                }
                goto switch_58_break;
                switch_58_default:  
                {

                }
              } else {
                switch_58_break:  ;
              }
              }
            }
          }
        }
      }
    }
    goto __dyc_dummy_label;
  }
  if (inptr < insize) {
    tmp___63 = inptr;
    inptr ++;
    tmp___62 = (int )*(inbuf + tmp___63);
  } else {
    {
    tmp___62 = __dyc_funcallvar_17;
    }
  }
  v___13 = tmp___62;
  if (v___13 < 0) {
    goto __dyc_dummy_label;
  }
  orig_crc = (unsigned long )((unsigned char )v___13);
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(orig_crc);
}
}
