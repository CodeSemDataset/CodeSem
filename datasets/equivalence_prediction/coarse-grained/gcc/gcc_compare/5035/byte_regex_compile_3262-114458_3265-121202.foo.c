#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char str[7] ;
  boolean is_print ;
  int tmp___169 ;
  boolean is_punct ;
  size_t __s1_len___7 ;
  size_t __s2_len___7 ;
  int tmp___187 ;
  int tmp___192 ;
  int tmp___193 ;
  int tmp___194 ;
  int tmp___195 ;
  boolean is_space ;
  size_t __s1_len___8 ;
  size_t __s2_len___8 ;
  int tmp___205 ;
  int tmp___210 ;
  int tmp___211 ;
  int tmp___212 ;
  int tmp___213 ;
  boolean is_upper ;
  size_t __s1_len___9 ;
  size_t __s2_len___9 ;
  int tmp___223 ;
  int tmp___228 ;
  int tmp___229 ;
  int tmp___230 ;
  int tmp___231 ;
  int __dyc_funcallvar_57 ;
  int __dyc_funcallvar_58 ;
  int __dyc_funcallvar_59 ;
  int __dyc_funcallvar_60 ;
  int __dyc_funcallvar_61 ;
  int __dyc_funcallvar_62 ;
  int __dyc_funcallvar_63 ;
  int __dyc_funcallvar_64 ;
  int __dyc_funcallvar_65 ;
  int __dyc_funcallvar_66 ;
  int __dyc_funcallvar_67 ;
  int __dyc_funcallvar_68 ;
  int __dyc_funcallvar_69 ;
  int __dyc_funcallvar_70 ;
  int __dyc_funcallvar_71 ;

  {
  tmp___169 = __dyc_readpre_byte();
  __dyc_funcallvar_57 = __dyc_readpre_byte();
  __dyc_funcallvar_58 = __dyc_readpre_byte();
  __dyc_funcallvar_59 = __dyc_readpre_byte();
  __dyc_funcallvar_60 = __dyc_readpre_byte();
  __dyc_funcallvar_61 = __dyc_readpre_byte();
  __dyc_funcallvar_62 = __dyc_readpre_byte();
  __dyc_funcallvar_63 = __dyc_readpre_byte();
  __dyc_funcallvar_64 = __dyc_readpre_byte();
  __dyc_funcallvar_65 = __dyc_readpre_byte();
  __dyc_funcallvar_66 = __dyc_readpre_byte();
  __dyc_funcallvar_67 = __dyc_readpre_byte();
  __dyc_funcallvar_68 = __dyc_readpre_byte();
  __dyc_funcallvar_69 = __dyc_readpre_byte();
  __dyc_funcallvar_70 = __dyc_readpre_byte();
  __dyc_funcallvar_71 = __dyc_readpre_byte();
  is_print = 0;
  is_punct = 0;
  __s1_len___7 = 0;
  __s2_len___7 = 0;
  tmp___187 = 0;
  tmp___192 = 0;
  tmp___193 = 0;
  tmp___194 = 0;
  tmp___195 = 0;
  is_space = 0;
  __s1_len___8 = 0;
  __s2_len___8 = 0;
  tmp___205 = 0;
  tmp___210 = 0;
  tmp___211 = 0;
  tmp___212 = 0;
  tmp___213 = 0;
  is_upper = 0;
  __s1_len___9 = 0;
  __s2_len___9 = 0;
  tmp___223 = 0;
  tmp___228 = 0;
  tmp___229 = 0;
  tmp___230 = 0;
  tmp___231 = 0;
  is_print = (boolean )(tmp___169 == 0);
  if (0) {
    {
    tmp___193 = __dyc_funcallvar_57;
    __s1_len___7 = (unsigned long )tmp___193;
    tmp___194 = __dyc_funcallvar_58;
    __s2_len___7 = (unsigned long )tmp___194;
    }
    if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
      goto _L___20;
    } else {
      if (__s1_len___7 >= 4UL) {
        _L___20:  
        if (! ((unsigned long )((void const   *)("punct" + 1)) - (unsigned long )((void const   *)"punct") == 1UL)) {
          tmp___195 = 1;
        } else {
          if (__s2_len___7 >= 4UL) {
            tmp___195 = 1;
          } else {
            tmp___195 = 0;
          }
        }
      } else {
        tmp___195 = 0;
      }
    }
    if (tmp___195) {
      {
      tmp___187 = __dyc_funcallvar_59;
      }
    } else {
      {
      tmp___192 = __dyc_funcallvar_60;
      tmp___187 = tmp___192;
      }
    }
  } else {
    {
    tmp___192 = __dyc_funcallvar_61;
    tmp___187 = tmp___192;
    }
  }
  is_punct = (boolean )(tmp___187 == 0);
  if (0) {
    {
    tmp___211 = __dyc_funcallvar_62;
    __s1_len___8 = (unsigned long )tmp___211;
    tmp___212 = __dyc_funcallvar_63;
    __s2_len___8 = (unsigned long )tmp___212;
    }
    if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
      goto _L___22;
    } else {
      if (__s1_len___8 >= 4UL) {
        _L___22:  
        if (! ((unsigned long )((void const   *)("space" + 1)) - (unsigned long )((void const   *)"space") == 1UL)) {
          tmp___213 = 1;
        } else {
          if (__s2_len___8 >= 4UL) {
            tmp___213 = 1;
          } else {
            tmp___213 = 0;
          }
        }
      } else {
        tmp___213 = 0;
      }
    }
    if (tmp___213) {
      {
      tmp___205 = __dyc_funcallvar_64;
      }
    } else {
      {
      tmp___210 = __dyc_funcallvar_65;
      tmp___205 = tmp___210;
      }
    }
  } else {
    {
    tmp___210 = __dyc_funcallvar_66;
    tmp___205 = tmp___210;
    }
  }
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(is_print);
  __dyc_printpre_byte(is_punct);
  __dyc_printpre_byte(__s1_len___7);
  __dyc_printpre_byte(__s2_len___7);
  __dyc_printpre_byte(is_space);
  __dyc_printpre_byte(__s1_len___8);
  __dyc_printpre_byte(__s2_len___8);
  __dyc_printpre_byte(is_upper);
  __dyc_printpre_byte(__s1_len___9);
  __dyc_printpre_byte(__s2_len___9);
}
}
