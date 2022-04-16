#include "../../include/dycfoo.h"
#include "../../include/luac.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *output ;
  int i ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___8 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___80 ;
  int tmp___85 ;
  char **argv ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  int __dyc_funcallvar_24 ;
  int __dyc_funcallvar_25 ;

  {
  i = __dyc_readpre_byte();
  tmp___85 = __dyc_readpre_byte();
  argv = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_readpre_byte();
  output = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___8 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___80 = 0;
  tmp___80 = tmp___85;
  i ++;
  output = (char const   *)*(argv + i);
  if ((unsigned long )output == (unsigned long )((void *)0)) {
    {

    }
  } else {
    if ((int const   )*output == 0) {
      {

      }
    }
  }
  if (0) {
    {
    tmp___14 = __dyc_funcallvar_21;
    __s1_len = (unsigned long )tmp___14;
    tmp___15 = __dyc_funcallvar_22;
    __s2_len = (unsigned long )tmp___15;
    }
    if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
      goto _L___0;
    } else {
      if (__s1_len >= 4UL) {
        _L___0:  
        if (! ((unsigned long )((void const   *)("-" + 1)) - (unsigned long )((void const   *)"-") == 1UL)) {
          tmp___16 = 1;
        } else {
          if (__s2_len >= 4UL) {
            tmp___16 = 1;
          } else {
            tmp___16 = 0;
          }
        }
      } else {
        tmp___16 = 0;
      }
    }
    if (tmp___16) {
      {
      tmp___8 = __dyc_funcallvar_23;
      }
    } else {
      {
      tmp___13 = __dyc_funcallvar_24;
      tmp___8 = tmp___13;
      }
    }
  } else {
    {
    tmp___13 = __dyc_funcallvar_25;
    tmp___8 = tmp___13;
    }
  }
  if (tmp___8 == 0) {
    output = (char const   *)((void *)0);
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(output);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_printpre_byte(tmp___80);
}
}
