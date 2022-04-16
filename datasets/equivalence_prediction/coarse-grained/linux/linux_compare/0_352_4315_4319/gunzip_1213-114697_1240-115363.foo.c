#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  ulg orig_crc ;
  int res ;
  int v___13 ;
  int tmp___62 ;
  unsigned int tmp___63 ;
  int v___14 ;
  int tmp___66 ;
  unsigned int tmp___67 ;
  int __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  res = __dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  orig_crc = 0;
  v___13 = 0;
  tmp___62 = 0;
  tmp___63 = 0;
  v___14 = 0;
  tmp___66 = 0;
  tmp___67 = 0;
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
  orig_crc |= (unsigned long )((unsigned char )v___14) << 8;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(orig_crc);
}
}
