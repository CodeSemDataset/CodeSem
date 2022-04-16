#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char str[7] ;
  boolean is_alnum ;
  int tmp___43 ;
  boolean is_alpha ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___61 ;
  int tmp___66 ;
  int tmp___67 ;
  int tmp___68 ;
  int tmp___69 ;
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
  boolean is_xdigit ;
  size_t __s1_len___10 ;
  size_t __s2_len___10 ;
  int tmp___241 ;
  int tmp___246 ;
  int tmp___247 ;
  int tmp___248 ;
  int tmp___249 ;
  int __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  int __dyc_funcallvar_24 ;
  int __dyc_funcallvar_25 ;
  int __dyc_funcallvar_26 ;
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
  int __dyc_funcallvar_72 ;
  int __dyc_funcallvar_73 ;
  int __dyc_funcallvar_74 ;
  int __dyc_funcallvar_75 ;
  int __dyc_funcallvar_76 ;

  {
  tmp___43 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_readpre_byte();
  __dyc_funcallvar_26 = __dyc_readpre_byte();
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
  __dyc_funcallvar_72 = __dyc_readpre_byte();
  __dyc_funcallvar_73 = __dyc_readpre_byte();
  __dyc_funcallvar_74 = __dyc_readpre_byte();
  __dyc_funcallvar_75 = __dyc_readpre_byte();
  __dyc_funcallvar_76 = __dyc_readpre_byte();
  is_alnum = 0;
  is_alpha = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___61 = 0;
  tmp___66 = 0;
  tmp___67 = 0;
  tmp___68 = 0;
  tmp___69 = 0;
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
  is_xdigit = 0;
  __s1_len___10 = 0;
  __s2_len___10 = 0;
  tmp___241 = 0;
  tmp___246 = 0;
  tmp___247 = 0;
  tmp___248 = 0;
  tmp___249 = 0;
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
  __dyc_printpre_byte(is_alnum);
  __dyc_printpre_byte(is_alpha);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
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
  __dyc_printpre_byte(is_punct);
  __dyc_printpre_byte(__s1_len___7);
  __dyc_printpre_byte(__s2_len___7);
  __dyc_printpre_byte(is_space);
  __dyc_printpre_byte(__s1_len___8);
  __dyc_printpre_byte(__s2_len___8);
  __dyc_printpre_byte(is_upper);
  __dyc_printpre_byte(__s1_len___9);
  __dyc_printpre_byte(__s2_len___9);
  __dyc_printpre_byte(is_xdigit);
  __dyc_printpre_byte(__s1_len___10);
  __dyc_printpre_byte(__s2_len___10);
}
}
