#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char str[7] ;
  boolean is_alnum ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___43 ;
  int tmp___48 ;
  int tmp___49 ;
  int tmp___50 ;
  int tmp___51 ;
  boolean is_alpha ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___61 ;
  int tmp___66 ;
  int tmp___67 ;
  int tmp___68 ;
  int tmp___69 ;
  int __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  int __dyc_funcallvar_24 ;
  int __dyc_funcallvar_25 ;
  int __dyc_funcallvar_26 ;

  {
  __dyc_funcallvar_17 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_readpre_byte();
  __dyc_funcallvar_26 = __dyc_readpre_byte();
  is_alnum = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___43 = 0;
  tmp___48 = 0;
  tmp___49 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  is_alpha = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___61 = 0;
  tmp___66 = 0;
  tmp___67 = 0;
  tmp___68 = 0;
  tmp___69 = 0;
  str[0] = (char )'\000';
  if (0) {
    {
    tmp___49 = __dyc_funcallvar_17;
    __s1_len = (unsigned long )tmp___49;
    tmp___50 = __dyc_funcallvar_18;
    __s2_len = (unsigned long )tmp___50;
    }
    if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
      goto _L___4;
    } else {
      if (__s1_len >= 4UL) {
        _L___4:  
        if (! ((unsigned long )((void const   *)("alnum" + 1)) - (unsigned long )((void const   *)"alnum") == 1UL)) {
          tmp___51 = 1;
        } else {
          if (__s2_len >= 4UL) {
            tmp___51 = 1;
          } else {
            tmp___51 = 0;
          }
        }
      } else {
        tmp___51 = 0;
      }
    }
    if (tmp___51) {
      {
      tmp___43 = __dyc_funcallvar_19;
      }
    } else {
      {
      tmp___48 = __dyc_funcallvar_20;
      tmp___43 = tmp___48;
      }
    }
  } else {
    {
    tmp___48 = __dyc_funcallvar_21;
    tmp___43 = tmp___48;
    }
  }
  is_alnum = (boolean )(tmp___43 == 0);
  if (0) {
    {
    tmp___67 = __dyc_funcallvar_22;
    __s1_len___0 = (unsigned long )tmp___67;
    tmp___68 = __dyc_funcallvar_23;
    __s2_len___0 = (unsigned long )tmp___68;
    }
    if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
      goto _L___6;
    } else {
      if (__s1_len___0 >= 4UL) {
        _L___6:  
        if (! ((unsigned long )((void const   *)("alpha" + 1)) - (unsigned long )((void const   *)"alpha") == 1UL)) {
          tmp___69 = 1;
        } else {
          if (__s2_len___0 >= 4UL) {
            tmp___69 = 1;
          } else {
            tmp___69 = 0;
          }
        }
      } else {
        tmp___69 = 0;
      }
    }
    if (tmp___69) {
      {
      tmp___61 = __dyc_funcallvar_24;
      }
    } else {
      {
      tmp___66 = __dyc_funcallvar_25;
      tmp___61 = tmp___66;
      }
    }
  } else {
    {
    tmp___66 = __dyc_funcallvar_26;
    tmp___61 = tmp___66;
    }
  }
  is_alpha = (boolean )(tmp___61 == 0);
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(is_alnum);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_printpre_byte(is_alpha);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
}
}
