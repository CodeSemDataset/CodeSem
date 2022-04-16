#include "../../include/dycfoo.h"
#include "../../include/net.i.hd.c.h"
void __dyc_foo(void) 
{ int rv ;
  struct addrinfo hints ;
  int tmp___10 ;
  char *tmp___20 ;
  char const   *tmp___21 ;
  redisContext *c ;
  char const   *source_addr ;
  char *__dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  char const   *__dyc_funcallvar_7 ;

  {
  tmp___10 = __dyc_readpre_byte();
  c = __dyc_read_ptr__typdef_redisContext();
  source_addr = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = (char const   *)__dyc_read_ptr__char();
  rv = 0;
  memset(& hints, 0, sizeof(struct addrinfo ));
  tmp___20 = 0;
  tmp___21 = 0;
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
