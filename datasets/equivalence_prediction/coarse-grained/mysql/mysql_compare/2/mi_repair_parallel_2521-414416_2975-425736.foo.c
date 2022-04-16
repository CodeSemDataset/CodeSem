#include "../../include/dycfoo.h"
#include "../../include/mi_check.i.hd.c.h"
void __dyc_foo(void) 
{ void (*lock_memory)(MI_CHECK *param  __attribute__((__unused__)) ) ;
  int got_error ;
  uint i ;
  uint key ;
  uint total_key_length ;
  uint istep ;
  ulong rec_length ;
  ha_rows start_records ;
  my_off_t new_header_length ;
  my_off_t del ;
  File new_file ;
  MI_SORT_PARAM *sort_param ;
  MYISAM_SHARE *share ;
  ulong *rec_per_key_part ;
  HA_KEYSEG *keyseg ;
  IO_CACHE new_data_cache ;
  IO_CACHE_SHARE io_share ;
  SORT_INFO sort_info ;
  ulonglong key_map ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  my_string tmp___3 ;
  int tmp___4 ;
  uint def_temp ;
  int tmp___5 ;
  gptr tmp___6 ;
  int tmp___7 ;
  byte *tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  uint ft_max_word_len_for_sort ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  time_t tmp___14 ;
  my_off_t skr ;
  int tmp___15 ;
  struct st_my_thread_var *tmp___16 ;
  int tmp___17 ;
  struct st_my_thread_var *tmp___18 ;
  int tmp___19 ;
  char *tmp___20 ;
  char *tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  struct st_my_thread_var *tmp___26 ;
  MI_CHECK *param ;
  MI_INFO *info ;
  int rep_quick ;
  int (*sort_key_read)(MI_SORT_PARAM *sort_param , void *key ) ;
  int (*sort_ft_key_read)(MI_SORT_PARAM *sort_param , void *key ) ;
  int (*sort_key_cmp)(MI_SORT_PARAM *sort_param , void const   *a ,
                      void const   *b ) ;
  int (*sort_key_write)(MI_SORT_PARAM *sort_param , void const   *a ) ;
  int (*sort_ft_key_write)(MI_SORT_PARAM *sort_param , void const   *a ) ;
  SORT_KEY_BLOCKS *__dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  my_string __dyc_funcallvar_6 ;
  File __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  my_off_t __dyc_funcallvar_10 ;
  gptr __dyc_funcallvar_11 ;
  byte *__dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  time_t __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  struct st_my_thread_var *__dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  struct st_my_thread_var *__dyc_funcallvar_21 ;
  char *__dyc_funcallvar_22 ;
  char *__dyc_funcallvar_23 ;
  int __dyc_funcallvar_24 ;
  int __dyc_funcallvar_25 ;
  int __dyc_funcallvar_26 ;
  struct st_my_thread_var *__dyc_funcallvar_27 ;

  {
  got_error = __dyc_readpre_byte();
  start_records = (ha_rows )__dyc_readpre_byte();
  new_header_length = (my_off_t )__dyc_readpre_byte();
  new_file = __dyc_readpre_byte();
  share = __dyc_read_ptr__typdef_MYISAM_SHARE();
  new_data_cache = __dyc_read_comp_107st_io_cache();
  io_share = __dyc_read_comp_108st_io_cache_share();
  key_map = (ulonglong )__dyc_readpre_byte();
  param = __dyc_read_ptr__typdef_MI_CHECK();
  info = __dyc_read_ptr__typdef_MI_INFO();
  rep_quick = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_read_ptr__typdef_SORT_KEY_BLOCKS();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = (my_off_t )__dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_read_ptr__char();
  __dyc_funcallvar_12 = __dyc_read_ptr__typdef_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = (time_t )__dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_22 = __dyc_read_ptr__char();
  __dyc_funcallvar_23 = __dyc_read_ptr__char();
  __dyc_funcallvar_24 = __dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_readpre_byte();
  __dyc_funcallvar_26 = __dyc_readpre_byte();
  __dyc_funcallvar_27 = __dyc_read_ptr__comp_91st_my_thread_var();
  i = 0;
  key = 0;
  total_key_length = 0;
  istep = 0;
  rec_length = 0;
  del = 0;
  sort_param = 0;
  rec_per_key_part = 0;
  keyseg = 0;
  memset(& sort_info, 0, sizeof(SORT_INFO ));
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  def_temp = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  ft_max_word_len_for_sort = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  skr = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  param->testflag = (unsigned int )((long )param->testflag | (1L << 17));
  if ((info->s)->options & 36UL) {
    param->testflag |= 8U;
  }



  sort_info.key_block = __dyc_funcallvar_2;
  if (sort_info.key_block) {
    {
    tmp___0 = __dyc_funcallvar_3;
    }
    if (tmp___0) {
      goto __dyc_dummy_label;
    } else {
      if (! rep_quick) {
        {
        tmp___1 = __dyc_funcallvar_4;
        }
        if (tmp___1) {
          goto __dyc_dummy_label;
        } else {
          {
          tmp___2 = __dyc_funcallvar_5;
          }
          if (tmp___2) {
            goto __dyc_dummy_label;
          }
        }
      }
    }
  } else {
    goto __dyc_dummy_label;
  }
  sort_info.key_block_end = sort_info.key_block + param->sort_key_blocks;
  info->opt_flag |= 16U;
  info->rec_cache.file = info->dfile;
  if (! rep_quick) {
    {
    tmp___3 = __dyc_funcallvar_6;
    new_file = __dyc_funcallvar_7;
    }
    if (new_file < 0) {
      {

      }
      goto __dyc_dummy_label;
    }
    if (new_header_length) {
      {
      tmp___4 = __dyc_funcallvar_8;
      }
      if (tmp___4) {
        goto __dyc_dummy_label;
      }
    }
    if ((long )param->testflag & (1L << 26)) {
      share->options &= 0xfffffffbUL;
      def_temp = (unsigned int )share->options;
      share->state.header.options[1] = (unsigned char )def_temp;
      share->state.header.options[0] = (unsigned char )(def_temp >> 8);
    }
    share->state.dellink = ~ 0UL;
    info->rec_cache.file = new_file;
  }
  info->update = 1025U;
  if (! (param->testflag & 64U)) {
    {

    i = 0U;
    }
    {
    while (1) {
      while_35_continue:  ;
      if (! (i < share->base.keys)) {
        goto while_35_break;
      }
      *(share->state.key_root + i) = ~ 0UL;
      i ++;
    }
    while_35_break:  ;
    }
    i = 0U;
    {
    while (1) {
      while_36_continue:  ;
      if (! (i < (uint )share->state.header.max_block_size)) {
        goto while_36_break;
      }
      *(share->state.key_del + i) = ~ 0UL;
      i ++;
    }
    while_36_break:  ;
    }
    (info->state)->key_file_length = share->base.keystart;
  } else {
    {
    tmp___5 = __dyc_funcallvar_9;
    }
    if (tmp___5) {
      goto __dyc_dummy_label;
    }
    key_map = ~ key_map;
  }
  sort_info.info = info;
  sort_info.param = param;

  sort_info.dupp = 0UL;
  sort_info.buff = (char *)0;
  sort_info.filelength = __dyc_funcallvar_10;
  param->read_cache.end_of_file = sort_info.filelength;
  if ((int )share->data_file_type == 1) {
    if (share->base.min_pack_length + 1UL > share->base.min_block_length) {
      rec_length = share->base.min_pack_length + 1UL;
    } else {
      rec_length = share->base.min_block_length;
    }
  } else {
    if ((int )share->data_file_type == 2) {
      rec_length = share->base.min_block_length;
    } else {
      rec_length = share->base.pack_reclength;
    }
  }
  if (param->testflag & 64U) {
    sort_info.max_records = (info->state)->records + 1UL;
  } else {
    sort_info.max_records = sort_info.filelength / rec_length + 1UL;
  }
  del = (info->state)->del;
  param->glob_crc = 0U;
  tmp___6 = __dyc_funcallvar_11;
  sort_param = (MI_SORT_PARAM *)tmp___6;
  if (! sort_param) {
    {

    }
    goto __dyc_dummy_label;
  }
  total_key_length = 0U;
  rec_per_key_part = param->rec_per_key_part;
  share->state.split = 0UL;
  (info->state)->del = share->state.split;
  (info->state)->records = (info->state)->del;
  (info->state)->empty = 0UL;
  key = 0U;
  i = key;
  istep = 1U;
  while (1) {
    while_37_continue:  ;
    if (! (key < share->base.keys)) {
      goto while_37_break;
    }
    (sort_param + i)->key = key;
    (sort_param + i)->keyinfo = share->keyinfo + key;
    (sort_param + i)->seg = ((sort_param + i)->keyinfo)->seg;
    if ((unsigned long long )key_map & (1ULL << key)) {
      tmp___7 = 1;
    } else {
      tmp___7 = 0;
    }
    if (! tmp___7) {
      {

      istep = 0U;
      }
      goto __Cont;
    }
    istep = 1U;
    if (! ((long )param->testflag & (1L << 22))) {
      {

      }
    }
    if ((int )((sort_param + i)->keyinfo)->flag & 128) {
      (sort_param + i)->key_read = & sort_ft_key_read;
      (sort_param + i)->key_write = & sort_ft_key_write;
    } else {
      (sort_param + i)->key_read = & sort_key_read;
      (sort_param + i)->key_write = & sort_key_write;
    }
    {
    (sort_param + i)->key_cmp = & sort_key_cmp;
    (sort_param + i)->lock_in_memory = & lock_memory;
    (sort_param + i)->tmpdir = param->tmpdir;
    (sort_param + i)->sort_info = & sort_info;
    (sort_param + i)->master = (char)0;
    (sort_param + i)->fix_datafile = (char)0;
    (sort_param + i)->calc_checksum = (char)0;
    (sort_param + i)->filepos = new_header_length;
    (sort_param + i)->pos = share->pack.header_length;
    (sort_param + i)->max_pos = (sort_param + i)->pos;
    (sort_param + i)->record = (char *)(sort_param + share->base.keys) + share->base.pack_reclength * (ulong )i;
    tmp___8 = __dyc_funcallvar_12;
    }
    if (! tmp___8) {
      {

      }
      goto __dyc_dummy_label;
    }
    (sort_param + i)->key_length = share->rec_reflength;
    keyseg = (sort_param + i)->seg;
    {
    while (1) {
      while_38_continue:  ;
      if (! ((int )keyseg->type != 0)) {
        goto while_38_break;
      }
      (sort_param + i)->key_length += (uint )keyseg->length;
      if ((int )keyseg->flag & 1) {
        if ((int )keyseg->length >= 255) {
          tmp___9 = 3;
        } else {
          tmp___9 = 1;
        }
        (sort_param + i)->key_length += (uint )tmp___9;
      }
      if ((int )keyseg->flag & 40) {
        if ((int )keyseg->length >= 127) {
          tmp___10 = 1;
        } else {
          tmp___10 = 0;
        }
        (sort_param + i)->key_length += (uint )(2 + tmp___10);
      }
      if ((int )keyseg->flag & 16) {
        ((sort_param + i)->key_length) ++;
      }
      keyseg ++;
    }
    while_38_break:  ;
    }
    total_key_length += (sort_param + i)->key_length;
    if ((int )((sort_param + i)->keyinfo)->flag & 128) {
      ft_max_word_len_for_sort = 31U * ((((sort_param + i)->keyinfo)->seg)->charset)->mbmaxlen;
      (sort_param + i)->key_length += ft_max_word_len_for_sort - 254U;
    }
    __Cont:  
    rec_per_key_part += (int )((sort_param + i)->keyinfo)->keysegs;
    i += istep;
    key ++;
  }
  while_37_break:  ;
  sort_info.total_keys = i;
  (sort_param + 0)->master = (char)1;
  (sort_param + 0)->fix_datafile = (char )(! rep_quick);
  if (param->testflag & 8U) {
    (sort_param + 0)->calc_checksum = (char)1;
  } else {
    (sort_param + 0)->calc_checksum = (char)0;
  }
  sort_info.got_error = 0U;

  if (i > 1U) {
    if (rep_quick) {
      {

      }
    } else {
      {

      }
    }
  } else {
    io_share.total_threads = 0;
  }


  i = 0U;
  while (1) {
    while_39_continue:  ;
    if (! (i < sort_info.total_keys)) {
      goto while_39_break;
    }
    if (rep_quick) {
      (sort_param + i)->read_cache = param->read_cache;
    } else {
      if (! i) {
        (sort_param + i)->read_cache = param->read_cache;
      } else {
        (sort_param + i)->read_cache = new_data_cache;
      }
    }
    {
    (sort_param + i)->sortbuff_size = (unsigned int )(param->sort_buffer_length / (ulong )sort_info.total_keys);
    tmp___11 = __dyc_funcallvar_13;
    }
    if (tmp___11) {
      {

      }
      if (io_share.total_threads) {
        {

        }
      }
      sort_info.got_error = 1U;
    } else {
      (sort_info.threads_running) ++;
    }
    i ++;
  }
  while_39_break:  ;

  while (1) {
    while_40_continue:  ;
    if (! sort_info.threads_running) {
      goto while_40_break;
    }
    {

    }
  }
  while_40_break:  ;

  got_error = __dyc_funcallvar_14;
  if (got_error) {
    param->retry_repair = (char)1;
    goto __dyc_dummy_label;
  }
  got_error = 1;
  if ((sort_param + 0)->fix_datafile) {
    {
    tmp___12 = __dyc_funcallvar_15;
    }
    if (tmp___12) {
      goto __dyc_dummy_label;
    } else {
      {
      tmp___13 = __dyc_funcallvar_16;
      }
      if (tmp___13) {
        goto __dyc_dummy_label;
      }
    }
    if ((long )param->testflag & (1L << 21)) {
      if ((info->state)->records + 1UL < start_records) {
        (info->state)->records = start_records;
        goto __dyc_dummy_label;
      }
    }
    {
    (info->state)->data_file_length = sort_param->filepos;
    share->state.state.data_file_length = (info->state)->data_file_length;
    tmp___14 = __dyc_funcallvar_17;
    share->state.version = (unsigned long )tmp___14;

    info->dfile = new_file;
    share->data_file_type = sort_info.new_data_file_type;
    share->pack.header_length = new_header_length;
    }
  } else {
    (info->state)->data_file_length = sort_param->max_pos;
  }
  if (rep_quick) {
    if (del + sort_info.dupp != (info->state)->del) {
      {


      param->retry_repair = (char)1;
      param->testflag = (unsigned int )((long )param->testflag | (1L << 20));
      }
      goto __dyc_dummy_label;
    }
  }
  if ((long )rep_quick & (1L << 12)) {
    if (share->options & 4UL) {
      tmp___15 = 7;
    } else {
      tmp___15 = 0;
    }
    skr = (info->state)->data_file_length + (my_off_t )tmp___15;
    if (skr != sort_info.filelength) {
      if (! (info->s)->base.raid_type) {
        {
        tmp___17 = __dyc_funcallvar_18;
        }
        if (tmp___17) {
          {
          tmp___16 = __dyc_funcallvar_19;

          }
        }
      }
    }
  }
  if (param->testflag & 8U) {
    (info->state)->checksum = param->glob_crc;
  }
  tmp___19 = __dyc_funcallvar_20;
  if (tmp___19) {
    {
    tmp___18 = __dyc_funcallvar_21;

    }
  }
  if (! ((long )param->testflag & (1L << 22))) {
    if (start_records != (info->state)->records) {
      {
      tmp___20 = __dyc_funcallvar_22;

      }
    }
    if (sort_info.dupp) {
      {
      tmp___21 = __dyc_funcallvar_23;

      }
    }
  }
  got_error = 0;
  if ((unsigned long )(& share->state.state) != (unsigned long )info->state) {
    {

    }
  }
  tmp___22 = __dyc_funcallvar_24;
  got_error |= tmp___22;

  if (! rep_quick) {
    {

    }
  }
  if (! got_error) {
    if (new_file >= 0) {
      {

      new_file = -1;
      info->dfile = new_file;
      }
      if (param->testflag & 4U) {
        tmp___23 = 256;
      } else {
        tmp___23 = 0;
      }
      {
      tmp___24 = __dyc_funcallvar_25;
      }
      if (tmp___24) {
        got_error = 1;
      } else {
        {
        tmp___25 = __dyc_funcallvar_26;
        }
        if (tmp___25) {
          got_error = 1;
        }
      }
    }
  }
  if (got_error) {
    if (! param->error_printed) {
      {
      tmp___26 = __dyc_funcallvar_27;

      }
    }
    if (new_file >= 0) {
      {


      }
      if (info->dfile == new_file) {
        info->dfile = -1;
      }
    }
    {
    while (1) {
      while_41_continue:  ;
      (info->s)->state.changed = (unsigned char )((int )(info->s)->state.changed | 6);
      info->update |= 1U;
      goto while_41_break;
    }
    while_41_break:  ;
    }
  } else {
    if (key_map == share->state.key_map) {
      share->state.changed = (unsigned char )((int )share->state.changed & -17);
    }
  }
  share->state.changed = (unsigned char )((int )share->state.changed | 32);







  info->opt_flag &= 4294967277U;
  if (! got_error) {
    if ((long )param->testflag & (1L << 26)) {
      share->state.header.options[0] = (unsigned char )((int )share->state.header.options[0] & 251);
      share->pack.header_length = 0UL;
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(total_key_length);
  __dyc_printpre_byte(istep);
  __dyc_printpre_byte(rec_length);
  __dyc_printpre_byte(del);
  __dyc_print_ptr__typdef_ulong(rec_per_key_part);
  __dyc_print_comp_108st_io_cache_share(io_share);
  __dyc_print_comp_131st_sort_info(sort_info);
  __dyc_printpre_byte(key_map);
  __dyc_print_ptr__char(tmp___3);
  __dyc_print_ptr__comp_91st_my_thread_var(tmp___16);
  __dyc_print_ptr__comp_91st_my_thread_var(tmp___18);
  __dyc_print_ptr__char(tmp___20);
  __dyc_print_ptr__char(tmp___21);
  __dyc_printpre_byte(tmp___23);
  __dyc_print_ptr__comp_91st_my_thread_var(tmp___26);
}
}
