#include "../../include/dycfoo.h"
#include "../../include/anet.i.hd.c.h"
void __dyc_foo(void) 
{ int flags ;
  int *tmp ;
  char *tmp___0 ;
  int *tmp___1 ;
  char *tmp___2 ;
  int tmp___3 ;
  int non_block ;
  int *__dyc_funcallvar_2 ;
  char *__dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int *__dyc_funcallvar_5 ;
  char *__dyc_funcallvar_6 ;

  {
  flags = __dyc_readpre_byte();
  non_block = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_read_ptr__int();
  __dyc_funcallvar_3 = __dyc_read_ptr__char();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__int();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  if (flags == -1) {
    {
    tmp = __dyc_funcallvar_2;
    tmp___0 = __dyc_funcallvar_3;

    }
    goto __dyc_dummy_label;
  }
  if (non_block) {
    flags |= 2048;
  } else {
    flags &= -2049;
  }
  tmp___3 = __dyc_funcallvar_4;
  if (tmp___3 == -1) {
    {
    tmp___1 = __dyc_funcallvar_5;
    tmp___2 = __dyc_funcallvar_6;

    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(flags);
  __dyc_print_ptr__int(tmp);
  __dyc_print_ptr__char(tmp___0);
  __dyc_print_ptr__int(tmp___1);
  __dyc_print_ptr__char(tmp___2);
}
}
