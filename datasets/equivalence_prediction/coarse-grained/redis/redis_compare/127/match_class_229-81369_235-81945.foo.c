#include "../../include/dycfoo.h"
#include "../../include/lstrlib.i.hd.c.h"
void __dyc_foo(void) 
{ int res ;
  unsigned short const   **tmp___3 ;
  unsigned short const   **tmp___4 ;
  unsigned short const   **tmp___5 ;
  unsigned short const   **tmp___6 ;
  unsigned short const   **tmp___7 ;
  unsigned short const   **tmp___8 ;
  unsigned short const   **tmp___9 ;
  int c ;
  unsigned short const   **__dyc_funcallvar_4 ;
  unsigned short const   **__dyc_funcallvar_5 ;
  unsigned short const   **__dyc_funcallvar_6 ;
  unsigned short const   **__dyc_funcallvar_7 ;
  unsigned short const   **__dyc_funcallvar_8 ;
  unsigned short const   **__dyc_funcallvar_9 ;

  {
  tmp___3 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  c = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_5 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_6 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_7 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_8 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_9 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  res = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  res = (int )((int const   )*(*tmp___3 + c) & 1024);
  goto __dyc_dummy_label;
  tmp___4 = __dyc_funcallvar_4;
  res = (int )((int const   )*(*tmp___4 + c) & 2);
  goto __dyc_dummy_label;
  tmp___5 = __dyc_funcallvar_5;
  res = (int )((int const   )*(*tmp___5 + c) & 2048);
  goto __dyc_dummy_label;
  tmp___6 = __dyc_funcallvar_6;
  res = (int )((int const   )*(*tmp___6 + c) & 512);
  goto __dyc_dummy_label;
  tmp___7 = __dyc_funcallvar_7;
  res = (int )((int const   )*(*tmp___7 + c) & 4);
  goto __dyc_dummy_label;
  tmp___8 = __dyc_funcallvar_8;
  res = (int )((int const   )*(*tmp___8 + c) & 8192);
  goto __dyc_dummy_label;
  tmp___9 = __dyc_funcallvar_9;
  res = (int )((int const   )*(*tmp___9 + c) & 256);
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(res);
}
}
