#include "../../include/dycfoo.h"
#include "../../include/ldblib.i.hd.c.h"
void __dyc_foo(void) 
{ int level ;
  int arg ;
  lua_State *L1 ;
  lua_State *tmp ;
  lua_Integer tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  lua_State *L ;
  int __dyc_funcallvar_2 ;
  lua_Integer __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;

  {
  arg = __dyc_readpre_byte();
  tmp = (lua_State *)__dyc_read_ptr__typdef_lua_State();
  L = (lua_State *)__dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (lua_Integer )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  level = 0;
  L1 = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  L1 = tmp;
  tmp___1 = __dyc_funcallvar_2;
  if (tmp___1) {
    {
    tmp___0 = __dyc_funcallvar_3;
    level = (int )tmp___0;

    }
  } else {
    if ((unsigned long )L == (unsigned long )L1) {
      level = 1;
    } else {
      level = 0;
    }
  }
  tmp___3 = __dyc_funcallvar_4;
  if (tmp___3 == arg) {
    {

    }
  } else {
    {
    tmp___2 = __dyc_funcallvar_5;
    }
    if (tmp___2) {
      {

      }
    } else {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(level);
  __dyc_print_ptr__typdef_lua_State(L1);
}
}
