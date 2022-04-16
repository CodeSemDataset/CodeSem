#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ char *str ;
  int *ip___0 ;
  char *tmp___18 ;
  char *buf ;
  char const   *fmt ;

  {
  str = __dyc_read_ptr__char();
  ip___0 = __dyc_read_ptr__int();
  buf = __dyc_read_ptr__char();
  fmt = (char const   *)__dyc_read_ptr__char();
  tmp___18 = 0;
  *ip___0 = str - buf;
  tmp___18 = str;
  str ++;
  *tmp___18 = (char )*fmt;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(str);
}
}
