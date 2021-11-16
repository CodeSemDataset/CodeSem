#include "../../include/dycfoo.h"
#include "../../include/row0sel.i.hd.c.h"
void __dyc_foo(void) 
{ ulint srv_locks_unsafe_for_binlog ;
  rw_lock_t *btr_search_latch_temp ;
  dict_index_t *index___0 ;
  plan_t *plan ;
  ulint moved ;
  rec_t *rec ;
  rec_t *old_vers ;
  rec_t *clust_rec ;
  ulint search_latch_locked ;
  ulint consistent_read ;
  ulint cons_read_requires_clust_rec ;
  ulint cost_counter ;
  ulint cursor_just_opened ;
  ulint must_go_to_next ;
  ulint leaf_contains_updates ;
  ulint mtr_has_extra_clust_latch ;
  ulint found_flag ;
  ulint err ;
  ulint *offsets ;
  rec_t *next_rec ;
  rec_t *tmp ;
  ulint lock_type ;
  ulint tmp___0 ;
  ulint tmp___1 ;
  ulint lock_type___0 ;
  ulint tmp___2 ;
  ulint tmp___3 ;
  ulint tmp___4 ;
  ulint tmp___5 ;
  ulint tmp___6 ;
  ulint tmp___7 ;
  ulint tmp___8 ;
  ulint tmp___9 ;
  ulint tmp___10 ;
  ulint tmp___11 ;
  ulint tmp___12 ;
  ulint tmp___13 ;
  plan_t *tmp___14 ;
  sel_node_t *node ;
  que_thr_t *thr ;
  ulint __dyc_funcallvar_2 ;
  ulint __dyc_funcallvar_3 ;
  rec_t *__dyc_funcallvar_4 ;
  ulint __dyc_funcallvar_5 ;
  rec_t *__dyc_funcallvar_6 ;
  ulint *__dyc_funcallvar_7 ;
  ulint __dyc_funcallvar_8 ;
  ulint __dyc_funcallvar_9 ;
  ulint *__dyc_funcallvar_10 ;
  ulint __dyc_funcallvar_11 ;
  ulint __dyc_funcallvar_12 ;
  ulint __dyc_funcallvar_13 ;
  ulint __dyc_funcallvar_14 ;
  ulint __dyc_funcallvar_15 ;
  ulint *__dyc_funcallvar_16 ;
  ulint __dyc_funcallvar_17 ;
  ulint __dyc_funcallvar_18 ;
  ulint *__dyc_funcallvar_19 ;
  ulint __dyc_funcallvar_20 ;
  ulint __dyc_funcallvar_21 ;
  ulint __dyc_funcallvar_22 ;
  ulint __dyc_funcallvar_23 ;
  ulint __dyc_funcallvar_24 ;
  ulint __dyc_funcallvar_25 ;
  ulint __dyc_funcallvar_26 ;
  ulint __dyc_funcallvar_27 ;
  ulint __dyc_funcallvar_28 ;
  ulint __dyc_funcallvar_29 ;
  que_node_t *__dyc_funcallvar_30 ;
  plan_t *__dyc_funcallvar_31 ;

  {
  srv_locks_unsafe_for_binlog = (ulint )__dyc_readpre_byte();
  btr_search_latch_temp = __dyc_read_ptr__typdef_rw_lock_t();
  index___0 = __dyc_read_ptr__typdef_dict_index_t();
  plan = __dyc_read_ptr__typdef_plan_t();
  old_vers = __dyc_read_ptr__typdef_rec_t();
  clust_rec = __dyc_read_ptr__typdef_rec_t();
  search_latch_locked = (ulint )__dyc_readpre_byte();
  consistent_read = (ulint )__dyc_readpre_byte();
  cost_counter = (ulint )__dyc_readpre_byte();
  leaf_contains_updates = (ulint )__dyc_readpre_byte();
  mtr_has_extra_clust_latch = (ulint )__dyc_readpre_byte();
  node = __dyc_read_ptr__typdef_sel_node_t();
  thr = __dyc_read_ptr__typdef_que_thr_t();
  __dyc_funcallvar_2 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_5 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_7 = __dyc_read_ptr__typdef_ulint();
  __dyc_funcallvar_8 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_read_ptr__typdef_ulint();
  __dyc_funcallvar_11 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_14 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_15 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_read_ptr__typdef_ulint();
  __dyc_funcallvar_17 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_18 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_read_ptr__typdef_ulint();
  __dyc_funcallvar_20 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_21 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_22 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_23 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_24 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_25 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_26 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_27 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_28 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_29 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_30 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_31 = __dyc_read_ptr__typdef_plan_t();
  moved = 0;
  rec = 0;
  cons_read_requires_clust_rec = 0;
  cursor_just_opened = 0;
  must_go_to_next = 0;
  found_flag = 0;
  err = 0;
  offsets = 0;
  next_rec = 0;
  tmp = 0;
  lock_type = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  lock_type___0 = 0;
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
  if (plan->cursor_at_end) {
    goto __dyc_dummy_label;
  }

  if (consistent_read) {
    if (plan->unique_search) {
      if (! plan->pcur_is_open) {
        if (! plan->must_get_clust) {
          if (! search_latch_locked) {
            {

            search_latch_locked = 1UL;
            }
          } else {
            if (btr_search_latch_temp->writer_is_wait_ex) {
              {


              }
            }
          }
          {
          found_flag = __dyc_funcallvar_2;
          }
          if (found_flag == 0UL) {
            goto next_table;
          } else {
            if (found_flag == 1UL) {
              goto __dyc_dummy_label;
            }
          }
          {



          }
        }
      }
    }
  }
  if (search_latch_locked) {
    {

    search_latch_locked = 0UL;
    }
  }
  if (! plan->pcur_is_open) {
    {

    cursor_just_opened = 1UL;
    cost_counter ++;
    }
  } else {
    {
    must_go_to_next = __dyc_funcallvar_3;
    cursor_just_opened = 0UL;
    }
    if (must_go_to_next) {
      goto next_rec;
    }
  }
  rec = __dyc_funcallvar_4;
  if (! node->asc) {
    if (cursor_just_opened) {
      {
      tmp___0 = __dyc_funcallvar_5;
      }
      if (! tmp___0) {
        if (! consistent_read) {
          {
          tmp = __dyc_funcallvar_6;
          next_rec = tmp;
          offsets = __dyc_funcallvar_7;
          }
          if (srv_locks_unsafe_for_binlog) {
            lock_type = 1024UL;
          } else {
            lock_type = 0UL;
          }
          {
          err = __dyc_funcallvar_8;
          }
          if (err != 10UL) {
            goto __dyc_dummy_label;
          }
        }
      }
    }
  }
  tmp___1 = __dyc_funcallvar_9;
  if (tmp___1) {
    cost_counter ++;
    goto next_rec;
  }
  if (! consistent_read) {
    {
    offsets = __dyc_funcallvar_10;
    }
    if (srv_locks_unsafe_for_binlog) {
      {
      tmp___2 = __dyc_funcallvar_11;
      }
      if (tmp___2) {
        goto next_rec;
      }
      lock_type___0 = 1024UL;
    } else {
      lock_type___0 = 0UL;
    }
    {
    err = __dyc_funcallvar_12;
    }
    if (err != 10UL) {
      goto __dyc_dummy_label;
    }
  }
  tmp___3 = __dyc_funcallvar_13;
  if (tmp___3) {
    goto next_rec;
  }
  if (cost_counter > 100UL) {
    goto __dyc_dummy_label;
  }
  if (plan->unique_search) {
    if (cursor_just_opened) {
      {
      tmp___4 = __dyc_funcallvar_14;
      }
      if (tmp___4 < plan->n_exact_match) {
        goto __dyc_dummy_label;
      }
    } else {
      goto _L;
    }
  } else {
    _L:  
    if (plan->mixed_index) {
      {
      tmp___5 = __dyc_funcallvar_15;
      }
      if (! tmp___5) {
        goto next_rec;
      }
    }
  }
  cons_read_requires_clust_rec = 0UL;
  offsets = __dyc_funcallvar_16;
  if (consistent_read) {
    if (index___0->type & 1UL) {
      {
      tmp___7 = __dyc_funcallvar_17;
      }
      if (! tmp___7) {
        {
        err = __dyc_funcallvar_18;
        }
        if (err != 10UL) {
          goto __dyc_dummy_label;
        }
        if ((unsigned long )old_vers == (unsigned long )((void *)0)) {
          {
          offsets = __dyc_funcallvar_19;

          tmp___6 = __dyc_funcallvar_20;
          }
          if (! tmp___6) {
            goto __dyc_dummy_label;
          }
          goto next_rec;
        }
        rec = old_vers;
      }
    } else {
      {
      tmp___8 = __dyc_funcallvar_21;
      }
      if (! tmp___8) {
        cons_read_requires_clust_rec = 1UL;
      }
    }
  }

  if (plan->unique_search) {
    if (! cursor_just_opened) {
      goto _L___0;
    }
  } else {
    _L___0:  
    {
    tmp___9 = __dyc_funcallvar_22;
    }
    if (! tmp___9) {
      goto __dyc_dummy_label;
    }
  }
  tmp___10 = __dyc_funcallvar_23;
  if (tmp___10) {
    if (! cons_read_requires_clust_rec) {
      if (plan->unique_search) {
        goto __dyc_dummy_label;
      }
      goto next_rec;
    }
  }
  if (plan->must_get_clust) {
    goto _L___1;
  } else {
    if (cons_read_requires_clust_rec) {
      _L___1:  
      {
      err = __dyc_funcallvar_24;
      mtr_has_extra_clust_latch = 1UL;
      }
      if (err != 10UL) {
        goto __dyc_dummy_label;
      }
      cost_counter ++;
      if ((unsigned long )clust_rec == (unsigned long )((void *)0)) {
        goto next_rec;
      }
      {
      tmp___11 = __dyc_funcallvar_25;
      }
      if (tmp___11) {
        goto next_rec;
      }
      if (node->can_get_updated) {
        {

        }
      }
    }
  }
  tmp___12 = __dyc_funcallvar_26;
  if (! tmp___12) {
    if (plan->unique_search) {
      goto __dyc_dummy_label;
    }
    goto next_rec;
  }
  (plan->n_rows_fetched) ++;
  if (node->select_will_do_update) {
    {

    leaf_contains_updates = 1UL;
    cost_counter += 13UL;
    }
    if (plan->unique_search) {
      goto __dyc_dummy_label;
    }
    goto next_rec;
  }
  if (plan->n_rows_fetched <= 1UL) {
    goto next_table;
  } else {
    if (plan->unique_search) {
      goto next_table;
    } else {
      if (plan->no_prefetch) {
        goto next_table;
      }
    }
  }

  if (plan->n_rows_prefetched == 16UL) {
    {

    }
    goto next_table;
  }
  next_rec: ;
  if (mtr_has_extra_clust_latch) {
    goto __dyc_dummy_label;
  }
  if (leaf_contains_updates) {
    {
    tmp___13 = __dyc_funcallvar_27;
    }
    if (tmp___13) {
      goto __dyc_dummy_label;
    }
  }
  if (node->asc) {
    {
    moved = __dyc_funcallvar_28;
    }
  } else {
    {
    moved = __dyc_funcallvar_29;
    }
  }
  if (! moved) {
    goto __dyc_dummy_label;
  }
  cursor_just_opened = 0UL;
  goto __dyc_dummy_label;
  next_table: ;
  if (plan->unique_search) {
    if (! node->can_get_updated) {
      plan->cursor_at_end = 1UL;
    } else {
      {
      plan->stored_cursor_rec_processed = 1UL;

      }
    }
  } else {
    {
    plan->stored_cursor_rec_processed = 1UL;

    }
  }

  leaf_contains_updates = 0UL;
  mtr_has_extra_clust_latch = 0UL;
  next_table_no_mtr: 
  if (node->fetch_table + 1UL == node->n_tables) {
    {

    }
    if (node->is_aggregate) {
      goto __dyc_dummy_label;
    }
    {

    thr->run_node = __dyc_funcallvar_30;
    }
    if (search_latch_locked) {
      {

      }
    }
    err = 10UL;
    goto __dyc_dummy_label;
  }
  (node->fetch_table) ++;
  tmp___14 = __dyc_funcallvar_31;

  goto __dyc_dummy_label;
  plan->cursor_at_end = 1UL;

  leaf_contains_updates = 0UL;
  mtr_has_extra_clust_latch = 0UL;
  if (plan->n_rows_prefetched > 0UL) {
    {

    }
    goto next_table_no_mtr;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_rec_t(rec);
  __dyc_printpre_byte(search_latch_locked);
  __dyc_printpre_byte(cons_read_requires_clust_rec);
  __dyc_printpre_byte(cost_counter);
  __dyc_printpre_byte(cursor_just_opened);
  __dyc_printpre_byte(leaf_contains_updates);
  __dyc_printpre_byte(mtr_has_extra_clust_latch);
  __dyc_printpre_byte(err);
  __dyc_print_ptr__typdef_ulint(offsets);
  __dyc_print_ptr__typdef_rec_t(next_rec);
  __dyc_printpre_byte(lock_type);
  __dyc_printpre_byte(lock_type___0);
  __dyc_print_ptr__typdef_plan_t(tmp___14);
}
}
