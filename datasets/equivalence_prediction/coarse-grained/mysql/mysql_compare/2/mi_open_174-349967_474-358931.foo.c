#include "../../include/dycfoo.h"
#include "../../include/mi_open.i.hd.c.h"
void __dyc_foo(void) 
{ CHARSET_INFO my_charset_bin ;
  CHARSET_INFO *default_charset_info ;
  my_bool my_disable_locking ;
  ulong myisam_block_size ;
  HA_KEYSEG const   ft_keysegs[2] ;
  int lock_error ;
  int kfile ;
  int have_rtree ;
  uint i ;
  uint j ;
  uint len ;
  uint errpos ;
  uint base_pos ;
  uint offset ;
  uint keys ;
  uint key_parts ;
  uint unique_key_parts ;
  uint fulltext_keys ;
  uint uniques ;
  char *disk_pos ;
  char *end_pos ;
  MYISAM_SHARE share_buff ;
  MYISAM_SHARE *share ;
  ulonglong max_key_file_length ;
  ulonglong max_data_file_length ;
  struct st_my_thread_var *tmp___30 ;
  uint tmp___31 ;
  uchar *tmp___32 ;
  struct st_my_thread_var *tmp___33 ;
  struct st_my_thread_var *tmp___34 ;
  struct st_my_thread_var *tmp___35 ;
  ulonglong tmp___37 ;
  struct st_my_thread_var *tmp___38 ;
  size_t tmp___39 ;
  size_t tmp___40 ;
  size_t tmp___41 ;
  gptr tmp___42 ;
  size_t tmp___43 ;
  HA_KEYSEG *pos ;
  struct st_my_thread_var *tmp___44 ;
  struct st_my_thread_var *tmp___45 ;
  struct st_my_thread_var *tmp___46 ;
  uint sp_segs ;
  uint k ;
  struct st_my_thread_var *tmp___47 ;
  struct st_my_thread_var *tmp___48 ;
  struct st_my_thread_var *tmp___49 ;
  struct st_my_thread_var *tmp___50 ;
  struct st_my_thread_var *tmp___51 ;
  int tmp___52 ;
  __pid_t tmp___53 ;
  uint open_flags ;
  uint __dyc_funcallvar_25 ;
  struct st_my_thread_var *__dyc_funcallvar_26 ;
  uchar *__dyc_funcallvar_27 ;
  struct st_my_thread_var *__dyc_funcallvar_28 ;
  struct st_my_thread_var *__dyc_funcallvar_29 ;
  struct st_my_thread_var *__dyc_funcallvar_30 ;
  struct st_my_thread_var *__dyc_funcallvar_31 ;
  struct st_my_thread_var *__dyc_funcallvar_32 ;
  struct st_my_thread_var *__dyc_funcallvar_33 ;
  ulonglong __dyc_funcallvar_34 ;
  ulonglong __dyc_funcallvar_35 ;
  struct st_my_thread_var *__dyc_funcallvar_36 ;
  size_t __dyc_funcallvar_37 ;
  size_t __dyc_funcallvar_38 ;
  size_t __dyc_funcallvar_39 ;
  gptr __dyc_funcallvar_40 ;
  size_t __dyc_funcallvar_41 ;
  char *__dyc_funcallvar_42 ;
  struct st_my_thread_var *__dyc_funcallvar_43 ;
  char *__dyc_funcallvar_44 ;
  struct st_my_thread_var *__dyc_funcallvar_45 ;
  CHARSET_INFO *__dyc_funcallvar_46 ;
  struct st_my_thread_var *__dyc_funcallvar_47 ;
  struct st_my_thread_var *__dyc_funcallvar_48 ;
  char *__dyc_funcallvar_49 ;
  struct st_my_thread_var *__dyc_funcallvar_50 ;
  char *__dyc_funcallvar_51 ;
  CHARSET_INFO *__dyc_funcallvar_52 ;
  struct st_my_thread_var *__dyc_funcallvar_53 ;
  struct st_my_thread_var *__dyc_funcallvar_54 ;
  char *__dyc_funcallvar_55 ;
  struct st_my_thread_var *__dyc_funcallvar_56 ;
  int __dyc_funcallvar_57 ;
  __pid_t __dyc_funcallvar_58 ;

  {
  my_charset_bin = __dyc_read_comp_95charset_info_st();
  default_charset_info = __dyc_read_ptr__typdef_CHARSET_INFO();
  my_disable_locking = (my_bool )__dyc_readpre_byte();
  myisam_block_size = (ulong )__dyc_readpre_byte();
  lock_error = __dyc_readpre_byte();
  kfile = __dyc_readpre_byte();
  base_pos = (uint )__dyc_readpre_byte();
  end_pos = __dyc_read_ptr__char();
  share_buff = __dyc_read_comp_121st_mi_isam_share();
  share = __dyc_read_ptr__typdef_MYISAM_SHARE();
  open_flags = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_25 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_26 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_27 = __dyc_read_ptr__typdef_uchar();
  __dyc_funcallvar_28 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_29 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_30 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_31 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_32 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_33 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_34 = (ulonglong )__dyc_readpre_byte();
  __dyc_funcallvar_35 = (ulonglong )__dyc_readpre_byte();
  __dyc_funcallvar_36 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_37 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_38 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_39 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_read_ptr__char();
  __dyc_funcallvar_41 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_42 = __dyc_read_ptr__char();
  __dyc_funcallvar_43 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_44 = __dyc_read_ptr__char();
  __dyc_funcallvar_45 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_46 = __dyc_read_ptr__typdef_CHARSET_INFO();
  __dyc_funcallvar_47 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_48 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_49 = __dyc_read_ptr__char();
  __dyc_funcallvar_50 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_51 = __dyc_read_ptr__char();
  __dyc_funcallvar_52 = __dyc_read_ptr__typdef_CHARSET_INFO();
  __dyc_funcallvar_53 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_54 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_55 = __dyc_read_ptr__char();
  __dyc_funcallvar_56 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_57 = __dyc_readpre_byte();
  __dyc_funcallvar_58 = __dyc_readpre_byte();
  have_rtree = 0;
  i = 0;
  j = 0;
  len = 0;
  errpos = 0;
  offset = 0;
  keys = 0;
  key_parts = 0;
  unique_key_parts = 0;
  fulltext_keys = 0;
  uniques = 0;
  disk_pos = 0;
  max_key_file_length = 0;
  max_data_file_length = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  tmp___39 = 0;
  tmp___40 = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  tmp___43 = 0;
  pos = 0;
  tmp___44 = 0;
  tmp___45 = 0;
  tmp___46 = 0;
  sp_segs = 0;
  k = 0;
  tmp___47 = 0;
  tmp___48 = 0;
  tmp___49 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___53 = 0;
  errpos = 3U;
  tmp___31 = __dyc_funcallvar_25;
  if (tmp___31) {
    {
    tmp___30 = __dyc_funcallvar_26;
    tmp___30->thr_errno = 126;
    }
    goto __dyc_dummy_label;
  }
  len = (unsigned int )((unsigned short )((int )((unsigned short )share->state.header.state_info_length[1]) + ((int )((unsigned short )share->state.header.state_info_length[0]) << 8)));
  keys = (unsigned int )share->state.header.keys;
  uniques = (unsigned int )share->state.header.uniques;
  fulltext_keys = (unsigned int )share->state.header.fulltext_keys;
  key_parts = (unsigned int )((unsigned short )((int )((unsigned short )share->state.header.key_parts[1]) + ((int )((unsigned short )share->state.header.key_parts[0]) << 8)));
  unique_key_parts = (unsigned int )((unsigned short )((int )((unsigned short )share->state.header.unique_key_parts[1]) + ((int )((unsigned short )share->state.header.unique_key_parts[0]) << 8)));
  if (len != 176U) {

  }
  share->state_diff_length = (unsigned long )(len - 176U);

  len = (unsigned int )((unsigned short )((int )((unsigned short )share->state.header.base_info_length[1]) + ((int )((unsigned short )share->state.header.base_info_length[0]) << 8)));
  if (len != 100U) {

  }
  tmp___32 = __dyc_funcallvar_27;
  disk_pos = (char *)tmp___32;
  share->state.state_length = base_pos;
  if (! (open_flags & 32U)) {
    if ((int )share->state.changed & 2) {
      goto _L___2;
    } else {
      if (open_flags & 16U) {
        if (my_disable_locking) {
          if (share->state.open_count) {
            _L___2:  
            {
            tmp___33 = __dyc_funcallvar_28;
            }
            if ((int )share->state.changed & 4) {
              tmp___33->thr_errno = 144;
            } else {
              tmp___33->thr_errno = 145;
            }
            goto __dyc_dummy_label;
          }
        }
      }
    }
  }
  if (share->base.keystart > 65535UL) {
    {
    tmp___34 = __dyc_funcallvar_29;
    tmp___34->thr_errno = 126;
    }
    goto __dyc_dummy_label;
  } else {
    if (share->base.rec_reflength > 8U) {
      {
      tmp___34 = __dyc_funcallvar_30;
      tmp___34->thr_errno = 126;
      }
      goto __dyc_dummy_label;
    }
  }
  key_parts += fulltext_keys * 2U;
  if (share->base.max_key_length > 1112U) {
    {
    tmp___35 = __dyc_funcallvar_31;
    tmp___35->thr_errno = 138;
    }
    goto __dyc_dummy_label;
  } else {
    if (keys > 64U) {
      {
      tmp___35 = __dyc_funcallvar_32;
      tmp___35->thr_errno = 138;
      }
      goto __dyc_dummy_label;
    } else {
      if (key_parts >= 1024U) {
        {
        tmp___35 = __dyc_funcallvar_33;
        tmp___35->thr_errno = 138;
        }
        goto __dyc_dummy_label;
      }
    }
  }
  if (share->options & 5UL) {
    max_data_file_length = (1UL << share->base.rec_reflength * 8U) - 1UL;
  } else {
    {
    tmp___37 = __dyc_funcallvar_34;
    max_data_file_length = tmp___37 - 1UL;
    }
  }
  max_key_file_length = __dyc_funcallvar_35;
  if (share->base.raid_type) {
    {
    tmp___38 = __dyc_funcallvar_36;
    tmp___38->thr_errno = 138;
    }
    goto __dyc_dummy_label;
  }
  share->base.max_data_file_length = max_data_file_length;
  share->base.max_key_file_length = max_key_file_length;
  if (share->options & 4UL) {
    share->base.max_key_length += 2U;
  }
  tmp___39 = __dyc_funcallvar_37;
  tmp___40 = __dyc_funcallvar_38;
  tmp___41 = __dyc_funcallvar_39;
  tmp___42 = __dyc_funcallvar_40;
  if (! tmp___42) {
    goto __dyc_dummy_label;
  }
  errpos = 4U;
  *share = share_buff;




  tmp___43 = __dyc_funcallvar_41;
  share->unique_name_length = (unsigned int )tmp___43;


  if (4096UL < myisam_block_size) {
    share->blocksize = 4096U;
  } else {
    share->blocksize = (unsigned int )myisam_block_size;
  }
  pos = share->keyparts;
  i = 0U;
  while (1) {
    while_1_continue:  ;
    if (! (i < keys)) {
      goto while_1_break;
    }
    {
    (share->keyinfo + i)->share = share;
    disk_pos = __dyc_funcallvar_42;
    }
    if ((unsigned long )(disk_pos + (int )(share->keyinfo + i)->keysegs * 18) > (unsigned long )end_pos) {
      {
      tmp___44 = __dyc_funcallvar_43;
      tmp___44->thr_errno = 126;
      }
      goto __dyc_dummy_label;
    }
    if ((int )(share->keyinfo + i)->key_alg == 2) {
      have_rtree = 1;
    }
    {
    while (1) {
      while_2_continue:  ;
      if (share->blocksize > (uint )(share->keyinfo + i)->block_length) {
        share->blocksize = (unsigned int )(share->keyinfo + i)->block_length;
      }
      goto while_2_break;
    }
    while_2_break:  ;
    }
    (share->keyinfo + i)->seg = pos;
    j = 0U;
    {
    while (1) {
      while_3_continue:  ;
      if (! (j < (uint )(share->keyinfo + i)->keysegs)) {
        goto while_3_break;
      }
      {
      disk_pos = __dyc_funcallvar_44;
      }
      if ((int )pos->flag & 32) {
        if (! (share->options & 5UL)) {
          {
          tmp___45 = __dyc_funcallvar_45;
          tmp___45->thr_errno = 126;
          }
          goto __dyc_dummy_label;
        }
      }
      if ((int )pos->type == 1) {
        goto _L___3;
      } else {
        if ((int )pos->type == 15) {
          goto _L___3;
        } else {
          if ((int )pos->type == 17) {
            _L___3:  
            if (! pos->language) {
              pos->charset = default_charset_info;
            } else {
              {
              pos->charset = __dyc_funcallvar_46;
              }
              if (! pos->charset) {
                {
                tmp___46 = __dyc_funcallvar_47;
                tmp___46->thr_errno = 142;
                }
                goto __dyc_dummy_label;
              }
            }
          } else {
            if ((int )pos->type == 2) {
              pos->charset = & my_charset_bin;
            }
          }
        }
      }
      j ++;
      pos ++;
    }
    while_3_break:  ;
    }
    if ((int )(share->keyinfo + i)->flag & 1024) {
      sp_segs = (uint )4;
      (share->keyinfo + i)->seg = pos - sp_segs;
      (share->keyinfo + i)->keysegs = (uint16 )((int )(share->keyinfo + i)->keysegs - 1);
    } else {
      if ((int )(share->keyinfo + i)->flag & 128) {
        if (! fulltext_keys) {
          (share->keyinfo + i)->seg = pos - 2;
          (share->keyinfo + i)->keysegs = (unsigned short )((int )(share->keyinfo + i)->keysegs - 2);
        } else {
          (share->keyinfo + i)->seg = pos;
          k = 0U;
          {
          while (1) {
            while_4_continue:  ;
            if (! (k < 2U)) {
              goto while_4_break;
            }
            *pos = (struct st_HA_KEYSEG )ft_keysegs[k];
            (pos + 0)->language = (pos + -1)->language;
            (pos + 0)->charset = (pos + -1)->charset;
            if (! (pos + 0)->charset) {
              {
              tmp___47 = __dyc_funcallvar_48;
              tmp___47->thr_errno = 126;
              }
              goto __dyc_dummy_label;
            }
            pos ++;
            k ++;
          }
          while_4_break:  ;
          }
        }
        if (! share->ft2_keyinfo.seg) {
          {

          share->ft2_keyinfo.keysegs = (unsigned short)1;
          share->ft2_keyinfo.flag = (unsigned short)0;
          share->ft2_keyinfo.maxlength = (unsigned short )(4U + share->base.rec_reflength);
          share->ft2_keyinfo.minlength = share->ft2_keyinfo.maxlength;
          share->ft2_keyinfo.keylength = share->ft2_keyinfo.minlength;
          share->ft2_keyinfo.seg = pos - 1;
          share->ft2_keyinfo.end = pos;

          }
        }
      }
    }
    {

    (share->keyinfo + i)->end = pos;
    pos->type = (unsigned char)0;
    pos->length = (unsigned short )share->base.rec_reflength;
    pos->null_bit = (unsigned char)0;
    pos->flag = (unsigned short)0;
    pos ++;
    i ++;
    }
  }
  while_1_break:  ;
  i = 0U;
  while (1) {
    while_5_continue:  ;
    if (! (i < uniques)) {
      goto while_5_break;
    }
    {
    disk_pos = __dyc_funcallvar_49;
    }
    if ((unsigned long )(disk_pos + (int )(share->uniqueinfo + i)->keysegs * 18) > (unsigned long )end_pos) {
      {
      tmp___48 = __dyc_funcallvar_50;
      tmp___48->thr_errno = 126;
      }
      goto __dyc_dummy_label;
    }
    (share->uniqueinfo + i)->seg = pos;
    j = 0U;
    {
    while (1) {
      while_6_continue:  ;
      if (! (j < (uint )(share->uniqueinfo + i)->keysegs)) {
        goto while_6_break;
      }
      {
      disk_pos = __dyc_funcallvar_51;
      }
      if ((int )pos->type == 1) {
        goto _L___4;
      } else {
        if ((int )pos->type == 15) {
          goto _L___4;
        } else {
          if ((int )pos->type == 17) {
            _L___4:  
            if (! pos->language) {
              pos->charset = default_charset_info;
            } else {
              {
              pos->charset = __dyc_funcallvar_52;
              }
              if (! pos->charset) {
                {
                tmp___49 = __dyc_funcallvar_53;
                tmp___49->thr_errno = 142;
                }
                goto __dyc_dummy_label;
              }
            }
          }
        }
      }
      j ++;
      pos ++;
    }
    while_6_break:  ;
    }
    (share->uniqueinfo + i)->end = pos;
    pos->type = (unsigned char)0;
    pos->null_bit = (unsigned char)0;
    pos->flag = (unsigned short)0;
    pos ++;
    i ++;
  }
  while_5_break:  ;
  if ((unsigned long )(disk_pos + share->base.fields * 7UL) > (unsigned long )end_pos) {
    {
    tmp___50 = __dyc_funcallvar_54;
    tmp___50->thr_errno = 126;
    }
    goto __dyc_dummy_label;
  }
  offset = 0U;
  j = offset;
  i = j;
  while (1) {
    while_7_continue:  ;
    if (! ((ulong )i < share->base.fields)) {
      goto while_7_break;
    }
    {
    disk_pos = __dyc_funcallvar_55;
    (share->rec + i)->pack_type = 0U;
    (share->rec + i)->huff_tree = (MI_DECODE_TREE *)0;
    (share->rec + i)->offset = offset;
    }
    if ((int )(share->rec + i)->type == 4) {
      (share->blobs + j)->pack_length = (unsigned int )((int )(share->rec + i)->length - 8);
      (share->blobs + j)->offset = (unsigned long )offset;
      j ++;
    }
    offset += (uint )(share->rec + i)->length;
    i ++;
  }
  while_7_break:  ;
  (share->rec + i)->type = (short)-1;
  if ((ulong )offset > share->base.reclength) {
    {
    tmp___51 = __dyc_funcallvar_56;
    tmp___51->thr_errno = 126;
    }
    goto __dyc_dummy_label;
  }
  if (! lock_error) {
    {

    lock_error = 1;
    }
  }
  tmp___52 = __dyc_funcallvar_57;
  if (tmp___52) {
    goto __dyc_dummy_label;
  }
  errpos = 5U;
  share->kfile = kfile;
  tmp___53 = __dyc_funcallvar_58;
  share->this_process = (unsigned long )tmp___53;
  share->last_process = share->state.process;
  share->base.key_parts = key_parts;
  share->base.all_key_parts = key_parts + unique_key_parts;
  share->last_version = share->state.version;
  if (! share->last_version) {
    share->last_version = 1UL;
  }
  share->rec_reflength = share->base.rec_reflength;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(lock_error);
  __dyc_printpre_byte(have_rtree);
  __dyc_printpre_byte(j);
  __dyc_printpre_byte(errpos);
  __dyc_printpre_byte(keys);
  __dyc_printpre_byte(key_parts);
  __dyc_printpre_byte(unique_key_parts);
  __dyc_printpre_byte(fulltext_keys);
  __dyc_printpre_byte(uniques);
  __dyc_print_ptr__char(disk_pos);
  __dyc_printpre_byte(max_key_file_length);
  __dyc_printpre_byte(max_data_file_length);
  __dyc_printpre_byte(tmp___39);
  __dyc_printpre_byte(tmp___40);
  __dyc_printpre_byte(tmp___41);
  __dyc_print_ptr__typdef_HA_KEYSEG(pos);
}
}
