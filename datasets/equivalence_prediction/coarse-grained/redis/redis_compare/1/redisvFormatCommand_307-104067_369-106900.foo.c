#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *c ;
  sds newarg ;
  char _format[16] ;
  char const   *_p ;
  size_t _l ;
  char *tmp___12 ;
  char *tmp___15 ;
  char *tmp___18 ;
  char *tmp___21 ;
  char *tmp___24 ;
  char *__dyc_funcallvar_16 ;
  char *__dyc_funcallvar_17 ;
  char *__dyc_funcallvar_18 ;
  char *__dyc_funcallvar_19 ;
  sds __dyc_funcallvar_20 ;

  {
  c = (char const   *)__dyc_read_ptr__char();
  _p = (char const   *)__dyc_read_ptr__char();
  tmp___12 = __dyc_read_ptr__char();
  __dyc_funcallvar_16 = __dyc_read_ptr__char();
  __dyc_funcallvar_17 = __dyc_read_ptr__char();
  __dyc_funcallvar_18 = __dyc_read_ptr__char();
  __dyc_funcallvar_19 = __dyc_read_ptr__char();
  __dyc_funcallvar_20 = __dyc_read_ptr__char();
  newarg = 0;
  _l = 0;
  tmp___15 = 0;
  tmp___18 = 0;
  tmp___21 = 0;
  tmp___24 = 0;
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
