#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char c ;
  unsigned char *b ;
  char const   *p ;
  char const   *pend ;
  char *translate ;
  boolean had_char_class ;
  char str[7] ;
  int ch ;
  boolean is_alnum ;
  boolean is_alpha ;
  boolean is_blank ;
  boolean is_cntrl ;
  boolean is_digit ;
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
  size_t __s1_len___11 ;
  size_t __s2_len___11 ;
  int tmp___259 ;
  int tmp___264 ;
  int tmp___265 ;
  int tmp___266 ;
  int tmp___267 ;
  size_t __s1_len___12 ;
  size_t __s2_len___12 ;
  int tmp___277 ;
  int tmp___282 ;
  int tmp___283 ;
  int tmp___284 ;
  int tmp___285 ;
  size_t __s1_len___13 ;
  size_t __s2_len___13 ;
  int tmp___295 ;
  int tmp___300 ;
  int tmp___301 ;
  int tmp___302 ;
  int tmp___303 ;
  size_t __s1_len___14 ;
  size_t __s2_len___14 ;
  int tmp___313 ;
  int tmp___318 ;
  int tmp___319 ;
  int tmp___320 ;
  int tmp___321 ;
  size_t __s1_len___15 ;
  size_t __s2_len___15 ;
  int tmp___331 ;
  int tmp___336 ;
  int tmp___337 ;
  int tmp___338 ;
  int tmp___339 ;
  size_t __s1_len___16 ;
  size_t __s2_len___16 ;
  int tmp___349 ;
  int tmp___354 ;
  int tmp___355 ;
  int tmp___356 ;
  int tmp___357 ;
  size_t __s1_len___17 ;
  size_t __s2_len___17 ;
  int tmp___367 ;
  int tmp___372 ;
  int tmp___373 ;
  int tmp___374 ;
  int tmp___375 ;
  size_t __s1_len___18 ;
  size_t __s2_len___18 ;
  int tmp___385 ;
  int tmp___390 ;
  int tmp___391 ;
  int tmp___392 ;
  int tmp___393 ;
  size_t __s1_len___19 ;
  size_t __s2_len___19 ;
  int tmp___403 ;
  int tmp___408 ;
  int tmp___409 ;
  int tmp___410 ;
  int tmp___411 ;
  size_t __s1_len___20 ;
  size_t __s2_len___20 ;
  int tmp___421 ;
  int tmp___426 ;
  int tmp___427 ;
  int tmp___428 ;
  int tmp___429 ;
  size_t __s1_len___21 ;
  size_t __s2_len___21 ;
  int tmp___439 ;
  int tmp___444 ;
  int tmp___445 ;
  int tmp___446 ;
  int tmp___447 ;
  size_t __s1_len___22 ;
  size_t __s2_len___22 ;
  int tmp___457 ;
  int tmp___462 ;
  int tmp___463 ;
  int tmp___464 ;
  int tmp___465 ;
  char const   *tmp___466 ;
  unsigned short const   **tmp___467 ;
  unsigned short const   **tmp___468 ;
  unsigned short const   **tmp___469 ;
  unsigned short const   **tmp___470 ;
  unsigned short const   **tmp___471 ;
  unsigned short const   **tmp___472 ;
  unsigned short const   **tmp___473 ;
  unsigned short const   **tmp___474 ;
  unsigned short const   **tmp___475 ;
  unsigned short const   **tmp___476 ;
  unsigned short const   **tmp___477 ;
  unsigned short const   **tmp___478 ;
  unsigned short const   **tmp___479 ;
  unsigned short const   **tmp___480 ;
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
  int __dyc_funcallvar_77 ;
  int __dyc_funcallvar_78 ;
  int __dyc_funcallvar_79 ;
  int __dyc_funcallvar_80 ;
  int __dyc_funcallvar_81 ;
  int __dyc_funcallvar_82 ;
  int __dyc_funcallvar_83 ;
  int __dyc_funcallvar_84 ;
  int __dyc_funcallvar_85 ;
  int __dyc_funcallvar_86 ;
  int __dyc_funcallvar_87 ;
  int __dyc_funcallvar_88 ;
  int __dyc_funcallvar_89 ;
  int __dyc_funcallvar_90 ;
  int __dyc_funcallvar_91 ;
  int __dyc_funcallvar_92 ;
  int __dyc_funcallvar_93 ;
  int __dyc_funcallvar_94 ;
  int __dyc_funcallvar_95 ;
  int __dyc_funcallvar_96 ;
  int __dyc_funcallvar_97 ;
  int __dyc_funcallvar_98 ;
  int __dyc_funcallvar_99 ;
  int __dyc_funcallvar_100 ;
  int __dyc_funcallvar_101 ;
  int __dyc_funcallvar_102 ;
  int __dyc_funcallvar_103 ;
  int __dyc_funcallvar_104 ;
  int __dyc_funcallvar_105 ;
  int __dyc_funcallvar_106 ;
  int __dyc_funcallvar_107 ;
  int __dyc_funcallvar_108 ;
  int __dyc_funcallvar_109 ;
  int __dyc_funcallvar_110 ;
  int __dyc_funcallvar_111 ;
  int __dyc_funcallvar_112 ;
  int __dyc_funcallvar_113 ;
  int __dyc_funcallvar_114 ;
  int __dyc_funcallvar_115 ;
  int __dyc_funcallvar_116 ;
  int __dyc_funcallvar_117 ;
  int __dyc_funcallvar_118 ;
  int __dyc_funcallvar_119 ;
  int __dyc_funcallvar_120 ;
  int __dyc_funcallvar_121 ;
  int __dyc_funcallvar_122 ;
  int __dyc_funcallvar_123 ;
  int __dyc_funcallvar_124 ;
  int __dyc_funcallvar_125 ;
  int __dyc_funcallvar_126 ;
  int __dyc_funcallvar_127 ;
  int __dyc_funcallvar_128 ;
  int __dyc_funcallvar_129 ;
  int __dyc_funcallvar_130 ;
  int __dyc_funcallvar_131 ;
  int __dyc_funcallvar_132 ;
  int __dyc_funcallvar_133 ;
  int __dyc_funcallvar_134 ;
  int __dyc_funcallvar_135 ;
  int __dyc_funcallvar_136 ;
  unsigned short const   **__dyc_funcallvar_137 ;
  unsigned short const   **__dyc_funcallvar_138 ;
  unsigned short const   **__dyc_funcallvar_139 ;
  unsigned short const   **__dyc_funcallvar_140 ;
  unsigned short const   **__dyc_funcallvar_141 ;
  unsigned short const   **__dyc_funcallvar_142 ;
  unsigned short const   **__dyc_funcallvar_143 ;
  unsigned short const   **__dyc_funcallvar_144 ;
  unsigned short const   **__dyc_funcallvar_145 ;
  unsigned short const   **__dyc_funcallvar_146 ;
  unsigned short const   **__dyc_funcallvar_147 ;
  unsigned short const   **__dyc_funcallvar_148 ;
  unsigned short const   **__dyc_funcallvar_149 ;
  unsigned short const   **__dyc_funcallvar_150 ;

  {
  b = __dyc_read_ptr__char();
  p = (char const   *)__dyc_read_ptr__char();
  pend = (char const   *)__dyc_read_ptr__char();
  translate = (char *)__dyc_read_ptr__char();
  is_alnum = (boolean )__dyc_readpre_byte();
  is_alpha = (boolean )__dyc_readpre_byte();
  is_blank = (boolean )__dyc_readpre_byte();
  is_cntrl = (boolean )__dyc_readpre_byte();
  is_digit = (boolean )__dyc_readpre_byte();
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
  __dyc_funcallvar_77 = __dyc_readpre_byte();
  __dyc_funcallvar_78 = __dyc_readpre_byte();
  __dyc_funcallvar_79 = __dyc_readpre_byte();
  __dyc_funcallvar_80 = __dyc_readpre_byte();
  __dyc_funcallvar_81 = __dyc_readpre_byte();
  __dyc_funcallvar_82 = __dyc_readpre_byte();
  __dyc_funcallvar_83 = __dyc_readpre_byte();
  __dyc_funcallvar_84 = __dyc_readpre_byte();
  __dyc_funcallvar_85 = __dyc_readpre_byte();
  __dyc_funcallvar_86 = __dyc_readpre_byte();
  __dyc_funcallvar_87 = __dyc_readpre_byte();
  __dyc_funcallvar_88 = __dyc_readpre_byte();
  __dyc_funcallvar_89 = __dyc_readpre_byte();
  __dyc_funcallvar_90 = __dyc_readpre_byte();
  __dyc_funcallvar_91 = __dyc_readpre_byte();
  __dyc_funcallvar_92 = __dyc_readpre_byte();
  __dyc_funcallvar_93 = __dyc_readpre_byte();
  __dyc_funcallvar_94 = __dyc_readpre_byte();
  __dyc_funcallvar_95 = __dyc_readpre_byte();
  __dyc_funcallvar_96 = __dyc_readpre_byte();
  __dyc_funcallvar_97 = __dyc_readpre_byte();
  __dyc_funcallvar_98 = __dyc_readpre_byte();
  __dyc_funcallvar_99 = __dyc_readpre_byte();
  __dyc_funcallvar_100 = __dyc_readpre_byte();
  __dyc_funcallvar_101 = __dyc_readpre_byte();
  __dyc_funcallvar_102 = __dyc_readpre_byte();
  __dyc_funcallvar_103 = __dyc_readpre_byte();
  __dyc_funcallvar_104 = __dyc_readpre_byte();
  __dyc_funcallvar_105 = __dyc_readpre_byte();
  __dyc_funcallvar_106 = __dyc_readpre_byte();
  __dyc_funcallvar_107 = __dyc_readpre_byte();
  __dyc_funcallvar_108 = __dyc_readpre_byte();
  __dyc_funcallvar_109 = __dyc_readpre_byte();
  __dyc_funcallvar_110 = __dyc_readpre_byte();
  __dyc_funcallvar_111 = __dyc_readpre_byte();
  __dyc_funcallvar_112 = __dyc_readpre_byte();
  __dyc_funcallvar_113 = __dyc_readpre_byte();
  __dyc_funcallvar_114 = __dyc_readpre_byte();
  __dyc_funcallvar_115 = __dyc_readpre_byte();
  __dyc_funcallvar_116 = __dyc_readpre_byte();
  __dyc_funcallvar_117 = __dyc_readpre_byte();
  __dyc_funcallvar_118 = __dyc_readpre_byte();
  __dyc_funcallvar_119 = __dyc_readpre_byte();
  __dyc_funcallvar_120 = __dyc_readpre_byte();
  __dyc_funcallvar_121 = __dyc_readpre_byte();
  __dyc_funcallvar_122 = __dyc_readpre_byte();
  __dyc_funcallvar_123 = __dyc_readpre_byte();
  __dyc_funcallvar_124 = __dyc_readpre_byte();
  __dyc_funcallvar_125 = __dyc_readpre_byte();
  __dyc_funcallvar_126 = __dyc_readpre_byte();
  __dyc_funcallvar_127 = __dyc_readpre_byte();
  __dyc_funcallvar_128 = __dyc_readpre_byte();
  __dyc_funcallvar_129 = __dyc_readpre_byte();
  __dyc_funcallvar_130 = __dyc_readpre_byte();
  __dyc_funcallvar_131 = __dyc_readpre_byte();
  __dyc_funcallvar_132 = __dyc_readpre_byte();
  __dyc_funcallvar_133 = __dyc_readpre_byte();
  __dyc_funcallvar_134 = __dyc_readpre_byte();
  __dyc_funcallvar_135 = __dyc_readpre_byte();
  __dyc_funcallvar_136 = __dyc_readpre_byte();
  __dyc_funcallvar_137 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_138 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_139 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_140 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_141 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_142 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_143 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_144 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_145 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_146 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_147 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_148 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_149 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_150 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  c = 0;
  had_char_class = 0;
  ch = 0;
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
  __s1_len___11 = 0;
  __s2_len___11 = 0;
  tmp___259 = 0;
  tmp___264 = 0;
  tmp___265 = 0;
  tmp___266 = 0;
  tmp___267 = 0;
  __s1_len___12 = 0;
  __s2_len___12 = 0;
  tmp___277 = 0;
  tmp___282 = 0;
  tmp___283 = 0;
  tmp___284 = 0;
  tmp___285 = 0;
  __s1_len___13 = 0;
  __s2_len___13 = 0;
  tmp___295 = 0;
  tmp___300 = 0;
  tmp___301 = 0;
  tmp___302 = 0;
  tmp___303 = 0;
  __s1_len___14 = 0;
  __s2_len___14 = 0;
  tmp___313 = 0;
  tmp___318 = 0;
  tmp___319 = 0;
  tmp___320 = 0;
  tmp___321 = 0;
  __s1_len___15 = 0;
  __s2_len___15 = 0;
  tmp___331 = 0;
  tmp___336 = 0;
  tmp___337 = 0;
  tmp___338 = 0;
  tmp___339 = 0;
  __s1_len___16 = 0;
  __s2_len___16 = 0;
  tmp___349 = 0;
  tmp___354 = 0;
  tmp___355 = 0;
  tmp___356 = 0;
  tmp___357 = 0;
  __s1_len___17 = 0;
  __s2_len___17 = 0;
  tmp___367 = 0;
  tmp___372 = 0;
  tmp___373 = 0;
  tmp___374 = 0;
  tmp___375 = 0;
  __s1_len___18 = 0;
  __s2_len___18 = 0;
  tmp___385 = 0;
  tmp___390 = 0;
  tmp___391 = 0;
  tmp___392 = 0;
  tmp___393 = 0;
  __s1_len___19 = 0;
  __s2_len___19 = 0;
  tmp___403 = 0;
  tmp___408 = 0;
  tmp___409 = 0;
  tmp___410 = 0;
  tmp___411 = 0;
  __s1_len___20 = 0;
  __s2_len___20 = 0;
  tmp___421 = 0;
  tmp___426 = 0;
  tmp___427 = 0;
  tmp___428 = 0;
  tmp___429 = 0;
  __s1_len___21 = 0;
  __s2_len___21 = 0;
  tmp___439 = 0;
  tmp___444 = 0;
  tmp___445 = 0;
  tmp___446 = 0;
  tmp___447 = 0;
  __s1_len___22 = 0;
  __s2_len___22 = 0;
  tmp___457 = 0;
  tmp___462 = 0;
  tmp___463 = 0;
  tmp___464 = 0;
  tmp___465 = 0;
  tmp___466 = 0;
  tmp___467 = 0;
  tmp___468 = 0;
  tmp___469 = 0;
  tmp___470 = 0;
  tmp___471 = 0;
  tmp___472 = 0;
  tmp___473 = 0;
  tmp___474 = 0;
  tmp___475 = 0;
  tmp___476 = 0;
  tmp___477 = 0;
  tmp___478 = 0;
  tmp___479 = 0;
  tmp___480 = 0;
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
  if (0) {
    {
    tmp___265 = __dyc_funcallvar_77;
    __s1_len___11 = (unsigned long )tmp___265;
    tmp___266 = __dyc_funcallvar_78;
    __s2_len___11 = (unsigned long )tmp___266;
    }
    if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
      goto _L___28;
    } else {
      if (__s1_len___11 >= 4UL) {
        _L___28:  
        if (! ((unsigned long )((void const   *)("alpha" + 1)) - (unsigned long )((void const   *)"alpha") == 1UL)) {
          tmp___267 = 1;
        } else {
          if (__s2_len___11 >= 4UL) {
            tmp___267 = 1;
          } else {
            tmp___267 = 0;
          }
        }
      } else {
        tmp___267 = 0;
      }
    }
    if (tmp___267) {
      {
      tmp___259 = __dyc_funcallvar_79;
      }
    } else {
      {
      tmp___264 = __dyc_funcallvar_80;
      tmp___259 = tmp___264;
      }
    }
  } else {
    {
    tmp___264 = __dyc_funcallvar_81;
    tmp___259 = tmp___264;
    }
  }
  if (! (tmp___259 == 0)) {
    if (0) {
      {
      tmp___283 = __dyc_funcallvar_82;
      __s1_len___12 = (unsigned long )tmp___283;
      tmp___284 = __dyc_funcallvar_83;
      __s2_len___12 = (unsigned long )tmp___284;
      }
      if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
        goto _L___30;
      } else {
        if (__s1_len___12 >= 4UL) {
          _L___30:  
          if (! ((unsigned long )((void const   *)("upper" + 1)) - (unsigned long )((void const   *)"upper") == 1UL)) {
            tmp___285 = 1;
          } else {
            if (__s2_len___12 >= 4UL) {
              tmp___285 = 1;
            } else {
              tmp___285 = 0;
            }
          }
        } else {
          tmp___285 = 0;
        }
      }
      if (tmp___285) {
        {
        tmp___277 = __dyc_funcallvar_84;
        }
      } else {
        {
        tmp___282 = __dyc_funcallvar_85;
        tmp___277 = tmp___282;
        }
      }
    } else {
      {
      tmp___282 = __dyc_funcallvar_86;
      tmp___277 = tmp___282;
      }
    }
    if (! (tmp___277 == 0)) {
      if (0) {
        {
        tmp___301 = __dyc_funcallvar_87;
        __s1_len___13 = (unsigned long )tmp___301;
        tmp___302 = __dyc_funcallvar_88;
        __s2_len___13 = (unsigned long )tmp___302;
        }
        if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
          goto _L___32;
        } else {
          if (__s1_len___13 >= 4UL) {
            _L___32:  
            if (! ((unsigned long )((void const   *)("lower" + 1)) - (unsigned long )((void const   *)"lower") == 1UL)) {
              tmp___303 = 1;
            } else {
              if (__s2_len___13 >= 4UL) {
                tmp___303 = 1;
              } else {
                tmp___303 = 0;
              }
            }
          } else {
            tmp___303 = 0;
          }
        }
        if (tmp___303) {
          {
          tmp___295 = __dyc_funcallvar_89;
          }
        } else {
          {
          tmp___300 = __dyc_funcallvar_90;
          tmp___295 = tmp___300;
          }
        }
      } else {
        {
        tmp___300 = __dyc_funcallvar_91;
        tmp___295 = tmp___300;
        }
      }
      if (! (tmp___295 == 0)) {
        if (0) {
          {
          tmp___319 = __dyc_funcallvar_92;
          __s1_len___14 = (unsigned long )tmp___319;
          tmp___320 = __dyc_funcallvar_93;
          __s2_len___14 = (unsigned long )tmp___320;
          }
          if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
            goto _L___34;
          } else {
            if (__s1_len___14 >= 4UL) {
              _L___34:  
              if (! ((unsigned long )((void const   *)("digit" + 1)) - (unsigned long )((void const   *)"digit") == 1UL)) {
                tmp___321 = 1;
              } else {
                if (__s2_len___14 >= 4UL) {
                  tmp___321 = 1;
                } else {
                  tmp___321 = 0;
                }
              }
            } else {
              tmp___321 = 0;
            }
          }
          if (tmp___321) {
            {
            tmp___313 = __dyc_funcallvar_94;
            }
          } else {
            {
            tmp___318 = __dyc_funcallvar_95;
            tmp___313 = tmp___318;
            }
          }
        } else {
          {
          tmp___318 = __dyc_funcallvar_96;
          tmp___313 = tmp___318;
          }
        }
        if (! (tmp___313 == 0)) {
          if (0) {
            {
            tmp___337 = __dyc_funcallvar_97;
            __s1_len___15 = (unsigned long )tmp___337;
            tmp___338 = __dyc_funcallvar_98;
            __s2_len___15 = (unsigned long )tmp___338;
            }
            if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
              goto _L___36;
            } else {
              if (__s1_len___15 >= 4UL) {
                _L___36:  
                if (! ((unsigned long )((void const   *)("alnum" + 1)) - (unsigned long )((void const   *)"alnum") == 1UL)) {
                  tmp___339 = 1;
                } else {
                  if (__s2_len___15 >= 4UL) {
                    tmp___339 = 1;
                  } else {
                    tmp___339 = 0;
                  }
                }
              } else {
                tmp___339 = 0;
              }
            }
            if (tmp___339) {
              {
              tmp___331 = __dyc_funcallvar_99;
              }
            } else {
              {
              tmp___336 = __dyc_funcallvar_100;
              tmp___331 = tmp___336;
              }
            }
          } else {
            {
            tmp___336 = __dyc_funcallvar_101;
            tmp___331 = tmp___336;
            }
          }
          if (! (tmp___331 == 0)) {
            if (0) {
              {
              tmp___355 = __dyc_funcallvar_102;
              __s1_len___16 = (unsigned long )tmp___355;
              tmp___356 = __dyc_funcallvar_103;
              __s2_len___16 = (unsigned long )tmp___356;
              }
              if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
                goto _L___38;
              } else {
                if (__s1_len___16 >= 4UL) {
                  _L___38:  
                  if (! ((unsigned long )((void const   *)("xdigit" + 1)) - (unsigned long )((void const   *)"xdigit") == 1UL)) {
                    tmp___357 = 1;
                  } else {
                    if (__s2_len___16 >= 4UL) {
                      tmp___357 = 1;
                    } else {
                      tmp___357 = 0;
                    }
                  }
                } else {
                  tmp___357 = 0;
                }
              }
              if (tmp___357) {
                {
                tmp___349 = __dyc_funcallvar_104;
                }
              } else {
                {
                tmp___354 = __dyc_funcallvar_105;
                tmp___349 = tmp___354;
                }
              }
            } else {
              {
              tmp___354 = __dyc_funcallvar_106;
              tmp___349 = tmp___354;
              }
            }
            if (! (tmp___349 == 0)) {
              if (0) {
                {
                tmp___373 = __dyc_funcallvar_107;
                __s1_len___17 = (unsigned long )tmp___373;
                tmp___374 = __dyc_funcallvar_108;
                __s2_len___17 = (unsigned long )tmp___374;
                }
                if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
                  goto _L___40;
                } else {
                  if (__s1_len___17 >= 4UL) {
                    _L___40:  
                    if (! ((unsigned long )((void const   *)("space" + 1)) - (unsigned long )((void const   *)"space") == 1UL)) {
                      tmp___375 = 1;
                    } else {
                      if (__s2_len___17 >= 4UL) {
                        tmp___375 = 1;
                      } else {
                        tmp___375 = 0;
                      }
                    }
                  } else {
                    tmp___375 = 0;
                  }
                }
                if (tmp___375) {
                  {
                  tmp___367 = __dyc_funcallvar_109;
                  }
                } else {
                  {
                  tmp___372 = __dyc_funcallvar_110;
                  tmp___367 = tmp___372;
                  }
                }
              } else {
                {
                tmp___372 = __dyc_funcallvar_111;
                tmp___367 = tmp___372;
                }
              }
              if (! (tmp___367 == 0)) {
                if (0) {
                  {
                  tmp___391 = __dyc_funcallvar_112;
                  __s1_len___18 = (unsigned long )tmp___391;
                  tmp___392 = __dyc_funcallvar_113;
                  __s2_len___18 = (unsigned long )tmp___392;
                  }
                  if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
                    goto _L___42;
                  } else {
                    if (__s1_len___18 >= 4UL) {
                      _L___42:  
                      if (! ((unsigned long )((void const   *)("print" + 1)) - (unsigned long )((void const   *)"print") == 1UL)) {
                        tmp___393 = 1;
                      } else {
                        if (__s2_len___18 >= 4UL) {
                          tmp___393 = 1;
                        } else {
                          tmp___393 = 0;
                        }
                      }
                    } else {
                      tmp___393 = 0;
                    }
                  }
                  if (tmp___393) {
                    {
                    tmp___385 = __dyc_funcallvar_114;
                    }
                  } else {
                    {
                    tmp___390 = __dyc_funcallvar_115;
                    tmp___385 = tmp___390;
                    }
                  }
                } else {
                  {
                  tmp___390 = __dyc_funcallvar_116;
                  tmp___385 = tmp___390;
                  }
                }
                if (! (tmp___385 == 0)) {
                  if (0) {
                    {
                    tmp___409 = __dyc_funcallvar_117;
                    __s1_len___19 = (unsigned long )tmp___409;
                    tmp___410 = __dyc_funcallvar_118;
                    __s2_len___19 = (unsigned long )tmp___410;
                    }
                    if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
                      goto _L___44;
                    } else {
                      if (__s1_len___19 >= 4UL) {
                        _L___44:  
                        if (! ((unsigned long )((void const   *)("punct" + 1)) - (unsigned long )((void const   *)"punct") == 1UL)) {
                          tmp___411 = 1;
                        } else {
                          if (__s2_len___19 >= 4UL) {
                            tmp___411 = 1;
                          } else {
                            tmp___411 = 0;
                          }
                        }
                      } else {
                        tmp___411 = 0;
                      }
                    }
                    if (tmp___411) {
                      {
                      tmp___403 = __dyc_funcallvar_119;
                      }
                    } else {
                      {
                      tmp___408 = __dyc_funcallvar_120;
                      tmp___403 = tmp___408;
                      }
                    }
                  } else {
                    {
                    tmp___408 = __dyc_funcallvar_121;
                    tmp___403 = tmp___408;
                    }
                  }
                  if (! (tmp___403 == 0)) {
                    if (0) {
                      {
                      tmp___427 = __dyc_funcallvar_122;
                      __s1_len___20 = (unsigned long )tmp___427;
                      tmp___428 = __dyc_funcallvar_123;
                      __s2_len___20 = (unsigned long )tmp___428;
                      }
                      if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
                        goto _L___46;
                      } else {
                        if (__s1_len___20 >= 4UL) {
                          _L___46:  
                          if (! ((unsigned long )((void const   *)("graph" + 1)) - (unsigned long )((void const   *)"graph") == 1UL)) {
                            tmp___429 = 1;
                          } else {
                            if (__s2_len___20 >= 4UL) {
                              tmp___429 = 1;
                            } else {
                              tmp___429 = 0;
                            }
                          }
                        } else {
                          tmp___429 = 0;
                        }
                      }
                      if (tmp___429) {
                        {
                        tmp___421 = __dyc_funcallvar_124;
                        }
                      } else {
                        {
                        tmp___426 = __dyc_funcallvar_125;
                        tmp___421 = tmp___426;
                        }
                      }
                    } else {
                      {
                      tmp___426 = __dyc_funcallvar_126;
                      tmp___421 = tmp___426;
                      }
                    }
                    if (! (tmp___421 == 0)) {
                      if (0) {
                        {
                        tmp___445 = __dyc_funcallvar_127;
                        __s1_len___21 = (unsigned long )tmp___445;
                        tmp___446 = __dyc_funcallvar_128;
                        __s2_len___21 = (unsigned long )tmp___446;
                        }
                        if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
                          goto _L___48;
                        } else {
                          if (__s1_len___21 >= 4UL) {
                            _L___48:  
                            if (! ((unsigned long )((void const   *)("cntrl" + 1)) - (unsigned long )((void const   *)"cntrl") == 1UL)) {
                              tmp___447 = 1;
                            } else {
                              if (__s2_len___21 >= 4UL) {
                                tmp___447 = 1;
                              } else {
                                tmp___447 = 0;
                              }
                            }
                          } else {
                            tmp___447 = 0;
                          }
                        }
                        if (tmp___447) {
                          {
                          tmp___439 = __dyc_funcallvar_129;
                          }
                        } else {
                          {
                          tmp___444 = __dyc_funcallvar_130;
                          tmp___439 = tmp___444;
                          }
                        }
                      } else {
                        {
                        tmp___444 = __dyc_funcallvar_131;
                        tmp___439 = tmp___444;
                        }
                      }
                      if (! (tmp___439 == 0)) {
                        if (0) {
                          {
                          tmp___463 = __dyc_funcallvar_132;
                          __s1_len___22 = (unsigned long )tmp___463;
                          tmp___464 = __dyc_funcallvar_133;
                          __s2_len___22 = (unsigned long )tmp___464;
                          }
                          if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
                            goto _L___50;
                          } else {
                            if (__s1_len___22 >= 4UL) {
                              _L___50:  
                              if (! ((unsigned long )((void const   *)("blank" + 1)) - (unsigned long )((void const   *)"blank") == 1UL)) {
                                tmp___465 = 1;
                              } else {
                                if (__s2_len___22 >= 4UL) {
                                  tmp___465 = 1;
                                } else {
                                  tmp___465 = 0;
                                }
                              }
                            } else {
                              tmp___465 = 0;
                            }
                          }
                          if (tmp___465) {
                            {
                            tmp___457 = __dyc_funcallvar_134;
                            }
                          } else {
                            {
                            tmp___462 = __dyc_funcallvar_135;
                            tmp___457 = tmp___462;
                            }
                          }
                        } else {
                          {
                          tmp___462 = __dyc_funcallvar_136;
                          tmp___457 = tmp___462;
                          }
                        }
                        if (! (tmp___457 == 0)) {
                          {

                          }
                          goto __dyc_dummy_label;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  while (1) {
    while_37_continue:  ;
    if ((unsigned long )p == (unsigned long )pend) {
      goto __dyc_dummy_label;
    }
    tmp___466 = p;
    p ++;
    c = (unsigned char )*tmp___466;
    if (translate) {
      c = (unsigned char )*(translate + c);
    }
    goto while_37_break;
  }
  while_37_break:  ;
  if ((unsigned long )p == (unsigned long )pend) {
    {

    }
    goto __dyc_dummy_label;
  }
  ch = 0;
  while (1) {
    while_38_continue:  ;
    if (! (ch < 1 << 8)) {
      goto while_38_break;
    }
    if (is_alnum) {
      {
      tmp___467 = __dyc_funcallvar_137;
      }
      if ((int const   )*(*tmp___467 + ch) & 8) {
        *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
      } else {
        goto _L___53;
      }
    } else {
      _L___53:  
      if (is_alpha) {
        {
        tmp___468 = __dyc_funcallvar_138;
        }
        if ((int const   )*(*tmp___468 + ch) & 1024) {
          *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
        } else {
          goto _L___52;
        }
      } else {
        _L___52:  
        if (is_blank) {
          {
          tmp___469 = __dyc_funcallvar_139;
          }
          if ((int const   )*(*tmp___469 + ch) & 1) {
            *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
          } else {
            goto _L___51;
          }
        } else {
          _L___51:  
          if (is_cntrl) {
            {
            tmp___470 = __dyc_funcallvar_140;
            }
            if ((int const   )*(*tmp___470 + ch) & 2) {
              *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
            }
          }
        }
      }
    }
    if (is_digit) {
      {
      tmp___471 = __dyc_funcallvar_141;
      }
      if ((int const   )*(*tmp___471 + ch) & 2048) {
        *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
      } else {
        goto _L___56;
      }
    } else {
      _L___56:  
      if (is_graph) {
        {
        tmp___472 = __dyc_funcallvar_142;
        }
        if ((int const   )*(*tmp___472 + ch) & 32768) {
          *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
        } else {
          goto _L___55;
        }
      } else {
        _L___55:  
        if (is_lower) {
          {
          tmp___473 = __dyc_funcallvar_143;
          }
          if ((int const   )*(*tmp___473 + ch) & 512) {
            *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
          } else {
            goto _L___54;
          }
        } else {
          _L___54:  
          if (is_print) {
            {
            tmp___474 = __dyc_funcallvar_144;
            }
            if ((int const   )*(*tmp___474 + ch) & 16384) {
              *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
            }
          }
        }
      }
    }
    if (is_punct) {
      {
      tmp___475 = __dyc_funcallvar_145;
      }
      if ((int const   )*(*tmp___475 + ch) & 4) {
        *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
      } else {
        goto _L___59;
      }
    } else {
      _L___59:  
      if (is_space) {
        {
        tmp___476 = __dyc_funcallvar_146;
        }
        if ((int const   )*(*tmp___476 + ch) & 8192) {
          *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
        } else {
          goto _L___58;
        }
      } else {
        _L___58:  
        if (is_upper) {
          {
          tmp___477 = __dyc_funcallvar_147;
          }
          if ((int const   )*(*tmp___477 + ch) & 256) {
            *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
          } else {
            goto _L___57;
          }
        } else {
          _L___57:  
          if (is_xdigit) {
            {
            tmp___478 = __dyc_funcallvar_148;
            }
            if ((int const   )*(*tmp___478 + ch) & 4096) {
              *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
            }
          }
        }
      }
    }
    if (translate) {
      if (is_upper) {
        goto _L___60;
      } else {
        if (is_lower) {
          _L___60:  
          {
          tmp___479 = __dyc_funcallvar_149;
          }
          if ((int const   )*(*tmp___479 + ch) & 256) {
            *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
          } else {
            {
            tmp___480 = __dyc_funcallvar_150;
            }
            if ((int const   )*(*tmp___480 + ch) & 512) {
              *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
            }
          }
        }
      }
    }
    ch ++;
  }
  while_38_break:  ;
  had_char_class = (char)1;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(c);
  __dyc_printpre_byte(had_char_class);
  __dyc_printpre_byte(is_graph);
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
  __dyc_printpre_byte(__s1_len___11);
  __dyc_printpre_byte(__s2_len___11);
  __dyc_printpre_byte(__s1_len___12);
  __dyc_printpre_byte(__s2_len___12);
  __dyc_printpre_byte(__s1_len___13);
  __dyc_printpre_byte(__s2_len___13);
  __dyc_printpre_byte(__s1_len___14);
  __dyc_printpre_byte(__s2_len___14);
  __dyc_printpre_byte(__s1_len___15);
  __dyc_printpre_byte(__s2_len___15);
  __dyc_printpre_byte(__s1_len___16);
  __dyc_printpre_byte(__s2_len___16);
  __dyc_printpre_byte(__s1_len___17);
  __dyc_printpre_byte(__s2_len___17);
  __dyc_printpre_byte(__s1_len___18);
  __dyc_printpre_byte(__s2_len___18);
  __dyc_printpre_byte(__s1_len___19);
  __dyc_printpre_byte(__s2_len___19);
  __dyc_printpre_byte(__s1_len___20);
  __dyc_printpre_byte(__s2_len___20);
  __dyc_printpre_byte(__s1_len___21);
  __dyc_printpre_byte(__s2_len___21);
  __dyc_printpre_byte(__s1_len___22);
  __dyc_printpre_byte(__s2_len___22);
}
}
