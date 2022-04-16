#include "../../include/dycfoo.h"
#include "../../include/net.i.hd.c.h"
void __dyc_foo(void) 
{ int val ;
  int fd ;
  int *tmp ;
  char *tmp___0 ;
  int tmp___1 ;
  int *tmp___2 ;
  char *tmp___3 ;
  int tmp___4 ;
  redisContext *c ;
  int interval ;
  int __dyc_funcallvar_1 ;
  int *__dyc_funcallvar_2 ;
  char *__dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int *__dyc_funcallvar_5 ;
  char *__dyc_funcallvar_6 ;

  {
  c = __dyc_read_ptr__typdef_redisContext();
  interval = __dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_read_ptr__int();
  __dyc_funcallvar_3 = __dyc_read_ptr__char();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__int();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  val = 0;
  fd = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  val = 1;
  fd = c->fd;
  tmp___1 = __dyc_funcallvar_1;
  if (tmp___1 == -1) {
    {
    tmp = __dyc_funcallvar_2;
    tmp___0 = __dyc_funcallvar_3;

    }
    goto __dyc_dummy_label;
  }
  val = interval;
  val = interval;
  tmp___4 = __dyc_funcallvar_4;
  if (tmp___4 < 0) {
    {
    tmp___2 = __dyc_funcallvar_5;
    tmp___3 = __dyc_funcallvar_6;

    }
    goto __dyc_dummy_label;
  }
  val = interval / 3;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(val);
  __dyc_printpre_byte(fd);
  __dyc_print_ptr__int(tmp);
  __dyc_print_ptr__char(tmp___0);
  __dyc_print_ptr__int(tmp___2);
  __dyc_print_ptr__char(tmp___3);
}
}
