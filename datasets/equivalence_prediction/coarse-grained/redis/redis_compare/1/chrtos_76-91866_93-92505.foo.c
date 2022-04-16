#include "../../include/dycfoo.h"
#include "../../include/read.i.hd.c.h"
void __dyc_foo(void) 
{ size_t len ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  unsigned short const   **tmp___7 ;
  char byte ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  unsigned short const   **__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;

  {
  byte = (char )__dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  len = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  if ((int )byte == 92) {
    goto switch_2_92;
  } else {
    if ((int )byte == 34) {
      goto switch_2_92;
    } else {
      if ((int )byte == 10) {
        goto switch_2_10;
      } else {
        if ((int )byte == 13) {
          goto switch_2_13;
        } else {
          if ((int )byte == 9) {
            goto switch_2_9;
          } else {
            if ((int )byte == 7) {
              goto switch_2_7;
            } else {
              if ((int )byte == 8) {
                goto switch_2_8;
              } else {
                {
                goto switch_2_default;
                if (0) {
                  switch_2_92:  
                  switch_2_34:  
                  {
                  tmp = __dyc_funcallvar_1;
                  len = (unsigned long )tmp;
                  }
                  goto switch_2_break;
                  switch_2_10:  
                  {
                  tmp___0 = __dyc_funcallvar_2;
                  len = (unsigned long )tmp___0;
                  }
                  goto switch_2_break;
                  switch_2_13:  
                  {
                  tmp___1 = __dyc_funcallvar_3;
                  len = (unsigned long )tmp___1;
                  }
                  goto switch_2_break;
                  switch_2_9:  
                  {
                  tmp___2 = __dyc_funcallvar_4;
                  len = (unsigned long )tmp___2;
                  }
                  goto switch_2_break;
                  switch_2_7:  
                  {
                  tmp___3 = __dyc_funcallvar_5;
                  len = (unsigned long )tmp___3;
                  }
                  goto switch_2_break;
                  switch_2_8:  
                  {
                  tmp___4 = __dyc_funcallvar_6;
                  len = (unsigned long )tmp___4;
                  }
                  goto switch_2_break;
                  switch_2_default:  
                  {
                  tmp___7 = __dyc_funcallvar_7;
                  }
                  if ((int const   )*(*tmp___7 + (int )byte) & 16384) {
                    {
                    tmp___5 = __dyc_funcallvar_8;
                    len = (unsigned long )tmp___5;
                    }
                  } else {
                    {
                    tmp___6 = __dyc_funcallvar_9;
                    len = (unsigned long )tmp___6;
                    }
                  }
                  goto switch_2_break;
                } else {
                  switch_2_break:  ;
                }
                }
              }
            }
          }
        }
      }
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len);
}
}
