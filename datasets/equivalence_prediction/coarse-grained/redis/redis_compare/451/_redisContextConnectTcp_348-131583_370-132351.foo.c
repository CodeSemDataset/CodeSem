#include "../../include/dycfoo.h"
#include "../../include/net.i.hd.c.h"
void __dyc_foo(void) 
{ int rv ;
  int n ;
  struct addrinfo *bservinfo ;
  struct addrinfo *b ;
  int reuseaddr ;
  int bound ;
  char const   *tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int *tmp___26 ;
  char *tmp___27 ;
  char const   *__dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int *__dyc_funcallvar_14 ;
  char *__dyc_funcallvar_15 ;

  {
  rv = __dyc_readpre_byte();
  bservinfo = __dyc_read_ptr__comp_53addrinfo();
  reuseaddr = __dyc_readpre_byte();
  bound = __dyc_readpre_byte();
  __dyc_funcallvar_11 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_read_ptr__int();
  __dyc_funcallvar_15 = __dyc_read_ptr__char();
  n = 0;
  b = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  if (rv != 0) {
    {
    tmp___23 = __dyc_funcallvar_11;


    }
    goto __dyc_dummy_label;
  }
  if (reuseaddr) {
    {
    n = 1;
    tmp___24 = __dyc_funcallvar_12;
    }
    if (tmp___24 < 0) {
      goto __dyc_dummy_label;
    }
  }
  b = bservinfo;
  while (1) {
    while_2_continue:  ;
    if (! ((unsigned long )b != (unsigned long )((void *)0))) {
      goto while_2_break;
    }
    {
    tmp___25 = __dyc_funcallvar_13;
    }
    if (tmp___25 != -1) {
      bound = 1;
      goto while_2_break;
    }
    b = b->ai_next;
  }
  while_2_break:  ;

  if (! bound) {
    {
    tmp___26 = __dyc_funcallvar_14;
    tmp___27 = __dyc_funcallvar_15;


    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(n);
  __dyc_print_ptr__char(tmp___23);
  __dyc_print_ptr__int(tmp___26);
  __dyc_print_ptr__char(tmp___27);
}
}
