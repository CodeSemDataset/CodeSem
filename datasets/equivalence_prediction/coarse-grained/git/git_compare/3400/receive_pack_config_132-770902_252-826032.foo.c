#include "../../include/dycfoo.h"
#include "../../include/receive-pack.i.hd.c.h"
void __dyc_foo(void) 
{ int deny_deletes ;
  int deny_non_fast_forwards ;
  enum deny_action deny_current_branch ;
  enum deny_action deny_delete_current ;
  int receive_fsck_objects ;
  int transfer_fsck_objects ;
  struct strbuf fsck_msg_types ;
  int receive_unpack_limit ;
  int transfer_unpack_limit ;
  int advertise_atomic_push ;
  int advertise_push_options ;
  int advertise_sid ;
  off_t max_input_size ;
  int prefer_ofs_delta ;
  int auto_update_server_info ;
  int auto_gc ;
  int shallow_update ;
  timestamp_t nonce_stamp_slop_limit ;
  int keepalive_in_sec ;
  int status ;
  int tmp ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___9 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___27 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___45 ;
  int tmp___50 ;
  int tmp___51 ;
  int tmp___52 ;
  int tmp___53 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___63 ;
  int tmp___68 ;
  int tmp___69 ;
  int tmp___70 ;
  int tmp___71 ;
  int tmp___72 ;
  int tmp___73 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___83 ;
  int tmp___88 ;
  int tmp___89 ;
  int tmp___90 ;
  int tmp___91 ;
  int tmp___92 ;
  int tmp___93 ;
  int tmp___94 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___104 ;
  int tmp___109 ;
  int tmp___110 ;
  int tmp___111 ;
  int tmp___112 ;
  size_t __s1_len___5 ;
  size_t __s2_len___5 ;
  int tmp___122 ;
  int tmp___127 ;
  int tmp___128 ;
  int tmp___129 ;
  int tmp___130 ;
  size_t __s1_len___6 ;
  size_t __s2_len___6 ;
  int tmp___140 ;
  int tmp___145 ;
  int tmp___146 ;
  int tmp___147 ;
  int tmp___148 ;
  size_t __s1_len___7 ;
  size_t __s2_len___7 ;
  int tmp___158 ;
  int tmp___163 ;
  int tmp___164 ;
  int tmp___165 ;
  int tmp___166 ;
  size_t __s1_len___8 ;
  size_t __s2_len___8 ;
  int tmp___176 ;
  int tmp___181 ;
  int tmp___182 ;
  int tmp___183 ;
  int tmp___184 ;
  size_t __s1_len___9 ;
  size_t __s2_len___9 ;
  int tmp___194 ;
  int tmp___199 ;
  int tmp___200 ;
  int tmp___201 ;
  int tmp___202 ;
  size_t __s1_len___10 ;
  size_t __s2_len___10 ;
  int tmp___212 ;
  int tmp___217 ;
  int tmp___218 ;
  int tmp___219 ;
  int tmp___220 ;
  size_t __s1_len___11 ;
  size_t __s2_len___11 ;
  int tmp___230 ;
  int tmp___235 ;
  int tmp___236 ;
  int tmp___237 ;
  int tmp___238 ;
  int tmp___239 ;
  size_t __s1_len___12 ;
  size_t __s2_len___12 ;
  int tmp___249 ;
  int tmp___254 ;
  int tmp___255 ;
  int tmp___256 ;
  int tmp___257 ;
  size_t __s1_len___13 ;
  size_t __s2_len___13 ;
  int tmp___267 ;
  int tmp___272 ;
  int tmp___273 ;
  int tmp___274 ;
  int tmp___275 ;
  size_t __s1_len___14 ;
  size_t __s2_len___14 ;
  int tmp___285 ;
  int tmp___290 ;
  int tmp___291 ;
  int tmp___292 ;
  int tmp___293 ;
  size_t __s1_len___15 ;
  size_t __s2_len___15 ;
  int tmp___303 ;
  int tmp___308 ;
  int tmp___309 ;
  int tmp___310 ;
  int tmp___311 ;
  size_t __s1_len___16 ;
  size_t __s2_len___16 ;
  int tmp___321 ;
  int tmp___326 ;
  int tmp___327 ;
  int tmp___328 ;
  int tmp___329 ;
  int64_t tmp___330 ;
  size_t __s1_len___17 ;
  size_t __s2_len___17 ;
  int tmp___340 ;
  int tmp___345 ;
  int tmp___346 ;
  int tmp___347 ;
  int tmp___348 ;
  int tmp___349 ;
  size_t __s1_len___18 ;
  size_t __s2_len___18 ;
  int tmp___359 ;
  int tmp___364 ;
  int tmp___365 ;
  int tmp___366 ;
  int tmp___367 ;
  size_t __s1_len___19 ;
  size_t __s2_len___19 ;
  int tmp___377 ;
  int tmp___382 ;
  int tmp___383 ;
  int tmp___384 ;
  int tmp___385 ;
  char const   *var ;
  char const   *value ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
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
  int __dyc_funcallvar_44 ;
  int __dyc_funcallvar_45 ;
  int __dyc_funcallvar_46 ;
  int __dyc_funcallvar_47 ;
  int __dyc_funcallvar_48 ;
  int __dyc_funcallvar_49 ;
  int __dyc_funcallvar_50 ;
  enum deny_action __dyc_funcallvar_51 ;
  int __dyc_funcallvar_52 ;
  int __dyc_funcallvar_53 ;
  int __dyc_funcallvar_54 ;
  int __dyc_funcallvar_55 ;
  int __dyc_funcallvar_56 ;
  enum deny_action __dyc_funcallvar_57 ;
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
  unsigned long __dyc_funcallvar_93 ;
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
  int64_t __dyc_funcallvar_117 ;
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

  {
  fsck_msg_types = __dyc_read_comp_365strbuf();
  tmp = __dyc_readpre_byte();
  var = (char const   *)__dyc_read_ptr__char();
  value = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
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
  __dyc_funcallvar_44 = __dyc_readpre_byte();
  __dyc_funcallvar_45 = __dyc_readpre_byte();
  __dyc_funcallvar_46 = __dyc_readpre_byte();
  __dyc_funcallvar_47 = __dyc_readpre_byte();
  __dyc_funcallvar_48 = __dyc_readpre_byte();
  __dyc_funcallvar_49 = __dyc_readpre_byte();
  __dyc_funcallvar_50 = __dyc_readpre_byte();
  __dyc_funcallvar_51 = (enum deny_action )__dyc_readpre_byte();
  __dyc_funcallvar_52 = __dyc_readpre_byte();
  __dyc_funcallvar_53 = __dyc_readpre_byte();
  __dyc_funcallvar_54 = __dyc_readpre_byte();
  __dyc_funcallvar_55 = __dyc_readpre_byte();
  __dyc_funcallvar_56 = __dyc_readpre_byte();
  __dyc_funcallvar_57 = (enum deny_action )__dyc_readpre_byte();
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
  __dyc_funcallvar_93 = (unsigned long )__dyc_readpre_byte();
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
  __dyc_funcallvar_117 = (int64_t )__dyc_readpre_byte();
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
  deny_deletes = 0;
  deny_non_fast_forwards = 0;
  deny_current_branch = 0;
  deny_delete_current = 0;
  receive_fsck_objects = 0;
  transfer_fsck_objects = 0;
  receive_unpack_limit = 0;
  transfer_unpack_limit = 0;
  advertise_atomic_push = 0;
  advertise_push_options = 0;
  advertise_sid = 0;
  max_input_size = 0;
  prefer_ofs_delta = 0;
  auto_update_server_info = 0;
  auto_gc = 0;
  shallow_update = 0;
  nonce_stamp_slop_limit = 0;
  keepalive_in_sec = 0;
  status = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___9 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___27 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___45 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___53 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___63 = 0;
  tmp___68 = 0;
  tmp___69 = 0;
  tmp___70 = 0;
  tmp___71 = 0;
  tmp___72 = 0;
  tmp___73 = 0;
  __s1_len___3 = 0;
  __s2_len___3 = 0;
  tmp___83 = 0;
  tmp___88 = 0;
  tmp___89 = 0;
  tmp___90 = 0;
  tmp___91 = 0;
  tmp___92 = 0;
  tmp___93 = 0;
  tmp___94 = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___104 = 0;
  tmp___109 = 0;
  tmp___110 = 0;
  tmp___111 = 0;
  tmp___112 = 0;
  __s1_len___5 = 0;
  __s2_len___5 = 0;
  tmp___122 = 0;
  tmp___127 = 0;
  tmp___128 = 0;
  tmp___129 = 0;
  tmp___130 = 0;
  __s1_len___6 = 0;
  __s2_len___6 = 0;
  tmp___140 = 0;
  tmp___145 = 0;
  tmp___146 = 0;
  tmp___147 = 0;
  tmp___148 = 0;
  __s1_len___7 = 0;
  __s2_len___7 = 0;
  tmp___158 = 0;
  tmp___163 = 0;
  tmp___164 = 0;
  tmp___165 = 0;
  tmp___166 = 0;
  __s1_len___8 = 0;
  __s2_len___8 = 0;
  tmp___176 = 0;
  tmp___181 = 0;
  tmp___182 = 0;
  tmp___183 = 0;
  tmp___184 = 0;
  __s1_len___9 = 0;
  __s2_len___9 = 0;
  tmp___194 = 0;
  tmp___199 = 0;
  tmp___200 = 0;
  tmp___201 = 0;
  tmp___202 = 0;
  __s1_len___10 = 0;
  __s2_len___10 = 0;
  tmp___212 = 0;
  tmp___217 = 0;
  tmp___218 = 0;
  tmp___219 = 0;
  tmp___220 = 0;
  __s1_len___11 = 0;
  __s2_len___11 = 0;
  tmp___230 = 0;
  tmp___235 = 0;
  tmp___236 = 0;
  tmp___237 = 0;
  tmp___238 = 0;
  tmp___239 = 0;
  __s1_len___12 = 0;
  __s2_len___12 = 0;
  tmp___249 = 0;
  tmp___254 = 0;
  tmp___255 = 0;
  tmp___256 = 0;
  tmp___257 = 0;
  __s1_len___13 = 0;
  __s2_len___13 = 0;
  tmp___267 = 0;
  tmp___272 = 0;
  tmp___273 = 0;
  tmp___274 = 0;
  tmp___275 = 0;
  __s1_len___14 = 0;
  __s2_len___14 = 0;
  tmp___285 = 0;
  tmp___290 = 0;
  tmp___291 = 0;
  tmp___292 = 0;
  tmp___293 = 0;
  __s1_len___15 = 0;
  __s2_len___15 = 0;
  tmp___303 = 0;
  tmp___308 = 0;
  tmp___309 = 0;
  tmp___310 = 0;
  tmp___311 = 0;
  __s1_len___16 = 0;
  __s2_len___16 = 0;
  tmp___321 = 0;
  tmp___326 = 0;
  tmp___327 = 0;
  tmp___328 = 0;
  tmp___329 = 0;
  tmp___330 = 0;
  __s1_len___17 = 0;
  __s2_len___17 = 0;
  tmp___340 = 0;
  tmp___345 = 0;
  tmp___346 = 0;
  tmp___347 = 0;
  tmp___348 = 0;
  tmp___349 = 0;
  __s1_len___18 = 0;
  __s2_len___18 = 0;
  tmp___359 = 0;
  tmp___364 = 0;
  tmp___365 = 0;
  tmp___366 = 0;
  tmp___367 = 0;
  __s1_len___19 = 0;
  __s2_len___19 = 0;
  tmp___377 = 0;
  tmp___382 = 0;
  tmp___383 = 0;
  tmp___384 = 0;
  tmp___385 = 0;
  status = tmp;
  if (status) {
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___15 = __dyc_funcallvar_2;
    __s1_len = (unsigned long )tmp___15;
    tmp___16 = __dyc_funcallvar_3;
    __s2_len = (unsigned long )tmp___16;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___0;
    } else {
      if (__s1_len >= 4UL) {
        _L___0:  
        if (! ((unsigned long )((void const   *)("receive.denydeletes" + 1)) - (unsigned long )((void const   *)"receive.denydeletes") == 1UL)) {
          tmp___17 = 1;
        } else {
          if (__s2_len >= 4UL) {
            tmp___17 = 1;
          } else {
            tmp___17 = 0;
          }
        }
      } else {
        tmp___17 = 0;
      }
    }
    if (tmp___17) {
      {
      tmp___9 = __dyc_funcallvar_4;
      }
    } else {
      {
      tmp___14 = __dyc_funcallvar_5;
      tmp___9 = tmp___14;
      }
    }
  } else {
    {
    tmp___14 = __dyc_funcallvar_6;
    tmp___9 = tmp___14;
    }
  }
  if (tmp___9 == 0) {
    {
    deny_deletes = __dyc_funcallvar_7;
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___33 = __dyc_funcallvar_8;
    __s1_len___0 = (unsigned long )tmp___33;
    tmp___34 = __dyc_funcallvar_9;
    __s2_len___0 = (unsigned long )tmp___34;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___2;
    } else {
      if (__s1_len___0 >= 4UL) {
        _L___2:  
        if (! ((unsigned long )((void const   *)("receive.denynonfastforwards" + 1)) - (unsigned long )((void const   *)"receive.denynonfastforwards") == 1UL)) {
          tmp___35 = 1;
        } else {
          if (__s2_len___0 >= 4UL) {
            tmp___35 = 1;
          } else {
            tmp___35 = 0;
          }
        }
      } else {
        tmp___35 = 0;
      }
    }
    if (tmp___35) {
      {
      tmp___27 = __dyc_funcallvar_10;
      }
    } else {
      {
      tmp___32 = __dyc_funcallvar_11;
      tmp___27 = tmp___32;
      }
    }
  } else {
    {
    tmp___32 = __dyc_funcallvar_12;
    tmp___27 = tmp___32;
    }
  }
  if (tmp___27 == 0) {
    {
    deny_non_fast_forwards = __dyc_funcallvar_13;
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___51 = __dyc_funcallvar_14;
    __s1_len___1 = (unsigned long )tmp___51;
    tmp___52 = __dyc_funcallvar_15;
    __s2_len___1 = (unsigned long )tmp___52;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___4;
    } else {
      if (__s1_len___1 >= 4UL) {
        _L___4:  
        if (! ((unsigned long )((void const   *)("receive.unpacklimit" + 1)) - (unsigned long )((void const   *)"receive.unpacklimit") == 1UL)) {
          tmp___53 = 1;
        } else {
          if (__s2_len___1 >= 4UL) {
            tmp___53 = 1;
          } else {
            tmp___53 = 0;
          }
        }
      } else {
        tmp___53 = 0;
      }
    }
    if (tmp___53) {
      {
      tmp___45 = __dyc_funcallvar_16;
      }
    } else {
      {
      tmp___50 = __dyc_funcallvar_17;
      tmp___45 = tmp___50;
      }
    }
  } else {
    {
    tmp___50 = __dyc_funcallvar_18;
    tmp___45 = tmp___50;
    }
  }
  if (tmp___45 == 0) {
    {
    receive_unpack_limit = __dyc_funcallvar_19;
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___69 = __dyc_funcallvar_20;
    __s1_len___2 = (unsigned long )tmp___69;
    tmp___70 = __dyc_funcallvar_21;
    __s2_len___2 = (unsigned long )tmp___70;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___6;
    } else {
      if (__s1_len___2 >= 4UL) {
        _L___6:  
        if (! ((unsigned long )((void const   *)("transfer.unpacklimit" + 1)) - (unsigned long )((void const   *)"transfer.unpacklimit") == 1UL)) {
          tmp___71 = 1;
        } else {
          if (__s2_len___2 >= 4UL) {
            tmp___71 = 1;
          } else {
            tmp___71 = 0;
          }
        }
      } else {
        tmp___71 = 0;
      }
    }
    if (tmp___71) {
      {
      tmp___63 = __dyc_funcallvar_22;
      }
    } else {
      {
      tmp___68 = __dyc_funcallvar_23;
      tmp___63 = tmp___68;
      }
    }
  } else {
    {
    tmp___68 = __dyc_funcallvar_24;
    tmp___63 = tmp___68;
    }
  }
  if (tmp___63 == 0) {
    {
    transfer_unpack_limit = __dyc_funcallvar_25;
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___89 = __dyc_funcallvar_26;
    __s1_len___3 = (unsigned long )tmp___89;
    tmp___90 = __dyc_funcallvar_27;
    __s2_len___3 = (unsigned long )tmp___90;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___8;
    } else {
      if (__s1_len___3 >= 4UL) {
        _L___8:  
        if (! ((unsigned long )((void const   *)("receive.fsck.skiplist" + 1)) - (unsigned long )((void const   *)"receive.fsck.skiplist") == 1UL)) {
          tmp___91 = 1;
        } else {
          if (__s2_len___3 >= 4UL) {
            tmp___91 = 1;
          } else {
            tmp___91 = 0;
          }
        }
      } else {
        tmp___91 = 0;
      }
    }
    if (tmp___91) {
      {
      tmp___83 = __dyc_funcallvar_28;
      }
    } else {
      {
      tmp___88 = __dyc_funcallvar_29;
      tmp___83 = tmp___88;
      }
    }
  } else {
    {
    tmp___88 = __dyc_funcallvar_30;
    tmp___83 = tmp___88;
    }
  }
  if (tmp___83 == 0) {
    {
    tmp___72 = __dyc_funcallvar_31;
    }
    if (tmp___72) {
      goto __dyc_dummy_label;
    }
    if (fsck_msg_types.len) {
      tmp___73 = ',';
    } else {
      tmp___73 = '=';
    }
    {


    }
    goto __dyc_dummy_label;
  }
  tmp___94 = __dyc_funcallvar_32;
  if (tmp___94) {
    {
    tmp___93 = __dyc_funcallvar_33;
    }
    if (tmp___93) {
      if (fsck_msg_types.len) {
        tmp___92 = ',';
      } else {
        tmp___92 = '=';
      }
      {

      }
    } else {
      {

      }
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___110 = __dyc_funcallvar_34;
    __s1_len___4 = (unsigned long )tmp___110;
    tmp___111 = __dyc_funcallvar_35;
    __s2_len___4 = (unsigned long )tmp___111;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___10;
    } else {
      if (__s1_len___4 >= 4UL) {
        _L___10:  
        if (! ((unsigned long )((void const   *)("receive.fsckobjects" + 1)) - (unsigned long )((void const   *)"receive.fsckobjects") == 1UL)) {
          tmp___112 = 1;
        } else {
          if (__s2_len___4 >= 4UL) {
            tmp___112 = 1;
          } else {
            tmp___112 = 0;
          }
        }
      } else {
        tmp___112 = 0;
      }
    }
    if (tmp___112) {
      {
      tmp___104 = __dyc_funcallvar_36;
      }
    } else {
      {
      tmp___109 = __dyc_funcallvar_37;
      tmp___104 = tmp___109;
      }
    }
  } else {
    {
    tmp___109 = __dyc_funcallvar_38;
    tmp___104 = tmp___109;
    }
  }
  if (tmp___104 == 0) {
    {
    receive_fsck_objects = __dyc_funcallvar_39;
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___128 = __dyc_funcallvar_40;
    __s1_len___5 = (unsigned long )tmp___128;
    tmp___129 = __dyc_funcallvar_41;
    __s2_len___5 = (unsigned long )tmp___129;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___12;
    } else {
      if (__s1_len___5 >= 4UL) {
        _L___12:  
        if (! ((unsigned long )((void const   *)("transfer.fsckobjects" + 1)) - (unsigned long )((void const   *)"transfer.fsckobjects") == 1UL)) {
          tmp___130 = 1;
        } else {
          if (__s2_len___5 >= 4UL) {
            tmp___130 = 1;
          } else {
            tmp___130 = 0;
          }
        }
      } else {
        tmp___130 = 0;
      }
    }
    if (tmp___130) {
      {
      tmp___122 = __dyc_funcallvar_42;
      }
    } else {
      {
      tmp___127 = __dyc_funcallvar_43;
      tmp___122 = tmp___127;
      }
    }
  } else {
    {
    tmp___127 = __dyc_funcallvar_44;
    tmp___122 = tmp___127;
    }
  }
  if (tmp___122 == 0) {
    {
    transfer_fsck_objects = __dyc_funcallvar_45;
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___146 = __dyc_funcallvar_46;
    __s1_len___6 = (unsigned long )tmp___146;
    tmp___147 = __dyc_funcallvar_47;
    __s2_len___6 = (unsigned long )tmp___147;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___14;
    } else {
      if (__s1_len___6 >= 4UL) {
        _L___14:  
        if (! ((unsigned long )((void const   *)("receive.denycurrentbranch" + 1)) - (unsigned long )((void const   *)"receive.denycurrentbranch") == 1UL)) {
          tmp___148 = 1;
        } else {
          if (__s2_len___6 >= 4UL) {
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
      tmp___140 = __dyc_funcallvar_48;
      }
    } else {
      {
      tmp___145 = __dyc_funcallvar_49;
      tmp___140 = tmp___145;
      }
    }
  } else {
    {
    tmp___145 = __dyc_funcallvar_50;
    tmp___140 = tmp___145;
    }
  }
  if (! tmp___140) {
    {
    deny_current_branch = __dyc_funcallvar_51;
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___164 = __dyc_funcallvar_52;
    __s1_len___7 = (unsigned long )tmp___164;
    tmp___165 = __dyc_funcallvar_53;
    __s2_len___7 = (unsigned long )tmp___165;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___16;
    } else {
      if (__s1_len___7 >= 4UL) {
        _L___16:  
        if (! ((unsigned long )((void const   *)("receive.denydeletecurrent" + 1)) - (unsigned long )((void const   *)"receive.denydeletecurrent") == 1UL)) {
          tmp___166 = 1;
        } else {
          if (__s2_len___7 >= 4UL) {
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
      tmp___158 = __dyc_funcallvar_54;
      }
    } else {
      {
      tmp___163 = __dyc_funcallvar_55;
      tmp___158 = tmp___163;
      }
    }
  } else {
    {
    tmp___163 = __dyc_funcallvar_56;
    tmp___158 = tmp___163;
    }
  }
  if (tmp___158 == 0) {
    {
    deny_delete_current = __dyc_funcallvar_57;
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___182 = __dyc_funcallvar_58;
    __s1_len___8 = (unsigned long )tmp___182;
    tmp___183 = __dyc_funcallvar_59;
    __s2_len___8 = (unsigned long )tmp___183;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___18;
    } else {
      if (__s1_len___8 >= 4UL) {
        _L___18:  
        if (! ((unsigned long )((void const   *)("repack.usedeltabaseoffset" + 1)) - (unsigned long )((void const   *)"repack.usedeltabaseoffset") == 1UL)) {
          tmp___184 = 1;
        } else {
          if (__s2_len___8 >= 4UL) {
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
      tmp___176 = __dyc_funcallvar_60;
      }
    } else {
      {
      tmp___181 = __dyc_funcallvar_61;
      tmp___176 = tmp___181;
      }
    }
  } else {
    {
    tmp___181 = __dyc_funcallvar_62;
    tmp___176 = tmp___181;
    }
  }
  if (tmp___176 == 0) {
    {
    prefer_ofs_delta = __dyc_funcallvar_63;
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___200 = __dyc_funcallvar_64;
    __s1_len___9 = (unsigned long )tmp___200;
    tmp___201 = __dyc_funcallvar_65;
    __s2_len___9 = (unsigned long )tmp___201;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___20;
    } else {
      if (__s1_len___9 >= 4UL) {
        _L___20:  
        if (! ((unsigned long )((void const   *)("receive.updateserverinfo" + 1)) - (unsigned long )((void const   *)"receive.updateserverinfo") == 1UL)) {
          tmp___202 = 1;
        } else {
          if (__s2_len___9 >= 4UL) {
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
      tmp___194 = __dyc_funcallvar_66;
      }
    } else {
      {
      tmp___199 = __dyc_funcallvar_67;
      tmp___194 = tmp___199;
      }
    }
  } else {
    {
    tmp___199 = __dyc_funcallvar_68;
    tmp___194 = tmp___199;
    }
  }
  if (tmp___194 == 0) {
    {
    auto_update_server_info = __dyc_funcallvar_69;
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___218 = __dyc_funcallvar_70;
    __s1_len___10 = (unsigned long )tmp___218;
    tmp___219 = __dyc_funcallvar_71;
    __s2_len___10 = (unsigned long )tmp___219;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___22;
    } else {
      if (__s1_len___10 >= 4UL) {
        _L___22:  
        if (! ((unsigned long )((void const   *)("receive.autogc" + 1)) - (unsigned long )((void const   *)"receive.autogc") == 1UL)) {
          tmp___220 = 1;
        } else {
          if (__s2_len___10 >= 4UL) {
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
      tmp___212 = __dyc_funcallvar_72;
      }
    } else {
      {
      tmp___217 = __dyc_funcallvar_73;
      tmp___212 = tmp___217;
      }
    }
  } else {
    {
    tmp___217 = __dyc_funcallvar_74;
    tmp___212 = tmp___217;
    }
  }
  if (tmp___212 == 0) {
    {
    auto_gc = __dyc_funcallvar_75;
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___236 = __dyc_funcallvar_76;
    __s1_len___11 = (unsigned long )tmp___236;
    tmp___237 = __dyc_funcallvar_77;
    __s2_len___11 = (unsigned long )tmp___237;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___24;
    } else {
      if (__s1_len___11 >= 4UL) {
        _L___24:  
        if (! ((unsigned long )((void const   *)("receive.shallowupdate" + 1)) - (unsigned long )((void const   *)"receive.shallowupdate") == 1UL)) {
          tmp___238 = 1;
        } else {
          if (__s2_len___11 >= 4UL) {
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
      tmp___230 = __dyc_funcallvar_78;
      }
    } else {
      {
      tmp___235 = __dyc_funcallvar_79;
      tmp___230 = tmp___235;
      }
    }
  } else {
    {
    tmp___235 = __dyc_funcallvar_80;
    tmp___230 = tmp___235;
    }
  }
  if (tmp___230 == 0) {
    {
    shallow_update = __dyc_funcallvar_81;
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___255 = __dyc_funcallvar_82;
    __s1_len___12 = (unsigned long )tmp___255;
    tmp___256 = __dyc_funcallvar_83;
    __s2_len___12 = (unsigned long )tmp___256;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___26;
    } else {
      if (__s1_len___12 >= 4UL) {
        _L___26:  
        if (! ((unsigned long )((void const   *)("receive.certnonceseed" + 1)) - (unsigned long )((void const   *)"receive.certnonceseed") == 1UL)) {
          tmp___257 = 1;
        } else {
          if (__s2_len___12 >= 4UL) {
            tmp___257 = 1;
          } else {
            tmp___257 = 0;
          }
        }
      } else {
        tmp___257 = 0;
      }
    }
    if (tmp___257) {
      {
      tmp___249 = __dyc_funcallvar_84;
      }
    } else {
      {
      tmp___254 = __dyc_funcallvar_85;
      tmp___249 = tmp___254;
      }
    }
  } else {
    {
    tmp___254 = __dyc_funcallvar_86;
    tmp___249 = tmp___254;
    }
  }
  if (tmp___249 == 0) {
    {
    tmp___239 = __dyc_funcallvar_87;
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___273 = __dyc_funcallvar_88;
    __s1_len___13 = (unsigned long )tmp___273;
    tmp___274 = __dyc_funcallvar_89;
    __s2_len___13 = (unsigned long )tmp___274;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___28;
    } else {
      if (__s1_len___13 >= 4UL) {
        _L___28:  
        if (! ((unsigned long )((void const   *)("receive.certnonceslop" + 1)) - (unsigned long )((void const   *)"receive.certnonceslop") == 1UL)) {
          tmp___275 = 1;
        } else {
          if (__s2_len___13 >= 4UL) {
            tmp___275 = 1;
          } else {
            tmp___275 = 0;
          }
        }
      } else {
        tmp___275 = 0;
      }
    }
    if (tmp___275) {
      {
      tmp___267 = __dyc_funcallvar_90;
      }
    } else {
      {
      tmp___272 = __dyc_funcallvar_91;
      tmp___267 = tmp___272;
      }
    }
  } else {
    {
    tmp___272 = __dyc_funcallvar_92;
    tmp___267 = tmp___272;
    }
  }
  if (tmp___267 == 0) {
    {
    nonce_stamp_slop_limit = __dyc_funcallvar_93;
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___291 = __dyc_funcallvar_94;
    __s1_len___14 = (unsigned long )tmp___291;
    tmp___292 = __dyc_funcallvar_95;
    __s2_len___14 = (unsigned long )tmp___292;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___30;
    } else {
      if (__s1_len___14 >= 4UL) {
        _L___30:  
        if (! ((unsigned long )((void const   *)("receive.advertiseatomic" + 1)) - (unsigned long )((void const   *)"receive.advertiseatomic") == 1UL)) {
          tmp___293 = 1;
        } else {
          if (__s2_len___14 >= 4UL) {
            tmp___293 = 1;
          } else {
            tmp___293 = 0;
          }
        }
      } else {
        tmp___293 = 0;
      }
    }
    if (tmp___293) {
      {
      tmp___285 = __dyc_funcallvar_96;
      }
    } else {
      {
      tmp___290 = __dyc_funcallvar_97;
      tmp___285 = tmp___290;
      }
    }
  } else {
    {
    tmp___290 = __dyc_funcallvar_98;
    tmp___285 = tmp___290;
    }
  }
  if (tmp___285 == 0) {
    {
    advertise_atomic_push = __dyc_funcallvar_99;
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___309 = __dyc_funcallvar_100;
    __s1_len___15 = (unsigned long )tmp___309;
    tmp___310 = __dyc_funcallvar_101;
    __s2_len___15 = (unsigned long )tmp___310;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___32;
    } else {
      if (__s1_len___15 >= 4UL) {
        _L___32:  
        if (! ((unsigned long )((void const   *)("receive.advertisepushoptions" + 1)) - (unsigned long )((void const   *)"receive.advertisepushoptions") == 1UL)) {
          tmp___311 = 1;
        } else {
          if (__s2_len___15 >= 4UL) {
            tmp___311 = 1;
          } else {
            tmp___311 = 0;
          }
        }
      } else {
        tmp___311 = 0;
      }
    }
    if (tmp___311) {
      {
      tmp___303 = __dyc_funcallvar_102;
      }
    } else {
      {
      tmp___308 = __dyc_funcallvar_103;
      tmp___303 = tmp___308;
      }
    }
  } else {
    {
    tmp___308 = __dyc_funcallvar_104;
    tmp___303 = tmp___308;
    }
  }
  if (tmp___303 == 0) {
    {
    advertise_push_options = __dyc_funcallvar_105;
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___327 = __dyc_funcallvar_106;
    __s1_len___16 = (unsigned long )tmp___327;
    tmp___328 = __dyc_funcallvar_107;
    __s2_len___16 = (unsigned long )tmp___328;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___34;
    } else {
      if (__s1_len___16 >= 4UL) {
        _L___34:  
        if (! ((unsigned long )((void const   *)("receive.keepalive" + 1)) - (unsigned long )((void const   *)"receive.keepalive") == 1UL)) {
          tmp___329 = 1;
        } else {
          if (__s2_len___16 >= 4UL) {
            tmp___329 = 1;
          } else {
            tmp___329 = 0;
          }
        }
      } else {
        tmp___329 = 0;
      }
    }
    if (tmp___329) {
      {
      tmp___321 = __dyc_funcallvar_108;
      }
    } else {
      {
      tmp___326 = __dyc_funcallvar_109;
      tmp___321 = tmp___326;
      }
    }
  } else {
    {
    tmp___326 = __dyc_funcallvar_110;
    tmp___321 = tmp___326;
    }
  }
  if (tmp___321 == 0) {
    {
    keepalive_in_sec = __dyc_funcallvar_111;
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___346 = __dyc_funcallvar_112;
    __s1_len___17 = (unsigned long )tmp___346;
    tmp___347 = __dyc_funcallvar_113;
    __s2_len___17 = (unsigned long )tmp___347;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___36;
    } else {
      if (__s1_len___17 >= 4UL) {
        _L___36:  
        if (! ((unsigned long )((void const   *)("receive.maxinputsize" + 1)) - (unsigned long )((void const   *)"receive.maxinputsize") == 1UL)) {
          tmp___348 = 1;
        } else {
          if (__s2_len___17 >= 4UL) {
            tmp___348 = 1;
          } else {
            tmp___348 = 0;
          }
        }
      } else {
        tmp___348 = 0;
      }
    }
    if (tmp___348) {
      {
      tmp___340 = __dyc_funcallvar_114;
      }
    } else {
      {
      tmp___345 = __dyc_funcallvar_115;
      tmp___340 = tmp___345;
      }
    }
  } else {
    {
    tmp___345 = __dyc_funcallvar_116;
    tmp___340 = tmp___345;
    }
  }
  if (tmp___340 == 0) {
    {
    tmp___330 = __dyc_funcallvar_117;
    max_input_size = (long )tmp___330;
    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___365 = __dyc_funcallvar_118;
    __s1_len___18 = (unsigned long )tmp___365;
    tmp___366 = __dyc_funcallvar_119;
    __s2_len___18 = (unsigned long )tmp___366;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___38;
    } else {
      if (__s1_len___18 >= 4UL) {
        _L___38:  
        if (! ((unsigned long )((void const   *)("receive.procreceiverefs" + 1)) - (unsigned long )((void const   *)"receive.procreceiverefs") == 1UL)) {
          tmp___367 = 1;
        } else {
          if (__s2_len___18 >= 4UL) {
            tmp___367 = 1;
          } else {
            tmp___367 = 0;
          }
        }
      } else {
        tmp___367 = 0;
      }
    }
    if (tmp___367) {
      {
      tmp___359 = __dyc_funcallvar_120;
      }
    } else {
      {
      tmp___364 = __dyc_funcallvar_121;
      tmp___359 = tmp___364;
      }
    }
  } else {
    {
    tmp___364 = __dyc_funcallvar_122;
    tmp___359 = tmp___364;
    }
  }
  if (tmp___359 == 0) {
    if (! value) {
      {

      tmp___349 = __dyc_funcallvar_123;
      }
      goto __dyc_dummy_label;
    }
    {

    }
    goto __dyc_dummy_label;
  }
  if (0) {
    {
    tmp___383 = __dyc_funcallvar_124;
    __s1_len___19 = (unsigned long )tmp___383;
    tmp___384 = __dyc_funcallvar_125;
    __s2_len___19 = (unsigned long )tmp___384;
    }
    if (! ((unsigned long )((void const   *)(var + 1)) - (unsigned long )((void const   *)var) == 1UL)) {
      goto _L___40;
    } else {
      if (__s1_len___19 >= 4UL) {
        _L___40:  
        if (! ((unsigned long )((void const   *)("transfer.advertisesid" + 1)) - (unsigned long )((void const   *)"transfer.advertisesid") == 1UL)) {
          tmp___385 = 1;
        } else {
          if (__s2_len___19 >= 4UL) {
            tmp___385 = 1;
          } else {
            tmp___385 = 0;
          }
        }
      } else {
        tmp___385 = 0;
      }
    }
    if (tmp___385) {
      {
      tmp___377 = __dyc_funcallvar_126;
      }
    } else {
      {
      tmp___382 = __dyc_funcallvar_127;
      tmp___377 = tmp___382;
      }
    }
  } else {
    {
    tmp___382 = __dyc_funcallvar_128;
    tmp___377 = tmp___382;
    }
  }
  if (tmp___377 == 0) {
    {
    advertise_sid = __dyc_funcallvar_129;
    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(deny_deletes);
  __dyc_printpre_byte(deny_non_fast_forwards);
  __dyc_printpre_byte(deny_current_branch);
  __dyc_printpre_byte(deny_delete_current);
  __dyc_printpre_byte(receive_fsck_objects);
  __dyc_printpre_byte(transfer_fsck_objects);
  __dyc_printpre_byte(receive_unpack_limit);
  __dyc_printpre_byte(transfer_unpack_limit);
  __dyc_printpre_byte(advertise_atomic_push);
  __dyc_printpre_byte(advertise_push_options);
  __dyc_printpre_byte(advertise_sid);
  __dyc_printpre_byte(max_input_size);
  __dyc_printpre_byte(prefer_ofs_delta);
  __dyc_printpre_byte(auto_update_server_info);
  __dyc_printpre_byte(auto_gc);
  __dyc_printpre_byte(shallow_update);
  __dyc_printpre_byte(nonce_stamp_slop_limit);
  __dyc_printpre_byte(keepalive_in_sec);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
  __dyc_printpre_byte(tmp___73);
  __dyc_printpre_byte(__s1_len___3);
  __dyc_printpre_byte(__s2_len___3);
  __dyc_printpre_byte(tmp___92);
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
  __dyc_printpre_byte(tmp___239);
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
  __dyc_printpre_byte(tmp___349);
  __dyc_printpre_byte(__s1_len___18);
  __dyc_printpre_byte(__s2_len___18);
  __dyc_printpre_byte(__s1_len___19);
  __dyc_printpre_byte(__s2_len___19);
}
}
