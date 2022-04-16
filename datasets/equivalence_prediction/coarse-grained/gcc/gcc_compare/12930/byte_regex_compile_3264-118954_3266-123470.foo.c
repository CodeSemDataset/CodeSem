#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char str[7] ;
  boolean is_space ;
  int tmp___205 ;
  boolean is_upper ;
  size_t __s1_len___9 ;
  size_t __s2_len___9 ;
  int tmp___223 ;
  int tmp___228 ;
  int tmp___229 ;
  int tmp___230 ;
  int tmp___231 ;
  boolean is_xdigit ;
  size_t __s1_len___10 ;
  size_t __s2_len___10 ;
  int tmp___241 ;
  int tmp___246 ;
  int tmp___247 ;
  int tmp___248 ;
  int tmp___249 ;
  int __dyc_funcallvar_67 ;
  int __dyc_funcallvar_68 ;
  int __dyc_funcallvar_69 ;
  int __dyc_funcallvar_70 ;
  int __dyc_funcallvar_71 ;
  int __dyc_funcallvar_72 ;
  int __dyc_funcallvar_73 ;
  int __dyc_funcallvar_74 ;
  int __dyc_funcallvar_75 ;
  int __dyc_funcallvar_76 ;

  {
  tmp___205 = __dyc_readpre_byte();
  __dyc_funcallvar_67 = __dyc_readpre_byte();
  __dyc_funcallvar_68 = __dyc_readpre_byte();
  __dyc_funcallvar_69 = __dyc_readpre_byte();
  __dyc_funcallvar_70 = __dyc_readpre_byte();
  __dyc_funcallvar_71 = __dyc_readpre_byte();
  __dyc_funcallvar_72 = __dyc_readpre_byte();
  __dyc_funcallvar_73 = __dyc_readpre_byte();
  __dyc_funcallvar_74 = __dyc_readpre_byte();
  __dyc_funcallvar_75 = __dyc_readpre_byte();
  __dyc_funcallvar_76 = __dyc_readpre_byte();
  is_space = 0;
  is_upper = 0;
  __s1_len___9 = 0;
  __s2_len___9 = 0;
  tmp___223 = 0;
  tmp___228 = 0;
  tmp___229 = 0;
  tmp___230 = 0;
  tmp___231 = 0;
  is_xdigit = 0;
  __s1_len___10 = 0;
  __s2_len___10 = 0;
  tmp___241 = 0;
  tmp___246 = 0;
  tmp___247 = 0;
  tmp___248 = 0;
  tmp___249 = 0;
  is_space = (boolean )(tmp___205 == 0);
  if (0) {
    {
    tmp___229 = __dyc_funcallvar_67;
    __s1_len___9 = (unsigned long )tmp___229;
    tmp___230 = __dyc_funcallvar_68;
    __s2_len___9 = (unsigned long )tmp___230;
    }
    if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
      goto _L___24;
    } else {
      if (__s1_len___9 >= 4UL) {
        _L___24:  
        if (! ((unsigned long )((void const   *)("upper" + 1)) - (unsigned long )((void const   *)"upper") == 1UL)) {
          tmp___231 = 1;
        } else {
          if (__s2_len___9 >= 4UL) {
            tmp___231 = 1;
          } else {
            tmp___231 = 0;
          }
        }
      } else {
        tmp___231 = 0;
      }
    }
    if (tmp___231) {
      {
      tmp___223 = __dyc_funcallvar_69;
      }
    } else {
      {
      tmp___228 = __dyc_funcallvar_70;
      tmp___223 = tmp___228;
      }
    }
  } else {
    {
    tmp___228 = __dyc_funcallvar_71;
    tmp___223 = tmp___228;
    }
  }
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(is_space);
  __dyc_printpre_byte(is_upper);
  __dyc_printpre_byte(__s1_len___9);
  __dyc_printpre_byte(__s2_len___9);
  __dyc_printpre_byte(is_xdigit);
  __dyc_printpre_byte(__s1_len___10);
  __dyc_printpre_byte(__s2_len___10);
}
}
