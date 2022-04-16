#include "../../include/dycfoo.h"
#include "../../include/dict0boot.i.hd.c.h"
void __dyc_foo(void) 
{ ulint *ut_dbg_null_ptr ;
  dict_sys_t *dict_sys ;
  dict_table_t *table ;
  dict_index_t *index___0 ;
  dict_hdr_t *dict_hdr ;
  ulint success ;
  dulint tmp ;
  dulint tmp___0 ;
  ulint tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  ulint tmp___4 ;
  long tmp___5 ;
  long tmp___6 ;
  ulint tmp___7 ;
  long tmp___8 ;
  long tmp___9 ;
  ulint tmp___10 ;
  long tmp___11 ;
  long tmp___12 ;
  ulint tmp___13 ;
  long tmp___14 ;
  long tmp___15 ;
  dict_hdr_t *__dyc_funcallvar_1 ;
  dulint __dyc_funcallvar_2 ;
  dulint __dyc_funcallvar_3 ;
  dulint __dyc_funcallvar_4 ;
  dict_table_t *__dyc_funcallvar_5 ;
  dulint __dyc_funcallvar_6 ;
  dict_index_t *__dyc_funcallvar_7 ;
  dulint __dyc_funcallvar_8 ;
  ulint __dyc_funcallvar_9 ;
  ulint __dyc_funcallvar_10 ;
  long __dyc_funcallvar_11 ;
  long __dyc_funcallvar_12 ;
  dict_index_t *__dyc_funcallvar_13 ;
  dulint __dyc_funcallvar_14 ;
  ulint __dyc_funcallvar_15 ;
  ulint __dyc_funcallvar_16 ;
  long __dyc_funcallvar_17 ;
  long __dyc_funcallvar_18 ;
  dict_table_t *__dyc_funcallvar_19 ;
  dulint __dyc_funcallvar_20 ;
  dict_index_t *__dyc_funcallvar_21 ;
  dulint __dyc_funcallvar_22 ;
  ulint __dyc_funcallvar_23 ;
  ulint __dyc_funcallvar_24 ;
  long __dyc_funcallvar_25 ;
  long __dyc_funcallvar_26 ;
  dict_table_t *__dyc_funcallvar_27 ;
  dulint __dyc_funcallvar_28 ;
  dict_index_t *__dyc_funcallvar_29 ;
  dulint __dyc_funcallvar_30 ;
  ulint __dyc_funcallvar_31 ;
  ulint __dyc_funcallvar_32 ;
  long __dyc_funcallvar_33 ;
  long __dyc_funcallvar_34 ;
  dict_table_t *__dyc_funcallvar_35 ;
  dulint __dyc_funcallvar_36 ;
  dict_index_t *__dyc_funcallvar_37 ;
  dulint __dyc_funcallvar_38 ;
  ulint __dyc_funcallvar_39 ;
  ulint __dyc_funcallvar_40 ;
  long __dyc_funcallvar_41 ;
  long __dyc_funcallvar_42 ;

  {
  ut_dbg_null_ptr = __dyc_read_ptr__typdef_ulint();
  dict_sys = __dyc_read_ptr__typdef_dict_sys_t();
  __dyc_funcallvar_1 = __dyc_read_ptr__typdef_dict_hdr_t();
  __dyc_funcallvar_2 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_3 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_4 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_5 = __dyc_read_ptr__typdef_dict_table_t();
  __dyc_funcallvar_6 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_7 = __dyc_read_ptr__typdef_dict_index_t();
  __dyc_funcallvar_8 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_9 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_10 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_read_ptr__typdef_dict_index_t();
  __dyc_funcallvar_14 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_15 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_16 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_17 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_18 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_read_ptr__typdef_dict_table_t();
  __dyc_funcallvar_20 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_21 = __dyc_read_ptr__typdef_dict_index_t();
  __dyc_funcallvar_22 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_23 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_24 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_25 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_26 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_27 = __dyc_read_ptr__typdef_dict_table_t();
  __dyc_funcallvar_28 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_29 = __dyc_read_ptr__typdef_dict_index_t();
  __dyc_funcallvar_30 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_31 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_32 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_33 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_34 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_35 = __dyc_read_ptr__typdef_dict_table_t();
  __dyc_funcallvar_36 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_37 = __dyc_read_ptr__typdef_dict_index_t();
  __dyc_funcallvar_38 = __dyc_read_comp_91dulint_struct();
  __dyc_funcallvar_39 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_40 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_41 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_42 = (long )__dyc_readpre_byte();
  table = 0;
  index___0 = 0;
  dict_hdr = 0;
  success = 0;
  memset(& tmp, 0, sizeof(dulint ));
  memset(& tmp___0, 0, sizeof(dulint ));
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
  dict_hdr = __dyc_funcallvar_1;
  tmp = __dyc_funcallvar_2;
  tmp___0 = __dyc_funcallvar_3;
  dict_sys->row_id = __dyc_funcallvar_4;
  table = __dyc_funcallvar_5;








  table->id = __dyc_funcallvar_6;

  dict_sys->sys_tables = table;
  index___0 = __dyc_funcallvar_7;

  index___0->id = __dyc_funcallvar_8;
  tmp___1 = __dyc_funcallvar_9;
  success = __dyc_funcallvar_10;
  while (1) {
    while_7_continue:  ;
    {
    tmp___2 = __dyc_funcallvar_11;
    }
    if (tmp___2) {
      {

      }
      if (*ut_dbg_null_ptr) {
        ut_dbg_null_ptr = (ulint *)((void *)0);
      }
    }
    {
    while (1) {
      while_8_continue:  ;
      {
      tmp___3 = __dyc_funcallvar_12;
      }
      if (tmp___3) {
        {

        }
      }
      goto while_8_break;
    }
    while_8_break:  ;
    }
    goto while_7_break;
  }
  while_7_break:  ;
  index___0 = __dyc_funcallvar_13;

  index___0->id = __dyc_funcallvar_14;
  tmp___4 = __dyc_funcallvar_15;
  success = __dyc_funcallvar_16;
  while (1) {
    while_9_continue:  ;
    {
    tmp___5 = __dyc_funcallvar_17;
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
      while_10_continue:  ;
      {
      tmp___6 = __dyc_funcallvar_18;
      }
      if (tmp___6) {
        {

        }
      }
      goto while_10_break;
    }
    while_10_break:  ;
    }
    goto while_9_break;
  }
  while_9_break:  ;
  table = __dyc_funcallvar_19;







  table->id = __dyc_funcallvar_20;

  dict_sys->sys_columns = table;
  index___0 = __dyc_funcallvar_21;


  index___0->id = __dyc_funcallvar_22;
  tmp___7 = __dyc_funcallvar_23;
  success = __dyc_funcallvar_24;
  while (1) {
    while_11_continue:  ;
    {
    tmp___8 = __dyc_funcallvar_25;
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
      while_12_continue:  ;
      {
      tmp___9 = __dyc_funcallvar_26;
      }
      if (tmp___9) {
        {

        }
      }
      goto while_12_break;
    }
    while_12_break:  ;
    }
    goto while_11_break;
  }
  while_11_break:  ;
  table = __dyc_funcallvar_27;







  table->id = __dyc_funcallvar_28;

  dict_sys->sys_indexes = table;
  index___0 = __dyc_funcallvar_29;


  index___0->id = __dyc_funcallvar_30;
  tmp___10 = __dyc_funcallvar_31;
  success = __dyc_funcallvar_32;
  while (1) {
    while_13_continue:  ;
    {
    tmp___11 = __dyc_funcallvar_33;
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
      while_14_continue:  ;
      {
      tmp___12 = __dyc_funcallvar_34;
      }
      if (tmp___12) {
        {

        }
      }
      goto while_14_break;
    }
    while_14_break:  ;
    }
    goto while_13_break;
  }
  while_13_break:  ;
  table = __dyc_funcallvar_35;



  table->id = __dyc_funcallvar_36;

  dict_sys->sys_fields = table;
  index___0 = __dyc_funcallvar_37;


  index___0->id = __dyc_funcallvar_38;
  tmp___13 = __dyc_funcallvar_39;
  success = __dyc_funcallvar_40;
  while (1) {
    while_15_continue:  ;
    {
    tmp___14 = __dyc_funcallvar_41;
    }
    if (tmp___14) {
      {

      }
      if (*ut_dbg_null_ptr) {
        ut_dbg_null_ptr = (ulint *)((void *)0);
      }
    }
    {
    while (1) {
      while_16_continue:  ;
      {
      tmp___15 = __dyc_funcallvar_42;
      }
      if (tmp___15) {
        {

        }
      }
      goto while_16_break;
    }
    while_16_break:  ;
    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ulint(ut_dbg_null_ptr);
  __dyc_print_ptr__typdef_dict_hdr_t(dict_hdr);
  __dyc_printpre_byte(success);
  __dyc_print_comp_91dulint_struct(tmp);
  __dyc_print_comp_91dulint_struct(tmp___0);
  __dyc_printpre_byte(tmp___1);
  __dyc_printpre_byte(tmp___4);
  __dyc_printpre_byte(tmp___7);
  __dyc_printpre_byte(tmp___10);
  __dyc_printpre_byte(tmp___13);
}
}
