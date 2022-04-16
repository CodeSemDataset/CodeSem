#include "../../include/dycfoo.h"
#include "../../include/btr0cur.i.hd.c.h"
void __dyc_foo(void) 
{ ulint *ut_dbg_null_ptr ;
  ulint left_page_no ;
  ulint right_page_no ;
  ib_page_t *get_page ;
  ulint tmp___5 ;
  ulint tmp___6 ;
  int tmp___7 ;
  long tmp___8 ;
  long tmp___9 ;
  buf_block_t *tmp___10 ;
  ulint tmp___11 ;
  ulint tmp___12 ;
  int tmp___13 ;
  long tmp___14 ;
  long tmp___15 ;
  buf_block_t *tmp___16 ;
  ulint tmp___17 ;
  ulint tmp___18 ;
  int tmp___19 ;
  long tmp___20 ;
  long tmp___21 ;
  buf_block_t *tmp___22 ;
  buf_block_t *tmp___23 ;
  ulint tmp___24 ;
  ulint tmp___25 ;
  int tmp___26 ;
  long tmp___27 ;
  long tmp___28 ;
  buf_block_t *tmp___29 ;
  ulint tmp___30 ;
  ulint tmp___31 ;
  int tmp___32 ;
  long tmp___33 ;
  long tmp___34 ;
  buf_block_t *tmp___35 ;
  ulint tmp___36 ;
  ulint tmp___37 ;
  int tmp___38 ;
  long tmp___39 ;
  long tmp___40 ;
  buf_block_t *tmp___41 ;
  ulint tmp___42 ;
  ulint tmp___43 ;
  int tmp___44 ;
  long tmp___45 ;
  long tmp___46 ;
  buf_block_t *tmp___47 ;
  ulint latch_mode ;
  btr_cur_t *cursor ;
  ulint __dyc_funcallvar_8 ;
  ulint __dyc_funcallvar_9 ;
  long __dyc_funcallvar_10 ;
  long __dyc_funcallvar_11 ;
  buf_block_t *__dyc_funcallvar_12 ;
  ulint __dyc_funcallvar_13 ;
  ib_page_t *__dyc_funcallvar_14 ;
  ulint __dyc_funcallvar_15 ;
  ulint __dyc_funcallvar_16 ;
  long __dyc_funcallvar_17 ;
  long __dyc_funcallvar_18 ;
  buf_block_t *__dyc_funcallvar_19 ;
  ib_page_t *__dyc_funcallvar_20 ;
  ulint __dyc_funcallvar_21 ;
  ulint __dyc_funcallvar_22 ;
  long __dyc_funcallvar_23 ;
  long __dyc_funcallvar_24 ;
  buf_block_t *__dyc_funcallvar_25 ;
  ulint __dyc_funcallvar_26 ;
  ib_page_t *__dyc_funcallvar_27 ;
  buf_block_t *__dyc_funcallvar_28 ;
  ulint __dyc_funcallvar_29 ;
  ib_page_t *__dyc_funcallvar_30 ;
  ulint __dyc_funcallvar_31 ;
  ulint __dyc_funcallvar_32 ;
  long __dyc_funcallvar_33 ;
  long __dyc_funcallvar_34 ;
  buf_block_t *__dyc_funcallvar_35 ;
  ib_page_t *__dyc_funcallvar_36 ;
  ulint __dyc_funcallvar_37 ;
  ulint __dyc_funcallvar_38 ;
  long __dyc_funcallvar_39 ;
  long __dyc_funcallvar_40 ;
  buf_block_t *__dyc_funcallvar_41 ;
  ulint __dyc_funcallvar_42 ;
  ib_page_t *__dyc_funcallvar_43 ;
  ulint __dyc_funcallvar_44 ;
  ulint __dyc_funcallvar_45 ;
  long __dyc_funcallvar_46 ;
  long __dyc_funcallvar_47 ;
  buf_block_t *__dyc_funcallvar_48 ;
  ib_page_t *__dyc_funcallvar_49 ;
  ulint __dyc_funcallvar_50 ;
  ulint __dyc_funcallvar_51 ;
  long __dyc_funcallvar_52 ;
  long __dyc_funcallvar_53 ;
  buf_block_t *__dyc_funcallvar_54 ;

  {
  ut_dbg_null_ptr = __dyc_read_ptr__typdef_ulint();
  latch_mode = (ulint )__dyc_readpre_byte();
  cursor = __dyc_read_ptr__typdef_btr_cur_t();
  __dyc_funcallvar_8 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_10 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_read_ptr__typdef_buf_block_t();
  __dyc_funcallvar_13 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_read_ptr__typdef_ib_page_t();
  __dyc_funcallvar_15 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_16 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_17 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_18 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_read_ptr__typdef_buf_block_t();
  __dyc_funcallvar_20 = __dyc_read_ptr__typdef_ib_page_t();
  __dyc_funcallvar_21 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_22 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_23 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_24 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_read_ptr__typdef_buf_block_t();
  __dyc_funcallvar_26 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_27 = __dyc_read_ptr__typdef_ib_page_t();
  __dyc_funcallvar_28 = __dyc_read_ptr__typdef_buf_block_t();
  __dyc_funcallvar_29 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_30 = __dyc_read_ptr__typdef_ib_page_t();
  __dyc_funcallvar_31 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_32 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_33 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_34 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_35 = __dyc_read_ptr__typdef_buf_block_t();
  __dyc_funcallvar_36 = __dyc_read_ptr__typdef_ib_page_t();
  __dyc_funcallvar_37 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_38 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_39 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_40 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_41 = __dyc_read_ptr__typdef_buf_block_t();
  __dyc_funcallvar_42 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_43 = __dyc_read_ptr__typdef_ib_page_t();
  __dyc_funcallvar_44 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_45 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_46 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_47 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_48 = __dyc_read_ptr__typdef_buf_block_t();
  __dyc_funcallvar_49 = __dyc_read_ptr__typdef_ib_page_t();
  __dyc_funcallvar_50 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_51 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_52 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_53 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_54 = __dyc_read_ptr__typdef_buf_block_t();
  left_page_no = 0;
  right_page_no = 0;
  get_page = 0;
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
  tmp___38 = 0;
  tmp___39 = 0;
  tmp___40 = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  tmp___43 = 0;
  tmp___44 = 0;
  tmp___45 = 0;
  tmp___46 = 0;
  tmp___47 = 0;
  while (1) {
    while_29_continue:  ;
    {
    tmp___5 = __dyc_funcallvar_8;
    tmp___6 = __dyc_funcallvar_9;
    }
    if ((unsigned long )(tmp___5 == tmp___6)) {
      tmp___7 = 0;
    } else {
      tmp___7 = 1;
    }
    {
    tmp___8 = __dyc_funcallvar_10;
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
      while_30_continue:  ;
      {
      tmp___9 = __dyc_funcallvar_11;
      }
      if (tmp___9) {
        {

        }
      }
      goto while_30_break;
    }
    while_30_break:  ;
    }
    goto while_29_break;
  }
  while_29_break:  ;
  tmp___10 = __dyc_funcallvar_12;
  tmp___10->check_index_page_at_flush = 1UL;
  if (latch_mode == 33UL) {
    {
    left_page_no = __dyc_funcallvar_13;
    }
    if (left_page_no != 4294967295UL) {
      {
      get_page = __dyc_funcallvar_14;
      }
      {
      while (1) {
        while_31_continue:  ;
        {
        tmp___11 = __dyc_funcallvar_15;
        tmp___12 = __dyc_funcallvar_16;
        }
        if ((unsigned long )(tmp___11 == tmp___12)) {
          tmp___13 = 0;
        } else {
          tmp___13 = 1;
        }
        {
        tmp___14 = __dyc_funcallvar_17;
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
          while_32_continue:  ;
          {
          tmp___15 = __dyc_funcallvar_18;
          }
          if (tmp___15) {
            {

            }
          }
          goto while_32_break;
        }
        while_32_break:  ;
        }
        goto while_31_break;
      }
      while_31_break:  ;
      }
      {
      tmp___16 = __dyc_funcallvar_19;
      tmp___16->check_index_page_at_flush = 1UL;
      }
    }
    {
    get_page = __dyc_funcallvar_20;
    }
    {
    while (1) {
      while_33_continue:  ;
      {
      tmp___17 = __dyc_funcallvar_21;
      tmp___18 = __dyc_funcallvar_22;
      }
      if ((unsigned long )(tmp___17 == tmp___18)) {
        tmp___19 = 0;
      } else {
        tmp___19 = 1;
      }
      {
      tmp___20 = __dyc_funcallvar_23;
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
        while_34_continue:  ;
        {
        tmp___21 = __dyc_funcallvar_24;
        }
        if (tmp___21) {
          {

          }
        }
        goto while_34_break;
      }
      while_34_break:  ;
      }
      goto while_33_break;
    }
    while_33_break:  ;
    }
    {
    tmp___22 = __dyc_funcallvar_25;
    tmp___22->check_index_page_at_flush = 1UL;
    right_page_no = __dyc_funcallvar_26;
    }
    if (right_page_no != 4294967295UL) {
      {
      get_page = __dyc_funcallvar_27;
      tmp___23 = __dyc_funcallvar_28;
      tmp___23->check_index_page_at_flush = 1UL;
      }
    }
  } else {
    if (latch_mode == 35UL) {
      {
      left_page_no = __dyc_funcallvar_29;
      }
      if (left_page_no != 4294967295UL) {
        {
        cursor->left_page = __dyc_funcallvar_30;
        }
        {
        while (1) {
          while_35_continue:  ;
          {
          tmp___24 = __dyc_funcallvar_31;
          tmp___25 = __dyc_funcallvar_32;
          }
          if ((unsigned long )(tmp___24 == tmp___25)) {
            tmp___26 = 0;
          } else {
            tmp___26 = 1;
          }
          {
          tmp___27 = __dyc_funcallvar_33;
          }
          if (tmp___27) {
            {

            }
            if (*ut_dbg_null_ptr) {
              ut_dbg_null_ptr = (ulint *)((void *)0);
            }
          }
          {
          while (1) {
            while_36_continue:  ;
            {
            tmp___28 = __dyc_funcallvar_34;
            }
            if (tmp___28) {
              {

              }
            }
            goto while_36_break;
          }
          while_36_break:  ;
          }
          goto while_35_break;
        }
        while_35_break:  ;
        }
        {
        tmp___29 = __dyc_funcallvar_35;
        tmp___29->check_index_page_at_flush = 1UL;
        }
      }
      {
      get_page = __dyc_funcallvar_36;
      }
      {
      while (1) {
        while_37_continue:  ;
        {
        tmp___30 = __dyc_funcallvar_37;
        tmp___31 = __dyc_funcallvar_38;
        }
        if ((unsigned long )(tmp___30 == tmp___31)) {
          tmp___32 = 0;
        } else {
          tmp___32 = 1;
        }
        {
        tmp___33 = __dyc_funcallvar_39;
        }
        if (tmp___33) {
          {

          }
          if (*ut_dbg_null_ptr) {
            ut_dbg_null_ptr = (ulint *)((void *)0);
          }
        }
        {
        while (1) {
          while_38_continue:  ;
          {
          tmp___34 = __dyc_funcallvar_40;
          }
          if (tmp___34) {
            {

            }
          }
          goto while_38_break;
        }
        while_38_break:  ;
        }
        goto while_37_break;
      }
      while_37_break:  ;
      }
      {
      tmp___35 = __dyc_funcallvar_41;
      tmp___35->check_index_page_at_flush = 1UL;
      }
    } else {
      if (latch_mode == 36UL) {
        {
        left_page_no = __dyc_funcallvar_42;
        }
        if (left_page_no != 4294967295UL) {
          {
          cursor->left_page = __dyc_funcallvar_43;
          }
          {
          while (1) {
            while_39_continue:  ;
            {
            tmp___36 = __dyc_funcallvar_44;
            tmp___37 = __dyc_funcallvar_45;
            }
            if ((unsigned long )(tmp___36 == tmp___37)) {
              tmp___38 = 0;
            } else {
              tmp___38 = 1;
            }
            {
            tmp___39 = __dyc_funcallvar_46;
            }
            if (tmp___39) {
              {

              }
              if (*ut_dbg_null_ptr) {
                ut_dbg_null_ptr = (ulint *)((void *)0);
              }
            }
            {
            while (1) {
              while_40_continue:  ;
              {
              tmp___40 = __dyc_funcallvar_47;
              }
              if (tmp___40) {
                {

                }
              }
              goto while_40_break;
            }
            while_40_break:  ;
            }
            goto while_39_break;
          }
          while_39_break:  ;
          }
          {
          tmp___41 = __dyc_funcallvar_48;
          tmp___41->check_index_page_at_flush = 1UL;
          }
        }
        {
        get_page = __dyc_funcallvar_49;
        }
        {
        while (1) {
          while_41_continue:  ;
          {
          tmp___42 = __dyc_funcallvar_50;
          tmp___43 = __dyc_funcallvar_51;
          }
          if ((unsigned long )(tmp___42 == tmp___43)) {
            tmp___44 = 0;
          } else {
            tmp___44 = 1;
          }
          {
          tmp___45 = __dyc_funcallvar_52;
          }
          if (tmp___45) {
            {

            }
            if (*ut_dbg_null_ptr) {
              ut_dbg_null_ptr = (ulint *)((void *)0);
            }
          }
          {
          while (1) {
            while_42_continue:  ;
            {
            tmp___46 = __dyc_funcallvar_53;
            }
            if (tmp___46) {
              {

              }
            }
            goto while_42_break;
          }
          while_42_break:  ;
          }
          goto while_41_break;
        }
        while_41_break:  ;
        }
        {
        tmp___47 = __dyc_funcallvar_54;
        tmp___47->check_index_page_at_flush = 1UL;
        }
      } else {
        {
        while (1) {
          while_43_continue:  ;
          {

          }
          if (*ut_dbg_null_ptr) {
            ut_dbg_null_ptr = (ulint *)((void *)0);
          }
          goto while_43_break;
        }
        while_43_break:  ;
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ulint(ut_dbg_null_ptr);
  __dyc_print_ptr__typdef_ib_page_t(get_page);
  __dyc_printpre_byte(tmp___7);
  __dyc_printpre_byte(tmp___13);
  __dyc_printpre_byte(tmp___19);
  __dyc_printpre_byte(tmp___26);
  __dyc_printpre_byte(tmp___32);
  __dyc_printpre_byte(tmp___38);
  __dyc_printpre_byte(tmp___44);
}
}
