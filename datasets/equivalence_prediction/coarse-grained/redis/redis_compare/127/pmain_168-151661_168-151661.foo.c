#include "../../include/dycfoo.h"
#include "../../include/luac.i.hd.c.h"
void __dyc_foo(void) 
{ char **argv ;
  int i ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___29 ;
  int tmp___34 ;
  int tmp___37 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;

  {
  argv = __dyc_read_ptr__ptr__char();
  i = __dyc_readpre_byte();
  __s1_len___0 = (size_t )__dyc_readpre_byte();
  __s2_len___0 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  tmp___29 = 0;
  tmp___34 = 0;
  tmp___37 = 0;
  if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
    goto _L___2;
  } else {
    if (__s1_len___0 >= 4UL) {
      _L___2:  
      if (! ((unsigned long )((void const   *)("-" + 1)) - (unsigned long )((void const   *)"-") == 1UL)) {
        tmp___37 = 1;
      } else {
        if (__s2_len___0 >= 4UL) {
          tmp___37 = 1;
        } else {
          tmp___37 = 0;
        }
      }
    } else {
      tmp___37 = 0;
    }
  }
  if (tmp___37) {
    {
    tmp___29 = __dyc_funcallvar_5;
    }
  } else {
    {
    tmp___34 = __dyc_funcallvar_6;
    tmp___29 = tmp___34;
    }
  }
  tmp___34 = __dyc_funcallvar_7;
  tmp___29 = tmp___34;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___29);
}
}
