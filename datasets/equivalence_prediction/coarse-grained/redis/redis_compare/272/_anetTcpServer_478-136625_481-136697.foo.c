#include "../../include/dycfoo.h"
#include "../../include/anet.i.hd.c.h"
void __dyc_foo(void) 
{ int s ;
  struct addrinfo *p ;
  char const   *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int af ;
  char const   *__dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;

  {
  p = __dyc_read_ptr__comp_79addrinfo();
  af = __dyc_readpre_byte();
  __dyc_funcallvar_2 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  s = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp = __dyc_funcallvar_2;

  goto __dyc_dummy_label;
  while_4_continue:  ;
  if (! ((unsigned long )p != (unsigned long )((void *)0))) {
    goto __dyc_dummy_label;
  }
  s = __dyc_funcallvar_3;
  if (s == -1) {
    goto __Cont;
  }
  if (af == 10) {
    {
    tmp___0 = __dyc_funcallvar_4;
    }
    if (tmp___0 == -1) {
      goto __dyc_dummy_label;
    }
  }
  tmp___1 = __dyc_funcallvar_5;
  if (tmp___1 == -1) {
    goto __dyc_dummy_label;
  }
  tmp___2 = __dyc_funcallvar_6;
  if (tmp___2 == -1) {
    s = -1;
  }
  goto __dyc_dummy_label;
  __Cont:  
  p = p->ai_next;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(s);
  __dyc_print_ptr__char(tmp);
}
}
