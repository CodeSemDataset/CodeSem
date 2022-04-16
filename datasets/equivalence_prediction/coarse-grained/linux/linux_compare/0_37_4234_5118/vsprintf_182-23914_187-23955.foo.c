#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ int precision ;
  int qualifier ;
  char const   *fmt ;

  {
  fmt = (char const   *)__dyc_read_ptr__char();
  precision = 0;
  qualifier = 0;
  precision = 0;
  qualifier = (int )*fmt;
  fmt ++;
  if ((int const   )*fmt == 76) {
    qualifier = (int )*fmt;
    fmt ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(precision);
  __dyc_printpre_byte(qualifier);
  __dyc_print_ptr__char(fmt);
}
}
