#include "../../include/dycfoo.h"
#include "../../include/log0recv.i.hd.c.h"
void __dyc_foo(void) 
{ ulint *ut_dbg_null_ptr ;
  dict_index_t *index___0 ;
  ulint tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  ulint tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  long tmp___9 ;
  long tmp___10 ;
  ulint tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  long tmp___14 ;
  long tmp___15 ;
  ulint tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  long tmp___20 ;
  long tmp___21 ;
  ulint tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  long tmp___26 ;
  long tmp___27 ;
  int tmp___28 ;
  ulint tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  long tmp___33 ;
  long tmp___34 ;
  ulint tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  long tmp___39 ;
  long tmp___40 ;
  ulint tmp___41 ;
  int tmp___42 ;
  int tmp___43 ;
  int tmp___44 ;
  long tmp___45 ;
  long tmp___46 ;
  unsigned char type ;
  unsigned char *ptr ;
  ib_page_t *page ;
  ulint __dyc_funcallvar_3 ;
  long __dyc_funcallvar_4 ;
  long __dyc_funcallvar_5 ;
  unsigned char *__dyc_funcallvar_6 ;
  unsigned char *__dyc_funcallvar_7 ;
  ulint __dyc_funcallvar_8 ;
  long __dyc_funcallvar_9 ;
  long __dyc_funcallvar_10 ;
  unsigned char *__dyc_funcallvar_11 ;
  ulint __dyc_funcallvar_12 ;
  long __dyc_funcallvar_13 ;
  long __dyc_funcallvar_14 ;
  unsigned char *__dyc_funcallvar_15 ;
  unsigned char *__dyc_funcallvar_16 ;
  unsigned char *__dyc_funcallvar_17 ;
  ulint __dyc_funcallvar_18 ;
  long __dyc_funcallvar_19 ;
  long __dyc_funcallvar_20 ;
  unsigned char *__dyc_funcallvar_21 ;
  unsigned char *__dyc_funcallvar_22 ;
  ulint __dyc_funcallvar_23 ;
  long __dyc_funcallvar_24 ;
  long __dyc_funcallvar_25 ;
  unsigned char *__dyc_funcallvar_26 ;
  unsigned char *__dyc_funcallvar_27 ;
  ulint __dyc_funcallvar_28 ;
  long __dyc_funcallvar_29 ;
  long __dyc_funcallvar_30 ;
  unsigned char *__dyc_funcallvar_31 ;
  unsigned char *__dyc_funcallvar_32 ;
  ulint __dyc_funcallvar_33 ;
  long __dyc_funcallvar_34 ;
  long __dyc_funcallvar_35 ;
  unsigned char *__dyc_funcallvar_36 ;
  unsigned char *__dyc_funcallvar_37 ;
  unsigned char *__dyc_funcallvar_38 ;
  unsigned char *__dyc_funcallvar_39 ;
  unsigned char *__dyc_funcallvar_40 ;
  unsigned char *__dyc_funcallvar_41 ;
  unsigned char *__dyc_funcallvar_42 ;
  unsigned char *__dyc_funcallvar_43 ;
  unsigned char *__dyc_funcallvar_44 ;
  ulint __dyc_funcallvar_45 ;
  long __dyc_funcallvar_46 ;
  long __dyc_funcallvar_47 ;
  unsigned char *__dyc_funcallvar_48 ;

  {
  ut_dbg_null_ptr = __dyc_read_ptr__typdef_ulint();
  index___0 = __dyc_read_ptr__typdef_dict_index_t();
  type = (unsigned char )__dyc_readpre_byte();
  ptr = (unsigned char *)__dyc_read_ptr__char();
  page = __dyc_read_ptr__typdef_ib_page_t();
  __dyc_funcallvar_3 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_7 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_8 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_10 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_12 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_14 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_15 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_16 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_17 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_18 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_19 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_20 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_21 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_22 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_23 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_24 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_25 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_26 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_27 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_28 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_29 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_30 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_31 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_32 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_33 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_34 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_35 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_36 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_37 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_38 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_39 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_40 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_41 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_42 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_43 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_44 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_45 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_46 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_47 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_48 = (unsigned char *)__dyc_read_ptr__char();
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
  if ((unsigned long )((void *)0) != (unsigned long )ptr) {
    {
    while (1) {
      while_28_continue:  ;
      if (! page) {
        tmp___1 = 1;
      } else {
        {
        tmp = __dyc_funcallvar_3;
        }
        if (tmp) {
          tmp___0 = 1;
        } else {
          tmp___0 = 0;
        }
        if ((unsigned long )tmp___0 == (index___0->table)->comp) {
          tmp___1 = 1;
        } else {
          tmp___1 = 0;
        }
      }
      if ((unsigned long )tmp___1) {
        tmp___2 = 0;
      } else {
        tmp___2 = 1;
      }
      {
      tmp___3 = __dyc_funcallvar_4;
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
        while_29_continue:  ;
        {
        tmp___4 = __dyc_funcallvar_5;
        }
        if (tmp___4) {
          {

          }
        }
        goto while_29_break;
      }
      while_29_break:  ;
      }
      goto while_28_break;
    }
    while_28_break:  ;
    }
    {
    ptr = __dyc_funcallvar_6;
    }
  }
  goto __dyc_dummy_label;
  ptr = __dyc_funcallvar_7;
  if ((unsigned long )((void *)0) != (unsigned long )ptr) {
    {
    while (1) {
      while_30_continue:  ;
      if (! page) {
        tmp___7 = 1;
      } else {
        {
        tmp___5 = __dyc_funcallvar_8;
        }
        if (tmp___5) {
          tmp___6 = 1;
        } else {
          tmp___6 = 0;
        }
        if ((unsigned long )tmp___6 == (index___0->table)->comp) {
          tmp___7 = 1;
        } else {
          tmp___7 = 0;
        }
      }
      if ((unsigned long )tmp___7) {
        tmp___8 = 0;
      } else {
        tmp___8 = 1;
      }
      {
      tmp___9 = __dyc_funcallvar_9;
      }
      if (tmp___9) {
        {

        }
        if (*ut_dbg_null_ptr) {
          ut_dbg_null_ptr = (ulint *)((void *)0);
        }
      }
      {
      while (1) {
        while_31_continue:  ;
        {
        tmp___10 = __dyc_funcallvar_10;
        }
        if (tmp___10) {
          {

          }
        }
        goto while_31_break;
      }
      while_31_break:  ;
      }
      goto while_30_break;
    }
    while_30_break:  ;
    }
    {
    ptr = __dyc_funcallvar_11;
    }
  }
  goto __dyc_dummy_label;
  while (1) {
    while_32_continue:  ;
    if (! page) {
      tmp___12 = 1;
    } else {
      {
      tmp___11 = __dyc_funcallvar_12;
      }
      if (tmp___11) {
        tmp___12 = 1;
      } else {
        tmp___12 = 0;
      }
    }
    if ((unsigned long )tmp___12) {
      tmp___13 = 0;
    } else {
      tmp___13 = 1;
    }
    {
    tmp___14 = __dyc_funcallvar_13;
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
      while_33_continue:  ;
      {
      tmp___15 = __dyc_funcallvar_14;
      }
      if (tmp___15) {
        {

        }
      }
      goto while_33_break;
    }
    while_33_break:  ;
    }
    goto while_32_break;
  }
  while_32_break:  ;
  ptr = __dyc_funcallvar_15;
  if (! ptr) {
    goto __dyc_dummy_label;
  }
  ptr = __dyc_funcallvar_16;
  goto __dyc_dummy_label;
  ptr = __dyc_funcallvar_17;
  if ((unsigned long )((void *)0) != (unsigned long )ptr) {
    {
    while (1) {
      while_34_continue:  ;
      if (! page) {
        tmp___18 = 1;
      } else {
        {
        tmp___16 = __dyc_funcallvar_18;
        }
        if (tmp___16) {
          tmp___17 = 1;
        } else {
          tmp___17 = 0;
        }
        if ((unsigned long )tmp___17 == (index___0->table)->comp) {
          tmp___18 = 1;
        } else {
          tmp___18 = 0;
        }
      }
      if ((unsigned long )tmp___18) {
        tmp___19 = 0;
      } else {
        tmp___19 = 1;
      }
      {
      tmp___20 = __dyc_funcallvar_19;
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
        while_35_continue:  ;
        {
        tmp___21 = __dyc_funcallvar_20;
        }
        if (tmp___21) {
          {

          }
        }
        goto while_35_break;
      }
      while_35_break:  ;
      }
      goto while_34_break;
    }
    while_34_break:  ;
    }
    {
    ptr = __dyc_funcallvar_21;
    }
  }
  goto __dyc_dummy_label;
  switch_27_15:  
  switch_27_43:  
  switch_27_16:  
  switch_27_44:  
  if ((int )type == 43) {
    tmp___28 = 1;
  } else {
    if ((int )type == 44) {
      tmp___28 = 1;
    } else {
      tmp___28 = 0;
    }
  }
  ptr = __dyc_funcallvar_22;
  if ((unsigned long )((void *)0) != (unsigned long )ptr) {
    {
    while (1) {
      while_36_continue:  ;
      if (! page) {
        tmp___24 = 1;
      } else {
        {
        tmp___22 = __dyc_funcallvar_23;
        }
        if (tmp___22) {
          tmp___23 = 1;
        } else {
          tmp___23 = 0;
        }
        if ((unsigned long )tmp___23 == (index___0->table)->comp) {
          tmp___24 = 1;
        } else {
          tmp___24 = 0;
        }
      }
      if ((unsigned long )tmp___24) {
        tmp___25 = 0;
      } else {
        tmp___25 = 1;
      }
      {
      tmp___26 = __dyc_funcallvar_24;
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
        while_37_continue:  ;
        {
        tmp___27 = __dyc_funcallvar_25;
        }
        if (tmp___27) {
          {

          }
        }
        goto while_37_break;
      }
      while_37_break:  ;
      }
      goto while_36_break;
    }
    while_36_break:  ;
    }
    {
    ptr = __dyc_funcallvar_26;
    }
  }
  goto __dyc_dummy_label;
  ptr = __dyc_funcallvar_27;
  if ((unsigned long )((void *)0) != (unsigned long )ptr) {
    {
    while (1) {
      while_38_continue:  ;
      if (! page) {
        tmp___31 = 1;
      } else {
        {
        tmp___29 = __dyc_funcallvar_28;
        }
        if (tmp___29) {
          tmp___30 = 1;
        } else {
          tmp___30 = 0;
        }
        if ((unsigned long )tmp___30 == (index___0->table)->comp) {
          tmp___31 = 1;
        } else {
          tmp___31 = 0;
        }
      }
      if ((unsigned long )tmp___31) {
        tmp___32 = 0;
      } else {
        tmp___32 = 1;
      }
      {
      tmp___33 = __dyc_funcallvar_29;
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
        while_39_continue:  ;
        {
        tmp___34 = __dyc_funcallvar_30;
        }
        if (tmp___34) {
          {

          }
        }
        goto while_39_break;
      }
      while_39_break:  ;
      }
      goto while_38_break;
    }
    while_38_break:  ;
    }
    {
    ptr = __dyc_funcallvar_31;
    }
  }
  goto __dyc_dummy_label;
  ptr = __dyc_funcallvar_32;
  if ((unsigned long )((void *)0) != (unsigned long )ptr) {
    {
    while (1) {
      while_40_continue:  ;
      if (! page) {
        tmp___37 = 1;
      } else {
        {
        tmp___35 = __dyc_funcallvar_33;
        }
        if (tmp___35) {
          tmp___36 = 1;
        } else {
          tmp___36 = 0;
        }
        if ((unsigned long )tmp___36 == (index___0->table)->comp) {
          tmp___37 = 1;
        } else {
          tmp___37 = 0;
        }
      }
      if ((unsigned long )tmp___37) {
        tmp___38 = 0;
      } else {
        tmp___38 = 1;
      }
      {
      tmp___39 = __dyc_funcallvar_34;
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
        while_41_continue:  ;
        {
        tmp___40 = __dyc_funcallvar_35;
        }
        if (tmp___40) {
          {

          }
        }
        goto while_41_break;
      }
      while_41_break:  ;
      }
      goto while_40_break;
    }
    while_40_break:  ;
    }
    {
    ptr = __dyc_funcallvar_36;
    }
  }
  goto __dyc_dummy_label;
  ptr = __dyc_funcallvar_37;
  goto __dyc_dummy_label;
  ptr = __dyc_funcallvar_38;
  goto __dyc_dummy_label;
  ptr = __dyc_funcallvar_39;
  goto __dyc_dummy_label;
  ptr = __dyc_funcallvar_40;
  goto __dyc_dummy_label;
  ptr = __dyc_funcallvar_41;
  goto __dyc_dummy_label;
  ptr = __dyc_funcallvar_42;
  goto __dyc_dummy_label;
  ptr = __dyc_funcallvar_43;
  goto __dyc_dummy_label;
  ptr = __dyc_funcallvar_44;
  if ((unsigned long )((void *)0) != (unsigned long )ptr) {
    {
    while (1) {
      while_42_continue:  ;
      if (! page) {
        tmp___43 = 1;
      } else {
        {
        tmp___41 = __dyc_funcallvar_45;
        }
        if (tmp___41) {
          tmp___42 = 1;
        } else {
          tmp___42 = 0;
        }
        if ((unsigned long )tmp___42 == (index___0->table)->comp) {
          tmp___43 = 1;
        } else {
          tmp___43 = 0;
        }
      }
      if ((unsigned long )tmp___43) {
        tmp___44 = 0;
      } else {
        tmp___44 = 1;
      }
      {
      tmp___45 = __dyc_funcallvar_46;
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
        while_43_continue:  ;
        {
        tmp___46 = __dyc_funcallvar_47;
        }
        if (tmp___46) {
          {

          }
        }
        goto while_43_break;
      }
      while_43_break:  ;
      }
      goto while_42_break;
    }
    while_42_break:  ;
    }
    {
    ptr = __dyc_funcallvar_48;
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ulint(ut_dbg_null_ptr);
  __dyc_printpre_byte(tmp___2);
  __dyc_printpre_byte(tmp___8);
  __dyc_printpre_byte(tmp___13);
  __dyc_printpre_byte(tmp___19);
  __dyc_printpre_byte(tmp___25);
  __dyc_printpre_byte(tmp___28);
  __dyc_printpre_byte(tmp___32);
  __dyc_printpre_byte(tmp___38);
  __dyc_printpre_byte(tmp___44);
  __dyc_print_ptr__char(ptr);
}
}
