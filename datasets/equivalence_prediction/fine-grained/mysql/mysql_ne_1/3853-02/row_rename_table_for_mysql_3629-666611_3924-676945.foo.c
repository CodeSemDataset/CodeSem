#include "../../include/dycfoo.h"
#include "../../include/row0mysql.i.hd.c.h"
void __dyc_foo(void) 
{ ulint *ut_dbg_null_ptr ;
  ulint srv_created_new_raw ;
  ulint srv_force_recovery ;
  dict_table_t *table ;
  que_thr_t *thr ;
  que_t *graph ;
  ulint err ;
  mem_heap_t *heap ;
  ulint n_constraints_to_drop ;
  ulint recovering_temp_table ;
  ulint old_is_tmp ;
  ulint new_is_tmp ;
  ulint len ;
  ulint i ;
  ulint success ;
  ulint db_name_len ;
  char *sql ;
  char *sqlend ;
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
  ulint addlen ;
  ulint tmp___10 ;
  char *tmp___12 ;
  void *tmp___13 ;
  char *tmp___15 ;
  long tmp___16 ;
  long tmp___17 ;
  long tmp___18 ;
  long tmp___19 ;
  int tmp___20 ;
  long tmp___21 ;
  long tmp___22 ;
  ulint tmp___23 ;
  ulint tmp___24 ;
  int tmp___25 ;
  long tmp___26 ;
  long tmp___27 ;
  long tmp___28 ;
  trx_t *trx ;
  long __dyc_funcallvar_1 ;
  long __dyc_funcallvar_2 ;
  long __dyc_funcallvar_3 ;
  long __dyc_funcallvar_4 ;
  ulint __dyc_funcallvar_5 ;
  ulint __dyc_funcallvar_6 ;
  ulint __dyc_funcallvar_7 ;
  ulint __dyc_funcallvar_8 ;
  dict_table_t *__dyc_funcallvar_9 ;
  ulint __dyc_funcallvar_10 ;
  ulint __dyc_funcallvar_11 ;
  ulint __dyc_funcallvar_12 ;
  mem_heap_t *__dyc_funcallvar_13 ;
  ulint __dyc_funcallvar_14 ;
  ulint __dyc_funcallvar_15 ;
  ulint __dyc_funcallvar_16 ;
  ulint __dyc_funcallvar_17 ;
  char *__dyc_funcallvar_18 ;
  void *__dyc_funcallvar_19 ;
  char *__dyc_funcallvar_20 ;
  char *__dyc_funcallvar_21 ;
  char *__dyc_funcallvar_22 ;
  char *__dyc_funcallvar_23 ;
  char *__dyc_funcallvar_24 ;
  char *__dyc_funcallvar_25 ;
  char *__dyc_funcallvar_26 ;
  char *__dyc_funcallvar_27 ;
  char *__dyc_funcallvar_28 ;
  long __dyc_funcallvar_29 ;
  long __dyc_funcallvar_30 ;
  que_t *__dyc_funcallvar_31 ;
  long __dyc_funcallvar_32 ;
  long __dyc_funcallvar_33 ;
  que_thr_t *__dyc_funcallvar_34 ;
  long __dyc_funcallvar_35 ;
  long __dyc_funcallvar_36 ;
  ulint __dyc_funcallvar_37 ;
  ulint __dyc_funcallvar_38 ;
  ulint __dyc_funcallvar_39 ;
  long __dyc_funcallvar_40 ;
  long __dyc_funcallvar_41 ;
  long __dyc_funcallvar_42 ;

  {
  ut_dbg_null_ptr = __dyc_read_ptr__typdef_ulint();
  srv_created_new_raw = (ulint )__dyc_readpre_byte();
  srv_force_recovery = (ulint )__dyc_readpre_byte();
  graph = __dyc_read_ptr__typdef_que_t();
  n_constraints_to_drop = (ulint )__dyc_readpre_byte();
  recovering_temp_table = (ulint )__dyc_readpre_byte();
  trx = __dyc_read_ptr__typdef_trx_t();
  __dyc_funcallvar_1 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_read_ptr__typdef_dict_table_t();
  __dyc_funcallvar_10 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_read_ptr__typdef_mem_heap_t();
  __dyc_funcallvar_14 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_15 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_16 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_17 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_read_ptr__char();
  __dyc_funcallvar_19 = __dyc_read_ptr__void();
  __dyc_funcallvar_20 = __dyc_read_ptr__char();
  __dyc_funcallvar_21 = __dyc_read_ptr__char();
  __dyc_funcallvar_22 = __dyc_read_ptr__char();
  __dyc_funcallvar_23 = __dyc_read_ptr__char();
  __dyc_funcallvar_24 = __dyc_read_ptr__char();
  __dyc_funcallvar_25 = __dyc_read_ptr__char();
  __dyc_funcallvar_26 = __dyc_read_ptr__char();
  __dyc_funcallvar_27 = __dyc_read_ptr__char();
  __dyc_funcallvar_28 = __dyc_read_ptr__char();
  __dyc_funcallvar_29 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_30 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_read_ptr__typdef_que_t();
  __dyc_funcallvar_32 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_33 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_34 = __dyc_read_ptr__typdef_que_thr_t();
  __dyc_funcallvar_35 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_36 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_37 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_38 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_39 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_40 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_41 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_42 = (long )__dyc_readpre_byte();
  table = 0;
  thr = 0;
  err = 0;
  heap = 0;
  old_is_tmp = 0;
  new_is_tmp = 0;
  len = 0;
  i = 0;
  success = 0;
  db_name_len = 0;
  sql = 0;
  sqlend = 0;
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
  addlen = 0;
  tmp___10 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
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
  while (1) {
    while_120_continue:  ;
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
      while_121_continue:  ;
      {
      tmp___0 = __dyc_funcallvar_2;
      }
      if (tmp___0) {
        {

        }
      }
      goto while_121_break;
    }
    while_121_break:  ;
    }
    goto while_120_break;
  }
  while_120_break:  ;
  while (1) {
    while_122_continue:  ;
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
      while_123_continue:  ;
      {
      tmp___2 = __dyc_funcallvar_4;
      }
      if (tmp___2) {
        {

        }
      }
      goto while_123_break;
    }
    while_123_break:  ;
    }
    goto while_122_break;
  }
  while_122_break:  ;
  if (srv_created_new_raw) {
    {


    }
    goto __dyc_dummy_label;
  } else {
    if (srv_force_recovery) {
      {


      }
      goto __dyc_dummy_label;
    }
  }
  tmp___3 = __dyc_funcallvar_5;
  if (tmp___3) {
    {


    }
    goto __dyc_dummy_label;
  }
  trx->op_info = "renaming table";

  old_is_tmp = __dyc_funcallvar_6;
  new_is_tmp = __dyc_funcallvar_7;
  tmp___4 = __dyc_funcallvar_8;
  if (tmp___4) {
    recovering_temp_table = 1UL;
  } else {
    {

    }
  }
  table = __dyc_funcallvar_9;
  if (! table) {
    {
    err = 31UL;




    }
    goto __dyc_dummy_label;
  }
  if (table->ibd_file_missing) {
    {
    err = 31UL;




    }
    goto __dyc_dummy_label;
  }
  tmp___5 = __dyc_funcallvar_10;
  tmp___6 = __dyc_funcallvar_11;
  len = (((((sizeof(char const   [267]) + sizeof(char const   [23])) + sizeof(char const   [77])) + sizeof(char const   [6])) - 4UL) + tmp___5) + tmp___6;
  if (new_is_tmp) {
    {
    tmp___7 = __dyc_funcallvar_12;
    db_name_len = tmp___7 + 1UL;
    heap = __dyc_funcallvar_13;
    err = __dyc_funcallvar_14;
    }
    if (err != 10UL) {
      goto __dyc_dummy_label;
    }
    {
    tmp___8 = __dyc_funcallvar_15;
    tmp___9 = __dyc_funcallvar_16;
    len += (2UL * n_constraints_to_drop) * (tmp___8 - tmp___9);
    i = 0UL;
    }
    {
    while (1) {
      while_124_continue:  ;
      if (! (i < n_constraints_to_drop)) {
        goto while_124_break;
      }
      {
      tmp___10 = __dyc_funcallvar_17;
      addlen = 2UL * tmp___10 + (((sizeof(char const   [42]) + sizeof(char const   [40])) + sizeof(char const   [4])) - 3UL);
      tmp___12 = __dyc_funcallvar_18;
      }
      if (! tmp___12) {
        addlen *= 2UL;
      }
      len += addlen;
      i ++;
    }
    while_124_break:  ;
    }
  } else {
    db_name_len = 0UL;
    len += sizeof(char const   [1271]) - 1UL;
  }
  tmp___13 = __dyc_funcallvar_19;
  sqlend = (char *)tmp___13;
  sql = sqlend;

  sqlend += sizeof(char const   [267]) - 1UL;
  sqlend = __dyc_funcallvar_20;

  sqlend += sizeof(char const   [23]) - 1UL;
  sqlend = __dyc_funcallvar_21;

  sqlend += sizeof(char const   [77]) - 1UL;
  if (db_name_len) {
    i = 0UL;
    {
    while (1) {
      while_125_continue:  ;
      if (! (i < n_constraints_to_drop)) {
        goto while_125_break;
      }
      {

      sqlend += sizeof(char const   [42]) - 1UL;
      sqlend = __dyc_funcallvar_22;
      sqlend = __dyc_funcallvar_23;

      sqlend += sizeof(char const   [40]) - 1UL;
      sqlend = __dyc_funcallvar_24;
      sqlend = __dyc_funcallvar_25;

      sqlend += sizeof(char const   [4]) - 1UL;
      tmp___15 = __dyc_funcallvar_26;
      }
      if (! tmp___15) {
        {

        sqlend += sizeof(char const   [42]) - 1UL;
        sqlend = __dyc_funcallvar_27;

        sqlend += sizeof(char const   [40]) - 1UL;
        sqlend = __dyc_funcallvar_28;

        sqlend += sizeof(char const   [4]) - 1UL;
        }
      }
      i ++;
    }
    while_125_break:  ;
    }
  } else {
    {

    sqlend += sizeof(char const   [1271]) - 1UL;
    }
  }

  sqlend += sizeof(char const   [6]);
  while (1) {
    while_126_continue:  ;
    {
    tmp___16 = __dyc_funcallvar_29;
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
      while_127_continue:  ;
      {
      tmp___17 = __dyc_funcallvar_30;
      }
      if (tmp___17) {
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
  graph = __dyc_funcallvar_31;
  while (1) {
    while_128_continue:  ;
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
      while_129_continue:  ;
      {
      tmp___19 = __dyc_funcallvar_33;
      }
      if (tmp___19) {
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

  graph->trx = trx;
  trx->graph = (que_t *)((void *)0);
  graph->fork_type = 10UL;
  while (1) {
    while_130_continue:  ;
    {
    thr = __dyc_funcallvar_34;
    }
    if ((unsigned long )thr) {
      tmp___20 = 0;
    } else {
      tmp___20 = 1;
    }
    {
    tmp___21 = __dyc_funcallvar_35;
    }
    if (tmp___21) {
      {

      }
      if (*ut_dbg_null_ptr) {
        ut_dbg_null_ptr = (ulint *)((void *)0);
      }
    }
    {
    while (1) {
      while_131_continue:  ;
      {
      tmp___22 = __dyc_funcallvar_36;
      }
      if (tmp___22) {
        {

        }
      }
      goto while_131_break;
    }
    while_131_break:  ;
    }
    goto while_130_break;
  }
  while_130_break:  ;

  err = trx->error_state;
  if (err != 10UL) {
    if (err == 17UL) {
      {








      }
    }
    {
    trx->error_state = 10UL;

    trx->error_state = 10UL;
    }
  } else {
    {
    success = __dyc_funcallvar_37;
    }
    if (! success) {
      {
      trx->error_state = 10UL;

      trx->error_state = 10UL;






      err = 11UL;
      }
      goto __dyc_dummy_label;
    }
    if (old_is_tmp) {
      tmp___23 = trx->check_foreigns;
    } else {
      tmp___23 = 1UL;
    }
    {
    err = __dyc_funcallvar_38;
    }
    if (err != 10UL) {
      {

      }
      if (old_is_tmp) {
        {



        }
      } else {
        {



        }
      }
      {
      while (1) {
        while_132_continue:  ;
        {
        tmp___24 = __dyc_funcallvar_39;
        }
        if (tmp___24) {
          tmp___25 = 0;
        } else {
          tmp___25 = 1;
        }
        {
        tmp___26 = __dyc_funcallvar_40;
        }
        if (tmp___26) {
          {

          }
          if (*ut_dbg_null_ptr) {
            ut_dbg_null_ptr = (ulint *)((void *)0);
          }
        }
        {
        while (1) {
          while_133_continue:  ;
          {
          tmp___27 = __dyc_funcallvar_41;
          }
          if (tmp___27) {
            {

            }
          }
          goto while_133_break;
        }
        while_133_break:  ;
        }
        goto while_132_break;
      }
      while_132_break:  ;
      }
      {
      trx->error_state = 10UL;

      trx->error_state = 10UL;
      }
    }
  }

  if (! recovering_temp_table) {
    {

    }
  }
  if (graph) {
    {

    }
  }
  tmp___28 = __dyc_funcallvar_42;
  if (tmp___28) {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ulint(ut_dbg_null_ptr);
  __dyc_printpre_byte(err);
  __dyc_print_ptr__typdef_mem_heap_t(heap);
  __dyc_printpre_byte(old_is_tmp);
  __dyc_printpre_byte(new_is_tmp);
  __dyc_printpre_byte(len);
  __dyc_printpre_byte(db_name_len);
  __dyc_print_ptr__char(sql);
  __dyc_print_ptr__char(sqlend);
  __dyc_printpre_byte(tmp___20);
  __dyc_printpre_byte(tmp___23);
  __dyc_printpre_byte(tmp___25);
}
}
