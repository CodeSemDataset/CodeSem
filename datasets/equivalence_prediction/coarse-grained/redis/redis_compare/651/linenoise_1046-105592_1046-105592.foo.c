#include "../../include/dycfoo.h"
#include "../../include/linenoise.i.hd.c.h"
void __dyc_foo(void) 
{ char buf[4096] ;
  int count ;
  size_t len ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  int tmp___3 ;
  char *__dyc_funcallvar_3 ;
  size_t __dyc_funcallvar_4 ;
  char *__dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  char *__dyc_funcallvar_7 ;

  {
  tmp___3 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_read_ptr__char();
  __dyc_funcallvar_4 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__char();
  count = 0;
  len = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  if (tmp___3) {
    {


    tmp___0 = __dyc_funcallvar_3;
    }
    if ((unsigned long )tmp___0 == (unsigned long )((void *)0)) {
      goto __dyc_dummy_label;
    }
    {
    len = __dyc_funcallvar_4;
    }
    {
    while (1) {
      while_17_continue:  ;
      if (len) {
        if (! ((int )buf[len - 1UL] == 10)) {
          if (! ((int )buf[len - 1UL] == 13)) {
            goto while_17_break;
          }
        }
      } else {
        goto while_17_break;
      }
      len --;
      buf[len] = (char )'\000';
    }
    while_17_break:  ;
    }
    {
    tmp___1 = __dyc_funcallvar_5;
    }
    goto __dyc_dummy_label;
  } else {
    {
    count = __dyc_funcallvar_6;
    }
    if (count == -1) {
      goto __dyc_dummy_label;
    }
    {
    tmp___2 = __dyc_funcallvar_7;
    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(tmp___1);
  __dyc_print_ptr__char(tmp___2);
}
}
