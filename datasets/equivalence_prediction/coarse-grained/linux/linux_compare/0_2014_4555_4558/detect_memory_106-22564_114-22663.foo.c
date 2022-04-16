#include "../../include/dycfoo.h"
#include "../../include/memory.i.hd.c.h"
void __dyc_foo(void) 
{ int err ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;

  {
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  err = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  err = -1;
  tmp = __dyc_funcallvar_1;
  if (tmp > 0) {
    err = 0;
  }
  tmp___0 = __dyc_funcallvar_2;
  if (! tmp___0) {
    err = 0;
  }
  tmp___1 = __dyc_funcallvar_3;
  if (! tmp___1) {
    err = 0;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(err);
}
}
