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
  int v___2 ;
  int tmp___17 ;
  unsigned int tmp___18 ;
  int v___3 ;
  int tmp___21 ;
  unsigned int tmp___22 ;
  int v___4 ;
  int tmp___25 ;
  unsigned int tmp___26 ;
  int v___5 ;
  int tmp___29 ;
  unsigned int tmp___30 ;
  int v___6 ;
  int tmp___33 ;
  unsigned int tmp___34 ;
  int v___7 ;
  int tmp___37 ;
  unsigned int tmp___38 ;
  unsigned int len ;
  int v___8 ;
  int tmp___41 ;
  unsigned int tmp___42 ;
  int v___9 ;
  int tmp___45 ;
  unsigned int tmp___46 ;
  int v___10 ;
  int tmp___49 ;
  unsigned int tmp___50 ;
  unsigned int tmp___51 ;
  int v___11 ;
  int tmp___54 ;
  unsigned int tmp___55 ;
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
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
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
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
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
  v___2 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  v___3 = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  v___4 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  v___5 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  v___6 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  v___7 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  len = 0;
  v___8 = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  v___9 = 0;
  tmp___45 = 0;
  tmp___46 = 0;
  v___10 = 0;
  tmp___49 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  v___11 = 0;
  tmp___54 = 0;
  tmp___55 = 0;
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
  if (inptr < insize) {
    tmp___26 = inptr;
    inptr ++;
    tmp___25 = (int )*(inbuf + tmp___26);
  } else {
    {
    tmp___25 = __dyc_funcallvar_7;
    }
  }
  v___4 = tmp___25;
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
  if (v___6 < 0) {
    goto __dyc_dummy_label;
  }
  if (inptr < insize) {
    tmp___38 = inptr;
    inptr ++;
    tmp___37 = (int )*(inbuf + tmp___38);
  } else {
    {
    tmp___37 = __dyc_funcallvar_10;
    }
  }
  v___7 = tmp___37;
  if (v___7 < 0) {
    goto __dyc_dummy_label;
  }
  if (((int )flags & 4) != 0) {
    if (inptr < insize) {
      tmp___42 = inptr;
      inptr ++;
      tmp___41 = (int )*(inbuf + tmp___42);
    } else {
      {
      tmp___41 = __dyc_funcallvar_11;
      }
    }
    v___8 = tmp___41;
    if (v___8 < 0) {
      goto __dyc_dummy_label;
    }
    len = (unsigned int )((unsigned char )v___8);
    if (inptr < insize) {
      tmp___46 = inptr;
      inptr ++;
      tmp___45 = (int )*(inbuf + tmp___46);
    } else {
      {
      tmp___45 = __dyc_funcallvar_12;
      }
    }
    v___9 = tmp___45;
    if (v___9 < 0) {
      goto __dyc_dummy_label;
    }
    len |= (unsigned int )((unsigned char )v___9) << 8;
    {
    while (1) {
      while_55_continue:  ;
      tmp___51 = len;
      len --;
      if (! tmp___51) {
        goto while_55_break;
      }
      if (inptr < insize) {
        tmp___50 = inptr;
        inptr ++;
        tmp___49 = (int )*(inbuf + tmp___50);
      } else {
        {
        tmp___49 = __dyc_funcallvar_13;
        }
      }
      v___10 = tmp___49;
      if (v___10 < 0) {
        goto __dyc_dummy_label;
      }
    }
    while_55_break:  ;
    }
  }
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
  orig_len |= (unsigned long )((unsigned char )v___19) << 16;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(orig_crc);
  __dyc_printpre_byte(orig_len);
  __dyc_printpre_byte(len);
}
}
