#include "../../include/dycfoo.h"
#include "../../include/ldebug.i.hd.c.h"
void __dyc_foo(void) 
{ Proto *p ;
  Instruction i ;
  int a ;
  int b ;
  char const   *tmp___1 ;
  int k ;
  int u ;
  int k___0 ;
  char const   **name ;
  char const   *__dyc_funcallvar_4 ;
  char const   *__dyc_funcallvar_5 ;
  char const   *__dyc_funcallvar_6 ;

  {
  p = __dyc_read_ptr__typdef_Proto();
  i = (Instruction )__dyc_readpre_byte();
  a = __dyc_readpre_byte();
  b = __dyc_readpre_byte();
  name = (char const   **)__dyc_read_ptr__ptr__char();
  __dyc_funcallvar_4 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_5 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_6 = (char const   *)__dyc_read_ptr__char();
  tmp___1 = 0;
  k = 0;
  u = 0;
  k___0 = 0;
  if (b < a) {
    {
    tmp___1 = __dyc_funcallvar_4;
    }
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
  k = (int )((i >> 14) & ~ (4294967295U << 9));
  *name = __dyc_funcallvar_5;
  goto __dyc_dummy_label;
  switch_11_4:  
  u = (int )((i >> 23) & ~ (4294967295U << 9));
  if (p->upvalues) {
    *name = (char const   *)(*(p->upvalues + u) + 1);
  } else {
    *name = "?";
  }
  goto __dyc_dummy_label;
  k___0 = (int )((i >> 14) & ~ (4294967295U << 9));
  *name = __dyc_funcallvar_6;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(tmp___1);
  __dyc_printpre_byte(k);
  __dyc_printpre_byte(u);
  __dyc_printpre_byte(k___0);
}
}
