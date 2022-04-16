#include "../../include/dycfoo.h"
#include "../../include/net.i.hd.c.h"
void __dyc_foo(void) 
{ int val ;
  int *tmp___2 ;
  char *tmp___3 ;
  int tmp___4 ;
  int *tmp___5 ;
  char *tmp___6 ;
  int tmp___7 ;
  int *tmp___8 ;
  char *tmp___9 ;
  int tmp___10 ;
  int interval ;
  int __dyc_funcallvar_4 ;
  int *__dyc_funcallvar_5 ;
  char *__dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int *__dyc_funcallvar_8 ;
  char *__dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int *__dyc_funcallvar_11 ;
  char *__dyc_funcallvar_12 ;

  {
  interval = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__int();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_read_ptr__int();
  __dyc_funcallvar_9 = __dyc_read_ptr__char();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_read_ptr__int();
  __dyc_funcallvar_12 = __dyc_read_ptr__char();
  val = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  val = interval;
  val = interval;
  tmp___4 = __dyc_funcallvar_4;
  if (tmp___4 < 0) {
    {
    tmp___2 = __dyc_funcallvar_5;
    tmp___3 = __dyc_funcallvar_6;

    }
    goto __dyc_dummy_label;
  }
  val = interval / 3;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(val);
  __dyc_print_ptr__int(tmp___2);
  __dyc_print_ptr__char(tmp___3);
  __dyc_print_ptr__int(tmp___5);
  __dyc_print_ptr__char(tmp___6);
  __dyc_print_ptr__int(tmp___8);
  __dyc_print_ptr__char(tmp___9);
}
}
