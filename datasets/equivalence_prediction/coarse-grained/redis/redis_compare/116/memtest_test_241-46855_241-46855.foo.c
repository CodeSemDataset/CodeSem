#include "../../include/dycfoo.h"
#include "../../include/memtest.i.hd.c.h"
void __dyc_foo(void) 
{ int pass ;
  int errors ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int passes ;
  int interactive ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;

  {
  pass = __dyc_readpre_byte();
  errors = __dyc_readpre_byte();
  passes = __dyc_readpre_byte();
  interactive = __dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  while (1) {
    while_11_continue:  ;
    if (! (pass != passes)) {
      goto __dyc_dummy_label;
    }
    pass ++;
    if (interactive) {
      {

      }
    }
    {
    tmp = __dyc_funcallvar_1;
    errors += tmp;
    }
    if (interactive) {
      {

      }
    }
    if (interactive) {
      {

      }
    }
    {

    }
    if (interactive) {
      {

      }
    }
    {
    tmp___0 = __dyc_funcallvar_2;
    errors += tmp___0;
    }
    if (interactive) {
      {

      }
    }
    {

    }
    if (interactive) {
      {

      }
    }
    {
    tmp___1 = __dyc_funcallvar_3;
    errors += tmp___1;
    }
    if (interactive) {
      {

      }
    }
    {

    }
    if (interactive) {
      {

      }
    }
    {
    tmp___2 = __dyc_funcallvar_4;
    errors += tmp___2;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(errors);
}
}
