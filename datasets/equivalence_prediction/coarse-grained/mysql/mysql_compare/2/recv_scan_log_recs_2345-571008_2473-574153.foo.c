#include "../../include/dycfoo.h"
#include "../../include/log0recv.i.hd.c.h"
void __dyc_foo(void) 
{ ulint *ut_dbg_null_ptr ;
  recv_sys_t *recv_sys ;
  ulint recv_needed_recovery ;
  ulint recv_scan_print_counter ;
  ulint recv_is_from_backup ;
  unsigned char *log_block ;
  ulint no ;
  dulint scanned_lsn ;
  ulint finished ;
  ulint data_len ;
  ulint more_data ;
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  ulint tmp___3 ;
  ulint tmp___4 ;
  ulint tmp___5 ;
  ulint tmp___6 ;
  ulint tmp___7 ;
  ulint tmp___8 ;
  ulint tmp___9 ;
  ulint tmp___10 ;
  int tmp___11 ;
  ulint tmp___12 ;
  dulint tmp___13 ;
  int tmp___14 ;
  ulint tmp___15 ;
  ulint tmp___16 ;
  ulint tmp___17 ;
  ulint tmp___18 ;
  ulint tmp___19 ;
  int tmp___20 ;
  ulint tmp___21 ;
  ulint tmp___22 ;
  ulint store_to_hash ;
  unsigned char *buf ;
  ulint len ;
  dulint start_lsn ;
  dulint *contiguous_lsn ;
  dulint *group_scanned_lsn ;
  long __dyc_funcallvar_1 ;
  long __dyc_funcallvar_2 ;
  long __dyc_funcallvar_3 ;
  long __dyc_funcallvar_4 ;
  ulint __dyc_funcallvar_5 ;
  ulint __dyc_funcallvar_6 ;
  ulint __dyc_funcallvar_7 ;
  ulint __dyc_funcallvar_8 ;
  ulint __dyc_funcallvar_9 ;
  ulint __dyc_funcallvar_10 ;
  ulint __dyc_funcallvar_11 ;
  ulint __dyc_funcallvar_12 ;
  ulint __dyc_funcallvar_13 ;
  ulint __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  ulint __dyc_funcallvar_16 ;
  dulint __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  ulint __dyc_funcallvar_19 ;
  ulint __dyc_funcallvar_20 ;
  ulint __dyc_funcallvar_21 ;
  ulint __dyc_funcallvar_22 ;
  ulint __dyc_funcallvar_23 ;
  dulint __dyc_funcallvar_24 ;
  dulint __dyc_funcallvar_25 ;
  int __dyc_funcallvar_26 ;
  ulint __dyc_funcallvar_27 ;
  ulint __dyc_funcallvar_28 ;
  ulint __dyc_funcallvar_29 ;
  ulint __dyc_funcallvar_30 ;
  ulint __dyc_funcallvar_31 ;
  ulint __dyc_funcallvar_32 ;

  {
  ut_dbg_null_ptr = __dyc_read_ptr__typdef_ulint();
  recv_sys = __dyc_read_ptr__typdef_recv_sys_t();
  recv_needed_recovery = (ulint )__dyc_readpre_byte();
  recv_scan_print_counter = (ulint )__dyc_readpre_byte();
  recv_is_from_backup = (ulint )__dyc_readpre_byte();
  store_to_hash = (ulint )__dyc_readpre_byte();
  buf = (unsigned char *)__dyc_read_ptr__char();
  len = (ulint )__dyc_readpre_byte();
  start_lsn = __dyc_read_comp_91dulint_struct();
  contiguous_lsn = __dyc_read_ptr__typdef_dulint();
  group_scanned_lsn = __dyc_read_ptr__typdef_dulint();
  __dyc_funcallvar_1 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_10 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_14 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_20 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_21 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_22 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_23 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_25 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_26 = __dyc_readpre_byte();
  __dyc_funcallvar_27 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_28 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_29 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_30 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_31 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_32 = (ulint )__dyc_readpre_byte();
  log_block = 0;
  no = 0;
  memset(& scanned_lsn, 0, sizeof(dulint ));
  finished = 0;
  data_len = 0;
  more_data = 0;
  tmp = 0;
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
  tmp___12 = 0;
  memset(& tmp___13, 0, sizeof(dulint ));
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  while (1) {
    while_77_continue:  ;
    {
    tmp = __dyc_funcallvar_1;
    }
    if (tmp) {
      {

      }
      if (*ut_dbg_null_ptr) {
        ut_dbg_null_ptr = (ulint *)((void *)0);
      }
    }
    {
    while (1) {
      while_78_continue:  ;
      {
      tmp___0 = __dyc_funcallvar_2;
      }
      if (tmp___0) {
        {

        }
      }
      goto while_78_break;
    }
    while_78_break:  ;
    }
    goto while_77_break;
  }
  while_77_break:  ;
  while (1) {
    while_79_continue:  ;
    {
    tmp___1 = __dyc_funcallvar_3;
    }
    if (tmp___1) {
      {

      }
      if (*ut_dbg_null_ptr) {
        ut_dbg_null_ptr = (ulint *)((void *)0);
      }
    }
    {
    while (1) {
      while_80_continue:  ;
      {
      tmp___2 = __dyc_funcallvar_4;
      }
      if (tmp___2) {
        {

        }
      }
      goto while_80_break;
    }
    while_80_break:  ;
    }
    goto while_79_break;
  }
  while_79_break:  ;
  finished = 0UL;
  log_block = buf;
  scanned_lsn = start_lsn;
  more_data = 0UL;
  while (1) {
    while_81_continue:  ;
    if ((unsigned long )log_block < (unsigned long )(buf + len)) {
      if (! (! finished)) {
        goto while_81_break;
      }
    } else {
      goto while_81_break;
    }
    {
    no = __dyc_funcallvar_5;
    tmp___9 = __dyc_funcallvar_6;
    }
    if (no != tmp___9) {
      goto _L;
    } else {
      {
      tmp___10 = __dyc_funcallvar_7;
      }
      if (! tmp___10) {
        _L:  
        {
        tmp___7 = __dyc_funcallvar_8;
        }
        if (no == tmp___7) {
          {
          tmp___8 = __dyc_funcallvar_9;
          }
          if (! tmp___8) {
            {
            tmp___3 = __dyc_funcallvar_10;
            tmp___4 = __dyc_funcallvar_11;
            tmp___5 = __dyc_funcallvar_12;
            tmp___6 = __dyc_funcallvar_13;

            }
          }
        }
        finished = 1UL;
        goto while_81_break;
      }
    }
    {
    tmp___12 = __dyc_funcallvar_14;
    }
    if (tmp___12) {
      {
      tmp___11 = __dyc_funcallvar_15;
      }
      if (tmp___11 > 0) {
        *contiguous_lsn = scanned_lsn;
      }
    }
    {
    data_len = __dyc_funcallvar_16;
    }
    if (store_to_hash) {
      goto _L___0;
    } else {
      if (data_len == 512UL) {
        _L___0:  
        {
        tmp___13 = __dyc_funcallvar_17;
        tmp___14 = __dyc_funcallvar_18;
        }
        if (tmp___14 > 0) {
          if (recv_sys->scanned_checkpoint_no > 0UL) {
            {
            tmp___15 = __dyc_funcallvar_19;
            }
            if (tmp___15 < recv_sys->scanned_checkpoint_no) {
              {
              tmp___16 = __dyc_funcallvar_20;
              }
              if (recv_sys->scanned_checkpoint_no - tmp___16 > 2147483648UL) {
                finished = 1UL;
                goto while_81_break;
              }
            }
          }
        }
      }
    }
    {
    tmp___18 = __dyc_funcallvar_21;
    }
    if (tmp___18) {
      {
      tmp___19 = __dyc_funcallvar_22;
      }
      if (tmp___19 > 0UL) {
        {
        tmp___17 = __dyc_funcallvar_23;
        recv_sys->parse_start_lsn = __dyc_funcallvar_24;
        recv_sys->scanned_lsn = recv_sys->parse_start_lsn;
        recv_sys->recovered_lsn = recv_sys->parse_start_lsn;
        }
      }
    }
    {
    scanned_lsn = __dyc_funcallvar_25;
    tmp___20 = __dyc_funcallvar_26;
    }
    if (tmp___20 > 0) {
      if (recv_sys->len + 2048UL >= 2097152UL) {
        {

        recv_sys->found_corrupt_log = 1UL;
        }
      } else {
        if (! recv_sys->found_corrupt_log) {
          {
          more_data = __dyc_funcallvar_27;
          }
        }
      }
      {
      recv_sys->scanned_lsn = scanned_lsn;
      recv_sys->scanned_checkpoint_no = __dyc_funcallvar_28;
      }
    }
    if (data_len < 512UL) {
      finished = 1UL;
    } else {
      log_block += 512;
    }
  }
  while_81_break:  ;
  *group_scanned_lsn = scanned_lsn;
  if (recv_needed_recovery) {
    goto _L___1;
  } else {
    if (recv_is_from_backup) {
      _L___1:  
      recv_scan_print_counter ++;
      if (finished) {
        {
        tmp___21 = __dyc_funcallvar_29;
        tmp___22 = __dyc_funcallvar_30;

        }
      } else {
        if (recv_scan_print_counter % 80UL == 0UL) {
          {
          tmp___21 = __dyc_funcallvar_31;
          tmp___22 = __dyc_funcallvar_32;

          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ulint(ut_dbg_null_ptr);
  __dyc_printpre_byte(recv_scan_print_counter);
  __dyc_printpre_byte(data_len);
  __dyc_printpre_byte(more_data);
  __dyc_printpre_byte(tmp___3);
  __dyc_printpre_byte(tmp___4);
  __dyc_printpre_byte(tmp___5);
  __dyc_printpre_byte(tmp___6);
  __dyc_print_comp_91dulint_struct(tmp___13);
  __dyc_printpre_byte(tmp___17);
  __dyc_printpre_byte(tmp___21);
  __dyc_printpre_byte(tmp___22);
}
}
