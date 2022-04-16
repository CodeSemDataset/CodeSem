#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ int qualifier ;
  char const   *fmt ;

  {
  fmt = (char const   *)__dyc_read_ptr__char();
  qualifier = 0;
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
  __dyc_printpre_byte(qualifier);
  __dyc_print_ptr__char(fmt);
}
}
