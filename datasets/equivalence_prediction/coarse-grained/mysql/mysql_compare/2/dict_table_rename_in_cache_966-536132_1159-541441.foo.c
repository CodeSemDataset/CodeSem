#include "../../include/dycfoo.h"
#include "../../include/dict0dict.i.hd.c.h"
void __dyc_foo(void) 
{ ulint *ut_dbg_null_ptr ;
  dict_sys_t *dict_sys ;
  dict_foreign_t *foreign ;
  dict_index_t *index___0 ;
  ulint fold ;
  ulint old_size ;
  char *old_name ;
  ulint success ;
  ulint i ;
  dict_table_t *table2 ;
  ulint tmp ;
  hash_cell_t *tmp___0 ;
  int tmp___1 ;
  dict_col_t *tmp___2 ;
  hash_cell_t *cell3333 ;
  dict_table_t *struct3333 ;
  ulint tmp___3 ;
  ulint tmp___4 ;
  long tmp___5 ;
  long tmp___6 ;
  char *tmp___7 ;
  hash_cell_t *cell3333___0 ;
  dict_table_t *struct3333___0 ;
  ulint tmp___8 ;
  ulint tmp___9 ;
  ulint tmp___10 ;
  void *tmp___11 ;
  ulint tmp___12 ;
  ulint tmp___13 ;
  ulint db_len ;
  char *old_id ;
  ulint tmp___14 ;
  ulint tmp___15 ;
  void *tmp___16 ;
  ulint tmp___17 ;
  ulint tmp___18 ;
  ulint tmp___19 ;
  ulint tmp___20 ;
  ulint tmp___21 ;
  void *tmp___22 ;
  ulint tmp___23 ;
  ulint tmp___24 ;
  char const   *tmp___25 ;
  ulint tmp___26 ;
  ulint tmp___27 ;
  ulint tmp___28 ;
  int tmp___29 ;
  ulint tmp___30 ;
  int tmp___31 ;
  char *tmp___33 ;
  ulint tmp___34 ;
  void *tmp___35 ;
  ulint tmp___36 ;
  ulint tmp___37 ;
  dict_table_t *table ;
  ulint rename_also_foreigns ;
  ulint __dyc_funcallvar_2 ;
  ulint __dyc_funcallvar_3 ;
  hash_cell_t *__dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  ulint __dyc_funcallvar_6 ;
  dict_col_t *__dyc_funcallvar_7 ;
  ulint __dyc_funcallvar_8 ;
  ulint __dyc_funcallvar_9 ;
  hash_cell_t *__dyc_funcallvar_10 ;
  long __dyc_funcallvar_11 ;
  long __dyc_funcallvar_12 ;
  char *__dyc_funcallvar_13 ;
  char *__dyc_funcallvar_14 ;
  ulint __dyc_funcallvar_15 ;
  hash_cell_t *__dyc_funcallvar_16 ;
  ulint __dyc_funcallvar_17 ;
  dict_index_t *__dyc_funcallvar_18 ;
  dict_index_t *__dyc_funcallvar_19 ;
  ulint __dyc_funcallvar_20 ;
  ulint __dyc_funcallvar_21 ;
  ulint __dyc_funcallvar_22 ;
  void *__dyc_funcallvar_23 ;
  char *__dyc_funcallvar_24 ;
  char *__dyc_funcallvar_25 ;
  ulint __dyc_funcallvar_26 ;
  ulint __dyc_funcallvar_27 ;
  ulint __dyc_funcallvar_28 ;
  int __dyc_funcallvar_29 ;
  ulint __dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  ulint __dyc_funcallvar_32 ;
  ulint __dyc_funcallvar_33 ;
  ulint __dyc_funcallvar_34 ;
  ulint __dyc_funcallvar_35 ;
  void *__dyc_funcallvar_36 ;
  ulint __dyc_funcallvar_37 ;
  ulint __dyc_funcallvar_38 ;
  ulint __dyc_funcallvar_39 ;
  ulint __dyc_funcallvar_40 ;
  ulint __dyc_funcallvar_41 ;
  void *__dyc_funcallvar_42 ;
  char const   *__dyc_funcallvar_43 ;
  ulint __dyc_funcallvar_44 ;
  ulint __dyc_funcallvar_45 ;
  ulint __dyc_funcallvar_46 ;
  void *__dyc_funcallvar_47 ;

  {
  ut_dbg_null_ptr = __dyc_read_ptr__typdef_ulint();
  dict_sys = __dyc_read_ptr__typdef_dict_sys_t();
  old_size = (ulint )__dyc_readpre_byte();
  table = __dyc_read_ptr__typdef_dict_table_t();
  rename_also_foreigns = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__typdef_hash_cell_t();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__typdef_dict_col_t();
  __dyc_funcallvar_8 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_read_ptr__typdef_hash_cell_t();
  __dyc_funcallvar_11 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_read_ptr__char();
  __dyc_funcallvar_14 = __dyc_read_ptr__char();
  __dyc_funcallvar_15 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_read_ptr__typdef_hash_cell_t();
  __dyc_funcallvar_17 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_read_ptr__typdef_dict_index_t();
  __dyc_funcallvar_19 = __dyc_read_ptr__typdef_dict_index_t();
  __dyc_funcallvar_20 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_21 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_22 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_read_ptr__void();
  __dyc_funcallvar_24 = __dyc_read_ptr__char();
  __dyc_funcallvar_25 = __dyc_read_ptr__char();
  __dyc_funcallvar_26 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_27 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_28 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_29 = __dyc_readpre_byte();
  __dyc_funcallvar_30 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_33 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_34 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_35 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_36 = __dyc_read_ptr__void();
  __dyc_funcallvar_37 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_38 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_39 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_40 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_41 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_42 = __dyc_read_ptr__void();
  __dyc_funcallvar_43 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_44 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_45 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_46 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_47 = __dyc_read_ptr__void();
  foreign = 0;
  index___0 = 0;
  fold = 0;
  old_name = 0;
  success = 0;
  i = 0;
  table2 = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  cell3333 = 0;
  struct3333 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  cell3333___0 = 0;
  struct3333___0 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  db_len = 0;
  old_id = 0;
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
  tmp___24 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  tmp___28 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___37 = 0;
  fold = __dyc_funcallvar_2;
  tmp = __dyc_funcallvar_3;
  tmp___0 = __dyc_funcallvar_4;
  table2 = (dict_table_t *)tmp___0->node;
  while (1) {
    while_41_continue:  ;
    if (! ((unsigned long )table2 != (unsigned long )((void *)0))) {
      goto while_41_break;
    }
    {
    tmp___1 = __dyc_funcallvar_5;
    }
    if (tmp___1 == 0) {
      goto while_41_break;
    } else {
      table2 = (dict_table_t *)table2->name_hash;
    }
  }
  while_41_break:  ;
  if (table2) {
    {

    }
    goto __dyc_dummy_label;
  }
  if (table->space != 0UL) {
    if ((unsigned long )table->dir_path_of_temp_table != (unsigned long )((void *)0)) {
      {

      success = 0UL;
      }
    } else {
      {
      success = __dyc_funcallvar_6;
      }
    }
    if (! success) {
      goto __dyc_dummy_label;
    }
  }
  i = 0UL;
  while (1) {
    while_42_continue:  ;
    if (! (i < table->n_cols)) {
      goto while_42_break;
    }
    {
    tmp___2 = __dyc_funcallvar_7;

    i ++;
    }
  }
  while_42_break:  ;
  while (1) {
    while_43_continue:  ;
    {
    tmp___3 = __dyc_funcallvar_8;
    tmp___4 = __dyc_funcallvar_9;
    cell3333 = __dyc_funcallvar_10;
    }
    if ((unsigned long )cell3333->node == (unsigned long )table) {
      cell3333->node = table->name_hash;
    } else {
      struct3333 = (dict_table_t *)cell3333->node;
      {
      while (1) {
        while_44_continue:  ;
        if (! ((unsigned long )struct3333->name_hash != (unsigned long )table)) {
          goto while_44_break;
        }
        {
        while (1) {
          while_45_continue:  ;
          {
          tmp___5 = __dyc_funcallvar_11;
          }
          if (tmp___5) {
            {

            }
            if (*ut_dbg_null_ptr) {
              ut_dbg_null_ptr = (ulint *)((void *)0);
            }
          }
          {
          while (1) {
            while_46_continue:  ;
            {
            tmp___6 = __dyc_funcallvar_12;
            }
            if (tmp___6) {
              {

              }
            }
            goto while_46_break;
          }
          while_46_break:  ;
          }
          goto while_45_break;
        }
        while_45_break:  ;
        }
        struct3333 = (dict_table_t *)struct3333->name_hash;
      }
      while_44_break:  ;
      }
      struct3333->name_hash = table->name_hash;
    }
    goto while_43_break;
  }
  while_43_break:  ;
  old_name = __dyc_funcallvar_13;
  tmp___7 = __dyc_funcallvar_14;
  table->name = (char const   *)tmp___7;
  while (1) {
    while_47_continue:  ;
    {
    table->name_hash = (void *)0;
    tmp___8 = __dyc_funcallvar_15;
    cell3333___0 = __dyc_funcallvar_16;
    }
    if ((unsigned long )cell3333___0->node == (unsigned long )((void *)0)) {
      cell3333___0->node = (void *)table;
    } else {
      struct3333___0 = (dict_table_t *)cell3333___0->node;
      {
      while (1) {
        while_48_continue:  ;
        if (! ((unsigned long )struct3333___0->name_hash != (unsigned long )((void *)0))) {
          goto while_48_break;
        }
        struct3333___0 = (dict_table_t *)struct3333___0->name_hash;
      }
      while_48_break:  ;
      }
      struct3333___0->name_hash = (void *)table;
    }
    goto while_47_break;
  }
  while_47_break:  ;
  tmp___9 = __dyc_funcallvar_17;
  dict_sys->size += tmp___9 - old_size;
  index___0 = __dyc_funcallvar_18;
  while (1) {
    while_49_continue:  ;
    if (! ((unsigned long )index___0 != (unsigned long )((void *)0))) {
      goto while_49_break;
    }
    {
    index___0->table_name = table->name;
    index___0 = __dyc_funcallvar_19;
    }
  }
  while_49_break:  ;
  if (! rename_also_foreigns) {
    foreign = table->foreign_list.end;
    {
    while (1) {
      while_50_continue:  ;
      if (! ((unsigned long )foreign != (unsigned long )((void *)0))) {
        goto while_50_break;
      }
      {

      foreign = table->foreign_list.end;
      }
    }
    while_50_break:  ;
    }
    foreign = table->referenced_list.start;
    {
    while (1) {
      while_51_continue:  ;
      if (! ((unsigned long )foreign != (unsigned long )((void *)0))) {
        goto while_51_break;
      }
      foreign->referenced_table = (dict_table_t *)((void *)0);
      foreign->referenced_index = (dict_index_t *)((void *)0);
      foreign = foreign->referenced_list.next;
    }
    while_51_break:  ;
    }
    table->referenced_list.count = 0UL;
    table->referenced_list.start = (dict_foreign_t *)((void *)0);
    table->referenced_list.end = (dict_foreign_t *)((void *)0);
    goto __dyc_dummy_label;
  }
  foreign = table->foreign_list.start;
  while (1) {
    while_52_continue:  ;
    if (! ((unsigned long )foreign != (unsigned long )((void *)0))) {
      goto while_52_break;
    }
    {
    tmp___12 = __dyc_funcallvar_20;
    tmp___13 = __dyc_funcallvar_21;
    }
    if (tmp___12 < tmp___13) {
      {
      tmp___10 = __dyc_funcallvar_22;
      tmp___11 = __dyc_funcallvar_23;
      foreign->foreign_table_name = (char *)tmp___11;
      }
    }
    {

    tmp___33 = __dyc_funcallvar_24;
    }
    if (tmp___33) {
      {
      old_id = __dyc_funcallvar_25;
      tmp___26 = __dyc_funcallvar_26;
      tmp___27 = __dyc_funcallvar_27;
      }
      if (tmp___26 > tmp___27 + (sizeof(char [7]) - 1UL)) {
        {
        tmp___28 = __dyc_funcallvar_28;
        tmp___29 = __dyc_funcallvar_29;
        }
        if (0 == tmp___29) {
          {
          tmp___30 = __dyc_funcallvar_30;
          tmp___31 = __dyc_funcallvar_31;
          }
          if (0 == tmp___31) {
            {
            tmp___17 = __dyc_funcallvar_32;
            tmp___18 = __dyc_funcallvar_33;
            }
            if (tmp___17 > tmp___18) {
              {
              tmp___14 = __dyc_funcallvar_34;
              tmp___15 = __dyc_funcallvar_35;
              tmp___16 = __dyc_funcallvar_36;
              foreign->id = (char *)tmp___16;
              }
            }
            {

            tmp___19 = __dyc_funcallvar_37;

            }
          } else {
            goto _L___0;
          }
        } else {
          goto _L___0;
        }
      } else {
        _L___0:  
        {
        tmp___20 = __dyc_funcallvar_38;
        db_len = tmp___20 + 1UL;
        tmp___23 = __dyc_funcallvar_39;
        tmp___24 = __dyc_funcallvar_40;
        }
        if (tmp___23 > tmp___24) {
          {
          tmp___21 = __dyc_funcallvar_41;
          tmp___22 = __dyc_funcallvar_42;
          foreign->id = (char *)tmp___22;
          }
        }
        {

        tmp___25 = __dyc_funcallvar_43;

        }
      }
      {

      }
    }
    foreign = foreign->foreign_list.next;
  }
  while_52_break:  ;
  foreign = table->referenced_list.start;
  while (1) {
    while_53_continue:  ;
    if (! ((unsigned long )foreign != (unsigned long )((void *)0))) {
      goto while_53_break;
    }
    {
    tmp___36 = __dyc_funcallvar_44;
    tmp___37 = __dyc_funcallvar_45;
    }
    if (tmp___36 < tmp___37) {
      {
      tmp___34 = __dyc_funcallvar_46;
      tmp___35 = __dyc_funcallvar_47;
      foreign->referenced_table_name = (char *)tmp___35;
      }
    }
    {

    foreign = foreign->referenced_list.next;
    }
  }
  while_53_break:  ;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ulint(ut_dbg_null_ptr);
  __dyc_printpre_byte(fold);
  __dyc_print_ptr__char(old_name);
  __dyc_printpre_byte(tmp);
  __dyc_print_ptr__typdef_dict_col_t(tmp___2);
  __dyc_printpre_byte(tmp___3);
  __dyc_printpre_byte(tmp___4);
  __dyc_printpre_byte(tmp___8);
  __dyc_printpre_byte(tmp___10);
  __dyc_printpre_byte(db_len);
  __dyc_print_ptr__char(old_id);
  __dyc_printpre_byte(tmp___14);
  __dyc_printpre_byte(tmp___15);
  __dyc_printpre_byte(tmp___19);
  __dyc_printpre_byte(tmp___21);
  __dyc_print_ptr__char(tmp___25);
  __dyc_printpre_byte(tmp___28);
  __dyc_printpre_byte(tmp___30);
  __dyc_printpre_byte(tmp___34);
}
}
