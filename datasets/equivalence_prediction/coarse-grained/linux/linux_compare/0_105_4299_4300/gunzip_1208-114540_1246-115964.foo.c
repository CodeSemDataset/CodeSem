#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  uch flags ;
  ulg orig_crc ;
  ulg orig_len ;
  int res ;
  int v___12 ;
  int tmp___58 ;
  unsigned int tmp___59 ;
  int v___13 ;
  int tmp___62 ;
  unsigned int tmp___63 ;
  int v___14 ;
  int tmp___66 ;
  unsigned int tmp___67 ;
  int v___15 ;
  int tmp___70 ;
  unsigned int tmp___71 ;
  int v___16 ;
  int tmp___74 ;
  unsigned int tmp___75 ;
  int v___17 ;
  int tmp___78 ;
  unsigned int tmp___79 ;
  int v___18 ;
  int tmp___82 ;
  unsigned int tmp___83 ;
  int v___19 ;
  int tmp___86 ;
  unsigned int tmp___87 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  int __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  flags = (uch )__dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  orig_crc = 0;
  orig_len = 0;
  res = 0;
  v___12 = 0;
  tmp___58 = 0;
  tmp___59 = 0;
  v___13 = 0;
  tmp___62 = 0;
  tmp___63 = 0;
  v___14 = 0;
  tmp___66 = 0;
  tmp___67 = 0;
  v___15 = 0;
  tmp___70 = 0;
  tmp___71 = 0;
  v___16 = 0;
  tmp___74 = 0;
  tmp___75 = 0;
  v___17 = 0;
  tmp___78 = 0;
  tmp___79 = 0;
  v___18 = 0;
  tmp___82 = 0;
  tmp___83 = 0;
  v___19 = 0;
  tmp___86 = 0;
  tmp___87 = 0;
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
  if (inptr < insize) {
    tmp___71 = inptr;
    inptr ++;
    tmp___70 = (int )*(inbuf + tmp___71);
  } else {
    {
    tmp___70 = __dyc_funcallvar_19;
    }
  }
  v___15 = tmp___70;
  if (v___15 < 0) {
    goto __dyc_dummy_label;
  }
  orig_crc |= (unsigned long )((unsigned char )v___15) << 16;
  if (inptr < insize) {
    tmp___75 = inptr;
    inptr ++;
    tmp___74 = (int )*(inbuf + tmp___75);
  } else {
    {
    tmp___74 = __dyc_funcallvar_20;
    }
  }
  v___16 = tmp___74;
  if (v___16 < 0) {
    goto __dyc_dummy_label;
  }
  orig_crc |= (unsigned long )((unsigned char )v___16) << 24;
  if (inptr < insize) {
    tmp___79 = inptr;
    inptr ++;
    tmp___78 = (int )*(inbuf + tmp___79);
  } else {
    {
    tmp___78 = __dyc_funcallvar_21;
    }
  }
  v___17 = tmp___78;
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
  if (inptr < insize) {
    tmp___87 = inptr;
    inptr ++;
    tmp___86 = (int )*(inbuf + tmp___87);
  } else {
    {
    tmp___86 = __dyc_funcallvar_23;
    }
  }
  v___19 = tmp___86;
  if (v___19 < 0) {
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(orig_crc);
  __dyc_printpre_byte(orig_len);
}
}
