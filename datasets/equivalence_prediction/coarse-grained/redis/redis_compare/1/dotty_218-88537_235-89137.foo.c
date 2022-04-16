#include "../../include/dycfoo.h"
#include "../../include/lua.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *progname ;
  int status ;
  char const   *oldprogname ;
  char const   *tmp ;
  char const   *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  char const   *__dyc_funcallvar_6 ;
  char const   *__dyc_funcallvar_7 ;

  {
  progname = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_7 = (char const   *)__dyc_read_ptr__char();
  status = 0;
  oldprogname = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  oldprogname = progname;
  progname = (char const   *)((void *)0);
  while (1) {
    while_4_continue:  ;
    {
    status = __dyc_funcallvar_1;
    }
    if (! (status != -1)) {
      goto while_4_break;
    }
    if (status == 0) {
      {
      status = __dyc_funcallvar_2;
      }
    }
    {

    }
    if (status == 0) {
      {
      tmp___3 = __dyc_funcallvar_3;
      }
      if (tmp___3 > 0) {
        {


        tmp___1 = __dyc_funcallvar_4;
        tmp___2 = __dyc_funcallvar_5;
        }
        if (tmp___2 != 0) {
          {
          tmp = __dyc_funcallvar_6;
          tmp___0 = __dyc_funcallvar_7;

          }
        }
      }
    }
  }
  while_4_break:  ;



  progname = oldprogname;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(progname);
  __dyc_print_ptr__char(tmp);
  __dyc_print_ptr__char(tmp___0);
  __dyc_printpre_byte(tmp___1);
}
}
