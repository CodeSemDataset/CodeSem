#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *c ;
  sds newarg ;
  size_t size ;
  char const   *_p ;
  size_t _l ;
  char *tmp___4 ;
  unsigned short const   **tmp___5 ;
  unsigned short const   **tmp___6 ;
  sds __dyc_funcallvar_8 ;
  sds __dyc_funcallvar_9 ;
  sds __dyc_funcallvar_10 ;
  char *__dyc_funcallvar_11 ;
  unsigned short const   **__dyc_funcallvar_12 ;
  unsigned short const   **__dyc_funcallvar_13 ;

  {
  c = (char const   *)__dyc_read_ptr__char();
  size = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_read_ptr__char();
  __dyc_funcallvar_9 = __dyc_read_ptr__char();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  __dyc_funcallvar_11 = __dyc_read_ptr__char();
  __dyc_funcallvar_12 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_13 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  newarg = 0;
  _p = 0;
  _l = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  if (size > 0UL) {
    {
    newarg = __dyc_funcallvar_8;
    }
  }
  goto __dyc_dummy_label;


  if (size > 0UL) {
    {
    newarg = __dyc_funcallvar_9;
    }
  }
  goto __dyc_dummy_label;
  newarg = __dyc_funcallvar_10;
  goto __dyc_dummy_label;
  switch_5_default:  
  _p = c + 1;
  _l = (size_t )0;
  while (1) {
    while_6_continue:  ;
    if ((int const   )*_p != 0) {
      {
      tmp___4 = __dyc_funcallvar_11;
      }
      if (! ((unsigned long )tmp___4 != (unsigned long )((void *)0))) {
        goto while_6_break;
      }
    } else {
      goto while_6_break;
    }
    _p ++;
  }
  while_6_break:  ;
  while (1) {
    while_7_continue:  ;
    if ((int const   )*_p != 0) {
      {
      tmp___5 = __dyc_funcallvar_12;
      }
      if (! ((int const   )*(*tmp___5 + (int )*_p) & 2048)) {
        goto while_7_break;
      }
    } else {
      goto while_7_break;
    }
    _p ++;
  }
  while_7_break:  ;
  if ((int const   )*_p == 46) {
    _p ++;
    {
    while (1) {
      while_8_continue:  ;
      if ((int const   )*_p != 0) {
        {
        tmp___6 = __dyc_funcallvar_13;
        }
        if (! ((int const   )*(*tmp___6 + (int )*_p) & 2048)) {
          goto while_8_break;
        }
      } else {
        goto while_8_break;
      }
      _p ++;
    }
    while_8_break:  ;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(newarg);
  __dyc_printpre_byte(_l);
}
}
