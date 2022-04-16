#include "../../include/dycfoo.h"
#include "../../include/btr0btr.i.hd.c.h"
void __dyc_foo(void) 
{ ulint *ut_dbg_null_ptr ;
  ulint space ;
  ib_page_t *page ;
  ib_page_t *right_page ;
  rec_t *node_ptr ;
  rec_t *rec ;
  ulint right_page_no ;
  ulint left_page_no ;
  ulint ret ;
  dict_index_t *index___0 ;
  ulint *offsets ;
  ulint *offsets2 ;
  ulint tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  ulint tmp___5 ;
  ulint tmp___6 ;
  rw_lock_t *tmp___7 ;
  ulint tmp___8 ;
  ulint tmp___9 ;
  ulint tmp___10 ;
  int tmp___11 ;
  long tmp___12 ;
  long tmp___13 ;
  ulint tmp___14 ;
  ulint tmp___15 ;
  ulint tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  long tmp___19 ;
  long tmp___20 ;
  rec_t *right_rec ;
  ulint tmp___21 ;
  ulint tmp___22 ;
  int tmp___23 ;
  long tmp___24 ;
  long tmp___25 ;
  rec_t *tmp___26 ;
  rec_t *tmp___27 ;
  rec_t *tmp___28 ;
  rec_t *tmp___29 ;
  int tmp___30 ;
  ulint tmp___31 ;
  rec_t *tmp___32 ;
  rec_t *tmp___33 ;
  ulint tmp___34 ;
  int tmp___35 ;
  long tmp___36 ;
  long tmp___37 ;
  dict_tree_t *tree ;
  ulint level ;
  ib_page_t *__dyc_funcallvar_3 ;
  ulint __dyc_funcallvar_4 ;
  ulint __dyc_funcallvar_5 ;
  ulint __dyc_funcallvar_6 ;
  long __dyc_funcallvar_7 ;
  long __dyc_funcallvar_8 ;
  rec_t *__dyc_funcallvar_9 ;
  ulint *__dyc_funcallvar_10 ;
  ib_page_t *__dyc_funcallvar_11 ;
  ulint __dyc_funcallvar_12 ;
  rw_lock_t *__dyc_funcallvar_13 ;
  ulint __dyc_funcallvar_14 ;
  ulint __dyc_funcallvar_15 ;
  ulint __dyc_funcallvar_16 ;
  long __dyc_funcallvar_17 ;
  long __dyc_funcallvar_18 ;
  ulint __dyc_funcallvar_19 ;
  ulint __dyc_funcallvar_20 ;
  ulint __dyc_funcallvar_21 ;
  ulint __dyc_funcallvar_22 ;
  ulint __dyc_funcallvar_23 ;
  long __dyc_funcallvar_24 ;
  long __dyc_funcallvar_25 ;
  ib_page_t *__dyc_funcallvar_26 ;
  ulint __dyc_funcallvar_27 ;
  ulint __dyc_funcallvar_28 ;
  long __dyc_funcallvar_29 ;
  long __dyc_funcallvar_30 ;
  rec_t *__dyc_funcallvar_31 ;
  rec_t *__dyc_funcallvar_32 ;
  rec_t *__dyc_funcallvar_33 ;
  rec_t *__dyc_funcallvar_34 ;
  ulint *__dyc_funcallvar_35 ;
  ulint *__dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  rec_t *__dyc_funcallvar_38 ;
  rec_t *__dyc_funcallvar_39 ;
  rec_t *__dyc_funcallvar_40 ;
  rec_t *__dyc_funcallvar_41 ;
  ulint __dyc_funcallvar_42 ;
  rec_t *__dyc_funcallvar_43 ;
  rec_t *__dyc_funcallvar_44 ;
  ulint __dyc_funcallvar_45 ;
  long __dyc_funcallvar_46 ;
  long __dyc_funcallvar_47 ;

  {
  ut_dbg_null_ptr = __dyc_read_ptr__typdef_ulint();
  tree = __dyc_read_ptr__typdef_dict_tree_t();
  level = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_read_ptr__typdef_ib_page_t();
  __dyc_funcallvar_4 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_10 = __dyc_read_ptr__typdef_ulint();
  __dyc_funcallvar_11 = __dyc_read_ptr__typdef_ib_page_t();
  __dyc_funcallvar_12 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_read_ptr__typdef_rw_lock_t();
  __dyc_funcallvar_14 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_15 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_16 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_17 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_18 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_19 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_20 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_21 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_22 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_23 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_24 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_25 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_26 = __dyc_read_ptr__typdef_ib_page_t();
  __dyc_funcallvar_27 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_28 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_29 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_30 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_32 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_33 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_34 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_35 = __dyc_read_ptr__typdef_ulint();
  __dyc_funcallvar_36 = __dyc_read_ptr__typdef_ulint();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_39 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_40 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_41 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_42 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_43 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_44 = __dyc_read_ptr__typdef_rec_t();
  __dyc_funcallvar_45 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_46 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_47 = (long )__dyc_readpre_byte();
  space = 0;
  page = 0;
  right_page = 0;
  node_ptr = 0;
  rec = 0;
  right_page_no = 0;
  left_page_no = 0;
  ret = 0;
  index___0 = 0;
  offsets = 0;
  offsets2 = 0;
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
  right_rec = 0;
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
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___37 = 0;
  page = __dyc_funcallvar_3;
  space = __dyc_funcallvar_4;
  index___0 = tree->tree_indexes.start;
  while (1) {
    while_64_continue:  ;
    {
    tmp___5 = __dyc_funcallvar_5;
    }
    if (! (level != tmp___5)) {
      goto while_64_break;
    }
    {
    while (1) {
      while_65_continue:  ;
      {
      tmp___1 = __dyc_funcallvar_6;
      }
      if ((unsigned long )(tmp___1 > 0UL)) {
        tmp___2 = 0;
      } else {
        tmp___2 = 1;
      }
      {
      tmp___3 = __dyc_funcallvar_7;
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
        while_66_continue:  ;
        {
        tmp___4 = __dyc_funcallvar_8;
        }
        if (tmp___4) {
          {

          }
        }
        goto while_66_break;
      }
      while_66_break:  ;
      }
      goto while_65_break;
    }
    while_65_break:  ;
    }
    {


    node_ptr = __dyc_funcallvar_9;
    offsets = __dyc_funcallvar_10;
    page = __dyc_funcallvar_11;
    }
  }
  while_64_break:  ;
  tmp___6 = __dyc_funcallvar_12;
  if (tmp___6) {
    {


    }
    goto __dyc_dummy_label;
  }

  offsets2 = (ulint *)((void *)0);
  offsets = offsets2;
  tmp___7 = __dyc_funcallvar_13;

  tmp___9 = __dyc_funcallvar_14;
  if (tmp___9) {
    if (level == 0UL) {
      {
      tmp___8 = __dyc_funcallvar_15;
      }
      if (! tmp___8) {
        ret = 0UL;
      }
    }
  } else {
    {

    ret = 0UL;
    }
  }
  while (1) {
    while_67_continue:  ;
    {
    tmp___10 = __dyc_funcallvar_16;
    }
    if ((unsigned long )(tmp___10 == level)) {
      tmp___11 = 0;
    } else {
      tmp___11 = 1;
    }
    {
    tmp___12 = __dyc_funcallvar_17;
    }
    if (tmp___12) {
      {

      }
      if (*ut_dbg_null_ptr) {
        ut_dbg_null_ptr = (ulint *)((void *)0);
      }
    }
    {
    while (1) {
      while_68_continue:  ;
      {
      tmp___13 = __dyc_funcallvar_18;
      }
      if (tmp___13) {
        {

        }
      }
      goto while_68_break;
    }
    while_68_break:  ;
    }
    goto while_67_break;
  }
  while_67_break:  ;
  right_page_no = __dyc_funcallvar_19;
  left_page_no = __dyc_funcallvar_20;
  while (1) {
    while_69_continue:  ;
    {
    tmp___14 = __dyc_funcallvar_21;
    }
    if (tmp___14 > 0UL) {
      tmp___17 = 1;
    } else {
      if (level == 0UL) {
        {
        tmp___15 = __dyc_funcallvar_22;
        tmp___16 = __dyc_funcallvar_23;
        }
        if (tmp___15 == tmp___16) {
          tmp___17 = 1;
        } else {
          tmp___17 = 0;
        }
      } else {
        tmp___17 = 0;
      }
    }
    if ((unsigned long )tmp___17) {
      tmp___18 = 0;
    } else {
      tmp___18 = 1;
    }
    {
    tmp___19 = __dyc_funcallvar_24;
    }
    if (tmp___19) {
      {

      }
      if (*ut_dbg_null_ptr) {
        ut_dbg_null_ptr = (ulint *)((void *)0);
      }
    }
    {
    while (1) {
      while_70_continue:  ;
      {
      tmp___20 = __dyc_funcallvar_25;
      }
      if (tmp___20) {
        {

        }
      }
      goto while_70_break;
    }
    while_70_break:  ;
    }
    goto while_69_break;
  }
  while_69_break:  ;
  if (right_page_no != 4294967295UL) {
    {
    right_page = __dyc_funcallvar_26;
    }
    {
    while (1) {
      while_71_continue:  ;
      {
      tmp___21 = __dyc_funcallvar_27;
      tmp___22 = __dyc_funcallvar_28;
      }
      if ((unsigned long )(tmp___21 == tmp___22)) {
        tmp___23 = 0;
      } else {
        tmp___23 = 1;
      }
      {
      tmp___24 = __dyc_funcallvar_29;
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
        while_72_continue:  ;
        {
        tmp___25 = __dyc_funcallvar_30;
        }
        if (tmp___25) {
          {

          }
        }
        goto while_72_break;
      }
      while_72_break:  ;
      }
      goto while_71_break;
    }
    while_71_break:  ;
    }
    {
    tmp___26 = __dyc_funcallvar_31;
    rec = __dyc_funcallvar_32;
    tmp___27 = __dyc_funcallvar_33;
    right_rec = __dyc_funcallvar_34;
    offsets = __dyc_funcallvar_35;
    offsets2 = __dyc_funcallvar_36;
    tmp___30 = __dyc_funcallvar_37;
    }
    if (tmp___30 >= 0) {
      {





      tmp___28 = __dyc_funcallvar_38;
      rec = __dyc_funcallvar_39;



      tmp___29 = __dyc_funcallvar_40;
      rec = __dyc_funcallvar_41;


      ret = 0UL;
      }
    }
  }
  if (level > 0UL) {
    if (left_page_no == 4294967295UL) {
      {
      while (1) {
        while_73_continue:  ;
        {
        tmp___31 = __dyc_funcallvar_42;
        tmp___32 = __dyc_funcallvar_43;
        tmp___33 = __dyc_funcallvar_44;
        tmp___34 = __dyc_funcallvar_45;
        }
        if (16UL & tmp___34) {
          tmp___35 = 0;
        } else {
          tmp___35 = 1;
        }
        {
        tmp___36 = __dyc_funcallvar_46;
        }
        if (tmp___36) {
          {

          }
          if (*ut_dbg_null_ptr) {
            ut_dbg_null_ptr = (ulint *)((void *)0);
          }
        }
        {
        while (1) {
          while_74_continue:  ;
          {
          tmp___37 = __dyc_funcallvar_47;
          }
          if (tmp___37) {
            {

            }
          }
          goto while_74_break;
        }
        while_74_break:  ;
        }
        goto while_73_break;
      }
      while_73_break:  ;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ulint(ut_dbg_null_ptr);
  __dyc_printpre_byte(space);
  __dyc_print_ptr__typdef_ib_page_t(page);
  __dyc_print_ptr__typdef_ib_page_t(right_page);
  __dyc_print_ptr__typdef_rec_t(node_ptr);
  __dyc_print_ptr__typdef_rec_t(rec);
  __dyc_printpre_byte(ret);
  __dyc_print_ptr__typdef_dict_index_t(index___0);
  __dyc_print_ptr__typdef_ulint(offsets);
  __dyc_print_ptr__typdef_ulint(offsets2);
  __dyc_printpre_byte(tmp___2);
  __dyc_print_ptr__typdef_rw_lock_t(tmp___7);
  __dyc_printpre_byte(tmp___11);
  __dyc_printpre_byte(tmp___18);
  __dyc_print_ptr__typdef_rec_t(right_rec);
  __dyc_printpre_byte(tmp___23);
  __dyc_print_ptr__typdef_rec_t(tmp___26);
  __dyc_print_ptr__typdef_rec_t(tmp___27);
  __dyc_print_ptr__typdef_rec_t(tmp___28);
  __dyc_print_ptr__typdef_rec_t(tmp___29);
  __dyc_printpre_byte(tmp___31);
  __dyc_print_ptr__typdef_rec_t(tmp___32);
  __dyc_print_ptr__typdef_rec_t(tmp___33);
  __dyc_printpre_byte(tmp___35);
}
}
