#include "../../include/dycfoo.h"
#include "../../include/util.i.hd.c.h"
void __dyc_foo(void) 
{ sds abspath ;
  sds relpath ;
  sds tmp ;
  char *tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  char *p ;
  size_t tmp___3 ;
  int trimlen ;
  size_t tmp___4 ;
  size_t tmp___5 ;
  sds __dyc_funcallvar_2 ;
  char *__dyc_funcallvar_3 ;
  sds __dyc_funcallvar_4 ;
  size_t __dyc_funcallvar_5 ;
  size_t __dyc_funcallvar_6 ;
  sds __dyc_funcallvar_7 ;
  size_t __dyc_funcallvar_8 ;
  size_t __dyc_funcallvar_9 ;
  size_t __dyc_funcallvar_10 ;
  sds __dyc_funcallvar_11 ;

  {
  tmp = __dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_read_ptr__char();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__char();
  __dyc_funcallvar_8 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_10 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_read_ptr__char();
  abspath = 0;
  relpath = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  p = 0;
  tmp___3 = 0;
  trimlen = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  relpath = tmp;
  relpath = __dyc_funcallvar_2;
  if ((int )*(relpath + 0) == 47) {
    goto __dyc_dummy_label;
  }
  tmp___0 = __dyc_funcallvar_3;
  if ((unsigned long )tmp___0 == (unsigned long )((void *)0)) {
    {

    }
    goto __dyc_dummy_label;
  }
  abspath = __dyc_funcallvar_4;
  tmp___1 = __dyc_funcallvar_5;
  if (tmp___1) {
    {
    tmp___2 = __dyc_funcallvar_6;
    }
    if ((int )*(abspath + (tmp___2 - 1UL)) != 47) {
      {
      abspath = __dyc_funcallvar_7;
      }
    }
  }
  while (1) {
    while_14_continue:  ;
    {
    tmp___5 = __dyc_funcallvar_8;
    }
    if (tmp___5 >= 3UL) {
      if ((int )*(relpath + 0) == 46) {
        if ((int )*(relpath + 1) == 46) {
          if (! ((int )*(relpath + 2) == 47)) {
            goto while_14_break;
          }
        } else {
          goto while_14_break;
        }
      } else {
        goto while_14_break;
      }
    } else {
      goto while_14_break;
    }
    {

    tmp___4 = __dyc_funcallvar_9;
    }
    if (tmp___4 > 1UL) {
      {
      tmp___3 = __dyc_funcallvar_10;
      p = (abspath + tmp___3) - 2;
      trimlen = 1;
      }
      {
      while (1) {
        while_15_continue:  ;
        if (! ((int )*p != 47)) {
          goto while_15_break;
        }
        p --;
        trimlen ++;
      }
      while_15_break:  ;
      }
      {

      }
    }
  }
  while_14_break:  ;
  abspath = __dyc_funcallvar_11;

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(abspath);
  __dyc_printpre_byte(trimlen);
}
}
