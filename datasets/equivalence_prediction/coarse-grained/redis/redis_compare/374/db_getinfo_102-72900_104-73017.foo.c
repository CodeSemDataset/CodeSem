#include "../../include/dycfoo.h"
#include "../../include/ldblib.i.hd.c.h"
void __dyc_foo(void) 
{ lua_State *L1 ;
  lua_State *tmp ;
  char const   *options ;
  char const   *tmp___0 ;
  lua_Integer tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  char const   *__dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  lua_Integer __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  char const   *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;

  {
  tmp = (lua_State *)__dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_2 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (lua_Integer )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  L1 = 0;
  options = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  L1 = tmp;
  tmp___0 = __dyc_funcallvar_2;
  options = tmp___0;
  tmp___5 = __dyc_funcallvar_3;
  if (tmp___5) {
    {
    tmp___1 = __dyc_funcallvar_4;
    tmp___2 = __dyc_funcallvar_5;
    }
    if (! tmp___2) {
      {

      }
      goto __dyc_dummy_label;
    }
  } else {
    {
    tmp___4 = __dyc_funcallvar_6;
    }
    if (tmp___4 == 6) {
      {

      options = __dyc_funcallvar_7;


      }
    } else {
      {
      tmp___3 = __dyc_funcallvar_8;
      }
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_lua_State(L1);
  __dyc_print_ptr__char(options);
  __dyc_printpre_byte(tmp___1);
  __dyc_printpre_byte(tmp___3);
}
}
