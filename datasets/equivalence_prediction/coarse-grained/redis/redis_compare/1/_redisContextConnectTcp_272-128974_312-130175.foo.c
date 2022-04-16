#include "../../include/dycfoo.h"
#include "../../include/net.i.hd.c.h"
void __dyc_foo(void) 
{ struct addrinfo *servinfo ;
  int blocking ;
  int reuseaddr ;
  int reuses ;
  long timeout_msec ;
  char *tmp___8 ;
  void *tmp___9 ;
  int tmp___10 ;
  char *tmp___20 ;
  redisContext *c ;
  char const   *addr ;
  int port ;
  struct timeval  const  *timeout ;
  char const   *source_addr ;
  char *__dyc_funcallvar_1 ;
  void *__dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  char *__dyc_funcallvar_4 ;

  {
  c = __dyc_read_ptr__typdef_redisContext();
  addr = (char const   *)__dyc_read_ptr__char();
  port = __dyc_readpre_byte();
  timeout = (struct timeval  const  *)__dyc_read_ptr__comp_4timeval();
  source_addr = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_1 = __dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_read_ptr__void();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  servinfo = 0;
  blocking = 0;
  reuseaddr = 0;
  reuses = 0;
  timeout_msec = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___20 = 0;
  blocking = c->flags & 1;
  reuseaddr = c->flags & 128;
  reuses = 0;
  timeout_msec = -1L;
  servinfo = (struct addrinfo *)((void *)0);
  c->connection_type = 0;
  c->tcp.port = port;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_53addrinfo(servinfo);
  __dyc_printpre_byte(blocking);
  __dyc_printpre_byte(reuseaddr);
  __dyc_printpre_byte(reuses);
  __dyc_printpre_byte(timeout_msec);
}
}
