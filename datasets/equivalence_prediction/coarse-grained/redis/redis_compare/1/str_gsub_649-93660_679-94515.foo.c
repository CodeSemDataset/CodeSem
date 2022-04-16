#include "../../include/dycfoo.h"
#include "../../include/lstrlib.i.hd.c.h"
void __dyc_foo(void) 
{ size_t srcl ;
  char const   *src ;
  char const   *p ;
  int tr ;
  int max_s ;
  lua_Integer tmp___2 ;
  int anchor ;
  int tmp___3 ;
  int n ;
  MatchState ms ;
  luaL_Buffer b ;
  int tmp___4 ;
  int tmp___5 ;
  char const   *e ;
  char *tmp___6 ;
  int tmp___7 ;
  char *tmp___8 ;
  char const   *tmp___9 ;
  lua_State *L ;
  int __dyc_funcallvar_5 ;
  char const   *__dyc_funcallvar_6 ;
  char *__dyc_funcallvar_7 ;

  {
  srcl = (size_t )__dyc_readpre_byte();
  src = (char const   *)__dyc_read_ptr__char();
  p = (char const   *)__dyc_read_ptr__char();
  tr = __dyc_readpre_byte();
  tmp___2 = (lua_Integer )__dyc_readpre_byte();
  b = __dyc_read_comp_41luaL_Buffer();
  L = (lua_State *)__dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_7 = __dyc_read_ptr__char();
  max_s = 0;
  anchor = 0;
  tmp___3 = 0;
  n = 0;
  memset(& ms, 0, sizeof(MatchState ));
  tmp___4 = 0;
  tmp___5 = 0;
  e = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  max_s = (int )tmp___2;
  if ((int const   )*p == 94) {
    p ++;
    tmp___3 = 1;
  } else {
    tmp___3 = 0;
  }
  anchor = tmp___3;
  n = 0;
  if (tr == 3) {
    tmp___5 = 1;
  } else {
    if (tr == 4) {
      tmp___5 = 1;
    } else {
      if (tr == 6) {
        tmp___5 = 1;
      } else {
        if (tr == 5) {
          tmp___5 = 1;
        } else {
          {
          tmp___4 = __dyc_funcallvar_5;
          }
          if (tmp___4) {
            tmp___5 = 1;
          } else {
            tmp___5 = 0;
          }
        }
      }
    }
  }

  ms.L = L;
  ms.src_init = src;
  ms.src_end = src + srcl;
  while (1) {
    while_25_continue:  ;
    if (! (n < max_s)) {
      goto while_25_break;
    }
    {
    ms.level = 0;
    e = __dyc_funcallvar_6;
    }
    if (e) {
      {
      n ++;

      }
    }
    if (e) {
      if ((unsigned long )e > (unsigned long )src) {
        src = e;
      } else {
        goto _L;
      }
    } else {
      _L:  
      if ((unsigned long )src < (unsigned long )ms.src_end) {
        if ((unsigned long )b.p < (unsigned long )(b.buffer + 8192)) {
          tmp___7 = 1;
        } else {
          {
          tmp___6 = __dyc_funcallvar_7;
          }
          if (tmp___6) {
            tmp___7 = 1;
          } else {
            tmp___7 = 0;
          }
        }
        tmp___8 = b.p;
        (b.p) ++;
        tmp___9 = src;
        src ++;
        *tmp___8 = (char )*tmp___9;
      } else {
        goto while_25_break;
      }
    }
    if (anchor) {
      goto while_25_break;
    }
  }
  while_25_break:  ;



  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(src);
  __dyc_print_ptr__char(p);
  __dyc_printpre_byte(anchor);
  __dyc_printpre_byte(n);
  __dyc_print_comp_42MatchState(ms);
  __dyc_print_comp_41luaL_Buffer(b);
  __dyc_printpre_byte(tmp___5);
  __dyc_printpre_byte(tmp___7);
}
}
