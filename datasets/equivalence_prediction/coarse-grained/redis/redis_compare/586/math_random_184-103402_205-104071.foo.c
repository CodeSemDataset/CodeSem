#include "../../include/dycfoo.h"
#include "../../include/lmathlib.i.hd.c.h"
void __dyc_foo(void) 
{ lua_Number r ;
  int tmp ;
  int tmp___0 ;
  int u ;
  lua_Integer tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  double tmp___4 ;
  int l ;
  lua_Integer tmp___5 ;
  int u___0 ;
  lua_Integer tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  double tmp___9 ;
  int tmp___10 ;
  int __dyc_funcallvar_2 ;
  lua_Integer __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  double __dyc_funcallvar_5 ;
  lua_Integer __dyc_funcallvar_6 ;
  lua_Integer __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  double __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;

  {
  tmp = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (lua_Integer )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (lua_Integer )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (lua_Integer )__dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  r = 0;
  tmp___0 = 0;
  u = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  l = 0;
  tmp___5 = 0;
  u___0 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  r = (double )(tmp % 2147483647) / (double )2147483647;
  tmp___0 = __dyc_funcallvar_2;
  if (tmp___0 == 0) {
    goto switch_2_0;
  } else {
    if (tmp___0 == 1) {
      goto switch_2_1;
    } else {
      if (tmp___0 == 2) {
        goto switch_2_2;
      } else {
        {
        goto switch_2_default;
        if (0) {
          switch_2_0:  
          {

          }
          goto switch_2_break;
          switch_2_1:  
          {
          tmp___1 = __dyc_funcallvar_3;
          u = (int )tmp___1;
          }
          if (1 <= u) {
            tmp___3 = 1;
          } else {
            {
            tmp___2 = __dyc_funcallvar_4;
            }
            if (tmp___2) {
              tmp___3 = 1;
            } else {
              tmp___3 = 0;
            }
          }
          {
          tmp___4 = __dyc_funcallvar_5;

          }
          goto switch_2_break;
          switch_2_2:  
          {
          tmp___5 = __dyc_funcallvar_6;
          l = (int )tmp___5;
          tmp___6 = __dyc_funcallvar_7;
          u___0 = (int )tmp___6;
          }
          if (l <= u___0) {
            tmp___8 = 1;
          } else {
            {
            tmp___7 = __dyc_funcallvar_8;
            }
            if (tmp___7) {
              tmp___8 = 1;
            } else {
              tmp___8 = 0;
            }
          }
          {
          tmp___9 = __dyc_funcallvar_9;

          }
          goto switch_2_break;
          switch_2_default:  
          {
          tmp___10 = __dyc_funcallvar_10;
          }
          goto __dyc_dummy_label;
        } else {
          switch_2_break:  ;
        }
        }
      }
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(r);
  __dyc_printpre_byte(tmp___3);
  __dyc_printpre_byte(tmp___4);
  __dyc_printpre_byte(tmp___8);
  __dyc_printpre_byte(tmp___9);
  __dyc_printpre_byte(tmp___10);
}
}
