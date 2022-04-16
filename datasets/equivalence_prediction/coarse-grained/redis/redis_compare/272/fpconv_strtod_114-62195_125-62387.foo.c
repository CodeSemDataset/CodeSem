#include "../../include/dycfoo.h"
#include "../../include/fpconv.i.hd.c.h"
void __dyc_foo(void) 
{ char locale_decimal_point ;
  char localbuf[32] ;
  char *buf ;
  int buflen ;
  double tmp ;
  void *tmp___0 ;
  char const   *nptr ;
  char **endptr ;
  double __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  void *__dyc_funcallvar_3 ;

  {
  locale_decimal_point = (char )__dyc_readpre_byte();
  nptr = (char const   *)__dyc_read_ptr__char();
  endptr = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_1 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_read_ptr__void();
  buf = 0;
  buflen = 0;
  tmp = 0;
  tmp___0 = 0;
  if ((int )locale_decimal_point == 46) {
    {
    tmp = __dyc_funcallvar_1;
    }
    goto __dyc_dummy_label;
  }
  buflen = __dyc_funcallvar_2;
  if (! buflen) {
    *endptr = (char *)nptr;
    goto __dyc_dummy_label;
  }
  if (buflen >= 32) {
    {
    tmp___0 = __dyc_funcallvar_3;
    buf = (char *)tmp___0;
    }
    if (! buf) {
      {


      }
    }
  } else {
    buf = localbuf;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(buf);
  __dyc_printpre_byte(tmp);
}
}
