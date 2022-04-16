#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ char *str ;
  int flags ;
  int field_width ;
  int precision ;
  int qualifier ;
  char *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  char const   *fmt ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;

  {
  str = __dyc_read_ptr__char();
  fmt = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  flags = 0;
  field_width = 0;
  precision = 0;
  qualifier = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  if ((int const   )*fmt != 37) {
    tmp = str;
    str ++;
    *tmp = (char )*fmt;
    goto __dyc_dummy_label;
  }
  flags = 0;
  repeat: 
  fmt ++;
  if ((int )*fmt == 45) {
    goto switch_8_45;
  } else {
    if ((int )*fmt == 43) {
      goto switch_8_43;
    } else {
      if ((int )*fmt == 32) {
        goto switch_8_32;
      } else {
        if ((int )*fmt == 35) {
          goto switch_8_35;
        } else {
          if ((int )*fmt == 48) {
            goto switch_8_48;
          } else {
            if (0) {
              switch_8_45:  
              flags |= 16;
              goto repeat;
              switch_8_43:  
              flags |= 4;
              goto repeat;
              switch_8_32:  
              flags |= 8;
              goto repeat;
              switch_8_35:  
              flags |= 32;
              goto repeat;
              switch_8_48:  
              flags |= 1;
              goto repeat;
            } else {
              switch_8_break:  ;
            }
          }
        }
      }
    }
  }
  field_width = -1;
  tmp___0 = __dyc_funcallvar_1;
  if (tmp___0) {
    {
    field_width = __dyc_funcallvar_2;
    }
  } else {
    if ((int const   )*fmt == 42) {
      {
      fmt ++;

      }
      if (field_width < 0) {
        field_width = - field_width;
        flags |= 16;
      }
    }
  }
  precision = -1;
  if ((int const   )*fmt == 46) {
    {
    fmt ++;
    tmp___1 = __dyc_funcallvar_3;
    }
    if (tmp___1) {
      {
      precision = __dyc_funcallvar_4;
      }
    } else {
      if ((int const   )*fmt == 42) {
        {
        fmt ++;

        }
      }
    }
    if (precision < 0) {
      precision = 0;
    }
  }
  qualifier = -1;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(str);
  __dyc_printpre_byte(flags);
  __dyc_printpre_byte(field_width);
  __dyc_printpre_byte(precision);
  __dyc_printpre_byte(qualifier);
  __dyc_print_ptr__char(fmt);
}
}
