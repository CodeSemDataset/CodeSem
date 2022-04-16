#include "../../include/dycfoo.h"
#include "../../include/lauxlib.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *name ;
  int i ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___11 ;
  int tmp___16 ;
  int tmp___19 ;
  char const   * const  *lst ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;

  {
  name = (char const   *)__dyc_read_ptr__char();
  i = __dyc_readpre_byte();
  __s1_len = (size_t )__dyc_readpre_byte();
  __s2_len = (size_t )__dyc_readpre_byte();
  lst = (char const   * const  *)__dyc_read_ptr__ptr__char();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  tmp___11 = 0;
  tmp___16 = 0;
  tmp___19 = 0;
  if (! ((unsigned long )((void const   *)(*(lst + i) + 1)) - (unsigned long )((void const   *)*(lst + i)) == 1UL)) {
    goto _L___0;
  } else {
    if (__s1_len >= 4UL) {
      _L___0:  
      if (! ((unsigned long )((void const   *)(name + 1)) - (unsigned long )((void const   *)name) == 1UL)) {
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
  __dyc_printpre_byte(tmp___11);
}
}
