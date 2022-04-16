#include "../../include/dycfoo.h"
#include "../../include/net.i.hd.c.h"
void __dyc_foo(void) 
{ int blocking ;
  struct sockaddr_un sa ;
  char *tmp___10 ;
  void *tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int *tmp___14 ;
  int tmp___15 ;
  redisContext *c ;
  char const   *path ;
  struct timeval  const  *timeout ;
  char *__dyc_funcallvar_3 ;
  void *__dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;

  {
  blocking = __dyc_readpre_byte();
  c = __dyc_read_ptr__typdef_redisContext();
  path = (char const   *)__dyc_read_ptr__char();
  timeout = (struct timeval  const  *)__dyc_read_ptr__comp_4timeval();
  __dyc_funcallvar_3 = __dyc_read_ptr__char();
  __dyc_funcallvar_4 = __dyc_read_ptr__void();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__int();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  memset(& sa, 0, sizeof(struct sockaddr_un ));
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
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
  sa.sun_family = (unsigned short)1;

  tmp___15 = __dyc_funcallvar_6;
  if (tmp___15 == -1) {
    {
    tmp___14 = __dyc_funcallvar_7;
    }
    if (*tmp___14 == 115) {
      if (! (! blocking)) {
        goto _L;
      }
    } else {
      _L:  
      {
      tmp___13 = __dyc_funcallvar_8;
      }
      if (tmp___13 != 0) {
        goto __dyc_dummy_label;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_comp_27sockaddr_un(sa);
}
}
