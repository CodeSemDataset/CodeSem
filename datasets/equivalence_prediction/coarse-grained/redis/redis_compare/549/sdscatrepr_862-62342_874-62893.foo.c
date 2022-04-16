#include "../../include/dycfoo.h"
#include "../../include/sds.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned short const   **tmp ;
  sds s ;
  char const   *p ;
  sds __dyc_funcallvar_2 ;
  sds __dyc_funcallvar_3 ;
  sds __dyc_funcallvar_4 ;
  sds __dyc_funcallvar_5 ;
  sds __dyc_funcallvar_6 ;
  sds __dyc_funcallvar_7 ;
  unsigned short const   **__dyc_funcallvar_8 ;
  sds __dyc_funcallvar_9 ;
  sds __dyc_funcallvar_10 ;

  {
  p = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_read_ptr__char();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  __dyc_funcallvar_7 = __dyc_read_ptr__char();
  __dyc_funcallvar_8 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_9 = __dyc_read_ptr__char();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  tmp = 0;
  s = 0;
  s = __dyc_funcallvar_2;
  goto __dyc_dummy_label;
  s = __dyc_funcallvar_3;
  goto __dyc_dummy_label;
  s = __dyc_funcallvar_4;
  goto __dyc_dummy_label;
  s = __dyc_funcallvar_5;
  goto __dyc_dummy_label;
  s = __dyc_funcallvar_6;
  goto __dyc_dummy_label;
  s = __dyc_funcallvar_7;
  goto __dyc_dummy_label;
  tmp = __dyc_funcallvar_8;
  if ((int const   )*(*tmp + (int )*p) & 16384) {
    {
    s = __dyc_funcallvar_9;
    }
  } else {
    {
    s = __dyc_funcallvar_10;
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(s);
}
}
