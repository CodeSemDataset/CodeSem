#include "../../include/dycfoo.h"
#include "../../include/d-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned short const   _sch_istable[256] ;
  char const   *numptr ;
  size_t num ;
  size_t sztype ;
  int tmp ;
  int tmp___0 ;
  char const   *mangled ;
  char const   *__dyc_funcallvar_2 ;
  char const   *__dyc_funcallvar_3 ;
  char const   *__dyc_funcallvar_4 ;
  char const   *__dyc_funcallvar_5 ;
  char const   *__dyc_funcallvar_6 ;
  char const   *__dyc_funcallvar_7 ;
  char const   *__dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  char const   *__dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  char const   *__dyc_funcallvar_12 ;

  {
  mangled = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_2 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_3 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_4 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_5 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_6 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_7 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_8 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = (char const   *)__dyc_read_ptr__char();
  numptr = 0;
  num = 0;
  sztype = 0;
  tmp = 0;
  tmp___0 = 0;
  mangled ++;

  mangled = __dyc_funcallvar_2;

  goto __dyc_dummy_label;
  mangled ++;

  mangled = __dyc_funcallvar_3;

  goto __dyc_dummy_label;
  switch_10_78:  
  mangled ++;
  if ((int const   )*mangled == 103) {
    {
    mangled ++;

    mangled = __dyc_funcallvar_4;

    }
    goto __dyc_dummy_label;
  } else {
    if ((int const   )*mangled == 104) {
      {
      mangled ++;

      mangled = __dyc_funcallvar_5;

      }
      goto __dyc_dummy_label;
    } else {
      goto __dyc_dummy_label;
    }
  }
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(numptr);
  __dyc_printpre_byte(num);
  __dyc_printpre_byte(sztype);
  __dyc_print_ptr__char(mangled);
}
}
