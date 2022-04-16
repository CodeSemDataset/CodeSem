#include "../../include/dycfoo.h"
#include "../../include/dict0load.i.hd.c.h"
void __dyc_foo(void) 
{ ulint *ut_dbg_null_ptr ;
  dict_sys_t *dict_sys ;
  dict_index_t *index___0 ;
  dtuple_t *tuple ;
  dfield_t *dfield ;
  rec_t *rec ;
  unsigned char *field ;
  ulint name_len ;
  char *name_buf ;
  ulint type ;
  ulint space ;
  ulint page_no ;
  ulint n_fields ;
  unsigned char *buf ;
  ulint is_sys_table ;
  dulint id ;
  void *tmp___3 ;
  ulint tmp___4 ;
  int tmp___5 ;
  ulint tmp___6 ;
  dict_field_t *tmp___7 ;
  dict_col_t *tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  long tmp___11 ;
  long tmp___12 ;
  dict_field_t *tmp___13 ;
  dict_col_t *tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  long tmp___17 ;
  long tmp___18 ;
  dict_index_t *tmp___19 ;
  int tmp___20 ;
  dict_table_t *table ;
  dtuple_t *__dyc_funcallvar_6 ;
  dfield_t *__dyc_funcallvar_7 ;
  void *__dyc_funcallvar_8 ;
  ulint __dyc_funcallvar_9 ;
  rec_t *__dyc_funcallvar_10 ;
  unsigned char *__dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  ulint __dyc_funcallvar_13 ;
  unsigned char *__dyc_funcallvar_14 ;
  dulint __dyc_funcallvar_15 ;
  dict_field_t *__dyc_funcallvar_16 ;
  dict_col_t *__dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  long __dyc_funcallvar_19 ;
  long __dyc_funcallvar_20 ;
  unsigned char *__dyc_funcallvar_21 ;
  char *__dyc_funcallvar_22 ;
  unsigned char *__dyc_funcallvar_23 ;
  ulint __dyc_funcallvar_24 ;
  unsigned char *__dyc_funcallvar_25 ;
  ulint __dyc_funcallvar_26 ;
  unsigned char *__dyc_funcallvar_27 ;
  ulint __dyc_funcallvar_28 ;
  dict_field_t *__dyc_funcallvar_29 ;
  dict_col_t *__dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  long __dyc_funcallvar_32 ;
  long __dyc_funcallvar_33 ;
  unsigned char *__dyc_funcallvar_34 ;
  ulint __dyc_funcallvar_35 ;
  dict_index_t *__dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  dict_index_t *__dyc_funcallvar_38 ;
  dict_index_t *__dyc_funcallvar_39 ;
  dict_index_t *__dyc_funcallvar_40 ;
  dict_index_t *__dyc_funcallvar_41 ;

  {
  ut_dbg_null_ptr = __dyc_read_ptr__typdef_ulint();
  dict_sys = __dyc_read_ptr__typdef_dict_sys_t();
  name_len = (ulint )__dyc_readpre_byte();
  is_sys_table = (ulint )__dyc_readpre_byte();
  table = __dyc_read_ptr__typdef_dict_table_t();
  __dyc_funcallvar_6 = __dyc_read_ptr__typdef_dtuple_t();
  __dyc_funcallvar_7 = __dyc_read_ptr__typdef_dfield_t();
  __dyc_funcallvar_8 = __dyc_read_ptr__void();
  __dyc_funcallvar_9 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_11 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_14 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_15 = __dyc_read_comp_100dulint_struct();
  __dyc_funcallvar_16 = __dyc_read_ptr__typdef_dict_field_t();
  __dyc_funcallvar_17 = __dyc_read_ptr__typdef_dict_col_t();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_20 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_21 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_22 = __dyc_read_ptr__char();
  __dyc_funcallvar_23 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_24 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_25 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_26 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_27 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_28 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_29 = __dyc_read_ptr__typdef_dict_field_t();
  __dyc_funcallvar_30 = __dyc_read_ptr__typdef_dict_col_t();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_33 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_34 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_35 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_36 = __dyc_read_ptr__typdef_dict_index_t();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_read_ptr__typdef_dict_index_t();
  __dyc_funcallvar_39 = __dyc_read_ptr__typdef_dict_index_t();
  __dyc_funcallvar_40 = __dyc_read_ptr__typdef_dict_index_t();
  __dyc_funcallvar_41 = __dyc_read_ptr__typdef_dict_index_t();
  index___0 = 0;
  tuple = 0;
  dfield = 0;
  rec = 0;
  field = 0;
  name_buf = 0;
  type = 0;
  space = 0;
  page_no = 0;
  n_fields = 0;
  buf = 0;
  memset(& id, 0, sizeof(dulint ));
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
  tuple = __dyc_funcallvar_6;
  dfield = __dyc_funcallvar_7;
  tmp___3 = __dyc_funcallvar_8;
  buf = (unsigned char *)tmp___3;




  while (1) {
    while_46_continue:  ;
    {
    tmp___4 = __dyc_funcallvar_9;
    }
    if (! tmp___4) {
      goto __dyc_dummy_label;
    }
    {
    rec = __dyc_funcallvar_10;
    field = __dyc_funcallvar_11;
    tmp___5 = __dyc_funcallvar_12;
    }
    if (tmp___5 != 0) {
      goto __dyc_dummy_label;
    }
    {
    tmp___6 = __dyc_funcallvar_13;
    }
    if (tmp___6) {
      {



      }
      goto __dyc_dummy_label;
    }
    {
    field = __dyc_funcallvar_14;
    id = __dyc_funcallvar_15;
    }
    {
    while (1) {
      while_47_continue:  ;
      {
      tmp___7 = __dyc_funcallvar_16;
      tmp___8 = __dyc_funcallvar_17;
      tmp___9 = __dyc_funcallvar_18;
      }
      if ((unsigned long )(0 == tmp___9)) {
        tmp___10 = 0;
      } else {
        tmp___10 = 1;
      }
      {
      tmp___11 = __dyc_funcallvar_19;
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
        while_48_continue:  ;
        {
        tmp___12 = __dyc_funcallvar_20;
        }
        if (tmp___12) {
          {

          }
        }
        goto while_48_break;
      }
      while_48_break:  ;
      }
      goto while_47_break;
    }
    while_47_break:  ;
    }
    {
    field = __dyc_funcallvar_21;
    name_buf = __dyc_funcallvar_22;
    field = __dyc_funcallvar_23;
    n_fields = __dyc_funcallvar_24;
    field = __dyc_funcallvar_25;
    type = __dyc_funcallvar_26;
    field = __dyc_funcallvar_27;
    space = __dyc_funcallvar_28;
    }
    {
    while (1) {
      while_49_continue:  ;
      {
      tmp___13 = __dyc_funcallvar_29;
      tmp___14 = __dyc_funcallvar_30;
      tmp___15 = __dyc_funcallvar_31;
      }
      if ((unsigned long )(0 == tmp___15)) {
        tmp___16 = 0;
      } else {
        tmp___16 = 1;
      }
      {
      tmp___17 = __dyc_funcallvar_32;
      }
      if (tmp___17) {
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
        tmp___18 = __dyc_funcallvar_33;
        }
        if (tmp___18) {
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
    }
    {
    field = __dyc_funcallvar_34;
    page_no = __dyc_funcallvar_35;
    }
    if (page_no == 4294967295UL) {
      {



      }
      goto __dyc_dummy_label;
    }
    if ((type & 1UL) == 0UL) {
      {
      tmp___19 = __dyc_funcallvar_36;
      }
      if ((unsigned long )((void *)0) == (unsigned long )tmp___19) {
        {



        }
        goto __dyc_dummy_label;
      }
    }
    if (is_sys_table) {
      if (! (type & 1UL)) {
        if ((unsigned long )table == (unsigned long )dict_sys->sys_tables) {
          if (name_len == sizeof("ID_IND") - 1UL) {
            {
            tmp___20 = __dyc_funcallvar_37;
            }
            if (! (0 == tmp___20)) {
              {
              index___0 = __dyc_funcallvar_38;
              index___0->id = id;


              }
            }
          } else {
            {
            index___0 = __dyc_funcallvar_39;
            index___0->id = id;


            }
          }
        } else {
          {
          index___0 = __dyc_funcallvar_40;
          index___0->id = id;


          }
        }
      }
    } else {
      {
      index___0 = __dyc_funcallvar_41;
      index___0->id = id;


      }
    }
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ulint(ut_dbg_null_ptr);
  __dyc_print_ptr__typdef_dtuple_t(tuple);
  __dyc_print_ptr__typdef_dfield_t(dfield);
  __dyc_print_ptr__typdef_rec_t(rec);
  __dyc_print_ptr__char(field);
  __dyc_print_ptr__char(name_buf);
  __dyc_printpre_byte(type);
  __dyc_printpre_byte(space);
  __dyc_printpre_byte(n_fields);
  __dyc_print_ptr__char(buf);
  __dyc_print_comp_100dulint_struct(id);
  __dyc_print_ptr__typdef_dict_field_t(tmp___7);
  __dyc_print_ptr__typdef_dict_col_t(tmp___8);
  __dyc_printpre_byte(tmp___10);
  __dyc_print_ptr__typdef_dict_field_t(tmp___13);
  __dyc_print_ptr__typdef_dict_col_t(tmp___14);
  __dyc_printpre_byte(tmp___16);
}
}
