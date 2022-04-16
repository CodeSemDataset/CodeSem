#include "../../include/dycfoo.h"
#include "../../include/row0sel.i.hd.c.h"
void __dyc_foo(void) 
{ ulint *ut_dbg_null_ptr ;
  ulint srv_locks_unsafe_for_binlog ;
  ulint srv_n_rows_read ;
  dict_index_t *index___0 ;
  ulint comp ;
  btr_pcur_t *pcur ;
  trx_t *trx ;
  dict_index_t *clust_index ;
  que_thr_t *thr ;
  rec_t *rec ;
  ulint err ;
  ulint unique_search ;
  ulint unique_search_from_clust_index ;
  ulint moves_up ;
  ulint set_also_gap_locks ;
  ulint next_offs ;
  ulint *offsets ;
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
  ulint mode ;
  row_prebuilt_t *prebuilt ;
  ulint match_mode ;
  ulint direction ;
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

  {
  ut_dbg_null_ptr = __dyc_read_ptr__typdef_ulint();
  srv_locks_unsafe_for_binlog = (ulint )__dyc_readpre_byte();
  srv_n_rows_read = (ulint )__dyc_readpre_byte();
  index___0 = __dyc_read_ptr__typdef_dict_index_t();
  comp = (ulint )__dyc_readpre_byte();
  pcur = __dyc_read_ptr__typdef_btr_pcur_t();
  trx = __dyc_read_ptr__typdef_trx_t();
  unique_search = (ulint )__dyc_readpre_byte();
  set_also_gap_locks = (ulint )__dyc_readpre_byte();
  tmp___6 = (long )__dyc_readpre_byte();
  success = (ulint )__dyc_readpre_byte();
  mode = (ulint )__dyc_readpre_byte();
  prebuilt = __dyc_read_ptr__typdef_row_prebuilt_t();
  match_mode = (ulint )__dyc_readpre_byte();
  direction = (ulint )__dyc_readpre_byte();
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
  clust_index = 0;
  thr = 0;
  rec = 0;
  err = 0;
  unique_search_from_clust_index = 0;
  moves_up = 0;
  next_offs = 0;
  offsets = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
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
      goto __dyc_dummy_label;
    }
  } else {
    {
    next_offs = __dyc_funcallvar_32;
    tmp___24 = __dyc_funcallvar_33;
    }
    if (tmp___24) {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ulint(ut_dbg_null_ptr);
  __dyc_printpre_byte(srv_n_rows_read);
  __dyc_print_ptr__typdef_dict_index_t(clust_index);
  __dyc_print_ptr__typdef_que_thr_t(thr);
  __dyc_print_ptr__typdef_rec_t(rec);
  __dyc_printpre_byte(err);
  __dyc_printpre_byte(unique_search);
  __dyc_printpre_byte(unique_search_from_clust_index);
  __dyc_printpre_byte(moves_up);
  __dyc_printpre_byte(set_also_gap_locks);
  __dyc_printpre_byte(next_offs);
  __dyc_print_ptr__typdef_ulint(offsets);
  __dyc_printpre_byte(tmp___7);
  __dyc_printpre_byte(lock_mode);
  __dyc_printpre_byte(mode);
}
}
