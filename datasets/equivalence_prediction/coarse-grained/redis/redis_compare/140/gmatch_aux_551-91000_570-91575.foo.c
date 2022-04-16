#include "../../include/dycfoo.h"
#include "../../include/lstrlib.i.hd.c.h"
void __dyc_foo(void) 
{ MatchState ms ;
  size_t ls ;
  char const   *s ;
  char const   *tmp ;
  char const   *p ;
  char const   *tmp___0 ;
  char const   *src ;
  lua_Integer tmp___1 ;
  char const   *e ;
  lua_Integer newstart ;
  int tmp___2 ;
  lua_State *L ;
  char const   *__dyc_funcallvar_2 ;
  lua_Integer __dyc_funcallvar_3 ;
  char const   *__dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;

  {
  ls = (size_t )__dyc_readpre_byte();
  tmp = (char const   *)__dyc_read_ptr__char();
  L = (lua_State *)__dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_2 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_3 = (lua_Integer )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  memset(& ms, 0, sizeof(MatchState ));
  s = 0;
  p = 0;
  tmp___0 = 0;
  src = 0;
  tmp___1 = 0;
  e = 0;
  newstart = 0;
  tmp___2 = 0;
  s = tmp;
  tmp___0 = __dyc_funcallvar_2;
  p = tmp___0;
  ms.L = L;
  ms.src_init = s;
  ms.src_end = s + ls;
  tmp___1 = __dyc_funcallvar_3;
  src = s + (unsigned long )tmp___1;
  while (1) {
    while_22_continue:  ;
    if (! ((unsigned long )src <= (unsigned long )ms.src_end)) {
      goto while_22_break;
    }
    {
    ms.level = 0;
    e = __dyc_funcallvar_4;
    }
    if ((unsigned long )e != (unsigned long )((void *)0)) {
      newstart = (lua_Integer )(e - s);
      if ((unsigned long )e == (unsigned long )src) {
        newstart ++;
      }
      {


      tmp___2 = __dyc_funcallvar_5;
      }
      goto __dyc_dummy_label;
    }
    src ++;
  }
  while_22_break:  ;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_comp_42MatchState(ms);
  __dyc_print_ptr__char(p);
  __dyc_printpre_byte(newstart);
  __dyc_printpre_byte(tmp___2);
}
}
