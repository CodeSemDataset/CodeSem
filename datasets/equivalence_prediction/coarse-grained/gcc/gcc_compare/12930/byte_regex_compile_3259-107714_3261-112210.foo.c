#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char str[7] ;
  boolean is_digit ;
  int tmp___115 ;
  boolean is_graph ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___133 ;
  int tmp___138 ;
  int tmp___139 ;
  int tmp___140 ;
  int tmp___141 ;
  boolean is_lower ;
  size_t __s1_len___5 ;
  size_t __s2_len___5 ;
  int tmp___151 ;
  int tmp___156 ;
  int tmp___157 ;
  int tmp___158 ;
  int tmp___159 ;
  int __dyc_funcallvar_42 ;
  int __dyc_funcallvar_43 ;
  int __dyc_funcallvar_44 ;
  int __dyc_funcallvar_45 ;
  int __dyc_funcallvar_46 ;
  int __dyc_funcallvar_47 ;
  int __dyc_funcallvar_48 ;
  int __dyc_funcallvar_49 ;
  int __dyc_funcallvar_50 ;
  int __dyc_funcallvar_51 ;

  {
  tmp___115 = __dyc_readpre_byte();
  __dyc_funcallvar_42 = __dyc_readpre_byte();
  __dyc_funcallvar_43 = __dyc_readpre_byte();
  __dyc_funcallvar_44 = __dyc_readpre_byte();
  __dyc_funcallvar_45 = __dyc_readpre_byte();
  __dyc_funcallvar_46 = __dyc_readpre_byte();
  __dyc_funcallvar_47 = __dyc_readpre_byte();
  __dyc_funcallvar_48 = __dyc_readpre_byte();
  __dyc_funcallvar_49 = __dyc_readpre_byte();
  __dyc_funcallvar_50 = __dyc_readpre_byte();
  __dyc_funcallvar_51 = __dyc_readpre_byte();
  is_digit = 0;
  is_graph = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___133 = 0;
  tmp___138 = 0;
  tmp___139 = 0;
  tmp___140 = 0;
  tmp___141 = 0;
  is_lower = 0;
  __s1_len___5 = 0;
  __s2_len___5 = 0;
  tmp___151 = 0;
  tmp___156 = 0;
  tmp___157 = 0;
  tmp___158 = 0;
  tmp___159 = 0;
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
  if (0) {
    {
    tmp___157 = __dyc_funcallvar_47;
    __s1_len___5 = (unsigned long )tmp___157;
    tmp___158 = __dyc_funcallvar_48;
    __s2_len___5 = (unsigned long )tmp___158;
    }
    if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
      goto _L___16;
    } else {
      if (__s1_len___5 >= 4UL) {
        _L___16:  
        if (! ((unsigned long )((void const   *)("lower" + 1)) - (unsigned long )((void const   *)"lower") == 1UL)) {
          tmp___159 = 1;
        } else {
          if (__s2_len___5 >= 4UL) {
            tmp___159 = 1;
          } else {
            tmp___159 = 0;
          }
        }
      } else {
        tmp___159 = 0;
      }
    }
    if (tmp___159) {
      {
      tmp___151 = __dyc_funcallvar_49;
      }
    } else {
      {
      tmp___156 = __dyc_funcallvar_50;
      tmp___151 = tmp___156;
      }
    }
  } else {
    {
    tmp___156 = __dyc_funcallvar_51;
    tmp___151 = tmp___156;
    }
  }
  is_lower = (boolean )(tmp___151 == 0);
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(is_digit);
  __dyc_printpre_byte(is_graph);
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
  __dyc_printpre_byte(is_lower);
  __dyc_printpre_byte(__s1_len___5);
  __dyc_printpre_byte(__s2_len___5);
}
}
