#include "../../include/dycfoo.h"
#include "../../include/lua_cjson.i.hd.c.h"
void __dyc_foo(void) 
{ int tmp ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___116 ;
  int tmp___121 ;
  int tmp___122 ;
  int tmp___123 ;
  int tmp___124 ;
  json_parse_t *json ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;

  {
  tmp = __dyc_readpre_byte();
  json = __dyc_read_ptr__typdef_json_parse_t();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___116 = 0;
  tmp___121 = 0;
  tmp___122 = 0;
  tmp___123 = 0;
  tmp___124 = 0;
  if (tmp) {
    {

    }
    goto __dyc_dummy_label;
  }
  tmp___122 = __dyc_funcallvar_2;
  __s1_len___4 = (unsigned long )tmp___122;
  tmp___123 = __dyc_funcallvar_3;
  __s2_len___4 = (unsigned long )tmp___123;
  if (! ((unsigned long )((void const   *)(json->ptr + 1)) - (unsigned long )((void const   *)json->ptr) == 1UL)) {
    goto _L___10;
  } else {
    if (__s1_len___4 >= 4UL) {
      _L___10:  
      if (! ((unsigned long )((void const   *)("true" + 1)) - (unsigned long )((void const   *)"true") == 1UL)) {
        tmp___124 = 1;
      } else {
        if (__s2_len___4 >= 4UL) {
          tmp___124 = 1;
        } else {
          tmp___124 = 0;
        }
      }
    } else {
      tmp___124 = 0;
    }
  }
  if (tmp___124) {
    {
    tmp___116 = __dyc_funcallvar_4;
    }
  } else {
    {
    tmp___121 = __dyc_funcallvar_5;
    tmp___116 = tmp___121;
    }
  }
  tmp___121 = __dyc_funcallvar_6;
  tmp___116 = tmp___121;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
  __dyc_printpre_byte(tmp___116);
}
}
