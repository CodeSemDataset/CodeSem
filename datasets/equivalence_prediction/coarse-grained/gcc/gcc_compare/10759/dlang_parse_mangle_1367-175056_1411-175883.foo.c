#include "../../include/dycfoo.h"
#include "../../include/d-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ int saved ;
  int tmp ;
  int tmp___0 ;
  char const   *mangled ;
  enum dlang_symbol_kinds kind ;
  char const   *__dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  char const   *__dyc_funcallvar_5 ;
  char const   *__dyc_funcallvar_6 ;
  char const   *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  char const   *__dyc_funcallvar_10 ;

  {
  mangled = (char const   *)__dyc_read_ptr__char();
  kind = (enum dlang_symbol_kinds )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_6 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_7 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = (char const   *)__dyc_read_ptr__char();
  saved = 0;
  tmp = 0;
  tmp___0 = 0;
  if ((unsigned long )mangled != (unsigned long )((void *)0)) {
    if ((int const   )*mangled == 90) {
      mangled ++;
    } else {
      if ((int const   )*mangled == 77) {
        mangled ++;
      }
      {

      mangled = __dyc_funcallvar_2;
      }
      if (mangled) {
        {
        tmp___0 = __dyc_funcallvar_3;
        }
        if (tmp___0) {
          {
          saved = __dyc_funcallvar_4;
          mangled = __dyc_funcallvar_5;
          mangled = __dyc_funcallvar_6;


          mangled = __dyc_funcallvar_7;

          tmp = __dyc_funcallvar_8;

          }
        }
      }
      {
      saved = __dyc_funcallvar_9;
      mangled = __dyc_funcallvar_10;


      }
    }
  }
  if ((int )kind == 0) {
    if ((unsigned long )mangled == (unsigned long )((void *)0)) {
      goto __dyc_dummy_label;
    } else {
      if ((int const   )*mangled != 0) {
        goto __dyc_dummy_label;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(saved);
  __dyc_printpre_byte(tmp);
}
}
