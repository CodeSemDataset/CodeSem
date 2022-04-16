#include "../../include/dycfoo.h"
#include "../../include/strcase.i.hd.c.h"
void __dyc_foo(void) 
{ char tmp ;
  char tmp___0 ;
  char const   *first ;
  char const   *second ;
  size_t max ;
  char __dyc_funcallvar_1 ;
  char __dyc_funcallvar_2 ;

  {
  first = (char const   *)__dyc_read_ptr__char();
  second = (char const   *)__dyc_read_ptr__char();
  max = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_1 = (char )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (char )__dyc_readpre_byte();
  tmp = 0;
  tmp___0 = 0;
  while (1) {
    while_1_continue:  ;
    if (*first) {
      if (*second) {
        if (! max) {
          goto __dyc_dummy_label;
        }
      } else {
        goto __dyc_dummy_label;
      }
    } else {
      goto __dyc_dummy_label;
    }
    {
    tmp = __dyc_funcallvar_1;
    tmp___0 = __dyc_funcallvar_2;
    }
    if ((int )tmp != (int )tmp___0) {
      goto __dyc_dummy_label;
    }
    max --;
    first ++;
    second ++;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(second);
  __dyc_printpre_byte(max);
}
}
