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
  int create_mode ;
  myf create_flag ;
  uint fields ;
  uint length ;
  uint max_key_length ;
  uint packed ;
  uint pointer ;
  uint real_length_diff ;
  uint key_length ;
  uint info_length ;
  uint key_segs ;
  uint options ;
  uint min_key_length_skip ;
  uint base_pos ;
  uint long_varchar_count ;
  uint varchar_length ;
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
  MI_KEYDEF *keydef ;
  MI_KEYDEF tmp_keydef ;
  MI_UNIQUEDEF *uniquedef ;
  HA_KEYSEG *keyseg ;
  HA_KEYSEG tmp_keyseg ;
  ulong *rec_per_key_part ;
  my_off_t key_root[255] ;
  my_off_t key_del[16] ;
  int tmp___5 ;
  int tmp___6 ;
  uint sp_segs ;
  struct st_my_thread_var *tmp___7 ;
  struct st_my_thread_var *tmp___8 ;
  struct st_my_thread_var *tmp___9 ;
  struct st_my_thread_var *tmp___10 ;
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
  uint keys ;
  MI_KEYDEF *keydefs ;
  uint columns ;
  uint uniques ;
  MI_UNIQUEDEF *uniquedefs ;
  MI_CREATE_INFO *ci ;
  uint flags ;
  uint __dyc_funcallvar_5 ;
  uint __dyc_funcallvar_6 ;
  struct st_my_thread_var *__dyc_funcallvar_7 ;
  struct st_my_thread_var *__dyc_funcallvar_8 ;
  struct st_my_thread_var *__dyc_funcallvar_9 ;
  struct st_my_thread_var *__dyc_funcallvar_10 ;
  struct st_my_thread_var *__dyc_funcallvar_11 ;
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

  {
  default_charset_info = __dyc_read_ptr__typdef_CHARSET_INFO();
  myisam_block_size = (ulong )__dyc_readpre_byte();
  create_mode = __dyc_readpre_byte();
  fields = (uint )__dyc_readpre_byte();
  packed = (uint )__dyc_readpre_byte();
  options = (uint )__dyc_readpre_byte();
  long_varchar_count = (uint )__dyc_readpre_byte();
  varchar_length = (uint )__dyc_readpre_byte();
  reclength = (ulong )__dyc_readpre_byte();
  min_pack_length = (ulong )__dyc_readpre_byte();
  pack_reclength = (ulong )__dyc_readpre_byte();
  rec_per_key_part = __dyc_read_ptr__typdef_ulong();
  keys = (uint )__dyc_readpre_byte();
  keydefs = __dyc_read_ptr__typdef_MI_KEYDEF();
  columns = (uint )__dyc_readpre_byte();
  uniques = (uint )__dyc_readpre_byte();
  uniquedefs = __dyc_read_ptr__typdef_MI_UNIQUEDEF();
  ci = __dyc_read_ptr__typdef_MI_CREATE_INFO();
  flags = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_8 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_9 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_10 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_11 = __dyc_read_ptr__comp_91st_my_thread_var();
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
  i = 0;
  j = 0;
  dfile = 0;
  file = 0;
  errpos = 0;
  create_flag = 0;
  length = 0;
  max_key_length = 0;
  pointer = 0;
  real_length_diff = 0;
  key_length = 0;
  info_length = 0;
  key_segs = 0;
  min_key_length_skip = 0;
  base_pos = 0;
  max_key_block_length = 0;
  unique_key_parts = 0;
  fulltext_keys = 0;
  offset = 0;
  real_reclength = 0;
  linkname_ptr = 0;
  tot_length = 0;
  max_rows = 0;
  tmp = 0;
  memset(& share, 0, sizeof(MYISAM_SHARE ));
  keydef = 0;
  memset(& tmp_keydef, 0, sizeof(MI_KEYDEF ));
  uniquedef = 0;
  keyseg = 0;
  memset(& tmp_keyseg, 0, sizeof(HA_KEYSEG ));
  tmp___5 = 0;
  tmp___6 = 0;
  sp_segs = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
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
  if (! (options & 1U)) {
    options &= 4294967263U;
  }
  if (! (options & 5U)) {
    min_pack_length += (ulong )varchar_length;
  }
  if (flags & 4U) {
    options |= 16U;
    create_mode |= 131200;
  }
  if (flags & 8U) {
    options |= 32U;
    min_pack_length ++;
  } else {
    if (options & 32U) {
      options |= 32U;
      min_pack_length ++;
    }
  }
  if (flags & 64U) {
    options |= 64U;
  }
  packed = (packed + 7U) / 8U;
  if (pack_reclength != 2147483647UL) {
    if ((options & 34U) == 34U) {
      tmp___5 = 1;
    } else {
      tmp___5 = 0;
    }
    pack_reclength += (reclength + (ulong )packed) + (ulong )tmp___5;
  }
  min_pack_length += (ulong )packed;
  if (! ci->data_file_length) {
    if (ci->max_rows) {
      if (pack_reclength == 2147483647UL) {
        ci->data_file_length = ~ 0UL;
      } else {
        if (0xffffffffUL / ci->max_rows < pack_reclength) {
          ci->data_file_length = ~ 0UL;
        } else {
          ci->data_file_length = ci->max_rows * pack_reclength;
        }
      }
    } else {
      goto _L___0;
    }
  } else {
    _L___0:  
    if (! ci->max_rows) {
      if (options & 1U) {
        tmp___6 = 3;
      } else {
        tmp___6 = 0;
      }
      ci->max_rows = ci->data_file_length / (min_pack_length + (ulong )tmp___6);
    }
  }
  if (options & 5U) {
    {
    pointer = __dyc_funcallvar_5;
    }
  } else {
    {
    pointer = __dyc_funcallvar_6;
    }
  }
  max_rows = ci->max_rows;
  if (! max_rows) {
    max_rows = ((1UL << pointer * 8U) - 1UL) / min_pack_length;
  }
  real_reclength = reclength;
  if (! (options & 5U)) {
    if (reclength <= (ulong )pointer) {
      reclength = (unsigned long )(pointer + 1U);
    }
  } else {
    reclength += (ulong )long_varchar_count;
  }
  max_key_length = 0U;
  tot_length = 0UL;
  key_segs = 0U;
  fulltext_keys = 0U;
  max_key_block_length = 0U;
  share.state.rec_per_key_part = rec_per_key_part;
  share.state.key_root = key_root;
  share.state.key_del = key_del;
  if (uniques) {
    max_key_block_length = (unsigned int )myisam_block_size;
    max_key_length = 4U + pointer;
  }
  i = 0U;
  keydef = keydefs;
  while (1) {
    while_2_continue:  ;
    if (! (i < keys)) {
      goto while_2_break;
    }
    *(share.state.key_root + i) = ~ 0UL;
    real_length_diff = 0U;
    length = real_length_diff;
    min_key_length_skip = length;
    key_length = pointer;
    if ((int )keydef->flag & 1024) {
      sp_segs = (uint )4;
      keydef->flag = (unsigned short)1024;
      if (flags & 1U) {
        keydef->keysegs = (unsigned short )((uint )keydef->keysegs - (sp_segs - 1U));
      }
      j = 0U;
      keyseg = keydef->seg;
      {
      while (1) {
        while_3_continue:  ;
        if (! ((int )j < (int )keydef->keysegs)) {
          goto while_3_break;
        }
        if ((int )keyseg->type != 2) {
          if ((int )keyseg->type != 16) {
            if ((int )keyseg->type != 18) {
              {
              tmp___7 = __dyc_funcallvar_7;
              tmp___7->thr_errno = 140;
              }
              goto __dyc_dummy_label;
            }
          }
        }
        j ++;
        keyseg ++;
      }
      while_3_break:  ;
      }
      keydef->keysegs = (unsigned short )((uint )keydef->keysegs + sp_segs);
      key_length += 8U * sp_segs;
      length ++;
      min_key_length_skip += 32U;
    } else {
      if ((int )keydef->flag & 128) {
        keydef->flag = (unsigned short)138;
        options |= 2U;
        j = 0U;
        keyseg = keydef->seg;
        {
        while (1) {
          while_4_continue:  ;
          if (! ((int )j < (int )keydef->keysegs)) {
            goto while_4_break;
          }
          if ((int )keyseg->type != 1) {
            if ((int )keyseg->type != 15) {
              if ((int )keyseg->type != 17) {
                {
                tmp___8 = __dyc_funcallvar_8;
                tmp___8->thr_errno = 140;
                }
                goto __dyc_dummy_label;
              }
            }
          }
          if (! ((int )keyseg->flag & 32)) {
            if ((int )keyseg->type == 15) {
              goto _L___1;
            } else {
              if ((int )keyseg->type == 17) {
                _L___1:  
                keyseg->flag = (unsigned short )((int )keyseg->flag | 8);
                if ((int )keyseg->type == 15) {
                  keyseg->bit_start = (unsigned char)1;
                } else {
                  keyseg->bit_start = (unsigned char)2;
                }
              }
            }
          }
          j ++;
          keyseg ++;
        }
        while_4_break:  ;
        }
        fulltext_keys ++;
        key_length += 258U;
        length ++;
        min_key_length_skip += 254U;
        real_length_diff = 223U;
      } else {
        if ((int )keydef->flag & 2) {
          if ((int )(keydef->seg + 0)->flag & 1) {
            if ((int )(keydef->seg + 0)->type == 7) {
              (keydef->seg + 0)->flag = (unsigned short )((int )(keydef->seg + 0)->flag & -2);
            }
          }
          if (! ((int )(keydef->seg + 0)->flag & 41)) {
            keydef->flag = (unsigned short )((int )keydef->flag & -3);
            keydef->flag = (unsigned short )((int )keydef->flag | 40);
          } else {
            (keydef->seg + 0)->flag = (unsigned short )((int )(keydef->seg + 0)->flag | 2);
            keydef->flag = (unsigned short )((int )keydef->flag | 8);
            options |= 2U;
          }
        }
        if ((int )keydef->flag & 32) {
          options |= 2U;
        }
        if ((int )keydef->flag & 16) {
          if (ci->with_auto_increment) {
            share.base.auto_key = i + 1U;
          }
        }
        j = 0U;
        keyseg = keydef->seg;
        {
        while (1) {
          while_5_continue:  ;
          if (! (j < (uint )keydef->keysegs)) {
            goto while_5_break;
          }
          if ((int )keyseg->type == 3) {
            goto switch_6_3;
          } else {
            if ((int )keyseg->type == 4) {
              goto switch_6_3;
            } else {
              if ((int )keyseg->type == 5) {
                goto switch_6_3;
              } else {
                if ((int )keyseg->type == 6) {
                  goto switch_6_3;
                } else {
                  if ((int )keyseg->type == 8) {
                    goto switch_6_3;
                  } else {
                    if ((int )keyseg->type == 9) {
                      goto switch_6_3;
                    } else {
                      if ((int )keyseg->type == 10) {
                        goto switch_6_3;
                      } else {
                        if ((int )keyseg->type == 11) {
                          goto switch_6_3;
                        } else {
                          if ((int )keyseg->type == 12) {
                            goto switch_6_3;
                          } else {
                            if ((int )keyseg->type == 13) {
                              goto switch_6_3;
                            } else {
                              if ((int )keyseg->type == 14) {
                                goto switch_6_3;
                              } else {
                                if ((int )keyseg->type == 15) {
                                  goto switch_6_15;
                                } else {
                                  if ((int )keyseg->type == 17) {
                                    goto switch_6_15;
                                  } else {
                                    if ((int )keyseg->type == 16) {
                                      goto switch_6_15;
                                    } else {
                                      if ((int )keyseg->type == 18) {
                                        goto switch_6_15;
                                      } else {
                                        {
                                        goto switch_6_default;
                                        if (0) {
                                          switch_6_3:  
                                          switch_6_4:  
                                          switch_6_5:  
                                          switch_6_6:  
                                          switch_6_8:  
                                          switch_6_9:  
                                          switch_6_10:  
                                          switch_6_11:  
                                          switch_6_12:  
                                          switch_6_13:  
                                          switch_6_14:  
                                          keyseg->flag = (unsigned short )((int )keyseg->flag | 64);
                                          goto switch_6_break;
                                          switch_6_15:  
                                          switch_6_17:  
                                          switch_6_16:  
                                          switch_6_18:  
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
                                          goto switch_6_break;
                                          switch_6_default:  ;
                                          goto switch_6_break;
                                        } else {
                                          switch_6_break:  ;
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
          if ((int )keyseg->flag & 1) {
            keydef->flag = (unsigned short )((int )keydef->flag | 12);
            options |= 2U;
            length ++;
            min_key_length_skip += (uint )keyseg->length;
            if ((int )keyseg->length >= 255) {
              min_key_length_skip += 2U;
              length += 2U;
            }
          }
          if ((int )keyseg->flag & 40) {
            keydef->flag = (unsigned short )((int )keydef->flag | 8);
            length ++;
            options |= 2U;
            min_key_length_skip += (uint )keyseg->length;
            if ((int )keyseg->length >= 255) {
              min_key_length_skip += 2U;
              length += 2U;
            }
          }
          key_length += (uint )keyseg->length;
          if (keyseg->null_bit) {
            key_length ++;
            options |= 2U;
            keyseg->flag = (unsigned short )((int )keyseg->flag | 16);
            keydef->flag = (unsigned short )((int )keydef->flag | 72);
          }
          j ++;
          keyseg ++;
        }
        while_5_break:  ;
        }
      }
    }
    key_segs += (uint )keydef->keysegs;
    if ((int )keydef->keysegs > 16) {
      {
      tmp___9 = __dyc_funcallvar_9;
      tmp___9->thr_errno = 140;
      }
      goto __dyc_dummy_label;
    }
    if (((int )keydef->flag & 65) == 1) {
      if (key_segs) {
        *(share.state.rec_per_key_part + (key_segs - 1U)) = 1UL;
      }
    }
    length += key_length;
    keydef->block_length = (unsigned short )(((ulong )(((((length - real_length_diff) + pointer) + 5U) * 4U + 5U) + 2U) / myisam_block_size + 1UL) * myisam_block_size);
    if ((int )keydef->block_length > 16384) {
      {
      tmp___10 = __dyc_funcallvar_10;
      tmp___10->thr_errno = 140;
      }
      goto __dyc_dummy_label;
    } else {
      if (length >= 1112U) {
        {
        tmp___10 = __dyc_funcallvar_11;
        tmp___10->thr_errno = 140;
        }
        goto __dyc_dummy_label;
      }
    }
    {
    while (1) {
      while_7_continue:  ;
      if (max_key_block_length < (uint )keydef->block_length) {
        max_key_block_length = (unsigned int )keydef->block_length;
      }
      goto while_7_break;
    }
    while_7_break:  ;
    }
    keydef->keylength = (unsigned short )key_length;
    keydef->minlength = (unsigned short )(length - min_key_length_skip);
    keydef->maxlength = (unsigned short )length;
    if (length > max_key_length) {
      max_key_length = length;
    }
    tot_length += (max_rows / (unsigned long )(((unsigned int )keydef->block_length - 5U) / (length * 2U))) * (unsigned long )keydef->block_length;
    i ++;
    keydef ++;
  }
  while_2_break:  ;
  i = max_key_block_length / 1024U;
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
      goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(errpos);
  __dyc_printpre_byte(create_mode);
  __dyc_printpre_byte(create_flag);
  __dyc_printpre_byte(length);
  __dyc_printpre_byte(max_key_length);
  __dyc_printpre_byte(pointer);
  __dyc_printpre_byte(real_length_diff);
  __dyc_printpre_byte(key_length);
  __dyc_printpre_byte(key_segs);
  __dyc_printpre_byte(options);
  __dyc_printpre_byte(min_key_length_skip);
  __dyc_printpre_byte(max_key_block_length);
  __dyc_printpre_byte(fulltext_keys);
  __dyc_printpre_byte(offset);
  __dyc_printpre_byte(reclength);
  __dyc_printpre_byte(real_reclength);
  __dyc_printpre_byte(min_pack_length);
  __dyc_print_ptr__char(linkname_ptr);
  __dyc_printpre_byte(pack_reclength);
  __dyc_printpre_byte(tot_length);
  __dyc_printpre_byte(max_rows);
  __dyc_print_comp_121st_mi_isam_share(share);
  __dyc_print_ptr__typdef_MI_KEYDEF(keydef);
  __dyc_print_comp_123st_mi_keydef(tmp_keydef);
  __dyc_print_ptr__typdef_MI_UNIQUEDEF(uniquedef);
  __dyc_print_ptr__typdef_HA_KEYSEG(keyseg);
  __dyc_print_comp_117st_HA_KEYSEG(tmp_keyseg);
  __dyc_printpre_byte(sp_segs);
  __dyc_printpre_byte(tmp___12);
  __dyc_printpre_byte(tmp___17);
  __dyc_printpre_byte(tmp___21);
  __dyc_printpre_byte(tmp___22);
  __dyc_printpre_byte(sp_segs___0);
  __dyc_print_comp_117st_HA_KEYSEG(sseg);
}
}
