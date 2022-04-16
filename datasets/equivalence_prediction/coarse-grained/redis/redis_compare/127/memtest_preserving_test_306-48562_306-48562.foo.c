#include "../../include/dycfoo.h"
#include "../../include/memtest.i.hd.c.h"
void __dyc_foo(void) 
{ int errors ;
  int pass ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  size_t bytes ;
  int passes ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;

  {
  errors = __dyc_readpre_byte();
  pass = __dyc_readpre_byte();
  bytes = (size_t )__dyc_readpre_byte();
  passes = __dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  while (1) {
    while_13_continue:  ;
    if (! (pass != passes)) {
      goto __dyc_dummy_label;
    }
    {
    pass ++;
    tmp___0 = __dyc_funcallvar_1;
    errors += tmp___0;

    }
    if (bytes >= 8192UL) {
      {


      }
    }
    {
    tmp___1 = __dyc_funcallvar_2;
    errors += tmp___1;

    }
    if (bytes >= 8192UL) {
      {


      }
    }
    {
    tmp___2 = __dyc_funcallvar_3;
    errors += tmp___2;

    }
    if (bytes >= 8192UL) {
      {


      }
    }
    {
    tmp___3 = __dyc_funcallvar_4;
    errors += tmp___3;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(errors);
}
}
