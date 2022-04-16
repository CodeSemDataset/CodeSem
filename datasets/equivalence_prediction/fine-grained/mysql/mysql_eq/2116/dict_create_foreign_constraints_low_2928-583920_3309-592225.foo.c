#include "../../include/dycfoo.h"
#include "../../include/dict0dict.i.hd.c.h"
void __dyc_foo(void) 
{ ulint *ut_dbg_null_ptr ;
  FILE *dict_foreign_err_file ;
  dict_table_t *table ;
  dict_table_t *referenced_table ;
  dict_table_t *table_to_alter ;
  ulint highest_id_so_far ;
  dict_index_t *index___0 ;
  dict_foreign_t *foreign ;
  char const   *ptr ;
  char const   *start_of_latest_foreign ;
  FILE *ef ;
  char const   *constraint_name ;
  ulint success ;
  ulint error ;
  char const   *ptr1 ;
  char const   *ptr2 ;
  ulint i ;
  ulint is_on_delete ;
  ulint n_on_deletes ;
  ulint n_on_updates ;
  long tmp ;
  long tmp___0 ;
  char *tmp___2 ;
  char *tmp___4 ;
  char *tmp___6 ;
  long tmp___7 ;
  long tmp___8 ;
  char *tmp___10 ;
  ulint db_len ;
  size_t tmp___11 ;
  void *tmp___12 ;
  void *tmp___13 ;
  char *tmp___14 ;
  trx_t *trx ;
  char const   *sql_string ;
  ulint reject_fks ;
  dict_table_t *__dyc_funcallvar_1 ;
  char const   *__dyc_funcallvar_2 ;
  char const   *__dyc_funcallvar_3 ;
  char const   *__dyc_funcallvar_4 ;
  ulint __dyc_funcallvar_5 ;
  char const   *__dyc_funcallvar_6 ;
  char const   *__dyc_funcallvar_7 ;
  char const   *__dyc_funcallvar_8 ;
  long __dyc_funcallvar_9 ;
  long __dyc_funcallvar_10 ;
  char *__dyc_funcallvar_11 ;
  char *__dyc_funcallvar_12 ;
  char const   *__dyc_funcallvar_13 ;
  ulint __dyc_funcallvar_14 ;
  char const   *__dyc_funcallvar_15 ;
  char *__dyc_funcallvar_16 ;
  char const   *__dyc_funcallvar_17 ;
  char const   *__dyc_funcallvar_18 ;
  char const   *__dyc_funcallvar_19 ;
  char const   *__dyc_funcallvar_20 ;
  long __dyc_funcallvar_21 ;
  long __dyc_funcallvar_22 ;
  char const   *__dyc_funcallvar_23 ;
  char const   *__dyc_funcallvar_24 ;
  char const   *__dyc_funcallvar_25 ;
  dict_index_t *__dyc_funcallvar_26 ;
  char const   *__dyc_funcallvar_27 ;
  char *__dyc_funcallvar_28 ;
  dict_foreign_t *__dyc_funcallvar_29 ;
  ulint __dyc_funcallvar_30 ;
  size_t __dyc_funcallvar_31 ;
  void *__dyc_funcallvar_32 ;
  char *__dyc_funcallvar_33 ;
  void *__dyc_funcallvar_34 ;
  char *__dyc_funcallvar_35 ;
  char const   *__dyc_funcallvar_36 ;
  char const   *__dyc_funcallvar_37 ;
  char const   *__dyc_funcallvar_38 ;
  char const   *__dyc_funcallvar_39 ;
  char const   *__dyc_funcallvar_40 ;
  char const   *__dyc_funcallvar_41 ;
  char const   *__dyc_funcallvar_42 ;
  char const   *__dyc_funcallvar_43 ;
  char const   *__dyc_funcallvar_44 ;
  char const   *__dyc_funcallvar_45 ;

  {
  ut_dbg_null_ptr = __dyc_read_ptr__typdef_ulint();
  dict_foreign_err_file = __dyc_read_ptr__typdef_FILE();
  referenced_table = __dyc_read_ptr__typdef_dict_table_t();
  table_to_alter = __dyc_read_ptr__typdef_dict_table_t();
  success = (ulint )__dyc_readpre_byte();
  trx = __dyc_read_ptr__typdef_trx_t();
  sql_string = (char const   *)__dyc_read_ptr__char();
  reject_fks = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_read_ptr__typdef_dict_table_t();
  __dyc_funcallvar_2 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_3 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_4 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_5 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_7 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_8 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_9 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_10 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_read_ptr__char();
  __dyc_funcallvar_12 = __dyc_read_ptr__char();
  __dyc_funcallvar_13 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_14 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_15 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_16 = __dyc_read_ptr__char();
  __dyc_funcallvar_17 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_18 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_19 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_20 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_21 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_22 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_23 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_24 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_25 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_26 = __dyc_read_ptr__typdef_dict_index_t();
  __dyc_funcallvar_27 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_28 = __dyc_read_ptr__char();
  __dyc_funcallvar_29 = __dyc_read_ptr__typdef_dict_foreign_t();
  __dyc_funcallvar_30 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_31 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_read_ptr__void();
  __dyc_funcallvar_33 = __dyc_read_ptr__char();
  __dyc_funcallvar_34 = __dyc_read_ptr__void();
  __dyc_funcallvar_35 = __dyc_read_ptr__char();
  __dyc_funcallvar_36 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_37 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_38 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_39 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_40 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_41 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_42 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_43 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_44 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_45 = (char const   *)__dyc_read_ptr__char();
  table = 0;
  highest_id_so_far = 0;
  index___0 = 0;
  foreign = 0;
  ptr = 0;
  start_of_latest_foreign = 0;
  ef = 0;
  constraint_name = 0;
  error = 0;
  ptr1 = 0;
  ptr2 = 0;
  i = 0;
  is_on_delete = 0;
  n_on_deletes = 0;
  n_on_updates = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___2 = 0;
  tmp___4 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___10 = 0;
  db_len = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  highest_id_so_far = (ulint )0;
  ptr = sql_string;
  start_of_latest_foreign = sql_string;
  ef = dict_foreign_err_file;
  table = __dyc_funcallvar_1;
  if ((unsigned long )table == (unsigned long )((void *)0)) {
    {




    }
    goto __dyc_dummy_label;
  }
  ptr = __dyc_funcallvar_2;
  if (! success) {
    goto __dyc_dummy_label;
  }
  ptr = __dyc_funcallvar_3;
  if (! success) {
    goto __dyc_dummy_label;
  }
  ptr = __dyc_funcallvar_4;
  if (! success) {
    {

    }
    goto __dyc_dummy_label;
  }
  if ((unsigned long )table_to_alter == (unsigned long )((void *)0)) {
    highest_id_so_far = 0UL;
  } else {
    {
    highest_id_so_far = __dyc_funcallvar_5;
    }
  }
  ptr1 = __dyc_funcallvar_6;
  ptr2 = __dyc_funcallvar_7;
  constraint_name = (char const   *)((void *)0);
  if ((unsigned long )ptr1 < (unsigned long )ptr2) {
    {
    ptr = ptr1;
    ptr = __dyc_funcallvar_8;
    }
    {
    while (1) {
      while_150_continue:  ;
      {
      tmp = __dyc_funcallvar_9;
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
        while_151_continue:  ;
        {
        tmp___0 = __dyc_funcallvar_10;
        }
        if (tmp___0) {
          {

          }
        }
        goto while_151_break;
      }
      while_151_break:  ;
      }
      goto while_150_break;
    }
    while_150_break:  ;
    }
    if ((char )*ptr) {
      {
      tmp___2 = __dyc_funcallvar_11;
      }
      if (! tmp___2) {
        goto _L;
      }
    } else {
      _L:  
      if ((int const   )*ptr != 34) {
        if ((int const   )*ptr != 96) {
          goto __dyc_dummy_label;
        }
      }
    }
    {
    while (1) {
      while_152_continue:  ;
      if ((char )*ptr) {
        {
        tmp___4 = __dyc_funcallvar_12;
        }
        if (! tmp___4) {
          goto while_152_break;
        }
      } else {
        goto while_152_break;
      }
      ptr ++;
    }
    while_152_break:  ;
    }
    if ((unsigned long )ptr != (unsigned long )ptr2) {
      {
      ptr = __dyc_funcallvar_13;
      }
    }
  } else {
    ptr = ptr2;
  }
  if ((int const   )*ptr == 0) {
    if (reject_fks) {
      if (table->foreign_list.count > 0UL) {
        goto __dyc_dummy_label;
      }
    }
    {
    error = __dyc_funcallvar_14;
    }
    goto __dyc_dummy_label;
  }
  start_of_latest_foreign = ptr;
  ptr = __dyc_funcallvar_15;
  if (! success) {
    goto __dyc_dummy_label;
  }
  if ((char )*ptr) {
    {
    tmp___6 = __dyc_funcallvar_16;
    }
    if (! tmp___6) {
      goto __dyc_dummy_label;
    }
  } else {
    goto __dyc_dummy_label;
  }
  ptr = __dyc_funcallvar_17;
  if (! success) {
    goto __dyc_dummy_label;
  }
  ptr = __dyc_funcallvar_18;
  if (! success) {
    {
    ptr = __dyc_funcallvar_19;
    }
    if (! success) {
      {

      }
      goto __dyc_dummy_label;
    }
    {
    ptr = __dyc_funcallvar_20;
    }
    if (! success) {
      goto __dyc_dummy_label;
    }
  }
  i = 0UL;
  while (1) {
    while_153_continue:  ;
    {
    tmp___7 = __dyc_funcallvar_21;
    }
    if (tmp___7) {
      {

      }
      if (*ut_dbg_null_ptr) {
        ut_dbg_null_ptr = (ulint *)((void *)0);
      }
    }
    {
    while (1) {
      while_154_continue:  ;
      {
      tmp___8 = __dyc_funcallvar_22;
      }
      if (tmp___8) {
        {

        }
      }
      goto while_154_break;
    }
    while_154_break:  ;
    }
    goto while_153_break;
  }
  while_153_break:  ;
  ptr = __dyc_funcallvar_23;
  if (! success) {
    {




    }
    goto __dyc_dummy_label;
  }
  i ++;
  ptr = __dyc_funcallvar_24;
  if (success) {
    goto __dyc_dummy_label;
  }
  ptr = __dyc_funcallvar_25;
  if (! success) {
    {

    }
    goto __dyc_dummy_label;
  }
  index___0 = __dyc_funcallvar_26;
  if (! index___0) {
    {






    }
    goto __dyc_dummy_label;
  }
  ptr = __dyc_funcallvar_27;
  if (! success) {
    {

    }
    goto __dyc_dummy_label;
  } else {
    if ((char )*ptr) {
      {
      tmp___10 = __dyc_funcallvar_28;
      }
      if (! tmp___10) {
        {

        }
        goto __dyc_dummy_label;
      }
    } else {
      {

      }
      goto __dyc_dummy_label;
    }
  }
  foreign = __dyc_funcallvar_29;
  if (constraint_name) {
    {
    db_len = __dyc_funcallvar_30;
    tmp___11 = __dyc_funcallvar_31;
    tmp___12 = __dyc_funcallvar_32;
    foreign->id = (char *)tmp___12;

    *(foreign->id + db_len) = (char )'/';

    }
  }
  foreign->foreign_table = table;
  foreign->foreign_table_name = __dyc_funcallvar_33;
  foreign->foreign_index = index___0;
  foreign->n_fields = i;
  tmp___13 = __dyc_funcallvar_34;
  foreign->foreign_col_names = (char const   **)tmp___13;
  i = 0UL;
  while (1) {
    while_155_continue:  ;
    if (! (i < foreign->n_fields)) {
      goto while_155_break;
    }
    {
    tmp___14 = __dyc_funcallvar_35;
    *(foreign->foreign_col_names + i) = (char const   *)tmp___14;
    i ++;
    }
  }
  while_155_break:  ;
  ptr = __dyc_funcallvar_36;
  if (! success) {
    goto _L___0;
  } else {
    if (! referenced_table) {
      if (trx->check_foreigns) {
        _L___0:  
        {





        }
        goto __dyc_dummy_label;
      }
    }
  }
  ptr = __dyc_funcallvar_37;
  if (! success) {
    {


    }
    goto __dyc_dummy_label;
  }
  i = 0UL;
  ptr = __dyc_funcallvar_38;
  i ++;
  if (! success) {
    {





    }
    goto __dyc_dummy_label;
  }
  ptr = __dyc_funcallvar_39;
  if (success) {
    goto __dyc_dummy_label;
  }
  ptr = __dyc_funcallvar_40;
  if (! success) {
    {


    }
    goto __dyc_dummy_label;
  } else {
    if (foreign->n_fields != i) {
      {


      }
      goto __dyc_dummy_label;
    }
  }
  n_on_deletes = 0UL;
  n_on_updates = 0UL;
  ptr = __dyc_funcallvar_41;
  if (! success) {
    goto __dyc_dummy_label;
  }
  ptr = __dyc_funcallvar_42;
  if (! success) {
    {
    ptr = __dyc_funcallvar_43;
    }
    if (! success) {
      {


      }
      goto __dyc_dummy_label;
    }
    is_on_delete = 0UL;
    n_on_updates ++;
  } else {
    is_on_delete = 1UL;
    n_on_deletes ++;
  }
  ptr = __dyc_funcallvar_44;
  if (success) {
    goto __dyc_dummy_label;
  }
  ptr = __dyc_funcallvar_45;
  if (success) {
    if (is_on_delete) {
      foreign->type |= 1UL;
    } else {
      foreign->type |= 4UL;
    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ulint(ut_dbg_null_ptr);
  __dyc_printpre_byte(highest_id_so_far);
  __dyc_print_ptr__char(ptr);
  __dyc_print_ptr__char(start_of_latest_foreign);
  __dyc_print_ptr__typdef_FILE(ef);
  __dyc_print_ptr__char(constraint_name);
  __dyc_printpre_byte(error);
  __dyc_printpre_byte(i);
  __dyc_printpre_byte(is_on_delete);
  __dyc_printpre_byte(n_on_deletes);
  __dyc_printpre_byte(n_on_updates);
  __dyc_printpre_byte(tmp___11);
}
}
