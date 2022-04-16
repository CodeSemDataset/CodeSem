#include "../../include/dycfoo.h"
#include "../../include/net.i.hd.c.h"
void __dyc_foo(void) 
{ int rv ;
  struct addrinfo hints ;
  char *tmp___8 ;
  void *tmp___9 ;
  int tmp___10 ;
  char *tmp___20 ;
  char const   *tmp___21 ;
  redisContext *c ;
  char const   *addr ;
  struct timeval  const  *timeout ;
  char const   *source_addr ;
  char *__dyc_funcallvar_1 ;
  void *__dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  char *__dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  char const   *__dyc_funcallvar_7 ;

  {
  c = __dyc_read_ptr__typdef_redisContext();
  addr = (char const   *)__dyc_read_ptr__char();
  timeout = (struct timeval  const  *)__dyc_read_ptr__comp_4timeval();
  source_addr = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_1 = __dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_read_ptr__void();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = (char const   *)__dyc_read_ptr__char();
  rv = 0;
  memset(& hints, 0, sizeof(struct addrinfo ));
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  if ((unsigned long )c->tcp.host != (unsigned long )addr) {
    if (c->tcp.host) {
      {

      }
    }
    {
    tmp___8 = __dyc_funcallvar_1;
    c->tcp.host = tmp___8;
    }
  }
  if (timeout) {
    if ((unsigned long )c->timeout != (unsigned long )timeout) {
      if ((unsigned long )c->timeout == (unsigned long )((void *)0)) {
        {
        tmp___9 = __dyc_funcallvar_2;
        c->timeout = (struct timeval *)tmp___9;
        }
      }
      {

      }
    }
  } else {
    if (c->timeout) {
      {

      }
    }
    c->timeout = (struct timeval *)((void *)0);
  }
  tmp___10 = __dyc_funcallvar_3;
  if (tmp___10 != 0) {
    {

    }
    goto __dyc_dummy_label;
  }
  if ((unsigned long )source_addr == (unsigned long )((void *)0)) {
    {

    c->tcp.source_addr = (char *)((void *)0);
    }
  } else {
    if ((unsigned long )c->tcp.source_addr != (unsigned long )source_addr) {
      {

      tmp___20 = __dyc_funcallvar_4;
      c->tcp.source_addr = tmp___20;
      }
    }
  }


  hints.ai_family = 2;
  hints.ai_socktype = 1;
  rv = __dyc_funcallvar_5;
  if (rv != 0) {
    {
    hints.ai_family = 10;
    rv = __dyc_funcallvar_6;
    }
    if (rv != 0) {
      {
      tmp___21 = __dyc_funcallvar_7;

      }
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_comp_53addrinfo(hints);
  __dyc_print_ptr__char(tmp___21);
}
}
