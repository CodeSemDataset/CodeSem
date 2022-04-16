#include "../../include/dycfoo.h"
#include "../../include/anet.i.hd.c.h"
void __dyc_foo(void) 
{ int s ;
  int rv ;
  struct addrinfo hints ;
  struct addrinfo *servinfo ;
  struct addrinfo *p ;
  char const   *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int *tmp___3 ;
  int af ;
  int __dyc_funcallvar_1 ;
  char const   *__dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int *__dyc_funcallvar_7 ;

  {
  s = __dyc_readpre_byte();
  servinfo = __dyc_read_ptr__comp_79addrinfo();
  af = __dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__int();
  rv = 0;
  memset(& hints, 0, sizeof(struct addrinfo ));
  p = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  hints.ai_flags = 1;
  rv = __dyc_funcallvar_1;
  if (rv != 0) {
    {
    tmp = __dyc_funcallvar_2;

    }
    goto __dyc_dummy_label;
  }
  p = servinfo;
  while (1) {
    while_4_continue:  ;
    if (! ((unsigned long )p != (unsigned long )((void *)0))) {
      goto while_4_break;
    }
    {
    s = __dyc_funcallvar_3;
    }
    if (s == -1) {
      goto __Cont;
    }
    if (af == 10) {
      {
      tmp___0 = __dyc_funcallvar_4;
      }
      if (tmp___0 == -1) {
        goto error;
      }
    }
    {
    tmp___1 = __dyc_funcallvar_5;
    }
    if (tmp___1 == -1) {
      goto error;
    }
    {
    tmp___2 = __dyc_funcallvar_6;
    }
    if (tmp___2 == -1) {
      s = -1;
    }
    goto __dyc_dummy_label;
    __Cont:  
    p = p->ai_next;
  }
  while_4_break:  ;
  if ((unsigned long )p == (unsigned long )((void *)0)) {
    {
    tmp___3 = __dyc_funcallvar_7;

    }
    goto error;
  }
  error: 
  if (s != -1) {
    {

    }
  }
  s = -1;

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(s);
  __dyc_print_comp_79addrinfo(hints);
  __dyc_print_ptr__char(tmp);
  __dyc_print_ptr__int(tmp___3);
}
}
