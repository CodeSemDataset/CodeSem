#include "../../include/dycfoo.h"
#include "../../include/strcase.i.hd.c.h"
void __dyc_foo(void) 
{ char tmp ;
  char tmp___0 ;
  char tmp___1 ;
  char tmp___2 ;
  char const   *first ;
  char const   *second ;
  char __dyc_funcallvar_1 ;
  char __dyc_funcallvar_2 ;
  char __dyc_funcallvar_3 ;
  char __dyc_funcallvar_4 ;

  {
  first = (char const   *)__dyc_read_ptr__char();
  second = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_1 = (char )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (char )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (char )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (char )__dyc_readpre_byte();
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  while (1) {
    while_0_continue:  ;
    if (*first) {
      if (! *second) {
        goto while_0_break;
      }
    } else {
      goto while_0_break;
    }
    {
    tmp = __dyc_funcallvar_1;
    tmp___0 = __dyc_funcallvar_2;
    }
    if ((int )tmp != (int )tmp___0) {
      goto while_0_break;
    }
    first ++;
    second ++;
  }
  while_0_break:  ;
  tmp___1 = __dyc_funcallvar_3;
  tmp___2 = __dyc_funcallvar_4;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___1);
  __dyc_printpre_byte(tmp___2);
  __dyc_print_ptr__char(second);
}
}
