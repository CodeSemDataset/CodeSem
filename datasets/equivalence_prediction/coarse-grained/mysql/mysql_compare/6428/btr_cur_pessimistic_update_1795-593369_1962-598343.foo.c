#include "../../include/dycfoo.h"
#include "../../include/btr0cur.i.hd.c.h"
void __dyc_foo(void) 
{ ulint *ut_dbg_null_ptr ;
  big_rec_t *big_rec_vec ;
  dict_index_t *index___0 ;
  dict_tree_t *tree ;
  rec_t *rec ;
  page_cur_t *page_cursor ;
  dtuple_t *new_entry ;
  mem_heap_t *heap ;
  ulint err ;
  ulint optim_err ;
  trx_t *trx ;
  ulint was_first ;
  ulint success ;
  ulint n_extents ;
  ulint *ext_vect ;
  ulint n_ext_vect ;
  ulint reserve_flag ;
  ulint *offsets ;
  long tmp ;
  long tmp___0 ;
  ulint tmp___1 ;
  void *tmp___2 ;
  ulint tmp___3 ;
  ulint tmp___4 ;
  ulint tmp___5 ;
  ulint tmp___6 ;
  long tmp___7 ;
  buf_frame_t *tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  long tmp___11 ;
  long tmp___12 ;
  ulint tmp___13 ;
  ulint tmp___14 ;
  ulint tmp___15 ;
  long tmp___16 ;
  long tmp___17 ;
  long tmp___18 ;
  long tmp___19 ;
  long tmp___20 ;
  long tmp___21 ;
  ulint tmp___22 ;
  ulint tmp___23 ;
  ulint flags ;
  btr_cur_t *cursor ;
  ulint __dyc_funcallvar_3 ;
  ulint __dyc_funcallvar_4 ;
  ulint __dyc_funcallvar_5 ;
  mem_heap_t *__dyc_funcallvar_6 ;
  ulint *__dyc_funcallvar_7 ;
  trx_t *__dyc_funcallvar_8 ;
  dtuple_t *__dyc_funcallvar_9 ;
  long __dyc_funcallvar_10 ;
  long __dyc_funcallvar_11 ;
  ulint __dyc_funcallvar_12 ;
  void *__dyc_funcallvar_13 ;
  ulint *__dyc_funcallvar_14 ;
  ulint __dyc_funcallvar_15 ;
  ulint __dyc_funcallvar_16 ;
  ulint __dyc_funcallvar_17 ;
  ulint __dyc_funcallvar_18 ;
  ulint __dyc_funcallvar_19 ;
  long __dyc_funcallvar_20 ;
  big_rec_t *__dyc_funcallvar_21 ;
  page_cur_t *__dyc_funcallvar_22 ;
  buf_frame_t *__dyc_funcallvar_23 ;
  rec_t *__dyc_funcallvar_24 ;
  long __dyc_funcallvar_25 ;
  long __dyc_funcallvar_26 ;
  ulint *__dyc_funcallvar_27 ;
  ulint __dyc_funcallvar_28 ;
  ulint __dyc_funcallvar_29 ;
  ulint __dyc_funcallvar_30 ;
  ulint __dyc_funcallvar_31 ;
  long __dyc_funcallvar_32 ;
  long __dyc_funcallvar_33 ;
  long __dyc_funcallvar_34 ;
  long __dyc_funcallvar_35 ;
  long __dyc_funcallvar_36 ;
  long __dyc_funcallvar_37 ;
  ulint *__dyc_funcallvar_38 ;
  ulint __dyc_funcallvar_39 ;
  ulint __dyc_funcallvar_40 ;

  {
  ut_dbg_null_ptr = __dyc_read_ptr__typdef_ulint();
  flags = (ulint )__dyc_readpre_byte();
  cursor = __dyc_read_ptr__typdef_btr_cur_t();
  __dyc_funcallvar_3 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_read_ptr__typdef_mem_heap_t();
  __dyc_funcallvar_7 = __dyc_read_ptr__typdef_ulint();
  __dyc_funcallvar_8 = __dyc_read_ptr__typdef_trx_t();
  __dyc_funcallvar_9 = __dyc_read_ptr__typdef_dtuple_t();
  __dyc_funcallvar_10 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_read_ptr__void();
  __dyc_funcallvar_14 = __dyc_read_ptr__typdef_ulint();
  __dyc_funcallvar_15 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_16 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_17 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_18 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_19 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_20 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_read_ptr__typdef_big_rec_t();
  __dyc_funcallvar_22 = __dyc_read_ptr__typdef_page_cur_t();
  __dyc_funcallvar_23 = __dyc_read_ptr__typdef_buf_frame_t();
  __dyc_funcallvar_24 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_25 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_26 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_27 = __dyc_read_ptr__typdef_ulint();
  __dyc_funcallvar_28 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_29 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_30 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_31 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_32 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_33 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_34 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_35 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_36 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_37 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_read_ptr__typdef_ulint();
  __dyc_funcallvar_39 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_40 = (ulint )__dyc_readpre_byte();
  big_rec_vec = 0;
  index___0 = 0;
  tree = 0;
  rec = 0;
  page_cursor = 0;
  new_entry = 0;
  heap = 0;
  err = 0;
  optim_err = 0;
  trx = 0;
  was_first = 0;
  success = 0;
  n_extents = 0;
  ext_vect = 0;
  n_ext_vect = 0;
  reserve_flag = 0;
  offsets = 0;
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
  tmp___22 = 0;
  tmp___23 = 0;
  index___0 = cursor->index;
  tree = index___0->tree;
  optim_err = __dyc_funcallvar_3;
  if (optim_err != 1002UL) {
    if (optim_err != 1001UL) {
      goto __dyc_dummy_label;
    }
  }
  err = __dyc_funcallvar_4;
  if (err != 10UL) {
    goto __dyc_dummy_label;
  }
  if (optim_err == 1001UL) {
    n_extents = cursor->tree_height / 16UL + 3UL;
    if (flags & 1UL) {
      reserve_flag = 3000000UL;
    } else {
      reserve_flag = 1000000UL;
    }
    {
    success = __dyc_funcallvar_5;
    }
    if (! success) {
      err = 13UL;
      goto __dyc_dummy_label;
    }
  }
  heap = __dyc_funcallvar_6;
  offsets = __dyc_funcallvar_7;
  trx = __dyc_funcallvar_8;
  new_entry = __dyc_funcallvar_9;

  if (! (flags & 4UL)) {
    {


    }
  }
  if (flags & 1UL) {
    {
    while (1) {
      while_58_continue:  ;
      {
      tmp = __dyc_funcallvar_10;
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
        while_59_continue:  ;
        {
        tmp___0 = __dyc_funcallvar_11;
        }
        if (tmp___0) {
          {

          }
        }
        goto while_59_break;
      }
      while_59_break:  ;
      }
      goto while_58_break;
    }
    while_58_break:  ;
    }
    {

    }
  }
  tmp___1 = __dyc_funcallvar_12;
  tmp___2 = __dyc_funcallvar_13;
  ext_vect = (ulint *)tmp___2;
  offsets = __dyc_funcallvar_14;
  n_ext_vect = __dyc_funcallvar_15;
  tmp___3 = __dyc_funcallvar_16;
  tmp___4 = __dyc_funcallvar_17;
  tmp___5 = __dyc_funcallvar_18;
  tmp___6 = __dyc_funcallvar_19;
  tmp___7 = __dyc_funcallvar_20;
  if (tmp___7) {
    {
    big_rec_vec = __dyc_funcallvar_21;
    }
    if ((unsigned long )big_rec_vec == (unsigned long )((void *)0)) {
      err = 34UL;
      goto __dyc_dummy_label;
    }
  }
  page_cursor = __dyc_funcallvar_22;
  tmp___8 = __dyc_funcallvar_23;




  rec = __dyc_funcallvar_24;
  while (1) {
    while_60_continue:  ;
    if (rec) {
      tmp___9 = 1;
    } else {
      if (optim_err != 1002UL) {
        tmp___9 = 1;
      } else {
        tmp___9 = 0;
      }
    }
    if ((unsigned long )tmp___9) {
      tmp___10 = 0;
    } else {
      tmp___10 = 1;
    }
    {
    tmp___11 = __dyc_funcallvar_25;
    }
    if (tmp___11) {
      {

      }
      if (*ut_dbg_null_ptr) {
        ut_dbg_null_ptr = (ulint *)((void *)0);
      }
    }
    {
    while (1) {
      while_61_continue:  ;
      {
      tmp___12 = __dyc_funcallvar_26;
      }
      if (tmp___12) {
        {

        }
      }
      goto while_61_break;
    }
    while_61_break:  ;
    }
    goto while_60_break;
  }
  while_60_break:  ;
  if (rec) {
    {


    offsets = __dyc_funcallvar_27;
    tmp___13 = __dyc_funcallvar_28;
    tmp___14 = __dyc_funcallvar_29;
    }
    if (! tmp___14) {
      {

      }
    }
    {

    err = 10UL;
    }
    goto __dyc_dummy_label;
  }
  tmp___15 = __dyc_funcallvar_30;
  if (tmp___15) {
    was_first = 1UL;
  } else {
    was_first = 0UL;
  }
  err = __dyc_funcallvar_31;
  while (1) {
    while_62_continue:  ;
    {
    tmp___16 = __dyc_funcallvar_32;
    }
    if (tmp___16) {
      {

      }
      if (*ut_dbg_null_ptr) {
        ut_dbg_null_ptr = (ulint *)((void *)0);
      }
    }
    {
    while (1) {
      while_63_continue:  ;
      {
      tmp___17 = __dyc_funcallvar_33;
      }
      if (tmp___17) {
        {

        }
      }
      goto while_63_break;
    }
    while_63_break:  ;
    }
    goto while_62_break;
  }
  while_62_break:  ;
  while (1) {
    while_64_continue:  ;
    {
    tmp___18 = __dyc_funcallvar_34;
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
      while_65_continue:  ;
      {
      tmp___19 = __dyc_funcallvar_35;
      }
      if (tmp___19) {
        {

        }
      }
      goto while_65_break;
    }
    while_65_break:  ;
    }
    goto while_64_break;
  }
  while_64_break:  ;
  while (1) {
    while_66_continue:  ;
    {
    tmp___20 = __dyc_funcallvar_36;
    }
    if (tmp___20) {
      {

      }
      if (*ut_dbg_null_ptr) {
        ut_dbg_null_ptr = (ulint *)((void *)0);
      }
    }
    {
    while (1) {
      while_67_continue:  ;
      {
      tmp___21 = __dyc_funcallvar_37;
      }
      if (tmp___21) {
        {

        }
      }
      goto while_67_break;
    }
    while_67_break:  ;
    }
    goto while_66_break;
  }
  while_66_break:  ;

  offsets = __dyc_funcallvar_38;
  tmp___22 = __dyc_funcallvar_39;
  tmp___23 = __dyc_funcallvar_40;
  if (! tmp___23) {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ulint(ut_dbg_null_ptr);
  __dyc_print_ptr__typdef_dict_tree_t(tree);
  __dyc_print_ptr__typdef_page_cur_t(page_cursor);
  __dyc_print_ptr__typdef_dtuple_t(new_entry);
  __dyc_print_ptr__typdef_mem_heap_t(heap);
  __dyc_printpre_byte(err);
  __dyc_print_ptr__typdef_trx_t(trx);
  __dyc_printpre_byte(was_first);
  __dyc_printpre_byte(n_extents);
  __dyc_print_ptr__typdef_ulint(ext_vect);
  __dyc_printpre_byte(n_ext_vect);
  __dyc_printpre_byte(reserve_flag);
  __dyc_print_ptr__typdef_ulint(offsets);
  __dyc_printpre_byte(tmp___1);
  __dyc_printpre_byte(tmp___3);
  __dyc_printpre_byte(tmp___4);
  __dyc_printpre_byte(tmp___5);
  __dyc_printpre_byte(tmp___6);
  __dyc_print_ptr__typdef_buf_frame_t(tmp___8);
  __dyc_printpre_byte(tmp___10);
  __dyc_printpre_byte(tmp___13);
  __dyc_printpre_byte(tmp___22);
}
}
