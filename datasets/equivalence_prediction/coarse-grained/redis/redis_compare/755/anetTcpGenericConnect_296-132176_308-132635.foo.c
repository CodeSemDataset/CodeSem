#include "../../include/dycfoo.h"
#include "../../include/anet.i.hd.c.h"
void __dyc_foo(void) 
{ int rv ;
  struct addrinfo *bservinfo ;
  struct addrinfo *b ;
  int bound ;
  char const   *tmp___2 ;
  int tmp___3 ;
  int *tmp___4 ;
  char *tmp___5 ;
  char const   *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int *__dyc_funcallvar_9 ;
  char *__dyc_funcallvar_10 ;

  {
  rv = __dyc_readpre_byte();
  bservinfo = __dyc_read_ptr__comp_79addrinfo();
  bound = __dyc_readpre_byte();
  __dyc_funcallvar_7 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_read_ptr__int();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  b = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  if (rv != 0) {
    {
    tmp___2 = __dyc_funcallvar_7;

    }
    goto __dyc_dummy_label;
  }
  b = bservinfo;
  while (1) {
    while_1_continue:  ;
    if (! ((unsigned long )b != (unsigned long )((void *)0))) {
      goto while_1_break;
    }
    {
    tmp___3 = __dyc_funcallvar_8;
    }
    if (tmp___3 != -1) {
      bound = 1;
      goto while_1_break;
    }
    b = b->ai_next;
  }
  while_1_break:  ;

  if (! bound) {
    {
    tmp___4 = __dyc_funcallvar_9;
    tmp___5 = __dyc_funcallvar_10;

    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(tmp___2);
  __dyc_print_ptr__int(tmp___4);
  __dyc_print_ptr__char(tmp___5);
}
}
