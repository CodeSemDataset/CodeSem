#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char str[7] ;
  boolean is_graph ;
  int tmp___133 ;
  boolean is_lower ;
  size_t __s1_len___5 ;
  size_t __s2_len___5 ;
  int tmp___151 ;
  int tmp___156 ;
  int tmp___157 ;
  int tmp___158 ;
  int tmp___159 ;
  boolean is_print ;
  size_t __s1_len___6 ;
  size_t __s2_len___6 ;
  int tmp___169 ;
  int tmp___174 ;
  int tmp___175 ;
  int tmp___176 ;
  int tmp___177 ;
  int __dyc_funcallvar_47 ;
  int __dyc_funcallvar_48 ;
  int __dyc_funcallvar_49 ;
  int __dyc_funcallvar_50 ;
  int __dyc_funcallvar_51 ;
  int __dyc_funcallvar_52 ;
  int __dyc_funcallvar_53 ;
  int __dyc_funcallvar_54 ;
  int __dyc_funcallvar_55 ;
  int __dyc_funcallvar_56 ;

  {
  tmp___133 = __dyc_readpre_byte();
  __dyc_funcallvar_47 = __dyc_readpre_byte();
  __dyc_funcallvar_48 = __dyc_readpre_byte();
  __dyc_funcallvar_49 = __dyc_readpre_byte();
  __dyc_funcallvar_50 = __dyc_readpre_byte();
  __dyc_funcallvar_51 = __dyc_readpre_byte();
  __dyc_funcallvar_52 = __dyc_readpre_byte();
  __dyc_funcallvar_53 = __dyc_readpre_byte();
  __dyc_funcallvar_54 = __dyc_readpre_byte();
  __dyc_funcallvar_55 = __dyc_readpre_byte();
  __dyc_funcallvar_56 = __dyc_readpre_byte();
  is_graph = 0;
  is_lower = 0;
  __s1_len___5 = 0;
  __s2_len___5 = 0;
  tmp___151 = 0;
  tmp___156 = 0;
  tmp___157 = 0;
  tmp___158 = 0;
  tmp___159 = 0;
  is_print = 0;
  __s1_len___6 = 0;
  __s2_len___6 = 0;
  tmp___169 = 0;
  tmp___174 = 0;
  tmp___175 = 0;
  tmp___176 = 0;
  tmp___177 = 0;
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
  if (0) {
    {
    tmp___175 = __dyc_funcallvar_52;
    __s1_len___6 = (unsigned long )tmp___175;
    tmp___176 = __dyc_funcallvar_53;
    __s2_len___6 = (unsigned long )tmp___176;
    }
    if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
      goto _L___18;
    } else {
      if (__s1_len___6 >= 4UL) {
        _L___18:  
        if (! ((unsigned long )((void const   *)("print" + 1)) - (unsigned long )((void const   *)"print") == 1UL)) {
          tmp___177 = 1;
        } else {
          if (__s2_len___6 >= 4UL) {
            tmp___177 = 1;
          } else {
            tmp___177 = 0;
          }
        }
      } else {
        tmp___177 = 0;
      }
    }
    if (tmp___177) {
      {
      tmp___169 = __dyc_funcallvar_54;
      }
    } else {
      {
      tmp___174 = __dyc_funcallvar_55;
      tmp___169 = tmp___174;
      }
    }
  } else {
    {
    tmp___174 = __dyc_funcallvar_56;
    tmp___169 = tmp___174;
    }
  }
  is_print = (boolean )(tmp___169 == 0);
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(is_graph);
  __dyc_printpre_byte(is_lower);
  __dyc_printpre_byte(__s1_len___5);
  __dyc_printpre_byte(__s2_len___5);
  __dyc_printpre_byte(is_print);
  __dyc_printpre_byte(__s1_len___6);
  __dyc_printpre_byte(__s2_len___6);
}
}
