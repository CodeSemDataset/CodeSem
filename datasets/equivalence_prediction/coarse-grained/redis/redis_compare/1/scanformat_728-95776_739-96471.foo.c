#include "../../include/dycfoo.h"
#include "../../include/lstrlib.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *p ;
  unsigned short const   **tmp___1 ;
  unsigned short const   **tmp___2 ;
  unsigned short const   **tmp___3 ;
  unsigned short const   **tmp___4 ;
  unsigned short const   **tmp___5 ;
  char *tmp___6 ;
  char const   *strfrmt ;
  char *form ;
  unsigned short const   **__dyc_funcallvar_2 ;
  unsigned short const   **__dyc_funcallvar_3 ;
  unsigned short const   **__dyc_funcallvar_4 ;
  unsigned short const   **__dyc_funcallvar_5 ;
  unsigned short const   **__dyc_funcallvar_6 ;

  {
  p = (char const   *)__dyc_read_ptr__char();
  strfrmt = (char const   *)__dyc_read_ptr__char();
  form = __dyc_read_ptr__char();
  __dyc_funcallvar_2 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_3 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_4 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_5 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_6 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  if ((unsigned long )(p - strfrmt) >= sizeof("-+ #0")) {
    {

    }
  }
  tmp___1 = __dyc_funcallvar_2;
  if ((int const   )*(*tmp___1 + (int )((unsigned char )*p)) & 2048) {
    p ++;
  }
  tmp___2 = __dyc_funcallvar_3;
  if ((int const   )*(*tmp___2 + (int )((unsigned char )*p)) & 2048) {
    p ++;
  }
  if ((int const   )*p == 46) {
    {
    p ++;
    tmp___3 = __dyc_funcallvar_4;
    }
    if ((int const   )*(*tmp___3 + (int )((unsigned char )*p)) & 2048) {
      p ++;
    }
    {
    tmp___4 = __dyc_funcallvar_5;
    }
    if ((int const   )*(*tmp___4 + (int )((unsigned char )*p)) & 2048) {
      p ++;
    }
  }
  tmp___5 = __dyc_funcallvar_6;
  if ((int const   )*(*tmp___5 + (int )((unsigned char )*p)) & 2048) {
    {

    }
  }
  tmp___6 = form;
  form ++;
  *tmp___6 = (char )'%';
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(form);
}
}
