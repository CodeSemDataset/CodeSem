#include "../../include/dycfoo.h"
#include "../../include/lbaselib.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  int e ;
  int n ;
  size_t tmp___3 ;
  lua_Integer tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  size_t __dyc_funcallvar_3 ;
  lua_Integer __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;

  {
  i = __dyc_readpre_byte();
  tmp___5 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (lua_Integer )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  e = 0;
  n = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  if (tmp___5 <= 0) {
    {
    tmp___3 = __dyc_funcallvar_3;
    e = (int )tmp___3;
    }
  } else {
    {
    tmp___4 = __dyc_funcallvar_4;
    e = (int )tmp___4;
    }
  }
  if (i > e) {
    goto __dyc_dummy_label;
  }
  n = (e - i) + 1;
  if (n <= 0) {
    {
    tmp___6 = __dyc_funcallvar_5;
    }
    goto __dyc_dummy_label;
  } else {
    {
    tmp___7 = __dyc_funcallvar_6;
    }
    if (! tmp___7) {
      {
      tmp___6 = __dyc_funcallvar_7;
      }
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___6);
}
}
