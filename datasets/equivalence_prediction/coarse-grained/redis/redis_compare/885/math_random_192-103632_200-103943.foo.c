#include "../../include/dycfoo.h"
#include "../../include/lmathlib.i.hd.c.h"
void __dyc_foo(void) 
{ int u ;
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
  int __dyc_funcallvar_4 ;
  double __dyc_funcallvar_5 ;
  lua_Integer __dyc_funcallvar_6 ;
  lua_Integer __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  double __dyc_funcallvar_9 ;

  {
  u = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (lua_Integer )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (lua_Integer )__dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = (double )__dyc_readpre_byte();
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
  tmp___4 = __dyc_funcallvar_5;

  goto __dyc_dummy_label;
  tmp___5 = __dyc_funcallvar_6;
  l = (int )tmp___5;
  tmp___6 = __dyc_funcallvar_7;
  u___0 = (int )tmp___6;
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
  tmp___9 = __dyc_funcallvar_9;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___3);
  __dyc_printpre_byte(tmp___4);
  __dyc_printpre_byte(tmp___8);
  __dyc_printpre_byte(tmp___9);
}
}
