#include "../../include/dycfoo.h"
#include "../../include/net.i.hd.c.h"
void __dyc_foo(void) 
{ long timeout_msec ;
  int tmp ;
  int tmp___0 ;
  char *tmp___10 ;
  void *tmp___11 ;
  int tmp___12 ;
  redisContext *c ;
  char const   *path ;
  struct timeval  const  *timeout ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  char *__dyc_funcallvar_3 ;
  void *__dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;

  {
  c = __dyc_read_ptr__typdef_redisContext();
  path = (char const   *)__dyc_read_ptr__char();
  timeout = (struct timeval  const  *)__dyc_read_ptr__comp_4timeval();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_read_ptr__char();
  __dyc_funcallvar_4 = __dyc_read_ptr__void();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  timeout_msec = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  timeout_msec = -1L;
  tmp = __dyc_funcallvar_1;
  if (tmp < 0) {
    goto __dyc_dummy_label;
  }
  tmp___0 = __dyc_funcallvar_2;
  if (tmp___0 != 0) {
    goto __dyc_dummy_label;
  }
  c->connection_type = 1;
  if ((unsigned long )c->unix_sock.path != (unsigned long )path) {
    {
    tmp___10 = __dyc_funcallvar_3;
    c->unix_sock.path = tmp___10;
    }
  }
  if (timeout) {
    if ((unsigned long )c->timeout != (unsigned long )timeout) {
      if ((unsigned long )c->timeout == (unsigned long )((void *)0)) {
        {
        tmp___11 = __dyc_funcallvar_4;
        c->timeout = (struct timeval *)tmp___11;
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
  tmp___12 = __dyc_funcallvar_5;
  if (tmp___12 != 0) {
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(timeout_msec);
}
}