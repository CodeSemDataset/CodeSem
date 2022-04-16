#include "../../include/dycfoo.h"
#include "../../include/dict0load.i.hd.c.h"
void __dyc_foo(void) 
{ ulint *ut_dbg_null_ptr ;
  ulint ibd_file_missing ;
  dict_table_t *table ;
  dict_table_t *sys_tables ;
  dict_index_t *sys_index ;
  dtuple_t *tuple ;
  dfield_t *dfield ;
  rec_t *rec ;
  unsigned char *field ;
  ulint len ;
  ulint space ;
  ulint n_cols ;
  long tmp ;
  long tmp___0 ;
  ulint tmp___1 ;
  ulint tmp___2 ;
  ulint tmp___3 ;
  ulint tmp___4 ;
  int tmp___5 ;
  dict_field_t *tmp___6 ;
  dict_col_t *tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  long tmp___10 ;
  long tmp___11 ;
  ulint tmp___12 ;
  ulint tmp___13 ;
  dict_field_t *tmp___14 ;
  dict_col_t *tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  long tmp___18 ;
  long tmp___19 ;
  dict_field_t *tmp___20 ;
  dict_col_t *tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  long tmp___24 ;
  long tmp___25 ;
  long tmp___26 ;
  long __dyc_funcallvar_3 ;
  long __dyc_funcallvar_4 ;
  dtuple_t *__dyc_funcallvar_5 ;
  dfield_t *__dyc_funcallvar_6 ;
  ulint __dyc_funcallvar_7 ;
  rec_t *__dyc_funcallvar_8 ;
  ulint __dyc_funcallvar_9 ;
  ulint __dyc_funcallvar_10 ;
  unsigned char *__dyc_funcallvar_11 ;
  ulint __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  dict_field_t *__dyc_funcallvar_14 ;
  dict_col_t *__dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  long __dyc_funcallvar_17 ;
  long __dyc_funcallvar_18 ;
  unsigned char *__dyc_funcallvar_19 ;
  ulint __dyc_funcallvar_20 ;
  ulint __dyc_funcallvar_21 ;
  ulint __dyc_funcallvar_22 ;
  dict_field_t *__dyc_funcallvar_23 ;
  dict_col_t *__dyc_funcallvar_24 ;
  int __dyc_funcallvar_25 ;
  long __dyc_funcallvar_26 ;
  long __dyc_funcallvar_27 ;
  unsigned char *__dyc_funcallvar_28 ;
  ulint __dyc_funcallvar_29 ;
  dict_table_t *__dyc_funcallvar_30 ;
  dict_field_t *__dyc_funcallvar_31 ;
  dict_col_t *__dyc_funcallvar_32 ;
  int __dyc_funcallvar_33 ;
  long __dyc_funcallvar_34 ;
  long __dyc_funcallvar_35 ;
  unsigned char *__dyc_funcallvar_36 ;
  dulint __dyc_funcallvar_37 ;
  unsigned char *__dyc_funcallvar_38 ;
  ulint __dyc_funcallvar_39 ;
  long __dyc_funcallvar_40 ;

  {
  ut_dbg_null_ptr = __dyc_read_ptr__typdef_ulint();
  ibd_file_missing = (ulint )__dyc_readpre_byte();
  sys_tables = __dyc_read_ptr__typdef_dict_table_t();
  len = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__typdef_dtuple_t();
  __dyc_funcallvar_6 = __dyc_read_ptr__typdef_dfield_t();
  __dyc_funcallvar_7 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_9 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_10 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_12 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_read_ptr__typdef_dict_field_t();
  __dyc_funcallvar_15 = __dyc_read_ptr__typdef_dict_col_t();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_18 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_19 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_20 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_21 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_22 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_read_ptr__typdef_dict_field_t();
  __dyc_funcallvar_24 = __dyc_read_ptr__typdef_dict_col_t();
  __dyc_funcallvar_25 = __dyc_readpre_byte();
  __dyc_funcallvar_26 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_27 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_28 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_29 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_30 = __dyc_read_ptr__typdef_dict_table_t();
  __dyc_funcallvar_31 = __dyc_read_ptr__typdef_dict_field_t();
  __dyc_funcallvar_32 = __dyc_read_ptr__typdef_dict_col_t();
  __dyc_funcallvar_33 = __dyc_readpre_byte();
  __dyc_funcallvar_34 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_35 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_36 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_37 = __dyc_read_comp_100dulint_struct();
  __dyc_funcallvar_38 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_39 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_40 = (long )__dyc_readpre_byte();
  table = 0;
  sys_index = 0;
  tuple = 0;
  dfield = 0;
  rec = 0;
  field = 0;
  space = 0;
  n_cols = 0;
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
  tmp___24 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  sys_index = sys_tables->indexes.start;
  while (1) {
    while_51_continue:  ;
    {
    tmp = __dyc_funcallvar_3;
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
      while_52_continue:  ;
      {
      tmp___0 = __dyc_funcallvar_4;
      }
      if (tmp___0) {
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
  tuple = __dyc_funcallvar_5;
  dfield = __dyc_funcallvar_6;
  tmp___1 = __dyc_funcallvar_7;



  rec = __dyc_funcallvar_8;
  tmp___2 = __dyc_funcallvar_9;
  if (tmp___2) {
    {
    tmp___3 = __dyc_funcallvar_10;
    }
    if (tmp___3) {
      err_exit: 
      {



      }
      goto __dyc_dummy_label;
    }
  } else {
    goto err_exit;
  }
  field = __dyc_funcallvar_11;
  tmp___4 = __dyc_funcallvar_12;
  if (len != tmp___4) {
    goto err_exit;
  } else {
    {
    tmp___5 = __dyc_funcallvar_13;
    }
    if (tmp___5 != 0) {
      goto err_exit;
    }
  }
  while (1) {
    while_53_continue:  ;
    {
    tmp___6 = __dyc_funcallvar_14;
    tmp___7 = __dyc_funcallvar_15;
    tmp___8 = __dyc_funcallvar_16;
    }
    if ((unsigned long )(0 == tmp___8)) {
      tmp___9 = 0;
    } else {
      tmp___9 = 1;
    }
    {
    tmp___10 = __dyc_funcallvar_17;
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
      while_54_continue:  ;
      {
      tmp___11 = __dyc_funcallvar_18;
      }
      if (tmp___11) {
        {

        }
      }
      goto while_54_break;
    }
    while_54_break:  ;
    }
    goto while_53_break;
  }
  while_53_break:  ;
  field = __dyc_funcallvar_19;
  space = __dyc_funcallvar_20;
  if (space != 0UL) {
    {
    tmp___13 = __dyc_funcallvar_21;
    }
    if (! tmp___13) {
      {


      tmp___12 = __dyc_funcallvar_22;
      }
      if (! tmp___12) {
        ibd_file_missing = 1UL;
      }
    }
  }
  while (1) {
    while_55_continue:  ;
    {
    tmp___14 = __dyc_funcallvar_23;
    tmp___15 = __dyc_funcallvar_24;
    tmp___16 = __dyc_funcallvar_25;
    }
    if ((unsigned long )(0 == tmp___16)) {
      tmp___17 = 0;
    } else {
      tmp___17 = 1;
    }
    {
    tmp___18 = __dyc_funcallvar_26;
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
      while_56_continue:  ;
      {
      tmp___19 = __dyc_funcallvar_27;
      }
      if (tmp___19) {
        {

        }
      }
      goto while_56_break;
    }
    while_56_break:  ;
    }
    goto while_55_break;
  }
  while_55_break:  ;
  field = __dyc_funcallvar_28;
  n_cols = __dyc_funcallvar_29;
  table = __dyc_funcallvar_30;
  table->ibd_file_missing = ibd_file_missing;
  while (1) {
    while_57_continue:  ;
    {
    tmp___20 = __dyc_funcallvar_31;
    tmp___21 = __dyc_funcallvar_32;
    tmp___22 = __dyc_funcallvar_33;
    }
    if ((unsigned long )(0 == tmp___22)) {
      tmp___23 = 0;
    } else {
      tmp___23 = 1;
    }
    {
    tmp___24 = __dyc_funcallvar_34;
    }
    if (tmp___24) {
      {

      }
      if (*ut_dbg_null_ptr) {
        ut_dbg_null_ptr = (ulint *)((void *)0);
      }
    }
    {
    while (1) {
      while_58_continue:  ;
      {
      tmp___25 = __dyc_funcallvar_35;
      }
      if (tmp___25) {
        {

        }
      }
      goto while_58_break;
    }
    while_58_break:  ;
    }
    goto while_57_break;
  }
  while_57_break:  ;
  field = __dyc_funcallvar_36;
  table->id = __dyc_funcallvar_37;
  field = __dyc_funcallvar_38;
  table->type = __dyc_funcallvar_39;
  tmp___26 = __dyc_funcallvar_40;
  if (tmp___26) {
    {


    }
    goto err_exit;
  }
  if (table->type == 2UL) {
    {
    while (1) {
      while_59_continue:  ;
      {

      }
      if (*ut_dbg_null_ptr) {
        ut_dbg_null_ptr = (ulint *)((void *)0);
      }
      goto while_59_break;
    }
    while_59_break:  ;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ulint(ut_dbg_null_ptr);
  __dyc_print_ptr__typdef_dict_index_t(sys_index);
  __dyc_print_ptr__typdef_dtuple_t(tuple);
  __dyc_print_ptr__typdef_dfield_t(dfield);
  __dyc_print_ptr__typdef_rec_t(rec);
  __dyc_print_ptr__char(field);
  __dyc_printpre_byte(n_cols);
  __dyc_printpre_byte(tmp___1);
  __dyc_print_ptr__typdef_dict_field_t(tmp___6);
  __dyc_print_ptr__typdef_dict_col_t(tmp___7);
  __dyc_printpre_byte(tmp___9);
  __dyc_print_ptr__typdef_dict_field_t(tmp___14);
  __dyc_print_ptr__typdef_dict_col_t(tmp___15);
  __dyc_printpre_byte(tmp___17);
  __dyc_print_ptr__typdef_dict_field_t(tmp___20);
  __dyc_print_ptr__typdef_dict_col_t(tmp___21);
  __dyc_printpre_byte(tmp___23);
}
}
