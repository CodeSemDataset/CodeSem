#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ int precision ;
  int qualifier ;
  int tmp___1 ;
  char const   *fmt ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;

  {
  precision = __dyc_readpre_byte();
  fmt = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  qualifier = 0;
  tmp___1 = 0;
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
  if ((int const   )*fmt == 104) {
    qualifier = (int )*fmt;
    fmt ++;
  } else {
    if ((int const   )*fmt == 108) {
      qualifier = (int )*fmt;
      fmt ++;
    } else {
      if ((int const   )*fmt == 76) {
        qualifier = (int )*fmt;
        fmt ++;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(precision);
  __dyc_printpre_byte(qualifier);
  __dyc_print_ptr__char(fmt);
}
}
