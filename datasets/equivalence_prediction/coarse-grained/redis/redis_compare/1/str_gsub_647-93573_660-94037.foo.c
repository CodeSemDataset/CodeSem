#include "../../include/dycfoo.h"
#include "../../include/lstrlib.i.hd.c.h"
void __dyc_foo(void) 
{ size_t srcl ;
  char const   *src ;
  char const   *p ;
  char const   *tmp___0 ;
  int tr ;
  int tmp___1 ;
  int max_s ;
  lua_Integer tmp___2 ;
  int anchor ;
  int tmp___3 ;
  int n ;
  MatchState ms ;
  int tmp___4 ;
  int tmp___5 ;
  lua_State *L ;
  int __dyc_funcallvar_3 ;
  lua_Integer __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;

  {
  srcl = (size_t )__dyc_readpre_byte();
  src = (char const   *)__dyc_read_ptr__char();
  tmp___0 = (char const   *)__dyc_read_ptr__char();
  L = (lua_State *)__dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (lua_Integer )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  p = 0;
  tr = 0;
  tmp___1 = 0;
  max_s = 0;
  tmp___2 = 0;
  anchor = 0;
  tmp___3 = 0;
  n = 0;
  memset(& ms, 0, sizeof(MatchState ));
  tmp___4 = 0;
  tmp___5 = 0;
  p = tmp___0;
  tmp___1 = __dyc_funcallvar_3;
  tr = tmp___1;
  tmp___2 = __dyc_funcallvar_4;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(p);
  __dyc_printpre_byte(max_s);
  __dyc_printpre_byte(anchor);
  __dyc_printpre_byte(n);
  __dyc_print_comp_42MatchState(ms);
  __dyc_printpre_byte(tmp___5);
}
}
