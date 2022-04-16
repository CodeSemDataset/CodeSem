#include "../../include/dycfoo.h"
#include "../../include/lstrlib.i.hd.c.h"
void __dyc_foo(void) 
{ lua_State *L ;
  int tmp ;
  int n ;
  int tmp___0 ;
  char const   *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  MatchState *ms ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  char const   *__dyc_funcallvar_6 ;

  {
  ms = __dyc_read_ptr__typdef_MatchState();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = (char const   *)__dyc_read_ptr__char();
  L = 0;
  tmp = 0;
  n = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  L = ms->L;
  tmp = __dyc_funcallvar_1;
  if (tmp == 3) {
    goto switch_24_3;
  } else {
    if (tmp == 4) {
      goto switch_24_3;
    } else {
      if (tmp == 6) {
        goto switch_24_6;
      } else {
        if (tmp == 5) {
          goto switch_24_5;
        } else {
          if (0) {
            switch_24_3:  
            switch_24_4:  
            {

            }
            goto __dyc_dummy_label;
            switch_24_6:  
            {

            n = __dyc_funcallvar_2;

            }
            goto switch_24_break;
            switch_24_5:  
            {


            }
            goto switch_24_break;
          } else {
            switch_24_break:  ;
          }
        }
      }
    }
  }
  tmp___3 = __dyc_funcallvar_3;
  if (tmp___3) {
    {
    tmp___2 = __dyc_funcallvar_4;
    }
    if (! tmp___2) {
      {
      tmp___0 = __dyc_funcallvar_5;
      tmp___1 = __dyc_funcallvar_6;

      }
    }
  } else {
    {


    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_lua_State(L);
  __dyc_printpre_byte(n);
  __dyc_printpre_byte(tmp___0);
  __dyc_print_ptr__char(tmp___1);
}
}
