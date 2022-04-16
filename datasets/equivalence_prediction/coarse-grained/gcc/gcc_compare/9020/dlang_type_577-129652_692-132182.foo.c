#include "../../include/dycfoo.h"
#include "../../include/d-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned short const   _sch_istable[256] ;
  char const   *numptr ;
  size_t num ;
  size_t sztype ;
  int tmp ;
  int tmp___0 ;
  char const   *tmp___1 ;
  size_t szmods ;
  int tmp___2 ;
  char const   *tmp___3 ;
  char const   *mangled ;
  char const   *__dyc_funcallvar_6 ;
  char const   *__dyc_funcallvar_7 ;
  char const   *__dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  char const   *__dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  char const   *__dyc_funcallvar_12 ;
  char const   *__dyc_funcallvar_13 ;
  char const   *__dyc_funcallvar_14 ;
  char const   *__dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  char const   *__dyc_funcallvar_17 ;
  char const   *__dyc_funcallvar_18 ;

  {
  mangled = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_6 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_7 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_8 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_13 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_14 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_15 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_18 = (char const   *)__dyc_read_ptr__char();
  numptr = 0;
  num = 0;
  sztype = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  szmods = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  mangled ++;
  mangled = __dyc_funcallvar_6;

  goto __dyc_dummy_label;
  switch_10_71:  
  num = (size_t )0;
  mangled ++;
  numptr = mangled;
  while (1) {
    while_11_continue:  ;
    if (! ((int const   )_sch_istable[(int const   )*mangled & 255] & 4)) {
      goto while_11_break;
    }
    num ++;
    mangled ++;
  }
  while_11_break:  ;
  mangled = __dyc_funcallvar_7;



  goto __dyc_dummy_label;
  mangled ++;

  mangled = __dyc_funcallvar_8;
  tmp = __dyc_funcallvar_9;
  sztype = (unsigned long )tmp;
  mangled = __dyc_funcallvar_10;




  goto __dyc_dummy_label;
  mangled ++;
  tmp___0 = __dyc_funcallvar_11;
  if (! tmp___0) {
    {
    mangled = __dyc_funcallvar_12;

    }
    goto __dyc_dummy_label;
  }
  mangled = __dyc_funcallvar_13;

  goto __dyc_dummy_label;
  mangled ++;
  tmp___1 = __dyc_funcallvar_14;
  goto __dyc_dummy_label;
  mangled ++;

  mangled = __dyc_funcallvar_15;
  tmp___2 = __dyc_funcallvar_16;
  szmods = (unsigned long )tmp___2;
  mangled = __dyc_funcallvar_17;



  goto __dyc_dummy_label;
  mangled ++;
  tmp___3 = __dyc_funcallvar_18;
  goto __dyc_dummy_label;
  mangled ++;

  goto __dyc_dummy_label;
  mangled ++;

  goto __dyc_dummy_label;
  mangled ++;

  goto __dyc_dummy_label;
  mangled ++;

  goto __dyc_dummy_label;
  mangled ++;

  goto __dyc_dummy_label;
  mangled ++;

  goto __dyc_dummy_label;
  mangled ++;

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(numptr);
  __dyc_printpre_byte(num);
  __dyc_printpre_byte(sztype);
  __dyc_print_ptr__char(tmp___1);
  __dyc_printpre_byte(szmods);
  __dyc_print_ptr__char(tmp___3);
  __dyc_print_ptr__char(mangled);
}
}
