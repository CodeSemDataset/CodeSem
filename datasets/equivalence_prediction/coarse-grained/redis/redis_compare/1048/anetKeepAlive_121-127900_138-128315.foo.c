#include "../../include/dycfoo.h"
#include "../../include/anet.i.hd.c.h"
void __dyc_foo(void) 
{ int val ;
  int *tmp___5 ;
  char *tmp___6 ;
  int tmp___7 ;
  int *tmp___8 ;
  char *tmp___9 ;
  int tmp___10 ;
  int __dyc_funcallvar_7 ;
  int *__dyc_funcallvar_8 ;
  char *__dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int *__dyc_funcallvar_11 ;
  char *__dyc_funcallvar_12 ;

  {
  val = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_read_ptr__int();
  __dyc_funcallvar_9 = __dyc_read_ptr__char();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_read_ptr__int();
  __dyc_funcallvar_12 = __dyc_read_ptr__char();
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  if (val == 0) {
    val = 1;
  }
  tmp___7 = __dyc_funcallvar_7;
  if (tmp___7 < 0) {
    {
    tmp___5 = __dyc_funcallvar_8;
    tmp___6 = __dyc_funcallvar_9;

    }
    goto __dyc_dummy_label;
  }
  val = 3;
  tmp___10 = __dyc_funcallvar_10;
  if (tmp___10 < 0) {
    {
    tmp___8 = __dyc_funcallvar_11;
    tmp___9 = __dyc_funcallvar_12;

    }
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(val);
  __dyc_print_ptr__int(tmp___5);
  __dyc_print_ptr__char(tmp___6);
  __dyc_print_ptr__int(tmp___8);
  __dyc_print_ptr__char(tmp___9);
}
}
