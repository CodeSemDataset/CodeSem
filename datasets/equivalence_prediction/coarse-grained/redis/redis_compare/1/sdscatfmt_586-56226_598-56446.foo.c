#include "../../include/dycfoo.h"
#include "../../include/sds.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *f ;
  int i ;
  char next ;
  size_t l ;
  size_t tmp___0 ;
  size_t tmp___3 ;
  int tmp___4 ;
  size_t tmp___5 ;
  int tmp___6 ;
  size_t tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  sds s ;
  size_t __dyc_funcallvar_2 ;
  sds __dyc_funcallvar_3 ;
  size_t __dyc_funcallvar_4 ;
  size_t __dyc_funcallvar_5 ;
  size_t __dyc_funcallvar_6 ;
  sds __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  size_t __dyc_funcallvar_9 ;
  sds __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  size_t __dyc_funcallvar_12 ;
  sds __dyc_funcallvar_13 ;

  {
  f = (char const   *)__dyc_read_ptr__char();
  i = __dyc_readpre_byte();
  s = __dyc_read_ptr__char();
  __dyc_funcallvar_2 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_read_ptr__char();
  __dyc_funcallvar_4 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__char();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_read_ptr__char();
  next = 0;
  l = 0;
  tmp___0 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  if (! *f) {
    goto __dyc_dummy_label;
  }
  tmp___0 = __dyc_funcallvar_2;
  if (tmp___0 == 0UL) {
    {
    s = __dyc_funcallvar_3;
    }
  }
  if ((int )*f == 37) {
    goto switch_15_37;
  } else {
    {
    goto switch_15_default;
    if (0) {
      switch_15_37:  
      next = (char )*(f + 1);
      f ++;
      if ((int )next == 115) {
        goto switch_16_115;
      } else {
        if ((int )next == 83) {
          goto switch_16_115;
        } else {
          if ((int )next == 105) {
            goto switch_16_105;
          } else {
            if ((int )next == 73) {
              goto switch_16_105;
            } else {
              if ((int )next == 117) {
                goto switch_16_117;
              } else {
                if ((int )next == 85) {
                  goto switch_16_117;
                } else {
                  {
                  goto switch_16_default;
                  if (0) {
                    switch_16_115:  
                    switch_16_83:  
                    {

                    }
                    if ((int )next == 115) {
                      {
                      l = __dyc_funcallvar_4;
                      }
                    } else {
                      {
                      l = __dyc_funcallvar_5;
                      }
                    }
                    {
                    tmp___3 = __dyc_funcallvar_6;
                    }
                    if (tmp___3 < l) {
                      {
                      s = __dyc_funcallvar_7;
                      }
                    }
                    {


                    i = (int )((size_t )i + l);
                    }
                    goto switch_16_break;
                    switch_16_105:  
                    switch_16_73:  
                    if ((int )next == 105) {
                      {

                      }
                    } else {
                      {

                      }
                    }
                    {
                    tmp___4 = __dyc_funcallvar_8;
                    l = (unsigned long )tmp___4;
                    tmp___5 = __dyc_funcallvar_9;
                    }
                    if (tmp___5 < l) {
                      {
                      s = __dyc_funcallvar_10;
                      }
                    }
                    {


                    i = (int )((size_t )i + l);
                    }
                    goto switch_16_break;
                    switch_16_117:  
                    switch_16_85:  
                    if ((int )next == 117) {
                      {

                      }
                    } else {
                      {

                      }
                    }
                    {
                    tmp___6 = __dyc_funcallvar_11;
                    l = (unsigned long )tmp___6;
                    tmp___7 = __dyc_funcallvar_12;
                    }
                    if (tmp___7 < l) {
                      {
                      s = __dyc_funcallvar_13;
                      }
                    }
                    {


                    i = (int )((size_t )i + l);
                    }
                    goto switch_16_break;
                    switch_16_default:  
                    {
                    tmp___8 = i;
                    i ++;
                    *(s + tmp___8) = next;

                    }
                    goto switch_16_break;
                  } else {
                    switch_16_break:  ;
                  }
                  }
                }
              }
            }
          }
        }
      }
      goto switch_15_break;
      switch_15_default:  
      {
      tmp___9 = i;
      i ++;
      *(s + tmp___9) = (char )*f;

      }
      goto switch_15_break;
    } else {
      switch_15_break:  ;
    }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(f);
  __dyc_printpre_byte(i);
  __dyc_print_ptr__char(s);
}
}
