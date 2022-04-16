#include "../../include/dycfoo.h"
#include "../../include/lua.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *fname ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___9 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___27 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  char **argv ;
  int n ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;

  {
  argv = __dyc_read_ptr__ptr__char();
  n = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  fname = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___9 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___27 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  fname = (char const   *)*(argv + n);
  if (0) {
    {
    tmp___15 = __dyc_funcallvar_2;
    __s1_len = (unsigned long )tmp___15;
    tmp___16 = __dyc_funcallvar_3;
    __s2_len = (unsigned long )tmp___16;
    }
    if (! ((unsigned long )((void const   *)(fname + 1)) - (unsigned long )((void const   *)fname) == 1UL)) {
      goto _L___0;
    } else {
      if (__s1_len >= 4UL) {
        _L___0:  
        if (! ((unsigned long )((void const   *)("-" + 1)) - (unsigned long )((void const   *)"-") == 1UL)) {
          tmp___17 = 1;
        } else {
          if (__s2_len >= 4UL) {
            tmp___17 = 1;
          } else {
            tmp___17 = 0;
          }
        }
      } else {
        tmp___17 = 0;
      }
    }
    if (tmp___17) {
      {
      tmp___9 = __dyc_funcallvar_4;
      }
    } else {
      {
      tmp___14 = __dyc_funcallvar_5;
      tmp___9 = tmp___14;
      }
    }
  } else {
    {
    tmp___14 = __dyc_funcallvar_6;
    tmp___9 = tmp___14;
    }
  }
  if (tmp___9 == 0) {
    if (0) {
      {
      tmp___33 = __dyc_funcallvar_7;
      __s1_len___0 = (unsigned long )tmp___33;
      tmp___34 = __dyc_funcallvar_8;
      __s2_len___0 = (unsigned long )tmp___34;
      }
      if (! ((unsigned long )((void const   *)(*(argv + (n - 1)) + 1)) - (unsigned long )((void const   *)*(argv + (n - 1))) == 1UL)) {
        goto _L___2;
      } else {
        if (__s1_len___0 >= 4UL) {
          _L___2:  
          if (! ((unsigned long )((void const   *)("--" + 1)) - (unsigned long )((void const   *)"--") == 1UL)) {
            tmp___35 = 1;
          } else {
            if (__s2_len___0 >= 4UL) {
              tmp___35 = 1;
            } else {
              tmp___35 = 0;
            }
          }
        } else {
          tmp___35 = 0;
        }
      }
      if (tmp___35) {
        {
        tmp___27 = __dyc_funcallvar_9;
        }
      } else {
        {
        tmp___32 = __dyc_funcallvar_10;
        tmp___27 = tmp___32;
        }
      }
    } else {
      {
      tmp___32 = __dyc_funcallvar_11;
      tmp___27 = tmp___32;
      }
    }
    if (tmp___27 != 0) {
      fname = (char const   *)((void *)0);
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(fname);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
}
}
