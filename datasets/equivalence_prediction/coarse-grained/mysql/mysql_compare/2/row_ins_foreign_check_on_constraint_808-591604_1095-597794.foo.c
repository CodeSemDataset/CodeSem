#include "../../include/dycfoo.h"
#include "../../include/row0ins.i.hd.c.h"
void __dyc_foo(void) 
{ ulint *ut_dbg_null_ptr ;
  upd_node_t *node ;
  upd_node_t *cascade ;
  dict_table_t *table ;
  dict_index_t *index___0 ;
  dict_index_t *clust_index ;
  dtuple_t *ref ;
  mem_heap_t *upd_vec_heap ;
  rec_t *rec ;
  rec_t *clust_rec ;
  upd_t *update ;
  ulint n_to_update ;
  ulint err ;
  ulint i ;
  trx_t *trx ;
  mem_heap_t *tmp_heap ;
  int tmp ;
  int tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  rec_t *tmp___3 ;
  rec_t *tmp___4 ;
  rec_t *tmp___5 ;
  ulint tmp___6 ;
  rec_t *tmp___7 ;
  ulint tmp___8 ;
  btr_cur_t *tmp___9 ;
  long tmp___10 ;
  long tmp___11 ;
  ulint tmp___12 ;
  ulint tmp___13 ;
  ulint tmp___14 ;
  ulint tmp___15 ;
  ulint tmp___16 ;
  rec_t *tmp___17 ;
  long tmp___18 ;
  long tmp___19 ;
  trx_t *tmp___20 ;
  trx_t *tmp___21 ;
  que_thr_t *thr ;
  dict_foreign_t *foreign ;
  btr_pcur_t *pcur ;
  mtr_t *mtr ;
  long __dyc_funcallvar_1 ;
  long __dyc_funcallvar_2 ;
  trx_t *__dyc_funcallvar_3 ;
  rec_t *__dyc_funcallvar_4 ;
  rec_t *__dyc_funcallvar_5 ;
  mem_heap_t *__dyc_funcallvar_6 ;
  upd_node_t *__dyc_funcallvar_7 ;
  upd_t *__dyc_funcallvar_8 ;
  ulint __dyc_funcallvar_9 ;
  rec_t *__dyc_funcallvar_10 ;
  ulint __dyc_funcallvar_11 ;
  rec_t *__dyc_funcallvar_12 ;
  btr_cur_t *__dyc_funcallvar_13 ;
  long __dyc_funcallvar_14 ;
  long __dyc_funcallvar_15 ;
  rec_t *__dyc_funcallvar_16 ;
  dict_index_t *__dyc_funcallvar_17 ;
  mem_heap_t *__dyc_funcallvar_18 ;
  dtuple_t *__dyc_funcallvar_19 ;
  rec_t *__dyc_funcallvar_20 ;
  ulint __dyc_funcallvar_21 ;
  ulint __dyc_funcallvar_22 ;
  ulint __dyc_funcallvar_23 ;
  ulint __dyc_funcallvar_24 ;
  ulint __dyc_funcallvar_25 ;
  ulint __dyc_funcallvar_26 ;
  ulint __dyc_funcallvar_27 ;
  ulint __dyc_funcallvar_28 ;
  mem_heap_t *__dyc_funcallvar_29 ;
  ulint __dyc_funcallvar_30 ;
  rec_t *__dyc_funcallvar_31 ;
  long __dyc_funcallvar_32 ;
  long __dyc_funcallvar_33 ;
  ulint __dyc_funcallvar_34 ;
  trx_t *__dyc_funcallvar_35 ;
  trx_t *__dyc_funcallvar_36 ;

  {
  ut_dbg_null_ptr = __dyc_read_ptr__typdef_ulint();
  table = __dyc_read_ptr__typdef_dict_table_t();
  tmp_heap = __dyc_read_ptr__typdef_mem_heap_t();
  thr = __dyc_read_ptr__typdef_que_thr_t();
  foreign = __dyc_read_ptr__typdef_dict_foreign_t();
  pcur = __dyc_read_ptr__typdef_btr_pcur_t();
  mtr = __dyc_read_ptr__typdef_mtr_t();
  __dyc_funcallvar_1 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_read_ptr__typdef_trx_t();
  __dyc_funcallvar_4 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_5 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_6 = __dyc_read_ptr__typdef_mem_heap_t();
  __dyc_funcallvar_7 = __dyc_read_ptr__typdef_upd_node_t();
  __dyc_funcallvar_8 = __dyc_read_ptr__typdef_upd_t();
  __dyc_funcallvar_9 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_11 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_13 = __dyc_read_ptr__typdef_btr_cur_t();
  __dyc_funcallvar_14 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_15 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_17 = __dyc_read_ptr__typdef_dict_index_t();
  __dyc_funcallvar_18 = __dyc_read_ptr__typdef_mem_heap_t();
  __dyc_funcallvar_19 = __dyc_read_ptr__typdef_dtuple_t();
  __dyc_funcallvar_20 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_21 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_22 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_23 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_24 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_25 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_26 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_27 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_28 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_29 = __dyc_read_ptr__typdef_mem_heap_t();
  __dyc_funcallvar_30 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_32 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_33 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_34 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_35 = __dyc_read_ptr__typdef_trx_t();
  __dyc_funcallvar_36 = __dyc_read_ptr__typdef_trx_t();
  node = 0;
  cascade = 0;
  index___0 = 0;
  clust_index = 0;
  ref = 0;
  upd_vec_heap = 0;
  rec = 0;
  clust_rec = 0;
  update = 0;
  n_to_update = 0;
  err = 0;
  i = 0;
  trx = 0;
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
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  while (1) {
    while_49_continue:  ;
    if (thr) {
      if (foreign) {
        if (pcur) {
          if (mtr) {
            tmp = 1;
          } else {
            tmp = 0;
          }
        } else {
          tmp = 0;
        }
      } else {
        tmp = 0;
      }
    } else {
      tmp = 0;
    }
    if ((unsigned long )tmp) {
      tmp___0 = 0;
    } else {
      tmp___0 = 1;
    }
    {
    tmp___1 = __dyc_funcallvar_1;
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
      while_50_continue:  ;
      {
      tmp___2 = __dyc_funcallvar_2;
      }
      if (tmp___2) {
        {

        }
      }
      goto while_50_break;
    }
    while_50_break:  ;
    }
    goto while_49_break;
  }
  while_49_break:  ;
  trx = __dyc_funcallvar_3;

  node = (upd_node_t *)thr->run_node;
  if (node->is_delete) {
    if (0UL == (foreign->type & 3UL)) {
      {
      tmp___3 = __dyc_funcallvar_4;

      }
      goto __dyc_dummy_label;
    }
  }
  if (! node->is_delete) {
    if (0UL == (foreign->type & 12UL)) {
      {
      tmp___4 = __dyc_funcallvar_5;

      }
      goto __dyc_dummy_label;
    }
  }
  if ((unsigned long )node->cascade_node == (unsigned long )((void *)0)) {
    {
    node->cascade_heap = __dyc_funcallvar_6;
    node->cascade_node = __dyc_funcallvar_7;

    }
  }
  cascade = node->cascade_node;
  cascade->table = table;
  cascade->foreign = foreign;
  if (node->is_delete) {
    if (foreign->type & 1UL) {
      cascade->is_delete = 1UL;
    } else {
      goto _L;
    }
  } else {
    _L:  
    cascade->is_delete = 0UL;
    if (foreign->n_fields > cascade->update_n_fields) {
      {
      cascade->update = __dyc_funcallvar_8;
      cascade->update_n_fields = foreign->n_fields;
      }
    }
  }
  if (! cascade->is_delete) {
    {
    tmp___6 = __dyc_funcallvar_9;
    }
    if (tmp___6) {
      {
      err = 37UL;
      tmp___5 = __dyc_funcallvar_10;

      }
      goto __dyc_dummy_label;
    }
  }
  tmp___8 = __dyc_funcallvar_11;
  if (tmp___8 >= 15UL) {
    {
    err = 37UL;
    tmp___7 = __dyc_funcallvar_12;

    }
    goto __dyc_dummy_label;
  }
  tmp___9 = __dyc_funcallvar_13;
  index___0 = tmp___9->index;
  while (1) {
    while_51_continue:  ;
    {
    tmp___10 = __dyc_funcallvar_14;
    }
    if (tmp___10) {
      {

      }
      if (*ut_dbg_null_ptr) {
        ut_dbg_null_ptr = (ulint *)((void *)0);
      }
    }
    {
    while (1) {
      while_52_continue:  ;
      {
      tmp___11 = __dyc_funcallvar_15;
      }
      if (tmp___11) {
        {

        }
      }
      goto while_52_break;
    }
    while_52_break:  ;
    }
    goto while_51_break;
  }
  while_51_break:  ;
  rec = __dyc_funcallvar_16;
  if (index___0->type & 1UL) {
    clust_index = index___0;
    clust_rec = rec;
  } else {
    {
    clust_index = __dyc_funcallvar_17;
    tmp_heap = __dyc_funcallvar_18;
    ref = __dyc_funcallvar_19;

    clust_rec = __dyc_funcallvar_20;
    tmp___12 = __dyc_funcallvar_21;
    }
    if (tmp___12) {
      {
      tmp___13 = __dyc_funcallvar_22;
      tmp___14 = __dyc_funcallvar_23;
      }
      if (tmp___13 < tmp___14) {
        _L___0:  
        {







        err = 10UL;
        }
        goto __dyc_dummy_label;
      }
    } else {
      goto _L___0;
    }
  }
  err = __dyc_funcallvar_24;
  if (err == 10UL) {
    {
    err = __dyc_funcallvar_25;
    }
  }
  if (err != 10UL) {
    goto __dyc_dummy_label;
  }
  tmp___15 = __dyc_funcallvar_26;
  if (tmp___15) {
    err = 10UL;
    goto __dyc_dummy_label;
  }
  if (node->is_delete) {
    if (foreign->type & 2UL) {
      goto _L___1;
    } else {
      goto _L___2;
    }
  } else {
    _L___2:  
    if (! node->is_delete) {
      if (foreign->type & 8UL) {
        _L___1:  
        update = cascade->update;
        update->info_bits = 0UL;
        update->n_fields = foreign->n_fields;
        i = 0UL;
        {
        while (1) {
          while_53_continue:  ;
          if (! (i < foreign->n_fields)) {
            goto while_53_break;
          }
          {
          tmp___16 = __dyc_funcallvar_27;
          (update->fields + i)->field_no = __dyc_funcallvar_28;
          (update->fields + i)->exp = (void *)0;
          (update->fields + i)->new_val.len = 4294967295UL;
          (update->fields + i)->new_val.data = (void *)0;
          (update->fields + i)->extern_storage = 0UL;
          i ++;
          }
        }
        while_53_break:  ;
        }
      }
    }
  }
  if (! node->is_delete) {
    if (foreign->type & 4UL) {
      {
      upd_vec_heap = __dyc_funcallvar_29;
      n_to_update = __dyc_funcallvar_30;
      }
      if (n_to_update == 0xffffffffUL) {
        {
        err = 37UL;
        tmp___17 = __dyc_funcallvar_31;

        }
        goto __dyc_dummy_label;
      }
      if ((cascade->update)->n_fields == 0UL) {
        err = 10UL;
        goto __dyc_dummy_label;
      }
    }
  }

  if ((unsigned long )index___0 == (unsigned long )clust_index) {
    {

    }
  } else {
    {

    }
  }

  while (1) {
    while_54_continue:  ;
    {
    tmp___18 = __dyc_funcallvar_32;
    }
    if (tmp___18) {
      {

      }
      if (*ut_dbg_null_ptr) {
        ut_dbg_null_ptr = (ulint *)((void *)0);
      }
    }
    {
    while (1) {
      while_55_continue:  ;
      {
      tmp___19 = __dyc_funcallvar_33;
      }
      if (tmp___19) {
        {

        }
      }
      goto while_55_break;
    }
    while_55_break:  ;
    }
    goto while_54_break;
  }
  while_54_break:  ;
  cascade->state = 2UL;
  err = __dyc_funcallvar_34;
  if ((foreign->foreign_table)->n_foreign_key_checks_running == 0UL) {
    {

    }
  }
  tmp___20 = __dyc_funcallvar_35;

  tmp___21 = __dyc_funcallvar_36;



  if (tmp_heap) {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ulint(ut_dbg_null_ptr);
  __dyc_print_ptr__typdef_dict_index_t(clust_index);
  __dyc_print_ptr__typdef_dtuple_t(ref);
  __dyc_print_ptr__typdef_mem_heap_t(upd_vec_heap);
  __dyc_print_ptr__typdef_rec_t(rec);
  __dyc_print_ptr__typdef_rec_t(clust_rec);
  __dyc_printpre_byte(err);
  __dyc_print_ptr__typdef_trx_t(trx);
  __dyc_print_ptr__typdef_mem_heap_t(tmp_heap);
  __dyc_printpre_byte(tmp___0);
  __dyc_print_ptr__typdef_rec_t(tmp___3);
  __dyc_print_ptr__typdef_rec_t(tmp___4);
  __dyc_print_ptr__typdef_rec_t(tmp___5);
  __dyc_print_ptr__typdef_rec_t(tmp___7);
  __dyc_printpre_byte(tmp___16);
  __dyc_print_ptr__typdef_rec_t(tmp___17);
  __dyc_print_ptr__typdef_trx_t(tmp___20);
  __dyc_print_ptr__typdef_trx_t(tmp___21);
}
}
