#include "../../include/dycfoo.h"
#include "../../include/liolib.i.hd.c.h"
void __dyc_foo(void) 
{ int status ;
  lua_Number tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  size_t l ;
  char const   *s ;
  char const   *tmp___3 ;
  size_t tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int arg ;
  lua_Number __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  char const   *__dyc_funcallvar_5 ;
  size_t __dyc_funcallvar_6 ;

  {
  status = __dyc_readpre_byte();
  l = (size_t )__dyc_readpre_byte();
  tmp___6 = __dyc_readpre_byte();
  arg = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_6 = (size_t )__dyc_readpre_byte();
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  s = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  if (tmp___6 == 3) {
    if (status) {
      {
      tmp___0 = __dyc_funcallvar_3;
      tmp___1 = __dyc_funcallvar_4;
      }
      if (tmp___1 > 0) {
        tmp___2 = 1;
      } else {
        tmp___2 = 0;
      }
    } else {
      tmp___2 = 0;
    }
    status = tmp___2;
  } else {
    {
    tmp___3 = __dyc_funcallvar_5;
    s = tmp___3;
    }
    if (status) {
      {
      tmp___4 = __dyc_funcallvar_6;
      }
      if (tmp___4 == l) {
        tmp___5 = 1;
      } else {
        tmp___5 = 0;
      }
    } else {
      tmp___5 = 0;
    }
    status = tmp___5;
  }
  arg ++;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(status);
  __dyc_printpre_byte(tmp___0);
  __dyc_print_ptr__char(s);
  __dyc_printpre_byte(arg);
}
}
