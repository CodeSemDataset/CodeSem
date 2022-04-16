#include "../../include/dycfoo.h"
#include "../../include/lua_cjson.i.hd.c.h"
void __dyc_foo(void) 
{ json_parse_t json ;
  json_token_t token ;
  size_t json_len ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int __dyc_funcallvar_2 ;
  json_config_t *__dyc_funcallvar_3 ;
  char const   *__dyc_funcallvar_4 ;
  strbuf_t *__dyc_funcallvar_5 ;

  {
  token = __dyc_read_comp_47__anonstruct_json_token_t_32();
  json_len = (size_t )__dyc_readpre_byte();
  tmp = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_read_ptr__typdef_json_config_t();
  __dyc_funcallvar_4 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_read_ptr__typdef_strbuf_t();
  memset(& json, 0, sizeof(json_parse_t ));
  tmp___0 = 0;
  tmp___1 = 0;
  if (tmp == 1) {
    tmp___1 = 1;
  } else {
    {
    tmp___0 = __dyc_funcallvar_2;
    }
    if (tmp___0) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
  }
  json.cfg = __dyc_funcallvar_3;
  json.data = __dyc_funcallvar_4;
  json.current_depth = 0;
  json.ptr = json.data;
  if (json_len >= 2UL) {
    if (! *(json.data + 0)) {
      {

      }
    } else {
      if (! *(json.data + 1)) {
        {

        }
      }
    }
  }
  json.tmp = __dyc_funcallvar_5;



  if ((int )token.type != 10) {
    {

    }
  }

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_comp_46__anonstruct_json_parse_t_31(json);
  __dyc_printpre_byte(tmp___1);
}
}
