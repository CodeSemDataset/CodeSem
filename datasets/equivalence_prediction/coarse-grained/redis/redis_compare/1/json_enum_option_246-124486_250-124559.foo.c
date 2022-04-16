#include "../../include/dycfoo.h"
#include "../../include/lua_cjson.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *bool_options[3] ;
  int tmp ;
  int tmp___0 ;
  int *setting ;
  char const   **options ;
  int bool_true ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;

  {
  setting = __dyc_read_ptr__int();
  bool_true = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  tmp = 0;
  tmp___0 = 0;
  options = 0;
  options = bool_options;
  bool_true = 1;
  if (bool_true) {
    {
    tmp___0 = __dyc_funcallvar_2;
    }
    if (tmp___0 == 1) {
      {
      tmp = __dyc_funcallvar_3;
      *setting = tmp * bool_true;
      }
    } else {
      {
      *setting = __dyc_funcallvar_4;
      }
    }
  } else {
    {
    *setting = __dyc_funcallvar_5;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__ptr__char(options);
  __dyc_printpre_byte(bool_true);
}
}
