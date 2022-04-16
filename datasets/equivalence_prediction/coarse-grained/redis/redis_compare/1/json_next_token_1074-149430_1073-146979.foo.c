#include "../../include/dycfoo.h"
#include "../../include/lua_cjson.i.hd.c.h"
void __dyc_foo(void) 
{ int tmp___0 ;
  int tmp___22 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___32 ;
  int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  json_parse_t *json ;
  json_token_t *token ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  int __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;

  {
  json = __dyc_read_ptr__typdef_json_parse_t();
  token = __dyc_read_ptr__typdef_json_token_t();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  tmp___0 = 0;
  tmp___22 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___32 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  tmp___39 = 0;
  tmp___40 = 0;
  if (0) {
    if (0) {
      {
      tmp___38 = __dyc_funcallvar_14;
      __s1_len___0 = (unsigned long )tmp___38;
      tmp___39 = __dyc_funcallvar_15;
      __s2_len___0 = (unsigned long )tmp___39;
      }
      if (! ((unsigned long )((void const   *)(json->ptr + 1)) - (unsigned long )((void const   *)json->ptr) == 1UL)) {
        goto _L___2;
      } else {
        if (__s1_len___0 >= 4UL) {
          _L___2:  
          if (! ((unsigned long )((void const   *)("null" + 1)) - (unsigned long )((void const   *)"null") == 1UL)) {
            tmp___40 = 1;
          } else {
            if (__s2_len___0 >= 4UL) {
              tmp___40 = 1;
            } else {
              tmp___40 = 0;
            }
          }
        } else {
          tmp___40 = 0;
        }
      }
      if (tmp___40) {
        {
        tmp___32 = __dyc_funcallvar_16;
        }
      } else {
        {
        tmp___37 = __dyc_funcallvar_17;
        tmp___32 = tmp___37;
        }
      }
    } else {
      {
      tmp___37 = __dyc_funcallvar_18;
      tmp___32 = tmp___37;
      }
    }
    tmp___22 = tmp___32;
  } else {
    {
    tmp___22 = __dyc_funcallvar_19;
    }
  }
  if (tmp___22) {
    if ((json->cfg)->decode_invalid_numbers) {
      {
      tmp___0 = __dyc_funcallvar_20;
      }
      if (tmp___0) {
        {

        }
        goto __dyc_dummy_label;
      }
    }
  } else {
    token->type = 7;
    json->ptr += 4;
    goto __dyc_dummy_label;
  }
  token->type = 6;
  token->value.boolean = 0;
  json->ptr += 5;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
}
}
