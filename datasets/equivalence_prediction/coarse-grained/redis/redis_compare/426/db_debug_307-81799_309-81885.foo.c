#include "../../include/dycfoo.h"
#include "../../include/ldblib.i.hd.c.h"
void __dyc_foo(void) 
{ char buffer[250] ;
  char *tmp ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___9 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  char const   *tmp___18 ;
  size_t tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  size_t __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  char const   *__dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  char const   *__dyc_funcallvar_11 ;

  {
  tmp = __dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = (char const   *)__dyc_read_ptr__char();
  __s1_len = 0;
  __s2_len = 0;
  tmp___9 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  if ((unsigned long )tmp == (unsigned long )((char *)0)) {
    goto __dyc_dummy_label;
  } else {
    if (0) {
      {
      tmp___15 = __dyc_funcallvar_2;
      __s1_len = (unsigned long )tmp___15;
      tmp___16 = __dyc_funcallvar_3;
      __s2_len = (unsigned long )tmp___16;
      }
      if (! ((unsigned long )((void const   *)(buffer + 1)) - (unsigned long )((void const   *)(buffer)) == 1UL)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4UL) {
          _L___0:  
          if (! ((unsigned long )((void const   *)("cont\n" + 1)) - (unsigned long )((void const   *)"cont\n") == 1UL)) {
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
      goto __dyc_dummy_label;
    }
  }
  tmp___19 = __dyc_funcallvar_7;
  tmp___20 = __dyc_funcallvar_8;
  if (tmp___20) {
    {
    tmp___18 = __dyc_funcallvar_9;


    }
  } else {
    {
    tmp___21 = __dyc_funcallvar_10;
    }
    if (tmp___21) {
      {
      tmp___18 = __dyc_funcallvar_11;


      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_print_ptr__char(tmp___18);
  __dyc_printpre_byte(tmp___19);
}
}
