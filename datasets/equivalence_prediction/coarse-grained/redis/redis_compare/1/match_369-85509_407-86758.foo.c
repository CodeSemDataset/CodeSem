#include "../../include/dycfoo.h"
#include "../../include/lstrlib.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  char const   *ep ;
  char previous ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned short const   **tmp___4 ;
  MatchState *ms ;
  char const   *s ;
  char const   *p ;
  char const   *__dyc_funcallvar_1 ;
  char const   *__dyc_funcallvar_2 ;
  char const   *__dyc_funcallvar_3 ;
  char const   *__dyc_funcallvar_4 ;
  char const   *__dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  unsigned short const   **__dyc_funcallvar_8 ;
  char const   *__dyc_funcallvar_9 ;

  {
  ms = __dyc_read_ptr__typdef_MatchState();
  s = (char const   *)__dyc_read_ptr__char();
  p = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_1 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_2 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_3 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_4 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_5 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_9 = (char const   *)__dyc_read_ptr__char();
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  ep = 0;
  previous = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  switch_16_40:  
  if ((int const   )*(p + 1) == 41) {
    {
    tmp = __dyc_funcallvar_1;
    }
    goto __dyc_dummy_label;
  } else {
    {
    tmp___0 = __dyc_funcallvar_2;
    }
    goto __dyc_dummy_label;
  }
  tmp___1 = __dyc_funcallvar_3;
  goto __dyc_dummy_label;
  switch_16_37:  
  if ((int )*(p + 1) == 98) {
    goto switch_17_98;
  } else {
    if ((int )*(p + 1) == 102) {
      goto switch_17_102;
    } else {
      {
      goto switch_17_default;
      if (0) {
        switch_17_98:  
        {
        s = __dyc_funcallvar_4;
        }
        if ((unsigned long )s == (unsigned long )((void *)0)) {
          goto __dyc_dummy_label;
        }
        p += 4;
        goto __dyc_dummy_label;
        switch_17_102:  
        p += 2;
        if ((int const   )*p != 91) {
          {

          }
        }
        {
        ep = __dyc_funcallvar_5;
        }
        if ((unsigned long )s == (unsigned long )ms->src_init) {
          previous = (char )'\000';
        } else {
          previous = (char )*(s - 1);
        }
        {
        tmp___2 = __dyc_funcallvar_6;
        }
        if (tmp___2) {
          goto __dyc_dummy_label;
        } else {
          {
          tmp___3 = __dyc_funcallvar_7;
          }
          if (! tmp___3) {
            goto __dyc_dummy_label;
          }
        }
        p = ep;
        goto __dyc_dummy_label;
        switch_17_default:  
        {
        tmp___4 = __dyc_funcallvar_8;
        }
        if ((int const   )*(*tmp___4 + (int )((unsigned char )*(p + 1))) & 2048) {
          {
          s = __dyc_funcallvar_9;
          }
          if ((unsigned long )s == (unsigned long )((void *)0)) {
            goto __dyc_dummy_label;
          }
          p += 2;
          goto __dyc_dummy_label;
        }
        goto __dyc_dummy_label;
      } else {
        switch_17_break:  ;
      }
      }
    }
  }
  switch_16_0:  
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(tmp);
  __dyc_print_ptr__char(tmp___0);
  __dyc_print_ptr__char(tmp___1);
  __dyc_print_ptr__char(ep);
  __dyc_printpre_byte(previous);
  __dyc_print_ptr__char(p);
}
}
