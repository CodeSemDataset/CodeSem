#include "../../include/dycfoo.h"
#include "../../include/mi_update.i.hd.c.h"
void __dyc_foo(void) 
{ my_bool my_disable_locking ;
  File myisam_log_file ;
  int flag ;
  int key_changed ;
  int save_errno ;
  my_off_t pos ;
  uint i ;
  uchar *new_key ;
  bool auto_key_changed ;
  ulonglong changed ;
  MYISAM_SHARE *share ;
  ha_checksum old_checksum ;
  struct st_my_thread_var *tmp ;
  struct st_my_thread_var *tmp___0 ;
  struct st_my_thread_var *tmp___1 ;
  struct st_my_thread_var *tmp___2 ;
  int tmp___3 ;
  struct st_my_thread_var *tmp___4 ;
  int tmp___5 ;
  MI_UNIQUEDEF *def ;
  struct st_my_thread_var *tmp___6 ;
  int tmp___7 ;
  ha_checksum tmp___8 ;
  my_bool tmp___9 ;
  struct st_my_thread_var *tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  uint new_length ;
  uint tmp___14 ;
  uint old_length ;
  uint tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  ha_rows org_split ;
  my_off_t org_delete_link ;
  int tmp___20 ;
  int tmp___21 ;
  ulonglong tmp___22 ;
  struct st_my_thread_var *tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  uint new_length___0 ;
  uint tmp___27 ;
  uint old_length___0 ;
  uint tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  uint tmp___32 ;
  struct st_my_thread_var *tmp___33 ;
  struct st_my_thread_var *tmp___34 ;
  struct st_my_thread_var *tmp___35 ;
  struct st_my_thread_var *tmp___36 ;
  struct st_my_thread_var *tmp___37 ;
  struct st_myisam_info *info ;
  struct st_my_thread_var *__dyc_funcallvar_1 ;
  struct st_my_thread_var *__dyc_funcallvar_2 ;
  struct st_my_thread_var *__dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  struct st_my_thread_var *__dyc_funcallvar_5 ;
  ha_checksum __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  struct st_my_thread_var *__dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  ha_checksum __dyc_funcallvar_10 ;
  my_bool __dyc_funcallvar_11 ;
  struct st_my_thread_var *__dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  struct st_my_thread_var *__dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  uint __dyc_funcallvar_17 ;
  uint __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  ha_checksum __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  int __dyc_funcallvar_24 ;
  ulonglong __dyc_funcallvar_25 ;
  ulonglong __dyc_funcallvar_26 ;
  struct st_my_thread_var *__dyc_funcallvar_27 ;
  struct st_my_thread_var *__dyc_funcallvar_28 ;
  struct st_my_thread_var *__dyc_funcallvar_29 ;
  struct st_my_thread_var *__dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  int __dyc_funcallvar_32 ;
  uint __dyc_funcallvar_33 ;
  uint __dyc_funcallvar_34 ;
  int __dyc_funcallvar_35 ;
  int __dyc_funcallvar_36 ;
  struct st_my_thread_var *__dyc_funcallvar_37 ;
  struct st_my_thread_var *__dyc_funcallvar_38 ;

  {
  my_disable_locking = (my_bool )__dyc_readpre_byte();
  myisam_log_file = __dyc_readpre_byte();
  auto_key_changed = (bool )__dyc_readpre_byte();
  share = __dyc_read_ptr__typdef_MYISAM_SHARE();
  old_checksum = (ha_checksum )__dyc_readpre_byte();
  info = __dyc_read_ptr__comp_120st_myisam_info();
  __dyc_funcallvar_1 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_2 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_3 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_6 = (ha_checksum )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = (ha_checksum )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (my_bool )__dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_18 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = (ha_checksum )__dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_readpre_byte();
  __dyc_funcallvar_25 = (ulonglong )__dyc_readpre_byte();
  __dyc_funcallvar_26 = (ulonglong )__dyc_readpre_byte();
  __dyc_funcallvar_27 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_28 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_29 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_30 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_readpre_byte();
  __dyc_funcallvar_33 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_34 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_35 = __dyc_readpre_byte();
  __dyc_funcallvar_36 = __dyc_readpre_byte();
  __dyc_funcallvar_37 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_38 = __dyc_read_ptr__comp_91st_my_thread_var();
  flag = 0;
  key_changed = 0;
  save_errno = 0;
  pos = 0;
  i = 0;
  new_key = 0;
  changed = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  def = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  new_length = 0;
  tmp___14 = 0;
  old_length = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  org_split = 0;
  org_delete_link = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  new_length___0 = 0;
  tmp___27 = 0;
  old_length___0 = 0;
  tmp___28 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___37 = 0;
  if (! (info->update & 2U)) {
    {
    tmp = __dyc_funcallvar_1;
    tmp->thr_errno = 120;
    }
    goto __dyc_dummy_label;
  }
  if (share->options & 32768UL) {
    {
    tmp___0 = __dyc_funcallvar_2;
    tmp___0->thr_errno = 13;
    }
    goto __dyc_dummy_label;
  }
  if ((info->state)->key_file_length >= share->base.margin_key_file_length) {
    {
    tmp___1 = __dyc_funcallvar_3;
    tmp___1->thr_errno = 136;
    }
    goto __dyc_dummy_label;
  }
  pos = info->lastpos;
  tmp___3 = __dyc_funcallvar_4;
  if (tmp___3) {
    {
    tmp___2 = __dyc_funcallvar_5;
    }
    goto __dyc_dummy_label;
  }
  if (share->calc_checksum) {
    {
    info->checksum = __dyc_funcallvar_6;
    old_checksum = info->checksum;
    }
  }
  tmp___5 = __dyc_funcallvar_7;
  if (tmp___5) {
    {
    tmp___4 = __dyc_funcallvar_8;
    save_errno = tmp___4->thr_errno;
    }
    goto err_end;
  }
  key_changed = 0;
  i = 0U;
  while (1) {
    while_0_continue:  ;
    if (! (i < (uint )share->state.header.uniques)) {
      goto while_0_break;
    }
    {
    def = share->uniqueinfo + i;
    tmp___7 = __dyc_funcallvar_9;
    }
    if (tmp___7) {
      {
      tmp___8 = __dyc_funcallvar_10;
      tmp___9 = __dyc_funcallvar_11;
      }
      if (tmp___9) {
        {
        tmp___6 = __dyc_funcallvar_12;
        save_errno = tmp___6->thr_errno;
        }
        goto err_end;
      }
    }
    i ++;
  }
  while_0_break:  ;
  tmp___11 = __dyc_funcallvar_13;
  if (tmp___11) {
    {
    tmp___10 = __dyc_funcallvar_14;
    save_errno = tmp___10->thr_errno;
    }
    goto err_end;
  }
  new_key = info->lastkey2;
  changed = 0UL;
  i = 0U;
  while (1) {
    while_1_continue:  ;
    if (! (i < share->base.keys)) {
      goto while_1_break;
    }
    if ((unsigned long long )share->state.key_map & (1ULL << i)) {
      tmp___19 = 1;
    } else {
      tmp___19 = 0;
    }
    if (tmp___19) {
      if ((int )(share->keyinfo + i)->flag & 128) {
        {
        tmp___13 = __dyc_funcallvar_15;
        }
        if (tmp___13) {
          if ((int )i == info->lastinx) {
            key_changed |= 4;
          }
          {
          changed |= 1UL << i;
          tmp___12 = __dyc_funcallvar_16;
          }
          if (tmp___12) {
            goto __dyc_dummy_label;
          }
        }
      } else {
        {
        tmp___14 = __dyc_funcallvar_17;
        new_length = tmp___14;
        tmp___15 = __dyc_funcallvar_18;
        old_length = tmp___15;
        info->update &= 4294963199U;
        }
        if (new_length != old_length) {
          goto _L;
        } else {
          {
          tmp___18 = __dyc_funcallvar_19;
          }
          if (tmp___18) {
            _L:  
            if ((int )i == info->lastinx) {
              key_changed |= 4;
            }
            {
            changed |= 1UL << i;
            ((share->keyinfo + i)->version) ++;
            tmp___16 = __dyc_funcallvar_20;
            }
            if (tmp___16) {
              goto __dyc_dummy_label;
            }
            {
            tmp___17 = __dyc_funcallvar_21;
            }
            if (tmp___17) {
              goto __dyc_dummy_label;
            }
            if (share->base.auto_key == i + 1U) {
              auto_key_changed = (char)1;
            }
          }
        }
      }
    }
    i ++;
  }
  while_1_break:  ;
  if (changed) {
    key_changed |= 1;
  } else {
    if (! my_disable_locking) {
      key_changed |= 1;
    }
  }
  if (share->calc_checksum) {
    {
    info->checksum = __dyc_funcallvar_22;
    key_changed |= 1;
    }
  }

  org_split = share->state.split;
  org_delete_link = share->state.dellink;
  tmp___20 = __dyc_funcallvar_23;
  if (tmp___20) {
    goto __dyc_dummy_label;
  }
  if (! key_changed) {
    {
    tmp___21 = __dyc_funcallvar_24;
    }
    if (tmp___21) {
      key_changed |= 1;
    } else {
      if (org_split != share->state.split) {
        key_changed |= 1;
      } else {
        if (org_delete_link != share->state.dellink) {
          key_changed |= 1;
        }
      }
    }
  }
  if (auto_key_changed) {
    {
    while (1) {
      while_2_continue:  ;
      {
      tmp___22 = __dyc_funcallvar_25;
      }
      if ((info->s)->state.auto_increment < tmp___22) {
        {
        (info->s)->state.auto_increment = __dyc_funcallvar_26;
        }
      }
      goto while_2_break;
    }
    while_2_break:  ;
    }
  }
  if (share->calc_checksum) {
    (info->state)->checksum += info->checksum - old_checksum;
  }
  info->update = (unsigned int )(1027 | key_changed);
  if (myisam_log_file >= 0) {
    {

    }
  }

  if ((unsigned long )info->invalidator != (unsigned long )((void (*)(char const   *filename ))0)) {
    {

    info->invalidator = (void (*)(char const   *filename ))0;
    }
  }
  goto __dyc_dummy_label;
  tmp___23 = __dyc_funcallvar_27;
  save_errno = tmp___23->thr_errno;
  if (changed) {
    key_changed |= 1;
  }
  tmp___33 = __dyc_funcallvar_28;
  if (tmp___33->thr_errno == 121) {
    goto _L___2;
  } else {
    {
    tmp___34 = __dyc_funcallvar_29;
    }
    if (tmp___34->thr_errno == 128) {
      goto _L___2;
    } else {
      {
      tmp___35 = __dyc_funcallvar_30;
      }
      if (tmp___35->thr_errno == 135) {
        _L___2:  
        info->errkey = (int )i;
        flag = 0;
        {
        while (1) {
          while_3_continue:  ;
          if ((1UL << i) & changed) {
            if ((int )(share->keyinfo + i)->flag & 128) {
              tmp___24 = flag;
              flag ++;
              if (tmp___24) {
                {
                tmp___25 = __dyc_funcallvar_31;
                }
                if (tmp___25) {
                  goto while_3_break;
                } else {
                  goto _L___0;
                }
              } else {
                _L___0:  
                {
                tmp___26 = __dyc_funcallvar_32;
                }
                if (tmp___26) {
                  goto while_3_break;
                }
              }
            } else {
              {
              tmp___27 = __dyc_funcallvar_33;
              new_length___0 = tmp___27;
              tmp___28 = __dyc_funcallvar_34;
              old_length___0 = tmp___28;
              tmp___29 = flag;
              flag ++;
              }
              if (tmp___29) {
                {
                tmp___30 = __dyc_funcallvar_35;
                }
                if (tmp___30) {
                  goto while_3_break;
                } else {
                  goto _L___1;
                }
              } else {
                _L___1:  
                {
                tmp___31 = __dyc_funcallvar_36;
                }
                if (tmp___31) {
                  goto while_3_break;
                }
              }
            }
          }
          tmp___32 = i;
          i --;
          if (! (tmp___32 != 0U)) {
            goto while_3_break;
          }
        }
        while_3_break:  ;
        }
      } else {
        {

        }
        {
        while (1) {
          while_4_continue:  ;
          (info->s)->state.changed = (unsigned char )((int )(info->s)->state.changed | 2);
          goto while_4_break;
        }
        while_4_break:  ;
        }
      }
    }
  }
  info->update = (unsigned int )(1027 | key_changed);
  err_end: 
  if (myisam_log_file >= 0) {
    {
    tmp___36 = __dyc_funcallvar_37;

    }
  }

  if (save_errno == 120) {
    {

    save_errno = 126;
    }
  }
  tmp___37 = __dyc_funcallvar_38;
  tmp___37->thr_errno = save_errno;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(flag);
  __dyc_printpre_byte(key_changed);
  __dyc_printpre_byte(pos);
  __dyc_printpre_byte(i);
  __dyc_print_ptr__typdef_uchar(new_key);
  __dyc_printpre_byte(auto_key_changed);
  __dyc_printpre_byte(old_checksum);
  __dyc_print_ptr__comp_91st_my_thread_var(tmp___2);
  __dyc_print_ptr__typdef_MI_UNIQUEDEF(def);
  __dyc_printpre_byte(tmp___8);
  __dyc_printpre_byte(org_split);
  __dyc_printpre_byte(org_delete_link);
  __dyc_printpre_byte(new_length___0);
  __dyc_printpre_byte(old_length___0);
  __dyc_print_ptr__comp_91st_my_thread_var(tmp___36);
}
}
