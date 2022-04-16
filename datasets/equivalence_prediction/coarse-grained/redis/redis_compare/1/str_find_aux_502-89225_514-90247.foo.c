#include "../../include/dycfoo.h"
#include "../../include/lstrlib.i.hd.c.h"
void __dyc_foo(void) 
{ size_t l1 ;
  char const   *s ;
  char const   *p ;
  ptrdiff_t init ;
  char const   *s2 ;
  char const   *tmp___3 ;
  MatchState ms ;
  int anchor ;
  int tmp___4 ;
  char const   *s1 ;
  int tmp___8 ;
  char *tmp___40 ;
  lua_State *L ;
  int __dyc_funcallvar_5 ;
  char *__dyc_funcallvar_6 ;
  char const   *__dyc_funcallvar_7 ;

  {
  l1 = (size_t )__dyc_readpre_byte();
  s = (char const   *)__dyc_read_ptr__char();
  p = (char const   *)__dyc_read_ptr__char();
  init = (ptrdiff_t )__dyc_readpre_byte();
  L = (lua_State *)__dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  __dyc_funcallvar_7 = (char const   *)__dyc_read_ptr__char();
  s2 = 0;
  tmp___3 = 0;
  memset(& ms, 0, sizeof(MatchState ));
  anchor = 0;
  tmp___4 = 0;
  s1 = 0;
  tmp___8 = 0;
  tmp___40 = 0;
  tmp___8 = __dyc_funcallvar_5;
  if (tmp___8) {
    goto _L___0;
  } else {
    {
    tmp___40 = __dyc_funcallvar_6;
    }
    if ((unsigned long )tmp___40 == (unsigned long )((void *)0)) {
      _L___0:  
      {
      tmp___3 = __dyc_funcallvar_7;
      s2 = tmp___3;
      }
      if (s2) {
        {


        }
        goto __dyc_dummy_label;
      }
    } else {
      goto _L;
    }
  }
  _L:  
  if ((int const   )*p == 94) {
    p ++;
    tmp___4 = 1;
  } else {
    tmp___4 = 0;
  }
  anchor = tmp___4;
  s1 = s + init;
  ms.L = L;
  ms.src_init = s;
  ms.src_end = s + l1;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(p);
  __dyc_print_comp_42MatchState(ms);
  __dyc_printpre_byte(anchor);
  __dyc_print_ptr__char(s1);
}
}
