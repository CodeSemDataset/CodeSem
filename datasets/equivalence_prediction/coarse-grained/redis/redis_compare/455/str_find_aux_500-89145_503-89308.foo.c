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
  char const   *res ;
  int tmp___5 ;
  int tmp___6 ;
  char const   *tmp___7 ;
  int tmp___8 ;
  char *tmp___40 ;
  lua_State *L ;
  int find ;
  int __dyc_funcallvar_5 ;
  char *__dyc_funcallvar_6 ;
  char const   *__dyc_funcallvar_7 ;
  char const   *__dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;

  {
  l1 = (size_t )__dyc_readpre_byte();
  s = (char const   *)__dyc_read_ptr__char();
  p = (char const   *)__dyc_read_ptr__char();
  init = (ptrdiff_t )__dyc_readpre_byte();
  L = (lua_State *)__dyc_read_ptr__typdef_lua_State();
  find = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  __dyc_funcallvar_7 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_8 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  s2 = 0;
  tmp___3 = 0;
  memset(& ms, 0, sizeof(MatchState ));
  anchor = 0;
  tmp___4 = 0;
  s1 = 0;
  res = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___40 = 0;
  if (init < 0L) {
    init = 0L;
  } else {
    if ((unsigned long )init > l1) {
      init = (long )l1;
    }
  }
  if (find) {
    {
    tmp___8 = __dyc_funcallvar_5;
    }
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
  } else {
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
    {
    while (1) {
      while_21_continue:  ;
      {
      ms.level = 0;
      res = __dyc_funcallvar_8;
      }
      if ((unsigned long )res != (unsigned long )((void *)0)) {
        if (find) {
          {


          tmp___5 = __dyc_funcallvar_9;
          }
          goto __dyc_dummy_label;
        } else {
          {
          tmp___6 = __dyc_funcallvar_10;
          }
          goto __dyc_dummy_label;
        }
      }
      tmp___7 = s1;
      s1 ++;
      if ((unsigned long )tmp___7 < (unsigned long )ms.src_end) {
        if (! (! anchor)) {
          goto while_21_break;
        }
      } else {
        goto while_21_break;
      }
    }
    while_21_break:  ;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(p);
  __dyc_printpre_byte(init);
  __dyc_print_comp_42MatchState(ms);
  __dyc_printpre_byte(anchor);
  __dyc_print_ptr__char(s1);
  __dyc_printpre_byte(tmp___5);
  __dyc_printpre_byte(tmp___6);
}
}
