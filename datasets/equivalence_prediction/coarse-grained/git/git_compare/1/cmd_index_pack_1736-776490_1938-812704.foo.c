#include "../../include/dycfoo.h"
#include "../../include/index-pack.i.hd.c.h"
void __dyc_foo(void) 
{ int read_replace_refs ;
  struct startup_info *startup_info ;
  struct object_entry *objects ;
  struct object_stat *obj_stat ;
  struct ofs_delta_entry *ofs_deltas ;
  int nr_objects ;
  int nr_threads ;
  int from_stdin ;
  int strict ;
  int do_fsck_object ;
  struct fsck_options fsck_options ;
  int verbose ;
  int show_resolving_progress ;
  int show_stat ;
  int check_self_contained_and_connected ;
  unsigned char input_buffer[4096] ;
  unsigned int input_len ;
  off_t max_input_size ;
  char const   *curr_pack ;
  int (*mark_link)(struct object *obj , enum object_type type , void *data ,
                   struct fsck_options *options ) ;
  int i ;
  int fix_thin_pack ;
  int verify ;
  int stat_only ;
  int rev_index ;
  char const   *curr_index ;
  char const   *curr_rev_index ;
  char const   *index_name ;
  char const   *pack_name ;
  char const   *rev_index_name ;
  struct pack_idx_entry **idx_objects ;
  struct pack_idx_option opts ;
  unsigned int foreign_nr ;
  int report_end_of_input ;
  int hash_algo ;
  char const __attribute__((__format_arg__(1)))  *tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  char const   *arg ;
  char *end ;
  unsigned long tmp___20 ;
  struct pack_header *hdr ;
  char *c ;
  unsigned long tmp___22 ;
  char const __attribute__((__format_arg__(1)))  *tmp___23 ;
  unsigned long tmp___24 ;
  char const __attribute__((__format_arg__(1)))  *tmp___25 ;
  char *c___0 ;
  unsigned long tmp___26 ;
  char const __attribute__((__format_arg__(1)))  *tmp___27 ;
  unsigned long tmp___28 ;
  char const __attribute__((__format_arg__(1)))  *tmp___29 ;
  uintmax_t __attribute__((__leaf__))  tmp___30 ;
  char const __attribute__((__format_arg__(1)))  *tmp___31 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___41 ;
  int tmp___46 ;
  int tmp___47 ;
  int tmp___48 ;
  int tmp___49 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___59 ;
  int tmp___64 ;
  int tmp___65 ;
  int tmp___66 ;
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
  size_t __s1_len___5 ;
  size_t __s2_len___5 ;
  int tmp___134 ;
  int tmp___139 ;
  int tmp___140 ;
  int tmp___141 ;
  int tmp___142 ;
  int tmp___143 ;
  int tmp___144 ;
  int tmp___145 ;
  int tmp___146 ;
  size_t __s1_len___6 ;
  size_t __s2_len___6 ;
  int tmp___156 ;
  int tmp___161 ;
  int tmp___162 ;
  int tmp___163 ;
  int tmp___164 ;
  size_t __s1_len___7 ;
  size_t __s2_len___7 ;
  int tmp___174 ;
  int tmp___179 ;
  int tmp___180 ;
  int tmp___181 ;
  int tmp___182 ;
  size_t __s1_len___8 ;
  size_t __s2_len___8 ;
  int tmp___192 ;
  int tmp___197 ;
  int tmp___198 ;
  int tmp___199 ;
  int tmp___200 ;
  size_t __s1_len___9 ;
  size_t __s2_len___9 ;
  int tmp___210 ;
  int tmp___215 ;
  int tmp___216 ;
  int tmp___217 ;
  int tmp___218 ;
  size_t __s1_len___10 ;
  size_t __s2_len___10 ;
  int tmp___228 ;
  int tmp___233 ;
  int tmp___234 ;
  int tmp___235 ;
  int tmp___236 ;
  int tmp___237 ;
  size_t __s1_len___11 ;
  size_t __s2_len___11 ;
  int tmp___247 ;
  int tmp___252 ;
  int tmp___253 ;
  int tmp___254 ;
  int tmp___255 ;
  size_t __s1_len___12 ;
  size_t __s2_len___12 ;
  int tmp___265 ;
  int tmp___270 ;
  int tmp___271 ;
  int tmp___272 ;
  int tmp___273 ;
  char const __attribute__((__format_arg__(1)))  *tmp___274 ;
  char const __attribute__((__format_arg__(1)))  *tmp___275 ;
  char const __attribute__((__format_arg__(1)))  *tmp___276 ;
  int tmp___277 ;
  char const __attribute__((__format_arg__(1)))  *tmp___278 ;
  size_t tmp___279 ;
  void *tmp___280 ;
  size_t tmp___281 ;
  void *tmp___282 ;
  void *tmp___283 ;
  size_t tmp___284 ;
  void *tmp___285 ;
  char const __attribute__((__format_arg__(1)))  *tmp___286 ;
  int tmp___287 ;
  int argc ;
  char const   **argv ;
  char const   *prefix ;
  int __dyc_funcallvar_6 ;
  char const __attribute__((__format_arg__(1)))  *__dyc_funcallvar_7 ;
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
  unsigned long __dyc_funcallvar_48 ;
  int __dyc_funcallvar_49 ;
  uint32_t __dyc_funcallvar_50 ;
  unsigned long __dyc_funcallvar_51 ;
  uint32_t __dyc_funcallvar_52 ;
  char const __attribute__((__format_arg__(1)))  *__dyc_funcallvar_53 ;
  unsigned long __dyc_funcallvar_54 ;
  uint32_t __dyc_funcallvar_55 ;
  char const __attribute__((__format_arg__(1)))  *__dyc_funcallvar_56 ;
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
  unsigned long __dyc_funcallvar_78 ;
  char const __attribute__((__format_arg__(1)))  *__dyc_funcallvar_79 ;
  unsigned long __dyc_funcallvar_80 ;
  char const __attribute__((__format_arg__(1)))  *__dyc_funcallvar_81 ;
  char const __attribute__((__format_arg__(1)))  *__dyc_funcallvar_82 ;
  int __dyc_funcallvar_83 ;
  uintmax_t __attribute__((__leaf__))  __dyc_funcallvar_84 ;
  int __dyc_funcallvar_85 ;
  int __dyc_funcallvar_86 ;
  char const __attribute__((__format_arg__(1)))  *__dyc_funcallvar_87 ;
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
  char const __attribute__((__format_arg__(1)))  *__dyc_funcallvar_98 ;
  char const __attribute__((__format_arg__(1)))  *__dyc_funcallvar_99 ;
  char const __attribute__((__format_arg__(1)))  *__dyc_funcallvar_100 ;
  char const   *__dyc_funcallvar_101 ;
  char const   *__dyc_funcallvar_102 ;
  char const __attribute__((__format_arg__(1)))  *__dyc_funcallvar_103 ;
  int __dyc_funcallvar_104 ;
  char const   *__dyc_funcallvar_105 ;
  size_t __dyc_funcallvar_106 ;
  void *__dyc_funcallvar_107 ;
  size_t __dyc_funcallvar_108 ;
  void *__dyc_funcallvar_109 ;
  void *__dyc_funcallvar_110 ;
  unsigned int __dyc_funcallvar_111 ;
  size_t __dyc_funcallvar_112 ;
  void *__dyc_funcallvar_113 ;
  char const   *__dyc_funcallvar_114 ;
  char const   *__dyc_funcallvar_115 ;
  int __dyc_funcallvar_116 ;
  char const __attribute__((__format_arg__(1)))  *__dyc_funcallvar_117 ;

  {
  startup_info = __dyc_read_ptr__comp_470startup_info();
  nr_objects = __dyc_readpre_byte();
  nr_threads = __dyc_readpre_byte();
  from_stdin = __dyc_readpre_byte();
  strict = __dyc_readpre_byte();
  do_fsck_object = __dyc_readpre_byte();
  show_stat = __dyc_readpre_byte();
  fix_thin_pack = __dyc_readpre_byte();
  verify = __dyc_readpre_byte();
  index_name = (char const   *)__dyc_read_ptr__char();
  pack_name = (char const   *)__dyc_read_ptr__char();
  rev_index_name = (char const   *)__dyc_read_ptr__char();
  opts = __dyc_read_comp_505pack_idx_option();
  report_end_of_input = __dyc_readpre_byte();
  hash_algo = __dyc_readpre_byte();
  end = __dyc_read_ptr__char();
  c = __dyc_read_ptr__char();
  c___0 = __dyc_read_ptr__char();
  argc = __dyc_readpre_byte();
  argv = (char const   **)__dyc_read_ptr__ptr__char();
  prefix = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = (char const __attribute__((__format_arg__(1)))  *)__dyc_read_ptr__char();
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
  __dyc_funcallvar_48 = (unsigned long )__dyc_readpre_byte();
  __dyc_funcallvar_49 = __dyc_readpre_byte();
  __dyc_funcallvar_50 = (uint32_t )__dyc_readpre_byte();
  __dyc_funcallvar_51 = (unsigned long )__dyc_readpre_byte();
  __dyc_funcallvar_52 = (uint32_t )__dyc_readpre_byte();
  __dyc_funcallvar_53 = (char const __attribute__((__format_arg__(1)))  *)__dyc_read_ptr__char();
  __dyc_funcallvar_54 = (unsigned long )__dyc_readpre_byte();
  __dyc_funcallvar_55 = (uint32_t )__dyc_readpre_byte();
  __dyc_funcallvar_56 = (char const __attribute__((__format_arg__(1)))  *)__dyc_read_ptr__char();
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
  __dyc_funcallvar_78 = (unsigned long )__dyc_readpre_byte();
  __dyc_funcallvar_79 = (char const __attribute__((__format_arg__(1)))  *)__dyc_read_ptr__char();
  __dyc_funcallvar_80 = (unsigned long )__dyc_readpre_byte();
  __dyc_funcallvar_81 = (char const __attribute__((__format_arg__(1)))  *)__dyc_read_ptr__char();
  __dyc_funcallvar_82 = (char const __attribute__((__format_arg__(1)))  *)__dyc_read_ptr__char();
  __dyc_funcallvar_83 = __dyc_readpre_byte();
  __dyc_funcallvar_84 = (uintmax_t __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_85 = __dyc_readpre_byte();
  __dyc_funcallvar_86 = __dyc_readpre_byte();
  __dyc_funcallvar_87 = (char const __attribute__((__format_arg__(1)))  *)__dyc_read_ptr__char();
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
  __dyc_funcallvar_98 = (char const __attribute__((__format_arg__(1)))  *)__dyc_read_ptr__char();
  __dyc_funcallvar_99 = (char const __attribute__((__format_arg__(1)))  *)__dyc_read_ptr__char();
  __dyc_funcallvar_100 = (char const __attribute__((__format_arg__(1)))  *)__dyc_read_ptr__char();
  __dyc_funcallvar_101 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_102 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_103 = (char const __attribute__((__format_arg__(1)))  *)__dyc_read_ptr__char();
  __dyc_funcallvar_104 = __dyc_readpre_byte();
  __dyc_funcallvar_105 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_106 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_107 = __dyc_read_ptr__void();
  __dyc_funcallvar_108 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_109 = __dyc_read_ptr__void();
  __dyc_funcallvar_110 = __dyc_read_ptr__void();
  __dyc_funcallvar_111 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_112 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_113 = __dyc_read_ptr__void();
  __dyc_funcallvar_114 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_115 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_116 = __dyc_readpre_byte();
  __dyc_funcallvar_117 = (char const __attribute__((__format_arg__(1)))  *)__dyc_read_ptr__char();
  read_replace_refs = 0;
  objects = 0;
  obj_stat = 0;
  ofs_deltas = 0;
  memset(& fsck_options, 0, sizeof(struct fsck_options ));
  verbose = 0;
  show_resolving_progress = 0;
  check_self_contained_and_connected = 0;
  input_len = 0;
  max_input_size = 0;
  curr_pack = 0;
  i = 0;
  stat_only = 0;
  rev_index = 0;
  curr_index = 0;
  curr_rev_index = 0;
  idx_objects = 0;
  foreign_nr = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  arg = 0;
  tmp___20 = 0;
  hdr = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  tmp___28 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___41 = 0;
  tmp___46 = 0;
  tmp___47 = 0;
  tmp___48 = 0;
  tmp___49 = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___59 = 0;
  tmp___64 = 0;
  tmp___65 = 0;
  tmp___66 = 0;
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
  __s1_len___5 = 0;
  __s2_len___5 = 0;
  tmp___134 = 0;
  tmp___139 = 0;
  tmp___140 = 0;
  tmp___141 = 0;
  tmp___142 = 0;
  tmp___143 = 0;
  tmp___144 = 0;
  tmp___145 = 0;
  tmp___146 = 0;
  __s1_len___6 = 0;
  __s2_len___6 = 0;
  tmp___156 = 0;
  tmp___161 = 0;
  tmp___162 = 0;
  tmp___163 = 0;
  tmp___164 = 0;
  __s1_len___7 = 0;
  __s2_len___7 = 0;
  tmp___174 = 0;
  tmp___179 = 0;
  tmp___180 = 0;
  tmp___181 = 0;
  tmp___182 = 0;
  __s1_len___8 = 0;
  __s2_len___8 = 0;
  tmp___192 = 0;
  tmp___197 = 0;
  tmp___198 = 0;
  tmp___199 = 0;
  tmp___200 = 0;
  __s1_len___9 = 0;
  __s2_len___9 = 0;
  tmp___210 = 0;
  tmp___215 = 0;
  tmp___216 = 0;
  tmp___217 = 0;
  tmp___218 = 0;
  __s1_len___10 = 0;
  __s2_len___10 = 0;
  tmp___228 = 0;
  tmp___233 = 0;
  tmp___234 = 0;
  tmp___235 = 0;
  tmp___236 = 0;
  tmp___237 = 0;
  __s1_len___11 = 0;
  __s2_len___11 = 0;
  tmp___247 = 0;
  tmp___252 = 0;
  tmp___253 = 0;
  tmp___254 = 0;
  tmp___255 = 0;
  __s1_len___12 = 0;
  __s2_len___12 = 0;
  tmp___265 = 0;
  tmp___270 = 0;
  tmp___271 = 0;
  tmp___272 = 0;
  tmp___273 = 0;
  tmp___274 = 0;
  tmp___275 = 0;
  tmp___276 = 0;
  tmp___277 = 0;
  tmp___278 = 0;
  tmp___279 = 0;
  tmp___280 = 0;
  tmp___281 = 0;
  tmp___282 = 0;
  tmp___283 = 0;
  tmp___284 = 0;
  tmp___285 = 0;
  tmp___286 = 0;
  tmp___287 = 0;
  read_replace_refs = 0;
  fsck_options.walk = & mark_link;


  if (prefix) {
    {
    tmp___18 = __dyc_funcallvar_6;
    }
    if (tmp___18) {
      {
      tmp___17 = __dyc_funcallvar_7;

      }
    }
  }
  tmp___19 = __dyc_funcallvar_8;
  if (tmp___19) {
    rev_index = 1;
  } else {
    rev_index = ! (! (opts.flags & 12U));
  }
  i = 1;
  while (1) {
    while_44_continue:  ;
    if (! (i < argc)) {
      goto while_44_break;
    }
    arg = *(argv + i);
    if ((int const   )*arg == 45) {
      if (0) {
        {
        tmp___271 = __dyc_funcallvar_9;
        __s1_len___12 = (unsigned long )tmp___271;
        tmp___272 = __dyc_funcallvar_10;
        __s2_len___12 = (unsigned long )tmp___272;
        }
        if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
          goto _L___26;
        } else {
          if (__s1_len___12 >= 4UL) {
            _L___26:  
            if (! ((unsigned long )((void const   *)("--stdin" + 1)) - (unsigned long )((void const   *)"--stdin") == 1UL)) {
              tmp___273 = 1;
            } else {
              if (__s2_len___12 >= 4UL) {
                tmp___273 = 1;
              } else {
                tmp___273 = 0;
              }
            }
          } else {
            tmp___273 = 0;
          }
        }
        if (tmp___273) {
          {
          tmp___265 = __dyc_funcallvar_11;
          }
        } else {
          {
          tmp___270 = __dyc_funcallvar_12;
          tmp___265 = tmp___270;
          }
        }
      } else {
        {
        tmp___270 = __dyc_funcallvar_13;
        tmp___265 = tmp___270;
        }
      }
      if (tmp___265) {
        if (0) {
          {
          tmp___253 = __dyc_funcallvar_14;
          __s1_len___11 = (unsigned long )tmp___253;
          tmp___254 = __dyc_funcallvar_15;
          __s2_len___11 = (unsigned long )tmp___254;
          }
          if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
            goto _L___24;
          } else {
            if (__s1_len___11 >= 4UL) {
              _L___24:  
              if (! ((unsigned long )((void const   *)("--fix-thin" + 1)) - (unsigned long )((void const   *)"--fix-thin") == 1UL)) {
                tmp___255 = 1;
              } else {
                if (__s2_len___11 >= 4UL) {
                  tmp___255 = 1;
                } else {
                  tmp___255 = 0;
                }
              }
            } else {
              tmp___255 = 0;
            }
          }
          if (tmp___255) {
            {
            tmp___247 = __dyc_funcallvar_16;
            }
          } else {
            {
            tmp___252 = __dyc_funcallvar_17;
            tmp___247 = tmp___252;
            }
          }
        } else {
          {
          tmp___252 = __dyc_funcallvar_18;
          tmp___247 = tmp___252;
          }
        }
        if (tmp___247) {
          {
          tmp___237 = __dyc_funcallvar_19;
          }
          if (tmp___237) {
            {
            strict = 1;
            do_fsck_object = 1;

            }
          } else {
            if (0) {
              {
              tmp___234 = __dyc_funcallvar_20;
              __s1_len___10 = (unsigned long )tmp___234;
              tmp___235 = __dyc_funcallvar_21;
              __s2_len___10 = (unsigned long )tmp___235;
              }
              if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                goto _L___22;
              } else {
                if (__s1_len___10 >= 4UL) {
                  _L___22:  
                  if (! ((unsigned long )((void const   *)("--check-self-contained-and-connected" + 1)) - (unsigned long )((void const   *)"--check-self-contained-and-connected") == 1UL)) {
                    tmp___236 = 1;
                  } else {
                    if (__s2_len___10 >= 4UL) {
                      tmp___236 = 1;
                    } else {
                      tmp___236 = 0;
                    }
                  }
                } else {
                  tmp___236 = 0;
                }
              }
              if (tmp___236) {
                {
                tmp___228 = __dyc_funcallvar_22;
                }
              } else {
                {
                tmp___233 = __dyc_funcallvar_23;
                tmp___228 = tmp___233;
                }
              }
            } else {
              {
              tmp___233 = __dyc_funcallvar_24;
              tmp___228 = tmp___233;
              }
            }
            if (tmp___228) {
              if (0) {
                {
                tmp___216 = __dyc_funcallvar_25;
                __s1_len___9 = (unsigned long )tmp___216;
                tmp___217 = __dyc_funcallvar_26;
                __s2_len___9 = (unsigned long )tmp___217;
                }
                if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                  goto _L___20;
                } else {
                  if (__s1_len___9 >= 4UL) {
                    _L___20:  
                    if (! ((unsigned long )((void const   *)("--fsck-objects" + 1)) - (unsigned long )((void const   *)"--fsck-objects") == 1UL)) {
                      tmp___218 = 1;
                    } else {
                      if (__s2_len___9 >= 4UL) {
                        tmp___218 = 1;
                      } else {
                        tmp___218 = 0;
                      }
                    }
                  } else {
                    tmp___218 = 0;
                  }
                }
                if (tmp___218) {
                  {
                  tmp___210 = __dyc_funcallvar_27;
                  }
                } else {
                  {
                  tmp___215 = __dyc_funcallvar_28;
                  tmp___210 = tmp___215;
                  }
                }
              } else {
                {
                tmp___215 = __dyc_funcallvar_29;
                tmp___210 = tmp___215;
                }
              }
              if (tmp___210) {
                if (0) {
                  {
                  tmp___198 = __dyc_funcallvar_30;
                  __s1_len___8 = (unsigned long )tmp___198;
                  tmp___199 = __dyc_funcallvar_31;
                  __s2_len___8 = (unsigned long )tmp___199;
                  }
                  if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                    goto _L___18;
                  } else {
                    if (__s1_len___8 >= 4UL) {
                      _L___18:  
                      if (! ((unsigned long )((void const   *)("--verify" + 1)) - (unsigned long )((void const   *)"--verify") == 1UL)) {
                        tmp___200 = 1;
                      } else {
                        if (__s2_len___8 >= 4UL) {
                          tmp___200 = 1;
                        } else {
                          tmp___200 = 0;
                        }
                      }
                    } else {
                      tmp___200 = 0;
                    }
                  }
                  if (tmp___200) {
                    {
                    tmp___192 = __dyc_funcallvar_32;
                    }
                  } else {
                    {
                    tmp___197 = __dyc_funcallvar_33;
                    tmp___192 = tmp___197;
                    }
                  }
                } else {
                  {
                  tmp___197 = __dyc_funcallvar_34;
                  tmp___192 = tmp___197;
                  }
                }
                if (tmp___192) {
                  if (0) {
                    {
                    tmp___180 = __dyc_funcallvar_35;
                    __s1_len___7 = (unsigned long )tmp___180;
                    tmp___181 = __dyc_funcallvar_36;
                    __s2_len___7 = (unsigned long )tmp___181;
                    }
                    if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                      goto _L___16;
                    } else {
                      if (__s1_len___7 >= 4UL) {
                        _L___16:  
                        if (! ((unsigned long )((void const   *)("--verify-stat" + 1)) - (unsigned long )((void const   *)"--verify-stat") == 1UL)) {
                          tmp___182 = 1;
                        } else {
                          if (__s2_len___7 >= 4UL) {
                            tmp___182 = 1;
                          } else {
                            tmp___182 = 0;
                          }
                        }
                      } else {
                        tmp___182 = 0;
                      }
                    }
                    if (tmp___182) {
                      {
                      tmp___174 = __dyc_funcallvar_37;
                      }
                    } else {
                      {
                      tmp___179 = __dyc_funcallvar_38;
                      tmp___174 = tmp___179;
                      }
                    }
                  } else {
                    {
                    tmp___179 = __dyc_funcallvar_39;
                    tmp___174 = tmp___179;
                    }
                  }
                  if (tmp___174) {
                    if (0) {
                      {
                      tmp___162 = __dyc_funcallvar_40;
                      __s1_len___6 = (unsigned long )tmp___162;
                      tmp___163 = __dyc_funcallvar_41;
                      __s2_len___6 = (unsigned long )tmp___163;
                      }
                      if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                        goto _L___14;
                      } else {
                        if (__s1_len___6 >= 4UL) {
                          _L___14:  
                          if (! ((unsigned long )((void const   *)("--verify-stat-only" + 1)) - (unsigned long )((void const   *)"--verify-stat-only") == 1UL)) {
                            tmp___164 = 1;
                          } else {
                            if (__s2_len___6 >= 4UL) {
                              tmp___164 = 1;
                            } else {
                              tmp___164 = 0;
                            }
                          }
                        } else {
                          tmp___164 = 0;
                        }
                      }
                      if (tmp___164) {
                        {
                        tmp___156 = __dyc_funcallvar_42;
                        }
                      } else {
                        {
                        tmp___161 = __dyc_funcallvar_43;
                        tmp___156 = tmp___161;
                        }
                      }
                    } else {
                      {
                      tmp___161 = __dyc_funcallvar_44;
                      tmp___156 = tmp___161;
                      }
                    }
                    if (tmp___156) {
                      {
                      tmp___146 = __dyc_funcallvar_45;
                      }
                      if (! tmp___146) {
                        {
                        tmp___145 = __dyc_funcallvar_46;
                        }
                        if (! tmp___145) {
                          {
                          tmp___144 = __dyc_funcallvar_47;
                          }
                          if (tmp___144) {
                            {
                            tmp___20 = __dyc_funcallvar_48;
                            nr_threads = (int )tmp___20;
                            }
                            if (! *(arg + 10)) {
                              {

                              }
                            } else {
                              if (*end) {
                                {

                                }
                              } else {
                                if (nr_threads < 0) {
                                  {

                                  }
                                }
                              }
                            }
                          } else {
                            {
                            tmp___143 = __dyc_funcallvar_49;
                            }
                            if (tmp___143) {
                              {
                              hdr = (struct pack_header *)(input_buffer);
                              hdr->hdr_signature = __dyc_funcallvar_50;
                              tmp___22 = __dyc_funcallvar_51;
                              hdr->hdr_version = __dyc_funcallvar_52;
                              }
                              if ((int )*c != 44) {
                                {
                                tmp___23 = __dyc_funcallvar_53;

                                }
                              }
                              {
                              tmp___24 = __dyc_funcallvar_54;
                              hdr->hdr_entries = __dyc_funcallvar_55;
                              }
                              if (*c) {
                                {
                                tmp___25 = __dyc_funcallvar_56;

                                }
                              }
                              input_len = (unsigned int )sizeof(struct pack_header );
                            } else {
                              if (0) {
                                {
                                tmp___140 = __dyc_funcallvar_57;
                                __s1_len___5 = (unsigned long )tmp___140;
                                tmp___141 = __dyc_funcallvar_58;
                                __s2_len___5 = (unsigned long )tmp___141;
                                }
                                if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                  goto _L___12;
                                } else {
                                  if (__s1_len___5 >= 4UL) {
                                    _L___12:  
                                    if (! ((unsigned long )((void const   *)("-v" + 1)) - (unsigned long )((void const   *)"-v") == 1UL)) {
                                      tmp___142 = 1;
                                    } else {
                                      if (__s2_len___5 >= 4UL) {
                                        tmp___142 = 1;
                                      } else {
                                        tmp___142 = 0;
                                      }
                                    }
                                  } else {
                                    tmp___142 = 0;
                                  }
                                }
                                if (tmp___142) {
                                  {
                                  tmp___134 = __dyc_funcallvar_59;
                                  }
                                } else {
                                  {
                                  tmp___139 = __dyc_funcallvar_60;
                                  tmp___134 = tmp___139;
                                  }
                                }
                              } else {
                                {
                                tmp___139 = __dyc_funcallvar_61;
                                tmp___134 = tmp___139;
                                }
                              }
                              if (tmp___134) {
                                if (0) {
                                  {
                                  tmp___122 = __dyc_funcallvar_62;
                                  __s1_len___4 = (unsigned long )tmp___122;
                                  tmp___123 = __dyc_funcallvar_63;
                                  __s2_len___4 = (unsigned long )tmp___123;
                                  }
                                  if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                    goto _L___10;
                                  } else {
                                    if (__s1_len___4 >= 4UL) {
                                      _L___10:  
                                      if (! ((unsigned long )((void const   *)("--show-resolving-progress" + 1)) - (unsigned long )((void const   *)"--show-resolving-progress") == 1UL)) {
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
                                    tmp___116 = __dyc_funcallvar_64;
                                    }
                                  } else {
                                    {
                                    tmp___121 = __dyc_funcallvar_65;
                                    tmp___116 = tmp___121;
                                    }
                                  }
                                } else {
                                  {
                                  tmp___121 = __dyc_funcallvar_66;
                                  tmp___116 = tmp___121;
                                  }
                                }
                                if (tmp___116) {
                                  if (0) {
                                    {
                                    tmp___104 = __dyc_funcallvar_67;
                                    __s1_len___3 = (unsigned long )tmp___104;
                                    tmp___105 = __dyc_funcallvar_68;
                                    __s2_len___3 = (unsigned long )tmp___105;
                                    }
                                    if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                      goto _L___8;
                                    } else {
                                      if (__s1_len___3 >= 4UL) {
                                        _L___8:  
                                        if (! ((unsigned long )((void const   *)("--report-end-of-input" + 1)) - (unsigned long )((void const   *)"--report-end-of-input") == 1UL)) {
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
                                      tmp___98 = __dyc_funcallvar_69;
                                      }
                                    } else {
                                      {
                                      tmp___103 = __dyc_funcallvar_70;
                                      tmp___98 = tmp___103;
                                      }
                                    }
                                  } else {
                                    {
                                    tmp___103 = __dyc_funcallvar_71;
                                    tmp___98 = tmp___103;
                                    }
                                  }
                                  if (tmp___98) {
                                    if (0) {
                                      {
                                      tmp___86 = __dyc_funcallvar_72;
                                      __s1_len___2 = (unsigned long )tmp___86;
                                      tmp___87 = __dyc_funcallvar_73;
                                      __s2_len___2 = (unsigned long )tmp___87;
                                      }
                                      if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                        goto _L___6;
                                      } else {
                                        if (__s1_len___2 >= 4UL) {
                                          _L___6:  
                                          if (! ((unsigned long )((void const   *)("-o" + 1)) - (unsigned long )((void const   *)"-o") == 1UL)) {
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
                                        tmp___80 = __dyc_funcallvar_74;
                                        }
                                      } else {
                                        {
                                        tmp___85 = __dyc_funcallvar_75;
                                        tmp___80 = tmp___85;
                                        }
                                      }
                                    } else {
                                      {
                                      tmp___85 = __dyc_funcallvar_76;
                                      tmp___80 = tmp___85;
                                      }
                                    }
                                    if (tmp___80) {
                                      {
                                      tmp___70 = __dyc_funcallvar_77;
                                      }
                                      if (tmp___70) {
                                        {
                                        tmp___26 = __dyc_funcallvar_78;
                                        opts.version = (unsigned int )tmp___26;
                                        }
                                        if (opts.version > 2U) {
                                          {
                                          tmp___27 = __dyc_funcallvar_79;

                                          }
                                        }
                                        if ((int )*c___0 == 44) {
                                          {
                                          tmp___28 = __dyc_funcallvar_80;
                                          opts.off32_limit = (unsigned int )tmp___28;
                                          }
                                        }
                                        if (*c___0) {
                                          {
                                          tmp___29 = __dyc_funcallvar_81;

                                          }
                                        } else {
                                          if (opts.off32_limit & 2147483648U) {
                                            {
                                            tmp___29 = __dyc_funcallvar_82;

                                            }
                                          }
                                        }
                                      } else {
                                        {
                                        tmp___69 = __dyc_funcallvar_83;
                                        }
                                        if (tmp___69) {
                                          {
                                          tmp___30 = __dyc_funcallvar_84;
                                          max_input_size = (long )tmp___30;
                                          }
                                        } else {
                                          {
                                          tmp___68 = __dyc_funcallvar_85;
                                          }
                                          if (tmp___68) {
                                            {
                                            hash_algo = __dyc_funcallvar_86;
                                            }
                                            if (hash_algo == 0) {
                                              {
                                              tmp___31 = __dyc_funcallvar_87;

                                              }
                                            }
                                            {

                                            }
                                          } else {
                                            if (0) {
                                              {
                                              tmp___65 = __dyc_funcallvar_88;
                                              __s1_len___1 = (unsigned long )tmp___65;
                                              tmp___66 = __dyc_funcallvar_89;
                                              __s2_len___1 = (unsigned long )tmp___66;
                                              }
                                              if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                goto _L___4;
                                              } else {
                                                if (__s1_len___1 >= 4UL) {
                                                  _L___4:  
                                                  if (! ((unsigned long )((void const   *)("--rev-index" + 1)) - (unsigned long )((void const   *)"--rev-index") == 1UL)) {
                                                    tmp___67 = 1;
                                                  } else {
                                                    if (__s2_len___1 >= 4UL) {
                                                      tmp___67 = 1;
                                                    } else {
                                                      tmp___67 = 0;
                                                    }
                                                  }
                                                } else {
                                                  tmp___67 = 0;
                                                }
                                              }
                                              if (tmp___67) {
                                                {
                                                tmp___59 = __dyc_funcallvar_90;
                                                }
                                              } else {
                                                {
                                                tmp___64 = __dyc_funcallvar_91;
                                                tmp___59 = tmp___64;
                                                }
                                              }
                                            } else {
                                              {
                                              tmp___64 = __dyc_funcallvar_92;
                                              tmp___59 = tmp___64;
                                              }
                                            }
                                            if (tmp___59) {
                                              if (0) {
                                                {
                                                tmp___47 = __dyc_funcallvar_93;
                                                __s1_len___0 = (unsigned long )tmp___47;
                                                tmp___48 = __dyc_funcallvar_94;
                                                __s2_len___0 = (unsigned long )tmp___48;
                                                }
                                                if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                  goto _L___2;
                                                } else {
                                                  if (__s1_len___0 >= 4UL) {
                                                    _L___2:  
                                                    if (! ((unsigned long )((void const   *)("--no-rev-index" + 1)) - (unsigned long )((void const   *)"--no-rev-index") == 1UL)) {
                                                      tmp___49 = 1;
                                                    } else {
                                                      if (__s2_len___0 >= 4UL) {
                                                        tmp___49 = 1;
                                                      } else {
                                                        tmp___49 = 0;
                                                      }
                                                    }
                                                  } else {
                                                    tmp___49 = 0;
                                                  }
                                                }
                                                if (tmp___49) {
                                                  {
                                                  tmp___41 = __dyc_funcallvar_95;
                                                  }
                                                } else {
                                                  {
                                                  tmp___46 = __dyc_funcallvar_96;
                                                  tmp___41 = tmp___46;
                                                  }
                                                }
                                              } else {
                                                {
                                                tmp___46 = __dyc_funcallvar_97;
                                                tmp___41 = tmp___46;
                                                }
                                              }
                                              if (tmp___41) {
                                                {

                                                }
                                              } else {
                                                rev_index = 0;
                                              }
                                            } else {
                                              rev_index = 1;
                                            }
                                          }
                                        }
                                      }
                                    } else {
                                      if (index_name) {
                                        {

                                        }
                                      } else {
                                        if (i + 1 >= argc) {
                                          {

                                          }
                                        }
                                      }
                                      i ++;
                                      index_name = *(argv + i);
                                    }
                                  } else {
                                    report_end_of_input = 1;
                                  }
                                } else {
                                  show_resolving_progress = 1;
                                }
                              } else {
                                verbose = 1;
                              }
                            }
                          }
                        }
                      }
                    } else {
                      verify = 1;
                      show_stat = 1;
                      stat_only = 1;
                    }
                  } else {
                    verify = 1;
                    show_stat = 1;
                  }
                } else {
                  verify = 1;
                }
              } else {
                do_fsck_object = 1;
              }
            } else {
              strict = 1;
              check_self_contained_and_connected = 1;
            }
          }
        } else {
          fix_thin_pack = 1;
        }
      } else {
        from_stdin = 1;
      }
      goto __Cont;
    }
    if (pack_name) {
      {

      }
    }
    pack_name = arg;
    __Cont:  
    i ++;
  }
  while_44_break:  ;
  if (! pack_name) {
    if (! from_stdin) {
      {

      }
    }
  }
  if (fix_thin_pack) {
    if (! from_stdin) {
      {
      tmp___274 = __dyc_funcallvar_98;

      }
    }
  }
  if (from_stdin) {
    if (! startup_info->have_repository) {
      {
      tmp___275 = __dyc_funcallvar_99;

      }
    }
  }
  if (from_stdin) {
    if (hash_algo) {
      {
      tmp___276 = __dyc_funcallvar_100;

      }
    }
  }
  if (! index_name) {
    if (pack_name) {
      {
      index_name = __dyc_funcallvar_101;
      }
    }
  }
  opts.flags &= 4294967283U;
  if (rev_index) {
    if (verify) {
      tmp___277 = 8;
    } else {
      tmp___277 = 4;
    }
    opts.flags |= (unsigned int )tmp___277;
    if (index_name) {
      {
      rev_index_name = __dyc_funcallvar_102;
      }
    }
  }
  if (verify) {
    if (! index_name) {
      {
      tmp___278 = __dyc_funcallvar_103;

      }
    }
    {

    opts.flags |= 3U;
    }
  }
  if (strict) {
    opts.flags |= 2U;
  }
  if (! nr_threads) {
    {
    nr_threads = __dyc_funcallvar_104;
    }
    if (! (nr_threads < 4)) {
      if (nr_threads < 6) {
        nr_threads = 3;
      } else {
        if (nr_threads < 40) {
          nr_threads /= 2;
        } else {
          nr_threads = 20;
        }
      }
    }
  }
  curr_pack = __dyc_funcallvar_105;

  tmp___279 = __dyc_funcallvar_106;
  tmp___280 = __dyc_funcallvar_107;
  objects = (struct object_entry *)tmp___280;
  if (show_stat) {
    {
    tmp___281 = __dyc_funcallvar_108;
    tmp___282 = __dyc_funcallvar_109;
    obj_stat = (struct object_stat *)tmp___282;
    }
  }
  tmp___283 = __dyc_funcallvar_110;
  ofs_deltas = (struct ofs_delta_entry *)tmp___283;

  if (report_end_of_input) {
    {

    }
  }




  if (strict) {
    {
    foreign_nr = __dyc_funcallvar_111;
    }
  }
  if (show_stat) {
    {

    }
  }
  tmp___284 = __dyc_funcallvar_112;
  tmp___285 = __dyc_funcallvar_113;
  idx_objects = (struct pack_idx_entry **)tmp___285;
  i = 0;
  while (1) {
    while_45_continue:  ;
    if (! (i < nr_objects)) {
      goto while_45_break;
    }
    *(idx_objects + i) = & (objects + i)->idx;
    i ++;
  }
  while_45_break:  ;
  curr_index = __dyc_funcallvar_114;
  if (rev_index) {
    {
    curr_rev_index = __dyc_funcallvar_115;
    }
  }

  if (! verify) {
    {

    }
  } else {
    {

    }
  }
  if (do_fsck_object) {
    {
    tmp___287 = __dyc_funcallvar_116;
    }
    if (tmp___287) {
      {
      tmp___286 = __dyc_funcallvar_117;

      }
    }
  }



  if ((unsigned long )pack_name == (unsigned long )((void *)0)) {
    {

    }
  }
  if ((unsigned long )index_name == (unsigned long )((void *)0)) {
    {

    }
  }
  if ((unsigned long )rev_index_name == (unsigned long )((void *)0)) {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(read_replace_refs);
  __dyc_print_ptr__comp_550object_entry(objects);
  __dyc_print_ptr__comp_551object_stat(obj_stat);
  __dyc_print_ptr__comp_554ofs_delta_entry(ofs_deltas);
  __dyc_printpre_byte(nr_threads);
  __dyc_print_comp_515fsck_options(fsck_options);
  __dyc_printpre_byte(verbose);
  __dyc_printpre_byte(show_resolving_progress);
  __dyc_printpre_byte(check_self_contained_and_connected);
  __dyc_printpre_byte(input_len);
  __dyc_printpre_byte(max_input_size);
  __dyc_print_ptr__char(curr_pack);
  __dyc_printpre_byte(stat_only);
  __dyc_print_ptr__char(curr_index);
  __dyc_print_ptr__char(curr_rev_index);
  __dyc_print_ptr__ptr__comp_507pack_idx_entry(idx_objects);
  __dyc_print_comp_505pack_idx_option(opts);
  __dyc_printpre_byte(foreign_nr);
  __dyc_print_ptr__char(tmp___17);
  __dyc_printpre_byte(tmp___22);
  __dyc_print_ptr__char(tmp___23);
  __dyc_printpre_byte(tmp___24);
  __dyc_print_ptr__char(tmp___25);
  __dyc_print_ptr__char(tmp___27);
  __dyc_print_ptr__char(tmp___29);
  __dyc_print_ptr__char(tmp___31);
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
  __dyc_print_ptr__char(tmp___274);
  __dyc_print_ptr__char(tmp___275);
  __dyc_print_ptr__char(tmp___276);
  __dyc_print_ptr__char(tmp___278);
  __dyc_printpre_byte(tmp___279);
  __dyc_printpre_byte(tmp___281);
  __dyc_printpre_byte(tmp___284);
  __dyc_print_ptr__char(tmp___286);
}
}
