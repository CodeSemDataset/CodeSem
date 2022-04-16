#include "../../include/dycfoo.h"
#include "../../include/a20.i.hd.c.h"
void __dyc_foo(void) 
{ int loops ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;

  {
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  loops = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  loops = 255;
  while (1) {
    while_2_continue:  ;
    tmp___4 = loops;
    loops --;
    if (! tmp___4) {
      goto __dyc_dummy_label;
    }
    {
    tmp = __dyc_funcallvar_1;
    }
    if (tmp) {
      goto __dyc_dummy_label;
    }
    {

    tmp___0 = __dyc_funcallvar_2;
    }
    if (tmp___0) {
      goto __dyc_dummy_label;
    }
    {

    tmp___1 = __dyc_funcallvar_3;
    }
    if (tmp___1) {
      goto __dyc_dummy_label;
    }
    {

    tmp___2 = __dyc_funcallvar_4;
    }
    if (tmp___2) {
      goto __dyc_dummy_label;
    }
    {

    tmp___3 = __dyc_funcallvar_5;
    }
    if (tmp___3) {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(loops);
}
}
