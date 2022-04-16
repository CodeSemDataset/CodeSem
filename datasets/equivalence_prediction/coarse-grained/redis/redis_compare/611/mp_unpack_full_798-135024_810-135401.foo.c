#include "../../include/dycfoo.h"
#include "../../include/lua_cmsgpack.i.hd.c.h"
void __dyc_foo(void) 
{ size_t len ;
  char const   *s ;
  int decode_all ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int limit ;
  int offset ;
  char const   *__dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;

  {
  len = (size_t )__dyc_readpre_byte();
  tmp = __dyc_readpre_byte();
  limit = __dyc_readpre_byte();
  offset = __dyc_readpre_byte();
  __dyc_funcallvar_1 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  s = 0;
  decode_all = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  decode_all = tmp;
  s = __dyc_funcallvar_1;
  if (offset < 0) {
    {
    tmp___0 = __dyc_funcallvar_2;
    }
    goto __dyc_dummy_label;
  } else {
    if (limit < 0) {
      {
      tmp___0 = __dyc_funcallvar_3;
      }
      goto __dyc_dummy_label;
    } else {
      if ((size_t )offset > len) {
        {
        tmp___1 = __dyc_funcallvar_4;
        }
        goto __dyc_dummy_label;
      }
    }
  }
  if (decode_all) {
    limit = 2147483647;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(s);
  __dyc_printpre_byte(decode_all);
  __dyc_printpre_byte(tmp___0);
  __dyc_printpre_byte(tmp___1);
  __dyc_printpre_byte(limit);
}
}
