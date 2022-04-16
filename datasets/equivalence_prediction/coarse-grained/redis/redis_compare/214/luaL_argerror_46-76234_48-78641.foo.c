#include "../../include/dycfoo.h"
#include "../../include/lauxlib.i.hd.c.h"
void __dyc_foo(void) 
{ lua_Debug ar ;
  int tmp ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___11 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;

  {
  ar = __dyc_read_comp_39lua_Debug();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  tmp = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___11 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  tmp = __dyc_funcallvar_2;
  goto __dyc_dummy_label;
  tmp___17 = __dyc_funcallvar_3;
  __s1_len = (unsigned long )tmp___17;
  tmp___18 = __dyc_funcallvar_4;
  __s2_len = (unsigned long )tmp___18;
  if (! ((unsigned long )((void const   *)(ar.namewhat + 1)) - (unsigned long )((void const   *)ar.namewhat) == 1UL)) {
    goto _L___0;
  } else {
    if (__s1_len >= 4UL) {
      _L___0:  
      if (! ((unsigned long )((void const   *)("method" + 1)) - (unsigned long )((void const   *)"method") == 1UL)) {
        tmp___19 = 1;
      } else {
        if (__s2_len >= 4UL) {
          tmp___19 = 1;
        } else {
          tmp___19 = 0;
        }
      }
    } else {
      tmp___19 = 0;
    }
  }
  if (tmp___19) {
    {
    tmp___11 = __dyc_funcallvar_5;
    }
  } else {
    {
    tmp___16 = __dyc_funcallvar_6;
    tmp___11 = tmp___16;
    }
  }
  tmp___16 = __dyc_funcallvar_7;
  tmp___11 = tmp___16;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_printpre_byte(tmp___11);
}
}
