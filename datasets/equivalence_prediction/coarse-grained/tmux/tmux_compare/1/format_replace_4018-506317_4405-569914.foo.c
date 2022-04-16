#include "../../include/dycfoo.h"
#include "../../include/format.i.hd.c.h"
void __dyc_foo(void) 
{ struct format_tree *ft ;
  struct window_pane *wp ;
  char const   *errstr ;
  char const   *copy ;
  char const   *cp ;
  char const   *marker ;
  char const   *time_format ;
  char *copy0 ;
  char *condition ;
  char *found ;
  char *new ;
  char *value ;
  char *left ;
  char *right ;
  char c ;
  size_t valuelen ;
  int modifiers ;
  int limit ;
  int width ;
  int j ;
  struct format_modifier *list ;
  struct format_modifier *cmp ;
  struct format_modifier *search ;
  struct format_modifier **sub ;
  struct format_modifier *mexp ;
  struct format_modifier *fm ;
  u_int i ;
  u_int count ;
  u_int nsub ;
  int tmp ;
  void *tmp___0 ;
  u_int tmp___1 ;
  long long tmp___2 ;
  long long tmp___3 ;
  char *tmp___4 ;
  char *tmp___6 ;
  char *tmp___8 ;
  char *tmp___10 ;
  char *tmp___12 ;
  char *tmp___14 ;
  char *tmp___16 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___26 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___44 ;
  int tmp___49 ;
  int tmp___50 ;
  int tmp___51 ;
  int tmp___52 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___62 ;
  int tmp___67 ;
  int tmp___68 ;
  int tmp___69 ;
  int tmp___70 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___80 ;
  int tmp___85 ;
  int tmp___86 ;
  int tmp___87 ;
  int tmp___88 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___98 ;
  int tmp___103 ;
  int tmp___104 ;
  int tmp___105 ;
  int tmp___106 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___116 ;
  int tmp___121 ;
  int tmp___122 ;
  int tmp___123 ;
  int tmp___124 ;
  long long tmp___125 ;
  int tmp___126 ;
  int tmp___127 ;
  int tmp___128 ;
  int tmp___129 ;
  int tmp___130 ;
  size_t __s1_len___5 ;
  size_t __s2_len___5 ;
  int tmp___140 ;
  int tmp___145 ;
  int tmp___146 ;
  int tmp___147 ;
  int tmp___148 ;
  size_t __s1_len___6 ;
  size_t __s2_len___6 ;
  int tmp___158 ;
  int tmp___163 ;
  int tmp___164 ;
  int tmp___165 ;
  int tmp___166 ;
  size_t __s1_len___7 ;
  size_t __s2_len___7 ;
  int tmp___176 ;
  int tmp___181 ;
  int tmp___182 ;
  int tmp___183 ;
  int tmp___184 ;
  size_t __s1_len___8 ;
  size_t __s2_len___8 ;
  int tmp___194 ;
  int tmp___199 ;
  int tmp___200 ;
  int tmp___201 ;
  int tmp___202 ;
  size_t __s1_len___9 ;
  size_t __s2_len___9 ;
  int tmp___212 ;
  int tmp___217 ;
  int tmp___218 ;
  int tmp___219 ;
  int tmp___220 ;
  size_t __s1_len___10 ;
  size_t __s2_len___10 ;
  int tmp___230 ;
  int tmp___235 ;
  int tmp___236 ;
  int tmp___237 ;
  int tmp___238 ;
  size_t __s1_len___11 ;
  size_t __s2_len___11 ;
  int tmp___248 ;
  int tmp___253 ;
  int tmp___254 ;
  int tmp___255 ;
  int tmp___256 ;
  size_t __s1_len___12 ;
  size_t __s2_len___12 ;
  int tmp___266 ;
  int tmp___271 ;
  int tmp___272 ;
  int tmp___273 ;
  int tmp___274 ;
  size_t __s1_len___13 ;
  size_t __s2_len___13 ;
  int tmp___284 ;
  int tmp___289 ;
  int tmp___290 ;
  int tmp___291 ;
  int tmp___292 ;
  size_t __s1_len___14 ;
  size_t __s2_len___14 ;
  int tmp___302 ;
  int tmp___307 ;
  int tmp___308 ;
  int tmp___309 ;
  int tmp___310 ;
  size_t __s1_len___15 ;
  size_t __s2_len___15 ;
  int tmp___320 ;
  int tmp___325 ;
  int tmp___326 ;
  int tmp___327 ;
  int tmp___328 ;
  size_t __s1_len___16 ;
  size_t __s2_len___16 ;
  int tmp___338 ;
  int tmp___343 ;
  int tmp___344 ;
  int tmp___345 ;
  int tmp___346 ;
  size_t __s1_len___17 ;
  size_t __s2_len___17 ;
  int tmp___356 ;
  int tmp___361 ;
  int tmp___362 ;
  int tmp___363 ;
  int tmp___364 ;
  size_t __s1_len___18 ;
  size_t __s2_len___18 ;
  int tmp___374 ;
  int tmp___379 ;
  int tmp___380 ;
  int tmp___381 ;
  int tmp___382 ;
  size_t __s1_len___19 ;
  size_t __s2_len___19 ;
  int tmp___392 ;
  int tmp___397 ;
  int tmp___398 ;
  int tmp___399 ;
  int tmp___400 ;
  size_t __s1_len___20 ;
  size_t __s2_len___20 ;
  int tmp___410 ;
  int tmp___415 ;
  int tmp___416 ;
  int tmp___417 ;
  int tmp___418 ;
  int tmp___419 ;
  int tmp___420 ;
  char *tmp___421 ;
  size_t __s1_len___21 ;
  size_t __s2_len___21 ;
  int tmp___431 ;
  int tmp___436 ;
  int tmp___437 ;
  int tmp___438 ;
  int tmp___439 ;
  size_t __s1_len___22 ;
  size_t __s2_len___22 ;
  int tmp___449 ;
  int tmp___454 ;
  int tmp___455 ;
  int tmp___456 ;
  int tmp___457 ;
  size_t tmp___458 ;
  u_int tmp___459 ;
  struct format_expand_state *es ;
  char *__dyc_funcallvar_1 ;
  struct format_modifier *__dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  void *__dyc_funcallvar_4 ;
  long long __dyc_funcallvar_5 ;
  long long __dyc_funcallvar_6 ;
  char *__dyc_funcallvar_7 ;
  char *__dyc_funcallvar_8 ;
  char *__dyc_funcallvar_9 ;
  char *__dyc_funcallvar_10 ;
  char *__dyc_funcallvar_11 ;
  char *__dyc_funcallvar_12 ;
  char *__dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
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
  char *__dyc_funcallvar_44 ;
  char *__dyc_funcallvar_45 ;
  long long __dyc_funcallvar_46 ;
  char *__dyc_funcallvar_47 ;
  char *__dyc_funcallvar_48 ;
  char *__dyc_funcallvar_49 ;
  char *__dyc_funcallvar_50 ;
  char *__dyc_funcallvar_51 ;
  char *__dyc_funcallvar_52 ;
  char *__dyc_funcallvar_53 ;
  char *__dyc_funcallvar_54 ;
  char *__dyc_funcallvar_55 ;
  int __dyc_funcallvar_56 ;
  int __dyc_funcallvar_57 ;
  int __dyc_funcallvar_58 ;
  int __dyc_funcallvar_59 ;
  int __dyc_funcallvar_60 ;
  int __dyc_funcallvar_61 ;
  int __dyc_funcallvar_62 ;
  char *__dyc_funcallvar_63 ;
  int __dyc_funcallvar_64 ;
  char *__dyc_funcallvar_65 ;
  char *__dyc_funcallvar_66 ;
  int __dyc_funcallvar_67 ;
  int __dyc_funcallvar_68 ;
  int __dyc_funcallvar_69 ;
  int __dyc_funcallvar_70 ;
  int __dyc_funcallvar_71 ;
  int __dyc_funcallvar_72 ;
  int __dyc_funcallvar_73 ;
  char *__dyc_funcallvar_74 ;
  char *__dyc_funcallvar_75 ;
  char *__dyc_funcallvar_76 ;
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
  char *__dyc_funcallvar_87 ;
  char *__dyc_funcallvar_88 ;
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
  char *__dyc_funcallvar_99 ;
  char *__dyc_funcallvar_100 ;
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
  char *__dyc_funcallvar_111 ;
  char *__dyc_funcallvar_112 ;
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
  char *__dyc_funcallvar_123 ;
  char *__dyc_funcallvar_124 ;
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
  char *__dyc_funcallvar_135 ;
  char *__dyc_funcallvar_136 ;
  int __dyc_funcallvar_137 ;
  int __dyc_funcallvar_138 ;
  int __dyc_funcallvar_139 ;
  int __dyc_funcallvar_140 ;
  int __dyc_funcallvar_141 ;
  int __dyc_funcallvar_142 ;
  int __dyc_funcallvar_143 ;
  int __dyc_funcallvar_144 ;
  int __dyc_funcallvar_145 ;
  int __dyc_funcallvar_146 ;
  char *__dyc_funcallvar_147 ;
  char *__dyc_funcallvar_148 ;
  int __dyc_funcallvar_149 ;
  int __dyc_funcallvar_150 ;
  int __dyc_funcallvar_151 ;
  int __dyc_funcallvar_152 ;
  int __dyc_funcallvar_153 ;
  char *__dyc_funcallvar_154 ;
  char const   *__dyc_funcallvar_155 ;
  char *__dyc_funcallvar_156 ;
  char *__dyc_funcallvar_157 ;
  char *__dyc_funcallvar_158 ;
  int __dyc_funcallvar_159 ;
  int __dyc_funcallvar_160 ;
  int __dyc_funcallvar_161 ;
  int __dyc_funcallvar_162 ;
  int __dyc_funcallvar_163 ;
  char *__dyc_funcallvar_164 ;
  int __dyc_funcallvar_165 ;
  int __dyc_funcallvar_166 ;
  char *__dyc_funcallvar_167 ;
  char *__dyc_funcallvar_168 ;
  char *__dyc_funcallvar_169 ;
  char *__dyc_funcallvar_170 ;
  char *__dyc_funcallvar_171 ;
  char *__dyc_funcallvar_172 ;
  char *__dyc_funcallvar_173 ;
  char *__dyc_funcallvar_174 ;
  char *__dyc_funcallvar_175 ;
  char *__dyc_funcallvar_176 ;
  char *__dyc_funcallvar_177 ;
  char *__dyc_funcallvar_178 ;
  char *__dyc_funcallvar_179 ;
  char *__dyc_funcallvar_180 ;
  int __dyc_funcallvar_181 ;
  int __dyc_funcallvar_182 ;
  int __dyc_funcallvar_183 ;
  int __dyc_funcallvar_184 ;
  int __dyc_funcallvar_185 ;
  char *__dyc_funcallvar_186 ;
  int __dyc_funcallvar_187 ;
  int __dyc_funcallvar_188 ;
  int __dyc_funcallvar_189 ;
  int __dyc_funcallvar_190 ;
  int __dyc_funcallvar_191 ;
  char *__dyc_funcallvar_192 ;
  char *__dyc_funcallvar_193 ;
  size_t __dyc_funcallvar_194 ;
  u_int __dyc_funcallvar_195 ;
  size_t __dyc_funcallvar_196 ;

  {
  errstr = (char const   *)__dyc_read_ptr__char();
  new = (char *)__dyc_read_ptr__char();
  value = (char *)__dyc_read_ptr__char();
  left = (char *)__dyc_read_ptr__char();
  right = (char *)__dyc_read_ptr__char();
  count = (u_int )__dyc_readpre_byte();
  es = __dyc_read_ptr__comp_305format_expand_state();
  __dyc_funcallvar_1 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_read_ptr__comp_303format_modifier();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__void();
  __dyc_funcallvar_5 = (long long )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (long long )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_8 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_9 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_10 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_11 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_12 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_13 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
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
  __dyc_funcallvar_44 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_45 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_46 = (long long )__dyc_readpre_byte();
  __dyc_funcallvar_47 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_48 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_49 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_50 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_51 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_52 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_53 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_54 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_55 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_56 = __dyc_readpre_byte();
  __dyc_funcallvar_57 = __dyc_readpre_byte();
  __dyc_funcallvar_58 = __dyc_readpre_byte();
  __dyc_funcallvar_59 = __dyc_readpre_byte();
  __dyc_funcallvar_60 = __dyc_readpre_byte();
  __dyc_funcallvar_61 = __dyc_readpre_byte();
  __dyc_funcallvar_62 = __dyc_readpre_byte();
  __dyc_funcallvar_63 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_64 = __dyc_readpre_byte();
  __dyc_funcallvar_65 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_66 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_67 = __dyc_readpre_byte();
  __dyc_funcallvar_68 = __dyc_readpre_byte();
  __dyc_funcallvar_69 = __dyc_readpre_byte();
  __dyc_funcallvar_70 = __dyc_readpre_byte();
  __dyc_funcallvar_71 = __dyc_readpre_byte();
  __dyc_funcallvar_72 = __dyc_readpre_byte();
  __dyc_funcallvar_73 = __dyc_readpre_byte();
  __dyc_funcallvar_74 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_75 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_76 = (char *)__dyc_read_ptr__char();
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
  __dyc_funcallvar_87 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_88 = (char *)__dyc_read_ptr__char();
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
  __dyc_funcallvar_99 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_100 = (char *)__dyc_read_ptr__char();
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
  __dyc_funcallvar_111 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_112 = (char *)__dyc_read_ptr__char();
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
  __dyc_funcallvar_123 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_124 = (char *)__dyc_read_ptr__char();
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
  __dyc_funcallvar_135 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_136 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_137 = __dyc_readpre_byte();
  __dyc_funcallvar_138 = __dyc_readpre_byte();
  __dyc_funcallvar_139 = __dyc_readpre_byte();
  __dyc_funcallvar_140 = __dyc_readpre_byte();
  __dyc_funcallvar_141 = __dyc_readpre_byte();
  __dyc_funcallvar_142 = __dyc_readpre_byte();
  __dyc_funcallvar_143 = __dyc_readpre_byte();
  __dyc_funcallvar_144 = __dyc_readpre_byte();
  __dyc_funcallvar_145 = __dyc_readpre_byte();
  __dyc_funcallvar_146 = __dyc_readpre_byte();
  __dyc_funcallvar_147 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_148 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_149 = __dyc_readpre_byte();
  __dyc_funcallvar_150 = __dyc_readpre_byte();
  __dyc_funcallvar_151 = __dyc_readpre_byte();
  __dyc_funcallvar_152 = __dyc_readpre_byte();
  __dyc_funcallvar_153 = __dyc_readpre_byte();
  __dyc_funcallvar_154 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_155 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_156 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_157 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_158 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_159 = __dyc_readpre_byte();
  __dyc_funcallvar_160 = __dyc_readpre_byte();
  __dyc_funcallvar_161 = __dyc_readpre_byte();
  __dyc_funcallvar_162 = __dyc_readpre_byte();
  __dyc_funcallvar_163 = __dyc_readpre_byte();
  __dyc_funcallvar_164 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_165 = __dyc_readpre_byte();
  __dyc_funcallvar_166 = __dyc_readpre_byte();
  __dyc_funcallvar_167 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_168 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_169 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_170 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_171 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_172 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_173 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_174 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_175 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_176 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_177 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_178 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_179 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_180 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_181 = __dyc_readpre_byte();
  __dyc_funcallvar_182 = __dyc_readpre_byte();
  __dyc_funcallvar_183 = __dyc_readpre_byte();
  __dyc_funcallvar_184 = __dyc_readpre_byte();
  __dyc_funcallvar_185 = __dyc_readpre_byte();
  __dyc_funcallvar_186 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_187 = __dyc_readpre_byte();
  __dyc_funcallvar_188 = __dyc_readpre_byte();
  __dyc_funcallvar_189 = __dyc_readpre_byte();
  __dyc_funcallvar_190 = __dyc_readpre_byte();
  __dyc_funcallvar_191 = __dyc_readpre_byte();
  __dyc_funcallvar_192 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_193 = (char *)__dyc_read_ptr__char();
  __dyc_funcallvar_194 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_195 = (u_int )__dyc_readpre_byte();
  __dyc_funcallvar_196 = (size_t )__dyc_readpre_byte();
  ft = 0;
  wp = 0;
  copy = 0;
  cp = 0;
  marker = 0;
  time_format = 0;
  copy0 = 0;
  condition = 0;
  found = 0;
  c = 0;
  valuelen = 0;
  modifiers = 0;
  limit = 0;
  width = 0;
  j = 0;
  list = 0;
  cmp = 0;
  search = 0;
  sub = 0;
  mexp = 0;
  fm = 0;
  i = 0;
  nsub = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___6 = 0;
  tmp___8 = 0;
  tmp___10 = 0;
  tmp___12 = 0;
  tmp___14 = 0;
  tmp___16 = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___26 = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___44 = 0;
  tmp___49 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___62 = 0;
  tmp___67 = 0;
  tmp___68 = 0;
  tmp___69 = 0;
  tmp___70 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___80 = 0;
  tmp___85 = 0;
  tmp___86 = 0;
  tmp___87 = 0;
  tmp___88 = 0;
  __s1_len___3 = 0;
  __s2_len___3 = 0;
  tmp___98 = 0;
  tmp___103 = 0;
  tmp___104 = 0;
  tmp___105 = 0;
  tmp___106 = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___116 = 0;
  tmp___121 = 0;
  tmp___122 = 0;
  tmp___123 = 0;
  tmp___124 = 0;
  tmp___125 = 0;
  tmp___126 = 0;
  tmp___127 = 0;
  tmp___128 = 0;
  tmp___129 = 0;
  tmp___130 = 0;
  __s1_len___5 = 0;
  __s2_len___5 = 0;
  tmp___140 = 0;
  tmp___145 = 0;
  tmp___146 = 0;
  tmp___147 = 0;
  tmp___148 = 0;
  __s1_len___6 = 0;
  __s2_len___6 = 0;
  tmp___158 = 0;
  tmp___163 = 0;
  tmp___164 = 0;
  tmp___165 = 0;
  tmp___166 = 0;
  __s1_len___7 = 0;
  __s2_len___7 = 0;
  tmp___176 = 0;
  tmp___181 = 0;
  tmp___182 = 0;
  tmp___183 = 0;
  tmp___184 = 0;
  __s1_len___8 = 0;
  __s2_len___8 = 0;
  tmp___194 = 0;
  tmp___199 = 0;
  tmp___200 = 0;
  tmp___201 = 0;
  tmp___202 = 0;
  __s1_len___9 = 0;
  __s2_len___9 = 0;
  tmp___212 = 0;
  tmp___217 = 0;
  tmp___218 = 0;
  tmp___219 = 0;
  tmp___220 = 0;
  __s1_len___10 = 0;
  __s2_len___10 = 0;
  tmp___230 = 0;
  tmp___235 = 0;
  tmp___236 = 0;
  tmp___237 = 0;
  tmp___238 = 0;
  __s1_len___11 = 0;
  __s2_len___11 = 0;
  tmp___248 = 0;
  tmp___253 = 0;
  tmp___254 = 0;
  tmp___255 = 0;
  tmp___256 = 0;
  __s1_len___12 = 0;
  __s2_len___12 = 0;
  tmp___266 = 0;
  tmp___271 = 0;
  tmp___272 = 0;
  tmp___273 = 0;
  tmp___274 = 0;
  __s1_len___13 = 0;
  __s2_len___13 = 0;
  tmp___284 = 0;
  tmp___289 = 0;
  tmp___290 = 0;
  tmp___291 = 0;
  tmp___292 = 0;
  __s1_len___14 = 0;
  __s2_len___14 = 0;
  tmp___302 = 0;
  tmp___307 = 0;
  tmp___308 = 0;
  tmp___309 = 0;
  tmp___310 = 0;
  __s1_len___15 = 0;
  __s2_len___15 = 0;
  tmp___320 = 0;
  tmp___325 = 0;
  tmp___326 = 0;
  tmp___327 = 0;
  tmp___328 = 0;
  __s1_len___16 = 0;
  __s2_len___16 = 0;
  tmp___338 = 0;
  tmp___343 = 0;
  tmp___344 = 0;
  tmp___345 = 0;
  tmp___346 = 0;
  __s1_len___17 = 0;
  __s2_len___17 = 0;
  tmp___356 = 0;
  tmp___361 = 0;
  tmp___362 = 0;
  tmp___363 = 0;
  tmp___364 = 0;
  __s1_len___18 = 0;
  __s2_len___18 = 0;
  tmp___374 = 0;
  tmp___379 = 0;
  tmp___380 = 0;
  tmp___381 = 0;
  tmp___382 = 0;
  __s1_len___19 = 0;
  __s2_len___19 = 0;
  tmp___392 = 0;
  tmp___397 = 0;
  tmp___398 = 0;
  tmp___399 = 0;
  tmp___400 = 0;
  __s1_len___20 = 0;
  __s2_len___20 = 0;
  tmp___410 = 0;
  tmp___415 = 0;
  tmp___416 = 0;
  tmp___417 = 0;
  tmp___418 = 0;
  tmp___419 = 0;
  tmp___420 = 0;
  tmp___421 = 0;
  __s1_len___21 = 0;
  __s2_len___21 = 0;
  tmp___431 = 0;
  tmp___436 = 0;
  tmp___437 = 0;
  tmp___438 = 0;
  tmp___439 = 0;
  __s1_len___22 = 0;
  __s2_len___22 = 0;
  tmp___449 = 0;
  tmp___454 = 0;
  tmp___455 = 0;
  tmp___456 = 0;
  tmp___457 = 0;
  tmp___458 = 0;
  tmp___459 = 0;
  ft = es->ft;
  wp = ft->wp;
  marker = (char const   *)((void *)0);
  time_format = (char const   *)((void *)0);
  modifiers = 0;
  limit = 0;
  width = 0;
  cmp = (struct format_modifier *)((void *)0);
  search = (struct format_modifier *)((void *)0);
  sub = (struct format_modifier **)((void *)0);
  mexp = (struct format_modifier *)((void *)0);
  nsub = (u_int )0;
  copy0 = __dyc_funcallvar_1;
  copy = (char const   *)copy0;
  list = __dyc_funcallvar_2;
  i = 0U;
  while (1) {
    while_161_continue:  ;
    if (! (i < count)) {
      goto while_161_break;
    }
    {
    fm = list + i;
    tmp = __dyc_funcallvar_3;
    }
    if (tmp) {
      {

      j = 0;
      }
      {
      while (1) {
        while_162_continue:  ;
        if (! (j < fm->argc)) {
          goto while_162_break;
        }
        {

        j ++;
        }
      }
      while_162_break:  ;
      }
    }
    if (fm->size == 1U) {
      if ((int )fm->modifier[0] == 109) {
        goto switch_163_109;
      } else {
        if ((int )fm->modifier[0] == 60) {
          goto switch_163_109;
        } else {
          if ((int )fm->modifier[0] == 62) {
            goto switch_163_109;
          } else {
            if ((int )fm->modifier[0] == 67) {
              goto switch_163_67;
            } else {
              if ((int )fm->modifier[0] == 115) {
                goto switch_163_115;
              } else {
                if ((int )fm->modifier[0] == 61) {
                  goto switch_163_61;
                } else {
                  if ((int )fm->modifier[0] == 112) {
                    goto switch_163_112;
                  } else {
                    if ((int )fm->modifier[0] == 119) {
                      goto switch_163_119;
                    } else {
                      if ((int )fm->modifier[0] == 101) {
                        goto switch_163_101;
                      } else {
                        if ((int )fm->modifier[0] == 108) {
                          goto switch_163_108;
                        } else {
                          if ((int )fm->modifier[0] == 97) {
                            goto switch_163_97;
                          } else {
                            if ((int )fm->modifier[0] == 98) {
                              goto switch_163_98;
                            } else {
                              if ((int )fm->modifier[0] == 100) {
                                goto switch_163_100;
                              } else {
                                if ((int )fm->modifier[0] == 110) {
                                  goto switch_163_110;
                                } else {
                                  if ((int )fm->modifier[0] == 116) {
                                    goto switch_163_116;
                                  } else {
                                    if ((int )fm->modifier[0] == 113) {
                                      goto switch_163_113;
                                    } else {
                                      if ((int )fm->modifier[0] == 69) {
                                        goto switch_163_69;
                                      } else {
                                        if ((int )fm->modifier[0] == 84) {
                                          goto switch_163_84;
                                        } else {
                                          if ((int )fm->modifier[0] == 78) {
                                            goto switch_163_78;
                                          } else {
                                            if ((int )fm->modifier[0] == 83) {
                                              goto switch_163_83;
                                            } else {
                                              if ((int )fm->modifier[0] == 87) {
                                                goto switch_163_87;
                                              } else {
                                                if ((int )fm->modifier[0] == 80) {
                                                  goto switch_163_80;
                                                } else {
                                                  if (0) {
                                                    switch_163_109:  
                                                    switch_163_60:  
                                                    switch_163_62:  
                                                    cmp = fm;
                                                    goto switch_163_break;
                                                    switch_163_67:  
                                                    search = fm;
                                                    goto switch_163_break;
                                                    switch_163_115:  
                                                    if (fm->argc < 2) {
                                                      goto switch_163_break;
                                                    }
                                                    {
                                                    tmp___0 = __dyc_funcallvar_4;
                                                    sub = (struct format_modifier **)tmp___0;
                                                    tmp___1 = nsub;
                                                    nsub ++;
                                                    *(sub + tmp___1) = fm;
                                                    }
                                                    goto switch_163_break;
                                                    switch_163_61:  
                                                    if (fm->argc < 1) {
                                                      goto switch_163_break;
                                                    }
                                                    {
                                                    tmp___2 = __dyc_funcallvar_5;
                                                    limit = (int )tmp___2;
                                                    }
                                                    if ((unsigned long )errstr != (unsigned long )((void *)0)) {
                                                      limit = 0;
                                                    }
                                                    if (fm->argc >= 2) {
                                                      if ((unsigned long )*(fm->argv + 1) != (unsigned long )((void *)0)) {
                                                        marker = (char const   *)*(fm->argv + 1);
                                                      }
                                                    }
                                                    goto switch_163_break;
                                                    switch_163_112:  
                                                    if (fm->argc < 1) {
                                                      goto switch_163_break;
                                                    }
                                                    {
                                                    tmp___3 = __dyc_funcallvar_6;
                                                    width = (int )tmp___3;
                                                    }
                                                    if ((unsigned long )errstr != (unsigned long )((void *)0)) {
                                                      width = 0;
                                                    }
                                                    goto switch_163_break;
                                                    switch_163_119:  
                                                    modifiers |= 4096;
                                                    goto switch_163_break;
                                                    switch_163_101:  
                                                    if (fm->argc < 1) {
                                                      goto switch_163_break;
                                                    } else {
                                                      if (fm->argc > 3) {
                                                        goto switch_163_break;
                                                      }
                                                    }
                                                    mexp = fm;
                                                    goto switch_163_break;
                                                    switch_163_108:  
                                                    modifiers |= 16;
                                                    goto switch_163_break;
                                                    switch_163_97:  
                                                    modifiers |= 65536;
                                                    goto switch_163_break;
                                                    switch_163_98:  
                                                    modifiers |= 2;
                                                    goto switch_163_break;
                                                    switch_163_100:  
                                                    modifiers |= 4;
                                                    goto switch_163_break;
                                                    switch_163_110:  
                                                    modifiers |= 2048;
                                                    goto switch_163_break;
                                                    switch_163_116:  
                                                    modifiers |= 1;
                                                    if (fm->argc < 1) {
                                                      goto switch_163_break;
                                                    }
                                                    {
                                                    tmp___8 = __dyc_funcallvar_7;
                                                    }
                                                    if ((unsigned long )tmp___8 != (unsigned long )((void *)0)) {
                                                      modifiers |= 1024;
                                                    } else {
                                                      if (fm->argc >= 2) {
                                                        {
                                                        tmp___6 = __dyc_funcallvar_8;
                                                        }
                                                        if ((unsigned long )tmp___6 != (unsigned long )((void *)0)) {
                                                          {
                                                          tmp___4 = __dyc_funcallvar_9;
                                                          time_format = (char const   *)tmp___4;
                                                          }
                                                        }
                                                      }
                                                    }
                                                    goto switch_163_break;
                                                    switch_163_113:  
                                                    if (fm->argc < 1) {
                                                      modifiers |= 8;
                                                    } else {
                                                      {
                                                      tmp___10 = __dyc_funcallvar_10;
                                                      }
                                                      if ((unsigned long )tmp___10 != (unsigned long )((void *)0)) {
                                                        modifiers |= 8192;
                                                      } else {
                                                        {
                                                        tmp___12 = __dyc_funcallvar_11;
                                                        }
                                                        if ((unsigned long )tmp___12 != (unsigned long )((void *)0)) {
                                                          modifiers |= 8192;
                                                        }
                                                      }
                                                    }
                                                    goto switch_163_break;
                                                    switch_163_69:  
                                                    modifiers |= 32;
                                                    goto switch_163_break;
                                                    switch_163_84:  
                                                    modifiers |= 64;
                                                    goto switch_163_break;
                                                    switch_163_78:  
                                                    if (fm->argc < 1) {
                                                      modifiers |= 16384;
                                                    } else {
                                                      {
                                                      tmp___16 = __dyc_funcallvar_12;
                                                      }
                                                      if ((unsigned long )tmp___16 != (unsigned long )((void *)0)) {
                                                        modifiers |= 16384;
                                                      } else {
                                                        {
                                                        tmp___14 = __dyc_funcallvar_13;
                                                        }
                                                        if ((unsigned long )tmp___14 != (unsigned long )((void *)0)) {
                                                          modifiers |= 32768;
                                                        }
                                                      }
                                                    }
                                                    goto switch_163_break;
                                                    switch_163_83:  
                                                    modifiers |= 128;
                                                    goto switch_163_break;
                                                    switch_163_87:  
                                                    modifiers |= 256;
                                                    goto switch_163_break;
                                                    switch_163_80:  
                                                    modifiers |= 512;
                                                    goto switch_163_break;
                                                  } else {
                                                    switch_163_break:  ;
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
    } else {
      if (fm->size == 2U) {
        if (0) {
          {
          tmp___32 = __dyc_funcallvar_14;
          __s1_len = (unsigned long )tmp___32;
          tmp___33 = __dyc_funcallvar_15;
          __s2_len = (unsigned long )tmp___33;
          }
          if (! ((unsigned long )((void const   *)(fm->modifier + 1)) - (unsigned long )((void const   *)(fm->modifier)) == 1UL)) {
            goto _L___0;
          } else {
            if (__s1_len >= 4UL) {
              _L___0:  
              if (! ((unsigned long )((void const   *)("||" + 1)) - (unsigned long )((void const   *)"||") == 1UL)) {
                tmp___34 = 1;
              } else {
                if (__s2_len >= 4UL) {
                  tmp___34 = 1;
                } else {
                  tmp___34 = 0;
                }
              }
            } else {
              tmp___34 = 0;
            }
          }
          if (tmp___34) {
            {
            tmp___26 = __dyc_funcallvar_16;
            }
          } else {
            {
            tmp___31 = __dyc_funcallvar_17;
            tmp___26 = tmp___31;
            }
          }
        } else {
          {
          tmp___31 = __dyc_funcallvar_18;
          tmp___26 = tmp___31;
          }
        }
        if (tmp___26 == 0) {
          cmp = fm;
        } else {
          if (0) {
            {
            tmp___50 = __dyc_funcallvar_19;
            __s1_len___0 = (unsigned long )tmp___50;
            tmp___51 = __dyc_funcallvar_20;
            __s2_len___0 = (unsigned long )tmp___51;
            }
            if (! ((unsigned long )((void const   *)(fm->modifier + 1)) - (unsigned long )((void const   *)(fm->modifier)) == 1UL)) {
              goto _L___2;
            } else {
              if (__s1_len___0 >= 4UL) {
                _L___2:  
                if (! ((unsigned long )((void const   *)("&&" + 1)) - (unsigned long )((void const   *)"&&") == 1UL)) {
                  tmp___52 = 1;
                } else {
                  if (__s2_len___0 >= 4UL) {
                    tmp___52 = 1;
                  } else {
                    tmp___52 = 0;
                  }
                }
              } else {
                tmp___52 = 0;
              }
            }
            if (tmp___52) {
              {
              tmp___44 = __dyc_funcallvar_21;
              }
            } else {
              {
              tmp___49 = __dyc_funcallvar_22;
              tmp___44 = tmp___49;
              }
            }
          } else {
            {
            tmp___49 = __dyc_funcallvar_23;
            tmp___44 = tmp___49;
            }
          }
          if (tmp___44 == 0) {
            cmp = fm;
          } else {
            if (0) {
              {
              tmp___68 = __dyc_funcallvar_24;
              __s1_len___1 = (unsigned long )tmp___68;
              tmp___69 = __dyc_funcallvar_25;
              __s2_len___1 = (unsigned long )tmp___69;
              }
              if (! ((unsigned long )((void const   *)(fm->modifier + 1)) - (unsigned long )((void const   *)(fm->modifier)) == 1UL)) {
                goto _L___4;
              } else {
                if (__s1_len___1 >= 4UL) {
                  _L___4:  
                  if (! ((unsigned long )((void const   *)("==" + 1)) - (unsigned long )((void const   *)"==") == 1UL)) {
                    tmp___70 = 1;
                  } else {
                    if (__s2_len___1 >= 4UL) {
                      tmp___70 = 1;
                    } else {
                      tmp___70 = 0;
                    }
                  }
                } else {
                  tmp___70 = 0;
                }
              }
              if (tmp___70) {
                {
                tmp___62 = __dyc_funcallvar_26;
                }
              } else {
                {
                tmp___67 = __dyc_funcallvar_27;
                tmp___62 = tmp___67;
                }
              }
            } else {
              {
              tmp___67 = __dyc_funcallvar_28;
              tmp___62 = tmp___67;
              }
            }
            if (tmp___62 == 0) {
              cmp = fm;
            } else {
              if (0) {
                {
                tmp___86 = __dyc_funcallvar_29;
                __s1_len___2 = (unsigned long )tmp___86;
                tmp___87 = __dyc_funcallvar_30;
                __s2_len___2 = (unsigned long )tmp___87;
                }
                if (! ((unsigned long )((void const   *)(fm->modifier + 1)) - (unsigned long )((void const   *)(fm->modifier)) == 1UL)) {
                  goto _L___6;
                } else {
                  if (__s1_len___2 >= 4UL) {
                    _L___6:  
                    if (! ((unsigned long )((void const   *)("!=" + 1)) - (unsigned long )((void const   *)"!=") == 1UL)) {
                      tmp___88 = 1;
                    } else {
                      if (__s2_len___2 >= 4UL) {
                        tmp___88 = 1;
                      } else {
                        tmp___88 = 0;
                      }
                    }
                  } else {
                    tmp___88 = 0;
                  }
                }
                if (tmp___88) {
                  {
                  tmp___80 = __dyc_funcallvar_31;
                  }
                } else {
                  {
                  tmp___85 = __dyc_funcallvar_32;
                  tmp___80 = tmp___85;
                  }
                }
              } else {
                {
                tmp___85 = __dyc_funcallvar_33;
                tmp___80 = tmp___85;
                }
              }
              if (tmp___80 == 0) {
                cmp = fm;
              } else {
                if (0) {
                  {
                  tmp___104 = __dyc_funcallvar_34;
                  __s1_len___3 = (unsigned long )tmp___104;
                  tmp___105 = __dyc_funcallvar_35;
                  __s2_len___3 = (unsigned long )tmp___105;
                  }
                  if (! ((unsigned long )((void const   *)(fm->modifier + 1)) - (unsigned long )((void const   *)(fm->modifier)) == 1UL)) {
                    goto _L___8;
                  } else {
                    if (__s1_len___3 >= 4UL) {
                      _L___8:  
                      if (! ((unsigned long )((void const   *)(">=" + 1)) - (unsigned long )((void const   *)">=") == 1UL)) {
                        tmp___106 = 1;
                      } else {
                        if (__s2_len___3 >= 4UL) {
                          tmp___106 = 1;
                        } else {
                          tmp___106 = 0;
                        }
                      }
                    } else {
                      tmp___106 = 0;
                    }
                  }
                  if (tmp___106) {
                    {
                    tmp___98 = __dyc_funcallvar_36;
                    }
                  } else {
                    {
                    tmp___103 = __dyc_funcallvar_37;
                    tmp___98 = tmp___103;
                    }
                  }
                } else {
                  {
                  tmp___103 = __dyc_funcallvar_38;
                  tmp___98 = tmp___103;
                  }
                }
                if (tmp___98 == 0) {
                  cmp = fm;
                } else {
                  if (0) {
                    {
                    tmp___122 = __dyc_funcallvar_39;
                    __s1_len___4 = (unsigned long )tmp___122;
                    tmp___123 = __dyc_funcallvar_40;
                    __s2_len___4 = (unsigned long )tmp___123;
                    }
                    if (! ((unsigned long )((void const   *)(fm->modifier + 1)) - (unsigned long )((void const   *)(fm->modifier)) == 1UL)) {
                      goto _L___10;
                    } else {
                      if (__s1_len___4 >= 4UL) {
                        _L___10:  
                        if (! ((unsigned long )((void const   *)("<=" + 1)) - (unsigned long )((void const   *)"<=") == 1UL)) {
                          tmp___124 = 1;
                        } else {
                          if (__s2_len___4 >= 4UL) {
                            tmp___124 = 1;
                          } else {
                            tmp___124 = 0;
                          }
                        }
                      } else {
                        tmp___124 = 0;
                      }
                    }
                    if (tmp___124) {
                      {
                      tmp___116 = __dyc_funcallvar_41;
                      }
                    } else {
                      {
                      tmp___121 = __dyc_funcallvar_42;
                      tmp___116 = tmp___121;
                      }
                    }
                  } else {
                    {
                    tmp___121 = __dyc_funcallvar_43;
                    tmp___116 = tmp___121;
                    }
                  }
                  if (tmp___116 == 0) {
                    cmp = fm;
                  }
                }
              }
            }
          }
        }
      }
    }
    i ++;
  }
  while_161_break:  ;
  if (modifiers & 16) {
    {
    value = __dyc_funcallvar_44;
    }
    goto done;
  }
  if (modifiers & 65536) {
    {
    new = __dyc_funcallvar_45;
    tmp___125 = __dyc_funcallvar_46;
    c = (char )tmp___125;
    }
    if ((unsigned long )errstr != (unsigned long )((void *)0)) {
      {
      value = __dyc_funcallvar_47;
      }
    } else {
      {

      }
    }
    {

    }
    goto done;
  }
  if (modifiers & 128) {
    {
    value = __dyc_funcallvar_48;
    }
    if ((unsigned long )value == (unsigned long )((void *)0)) {
      goto __dyc_dummy_label;
    }
  } else {
    if (modifiers & 256) {
      {
      value = __dyc_funcallvar_49;
      }
      if ((unsigned long )value == (unsigned long )((void *)0)) {
        goto __dyc_dummy_label;
      }
    } else {
      if (modifiers & 512) {
        {
        value = __dyc_funcallvar_50;
        }
        if ((unsigned long )value == (unsigned long )((void *)0)) {
          goto __dyc_dummy_label;
        }
      } else {
        if (modifiers & 16384) {
          {
          value = __dyc_funcallvar_51;
          }
          if ((unsigned long )value == (unsigned long )((void *)0)) {
            goto __dyc_dummy_label;
          }
        } else {
          if (modifiers & 32768) {
            {
            value = __dyc_funcallvar_52;
            }
            if ((unsigned long )value == (unsigned long )((void *)0)) {
              goto __dyc_dummy_label;
            }
          } else {
            if ((unsigned long )search != (unsigned long )((void *)0)) {
              {
              new = __dyc_funcallvar_53;
              }
              if ((unsigned long )wp == (unsigned long )((void *)0)) {
                {

                value = __dyc_funcallvar_54;
                }
              } else {
                {

                value = __dyc_funcallvar_55;
                }
              }
              {

              }
            } else {
              if ((unsigned long )cmp != (unsigned long )((void *)0)) {
                {
                tmp___126 = __dyc_funcallvar_56;
                }
                if (tmp___126 != 0) {
                  {

                  }
                  goto __dyc_dummy_label;
                }
                {


                }
                if (0) {
                  {
                  tmp___398 = __dyc_funcallvar_57;
                  __s1_len___19 = (unsigned long )tmp___398;
                  tmp___399 = __dyc_funcallvar_58;
                  __s2_len___19 = (unsigned long )tmp___399;
                  }
                  if (! ((unsigned long )((void const   *)(cmp->modifier + 1)) - (unsigned long )((void const   *)(cmp->modifier)) == 1UL)) {
                    goto _L___40;
                  } else {
                    if (__s1_len___19 >= 4UL) {
                      _L___40:  
                      if (! ((unsigned long )((void const   *)("||" + 1)) - (unsigned long )((void const   *)"||") == 1UL)) {
                        tmp___400 = 1;
                      } else {
                        if (__s2_len___19 >= 4UL) {
                          tmp___400 = 1;
                        } else {
                          tmp___400 = 0;
                        }
                      }
                    } else {
                      tmp___400 = 0;
                    }
                  }
                  if (tmp___400) {
                    {
                    tmp___392 = __dyc_funcallvar_59;
                    }
                  } else {
                    {
                    tmp___397 = __dyc_funcallvar_60;
                    tmp___392 = tmp___397;
                    }
                  }
                } else {
                  {
                  tmp___397 = __dyc_funcallvar_61;
                  tmp___392 = tmp___397;
                  }
                }
                if (tmp___392 == 0) {
                  {
                  tmp___127 = __dyc_funcallvar_62;
                  }
                  if (tmp___127) {
                    {
                    value = __dyc_funcallvar_63;
                    }
                  } else {
                    {
                    tmp___128 = __dyc_funcallvar_64;
                    }
                    if (tmp___128) {
                      {
                      value = __dyc_funcallvar_65;
                      }
                    } else {
                      {
                      value = __dyc_funcallvar_66;
                      }
                    }
                  }
                } else {
                  if (0) {
                    {
                    tmp___380 = __dyc_funcallvar_67;
                    __s1_len___18 = (unsigned long )tmp___380;
                    tmp___381 = __dyc_funcallvar_68;
                    __s2_len___18 = (unsigned long )tmp___381;
                    }
                    if (! ((unsigned long )((void const   *)(cmp->modifier + 1)) - (unsigned long )((void const   *)(cmp->modifier)) == 1UL)) {
                      goto _L___38;
                    } else {
                      if (__s1_len___18 >= 4UL) {
                        _L___38:  
                        if (! ((unsigned long )((void const   *)("&&" + 1)) - (unsigned long )((void const   *)"&&") == 1UL)) {
                          tmp___382 = 1;
                        } else {
                          if (__s2_len___18 >= 4UL) {
                            tmp___382 = 1;
                          } else {
                            tmp___382 = 0;
                          }
                        }
                      } else {
                        tmp___382 = 0;
                      }
                    }
                    if (tmp___382) {
                      {
                      tmp___374 = __dyc_funcallvar_69;
                      }
                    } else {
                      {
                      tmp___379 = __dyc_funcallvar_70;
                      tmp___374 = tmp___379;
                      }
                    }
                  } else {
                    {
                    tmp___379 = __dyc_funcallvar_71;
                    tmp___374 = tmp___379;
                    }
                  }
                  if (tmp___374 == 0) {
                    {
                    tmp___129 = __dyc_funcallvar_72;
                    }
                    if (tmp___129) {
                      {
                      tmp___130 = __dyc_funcallvar_73;
                      }
                      if (tmp___130) {
                        {
                        value = __dyc_funcallvar_74;
                        }
                      } else {
                        {
                        value = __dyc_funcallvar_75;
                        }
                      }
                    } else {
                      {
                      value = __dyc_funcallvar_76;
                      }
                    }
                  } else {
                    if (0) {
                      {
                      tmp___362 = __dyc_funcallvar_77;
                      __s1_len___17 = (unsigned long )tmp___362;
                      tmp___363 = __dyc_funcallvar_78;
                      __s2_len___17 = (unsigned long )tmp___363;
                      }
                      if (! ((unsigned long )((void const   *)(cmp->modifier + 1)) - (unsigned long )((void const   *)(cmp->modifier)) == 1UL)) {
                        goto _L___36;
                      } else {
                        if (__s1_len___17 >= 4UL) {
                          _L___36:  
                          if (! ((unsigned long )((void const   *)("==" + 1)) - (unsigned long )((void const   *)"==") == 1UL)) {
                            tmp___364 = 1;
                          } else {
                            if (__s2_len___17 >= 4UL) {
                              tmp___364 = 1;
                            } else {
                              tmp___364 = 0;
                            }
                          }
                        } else {
                          tmp___364 = 0;
                        }
                      }
                      if (tmp___364) {
                        {
                        tmp___356 = __dyc_funcallvar_79;
                        }
                      } else {
                        {
                        tmp___361 = __dyc_funcallvar_80;
                        tmp___356 = tmp___361;
                        }
                      }
                    } else {
                      {
                      tmp___361 = __dyc_funcallvar_81;
                      tmp___356 = tmp___361;
                      }
                    }
                    if (tmp___356 == 0) {
                      if (0) {
                        {
                        tmp___146 = __dyc_funcallvar_82;
                        __s1_len___5 = (unsigned long )tmp___146;
                        tmp___147 = __dyc_funcallvar_83;
                        __s2_len___5 = (unsigned long )tmp___147;
                        }
                        if (! ((unsigned long )((void const   *)(left + 1)) - (unsigned long )((void const   *)left) == 1UL)) {
                          goto _L___12;
                        } else {
                          if (__s1_len___5 >= 4UL) {
                            _L___12:  
                            if (! ((unsigned long )((void const   *)(right + 1)) - (unsigned long )((void const   *)right) == 1UL)) {
                              tmp___148 = 1;
                            } else {
                              if (__s2_len___5 >= 4UL) {
                                tmp___148 = 1;
                              } else {
                                tmp___148 = 0;
                              }
                            }
                          } else {
                            tmp___148 = 0;
                          }
                        }
                        if (tmp___148) {
                          {
                          tmp___140 = __dyc_funcallvar_84;
                          }
                        } else {
                          {
                          tmp___145 = __dyc_funcallvar_85;
                          tmp___140 = tmp___145;
                          }
                        }
                      } else {
                        {
                        tmp___145 = __dyc_funcallvar_86;
                        tmp___140 = tmp___145;
                        }
                      }
                      if (tmp___140 == 0) {
                        {
                        value = __dyc_funcallvar_87;
                        }
                      } else {
                        {
                        value = __dyc_funcallvar_88;
                        }
                      }
                    } else {
                      if (0) {
                        {
                        tmp___344 = __dyc_funcallvar_89;
                        __s1_len___16 = (unsigned long )tmp___344;
                        tmp___345 = __dyc_funcallvar_90;
                        __s2_len___16 = (unsigned long )tmp___345;
                        }
                        if (! ((unsigned long )((void const   *)(cmp->modifier + 1)) - (unsigned long )((void const   *)(cmp->modifier)) == 1UL)) {
                          goto _L___34;
                        } else {
                          if (__s1_len___16 >= 4UL) {
                            _L___34:  
                            if (! ((unsigned long )((void const   *)("!=" + 1)) - (unsigned long )((void const   *)"!=") == 1UL)) {
                              tmp___346 = 1;
                            } else {
                              if (__s2_len___16 >= 4UL) {
                                tmp___346 = 1;
                              } else {
                                tmp___346 = 0;
                              }
                            }
                          } else {
                            tmp___346 = 0;
                          }
                        }
                        if (tmp___346) {
                          {
                          tmp___338 = __dyc_funcallvar_91;
                          }
                        } else {
                          {
                          tmp___343 = __dyc_funcallvar_92;
                          tmp___338 = tmp___343;
                          }
                        }
                      } else {
                        {
                        tmp___343 = __dyc_funcallvar_93;
                        tmp___338 = tmp___343;
                        }
                      }
                      if (tmp___338 == 0) {
                        if (0) {
                          {
                          tmp___164 = __dyc_funcallvar_94;
                          __s1_len___6 = (unsigned long )tmp___164;
                          tmp___165 = __dyc_funcallvar_95;
                          __s2_len___6 = (unsigned long )tmp___165;
                          }
                          if (! ((unsigned long )((void const   *)(left + 1)) - (unsigned long )((void const   *)left) == 1UL)) {
                            goto _L___14;
                          } else {
                            if (__s1_len___6 >= 4UL) {
                              _L___14:  
                              if (! ((unsigned long )((void const   *)(right + 1)) - (unsigned long )((void const   *)right) == 1UL)) {
                                tmp___166 = 1;
                              } else {
                                if (__s2_len___6 >= 4UL) {
                                  tmp___166 = 1;
                                } else {
                                  tmp___166 = 0;
                                }
                              }
                            } else {
                              tmp___166 = 0;
                            }
                          }
                          if (tmp___166) {
                            {
                            tmp___158 = __dyc_funcallvar_96;
                            }
                          } else {
                            {
                            tmp___163 = __dyc_funcallvar_97;
                            tmp___158 = tmp___163;
                            }
                          }
                        } else {
                          {
                          tmp___163 = __dyc_funcallvar_98;
                          tmp___158 = tmp___163;
                          }
                        }
                        if (tmp___158 != 0) {
                          {
                          value = __dyc_funcallvar_99;
                          }
                        } else {
                          {
                          value = __dyc_funcallvar_100;
                          }
                        }
                      } else {
                        if (0) {
                          {
                          tmp___326 = __dyc_funcallvar_101;
                          __s1_len___15 = (unsigned long )tmp___326;
                          tmp___327 = __dyc_funcallvar_102;
                          __s2_len___15 = (unsigned long )tmp___327;
                          }
                          if (! ((unsigned long )((void const   *)(cmp->modifier + 1)) - (unsigned long )((void const   *)(cmp->modifier)) == 1UL)) {
                            goto _L___32;
                          } else {
                            if (__s1_len___15 >= 4UL) {
                              _L___32:  
                              if (! ((unsigned long )((void const   *)("<" + 1)) - (unsigned long )((void const   *)"<") == 1UL)) {
                                tmp___328 = 1;
                              } else {
                                if (__s2_len___15 >= 4UL) {
                                  tmp___328 = 1;
                                } else {
                                  tmp___328 = 0;
                                }
                              }
                            } else {
                              tmp___328 = 0;
                            }
                          }
                          if (tmp___328) {
                            {
                            tmp___320 = __dyc_funcallvar_103;
                            }
                          } else {
                            {
                            tmp___325 = __dyc_funcallvar_104;
                            tmp___320 = tmp___325;
                            }
                          }
                        } else {
                          {
                          tmp___325 = __dyc_funcallvar_105;
                          tmp___320 = tmp___325;
                          }
                        }
                        if (tmp___320 == 0) {
                          if (0) {
                            {
                            tmp___182 = __dyc_funcallvar_106;
                            __s1_len___7 = (unsigned long )tmp___182;
                            tmp___183 = __dyc_funcallvar_107;
                            __s2_len___7 = (unsigned long )tmp___183;
                            }
                            if (! ((unsigned long )((void const   *)(left + 1)) - (unsigned long )((void const   *)left) == 1UL)) {
                              goto _L___16;
                            } else {
                              if (__s1_len___7 >= 4UL) {
                                _L___16:  
                                if (! ((unsigned long )((void const   *)(right + 1)) - (unsigned long )((void const   *)right) == 1UL)) {
                                  tmp___184 = 1;
                                } else {
                                  if (__s2_len___7 >= 4UL) {
                                    tmp___184 = 1;
                                  } else {
                                    tmp___184 = 0;
                                  }
                                }
                              } else {
                                tmp___184 = 0;
                              }
                            }
                            if (tmp___184) {
                              {
                              tmp___176 = __dyc_funcallvar_108;
                              }
                            } else {
                              {
                              tmp___181 = __dyc_funcallvar_109;
                              tmp___176 = tmp___181;
                              }
                            }
                          } else {
                            {
                            tmp___181 = __dyc_funcallvar_110;
                            tmp___176 = tmp___181;
                            }
                          }
                          if (tmp___176 < 0) {
                            {
                            value = __dyc_funcallvar_111;
                            }
                          } else {
                            {
                            value = __dyc_funcallvar_112;
                            }
                          }
                        } else {
                          if (0) {
                            {
                            tmp___308 = __dyc_funcallvar_113;
                            __s1_len___14 = (unsigned long )tmp___308;
                            tmp___309 = __dyc_funcallvar_114;
                            __s2_len___14 = (unsigned long )tmp___309;
                            }
                            if (! ((unsigned long )((void const   *)(cmp->modifier + 1)) - (unsigned long )((void const   *)(cmp->modifier)) == 1UL)) {
                              goto _L___30;
                            } else {
                              if (__s1_len___14 >= 4UL) {
                                _L___30:  
                                if (! ((unsigned long )((void const   *)(">" + 1)) - (unsigned long )((void const   *)">") == 1UL)) {
                                  tmp___310 = 1;
                                } else {
                                  if (__s2_len___14 >= 4UL) {
                                    tmp___310 = 1;
                                  } else {
                                    tmp___310 = 0;
                                  }
                                }
                              } else {
                                tmp___310 = 0;
                              }
                            }
                            if (tmp___310) {
                              {
                              tmp___302 = __dyc_funcallvar_115;
                              }
                            } else {
                              {
                              tmp___307 = __dyc_funcallvar_116;
                              tmp___302 = tmp___307;
                              }
                            }
                          } else {
                            {
                            tmp___307 = __dyc_funcallvar_117;
                            tmp___302 = tmp___307;
                            }
                          }
                          if (tmp___302 == 0) {
                            if (0) {
                              {
                              tmp___200 = __dyc_funcallvar_118;
                              __s1_len___8 = (unsigned long )tmp___200;
                              tmp___201 = __dyc_funcallvar_119;
                              __s2_len___8 = (unsigned long )tmp___201;
                              }
                              if (! ((unsigned long )((void const   *)(left + 1)) - (unsigned long )((void const   *)left) == 1UL)) {
                                goto _L___18;
                              } else {
                                if (__s1_len___8 >= 4UL) {
                                  _L___18:  
                                  if (! ((unsigned long )((void const   *)(right + 1)) - (unsigned long )((void const   *)right) == 1UL)) {
                                    tmp___202 = 1;
                                  } else {
                                    if (__s2_len___8 >= 4UL) {
                                      tmp___202 = 1;
                                    } else {
                                      tmp___202 = 0;
                                    }
                                  }
                                } else {
                                  tmp___202 = 0;
                                }
                              }
                              if (tmp___202) {
                                {
                                tmp___194 = __dyc_funcallvar_120;
                                }
                              } else {
                                {
                                tmp___199 = __dyc_funcallvar_121;
                                tmp___194 = tmp___199;
                                }
                              }
                            } else {
                              {
                              tmp___199 = __dyc_funcallvar_122;
                              tmp___194 = tmp___199;
                              }
                            }
                            if (tmp___194 > 0) {
                              {
                              value = __dyc_funcallvar_123;
                              }
                            } else {
                              {
                              value = __dyc_funcallvar_124;
                              }
                            }
                          } else {
                            if (0) {
                              {
                              tmp___290 = __dyc_funcallvar_125;
                              __s1_len___13 = (unsigned long )tmp___290;
                              tmp___291 = __dyc_funcallvar_126;
                              __s2_len___13 = (unsigned long )tmp___291;
                              }
                              if (! ((unsigned long )((void const   *)(cmp->modifier + 1)) - (unsigned long )((void const   *)(cmp->modifier)) == 1UL)) {
                                goto _L___28;
                              } else {
                                if (__s1_len___13 >= 4UL) {
                                  _L___28:  
                                  if (! ((unsigned long )((void const   *)("<=" + 1)) - (unsigned long )((void const   *)"<=") == 1UL)) {
                                    tmp___292 = 1;
                                  } else {
                                    if (__s2_len___13 >= 4UL) {
                                      tmp___292 = 1;
                                    } else {
                                      tmp___292 = 0;
                                    }
                                  }
                                } else {
                                  tmp___292 = 0;
                                }
                              }
                              if (tmp___292) {
                                {
                                tmp___284 = __dyc_funcallvar_127;
                                }
                              } else {
                                {
                                tmp___289 = __dyc_funcallvar_128;
                                tmp___284 = tmp___289;
                                }
                              }
                            } else {
                              {
                              tmp___289 = __dyc_funcallvar_129;
                              tmp___284 = tmp___289;
                              }
                            }
                            if (tmp___284 == 0) {
                              if (0) {
                                {
                                tmp___218 = __dyc_funcallvar_130;
                                __s1_len___9 = (unsigned long )tmp___218;
                                tmp___219 = __dyc_funcallvar_131;
                                __s2_len___9 = (unsigned long )tmp___219;
                                }
                                if (! ((unsigned long )((void const   *)(left + 1)) - (unsigned long )((void const   *)left) == 1UL)) {
                                  goto _L___20;
                                } else {
                                  if (__s1_len___9 >= 4UL) {
                                    _L___20:  
                                    if (! ((unsigned long )((void const   *)(right + 1)) - (unsigned long )((void const   *)right) == 1UL)) {
                                      tmp___220 = 1;
                                    } else {
                                      if (__s2_len___9 >= 4UL) {
                                        tmp___220 = 1;
                                      } else {
                                        tmp___220 = 0;
                                      }
                                    }
                                  } else {
                                    tmp___220 = 0;
                                  }
                                }
                                if (tmp___220) {
                                  {
                                  tmp___212 = __dyc_funcallvar_132;
                                  }
                                } else {
                                  {
                                  tmp___217 = __dyc_funcallvar_133;
                                  tmp___212 = tmp___217;
                                  }
                                }
                              } else {
                                {
                                tmp___217 = __dyc_funcallvar_134;
                                tmp___212 = tmp___217;
                                }
                              }
                              if (tmp___212 <= 0) {
                                {
                                value = __dyc_funcallvar_135;
                                }
                              } else {
                                {
                                value = __dyc_funcallvar_136;
                                }
                              }
                            } else {
                              if (0) {
                                {
                                tmp___272 = __dyc_funcallvar_137;
                                __s1_len___12 = (unsigned long )tmp___272;
                                tmp___273 = __dyc_funcallvar_138;
                                __s2_len___12 = (unsigned long )tmp___273;
                                }
                                if (! ((unsigned long )((void const   *)(cmp->modifier + 1)) - (unsigned long )((void const   *)(cmp->modifier)) == 1UL)) {
                                  goto _L___26;
                                } else {
                                  if (__s1_len___12 >= 4UL) {
                                    _L___26:  
                                    if (! ((unsigned long )((void const   *)(">=" + 1)) - (unsigned long )((void const   *)">=") == 1UL)) {
                                      tmp___274 = 1;
                                    } else {
                                      if (__s2_len___12 >= 4UL) {
                                        tmp___274 = 1;
                                      } else {
                                        tmp___274 = 0;
                                      }
                                    }
                                  } else {
                                    tmp___274 = 0;
                                  }
                                }
                                if (tmp___274) {
                                  {
                                  tmp___266 = __dyc_funcallvar_139;
                                  }
                                } else {
                                  {
                                  tmp___271 = __dyc_funcallvar_140;
                                  tmp___266 = tmp___271;
                                  }
                                }
                              } else {
                                {
                                tmp___271 = __dyc_funcallvar_141;
                                tmp___266 = tmp___271;
                                }
                              }
                              if (tmp___266 == 0) {
                                if (0) {
                                  {
                                  tmp___236 = __dyc_funcallvar_142;
                                  __s1_len___10 = (unsigned long )tmp___236;
                                  tmp___237 = __dyc_funcallvar_143;
                                  __s2_len___10 = (unsigned long )tmp___237;
                                  }
                                  if (! ((unsigned long )((void const   *)(left + 1)) - (unsigned long )((void const   *)left) == 1UL)) {
                                    goto _L___22;
                                  } else {
                                    if (__s1_len___10 >= 4UL) {
                                      _L___22:  
                                      if (! ((unsigned long )((void const   *)(right + 1)) - (unsigned long )((void const   *)right) == 1UL)) {
                                        tmp___238 = 1;
                                      } else {
                                        if (__s2_len___10 >= 4UL) {
                                          tmp___238 = 1;
                                        } else {
                                          tmp___238 = 0;
                                        }
                                      }
                                    } else {
                                      tmp___238 = 0;
                                    }
                                  }
                                  if (tmp___238) {
                                    {
                                    tmp___230 = __dyc_funcallvar_144;
                                    }
                                  } else {
                                    {
                                    tmp___235 = __dyc_funcallvar_145;
                                    tmp___230 = tmp___235;
                                    }
                                  }
                                } else {
                                  {
                                  tmp___235 = __dyc_funcallvar_146;
                                  tmp___230 = tmp___235;
                                  }
                                }
                                if (tmp___230 >= 0) {
                                  {
                                  value = __dyc_funcallvar_147;
                                  }
                                } else {
                                  {
                                  value = __dyc_funcallvar_148;
                                  }
                                }
                              } else {
                                if (0) {
                                  {
                                  tmp___254 = __dyc_funcallvar_149;
                                  __s1_len___11 = (unsigned long )tmp___254;
                                  tmp___255 = __dyc_funcallvar_150;
                                  __s2_len___11 = (unsigned long )tmp___255;
                                  }
                                  if (! ((unsigned long )((void const   *)(cmp->modifier + 1)) - (unsigned long )((void const   *)(cmp->modifier)) == 1UL)) {
                                    goto _L___24;
                                  } else {
                                    if (__s1_len___11 >= 4UL) {
                                      _L___24:  
                                      if (! ((unsigned long )((void const   *)("m" + 1)) - (unsigned long )((void const   *)"m") == 1UL)) {
                                        tmp___256 = 1;
                                      } else {
                                        if (__s2_len___11 >= 4UL) {
                                          tmp___256 = 1;
                                        } else {
                                          tmp___256 = 0;
                                        }
                                      }
                                    } else {
                                      tmp___256 = 0;
                                    }
                                  }
                                  if (tmp___256) {
                                    {
                                    tmp___248 = __dyc_funcallvar_151;
                                    }
                                  } else {
                                    {
                                    tmp___253 = __dyc_funcallvar_152;
                                    tmp___248 = tmp___253;
                                    }
                                  }
                                } else {
                                  {
                                  tmp___253 = __dyc_funcallvar_153;
                                  tmp___248 = tmp___253;
                                  }
                                }
                                if (tmp___248 == 0) {
                                  {
                                  value = __dyc_funcallvar_154;
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
                {


                }
              } else {
                if ((int const   )*copy == 63) {
                  {
                  cp = __dyc_funcallvar_155;
                  }
                  if ((unsigned long )cp == (unsigned long )((void *)0)) {
                    {

                    }
                    goto __dyc_dummy_label;
                  }
                  {
                  condition = __dyc_funcallvar_156;

                  found = __dyc_funcallvar_157;
                  }
                  if ((unsigned long )found == (unsigned long )((void *)0)) {
                    {
                    found = __dyc_funcallvar_158;
                    }
                    if (0) {
                      {
                      tmp___416 = __dyc_funcallvar_159;
                      __s1_len___20 = (unsigned long )tmp___416;
                      tmp___417 = __dyc_funcallvar_160;
                      __s2_len___20 = (unsigned long )tmp___417;
                      }
                      if (! ((unsigned long )((void const   *)(found + 1)) - (unsigned long )((void const   *)found) == 1UL)) {
                        goto _L___42;
                      } else {
                        if (__s1_len___20 >= 4UL) {
                          _L___42:  
                          if (! ((unsigned long )((void const   *)(condition + 1)) - (unsigned long )((void const   *)condition) == 1UL)) {
                            tmp___418 = 1;
                          } else {
                            if (__s2_len___20 >= 4UL) {
                              tmp___418 = 1;
                            } else {
                              tmp___418 = 0;
                            }
                          }
                        } else {
                          tmp___418 = 0;
                        }
                      }
                      if (tmp___418) {
                        {
                        tmp___410 = __dyc_funcallvar_161;
                        }
                      } else {
                        {
                        tmp___415 = __dyc_funcallvar_162;
                        tmp___410 = tmp___415;
                        }
                      }
                    } else {
                      {
                      tmp___415 = __dyc_funcallvar_163;
                      tmp___410 = tmp___415;
                      }
                    }
                    if (tmp___410 == 0) {
                      {

                      found = __dyc_funcallvar_164;

                      }
                    } else {
                      {

                      }
                    }
                  } else {
                    {

                    }
                  }
                  {
                  tmp___419 = __dyc_funcallvar_165;
                  }
                  if (tmp___419 != 0) {
                    {


                    }
                    goto __dyc_dummy_label;
                  }
                  {
                  tmp___420 = __dyc_funcallvar_166;
                  }
                  if (tmp___420) {
                    {

                    value = __dyc_funcallvar_167;
                    }
                  } else {
                    {

                    value = __dyc_funcallvar_168;
                    }
                  }
                  {




                  }
                } else {
                  if ((unsigned long )mexp != (unsigned long )((void *)0)) {
                    {
                    value = __dyc_funcallvar_169;
                    }
                    if ((unsigned long )value == (unsigned long )((void *)0)) {
                      {
                      value = __dyc_funcallvar_170;
                      }
                    }
                  } else {
                    {
                    tmp___421 = __dyc_funcallvar_171;
                    }
                    if ((unsigned long )tmp___421 != (unsigned long )((char *)0)) {
                      {

                      value = __dyc_funcallvar_172;
                      }
                    } else {
                      {
                      value = __dyc_funcallvar_173;
                      }
                      if ((unsigned long )value == (unsigned long )((void *)0)) {
                        {

                        value = __dyc_funcallvar_174;
                        }
                      } else {
                        {

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
  done: 
  if (modifiers & 32) {
    {
    new = __dyc_funcallvar_175;

    value = new;
    }
  } else {
    if (modifiers & 64) {
      {

      new = __dyc_funcallvar_176;

      value = new;
      }
    }
  }
  i = 0U;
  while (1) {
    while_164_continue:  ;
    if (! (i < nsub)) {
      goto while_164_break;
    }
    {
    left = __dyc_funcallvar_177;
    right = __dyc_funcallvar_178;
    new = __dyc_funcallvar_179;


    value = new;


    i ++;
    }
  }
  while_164_break:  ;
  if (limit > 0) {
    {
    new = __dyc_funcallvar_180;
    }
    if ((unsigned long )marker != (unsigned long )((void *)0)) {
      if (0) {
        {
        tmp___437 = __dyc_funcallvar_181;
        __s1_len___21 = (unsigned long )tmp___437;
        tmp___438 = __dyc_funcallvar_182;
        __s2_len___21 = (unsigned long )tmp___438;
        }
        if (! ((unsigned long )((void const   *)(new + 1)) - (unsigned long )((void const   *)new) == 1UL)) {
          goto _L___44;
        } else {
          if (__s1_len___21 >= 4UL) {
            _L___44:  
            if (! ((unsigned long )((void const   *)(value + 1)) - (unsigned long )((void const   *)value) == 1UL)) {
              tmp___439 = 1;
            } else {
              if (__s2_len___21 >= 4UL) {
                tmp___439 = 1;
              } else {
                tmp___439 = 0;
              }
            }
          } else {
            tmp___439 = 0;
          }
        }
        if (tmp___439) {
          {
          tmp___431 = __dyc_funcallvar_183;
          }
        } else {
          {
          tmp___436 = __dyc_funcallvar_184;
          tmp___431 = tmp___436;
          }
        }
      } else {
        {
        tmp___436 = __dyc_funcallvar_185;
        tmp___431 = tmp___436;
        }
      }
      if (tmp___431 != 0) {
        {


        }
      } else {
        {

        value = new;
        }
      }
    } else {
      {

      value = new;
      }
    }
    {

    }
  } else {
    if (limit < 0) {
      {
      new = __dyc_funcallvar_186;
      }
      if ((unsigned long )marker != (unsigned long )((void *)0)) {
        if (0) {
          {
          tmp___455 = __dyc_funcallvar_187;
          __s1_len___22 = (unsigned long )tmp___455;
          tmp___456 = __dyc_funcallvar_188;
          __s2_len___22 = (unsigned long )tmp___456;
          }
          if (! ((unsigned long )((void const   *)(new + 1)) - (unsigned long )((void const   *)new) == 1UL)) {
            goto _L___46;
          } else {
            if (__s1_len___22 >= 4UL) {
              _L___46:  
              if (! ((unsigned long )((void const   *)(value + 1)) - (unsigned long )((void const   *)value) == 1UL)) {
                tmp___457 = 1;
              } else {
                if (__s2_len___22 >= 4UL) {
                  tmp___457 = 1;
                } else {
                  tmp___457 = 0;
                }
              }
            } else {
              tmp___457 = 0;
            }
          }
          if (tmp___457) {
            {
            tmp___449 = __dyc_funcallvar_189;
            }
          } else {
            {
            tmp___454 = __dyc_funcallvar_190;
            tmp___449 = tmp___454;
            }
          }
        } else {
          {
          tmp___454 = __dyc_funcallvar_191;
          tmp___449 = tmp___454;
          }
        }
        if (tmp___449 != 0) {
          {


          }
        } else {
          {

          value = new;
          }
        }
      } else {
        {

        value = new;
        }
      }
      {

      }
    }
  }
  if (width > 0) {
    {
    new = __dyc_funcallvar_192;

    value = new;

    }
  } else {
    if (width < 0) {
      {
      new = __dyc_funcallvar_193;

      value = new;

      }
    }
  }
  if (modifiers & 2048) {
    {
    tmp___458 = __dyc_funcallvar_194;


    value = new;

    }
  }
  if (modifiers & 4096) {
    {
    tmp___459 = __dyc_funcallvar_195;


    value = new;

    }
  }
  valuelen = __dyc_funcallvar_196;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_224window_pane(wp);
  __dyc_print_ptr__char(copy);
  __dyc_print_ptr__char(marker);
  __dyc_print_ptr__char(time_format);
  __dyc_print_ptr__char(condition);
  __dyc_print_ptr__char(found);
  __dyc_print_ptr__char(new);
  __dyc_print_ptr__char(value);
  __dyc_print_ptr__char(left);
  __dyc_print_ptr__char(right);
  __dyc_printpre_byte(c);
  __dyc_printpre_byte(valuelen);
  __dyc_printpre_byte(limit);
  __dyc_printpre_byte(width);
  __dyc_print_ptr__comp_303format_modifier(list);
  __dyc_print_ptr__comp_303format_modifier(cmp);
  __dyc_print_ptr__comp_303format_modifier(search);
  __dyc_print_ptr__ptr__comp_303format_modifier(sub);
  __dyc_print_ptr__comp_303format_modifier(mexp);
  __dyc_printpre_byte(nsub);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
  __dyc_printpre_byte(__s1_len___3);
  __dyc_printpre_byte(__s2_len___3);
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
  __dyc_printpre_byte(__s1_len___5);
  __dyc_printpre_byte(__s2_len___5);
  __dyc_printpre_byte(__s1_len___6);
  __dyc_printpre_byte(__s2_len___6);
  __dyc_printpre_byte(__s1_len___7);
  __dyc_printpre_byte(__s2_len___7);
  __dyc_printpre_byte(__s1_len___8);
  __dyc_printpre_byte(__s2_len___8);
  __dyc_printpre_byte(__s1_len___9);
  __dyc_printpre_byte(__s2_len___9);
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
  __dyc_printpre_byte(tmp___458);
  __dyc_printpre_byte(tmp___459);
}
}
