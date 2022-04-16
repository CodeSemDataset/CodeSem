#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char str[7] ;
  boolean is_cntrl ;
  int tmp___97 ;
  boolean is_digit ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___115 ;
  int tmp___120 ;
  int tmp___121 ;
  int tmp___122 ;
  int tmp___123 ;
  boolean is_graph ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___133 ;
  int tmp___138 ;
  int tmp___139 ;
  int tmp___140 ;
  int tmp___141 ;
  int __dyc_funcallvar_37 ;
  int __dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;
  int __dyc_funcallvar_40 ;
  int __dyc_funcallvar_41 ;
  int __dyc_funcallvar_42 ;
  int __dyc_funcallvar_43 ;
  int __dyc_funcallvar_44 ;
  int __dyc_funcallvar_45 ;
  int __dyc_funcallvar_46 ;

  {
  tmp___97 = __dyc_readpre_byte();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_readpre_byte();
  __dyc_funcallvar_41 = __dyc_readpre_byte();
  __dyc_funcallvar_42 = __dyc_readpre_byte();
  __dyc_funcallvar_43 = __dyc_readpre_byte();
  __dyc_funcallvar_44 = __dyc_readpre_byte();
  __dyc_funcallvar_45 = __dyc_readpre_byte();
  __dyc_funcallvar_46 = __dyc_readpre_byte();
  is_cntrl = 0;
  is_digit = 0;
  __s1_len___3 = 0;
  __s2_len___3 = 0;
  tmp___115 = 0;
  tmp___120 = 0;
  tmp___121 = 0;
  tmp___122 = 0;
  tmp___123 = 0;
  is_graph = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___133 = 0;
  tmp___138 = 0;
  tmp___139 = 0;
  tmp___140 = 0;
  tmp___141 = 0;
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
  if (0) {
    {
    tmp___139 = __dyc_funcallvar_42;
    __s1_len___4 = (unsigned long )tmp___139;
    tmp___140 = __dyc_funcallvar_43;
    __s2_len___4 = (unsigned long )tmp___140;
    }
    if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
      goto _L___14;
    } else {
      if (__s1_len___4 >= 4UL) {
        _L___14:  
        if (! ((unsigned long )((void const   *)("graph" + 1)) - (unsigned long )((void const   *)"graph") == 1UL)) {
          tmp___141 = 1;
        } else {
          if (__s2_len___4 >= 4UL) {
            tmp___141 = 1;
          } else {
            tmp___141 = 0;
          }
        }
      } else {
        tmp___141 = 0;
      }
    }
    if (tmp___141) {
      {
      tmp___133 = __dyc_funcallvar_44;
      }
    } else {
      {
      tmp___138 = __dyc_funcallvar_45;
      tmp___133 = tmp___138;
      }
    }
  } else {
    {
    tmp___138 = __dyc_funcallvar_46;
    tmp___133 = tmp___138;
    }
  }
  is_graph = (boolean )(tmp___133 == 0);
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(is_cntrl);
  __dyc_printpre_byte(is_digit);
  __dyc_printpre_byte(__s1_len___3);
  __dyc_printpre_byte(__s2_len___3);
  __dyc_printpre_byte(is_graph);
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
}
}
