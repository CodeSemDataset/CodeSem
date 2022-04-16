#include "../../include/dycfoo.h"
#include "../../include/lua.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *fname ;
  int tmp___9 ;
  int tmp___14 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___27 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  char **argv ;
  int n ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;

  {
  tmp___14 = __dyc_readpre_byte();
  argv = __dyc_read_ptr__ptr__char();
  n = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  fname = 0;
  tmp___9 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___27 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___9 = tmp___14;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(fname);
  __dyc_printpre_byte(tmp___9);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
}
}
