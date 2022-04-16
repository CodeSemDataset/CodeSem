#include "../../include/dycfoo.h"
#include "../../include/row0sel.i.hd.c.h"
void __dyc_foo(void) 
{ ulint *ut_dbg_null_ptr ;
  ulint srv_locks_unsafe_for_binlog ;
  ulint srv_force_recovery ;
  ulint srv_n_rows_read ;
  dict_index_t *index___0 ;
  ulint comp ;
  btr_pcur_t *pcur ;
  trx_t *trx ;
  dict_index_t *clust_index ;
  que_thr_t *thr ;
  rec_t *rec ;
  rec_t *result_rec ;
  rec_t *clust_rec ;
  rec_t *old_vers ;
  ulint err ;
  ulint unique_search ;
  ulint unique_search_from_clust_index ;
  ulint mtr_has_extra_clust_latch ;
  ulint moves_up ;
  ulint set_also_gap_locks ;
  ulint next_offs ;
  ulint *offsets ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  long tmp___5 ;
  long tmp___6 ;
  int tmp___7 ;
  long tmp___8 ;
  ulint tmp___9 ;
  ulint tmp___10 ;
  ulint tmp___11 ;
  ulint tmp___12 ;
  ulint tmp___13 ;
  long tmp___14 ;
  ulint success ;
  long tmp___15 ;
  ulint tmp___16 ;
  ulint tmp___17 ;
  long tmp___18 ;
  long tmp___19 ;
  long tmp___20 ;
  ulint lock_mode ;
  ulint tmp___21 ;
  ulint tmp___22 ;
  long tmp___23 ;
  long tmp___24 ;
  buf_frame_t *tmp___25 ;
  buf_block_t *tmp___26 ;
  ulint tmp___27 ;
  ulint tmp___28 ;
  ulint tmp___29 ;
  ulint tmp___30 ;
  long tmp___31 ;
  ulint tmp___32 ;
  ulint tmp___33 ;
  ulint tmp___34 ;
  ulint tmp___35 ;
  long tmp___36 ;
  int tmp___37 ;
  ulint tmp___38 ;
  ulint lock_type ;
  ulint tmp___39 ;
  long tmp___40 ;
  ulint tmp___41 ;
  ulint tmp___42 ;
  int tmp___43 ;
  long tmp___44 ;
  ulint tmp___45 ;
  ulint tmp___46 ;
  ulint tmp___47 ;
  long tmp___48 ;
  ulint tmp___49 ;
  long tmp___50 ;
  ulint mode ;
  row_prebuilt_t *prebuilt ;
  ulint match_mode ;
  ulint direction ;
  long __dyc_funcallvar_3 ;
  long __dyc_funcallvar_4 ;
  long __dyc_funcallvar_5 ;
  long __dyc_funcallvar_6 ;
  long __dyc_funcallvar_7 ;
  long __dyc_funcallvar_8 ;
  ulint __dyc_funcallvar_9 ;
  ulint __dyc_funcallvar_10 ;
  ulint __dyc_funcallvar_11 ;
  long __dyc_funcallvar_12 ;
  long __dyc_funcallvar_13 ;
  ulint __dyc_funcallvar_14 ;
  ulint __dyc_funcallvar_15 ;
  long __dyc_funcallvar_16 ;
  que_thr_t *__dyc_funcallvar_17 ;
  dict_index_t *__dyc_funcallvar_18 ;
  long __dyc_funcallvar_19 ;
  ulint __dyc_funcallvar_20 ;
  ulint __dyc_funcallvar_21 ;
  long __dyc_funcallvar_22 ;
  long __dyc_funcallvar_23 ;
  ulint __dyc_funcallvar_24 ;
  rec_t *__dyc_funcallvar_25 ;
  ulint __dyc_funcallvar_26 ;
  ulint __dyc_funcallvar_27 ;
  ulint *__dyc_funcallvar_28 ;
  ulint __dyc_funcallvar_29 ;
  ulint __dyc_funcallvar_30 ;
  long __dyc_funcallvar_31 ;
  ulint __dyc_funcallvar_32 ;
  long __dyc_funcallvar_33 ;
  long __dyc_funcallvar_34 ;
  buf_frame_t *__dyc_funcallvar_35 ;
  buf_block_t *__dyc_funcallvar_36 ;
  ulint __dyc_funcallvar_37 ;
  ulint __dyc_funcallvar_38 ;
  ulint __dyc_funcallvar_39 ;
  ulint __dyc_funcallvar_40 ;
  ulint *__dyc_funcallvar_41 ;
  long __dyc_funcallvar_42 ;
  ulint __dyc_funcallvar_43 ;
  ulint __dyc_funcallvar_44 ;
  ulint __dyc_funcallvar_45 ;
  ulint __dyc_funcallvar_46 ;
  int __dyc_funcallvar_47 ;
  ulint __dyc_funcallvar_48 ;
  ulint __dyc_funcallvar_49 ;
  ulint __dyc_funcallvar_50 ;
  ulint __dyc_funcallvar_51 ;
  long __dyc_funcallvar_52 ;
  ulint __dyc_funcallvar_53 ;
  ulint __dyc_funcallvar_54 ;
  int __dyc_funcallvar_55 ;
  ulint __dyc_funcallvar_56 ;
  long __dyc_funcallvar_57 ;
  ulint __dyc_funcallvar_58 ;
  ulint __dyc_funcallvar_59 ;
  ulint __dyc_funcallvar_60 ;
  ulint __dyc_funcallvar_61 ;
  long __dyc_funcallvar_62 ;
  ulint __dyc_funcallvar_63 ;
  ulint __dyc_funcallvar_64 ;
  long __dyc_funcallvar_65 ;
  ulint *__dyc_funcallvar_66 ;

  {
  ut_dbg_null_ptr = __dyc_read_ptr__typdef_ulint();
  srv_locks_unsafe_for_binlog = (ulint )__dyc_readpre_byte();
  srv_force_recovery = (ulint )__dyc_readpre_byte();
  srv_n_rows_read = (ulint )__dyc_readpre_byte();
  index___0 = __dyc_read_ptr__typdef_dict_index_t();
  comp = (ulint )__dyc_readpre_byte();
  pcur = __dyc_read_ptr__typdef_btr_pcur_t();
  trx = __dyc_read_ptr__typdef_trx_t();
  clust_rec = __dyc_read_ptr__typdef_rec_t();
  old_vers = __dyc_read_ptr__typdef_rec_t();
  unique_search = (ulint )__dyc_readpre_byte();
  moves_up = (ulint )__dyc_readpre_byte();
  set_also_gap_locks = (ulint )__dyc_readpre_byte();
  success = (ulint )__dyc_readpre_byte();
  mode = (ulint )__dyc_readpre_byte();
  prebuilt = __dyc_read_ptr__typdef_row_prebuilt_t();
  match_mode = (ulint )__dyc_readpre_byte();
  direction = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_10 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_14 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_15 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_16 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_read_ptr__typdef_que_thr_t();
  __dyc_funcallvar_18 = __dyc_read_ptr__typdef_dict_index_t();
  __dyc_funcallvar_19 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_20 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_21 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_22 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_23 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_24 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_26 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_27 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_28 = __dyc_read_ptr__typdef_ulint();
  __dyc_funcallvar_29 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_30 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_31 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_32 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_33 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_34 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_35 = __dyc_read_ptr__typdef_buf_frame_t();
  __dyc_funcallvar_36 = __dyc_read_ptr__typdef_buf_block_t();
  __dyc_funcallvar_37 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_38 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_39 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_40 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_41 = __dyc_read_ptr__typdef_ulint();
  __dyc_funcallvar_42 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_43 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_44 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_45 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_46 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_47 = __dyc_readpre_byte();
  __dyc_funcallvar_48 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_49 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_50 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_51 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_52 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_53 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_54 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_55 = __dyc_readpre_byte();
  __dyc_funcallvar_56 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_57 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_58 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_59 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_60 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_61 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_62 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_63 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_64 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_65 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_66 = __dyc_read_ptr__typdef_ulint();
  clust_index = 0;
  thr = 0;
  rec = 0;
  result_rec = 0;
  err = 0;
  unique_search_from_clust_index = 0;
  mtr_has_extra_clust_latch = 0;
  next_offs = 0;
  offsets = 0;
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
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  tmp___20 = 0;
  lock_mode = 0;
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
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  lock_type = 0;
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
  if (trx->n_mysql_tables_in_use == 0UL) {
    {
    tmp___1 = __dyc_funcallvar_3;
    }
    if (tmp___1) {

    }
  }
  tmp___2 = __dyc_funcallvar_4;
  if (tmp___2) {
    if (trx->has_search_latch) {
      {

      trx->has_search_latch = 0UL;
      trx->search_latch_timeout = 10000UL;
      }
    }
  }
  if (srv_locks_unsafe_for_binlog) {
    if (prebuilt->select_lock_type != 0UL) {
      {

      }
    }
  }
  tmp___6 = __dyc_funcallvar_5;
  if (tmp___6) {
    trx->op_info = "starting index read";
    prebuilt->n_rows_fetched = 0UL;
    prebuilt->n_fetch_cached = 0UL;
    prebuilt->fetch_cache_first = 0UL;
    if ((unsigned long )prebuilt->sel_graph == (unsigned long )((void *)0)) {
      {

      }
    }
  } else {
    trx->op_info = "fetching rows";
    if (prebuilt->n_rows_fetched == 0UL) {
      prebuilt->fetch_direction = direction;
    }
    {
    tmp___5 = __dyc_funcallvar_6;
    }
    if (tmp___5) {
      {
      tmp___3 = __dyc_funcallvar_7;
      }
      if (tmp___3) {
        {
        while (1) {
          while_65_continue:  ;
          {

          }
          if (*ut_dbg_null_ptr) {
            ut_dbg_null_ptr = (ulint *)((void *)0);
          }
          goto while_65_break;
        }
        while_65_break:  ;
        }
      }
      prebuilt->n_rows_fetched = 0UL;
      prebuilt->n_fetch_cached = 0UL;
      prebuilt->fetch_cache_first = 0UL;
    } else {
      {
      tmp___4 = __dyc_funcallvar_8;
      }
      if (tmp___4) {
        {

        (prebuilt->n_rows_fetched) ++;
        srv_n_rows_read ++;
        err = 10UL;
        }
        goto __dyc_dummy_label;
      }
    }
    if (prebuilt->fetch_cache_first > 0UL) {
      if (prebuilt->fetch_cache_first < 8UL) {
        err = 1500UL;
        goto __dyc_dummy_label;
      }
    }
    (prebuilt->n_rows_fetched) ++;
    if (prebuilt->n_rows_fetched > 1000000000UL) {
      prebuilt->n_rows_fetched = 500000000UL;
    }
    mode = pcur->search_mode;
  }
  if (match_mode == 1UL) {
    if (index___0->type & 2UL) {
      {
      tmp___9 = __dyc_funcallvar_9;
      tmp___10 = __dyc_funcallvar_10;
      }
      if (tmp___9 == tmp___10) {
        if (index___0->type & 1UL) {
          goto _L;
        } else {
          {
          tmp___11 = __dyc_funcallvar_11;
          }
          if (! tmp___11) {
            _L:  
            unique_search = 1UL;
            if (direction != 0UL) {
              if (! prebuilt->used_in_HANDLER) {
                tmp___7 = 1;
              } else {
                tmp___7 = 0;
              }
            } else {
              tmp___7 = 0;
            }
            {
            tmp___8 = __dyc_funcallvar_12;
            }
            if (tmp___8) {
              err = 1500UL;
              goto __dyc_dummy_label;
            }
          }
        }
      }
    }
  }

  tmp___14 = __dyc_funcallvar_13;
  if (tmp___14) {
    if (unique_search) {
      if (index___0->type & 1UL) {
        if (! prebuilt->templ_contains_blob) {
          if (! prebuilt->used_in_HANDLER) {
            if (prebuilt->mysql_row_len < 2048UL) {
              mode = 2UL;
              unique_search_from_clust_index = 1UL;
              if (trx->mysql_n_tables_locked == 0UL) {
                if (prebuilt->select_lock_type == 0UL) {
                  if (trx->isolation_level > 1UL) {
                    if (trx->read_view) {
                      if (! trx->has_search_latch) {
                        {

                        trx->has_search_latch = 1UL;
                        }
                      }
                      {
                      tmp___12 = __dyc_funcallvar_14;
                      }
                      if ((int )tmp___12 == 0) {
                        goto switch_66_0;
                      } else {
                        if ((int )tmp___12 == 1) {
                          goto switch_66_1;
                        } else {
                          if (0) {
                            switch_66_0:  
                            {
                            tmp___13 = __dyc_funcallvar_15;
                            }
                            if (! tmp___13) {
                              err = 34UL;
                              goto shortcut_fails_too_big_rec;
                            }
                            {

                            srv_n_rows_read ++;
                            }
                            if (trx->search_latch_timeout > 0UL) {
                              if (trx->has_search_latch) {
                                {
                                (trx->search_latch_timeout) --;

                                trx->has_search_latch = 0UL;
                                }
                              }
                            }
                            err = 10UL;
                            goto __dyc_dummy_label;
                            switch_66_1:  
                            {

                            }
                            if (trx->search_latch_timeout > 0UL) {
                              if (trx->has_search_latch) {
                                {
                                (trx->search_latch_timeout) --;

                                trx->has_search_latch = 0UL;
                                }
                              }
                            }
                            err = 1500UL;
                            goto __dyc_dummy_label;
                          } else {
                            switch_66_break:  ;
                          }
                        }
                      }
                      shortcut_fails_too_big_rec: 
                      {


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
  if (trx->has_search_latch) {
    {

    trx->has_search_latch = 0UL;
    }
  }

  if (trx->isolation_level <= 2UL) {
    if (prebuilt->select_lock_type != 0UL) {
      if (trx->mysql_query_str) {
        {

        }
        if (success) {
          set_also_gap_locks = 0UL;
        }
      }
    }
  }
  tmp___15 = __dyc_funcallvar_16;
  if (tmp___15) {
    if (mode == 2UL) {
      moves_up = 1UL;
    } else {
      if (mode == 1UL) {
        moves_up = 1UL;
      }
    }
  } else {
    if (direction == 1UL) {
      moves_up = 1UL;
    }
  }
  thr = __dyc_funcallvar_17;

  clust_index = __dyc_funcallvar_18;
  tmp___18 = __dyc_funcallvar_19;
  if (tmp___18) {
    {
    tmp___16 = __dyc_funcallvar_20;
    }
    if (! tmp___16) {
      goto __dyc_dummy_label;
    }
  } else {
    {
    tmp___17 = __dyc_funcallvar_21;
    }
    if (tmp___17 > 0UL) {
      {

      pcur->trx_if_known = trx;
      }
    } else {
      if (mode == 1UL) {
        {

        }
      } else {
        if (mode == 3UL) {
          {

          }
        }
      }
    }
  }
  if (! prebuilt->sql_stat_start) {
    if ((unsigned long )trx->read_view == (unsigned long )((void *)0)) {
      if (prebuilt->select_lock_type == 0UL) {
        {



        }
        {
        while (1) {
          while_67_continue:  ;
          {
          tmp___19 = __dyc_funcallvar_22;
          }
          if (tmp___19) {
            {

            }
            if (*ut_dbg_null_ptr) {
              ut_dbg_null_ptr = (ulint *)((void *)0);
            }
          }
          {
          while (1) {
            while_68_continue:  ;
            {
            tmp___20 = __dyc_funcallvar_23;
            }
            if (tmp___20) {
              {

              }
            }
            goto while_68_break;
          }
          while_68_break:  ;
          }
          goto while_67_break;
        }
        while_67_break:  ;
        }
      }
    }
  } else {
    if (prebuilt->select_lock_type == 0UL) {
      {

      prebuilt->sql_stat_start = 0UL;
      }
    } else {
      if (prebuilt->select_lock_type == 4UL) {
        lock_mode = 2UL;
      } else {
        lock_mode = 3UL;
      }
      {
      err = __dyc_funcallvar_24;
      }
      if (err != 10UL) {
        goto __dyc_dummy_label;
      }
      prebuilt->sql_stat_start = 0UL;
    }
  }
  rec = __dyc_funcallvar_25;
  tmp___21 = __dyc_funcallvar_26;
  if (tmp___21) {
    goto __dyc_dummy_label;
  }
  tmp___22 = __dyc_funcallvar_27;
  if (tmp___22) {
    if (set_also_gap_locks) {
      if (! srv_locks_unsafe_for_binlog) {
        if (prebuilt->select_lock_type != 0UL) {
          {
          offsets = __dyc_funcallvar_28;
          err = __dyc_funcallvar_29;
          }
          if (err != 10UL) {
            goto __dyc_dummy_label;
          }
        }
      }
    }
    goto __dyc_dummy_label;
  }
  if (comp) {
    {
    next_offs = __dyc_funcallvar_30;
    tmp___23 = __dyc_funcallvar_31;
    }
    if (tmp___23) {
      goto wrong_offs;
    }
  } else {
    {
    next_offs = __dyc_funcallvar_32;
    tmp___24 = __dyc_funcallvar_33;
    }
    if (tmp___24) {
      goto wrong_offs;
    }
  }
  tmp___31 = __dyc_funcallvar_34;
  if (tmp___31) {
    wrong_offs: 
    if (srv_force_recovery == 0UL) {
      goto _L___0;
    } else {
      if (moves_up == 0UL) {
        _L___0:  
        {

        tmp___25 = __dyc_funcallvar_35;

        tmp___26 = __dyc_funcallvar_36;

        tmp___27 = __dyc_funcallvar_37;
        tmp___28 = __dyc_funcallvar_38;



        err = 39UL;
        }
        goto __dyc_dummy_label;
      } else {
        {
        tmp___29 = __dyc_funcallvar_39;
        tmp___30 = __dyc_funcallvar_40;




        }
        goto __dyc_dummy_label;
      }
    }
  }
  offsets = __dyc_funcallvar_41;
  tmp___36 = __dyc_funcallvar_42;
  if (tmp___36) {
    {
    tmp___34 = __dyc_funcallvar_43;
    }
    if (tmp___34) {
      {
      tmp___35 = __dyc_funcallvar_44;
      }
      if (! tmp___35) {
        _L___1:  
        {
        tmp___32 = __dyc_funcallvar_45;
        tmp___33 = __dyc_funcallvar_46;



        }
        goto __dyc_dummy_label;
      }
    } else {
      goto _L___1;
    }
  }
  if (match_mode == 1UL) {
    {
    tmp___37 = __dyc_funcallvar_47;
    }
    if (0 != tmp___37) {
      if (set_also_gap_locks) {
        if (! srv_locks_unsafe_for_binlog) {
          if (prebuilt->select_lock_type != 0UL) {
            {
            err = __dyc_funcallvar_48;
            }
            if (err != 10UL) {
              goto __dyc_dummy_label;
            }
          }
        }
      }
      {

      err = 1500UL;
      }
      goto __dyc_dummy_label;
    }
  } else {
    if (match_mode == 2UL) {
      {
      tmp___38 = __dyc_funcallvar_49;
      }
      if (! tmp___38) {
        if (set_also_gap_locks) {
          if (! srv_locks_unsafe_for_binlog) {
            if (prebuilt->select_lock_type != 0UL) {
              {
              err = __dyc_funcallvar_50;
              }
              if (err != 10UL) {
                goto __dyc_dummy_label;
              }
            }
          }
        }
        {

        err = 1500UL;
        }
        goto __dyc_dummy_label;
      }
    }
  }
  if (prebuilt->select_lock_type != 0UL) {
    if (! set_also_gap_locks) {
      goto no_gap_lock;
    } else {
      if (srv_locks_unsafe_for_binlog) {
        goto no_gap_lock;
      } else {
        if (unique_search) {
          {
          tmp___39 = __dyc_funcallvar_51;
          tmp___40 = __dyc_funcallvar_52;
          }
          if (tmp___40) {
            lock_type = 0UL;
          } else {
            goto no_gap_lock;
          }
        } else {
          lock_type = 0UL;
        }
      }
    }
    if ((unsigned long )index___0 == (unsigned long )clust_index) {
      if (mode == 2UL) {
        if (direction == 0UL) {
          {
          tmp___41 = __dyc_funcallvar_53;
          tmp___42 = __dyc_funcallvar_54;
          }
          if (tmp___41 == tmp___42) {
            {
            tmp___43 = __dyc_funcallvar_55;
            }
            if (0 == tmp___43) {
              no_gap_lock: 
              lock_type = 1024UL;
            }
          }
        }
      }
    }
    {
    err = __dyc_funcallvar_56;
    }
    if (err != 10UL) {
      goto __dyc_dummy_label;
    }
  } else {
    if (! (trx->isolation_level == 1UL)) {
      if ((unsigned long )index___0 == (unsigned long )clust_index) {
        {
        tmp___44 = __dyc_funcallvar_57;
        }
        if (tmp___44) {
          {
          tmp___45 = __dyc_funcallvar_58;
          }
          if (! tmp___45) {
            {
            err = __dyc_funcallvar_59;
            }
            if (err != 10UL) {
              goto __dyc_dummy_label;
            }
            if ((unsigned long )old_vers == (unsigned long )((void *)0)) {
              goto __dyc_dummy_label;
            }
            rec = old_vers;
          }
        }
      } else {
        {
        tmp___46 = __dyc_funcallvar_60;
        }
        if (! tmp___46) {
          goto requires_clust_rec;
        }
      }
    }
  }
  tmp___47 = __dyc_funcallvar_61;
  tmp___48 = __dyc_funcallvar_62;
  if (tmp___48) {
    if (srv_locks_unsafe_for_binlog) {
      if (prebuilt->select_lock_type != 0UL) {
        {


        }
      }
    }
    goto __dyc_dummy_label;
  }
  if ((unsigned long )index___0 != (unsigned long )clust_index) {
    if (prebuilt->need_to_access_clustered) {
      requires_clust_rec: 
      {
      mtr_has_extra_clust_latch = 1UL;
      err = __dyc_funcallvar_63;
      }
      if (err != 10UL) {
        goto __dyc_dummy_label;
      }
      if ((unsigned long )clust_rec == (unsigned long )((void *)0)) {
        goto __dyc_dummy_label;
      }
      {
      tmp___49 = __dyc_funcallvar_64;
      tmp___50 = __dyc_funcallvar_65;
      }
      if (tmp___50) {
        if (srv_locks_unsafe_for_binlog) {
          if (prebuilt->select_lock_type != 0UL) {
            {


            }
          }
        }
        goto __dyc_dummy_label;
      }
      if (prebuilt->need_to_access_clustered) {
        result_rec = clust_rec;
      } else {
        {
        offsets = __dyc_funcallvar_66;
        result_rec = rec;
        }
      }
    } else {
      result_rec = rec;
    }
  } else {
    result_rec = rec;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ulint(ut_dbg_null_ptr);
  __dyc_printpre_byte(srv_n_rows_read);
  __dyc_print_ptr__typdef_dict_index_t(clust_index);
  __dyc_print_ptr__typdef_que_thr_t(thr);
  __dyc_print_ptr__typdef_rec_t(rec);
  __dyc_print_ptr__typdef_rec_t(result_rec);
  __dyc_printpre_byte(err);
  __dyc_printpre_byte(unique_search);
  __dyc_printpre_byte(unique_search_from_clust_index);
  __dyc_printpre_byte(mtr_has_extra_clust_latch);
  __dyc_printpre_byte(moves_up);
  __dyc_printpre_byte(set_also_gap_locks);
  __dyc_printpre_byte(next_offs);
  __dyc_print_ptr__typdef_ulint(offsets);
  __dyc_printpre_byte(tmp___7);
  __dyc_printpre_byte(lock_mode);
  __dyc_print_ptr__typdef_buf_frame_t(tmp___25);
  __dyc_print_ptr__typdef_buf_block_t(tmp___26);
  __dyc_printpre_byte(tmp___27);
  __dyc_printpre_byte(tmp___28);
  __dyc_printpre_byte(tmp___29);
  __dyc_printpre_byte(tmp___30);
  __dyc_printpre_byte(tmp___32);
  __dyc_printpre_byte(tmp___33);
  __dyc_printpre_byte(lock_type);
  __dyc_printpre_byte(tmp___39);
  __dyc_printpre_byte(tmp___47);
  __dyc_printpre_byte(tmp___49);
  __dyc_printpre_byte(mode);
}
}
