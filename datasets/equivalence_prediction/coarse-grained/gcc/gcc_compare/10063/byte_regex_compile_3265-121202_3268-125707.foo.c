#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char str[7] ;
  boolean is_upper ;
  int tmp___223 ;
  boolean is_xdigit ;
  size_t __s1_len___10 ;
  size_t __s2_len___10 ;
  int tmp___241 ;
  int tmp___246 ;
  int tmp___247 ;
  int tmp___248 ;
  int tmp___249 ;
  size_t __s1_len___11 ;
  size_t __s2_len___11 ;
  int tmp___259 ;
  int tmp___264 ;
  int tmp___265 ;
  int tmp___266 ;
  int tmp___267 ;
  int __dyc_funcallvar_72 ;
  int __dyc_funcallvar_73 ;
  int __dyc_funcallvar_74 ;
  int __dyc_funcallvar_75 ;
  int __dyc_funcallvar_76 ;
  int __dyc_funcallvar_77 ;
  int __dyc_funcallvar_78 ;
  int __dyc_funcallvar_79 ;
  int __dyc_funcallvar_80 ;
  int __dyc_funcallvar_81 ;

  {
  tmp___223 = __dyc_readpre_byte();
  __dyc_funcallvar_72 = __dyc_readpre_byte();
  __dyc_funcallvar_73 = __dyc_readpre_byte();
  __dyc_funcallvar_74 = __dyc_readpre_byte();
  __dyc_funcallvar_75 = __dyc_readpre_byte();
  __dyc_funcallvar_76 = __dyc_readpre_byte();
  __dyc_funcallvar_77 = __dyc_readpre_byte();
  __dyc_funcallvar_78 = __dyc_readpre_byte();
  __dyc_funcallvar_79 = __dyc_readpre_byte();
  __dyc_funcallvar_80 = __dyc_readpre_byte();
  __dyc_funcallvar_81 = __dyc_readpre_byte();
  is_upper = 0;
  is_xdigit = 0;
  __s1_len___10 = 0;
  __s2_len___10 = 0;
  tmp___241 = 0;
  tmp___246 = 0;
  tmp___247 = 0;
  tmp___248 = 0;
  tmp___249 = 0;
  __s1_len___11 = 0;
  __s2_len___11 = 0;
  tmp___259 = 0;
  tmp___264 = 0;
  tmp___265 = 0;
  tmp___266 = 0;
  tmp___267 = 0;
  is_upper = (boolean )(tmp___223 == 0);
  if (0) {
    {
    tmp___247 = __dyc_funcallvar_72;
    __s1_len___10 = (unsigned long )tmp___247;
    tmp___248 = __dyc_funcallvar_73;
    __s2_len___10 = (unsigned long )tmp___248;
    }
    if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
      goto _L___26;
    } else {
      if (__s1_len___10 >= 4UL) {
        _L___26:  
        if (! ((unsigned long )((void const   *)("xdigit" + 1)) - (unsigned long )((void const   *)"xdigit") == 1UL)) {
          tmp___249 = 1;
        } else {
          if (__s2_len___10 >= 4UL) {
            tmp___249 = 1;
          } else {
            tmp___249 = 0;
          }
        }
      } else {
        tmp___249 = 0;
      }
    }
    if (tmp___249) {
      {
      tmp___241 = __dyc_funcallvar_74;
      }
    } else {
      {
      tmp___246 = __dyc_funcallvar_75;
      tmp___241 = tmp___246;
      }
    }
  } else {
    {
    tmp___246 = __dyc_funcallvar_76;
    tmp___241 = tmp___246;
    }
  }
  is_xdigit = (boolean )(tmp___241 == 0);
  if (0) {
    {
    tmp___265 = __dyc_funcallvar_77;
    __s1_len___11 = (unsigned long )tmp___265;
    tmp___266 = __dyc_funcallvar_78;
    __s2_len___11 = (unsigned long )tmp___266;
    }
    if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
      goto _L___28;
    } else {
      if (__s1_len___11 >= 4UL) {
        _L___28:  
        if (! ((unsigned long )((void const   *)("alpha" + 1)) - (unsigned long )((void const   *)"alpha") == 1UL)) {
          tmp___267 = 1;
        } else {
          if (__s2_len___11 >= 4UL) {
            tmp___267 = 1;
          } else {
            tmp___267 = 0;
          }
        }
      } else {
        tmp___267 = 0;
      }
    }
    if (tmp___267) {
      {
      tmp___259 = __dyc_funcallvar_79;
      }
    } else {
      {
      tmp___264 = __dyc_funcallvar_80;
      tmp___259 = tmp___264;
      }
    }
  } else {
    {
    tmp___264 = __dyc_funcallvar_81;
    tmp___259 = tmp___264;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(is_upper);
  __dyc_printpre_byte(is_xdigit);
  __dyc_printpre_byte(__s1_len___10);
  __dyc_printpre_byte(__s2_len___10);
  __dyc_printpre_byte(__s1_len___11);
  __dyc_printpre_byte(__s2_len___11);
  __dyc_printpre_byte(tmp___259);
}
}
