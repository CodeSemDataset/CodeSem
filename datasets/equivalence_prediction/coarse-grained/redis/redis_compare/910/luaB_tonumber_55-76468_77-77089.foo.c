#include "../../include/dycfoo.h"
#include "../../include/lbaselib.i.hd.c.h"
void __dyc_foo(void) 
{ int base ;
  lua_Number tmp___0 ;
  int tmp___1 ;
  char const   *s1 ;
  char const   *tmp___2 ;
  char *s2 ;
  unsigned long n ;
  int tmp___3 ;
  int tmp___4 ;
  unsigned short const   **tmp___5 ;
  int __dyc_funcallvar_2 ;
  lua_Number __dyc_funcallvar_3 ;
  char const   *__dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  unsigned long __dyc_funcallvar_6 ;
  unsigned short const   **__dyc_funcallvar_7 ;

  {
  base = __dyc_readpre_byte();
  s2 = __dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = (unsigned long )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  tmp___0 = 0;
  tmp___1 = 0;
  s1 = 0;
  tmp___2 = 0;
  n = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  if (base == 10) {
    {

    tmp___1 = __dyc_funcallvar_2;
    }
    if (tmp___1) {
      {
      tmp___0 = __dyc_funcallvar_3;

      }
      goto __dyc_dummy_label;
    }
  } else {
    {
    tmp___2 = __dyc_funcallvar_4;
    s1 = tmp___2;
    }
    if (2 <= base) {
      if (base <= 36) {
        tmp___4 = 1;
      } else {
        goto _L;
      }
    } else {
      _L:  
      {
      tmp___3 = __dyc_funcallvar_5;
      }
      if (tmp___3) {
        tmp___4 = 1;
      } else {
        tmp___4 = 0;
      }
    }
    {
    n = __dyc_funcallvar_6;
    }
    if ((unsigned long )s1 != (unsigned long )s2) {
      {
      while (1) {
        while_1_continue:  ;
        {
        tmp___5 = __dyc_funcallvar_7;
        }
        if (! ((int const   )*(*tmp___5 + (int )((unsigned char )*s2)) & 8192)) {
          goto while_1_break;
        }
        s2 ++;
      }
      while_1_break:  ;
      }
      if ((int )*s2 == 0) {
        {

        }
        goto __dyc_dummy_label;
      }
    }
  }

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___0);
  __dyc_printpre_byte(n);
  __dyc_printpre_byte(tmp___4);
}
}
