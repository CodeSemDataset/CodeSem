#include "../../include/dycfoo.h"
#include "../../include/mi_check.i.hd.c.h"
void __dyc_foo(void) 
{ int error ;
  int got_error ;
  int flag ;
  uint key ;
  uint left_length ;
  uint b_type ;
  ha_rows records ;
  ha_rows del_blocks ;
  my_off_t used ;
  my_off_t empty ;
  my_off_t pos ;
  my_off_t splits ;
  my_off_t start_recpos ;
  my_off_t del_length ;
  my_off_t link_used ;
  my_off_t start_block ;
  byte *record ;
  byte *to ;
  ha_checksum intern_record_checksum ;
  ha_checksum key_checksum[255] ;
  my_bool static_row_size ;
  MI_KEYDEF *keyinfo ;
  MI_BLOCK_INFO block_info ;
  int volatile   *tmp___0 ;
  int tmp___2 ;
  ha_checksum tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  char *tmp___12 ;
  char *tmp___13 ;
  int tmp___14 ;
  char *tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  char *tmp___18 ;
  char *tmp___19 ;
  char *tmp___20 ;
  char *tmp___21 ;
  char *tmp___22 ;
  char *tmp___23 ;
  int tmp___24 ;
  my_bool tmp___25 ;
  ulong tmp___26 ;
  int tmp___27 ;
  char *tmp___28 ;
  int tmp___29 ;
  char *tmp___30 ;
  int tmp___31 ;
  ha_checksum tmp___32 ;
  ha_checksum tmp___33 ;
  char *tmp___34 ;
  uint key_length ;
  uint tmp___35 ;
  int search_result ;
  int tmp___38 ;
  char *tmp___39 ;
  int tmp___40 ;
  ha_checksum tmp___41 ;
  int tmp___42 ;
  int tmp___43 ;
  char *tmp___44 ;
  char *tmp___45 ;
  char *tmp___46 ;
  char *tmp___47 ;
  char *tmp___48 ;
  char *tmp___49 ;
  char *tmp___50 ;
  char *tmp___51 ;
  char *tmp___52 ;
  char *tmp___53 ;
  char *tmp___54 ;
  char *tmp___55 ;
  char *tmp___56 ;
  double tmp___57 ;
  char *tmp___58 ;
  int tmp___59 ;
  char *tmp___60 ;
  char *tmp___61 ;
  char *tmp___62 ;
  char *tmp___63 ;
  char *tmp___64 ;
  char *tmp___65 ;
  char *tmp___66 ;
  struct st_my_thread_var *tmp___67 ;
  MI_CHECK *param ;
  MI_INFO *info ;
  int extend ;
  int volatile   *__dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  ha_checksum __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  char *__dyc_funcallvar_6 ;
  uint __dyc_funcallvar_7 ;
  char *__dyc_funcallvar_8 ;
  char *__dyc_funcallvar_9 ;
  char *__dyc_funcallvar_10 ;
  char *__dyc_funcallvar_11 ;
  char *__dyc_funcallvar_12 ;
  char *__dyc_funcallvar_13 ;
  char *__dyc_funcallvar_14 ;
  byte *__dyc_funcallvar_15 ;
  char *__dyc_funcallvar_16 ;
  char *__dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  char *__dyc_funcallvar_19 ;
  char *__dyc_funcallvar_20 ;
  char *__dyc_funcallvar_21 ;
  char *__dyc_funcallvar_22 ;
  ulong __dyc_funcallvar_23 ;
  char *__dyc_funcallvar_24 ;
  ha_checksum __dyc_funcallvar_25 ;
  my_bool __dyc_funcallvar_26 ;
  char *__dyc_funcallvar_27 ;
  int __dyc_funcallvar_28 ;
  char *__dyc_funcallvar_29 ;
  char *__dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  int __dyc_funcallvar_32 ;
  char *__dyc_funcallvar_33 ;
  ha_checksum __dyc_funcallvar_34 ;
  ha_checksum __dyc_funcallvar_35 ;
  char *__dyc_funcallvar_36 ;
  uint __dyc_funcallvar_37 ;
  int __dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;
  char *__dyc_funcallvar_40 ;
  ha_checksum __dyc_funcallvar_41 ;
  char *__dyc_funcallvar_42 ;
  char *__dyc_funcallvar_43 ;
  char *__dyc_funcallvar_44 ;
  char *__dyc_funcallvar_45 ;
  char *__dyc_funcallvar_46 ;
  char *__dyc_funcallvar_47 ;
  char *__dyc_funcallvar_48 ;
  char *__dyc_funcallvar_49 ;
  char *__dyc_funcallvar_50 ;
  char *__dyc_funcallvar_51 ;
  char *__dyc_funcallvar_52 ;
  char *__dyc_funcallvar_53 ;
  char *__dyc_funcallvar_54 ;
  char *__dyc_funcallvar_55 ;
  char *__dyc_funcallvar_56 ;
  char *__dyc_funcallvar_57 ;
  char *__dyc_funcallvar_58 ;
  char *__dyc_funcallvar_59 ;
  char *__dyc_funcallvar_60 ;
  char *__dyc_funcallvar_61 ;
  char *__dyc_funcallvar_62 ;
  struct st_my_thread_var *__dyc_funcallvar_63 ;

  {
  error = __dyc_readpre_byte();
  got_error = __dyc_readpre_byte();
  left_length = (uint )__dyc_readpre_byte();
  records = (ha_rows )__dyc_readpre_byte();
  del_blocks = (ha_rows )__dyc_readpre_byte();
  used = (my_off_t )__dyc_readpre_byte();
  empty = (my_off_t )__dyc_readpre_byte();
  pos = (my_off_t )__dyc_readpre_byte();
  splits = (my_off_t )__dyc_readpre_byte();
  start_recpos = (my_off_t )__dyc_readpre_byte();
  del_length = (my_off_t )__dyc_readpre_byte();
  link_used = (my_off_t )__dyc_readpre_byte();
  record = __dyc_read_ptr__typdef_byte();
  to = __dyc_read_ptr__typdef_byte();
  intern_record_checksum = (ha_checksum )__dyc_readpre_byte();
  static_row_size = (my_bool )__dyc_readpre_byte();
  block_info = __dyc_read_comp_147st_mi_block_info();
  param = __dyc_read_ptr__typdef_MI_CHECK();
  info = __dyc_read_ptr__typdef_MI_INFO();
  extend = __dyc_readpre_byte();
  __dyc_funcallvar_2 = (int volatile   *)__dyc_read_ptr__int();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (ha_checksum )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  __dyc_funcallvar_7 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_read_ptr__char();
  __dyc_funcallvar_9 = __dyc_read_ptr__char();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  __dyc_funcallvar_11 = __dyc_read_ptr__char();
  __dyc_funcallvar_12 = __dyc_read_ptr__char();
  __dyc_funcallvar_13 = __dyc_read_ptr__char();
  __dyc_funcallvar_14 = __dyc_read_ptr__char();
  __dyc_funcallvar_15 = __dyc_read_ptr__typdef_byte();
  __dyc_funcallvar_16 = __dyc_read_ptr__char();
  __dyc_funcallvar_17 = __dyc_read_ptr__char();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_read_ptr__char();
  __dyc_funcallvar_20 = __dyc_read_ptr__char();
  __dyc_funcallvar_21 = __dyc_read_ptr__char();
  __dyc_funcallvar_22 = __dyc_read_ptr__char();
  __dyc_funcallvar_23 = (ulong )__dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_read_ptr__char();
  __dyc_funcallvar_25 = (ha_checksum )__dyc_readpre_byte();
  __dyc_funcallvar_26 = (my_bool )__dyc_readpre_byte();
  __dyc_funcallvar_27 = __dyc_read_ptr__char();
  __dyc_funcallvar_28 = __dyc_readpre_byte();
  __dyc_funcallvar_29 = __dyc_read_ptr__char();
  __dyc_funcallvar_30 = __dyc_read_ptr__char();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_readpre_byte();
  __dyc_funcallvar_33 = __dyc_read_ptr__char();
  __dyc_funcallvar_34 = (ha_checksum )__dyc_readpre_byte();
  __dyc_funcallvar_35 = (ha_checksum )__dyc_readpre_byte();
  __dyc_funcallvar_36 = __dyc_read_ptr__char();
  __dyc_funcallvar_37 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_read_ptr__char();
  __dyc_funcallvar_41 = (ha_checksum )__dyc_readpre_byte();
  __dyc_funcallvar_42 = __dyc_read_ptr__char();
  __dyc_funcallvar_43 = __dyc_read_ptr__char();
  __dyc_funcallvar_44 = __dyc_read_ptr__char();
  __dyc_funcallvar_45 = __dyc_read_ptr__char();
  __dyc_funcallvar_46 = __dyc_read_ptr__char();
  __dyc_funcallvar_47 = __dyc_read_ptr__char();
  __dyc_funcallvar_48 = __dyc_read_ptr__char();
  __dyc_funcallvar_49 = __dyc_read_ptr__char();
  __dyc_funcallvar_50 = __dyc_read_ptr__char();
  __dyc_funcallvar_51 = __dyc_read_ptr__char();
  __dyc_funcallvar_52 = __dyc_read_ptr__char();
  __dyc_funcallvar_53 = __dyc_read_ptr__char();
  __dyc_funcallvar_54 = __dyc_read_ptr__char();
  __dyc_funcallvar_55 = __dyc_read_ptr__char();
  __dyc_funcallvar_56 = __dyc_read_ptr__char();
  __dyc_funcallvar_57 = __dyc_read_ptr__char();
  __dyc_funcallvar_58 = __dyc_read_ptr__char();
  __dyc_funcallvar_59 = __dyc_read_ptr__char();
  __dyc_funcallvar_60 = __dyc_read_ptr__char();
  __dyc_funcallvar_61 = __dyc_read_ptr__char();
  __dyc_funcallvar_62 = __dyc_read_ptr__char();
  __dyc_funcallvar_63 = __dyc_read_ptr__comp_91st_my_thread_var();
  flag = 0;
  key = 0;
  b_type = 0;
  start_block = 0;
  keyinfo = 0;
  tmp___0 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
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
  tmp___27 = 0;
  tmp___28 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  key_length = 0;
  tmp___35 = 0;
  search_result = 0;
  tmp___38 = 0;
  tmp___39 = 0;
  tmp___40 = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  tmp___43 = 0;
  tmp___44 = 0;
  tmp___45 = 0;
  tmp___46 = 0;
  tmp___47 = 0;
  tmp___48 = 0;
  tmp___49 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___53 = 0;
  tmp___54 = 0;
  tmp___55 = 0;
  tmp___56 = 0;
  tmp___57 = 0;
  tmp___58 = 0;
  tmp___59 = 0;
  tmp___60 = 0;
  tmp___61 = 0;
  tmp___62 = 0;
  tmp___63 = 0;
  tmp___64 = 0;
  tmp___65 = 0;
  tmp___66 = 0;
  tmp___67 = 0;
  while (1) {
    while_12_continue:  ;
    if (! (pos < (info->state)->data_file_length)) {
      goto while_12_break;
    }
    {
    tmp___0 = __dyc_funcallvar_2;
    }
    if (*tmp___0) {
      goto __dyc_dummy_label;
    }
    if ((int )(info->s)->data_file_type == 0) {
      goto switch_13_0;
    } else {
      if ((int )(info->s)->data_file_type == 1) {
        goto switch_13_1;
      } else {
        if ((int )(info->s)->data_file_type == 2) {
          goto switch_13_2;
        } else {
          if (0) {
            switch_13_0:  
            if ((unsigned long )(param->read_cache.read_pos + (info->s)->base.pack_reclength) <= (unsigned long )param->read_cache.read_end) {
              {

              param->read_cache.read_pos += (info->s)->base.pack_reclength;
              tmp___2 = 0;
              }
            } else {
              {
              tmp___2 = __dyc_funcallvar_3;
              }
            }
            if (tmp___2) {
              goto __dyc_dummy_label;
            }
            start_recpos = pos;
            pos += (info->s)->base.pack_reclength;
            splits ++;
            if ((int )*record == 0) {
              del_blocks ++;
              del_length += (info->s)->base.pack_reclength;
              goto while_12_continue;
            }
            {
            tmp___3 = __dyc_funcallvar_4;
            param->glob_crc += tmp___3;
            used += (info->s)->base.pack_reclength;
            }
            goto switch_13_break;
            switch_13_1:  
            block_info.second_read = 0U;
            flag = (int )block_info.second_read;
            block_info.next_filepos = pos;
            {
            while (1) {
              while_14_continue:  ;
              if (flag) {
                tmp___4 = 0;
              } else {
                tmp___4 = 1;
              }
              {
              start_block = block_info.next_filepos;
              tmp___5 = __dyc_funcallvar_5;
              }
              if (tmp___5) {
                goto __dyc_dummy_label;
              }
              if (start_block & 3UL) {
                {
                tmp___6 = __dyc_funcallvar_6;

                }
                goto __dyc_dummy_label;
              }
              {
              b_type = __dyc_funcallvar_7;
              }
              if (b_type & 60U) {
                if (b_type & 16U) {
                  if (flag) {
                    {
                    tmp___7 = __dyc_funcallvar_8;

                    }
                    goto __dyc_dummy_label;
                  }
                  pos = block_info.filepos + block_info.block_len;
                  goto next;
                }
                if (b_type & 4U) {
                  if (block_info.block_len < (info->s)->base.min_block_length) {
                    {
                    tmp___8 = __dyc_funcallvar_9;

                    }
                    goto __dyc_dummy_label;
                  }
                  if (block_info.next_filepos != 0xffffffffUL) {
                    if (block_info.next_filepos >= (info->state)->data_file_length) {
                      {
                      tmp___9 = __dyc_funcallvar_10;

                      }
                      goto __dyc_dummy_label;
                    } else {
                      goto _L;
                    }
                  } else {
                    _L:  
                    if (block_info.prev_filepos != 0xffffffffUL) {
                      if (block_info.prev_filepos >= (info->state)->data_file_length) {
                        {
                        tmp___9 = __dyc_funcallvar_11;

                        }
                        goto __dyc_dummy_label;
                      }
                    }
                  }
                  del_blocks ++;
                  del_length += block_info.block_len;
                  pos = block_info.filepos + block_info.block_len;
                  splits ++;
                  goto next;
                }
                {
                tmp___10 = __dyc_funcallvar_12;

                }
                goto __dyc_dummy_label;
              }
              if ((info->state)->data_file_length < block_info.filepos + block_info.block_len) {
                {
                tmp___11 = __dyc_funcallvar_13;

                got_error = 1;
                }
                goto while_14_break;
              }
              splits ++;
              tmp___14 = flag;
              flag ++;
              if (! tmp___14) {
                start_recpos = pos;
                pos = block_info.filepos + block_info.block_len;
                if (block_info.rec_len > (ulong )((unsigned int )(info->s)->base.max_pack_length)) {
                  {
                  tmp___12 = __dyc_funcallvar_14;

                  got_error = 1;
                  }
                  goto while_14_break;
                }
                if ((info->s)->base.blobs) {
                  {
                  to = __dyc_funcallvar_15;
                  }
                  if (! to) {
                    {
                    tmp___13 = __dyc_funcallvar_16;

                    got_error = 1;
                    }
                    goto while_14_break;
                  }
                } else {
                  to = info->rec_buff;
                }
                left_length = (unsigned int )block_info.rec_len;
              }
              if ((ulong )left_length < block_info.data_len) {
                {
                tmp___15 = __dyc_funcallvar_17;

                got_error = 1;
                }
                goto while_14_break;
              }
              if (flag == 1) {
                tmp___16 = 1;
              } else {
                tmp___16 = 0;
              }
              {
              tmp___17 = __dyc_funcallvar_18;
              }
              if (tmp___17) {
                goto __dyc_dummy_label;
              }
              to += block_info.data_len;
              link_used += block_info.filepos - start_block;
              used += (block_info.filepos - start_block) + block_info.data_len;
              empty += block_info.block_len - block_info.data_len;
              left_length = (unsigned int )((ulong )left_length - block_info.data_len);
              if (left_length) {
                if (b_type & 2U) {
                  {
                  tmp___18 = __dyc_funcallvar_19;
                  tmp___19 = __dyc_funcallvar_20;
                  tmp___20 = __dyc_funcallvar_21;

                  got_error = 1;
                  }
                  goto while_14_break;
                }
                if ((info->state)->data_file_length < block_info.next_filepos) {
                  {
                  tmp___21 = __dyc_funcallvar_22;

                  got_error = 1;
                  }
                  goto while_14_break;
                }
              }
              if (! left_length) {
                goto while_14_break;
              }
            }
            while_14_break:  ;
            }
            if (! got_error) {
              {
              tmp___26 = __dyc_funcallvar_23;
              }
              if (tmp___26 == 4294967295UL) {
                {
                tmp___22 = __dyc_funcallvar_24;

                got_error = 1;
                }
              } else {
                {
                info->checksum = __dyc_funcallvar_25;
                }
                if ((long )param->testflag & ((512L | (1L << 14)) | (1L << 28))) {
                  if ((info->s)->calc_checksum) {
                    tmp___24 = 1;
                  } else {
                    tmp___24 = 0;
                  }
                  {
                  tmp___25 = __dyc_funcallvar_26;
                  }
                  if (tmp___25) {
                    {
                    tmp___23 = __dyc_funcallvar_27;

                    got_error = 1;
                    }
                  }
                }
                if (! got_error) {
                  param->glob_crc += info->checksum;
                }
              }
            } else {
              if (! flag) {
                pos = block_info.filepos + block_info.block_len;
              }
            }
            goto switch_13_break;
            switch_13_2:  
            {
            tmp___27 = __dyc_funcallvar_28;
            }
            if (tmp___27) {
              goto __dyc_dummy_label;
            }
            {
            start_recpos = pos;
            splits ++;

            pos = block_info.filepos + block_info.rec_len;
            }
            if (block_info.rec_len < (ulong )((unsigned int )(info->s)->min_pack_length)) {
              {
              tmp___28 = __dyc_funcallvar_29;

              got_error = 1;
              }
              goto switch_13_break;
            } else {
              if (block_info.rec_len > (ulong )((unsigned int )(info->s)->max_pack_length)) {
                {
                tmp___28 = __dyc_funcallvar_30;

                got_error = 1;
                }
                goto switch_13_break;
              }
            }
            {
            tmp___29 = __dyc_funcallvar_31;
            }
            if (tmp___29) {
              goto __dyc_dummy_label;
            }
            {
            tmp___31 = __dyc_funcallvar_32;
            }
            if (tmp___31) {
              {
              tmp___30 = __dyc_funcallvar_33;

              got_error = 1;
              }
            }
            if (static_row_size) {
              {
              tmp___32 = __dyc_funcallvar_34;
              param->glob_crc += tmp___32;
              }
            } else {
              {
              tmp___33 = __dyc_funcallvar_35;
              param->glob_crc += tmp___33;
              }
            }
            link_used += block_info.filepos - start_recpos;
            used += pos - start_recpos;
          } else {
            switch_13_break:  ;
          }
        }
      }
    }
    if (! got_error) {
      intern_record_checksum += (unsigned int )start_recpos;
      records ++;
      if ((unsigned long )param->testflag & (1UL << 31)) {
        if (records % 1000UL == 0UL) {
          {
          tmp___34 = __dyc_funcallvar_36;


          }
        }
      }
      key = 0U;
      keyinfo = (info->s)->keyinfo;
      {
      while (1) {
        while_15_continue:  ;
        if (! (key < (info->s)->base.keys)) {
          goto while_15_break;
        }
        if ((unsigned long long )(info->s)->state.key_map & (1ULL << key)) {
          tmp___42 = 1;
        } else {
          tmp___42 = 0;
        }
        if (tmp___42) {
          if (! ((int )keyinfo->flag & 128)) {
            {
            tmp___35 = __dyc_funcallvar_37;
            key_length = tmp___35;
            }
            if (extend) {
              if ((int )keyinfo->flag & 1024) {
                {
                tmp___38 = __dyc_funcallvar_38;
                }
              } else {
                {
                tmp___38 = __dyc_funcallvar_39;
                }
              }
              search_result = tmp___38;
              if (search_result) {
                {
                tmp___39 = __dyc_funcallvar_40;

                tmp___40 = error;
                error ++;
                }
                if (tmp___40 > 20) {
                  goto __dyc_dummy_label;
                } else {
                  if (! ((long )param->testflag & (1L << 28))) {
                    goto __dyc_dummy_label;
                  }
                }
              }
            } else {
              {
              tmp___41 = __dyc_funcallvar_41;
              key_checksum[key] += tmp___41;
              }
            }
          }
        }
        key ++;
        keyinfo ++;
      }
      while_15_break:  ;
      }
    } else {
      got_error = 0;
      tmp___43 = error;
      error ++;
      if (tmp___43 > 20) {
        goto __dyc_dummy_label;
      } else {
        if (! ((long )param->testflag & (1L << 28))) {
          goto __dyc_dummy_label;
        }
      }
    }
    next: ;
  }
  while_12_break:  ;
  if ((unsigned long )param->testflag & (1UL << 31)) {
    {


    }
  }
  if (records != (info->state)->records) {
    {
    tmp___44 = __dyc_funcallvar_42;
    tmp___45 = __dyc_funcallvar_43;

    error = 1;
    }
  } else {
    if (param->record_checksum) {
      if (param->record_checksum != intern_record_checksum) {
        {

        error = 1;
        }
      } else {
        goto _L___1;
      }
    } else {
      _L___1:  
      if (param->glob_crc != (info->state)->checksum) {
        if ((info->s)->options & 36UL) {
          {

          error = 1;
          }
        } else {
          goto _L___0;
        }
      } else {
        _L___0:  
        if (! extend) {
          key = 0U;
          {
          while (1) {
            while_16_continue:  ;
            if (! (key < (info->s)->base.keys)) {
              goto while_16_break;
            }
            if (key_checksum[key] != param->key_crc[key]) {
              if (! ((int )((info->s)->keyinfo + key)->flag & 1152)) {
                {

                error = 1;
                }
              }
            }
            key ++;
          }
          while_16_break:  ;
          }
        }
      }
    }
  }
  if (del_length != (info->state)->empty) {
    {
    tmp___46 = __dyc_funcallvar_44;
    tmp___47 = __dyc_funcallvar_45;

    }
  }
  if ((used + empty) + del_length != (info->state)->data_file_length) {
    {
    tmp___48 = __dyc_funcallvar_46;
    tmp___49 = __dyc_funcallvar_47;
    tmp___50 = __dyc_funcallvar_48;

    tmp___51 = __dyc_funcallvar_49;
    tmp___52 = __dyc_funcallvar_50;

    }
  }
  if (del_blocks != (info->state)->del) {
    {
    tmp___53 = __dyc_funcallvar_51;
    tmp___54 = __dyc_funcallvar_52;

    }
  }
  if (splits != (info->s)->state.split) {
    {
    tmp___55 = __dyc_funcallvar_53;
    tmp___56 = __dyc_funcallvar_54;

    }
  }
  if ((long )param->testflag & (1L << 13)) {
    if (param->warning_printed) {
      {

      }
    } else {
      if (param->error_printed) {
        {

        }
      }
    }
    if (used != 0UL) {
      if (! param->error_printed) {
        if ((info->s)->base.blobs) {
          tmp___57 = 0.0;
        } else {
          tmp___57 = (((double )((info->s)->base.reclength * records) - (double )used) / (double )((info->s)->base.reclength * records)) * 100.0;
        }
        {
        tmp___58 = __dyc_funcallvar_55;

        }
        if (! records) {
          tmp___59 = 100;
        } else {
          tmp___59 = (int )(((double )(del_length + empty) / (double )used) * 100.0);
        }
        {

        }
      }
    }
    {
    tmp___60 = __dyc_funcallvar_56;
    tmp___61 = __dyc_funcallvar_57;

    tmp___62 = __dyc_funcallvar_58;
    tmp___63 = __dyc_funcallvar_59;

    tmp___64 = __dyc_funcallvar_60;
    tmp___65 = __dyc_funcallvar_61;

    }
  }

  goto __dyc_dummy_label;
  tmp___66 = __dyc_funcallvar_62;
  tmp___67 = __dyc_funcallvar_63;


  param->testflag = (unsigned int )((long )param->testflag | (1L << 20));
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(error);
  __dyc_printpre_byte(got_error);
  __dyc_printpre_byte(flag);
  __dyc_printpre_byte(records);
  __dyc_printpre_byte(del_blocks);
  __dyc_printpre_byte(used);
  __dyc_printpre_byte(empty);
  __dyc_printpre_byte(pos);
  __dyc_printpre_byte(splits);
  __dyc_printpre_byte(start_recpos);
  __dyc_printpre_byte(del_length);
  __dyc_printpre_byte(link_used);
  __dyc_printpre_byte(start_block);
  __dyc_print_ptr__typdef_byte(to);
  __dyc_printpre_byte(intern_record_checksum);
  __dyc_print_ptr__typdef_MI_KEYDEF(keyinfo);
  __dyc_printpre_byte(tmp___4);
  __dyc_print_ptr__char(tmp___6);
  __dyc_print_ptr__char(tmp___7);
  __dyc_print_ptr__char(tmp___8);
  __dyc_print_ptr__char(tmp___9);
  __dyc_print_ptr__char(tmp___10);
  __dyc_print_ptr__char(tmp___11);
  __dyc_print_ptr__char(tmp___12);
  __dyc_print_ptr__char(tmp___13);
  __dyc_print_ptr__char(tmp___15);
  __dyc_printpre_byte(tmp___16);
  __dyc_print_ptr__char(tmp___18);
  __dyc_print_ptr__char(tmp___19);
  __dyc_print_ptr__char(tmp___20);
  __dyc_print_ptr__char(tmp___21);
  __dyc_print_ptr__char(tmp___22);
  __dyc_print_ptr__char(tmp___23);
  __dyc_printpre_byte(tmp___24);
  __dyc_print_ptr__char(tmp___28);
  __dyc_print_ptr__char(tmp___30);
  __dyc_print_ptr__char(tmp___34);
  __dyc_printpre_byte(key_length);
  __dyc_print_ptr__char(tmp___39);
  __dyc_print_ptr__char(tmp___44);
  __dyc_print_ptr__char(tmp___45);
  __dyc_print_ptr__char(tmp___46);
  __dyc_print_ptr__char(tmp___47);
  __dyc_print_ptr__char(tmp___48);
  __dyc_print_ptr__char(tmp___49);
  __dyc_print_ptr__char(tmp___50);
  __dyc_print_ptr__char(tmp___51);
  __dyc_print_ptr__char(tmp___52);
  __dyc_print_ptr__char(tmp___53);
  __dyc_print_ptr__char(tmp___54);
  __dyc_print_ptr__char(tmp___55);
  __dyc_print_ptr__char(tmp___56);
  __dyc_printpre_byte(tmp___57);
  __dyc_print_ptr__char(tmp___58);
  __dyc_printpre_byte(tmp___59);
  __dyc_print_ptr__char(tmp___60);
  __dyc_print_ptr__char(tmp___61);
  __dyc_print_ptr__char(tmp___62);
  __dyc_print_ptr__char(tmp___63);
  __dyc_print_ptr__char(tmp___64);
  __dyc_print_ptr__char(tmp___65);
  __dyc_print_ptr__char(tmp___66);
  __dyc_print_ptr__comp_91st_my_thread_var(tmp___67);
}
}
