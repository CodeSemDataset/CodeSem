#include "../../include/dycfoo.h"
#include "../../include/util.i.hd.c.h"
void __dyc_foo(void) 
{ size_t l ;
  int tmp ;
  char *p ;
  char *tmp___1 ;
  int tmp___2 ;
  int tmp___7 ;
  char *buf ;
  size_t len ;
  long double value ;
  int humanfriendly ;
  int __dyc_funcallvar_4 ;
  char *__dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;

  {
  tmp___7 = __dyc_readpre_byte();
  buf = __dyc_read_ptr__char();
  len = (size_t )__dyc_readpre_byte();
  value = (long double )__dyc_readpre_byte();
  humanfriendly = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  l = 0;
  tmp = 0;
  p = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  if (tmp___7) {
    if (len < 5UL) {
      goto __dyc_dummy_label;
    }
    if (value > (long double )0) {
      {

      l = 3UL;
      }
    } else {
      {

      l = 4UL;
      }
    }
  } else {
    if (humanfriendly) {
      {
      tmp = __dyc_funcallvar_4;
      l = (unsigned long )tmp;
      }
      if (l + 1UL > len) {
        goto __dyc_dummy_label;
      }
      {
      tmp___1 = __dyc_funcallvar_5;
      }
      if ((unsigned long )tmp___1 != (unsigned long )((void *)0)) {
        p = (buf + l) - 1;
        {
        while (1) {
          while_10_continue:  ;
          if (! ((int )*p == 48)) {
            goto while_10_break;
          }
          p --;
          l --;
        }
        while_10_break:  ;
        }
        if ((int )*p == 46) {
          l --;
        }
      }
    } else {
      {
      tmp___2 = __dyc_funcallvar_6;
      l = (unsigned long )tmp___2;
      }
      if (l + 1UL > len) {
        goto __dyc_dummy_label;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(l);
}
}
