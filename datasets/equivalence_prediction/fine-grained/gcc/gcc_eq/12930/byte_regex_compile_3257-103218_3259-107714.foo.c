#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char str[7] ;
  boolean is_blank ;
  int tmp___79 ;
  boolean is_cntrl ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___97 ;
  int tmp___102 ;
  int tmp___103 ;
  int tmp___104 ;
  int tmp___105 ;
  boolean is_digit ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___115 ;
  int tmp___120 ;
  int tmp___121 ;
  int tmp___122 ;
  int tmp___123 ;
  int __dyc_funcallvar_32 ;
  int __dyc_funcallvar_33 ;
  int __dyc_funcallvar_34 ;
  int __dyc_funcallvar_35 ;
  int __dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  int __dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;
  int __dyc_funcallvar_40 ;
  int __dyc_funcallvar_41 ;

  {
  tmp___79 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_readpre_byte();
  __dyc_funcallvar_33 = __dyc_readpre_byte();
  __dyc_funcallvar_34 = __dyc_readpre_byte();
  __dyc_funcallvar_35 = __dyc_readpre_byte();
  __dyc_funcallvar_36 = __dyc_readpre_byte();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_readpre_byte();
  __dyc_funcallvar_41 = __dyc_readpre_byte();
  is_blank = 0;
  is_cntrl = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___97 = 0;
  tmp___102 = 0;
  tmp___103 = 0;
  tmp___104 = 0;
  tmp___105 = 0;
  is_digit = 0;
  __s1_len___3 = 0;
  __s2_len___3 = 0;
  tmp___115 = 0;
  tmp___120 = 0;
  tmp___121 = 0;
  tmp___122 = 0;
  tmp___123 = 0;
  is_blank = (boolean )(tmp___79 == 0);
  if (0) {
    {
    tmp___103 = __dyc_funcallvar_32;
    __s1_len___2 = (unsigned long )tmp___103;
    tmp___104 = __dyc_funcallvar_33;
    __s2_len___2 = (unsigned long )tmp___104;
    }
    if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
      goto _L___10;
    } else {
      if (__s1_len___2 >= 4UL) {
        _L___10:  
        if (! ((unsigned long )((void const   *)("cntrl" + 1)) - (unsigned long )((void const   *)"cntrl") == 1UL)) {
          tmp___105 = 1;
        } else {
          if (__s2_len___2 >= 4UL) {
            tmp___105 = 1;
          } else {
            tmp___105 = 0;
          }
        }
      } else {
        tmp___105 = 0;
      }
    }
    if (tmp___105) {
      {
      tmp___97 = __dyc_funcallvar_34;
      }
    } else {
      {
      tmp___102 = __dyc_funcallvar_35;
      tmp___97 = tmp___102;
      }
    }
  } else {
    {
    tmp___102 = __dyc_funcallvar_36;
    tmp___97 = tmp___102;
    }
  }
  is_cntrl = (boolean )(tmp___97 == 0);
  if (0) {
    {
    tmp___121 = __dyc_funcallvar_37;
    __s1_len___3 = (unsigned long )tmp___121;
    tmp___122 = __dyc_funcallvar_38;
    __s2_len___3 = (unsigned long )tmp___122;
    }
    if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
      goto _L___12;
    } else {
      if (__s1_len___3 >= 4UL) {
        _L___12:  
        if (! ((unsigned long )((void const   *)("digit" + 1)) - (unsigned long )((void const   *)"digit") == 1UL)) {
          tmp___123 = 1;
        } else {
          if (__s2_len___3 >= 4UL) {
            tmp___123 = 1;
          } else {
            tmp___123 = 0;
          }
        }
      } else {
        tmp___123 = 0;
      }
    }
    if (tmp___123) {
      {
      tmp___115 = __dyc_funcallvar_39;
      }
    } else {
      {
      tmp___120 = __dyc_funcallvar_40;
      tmp___115 = tmp___120;
      }
    }
  } else {
    {
    tmp___120 = __dyc_funcallvar_41;
    tmp___115 = tmp___120;
    }
  }
  is_digit = (boolean )(tmp___115 == 0);
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(is_blank);
  __dyc_printpre_byte(is_cntrl);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
  __dyc_printpre_byte(is_digit);
  __dyc_printpre_byte(__s1_len___3);
  __dyc_printpre_byte(__s2_len___3);
}
}
