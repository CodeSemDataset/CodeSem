#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *c ;
  sds newarg ;
  char _format[16] ;
  char const   *_p ;
  size_t _l ;
  char *tmp___4 ;
  unsigned short const   **tmp___5 ;
  unsigned short const   **tmp___6 ;
  char *tmp___9 ;
  char *tmp___12 ;
  char *tmp___15 ;
  char *tmp___18 ;
  char *tmp___21 ;
  char *tmp___24 ;
  char *__dyc_funcallvar_11 ;
  unsigned short const   **__dyc_funcallvar_12 ;
  unsigned short const   **__dyc_funcallvar_13 ;
  char *__dyc_funcallvar_14 ;
  char *__dyc_funcallvar_15 ;
  char *__dyc_funcallvar_16 ;
  char *__dyc_funcallvar_17 ;
  char *__dyc_funcallvar_18 ;
  char *__dyc_funcallvar_19 ;
  sds __dyc_funcallvar_20 ;

  {
  c = (char const   *)__dyc_read_ptr__char();
  _p = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_11 = __dyc_read_ptr__char();
  __dyc_funcallvar_12 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_13 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_14 = __dyc_read_ptr__char();
  __dyc_funcallvar_15 = __dyc_read_ptr__char();
  __dyc_funcallvar_16 = __dyc_read_ptr__char();
  __dyc_funcallvar_17 = __dyc_read_ptr__char();
  __dyc_funcallvar_18 = __dyc_read_ptr__char();
  __dyc_funcallvar_19 = __dyc_read_ptr__char();
  __dyc_funcallvar_20 = __dyc_read_ptr__char();
  newarg = 0;
  _l = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___9 = 0;
  tmp___12 = 0;
  tmp___15 = 0;
  tmp___18 = 0;
  tmp___21 = 0;
  tmp___24 = 0;
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

  tmp___9 = __dyc_funcallvar_14;
  if ((unsigned long )tmp___9 != (unsigned long )((void *)0)) {
    {

    }
    goto fmt_valid;
  }
  tmp___12 = __dyc_funcallvar_15;
  if ((unsigned long )tmp___12 != (unsigned long )((void *)0)) {
    {

    }
    goto fmt_valid;
  }
  if ((int const   )*(_p + 0) == 104) {
    if ((int const   )*(_p + 1) == 104) {
      _p += 2;
      if ((int const   )*_p != 0) {
        {
        tmp___15 = __dyc_funcallvar_16;
        }
        if ((unsigned long )tmp___15 != (unsigned long )((void *)0)) {
          {

          }
          goto fmt_valid;
        }
      }
      goto __dyc_dummy_label;
    }
  }
  if ((int const   )*(_p + 0) == 104) {
    _p ++;
    if ((int const   )*_p != 0) {
      {
      tmp___18 = __dyc_funcallvar_17;
      }
      if ((unsigned long )tmp___18 != (unsigned long )((void *)0)) {
        {

        }
        goto fmt_valid;
      }
    }
    goto __dyc_dummy_label;
  }
  if ((int const   )*(_p + 0) == 108) {
    if ((int const   )*(_p + 1) == 108) {
      _p += 2;
      if ((int const   )*_p != 0) {
        {
        tmp___21 = __dyc_funcallvar_18;
        }
        if ((unsigned long )tmp___21 != (unsigned long )((void *)0)) {
          {

          }
          goto fmt_valid;
        }
      }
      goto __dyc_dummy_label;
    }
  }
  if ((int const   )*(_p + 0) == 108) {
    _p ++;
    if ((int const   )*_p != 0) {
      {
      tmp___24 = __dyc_funcallvar_19;
      }
      if ((unsigned long )tmp___24 != (unsigned long )((void *)0)) {
        {

        }
        goto fmt_valid;
      }
    }
    goto __dyc_dummy_label;
  }

  goto __dyc_dummy_label;
  fmt_valid: 
  _l = (unsigned long )((_p + 1) - c);
  if (_l < sizeof(char [16]) - 2UL) {
    {

    _format[_l] = (char )'\000';
    newarg = __dyc_funcallvar_20;
    c = _p - 1;
    }
  }

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(c);
  __dyc_print_ptr__char(newarg);
}
}
