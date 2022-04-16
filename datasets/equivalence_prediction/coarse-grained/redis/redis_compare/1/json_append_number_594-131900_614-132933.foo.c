#include "../../include/dycfoo.h"
#include "../../include/lua_cjson.i.hd.c.h"
void __dyc_foo(void) 
{ int len ;
  int tmp___4 ;
  int tmp___11 ;
  int tmp___18 ;
  int tmp___25 ;
  int tmp___32 ;
  char *tmp___35 ;
  json_config_t *cfg ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
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
  char *__dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;

  {
  cfg = __dyc_read_ptr__typdef_json_config_t();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
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
  __dyc_funcallvar_17 = __dyc_read_ptr__char();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  len = 0;
  tmp___4 = 0;
  tmp___11 = 0;
  tmp___18 = 0;
  tmp___25 = 0;
  tmp___32 = 0;
  tmp___35 = 0;
  if (cfg->encode_invalid_numbers == 0) {
    if (sizeof(double ) == sizeof(float )) {
      {
      tmp___4 = __dyc_funcallvar_2;
      }
    } else {
      if (sizeof(double ) == sizeof(double )) {
        {
        tmp___4 = __dyc_funcallvar_3;
        }
      } else {
        {
        tmp___4 = __dyc_funcallvar_4;
        }
      }
    }
    if (tmp___4) {
      {

      }
    } else {
      if (sizeof(double ) == sizeof(float )) {
        {
        tmp___11 = __dyc_funcallvar_5;
        }
      } else {
        if (sizeof(double ) == sizeof(double )) {
          {
          tmp___11 = __dyc_funcallvar_6;
          }
        } else {
          {
          tmp___11 = __dyc_funcallvar_7;
          }
        }
      }
      if (tmp___11) {
        {

        }
      }
    }
  } else {
    if (cfg->encode_invalid_numbers == 1) {
      if (sizeof(double ) == sizeof(float )) {
        {
        tmp___18 = __dyc_funcallvar_8;
        }
      } else {
        if (sizeof(double ) == sizeof(double )) {
          {
          tmp___18 = __dyc_funcallvar_9;
          }
        } else {
          {
          tmp___18 = __dyc_funcallvar_10;
          }
        }
      }
      if (tmp___18) {
        {

        }
        goto __dyc_dummy_label;
      }
    } else {
      if (sizeof(double ) == sizeof(float )) {
        {
        tmp___25 = __dyc_funcallvar_11;
        }
      } else {
        if (sizeof(double ) == sizeof(double )) {
          {
          tmp___25 = __dyc_funcallvar_12;
          }
        } else {
          {
          tmp___25 = __dyc_funcallvar_13;
          }
        }
      }
      if (tmp___25) {
        {

        }
        goto __dyc_dummy_label;
      } else {
        if (sizeof(double ) == sizeof(float )) {
          {
          tmp___32 = __dyc_funcallvar_14;
          }
        } else {
          if (sizeof(double ) == sizeof(double )) {
            {
            tmp___32 = __dyc_funcallvar_15;
            }
          } else {
            {
            tmp___32 = __dyc_funcallvar_16;
            }
          }
        }
        if (tmp___32) {
          {

          }
          goto __dyc_dummy_label;
        }
      }
    }
  }

  tmp___35 = __dyc_funcallvar_17;
  len = __dyc_funcallvar_18;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len);
  __dyc_print_ptr__char(tmp___35);
}
}
