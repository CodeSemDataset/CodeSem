#include "../../include/dycfoo.h"
#include "../../include/ibuf0ibuf.i.hd.c.h"
void __dyc_foo(void) 
{ ulint *ut_dbg_null_ptr ;
  ulint trx_sys_multiple_tablespace_format ;
  ulint srv_force_recovery ;
  mem_heap_t *heap ;
  dtuple_t *entry ;
  dtuple_t *search_tuple ;
  rec_t *ibuf_rec ;
  buf_block_t *block ;
  ib_page_t *bitmap_page ;
  ibuf_data_t *ibuf_data ;
  ulint n_inserts ;
  ulint tablespace_being_deleted ;
  ulint corruption_noticed ;
  ulint tmp ;
  ulint tmp___0 ;
  ulint tmp___1 ;
  ulint tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  ulint tmp___5 ;
  ulint tmp___6 ;
  ulint success ;
  ulint tmp___7 ;
  long tmp___8 ;
  long tmp___9 ;
  ulint tmp___10 ;
  ulint tmp___11 ;
  ulint tmp___12 ;
  dulint max_trx_id ;
  buf_frame_t *tmp___13 ;
  dulint tmp___14 ;
  ulint tmp___15 ;
  ulint tmp___16 ;
  ulint old_bits ;
  ulint tmp___17 ;
  ulint new_bits ;
  ulint tmp___18 ;
  ib_page_t *page ;
  ulint space ;
  ulint page_no ;
  ulint update_ibuf_bitmap ;
  ulint __dyc_funcallvar_1 ;
  ulint __dyc_funcallvar_2 ;
  ulint __dyc_funcallvar_3 ;
  ulint __dyc_funcallvar_4 ;
  ib_page_t *__dyc_funcallvar_5 ;
  ulint __dyc_funcallvar_6 ;
  ibuf_data_t *__dyc_funcallvar_7 ;
  mem_heap_t *__dyc_funcallvar_8 ;
  long __dyc_funcallvar_9 ;
  long __dyc_funcallvar_10 ;
  dtuple_t *__dyc_funcallvar_11 ;
  dtuple_t *__dyc_funcallvar_12 ;
  buf_block_t *__dyc_funcallvar_13 ;
  ulint __dyc_funcallvar_14 ;
  ib_page_t *__dyc_funcallvar_15 ;
  ulint __dyc_funcallvar_16 ;
  ulint __dyc_funcallvar_17 ;
  long __dyc_funcallvar_18 ;
  long __dyc_funcallvar_19 ;
  ulint __dyc_funcallvar_20 ;
  rec_t *__dyc_funcallvar_21 ;
  ulint __dyc_funcallvar_22 ;
  ulint __dyc_funcallvar_23 ;
  buf_frame_t *__dyc_funcallvar_24 ;
  dulint __dyc_funcallvar_25 ;
  dtuple_t *__dyc_funcallvar_26 ;
  ulint __dyc_funcallvar_27 ;
  ulint __dyc_funcallvar_28 ;
  ib_page_t *__dyc_funcallvar_29 ;
  ulint __dyc_funcallvar_30 ;
  ulint __dyc_funcallvar_31 ;

  {
  ut_dbg_null_ptr = __dyc_read_ptr__typdef_ulint();
  trx_sys_multiple_tablespace_format = (ulint )__dyc_readpre_byte();
  srv_force_recovery = (ulint )__dyc_readpre_byte();
  ibuf_data = __dyc_read_ptr__typdef_ibuf_data_t();
  n_inserts = (ulint )__dyc_readpre_byte();
  tablespace_being_deleted = (ulint )__dyc_readpre_byte();
  corruption_noticed = (ulint )__dyc_readpre_byte();
  page = __dyc_read_ptr__typdef_ib_page_t();
  space = (ulint )__dyc_readpre_byte();
  page_no = (ulint )__dyc_readpre_byte();
  update_ibuf_bitmap = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_1 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__typdef_ib_page_t();
  __dyc_funcallvar_6 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__typdef_ibuf_data_t();
  __dyc_funcallvar_8 = __dyc_read_ptr__typdef_mem_heap_t();
  __dyc_funcallvar_9 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_10 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_read_ptr__typdef_dtuple_t();
  __dyc_funcallvar_12 = __dyc_read_ptr__typdef_dtuple_t();
  __dyc_funcallvar_13 = __dyc_read_ptr__typdef_buf_block_t();
  __dyc_funcallvar_14 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_read_ptr__typdef_ib_page_t();
  __dyc_funcallvar_16 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_17 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_18 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_19 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_20 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_22 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_23 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_read_ptr__typdef_buf_frame_t();
  __dyc_funcallvar_25 = __dyc_read_comp_101dulint_struct();
  __dyc_funcallvar_26 = __dyc_read_ptr__typdef_dtuple_t();
  __dyc_funcallvar_27 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_28 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_29 = __dyc_read_ptr__typdef_ib_page_t();
  __dyc_funcallvar_30 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_31 = (ulint )__dyc_readpre_byte();
  heap = 0;
  entry = 0;
  search_tuple = 0;
  ibuf_rec = 0;
  block = 0;
  bitmap_page = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  success = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  memset(& max_trx_id, 0, sizeof(dulint ));
  tmp___13 = 0;
  memset(& tmp___14, 0, sizeof(dulint ));
  tmp___15 = 0;
  tmp___16 = 0;
  old_bits = 0;
  tmp___17 = 0;
  new_bits = 0;
  tmp___18 = 0;
  if (srv_force_recovery >= 4UL) {
    goto __dyc_dummy_label;
  }
  tmp = __dyc_funcallvar_1;
  if (tmp) {
    goto __dyc_dummy_label;
  } else {
    {
    tmp___0 = __dyc_funcallvar_2;
    }
    if (tmp___0) {
      goto __dyc_dummy_label;
    } else {
      {
      tmp___1 = __dyc_funcallvar_3;
      }
      if (tmp___1) {
        goto __dyc_dummy_label;
      }
    }
  }
  if (update_ibuf_bitmap) {
    {
    tablespace_being_deleted = __dyc_funcallvar_4;
    }
    if (tablespace_being_deleted) {
      page = (ib_page_t *)((void *)0);
      update_ibuf_bitmap = 0UL;
    }
  }
  if (update_ibuf_bitmap) {
    {

    bitmap_page = __dyc_funcallvar_5;
    tmp___2 = __dyc_funcallvar_6;
    }
    if (! tmp___2) {
      {

      }
      if (! tablespace_being_deleted) {
        {

        }
      }
      goto __dyc_dummy_label;
    }
    {

    }
  }
  ibuf_data = __dyc_funcallvar_7;

  heap = __dyc_funcallvar_8;
  if (! trx_sys_multiple_tablespace_format) {
    {
    while (1) {
      while_126_continue:  ;
      {
      tmp___3 = __dyc_funcallvar_9;
      }
      if (tmp___3) {
        {

        }
        if (*ut_dbg_null_ptr) {
          ut_dbg_null_ptr = (ulint *)((void *)0);
        }
      }
      {
      while (1) {
        while_127_continue:  ;
        {
        tmp___4 = __dyc_funcallvar_10;
        }
        if (tmp___4) {
          {

          }
        }
        goto while_127_break;
      }
      while_127_break:  ;
      }
      goto while_126_break;
    }
    while_126_break:  ;
    }
    {
    search_tuple = __dyc_funcallvar_11;
    }
  } else {
    {
    search_tuple = __dyc_funcallvar_12;
    }
  }
  if (page) {
    {
    block = __dyc_funcallvar_13;

    tmp___6 = __dyc_funcallvar_14;
    }
    if (tmp___6 != 17855UL) {
      {
      corruption_noticed = 1UL;



      bitmap_page = __dyc_funcallvar_15;




      tmp___5 = __dyc_funcallvar_16;

      }
    }
  }
  n_inserts = 0UL;

  if (page) {
    {
    tmp___7 = __dyc_funcallvar_17;
    success = tmp___7;
    }
    {
    while (1) {
      while_128_continue:  ;
      {
      tmp___8 = __dyc_funcallvar_18;
      }
      if (tmp___8) {
        {

        }
        if (*ut_dbg_null_ptr) {
          ut_dbg_null_ptr = (ulint *)((void *)0);
        }
      }
      {
      while (1) {
        while_129_continue:  ;
        {
        tmp___9 = __dyc_funcallvar_19;
        }
        if (tmp___9) {
          {

          }
        }
        goto while_129_break;
      }
      while_129_break:  ;
      }
      goto while_128_break;
    }
    while_128_break:  ;
    }
  }

  tmp___10 = __dyc_funcallvar_20;
  if (! tmp___10) {
    goto reset_bit;
  }
  while (1) {
    while_130_continue:  ;
    {
    ibuf_rec = __dyc_funcallvar_21;
    tmp___11 = __dyc_funcallvar_22;
    }
    if (tmp___11 != page_no) {
      goto _L;
    } else {
      {
      tmp___12 = __dyc_funcallvar_23;
      }
      if (tmp___12 != space) {
        _L:  
        if (page) {
          {

          }
        }
        goto reset_bit;
      }
    }
    if (corruption_noticed) {
      {



      }
    } else {
      if (page) {
        {
        tmp___13 = __dyc_funcallvar_24;
        tmp___14 = __dyc_funcallvar_25;
        max_trx_id = tmp___14;

        entry = __dyc_funcallvar_26;


        }
      }
    }
    {
    n_inserts ++;
    tmp___15 = __dyc_funcallvar_27;
    }
    if (tmp___15) {
      goto __dyc_dummy_label;
    }
    {
    tmp___16 = __dyc_funcallvar_28;
    }
    if (tmp___16) {
      {


      }
      goto __dyc_dummy_label;
    }
  }
  while_130_break:  ;
  reset_bit: 
  if (update_ibuf_bitmap) {
    {
    bitmap_page = __dyc_funcallvar_29;

    }
    if (page) {
      {
      tmp___17 = __dyc_funcallvar_30;
      old_bits = tmp___17;
      tmp___18 = __dyc_funcallvar_31;
      new_bits = tmp___18;
      }
      if (old_bits != new_bits) {
        {

        }
      }
    }
  }




  (ibuf_data->n_merges) ++;
  ibuf_data->n_merged_recs += n_inserts;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ulint(ut_dbg_null_ptr);
  __dyc_print_ptr__typdef_mem_heap_t(heap);
  __dyc_print_ptr__typdef_dtuple_t(entry);
  __dyc_print_ptr__typdef_dtuple_t(search_tuple);
  __dyc_print_ptr__typdef_rec_t(ibuf_rec);
  __dyc_print_ptr__typdef_buf_block_t(block);
  __dyc_print_ptr__typdef_ib_page_t(bitmap_page);
  __dyc_printpre_byte(corruption_noticed);
  __dyc_printpre_byte(tmp___5);
  __dyc_printpre_byte(success);
  __dyc_print_comp_101dulint_struct(max_trx_id);
  __dyc_print_ptr__typdef_buf_frame_t(tmp___13);
  __dyc_print_ptr__typdef_ib_page_t(page);
}
}
