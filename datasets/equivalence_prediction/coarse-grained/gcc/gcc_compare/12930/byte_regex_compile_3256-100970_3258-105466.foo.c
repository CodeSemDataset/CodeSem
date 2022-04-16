#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char str[7] ;
  boolean is_alpha ;
  int tmp___61 ;
  boolean is_blank ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___79 ;
  int tmp___84 ;
  int tmp___85 ;
  int tmp___86 ;
  int tmp___87 ;
  boolean is_cntrl ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___97 ;
  int tmp___102 ;
  int tmp___103 ;
  int tmp___104 ;
  int tmp___105 ;
  int __dyc_funcallvar_27 ;
  int __dyc_funcallvar_28 ;
  int __dyc_funcallvar_29 ;
  int __dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  int __dyc_funcallvar_32 ;
  int __dyc_funcallvar_33 ;
  int __dyc_funcallvar_34 ;
  int __dyc_funcallvar_35 ;
  int __dyc_funcallvar_36 ;

  {
  tmp___61 = __dyc_readpre_byte();
  __dyc_funcallvar_27 = __dyc_readpre_byte();
  __dyc_funcallvar_28 = __dyc_readpre_byte();
  __dyc_funcallvar_29 = __dyc_readpre_byte();
  __dyc_funcallvar_30 = __dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_readpre_byte();
  __dyc_funcallvar_33 = __dyc_readpre_byte();
  __dyc_funcallvar_34 = __dyc_readpre_byte();
  __dyc_funcallvar_35 = __dyc_readpre_byte();
  __dyc_funcallvar_36 = __dyc_readpre_byte();
  is_alpha = 0;
  is_blank = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___79 = 0;
  tmp___84 = 0;
  tmp___85 = 0;
  tmp___86 = 0;
  tmp___87 = 0;
  is_cntrl = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___97 = 0;
  tmp___102 = 0;
  tmp___103 = 0;
  tmp___104 = 0;
  tmp___105 = 0;
  is_alpha = (boolean )(tmp___61 == 0);
  if (0) {
    {
    tmp___85 = __dyc_funcallvar_27;
    __s1_len___1 = (unsigned long )tmp___85;
    tmp___86 = __dyc_funcallvar_28;
    __s2_len___1 = (unsigned long )tmp___86;
    }
    if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
      goto _L___8;
    } else {
      if (__s1_len___1 >= 4UL) {
        _L___8:  
        if (! ((unsigned long )((void const   *)("blank" + 1)) - (unsigned long )((void const   *)"blank") == 1UL)) {
          tmp___87 = 1;
        } else {
          if (__s2_len___1 >= 4UL) {
            tmp___87 = 1;
          } else {
            tmp___87 = 0;
          }
        }
      } else {
        tmp___87 = 0;
      }
    }
    if (tmp___87) {
      {
      tmp___79 = __dyc_funcallvar_29;
      }
    } else {
      {
      tmp___84 = __dyc_funcallvar_30;
      tmp___79 = tmp___84;
      }
    }
  } else {
    {
    tmp___84 = __dyc_funcallvar_31;
    tmp___79 = tmp___84;
    }
  }
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(is_alpha);
  __dyc_printpre_byte(is_blank);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
  __dyc_printpre_byte(is_cntrl);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
}
}
