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
  int tmp___64 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___74 ;
  int tmp___79 ;
  int tmp___80 ;
  int tmp___81 ;
  int tmp___82 ;
  int tmp___106 ;
  json_parse_t *json ;
  json_token_t *token ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
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
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
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
  tmp___64 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___74 = 0;
  tmp___79 = 0;
  tmp___80 = 0;
  tmp___81 = 0;
  tmp___82 = 0;
  tmp___106 = 0;
  tmp___106 = __dyc_funcallvar_7;
  if (0) {
    if (0) {
      {
      tmp___80 = __dyc_funcallvar_8;
      __s1_len___2 = (unsigned long )tmp___80;
      tmp___81 = __dyc_funcallvar_9;
      __s2_len___2 = (unsigned long )tmp___81;
      }
      if (! ((unsigned long )((void const   *)(json->ptr + 1)) - (unsigned long )((void const   *)json->ptr) == 1UL)) {
        goto _L___6;
      } else {
        if (__s1_len___2 >= 4UL) {
          _L___6:  
          if (! ((unsigned long )((void const   *)("false" + 1)) - (unsigned long )((void const   *)"false") == 1UL)) {
            tmp___82 = 1;
          } else {
            if (__s2_len___2 >= 4UL) {
              tmp___82 = 1;
            } else {
              tmp___82 = 0;
            }
          }
        } else {
          tmp___82 = 0;
        }
      }
      if (tmp___82) {
        {
        tmp___74 = __dyc_funcallvar_10;
        }
      } else {
        {
        tmp___79 = __dyc_funcallvar_11;
        tmp___74 = tmp___79;
        }
      }
    } else {
      {
      tmp___79 = __dyc_funcallvar_12;
      tmp___74 = tmp___79;
      }
    }
    tmp___64 = tmp___74;
  } else {
    {
    tmp___64 = __dyc_funcallvar_13;
    }
  }
  if (tmp___64) {
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
  } else {
    token->type = 6;
    token->value.boolean = 0;
    json->ptr += 5;
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
  __dyc_printpre_byte(tmp___106);
}
}
