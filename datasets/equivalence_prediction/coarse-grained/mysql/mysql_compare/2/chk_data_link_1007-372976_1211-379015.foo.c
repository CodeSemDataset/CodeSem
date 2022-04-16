#include "../../include/dycfoo.h"
#include "../../include/mi_check.i.hd.c.h"
void __dyc_foo(void) 
{ int got_error ;
  int flag ;
  uint left_length ;
  uint b_type ;
  ha_rows del_blocks ;
  my_off_t used ;
  my_off_t empty ;
  my_off_t pos ;
  my_off_t splits ;
  my_off_t start_recpos ;
  my_off_t del_length ;
  my_off_t link_used ;
  my_off_t start_block ;
  byte *to ;
  my_bool static_row_size ;
  MI_BLOCK_INFO block_info ;
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
  MI_CHECK *param ;
  MI_INFO *info ;
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

  {
  got_error = __dyc_readpre_byte();
  left_length = (uint )__dyc_readpre_byte();
  del_blocks = (ha_rows )__dyc_readpre_byte();
  used = (my_off_t )__dyc_readpre_byte();
  empty = (my_off_t )__dyc_readpre_byte();
  pos = (my_off_t )__dyc_readpre_byte();
  splits = (my_off_t )__dyc_readpre_byte();
  del_length = (my_off_t )__dyc_readpre_byte();
  link_used = (my_off_t )__dyc_readpre_byte();
  to = __dyc_read_ptr__typdef_byte();
  static_row_size = (my_bool )__dyc_readpre_byte();
  block_info = __dyc_read_comp_147st_mi_block_info();
  tmp___3 = (ha_checksum )__dyc_readpre_byte();
  param = __dyc_read_ptr__typdef_MI_CHECK();
  info = __dyc_read_ptr__typdef_MI_INFO();
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
  flag = 0;
  b_type = 0;
  start_recpos = 0;
  start_block = 0;
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
  param->glob_crc += tmp___3;
  used += (info->s)->base.pack_reclength;
  goto __dyc_dummy_label;
  switch_13_1:  
  block_info.second_read = 0U;
  flag = (int )block_info.second_read;
  block_info.next_filepos = pos;
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
        goto __dyc_dummy_label;
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
        goto __dyc_dummy_label;
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
  goto __dyc_dummy_label;
  tmp___27 = __dyc_funcallvar_28;
  if (tmp___27) {
    goto __dyc_dummy_label;
  }
  start_recpos = pos;
  splits ++;

  pos = block_info.filepos + block_info.rec_len;
  if (block_info.rec_len < (ulong )((unsigned int )(info->s)->min_pack_length)) {
    {
    tmp___28 = __dyc_funcallvar_29;

    got_error = 1;
    }
    goto __dyc_dummy_label;
  } else {
    if (block_info.rec_len > (ulong )((unsigned int )(info->s)->max_pack_length)) {
      {
      tmp___28 = __dyc_funcallvar_30;

      got_error = 1;
      }
      goto __dyc_dummy_label;
    }
  }
  tmp___29 = __dyc_funcallvar_31;
  if (tmp___29) {
    goto __dyc_dummy_label;
  }
  tmp___31 = __dyc_funcallvar_32;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(got_error);
  __dyc_printpre_byte(flag);
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
}
}
