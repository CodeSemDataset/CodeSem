#include "../../include/dycfoo.h"
#include "../../include/mi_create.i.hd.c.h"
void __dyc_foo(void) 
{ CHARSET_INFO *default_charset_info ;
  ulong myisam_block_size ;
  uint i ;
  uint j ;
  File dfile ;
  File file ;
  int errpos ;
  myf create_flag ;
  uint fields ;
  uint max_key_length ;
  uint packed ;
  uint pointer ;
  uint info_length ;
  uint key_segs ;
  uint options ;
  uint base_pos ;
  uint max_key_block_length ;
  uint unique_key_parts ;
  uint fulltext_keys ;
  uint offset ;
  ulong reclength ;
  ulong real_reclength ;
  ulong min_pack_length ;
  char linkname[512] ;
  char *linkname_ptr ;
  ulong pack_reclength ;
  ulonglong tot_length ;
  ulonglong max_rows ;
  ulonglong tmp ;
  MYISAM_SHARE share ;
  MI_KEYDEF tmp_keydef ;
  MI_UNIQUEDEF *uniquedef ;
  HA_KEYSEG *keyseg ;
  HA_KEYSEG tmp_keyseg ;
  my_off_t key_del[16] ;
  uint tmp___11 ;
  uint tmp___12 ;
  struct st_my_thread_var *tmp___13 ;
  unsigned int tmp___14 ;
  uint def_temp ;
  uint def_temp___0 ;
  uint def_temp___1 ;
  uint def_temp___2 ;
  uint def_temp___3 ;
  __pid_t tmp___15 ;
  time_t tmp___16 ;
  ulonglong tmp___17 ;
  uint def_temp___4 ;
  uint def_temp___5 ;
  int tmp___18 ;
  time_t tmp___20 ;
  char *path ;
  int tmp___21 ;
  uint tmp___22 ;
  MI_INFO *tmp___23 ;
  char *path___0 ;
  uint tmp___24 ;
  uint tmp___25 ;
  uint sp_segs___0 ;
  int tmp___26 ;
  uint tmp___27 ;
  int tmp___28 ;
  HA_KEYSEG sseg ;
  int tmp___29 ;
  uint tmp___30 ;
  int tmp___31 ;
  HA_KEYSEG *keyseg_end ;
  uint tmp___32 ;
  int tmp___33 ;
  uint tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  uint keys ;
  MI_KEYDEF *keydefs ;
  uint columns ;
  uint uniques ;
  MI_UNIQUEDEF *uniquedefs ;
  MI_CREATE_INFO *ci ;
  uint flags ;
  uint __dyc_funcallvar_12 ;
  struct st_my_thread_var *__dyc_funcallvar_13 ;
  __pid_t __dyc_funcallvar_14 ;
  time_t __dyc_funcallvar_15 ;
  uint __dyc_funcallvar_16 ;
  time_t __dyc_funcallvar_17 ;
  char *__dyc_funcallvar_18 ;
  MI_INFO *__dyc_funcallvar_19 ;
  uint __dyc_funcallvar_20 ;
  File __dyc_funcallvar_21 ;
  char *__dyc_funcallvar_22 ;
  File __dyc_funcallvar_23 ;
  uint __dyc_funcallvar_24 ;
  uint __dyc_funcallvar_25 ;
  uint __dyc_funcallvar_26 ;
  int __dyc_funcallvar_27 ;
  int __dyc_funcallvar_28 ;
  uint __dyc_funcallvar_29 ;
  int __dyc_funcallvar_30 ;
  uint __dyc_funcallvar_31 ;
  int __dyc_funcallvar_32 ;
  uint __dyc_funcallvar_33 ;
  int __dyc_funcallvar_34 ;
  int __dyc_funcallvar_35 ;
  int __dyc_funcallvar_36 ;

  {
  default_charset_info = __dyc_read_ptr__typdef_CHARSET_INFO();
  myisam_block_size = (ulong )__dyc_readpre_byte();
  i = (uint )__dyc_readpre_byte();
  fields = (uint )__dyc_readpre_byte();
  max_key_length = (uint )__dyc_readpre_byte();
  packed = (uint )__dyc_readpre_byte();
  pointer = (uint )__dyc_readpre_byte();
  key_segs = (uint )__dyc_readpre_byte();
  options = (uint )__dyc_readpre_byte();
  max_key_block_length = (uint )__dyc_readpre_byte();
  fulltext_keys = (uint )__dyc_readpre_byte();
  reclength = (ulong )__dyc_readpre_byte();
  real_reclength = (ulong )__dyc_readpre_byte();
  min_pack_length = (ulong )__dyc_readpre_byte();
  pack_reclength = (ulong )__dyc_readpre_byte();
  tot_length = (ulonglong )__dyc_readpre_byte();
  max_rows = (ulonglong )__dyc_readpre_byte();
  share = __dyc_read_comp_121st_mi_isam_share();
  keys = (uint )__dyc_readpre_byte();
  keydefs = __dyc_read_ptr__typdef_MI_KEYDEF();
  columns = (uint )__dyc_readpre_byte();
  uniques = (uint )__dyc_readpre_byte();
  uniquedefs = __dyc_read_ptr__typdef_MI_UNIQUEDEF();
  ci = __dyc_read_ptr__typdef_MI_CREATE_INFO();
  flags = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = (time_t )__dyc_readpre_byte();
  __dyc_funcallvar_16 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_17 = (time_t )__dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_read_ptr__char();
  __dyc_funcallvar_19 = __dyc_read_ptr__typdef_MI_INFO();
  __dyc_funcallvar_20 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_read_ptr__char();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_25 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_26 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_27 = __dyc_readpre_byte();
  __dyc_funcallvar_28 = __dyc_readpre_byte();
  __dyc_funcallvar_29 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_30 = __dyc_readpre_byte();
  __dyc_funcallvar_31 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_readpre_byte();
  __dyc_funcallvar_33 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_34 = __dyc_readpre_byte();
  __dyc_funcallvar_35 = __dyc_readpre_byte();
  __dyc_funcallvar_36 = __dyc_readpre_byte();
  j = 0;
  dfile = 0;
  file = 0;
  errpos = 0;
  create_flag = 0;
  info_length = 0;
  base_pos = 0;
  unique_key_parts = 0;
  offset = 0;
  linkname_ptr = 0;
  tmp = 0;
  memset(& tmp_keydef, 0, sizeof(MI_KEYDEF ));
  uniquedef = 0;
  keyseg = 0;
  memset(& tmp_keyseg, 0, sizeof(HA_KEYSEG ));
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  def_temp = 0;
  def_temp___0 = 0;
  def_temp___1 = 0;
  def_temp___2 = 0;
  def_temp___3 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  def_temp___4 = 0;
  def_temp___5 = 0;
  tmp___18 = 0;
  tmp___20 = 0;
  path = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  path___0 = 0;
  tmp___24 = 0;
  tmp___25 = 0;
  sp_segs___0 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  tmp___28 = 0;
  memset(& sseg, 0, sizeof(HA_KEYSEG ));
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  keyseg_end = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___37 = 0;
  while (1) {
    while_8_continue:  ;
    tmp___11 = i;
    i --;
    if (! tmp___11) {
      goto while_8_break;
    }
    key_del[i] = ~ 0UL;
  }
  while_8_break:  ;
  unique_key_parts = 0U;
  offset = (unsigned int )(reclength - (ulong )(uniques * 4U));
  i = 0U;
  uniquedef = uniquedefs;
  while (1) {
    while_9_continue:  ;
    if (! (i < uniques)) {
      goto while_9_break;
    }
    uniquedef->key = (unsigned char )(keys + i);
    unique_key_parts += (uint )uniquedef->keysegs;
    *(share.state.key_root + (keys + i)) = ~ 0UL;
    tot_length += (max_rows / (unsigned long )(((unsigned int )myisam_block_size - 5U) / ((4U + pointer) * 2U))) * myisam_block_size;
    i ++;
    uniquedef ++;
  }
  while_9_break:  ;
  keys += uniques;
  key_segs += uniques;
  base_pos = ((176U + keys * 8U) + (max_key_block_length / 1024U) * 8U) + key_segs * 4U;
  info_length = base_pos + ((((100U + keys * 12U) + uniques * 4U) + (key_segs + unique_key_parts) * 18U) + columns * 7U);
  if (info_length > 65535U) {
    {
    tmp___12 = __dyc_funcallvar_12;

    tmp___13 = __dyc_funcallvar_13;
    tmp___13->thr_errno = 140;
    }
    goto __dyc_dummy_label;
  }

  if (ci->old_options & 16384U) {
    tmp___14 = 16388U;
  } else {
    tmp___14 = 0U;
  }
  ci->old_options = options | tmp___14;
  def_temp = ci->old_options;
  share.state.header.options[1] = (unsigned char )def_temp;
  share.state.header.options[0] = (unsigned char )(def_temp >> 8);
  def_temp___0 = info_length;
  share.state.header.header_length[1] = (unsigned char )def_temp___0;
  share.state.header.header_length[0] = (unsigned char )(def_temp___0 >> 8);
  def_temp___1 = 176U;
  share.state.header.state_info_length[1] = (unsigned char )def_temp___1;
  share.state.header.state_info_length[0] = (unsigned char )(def_temp___1 >> 8);
  def_temp___2 = 100U;
  share.state.header.base_info_length[1] = (unsigned char )def_temp___2;
  share.state.header.base_info_length[0] = (unsigned char )(def_temp___2 >> 8);
  def_temp___3 = base_pos;
  share.state.header.base_pos[1] = (unsigned char )def_temp___3;
  share.state.header.base_pos[0] = (unsigned char )(def_temp___3 >> 8);
  if (ci->language) {
    share.state.header.language = ci->language;
  } else {
    share.state.header.language = (unsigned char )default_charset_info->number;
  }
  share.state.header.max_block_size = (unsigned char )(max_key_block_length / 1024U);
  share.state.dellink = ~ 0UL;
  tmp___15 = __dyc_funcallvar_14;
  share.state.process = (unsigned long )tmp___15;
  share.state.unique = 0UL;
  share.state.update_count = 0UL;
  tmp___16 = __dyc_funcallvar_15;
  share.state.version = (unsigned long )tmp___16;
  share.state.sortkey = (unsigned int )((unsigned short )(~ 0));
  share.state.auto_increment = ci->auto_increment;
  share.options = (unsigned long )options;
  share.base.rec_reflength = pointer;
  tmp = (tot_length + (ulonglong )((max_key_block_length * keys) * 16U)) / 1024UL;
  if (ci->key_file_length > tmp) {
    tmp___17 = ci->key_file_length;
  } else {
    tmp___17 = tmp;
  }
  share.base.key_reflength = __dyc_funcallvar_16;
  share.state.header.keys = (unsigned char )keys;
  share.base.keys = (unsigned int )share.state.header.keys;
  share.state.header.uniques = (unsigned char )uniques;
  share.state.header.fulltext_keys = (unsigned char )fulltext_keys;
  def_temp___4 = key_segs;
  share.state.header.key_parts[1] = (unsigned char )def_temp___4;
  share.state.header.key_parts[0] = (unsigned char )(def_temp___4 >> 8);
  def_temp___5 = unique_key_parts;
  share.state.header.unique_key_parts[1] = (unsigned char )def_temp___5;
  share.state.header.unique_key_parts[0] = (unsigned char )(def_temp___5 >> 8);
  if (keys < 64U) {
    share.state.key_map = (unsigned long )((1ULL << keys) - 1ULL);
  } else {
    share.state.key_map = (unsigned long )(~ 0ULL);
  }
  share.state.state.key_file_length = (((ulong )info_length + myisam_block_size) - 1UL) & ~ (myisam_block_size - 1UL);
  share.base.keystart = share.state.state.key_file_length;
  share.base.max_key_block_length = max_key_block_length;
  share.base.max_key_length = (unsigned int )((((unsigned long )(max_key_length + 4U) + sizeof(double )) - 1UL) & ~ (sizeof(double ) - 1UL));
  share.base.records = ci->max_rows;
  share.base.reloc = ci->reloc_rows;
  share.base.reclength = real_reclength;
  if (options & 32U) {
    tmp___18 = 1;
  } else {
    tmp___18 = 0;
  }
  share.base.pack_reclength = reclength + (ulong )tmp___18;
  share.base.max_pack_length = pack_reclength;
  share.base.min_pack_length = min_pack_length;
  share.base.pack_bits = packed;
  share.base.fields = (unsigned long )fields;
  share.base.pack_fields = (unsigned long )packed;
  if (options & 16U) {
    share.base.max_data_file_length = ci->data_file_length;
  }
  if (share.base.pack_reclength + 3UL < 20UL) {
    if (! share.base.blobs) {
      if (share.base.pack_reclength > 20UL) {
        share.base.min_block_length = share.base.pack_reclength;
      } else {
        share.base.min_block_length = 20UL;
      }
    } else {
      share.base.min_block_length = 20UL;
    }
  } else {
    share.base.min_block_length = 20UL;
  }
  if (! (flags & 1U)) {
    {
    tmp___20 = __dyc_funcallvar_17;
    share.state.create_time = tmp___20;
    }
  }

  if (ci->index_file_name) {
    if (options & 16U) {
      {
      path = __dyc_funcallvar_18;
      }
      if (path) {
        *path = (char )'\000';
      }
      {

      }
    } else {
      {

      }
    }
    {

    linkname_ptr = linkname;
    create_flag = 0;
    }
  } else {
    if (4U + (flags & 1U)) {
      tmp___21 = 32;
    } else {
      tmp___21 = 0;
    }
    {

    linkname_ptr = (char *)0;
    create_flag = 256;
    }
  }
  tmp___23 = __dyc_funcallvar_19;
  if (tmp___23) {
    {
    tmp___22 = __dyc_funcallvar_20;

    }
    goto __dyc_dummy_label;
  }
  file = __dyc_funcallvar_21;
  if (file < 0) {
    goto __dyc_dummy_label;
  }
  errpos = 1;
  if (! (flags & 1U)) {
    if (ci->data_file_name) {
      if (options & 16U) {
        {
        path___0 = __dyc_funcallvar_22;
        }
        if (path___0) {
          *path___0 = (char )'\000';
        }
        {

        }
      } else {
        {

        }
      }
      {

      linkname_ptr = linkname;
      create_flag = 0;
      }
    } else {
      {

      linkname_ptr = (char *)0;
      create_flag = 256;
      }
    }
    {
    dfile = __dyc_funcallvar_23;
    }
    if (dfile < 0) {
      goto __dyc_dummy_label;
    }
    errpos = 3;
  }
  tmp___24 = __dyc_funcallvar_24;
  if (tmp___24) {
    goto __dyc_dummy_label;
  } else {
    {
    tmp___25 = __dyc_funcallvar_25;
    }
    if (tmp___25) {
      goto __dyc_dummy_label;
    }
  }
  i = 0U;
  while (1) {
    while_10_continue:  ;
    if (! (i < share.base.keys - uniques)) {
      goto while_10_break;
    }
    if ((int )(keydefs + i)->flag & 1024) {
      tmp___26 = 4;
    } else {
      tmp___26 = 0;
    }
    {
    sp_segs___0 = (uint )tmp___26;
    tmp___27 = __dyc_funcallvar_26;
    }
    if (tmp___27) {
      goto __dyc_dummy_label;
    }
    j = 0U;
    {
    while (1) {
      while_11_continue:  ;
      if (! (j < (uint )(keydefs + i)->keysegs - sp_segs___0)) {
        goto while_11_break;
      }
      {
      tmp___28 = __dyc_funcallvar_27;
      }
      if (tmp___28) {
        goto __dyc_dummy_label;
      }
      j ++;
    }
    while_11_break:  ;
    }
    j = 0U;
    {
    while (1) {
      while_12_continue:  ;
      if (! (j < sp_segs___0)) {
        goto while_12_break;
      }
      {
      sseg.type = (unsigned char)6;
      sseg.language = (unsigned char)7;
      sseg.null_bit = (unsigned char)0;
      sseg.bit_start = (unsigned char)0;
      sseg.bit_end = (unsigned char)0;
      sseg.bit_length = (unsigned char)0;
      sseg.bit_pos = (unsigned short)0;
      sseg.length = (unsigned short)8;
      sseg.null_pos = 0U;
      sseg.start = j * 8U;
      sseg.flag = (unsigned short)64;
      tmp___29 = __dyc_funcallvar_28;
      }
      if (tmp___29) {
        goto __dyc_dummy_label;
      }
      j ++;
    }
    while_12_break:  ;
    }
    i ++;
  }
  while_10_break:  ;
  offset = (unsigned int )(reclength - (ulong )(uniques * 4U));


  i = 0U;
  while (1) {
    while_13_continue:  ;
    if (! (i < uniques)) {
      goto while_13_break;
    }
    {
    tmp_keydef.keysegs = (unsigned short)1;
    tmp_keydef.flag = (unsigned short)256;
    tmp_keydef.block_length = (unsigned short )myisam_block_size;
    tmp_keydef.keylength = (unsigned short )(4U + pointer);
    tmp_keydef.maxlength = tmp_keydef.keylength;
    tmp_keydef.minlength = tmp_keydef.maxlength;
    tmp_keyseg.type = (unsigned char)9;
    tmp_keyseg.length = (unsigned short)4;
    tmp_keyseg.start = offset;
    offset += 4U;
    tmp___30 = __dyc_funcallvar_29;
    }
    if (tmp___30) {
      goto __dyc_dummy_label;
    } else {
      {
      tmp___31 = __dyc_funcallvar_30;
      }
      if (tmp___31) {
        goto __dyc_dummy_label;
      }
    }
    i ++;
  }
  while_13_break:  ;
  i = 0U;
  while (1) {
    while_14_continue:  ;
    if (! (i < (uint )share.state.header.uniques)) {
      goto while_14_break;
    }
    {
    keyseg = (uniquedefs + i)->seg;
    tmp___32 = __dyc_funcallvar_31;
    }
    if (tmp___32) {
      goto __dyc_dummy_label;
    }
    keyseg = (uniquedefs + i)->seg;
    keyseg_end = keyseg + (int )(uniquedefs + i)->keysegs;
    {
    while (1) {
      while_15_continue:  ;
      if (! ((unsigned long )keyseg < (unsigned long )keyseg_end)) {
        goto while_15_break;
      }
      if ((int )keyseg->type == 15) {
        goto switch_16_15;
      } else {
        if ((int )keyseg->type == 17) {
          goto switch_16_15;
        } else {
          if ((int )keyseg->type == 16) {
            goto switch_16_15;
          } else {
            if ((int )keyseg->type == 18) {
              goto switch_16_15;
            } else {
              {
              goto switch_16_default;
              if (0) {
                switch_16_15:  
                switch_16_17:  
                switch_16_16:  
                switch_16_18:  
                if (! ((int )keyseg->flag & 32)) {
                  keyseg->flag = (unsigned short )((int )keyseg->flag | 8);
                  if ((int )keyseg->type == 15) {
                    keyseg->bit_start = (unsigned char)1;
                  } else {
                    if ((int )keyseg->type == 16) {
                      keyseg->bit_start = (unsigned char)1;
                    } else {
                      keyseg->bit_start = (unsigned char)2;
                    }
                  }
                }
                goto switch_16_break;
                switch_16_default:  ;
                goto switch_16_break;
              } else {
                switch_16_break:  ;
              }
              }
            }
          }
        }
      }
      {
      tmp___33 = __dyc_funcallvar_32;
      }
      if (tmp___33) {
        goto __dyc_dummy_label;
      }
      keyseg ++;
    }
    while_15_break:  ;
    }
    i ++;
  }
  while_14_break:  ;
  i = 0U;
  while (1) {
    while_17_continue:  ;
    if (! ((ulong )i < share.base.fields)) {
      goto while_17_break;
    }
    {
    tmp___34 = __dyc_funcallvar_33;
    }
    if (tmp___34) {
      goto __dyc_dummy_label;
    }
    i ++;
  }
  while_17_break:  ;
  tmp___35 = __dyc_funcallvar_34;
  if (tmp___35) {
    goto __dyc_dummy_label;
  }
  if (! (flags & 1U)) {
    {
    errpos = 2;
    tmp___36 = __dyc_funcallvar_35;
    }
    if (tmp___36) {
      goto __dyc_dummy_label;
    }
  }
  errpos = 0;

  tmp___37 = __dyc_funcallvar_36;
  if (tmp___37) {
    goto __dyc_dummy_label;
  }

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(errpos);
  __dyc_printpre_byte(create_flag);
  __dyc_printpre_byte(offset);
  __dyc_print_ptr__char(linkname_ptr);
  __dyc_printpre_byte(tot_length);
  __dyc_print_comp_121st_mi_isam_share(share);
  __dyc_print_comp_123st_mi_keydef(tmp_keydef);
  __dyc_print_ptr__typdef_MI_UNIQUEDEF(uniquedef);
  __dyc_print_ptr__typdef_HA_KEYSEG(keyseg);
  __dyc_print_comp_117st_HA_KEYSEG(tmp_keyseg);
  __dyc_printpre_byte(tmp___12);
  __dyc_printpre_byte(tmp___17);
  __dyc_printpre_byte(tmp___21);
  __dyc_printpre_byte(tmp___22);
  __dyc_printpre_byte(sp_segs___0);
  __dyc_print_comp_117st_HA_KEYSEG(sseg);
}
}
