#include "../../include/dycfoo.h"
#include "../../include/luac.i.hd.c.h"
void __dyc_foo(void) 
{ int argc ;
  char **argv ;
  int i ;
  char const   *filename ;
  char *tmp___19 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___29 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;

  {
  argc = __dyc_readpre_byte();
  argv = __dyc_read_ptr__ptr__char();
  i = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  filename = 0;
  tmp___19 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___29 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___37 = 0;
  if (! (i < argc)) {
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___35 = __dyc_funcallvar_3;
    __s1_len___0 = (unsigned long )tmp___35;
    tmp___36 = __dyc_funcallvar_4;
    __s2_len___0 = (unsigned long )tmp___36;
    }
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
  } else {
    {
    tmp___34 = __dyc_funcallvar_7;
    tmp___29 = tmp___34;
    }
  }
  if (tmp___29 == 0) {
    tmp___19 = (char *)((void *)0);
  } else {
    tmp___19 = *(argv + i);
  }
  filename = (char const   *)tmp___19;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(filename);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
}
}
