#include "../../include/dycfoo.h"
#include "../../include/lua_cmsgpack.i.hd.c.h"
void __dyc_foo(void) 
{ int max ;
  lua_Number n ;
  int tmp ;
  int tmp___4 ;
  int tmp___7 ;
  int __dyc_funcallvar_3 ;
  lua_Number __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;

  {
  max = __dyc_readpre_byte();
  tmp___7 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  n = 0;
  tmp = 0;
  tmp___4 = 0;
  if (! tmp___7) {
    goto __dyc_dummy_label;
  }

  tmp = __dyc_funcallvar_3;
  if (3 != tmp) {
    {

    }
    goto __dyc_dummy_label;
  } else {
    {
    n = __dyc_funcallvar_4;
    }
    if (n <= (lua_Number )0) {
      {

      }
      goto __dyc_dummy_label;
    } else {
      if (sizeof(lua_Number ) == sizeof(float )) {
        {
        tmp___4 = __dyc_funcallvar_5;
        }
      } else {
        if (sizeof(lua_Number ) == sizeof(double )) {
          {
          tmp___4 = __dyc_funcallvar_6;
          }
        } else {
          {
          tmp___4 = __dyc_funcallvar_7;
          }
        }
      }
      if (tmp___4) {
        {

        }
        goto __dyc_dummy_label;
      } else {
        if (! ((lua_Number )((int )n) == n)) {
          {

          }
          goto __dyc_dummy_label;
        }
      }
    }
  }
  if (n > (lua_Number )max) {
    max = (int )n;
  } else {
    max = max;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(max);
}
}
