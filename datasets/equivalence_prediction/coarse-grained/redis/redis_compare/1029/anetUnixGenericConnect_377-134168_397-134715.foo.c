#include "../../include/dycfoo.h"
#include "../../include/anet.i.hd.c.h"
void __dyc_foo(void) 
{ int s ;
  struct sockaddr_un sa ;
  int tmp ;
  int *tmp___0 ;
  int *tmp___1 ;
  char *tmp___2 ;
  int tmp___3 ;
  int flags ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int *__dyc_funcallvar_4 ;
  int *__dyc_funcallvar_5 ;
  char *__dyc_funcallvar_6 ;

  {
  s = __dyc_readpre_byte();
  flags = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__int();
  __dyc_funcallvar_5 = __dyc_read_ptr__int();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  memset(& sa, 0, sizeof(struct sockaddr_un ));
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  if (s == -1) {
    goto __dyc_dummy_label;
  }
  sa.sun_family = (unsigned short)1;

  if (flags & 1) {
    {
    tmp = __dyc_funcallvar_2;
    }
    if (tmp != 0) {
      {

      }
      goto __dyc_dummy_label;
    }
  }
  tmp___3 = __dyc_funcallvar_3;
  if (tmp___3 == -1) {
    {
    tmp___0 = __dyc_funcallvar_4;
    }
    if (*tmp___0 == 115) {
      if (flags & 1) {
        goto __dyc_dummy_label;
      }
    }
    {
    tmp___1 = __dyc_funcallvar_5;
    tmp___2 = __dyc_funcallvar_6;


    }
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_comp_39sockaddr_un(sa);
  __dyc_print_ptr__int(tmp___1);
  __dyc_print_ptr__char(tmp___2);
}
}
