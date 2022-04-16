#include "../../include/dycfoo.h"
#include "../../include/log0recv.i.hd.c.h"
void __dyc_foo(void) 
{ ulint *ut_dbg_null_ptr ;
  log_t *log_sys ;
  ulint srv_force_recovery ;
  dulint srv_start_lsn ;
  recv_sys_t *recv_sys ;
  ulint recv_needed_recovery ;
  log_group_t *group ;
  log_group_t *max_cp_group ;
  log_group_t *up_to_date_group ;
  dulint checkpoint_lsn ;
  dulint checkpoint_no ;
  dulint old_scanned_lsn ;
  dulint group_scanned_lsn ;
  dulint contiguous_lsn ;
  dulint archived_lsn ;
  ulint capacity ;
  unsigned char *buf ;
  int tmp___0 ;
  ulint tmp___1 ;
  ulint tmp___2 ;
  ulint tmp___3 ;
  ulint tmp___4 ;
  ulint tmp___5 ;
  ulint tmp___6 ;
  int tmp___7 ;
  ulint tmp___8 ;
  ulint tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  dulint tmp___12 ;
  int tmp___13 ;
  dulint tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  ulint tmp___18 ;
  ulint tmp___19 ;
  ulint tmp___20 ;
  ulint tmp___21 ;
  int tmp___22 ;
  ulint tmp___23 ;
  ulint tmp___24 ;
  ulint tmp___25 ;
  ulint tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  ulint tmp___30 ;
  ulint tmp___31 ;
  ulint tmp___32 ;
  ulint tmp___33 ;
  int tmp___34 ;
  ulint type ;
  dulint __dyc_funcallvar_3 ;
  dulint __dyc_funcallvar_4 ;
  dulint __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  ulint __dyc_funcallvar_10 ;
  ulint __dyc_funcallvar_11 ;
  ulint __dyc_funcallvar_12 ;
  ulint __dyc_funcallvar_13 ;
  ulint __dyc_funcallvar_14 ;
  ulint __dyc_funcallvar_15 ;
  ulint __dyc_funcallvar_16 ;
  ulint __dyc_funcallvar_17 ;
  dulint __dyc_funcallvar_18 ;
  ulint __dyc_funcallvar_19 ;
  dulint __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  dulint __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  int __dyc_funcallvar_24 ;
  int __dyc_funcallvar_25 ;
  int __dyc_funcallvar_26 ;
  ulint __dyc_funcallvar_27 ;
  ulint __dyc_funcallvar_28 ;
  ulint __dyc_funcallvar_29 ;
  ulint __dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  ulint __dyc_funcallvar_32 ;
  ulint __dyc_funcallvar_33 ;
  ulint __dyc_funcallvar_34 ;
  ulint __dyc_funcallvar_35 ;
  int __dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  dulint __dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;
  ulint __dyc_funcallvar_40 ;
  ulint __dyc_funcallvar_41 ;
  ulint __dyc_funcallvar_42 ;
  ulint __dyc_funcallvar_43 ;

  {
  ut_dbg_null_ptr = __dyc_read_ptr__typdef_ulint();
  log_sys = __dyc_read_ptr__typdef_log_t();
  srv_force_recovery = (ulint )__dyc_readpre_byte();
  recv_sys = __dyc_read_ptr__typdef_recv_sys_t();
  recv_needed_recovery = (ulint )__dyc_readpre_byte();
  max_cp_group = __dyc_read_ptr__typdef_log_group_t();
  group_scanned_lsn = __dyc_read_comp_91dulint_struct();
  type = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_4 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_5 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_14 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_15 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_16 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_17 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_19 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_readpre_byte();
  __dyc_funcallvar_26 = __dyc_readpre_byte();
  __dyc_funcallvar_27 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_28 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_29 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_30 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_33 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_34 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_35 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_36 = __dyc_readpre_byte();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_41 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_42 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_43 = (ulint )__dyc_readpre_byte();
  memset(& srv_start_lsn, 0, sizeof(dulint ));
  group = 0;
  up_to_date_group = 0;
  memset(& checkpoint_lsn, 0, sizeof(dulint ));
  memset(& checkpoint_no, 0, sizeof(dulint ));
  memset(& old_scanned_lsn, 0, sizeof(dulint ));
  memset(& contiguous_lsn, 0, sizeof(dulint ));
  memset(& archived_lsn, 0, sizeof(dulint ));
  capacity = 0;
  buf = 0;
  tmp___0 = 0;
  tmp___1 = 0;
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
  memset(& tmp___12, 0, sizeof(dulint ));
  tmp___13 = 0;
  memset(& tmp___14, 0, sizeof(dulint ));
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
  buf = log_sys->checkpoint_buf;
  checkpoint_lsn = __dyc_funcallvar_3;
  checkpoint_no = __dyc_funcallvar_4;
  archived_lsn = __dyc_funcallvar_5;

  tmp___0 = __dyc_funcallvar_6;
  if (0 == tmp___0) {
    {




    }
  }
  if (type == 78656949UL) {
    {
    recv_sys->parse_start_lsn = checkpoint_lsn;
    recv_sys->scanned_lsn = checkpoint_lsn;
    recv_sys->scanned_checkpoint_no = 0UL;
    recv_sys->recovered_lsn = checkpoint_lsn;
    srv_start_lsn = checkpoint_lsn;
    tmp___10 = __dyc_funcallvar_7;
    }
    if (tmp___10 != 0) {
      goto _L;
    } else {
      {
      tmp___11 = __dyc_funcallvar_8;
      }
      if (tmp___11 != 0) {
        _L:  
        {
        tmp___7 = __dyc_funcallvar_9;
        }
        if (tmp___7 < 0) {
          {
          tmp___1 = __dyc_funcallvar_10;
          tmp___2 = __dyc_funcallvar_11;
          tmp___3 = __dyc_funcallvar_12;
          tmp___4 = __dyc_funcallvar_13;
          tmp___5 = __dyc_funcallvar_14;
          tmp___6 = __dyc_funcallvar_15;

          }
        }
        {
        recv_needed_recovery = 1UL;




        }
        if (srv_force_recovery < 6UL) {
          {


          }
        }
        {

        tmp___8 = __dyc_funcallvar_16;
        tmp___9 = __dyc_funcallvar_17;

        }
      } else {
        {

        }
      }
    }
  }
  contiguous_lsn = __dyc_funcallvar_18;
  if (type == 11122331UL) {
    {
    group = recv_sys->archive_group;
    capacity = __dyc_funcallvar_19;
    tmp___12 = __dyc_funcallvar_20;
    tmp___13 = __dyc_funcallvar_21;
    }
    if (tmp___13 > 0) {
      {

      }
      goto __dyc_dummy_label;
    } else {
      {
      tmp___14 = __dyc_funcallvar_22;
      tmp___15 = __dyc_funcallvar_23;
      }
      if (tmp___15 > 0) {
        {

        }
        goto __dyc_dummy_label;
      }
    }
    {

    tmp___16 = __dyc_funcallvar_24;
    }
    if (tmp___16 < 0) {
      {

      }
      goto __dyc_dummy_label;
    }
    group->scanned_lsn = group_scanned_lsn;
    up_to_date_group = group;
  } else {
    up_to_date_group = max_cp_group;
  }
  group = log_sys->log_groups.start;
  if (type == 11122331UL) {
    if ((unsigned long )group == (unsigned long )recv_sys->archive_group) {
      group = group->log_groups.next;
    }
  }
  while (1) {
    while_83_continue:  ;
    if (! group) {
      goto while_83_break;
    }
    {
    old_scanned_lsn = recv_sys->scanned_lsn;

    group->scanned_lsn = group_scanned_lsn;
    tmp___17 = __dyc_funcallvar_25;
    }
    if (tmp___17 < 0) {
      up_to_date_group = group;
    }
    if (type == 11122331UL) {
      if ((unsigned long )group == (unsigned long )recv_sys->archive_group) {
        group = group->log_groups.next;
      }
    }
    group = group->log_groups.next;
  }
  while_83_break:  ;
  tmp___22 = __dyc_funcallvar_26;
  if (tmp___22 < 0) {
    {

    tmp___18 = __dyc_funcallvar_27;
    tmp___19 = __dyc_funcallvar_28;
    tmp___20 = __dyc_funcallvar_29;
    tmp___21 = __dyc_funcallvar_30;

    }
  }
  tmp___27 = __dyc_funcallvar_31;
  if (tmp___27 < 0) {
    {

    tmp___23 = __dyc_funcallvar_32;
    tmp___24 = __dyc_funcallvar_33;
    tmp___25 = __dyc_funcallvar_34;
    tmp___26 = __dyc_funcallvar_35;

    }
  }
  tmp___29 = __dyc_funcallvar_36;
  if (tmp___29 < 0) {
    {

    tmp___28 = __dyc_funcallvar_37;
    }
    if (tmp___28 >= 0) {
      goto __dyc_dummy_label;
    }
    {
    while (1) {
      while_84_continue:  ;
      {

      }
      if (*ut_dbg_null_ptr) {
        ut_dbg_null_ptr = (ulint *)((void *)0);
      }
      goto while_84_break;
    }
    while_84_break:  ;
    }
    goto __dyc_dummy_label;
  }
  log_sys->next_checkpoint_lsn = checkpoint_lsn;
  log_sys->next_checkpoint_no = __dyc_funcallvar_38;

  if (! recv_needed_recovery) {
    {
    tmp___34 = __dyc_funcallvar_39;
    }
    if (tmp___34 != 0) {
      {
      tmp___30 = __dyc_funcallvar_40;
      tmp___31 = __dyc_funcallvar_41;
      tmp___32 = __dyc_funcallvar_42;
      tmp___33 = __dyc_funcallvar_43;

      }
    }
  } else {
    srv_start_lsn = recv_sys->recovered_lsn;
  }
  log_sys->lsn = recv_sys->recovered_lsn;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ulint(ut_dbg_null_ptr);
  __dyc_print_comp_91dulint_struct(srv_start_lsn);
  __dyc_printpre_byte(recv_needed_recovery);
  __dyc_print_ptr__typdef_log_group_t(group);
  __dyc_print_ptr__typdef_log_group_t(up_to_date_group);
  __dyc_print_comp_91dulint_struct(checkpoint_lsn);
  __dyc_print_comp_91dulint_struct(checkpoint_no);
  __dyc_print_comp_91dulint_struct(old_scanned_lsn);
  __dyc_print_comp_91dulint_struct(contiguous_lsn);
  __dyc_print_comp_91dulint_struct(archived_lsn);
  __dyc_printpre_byte(capacity);
  __dyc_print_ptr__char(buf);
  __dyc_printpre_byte(tmp___1);
  __dyc_printpre_byte(tmp___2);
  __dyc_printpre_byte(tmp___3);
  __dyc_printpre_byte(tmp___4);
  __dyc_printpre_byte(tmp___5);
  __dyc_printpre_byte(tmp___6);
  __dyc_printpre_byte(tmp___8);
  __dyc_printpre_byte(tmp___9);
  __dyc_print_comp_91dulint_struct(tmp___12);
  __dyc_print_comp_91dulint_struct(tmp___14);
  __dyc_printpre_byte(tmp___18);
  __dyc_printpre_byte(tmp___19);
  __dyc_printpre_byte(tmp___20);
  __dyc_printpre_byte(tmp___21);
  __dyc_printpre_byte(tmp___23);
  __dyc_printpre_byte(tmp___24);
  __dyc_printpre_byte(tmp___25);
  __dyc_printpre_byte(tmp___26);
  __dyc_printpre_byte(tmp___30);
  __dyc_printpre_byte(tmp___31);
  __dyc_printpre_byte(tmp___32);
  __dyc_printpre_byte(tmp___33);
}
}
