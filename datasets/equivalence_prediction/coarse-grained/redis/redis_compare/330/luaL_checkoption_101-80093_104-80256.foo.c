#include "../../include/dycfoo.h"
#include "../../include/lauxlib.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *name ;
  char const   *tmp___1 ;
  int i ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___11 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  char const   * const  *lst ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;

  {
  tmp___1 = (char const   *)__dyc_read_ptr__char();
  lst = (char const   * const  *)__dyc_read_ptr__ptr__char();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  name = 0;
  i = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___11 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  name = tmp___1;
  i = 0;
  while (1) {
    while_0_continue:  ;
    if (! *(lst + i)) {
      goto __dyc_dummy_label;
    }
    if (0) {
      {
      tmp___17 = __dyc_funcallvar_3;
      __s1_len = (unsigned long )tmp___17;
      tmp___18 = __dyc_funcallvar_4;
      __s2_len = (unsigned long )tmp___18;
      }
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
    } else {
      {
      tmp___16 = __dyc_funcallvar_7;
      tmp___11 = tmp___16;
      }
    }
    if (tmp___11 == 0) {
      goto __dyc_dummy_label;
    }
    i ++;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(name);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
}
}
