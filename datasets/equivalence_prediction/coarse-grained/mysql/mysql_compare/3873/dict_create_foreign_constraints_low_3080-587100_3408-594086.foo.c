#include "../../include/dycfoo.h"
#include "../../include/dict0dict.i.hd.c.h"
void __dyc_foo(void) 
{ ulint *ut_dbg_null_ptr ;
  dict_table_t *table ;
  dict_table_t *referenced_table ;
  dict_index_t *index___0 ;
  dict_foreign_t *foreign ;
  char const   *ptr ;
  char const   *constraint_name ;
  ulint success ;
  ulint i ;
  ulint j ;
  ulint is_on_delete ;
  ulint n_on_deletes ;
  ulint n_on_updates ;
  long tmp___7 ;
  long tmp___8 ;
  char *tmp___10 ;
  ulint db_len ;
  size_t tmp___11 ;
  void *tmp___12 ;
  void *tmp___13 ;
  char *tmp___14 ;
  dtype_t *tmp___15 ;
  long tmp___16 ;
  long tmp___17 ;
  trx_t *trx ;
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
  char const   *__dyc_funcallvar_46 ;
  char const   *__dyc_funcallvar_47 ;
  char const   *__dyc_funcallvar_48 ;
  char const   *__dyc_funcallvar_49 ;
  dtype_t *__dyc_funcallvar_50 ;
  dict_index_t *__dyc_funcallvar_51 ;
  long __dyc_funcallvar_52 ;
  long __dyc_funcallvar_53 ;

  {
  ut_dbg_null_ptr = __dyc_read_ptr__typdef_ulint();
  table = __dyc_read_ptr__typdef_dict_table_t();
  referenced_table = __dyc_read_ptr__typdef_dict_table_t();
  constraint_name = (char const   *)__dyc_read_ptr__char();
  success = (ulint )__dyc_readpre_byte();
  trx = __dyc_read_ptr__typdef_trx_t();
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
  __dyc_funcallvar_46 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_47 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_48 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_49 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_50 = __dyc_read_ptr__typdef_dtype_t();
  __dyc_funcallvar_51 = __dyc_read_ptr__typdef_dict_index_t();
  __dyc_funcallvar_52 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_53 = (long )__dyc_readpre_byte();
  index___0 = 0;
  foreign = 0;
  ptr = 0;
  i = 0;
  j = 0;
  is_on_delete = 0;
  n_on_deletes = 0;
  n_on_updates = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___10 = 0;
  db_len = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
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
    goto try_find_index;
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
  ptr = __dyc_funcallvar_46;
  if (success) {
    {
    ptr = __dyc_funcallvar_47;
    }
    if (! success) {
      {


      }
      goto __dyc_dummy_label;
    }
    if (is_on_delete) {
      foreign->type |= 16UL;
    } else {
      foreign->type |= 32UL;
    }
    goto __dyc_dummy_label;
  }
  ptr = __dyc_funcallvar_48;
  if (! success) {
    {


    }
    goto __dyc_dummy_label;
  }
  ptr = __dyc_funcallvar_49;
  if (! success) {
    {


    }
    goto __dyc_dummy_label;
  }
  j = 0UL;
  while (1) {
    while_156_continue:  ;
    if (! (j < foreign->n_fields)) {
      goto while_156_break;
    }
    {
    tmp___15 = __dyc_funcallvar_50;
    }
    if (tmp___15->prtype & 256UL) {
      {





      }
      goto __dyc_dummy_label;
    }
    j ++;
  }
  while_156_break:  ;
  if (is_on_delete) {
    foreign->type |= 2UL;
  } else {
    foreign->type |= 8UL;
  }
  goto __dyc_dummy_label;
  try_find_index: 
  if (n_on_deletes > 1UL) {
    goto _L___1;
  } else {
    if (n_on_updates > 1UL) {
      _L___1:  
      {





      }
      goto __dyc_dummy_label;
    }
  }
  if (referenced_table) {
    {
    index___0 = __dyc_funcallvar_51;
    }
    if (! index___0) {
      {





      }
      goto __dyc_dummy_label;
    }
  } else {
    {
    while (1) {
      while_157_continue:  ;
      {
      tmp___16 = __dyc_funcallvar_52;
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
        while_158_continue:  ;
        {
        tmp___17 = __dyc_funcallvar_53;
        }
        if (tmp___17) {
          {

          }
        }
        goto while_158_break;
      }
      while_158_break:  ;
      }
      goto while_157_break;
    }
    while_157_break:  ;
    }
    index___0 = (dict_index_t *)((void *)0);
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ulint(ut_dbg_null_ptr);
  __dyc_print_ptr__typdef_dict_index_t(index___0);
  __dyc_print_ptr__char(ptr);
  __dyc_printpre_byte(i);
  __dyc_printpre_byte(is_on_delete);
  __dyc_printpre_byte(n_on_deletes);
  __dyc_printpre_byte(n_on_updates);
  __dyc_printpre_byte(tmp___11);
}
}
