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
  __dyc_printpre_byte(is_alpha);
  __dyc_printpre_byte(is_blank);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
  __dyc_printpre_byte(is_cntrl);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
  __dyc_printpre_byte(is_digit);
  __dyc_printpre_byte(__s1_len___3);
  __dyc_printpre_byte(__s2_len___3);
  __dyc_printpre_byte(is_graph);
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
  __dyc_printpre_byte(is_lower);
  __dyc_printpre_byte(__s1_len___5);
  __dyc_printpre_byte(__s2_len___5);
  __dyc_printpre_byte(is_print);
  __dyc_printpre_byte(__s1_len___6);
  __dyc_printpre_byte(__s2_len___6);
}
}
