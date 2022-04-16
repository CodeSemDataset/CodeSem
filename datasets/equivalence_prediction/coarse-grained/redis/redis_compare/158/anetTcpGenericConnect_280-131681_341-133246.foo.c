#include "../../include/dycfoo.h"
#include "../../include/anet.i.hd.c.h"
void __dyc_foo(void) 
{ int s ;
  int rv ;
  struct addrinfo *servinfo ;
  struct addrinfo *bservinfo ;
  struct addrinfo *p ;
  struct addrinfo *b ;
  char const   *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int bound ;
  char const   *tmp___2 ;
  int tmp___3 ;
  int *tmp___4 ;
  char *tmp___5 ;
  int *tmp___6 ;
  int tmp___7 ;
  int *tmp___8 ;
  char *tmp___9 ;
  int tmp___10 ;
  char *source_addr ;
  int flags ;
  char const   *__dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  char const   *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int *__dyc_funcallvar_9 ;
  char *__dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int *__dyc_funcallvar_12 ;
  int *__dyc_funcallvar_13 ;
  char *__dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;

  {
  s = __dyc_readpre_byte();
  rv = __dyc_readpre_byte();
  servinfo = __dyc_read_ptr__comp_79addrinfo();
  bservinfo = __dyc_read_ptr__comp_79addrinfo();
  source_addr = __dyc_read_ptr__char();
  flags = __dyc_readpre_byte();
  __dyc_funcallvar_2 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_read_ptr__int();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_read_ptr__int();
  __dyc_funcallvar_13 = __dyc_read_ptr__int();
  __dyc_funcallvar_14 = __dyc_read_ptr__char();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  p = 0;
  b = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  bound = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  if (rv != 0) {
    {
    tmp = __dyc_funcallvar_2;

    }
    goto __dyc_dummy_label;
  }
  p = servinfo;
  while (1) {
    while_0_continue:  ;
    if (! ((unsigned long )p != (unsigned long )((void *)0))) {
      goto while_0_break;
    }
    {
    s = __dyc_funcallvar_3;
    }
    if (s == -1) {
      goto __Cont;
    }
    {
    tmp___0 = __dyc_funcallvar_4;
    }
    if (tmp___0 == -1) {
      goto error;
    }
    if (flags & 1) {
      {
      tmp___1 = __dyc_funcallvar_5;
      }
      if (tmp___1 != 0) {
        goto error;
      }
    }
    if (source_addr) {
      {
      bound = 0;
      rv = __dyc_funcallvar_6;
      }
      if (rv != 0) {
        {
        tmp___2 = __dyc_funcallvar_7;

        }
        goto error;
      }
      b = bservinfo;
      {
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
      }
      {

      }
      if (! bound) {
        {
        tmp___4 = __dyc_funcallvar_9;
        tmp___5 = __dyc_funcallvar_10;

        }
        goto error;
      }
    }
    {
    tmp___7 = __dyc_funcallvar_11;
    }
    if (tmp___7 == -1) {
      {
      tmp___6 = __dyc_funcallvar_12;
      }
      if (*tmp___6 == 115) {
        if (flags & 1) {
          goto __dyc_dummy_label;
        }
      }
      {

      s = -1;
      }
      goto __Cont;
    }
    goto __dyc_dummy_label;
    __Cont:  
    p = p->ai_next;
  }
  while_0_break:  ;
  if ((unsigned long )p == (unsigned long )((void *)0)) {
    {
    tmp___8 = __dyc_funcallvar_13;
    tmp___9 = __dyc_funcallvar_14;

    }
  }
  error: 
  if (s != -1) {
    {

    s = -1;
    }
  }

  if (s == -1) {
    if (source_addr) {
      if (flags & 2) {
        {
        tmp___10 = __dyc_funcallvar_15;
        }
        goto __dyc_dummy_label;
      } else {
        goto __dyc_dummy_label;
      }
    } else {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(tmp);
  __dyc_printpre_byte(bound);
  __dyc_print_ptr__char(tmp___2);
  __dyc_print_ptr__int(tmp___4);
  __dyc_print_ptr__char(tmp___5);
  __dyc_print_ptr__int(tmp___8);
  __dyc_print_ptr__char(tmp___9);
  __dyc_printpre_byte(tmp___10);
}
}
