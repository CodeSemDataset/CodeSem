#include "../../include/dycfoo.h"
#include "../../include/lock0lock.i.hd.c.h"
void __dyc_foo(void) 
{ ulint *ut_dbg_null_ptr ;
  trx_t *impl_trx ;
  ib_lock_t *lock ;
  int tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  ulint tmp___5 ;
  int tmp___6 ;
  long tmp___7 ;
  long tmp___8 ;
  ulint tmp___9 ;
  int tmp___10 ;
  long tmp___11 ;
  long tmp___12 ;
  ulint tmp___13 ;
  long tmp___14 ;
  long tmp___15 ;
  ulint tmp___16 ;
  ib_lock_t *tmp___17 ;
  int tmp___18 ;
  long tmp___19 ;
  long tmp___20 ;
  ib_lock_t *tmp___21 ;
  ib_lock_t *tmp___22 ;
  int tmp___23 ;
  long tmp___24 ;
  long tmp___25 ;
  ib_lock_t *tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  long tmp___29 ;
  long tmp___30 ;
  ulint tmp___31 ;
  int tmp___32 ;
  long tmp___33 ;
  long tmp___34 ;
  long tmp___35 ;
  long tmp___36 ;
  ulint mode ;
  ulint tmp___37 ;
  ib_lock_t *tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  long tmp___41 ;
  long tmp___42 ;
  ulint tmp___43 ;
  int tmp___44 ;
  long tmp___45 ;
  long tmp___46 ;
  ulint tmp___47 ;
  ulint tmp___48 ;
  ulint tmp___49 ;
  ulint tmp___50 ;
  dict_index_t *index___0 ;
  ib_lock_t *__dyc_funcallvar_4 ;
  long __dyc_funcallvar_5 ;
  long __dyc_funcallvar_6 ;
  ulint __dyc_funcallvar_7 ;
  long __dyc_funcallvar_8 ;
  long __dyc_funcallvar_9 ;
  ulint __dyc_funcallvar_10 ;
  ulint __dyc_funcallvar_11 ;
  long __dyc_funcallvar_12 ;
  long __dyc_funcallvar_13 ;
  long __dyc_funcallvar_14 ;
  long __dyc_funcallvar_15 ;
  ib_lock_t *__dyc_funcallvar_16 ;
  trx_t *__dyc_funcallvar_17 ;
  ib_lock_t *__dyc_funcallvar_18 ;
  ib_lock_t *__dyc_funcallvar_19 ;
  long __dyc_funcallvar_20 ;
  long __dyc_funcallvar_21 ;
  trx_t *__dyc_funcallvar_22 ;
  ib_lock_t *__dyc_funcallvar_23 ;
  ib_lock_t *__dyc_funcallvar_24 ;
  long __dyc_funcallvar_25 ;
  long __dyc_funcallvar_26 ;
  ib_lock_t *__dyc_funcallvar_27 ;
  long __dyc_funcallvar_28 ;
  long __dyc_funcallvar_29 ;
  ulint __dyc_funcallvar_30 ;
  long __dyc_funcallvar_31 ;
  long __dyc_funcallvar_32 ;
  long __dyc_funcallvar_33 ;
  long __dyc_funcallvar_34 ;
  ulint __dyc_funcallvar_35 ;
  ulint __dyc_funcallvar_36 ;
  ulint __dyc_funcallvar_37 ;
  ulint __dyc_funcallvar_38 ;
  long __dyc_funcallvar_39 ;
  long __dyc_funcallvar_40 ;
  ulint __dyc_funcallvar_41 ;
  ulint __dyc_funcallvar_42 ;
  ib_lock_t *__dyc_funcallvar_43 ;
  long __dyc_funcallvar_44 ;
  long __dyc_funcallvar_45 ;
  ib_lock_t *__dyc_funcallvar_46 ;

  {
  ut_dbg_null_ptr = __dyc_read_ptr__typdef_ulint();
  tmp___16 = (ulint )__dyc_readpre_byte();
  index___0 = __dyc_read_ptr__typdef_dict_index_t();
  __dyc_funcallvar_4 = __dyc_read_ptr__typdef_ib_lock_t();
  __dyc_funcallvar_5 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_10 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_14 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_15 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_read_ptr__typdef_ib_lock_t();
  __dyc_funcallvar_17 = __dyc_read_ptr__typdef_trx_t();
  __dyc_funcallvar_18 = __dyc_read_ptr__typdef_ib_lock_t();
  __dyc_funcallvar_19 = __dyc_read_ptr__typdef_ib_lock_t();
  __dyc_funcallvar_20 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_21 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_read_ptr__typdef_trx_t();
  __dyc_funcallvar_23 = __dyc_read_ptr__typdef_ib_lock_t();
  __dyc_funcallvar_24 = __dyc_read_ptr__typdef_ib_lock_t();
  __dyc_funcallvar_25 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_26 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_27 = __dyc_read_ptr__typdef_ib_lock_t();
  __dyc_funcallvar_28 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_29 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_30 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_31 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_32 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_33 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_34 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_35 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_36 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_37 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_38 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_39 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_40 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_41 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_42 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_43 = __dyc_read_ptr__typdef_ib_lock_t();
  __dyc_funcallvar_44 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_45 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_46 = __dyc_read_ptr__typdef_ib_lock_t();
  impl_trx = 0;
  lock = 0;
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
  mode = 0;
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
  tmp___48 = 0;
  tmp___49 = 0;
  tmp___50 = 0;
  if (! tmp___16) {
    {
    lock = __dyc_funcallvar_4;
    }
    {
    while (1) {
      while_133_continue:  ;
      if (! lock) {
        goto while_133_break;
      }
      {
      while (1) {
        while_134_continue:  ;
        if ((lock->trx)->conc_state == 2UL) {
          tmp___1 = 1;
        } else {
          if ((lock->trx)->conc_state == 4UL) {
            tmp___1 = 1;
          } else {
            if ((lock->trx)->conc_state == 3UL) {
              tmp___1 = 1;
            } else {
              tmp___1 = 0;
            }
          }
        }
        if ((unsigned long )tmp___1) {
          tmp___2 = 0;
        } else {
          tmp___2 = 1;
        }
        {
        tmp___3 = __dyc_funcallvar_5;
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
          while_135_continue:  ;
          {
          tmp___4 = __dyc_funcallvar_6;
          }
          if (tmp___4) {
            {

            }
          }
          goto while_135_break;
        }
        while_135_break:  ;
        }
        goto while_134_break;
      }
      while_134_break:  ;
      }
      {
      while (1) {
        while_136_continue:  ;
        {
        tmp___5 = __dyc_funcallvar_7;
        }
        if (tmp___5) {
          tmp___6 = 0;
        } else {
          tmp___6 = 1;
        }
        {
        tmp___7 = __dyc_funcallvar_8;
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
          while_137_continue:  ;
          {
          tmp___8 = __dyc_funcallvar_9;
          }
          if (tmp___8) {
            {

            }
          }
          goto while_137_break;
        }
        while_137_break:  ;
        }
        goto while_136_break;
      }
      while_136_break:  ;
      }
      {
      tmp___13 = __dyc_funcallvar_10;
      }
      if (tmp___13) {
        {
        while (1) {
          while_138_continue:  ;
          {
          tmp___9 = __dyc_funcallvar_11;
          }
          if (tmp___9) {
            tmp___10 = 0;
          } else {
            tmp___10 = 1;
          }
          {
          tmp___11 = __dyc_funcallvar_12;
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
            while_139_continue:  ;
            {
            tmp___12 = __dyc_funcallvar_13;
            }
            if (tmp___12) {
              {

              }
            }
            goto while_139_break;
          }
          while_139_break:  ;
          }
          goto while_138_break;
        }
        while_138_break:  ;
        }
      }
      if (index___0) {
        {
        while (1) {
          while_140_continue:  ;
          {
          tmp___14 = __dyc_funcallvar_14;
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
            while_141_continue:  ;
            {
            tmp___15 = __dyc_funcallvar_15;
            }
            if (tmp___15) {
              {

              }
            }
            goto while_141_break;
          }
          while_141_break:  ;
          }
          goto while_140_break;
        }
        while_140_break:  ;
        }
      }
      {
      lock = __dyc_funcallvar_16;
      }
    }
    while_133_break:  ;
    }
    {

    }
    goto __dyc_dummy_label;
  }
  if (index___0) {
    if (index___0->type & 1UL) {
      {
      impl_trx = __dyc_funcallvar_17;
      }
      if (impl_trx) {
        {
        tmp___21 = __dyc_funcallvar_18;
        }
        if (tmp___21) {
          {
          while (1) {
            while_142_continue:  ;
            {
            tmp___17 = __dyc_funcallvar_19;
            }
            if ((unsigned long )tmp___17) {
              tmp___18 = 0;
            } else {
              tmp___18 = 1;
            }
            {
            tmp___19 = __dyc_funcallvar_20;
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
              while_143_continue:  ;
              {
              tmp___20 = __dyc_funcallvar_21;
              }
              if (tmp___20) {
                {

                }
              }
              goto while_143_break;
            }
            while_143_break:  ;
            }
            goto while_142_break;
          }
          while_142_break:  ;
          }
        }
      }
    }
  }
  if (index___0) {
    if (! (index___0->type & 1UL)) {
      {
      impl_trx = __dyc_funcallvar_22;
      }
      if (impl_trx) {
        {
        tmp___26 = __dyc_funcallvar_23;
        }
        if (tmp___26) {
          {
          while (1) {
            while_144_continue:  ;
            {
            tmp___22 = __dyc_funcallvar_24;
            }
            if ((unsigned long )tmp___22) {
              tmp___23 = 0;
            } else {
              tmp___23 = 1;
            }
            {
            tmp___24 = __dyc_funcallvar_25;
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
              while_145_continue:  ;
              {
              tmp___25 = __dyc_funcallvar_26;
              }
              if (tmp___25) {
                {

                }
              }
              goto while_145_break;
            }
            while_145_break:  ;
            }
            goto while_144_break;
          }
          while_144_break:  ;
          }
        }
      }
    }
  }
  lock = __dyc_funcallvar_27;
  while (1) {
    while_146_continue:  ;
    if (! lock) {
      goto while_146_break;
    }
    {
    while (1) {
      while_147_continue:  ;
      if ((lock->trx)->conc_state == 2UL) {
        tmp___27 = 1;
      } else {
        if ((lock->trx)->conc_state == 4UL) {
          tmp___27 = 1;
        } else {
          if ((lock->trx)->conc_state == 3UL) {
            tmp___27 = 1;
          } else {
            tmp___27 = 0;
          }
        }
      }
      if ((unsigned long )tmp___27) {
        tmp___28 = 0;
      } else {
        tmp___28 = 1;
      }
      {
      tmp___29 = __dyc_funcallvar_28;
      }
      if (tmp___29) {
        {

        }
        if (*ut_dbg_null_ptr) {
          ut_dbg_null_ptr = (ulint *)((void *)0);
        }
      }
      {
      while (1) {
        while_148_continue:  ;
        {
        tmp___30 = __dyc_funcallvar_29;
        }
        if (tmp___30) {
          {

          }
        }
        goto while_148_break;
      }
      while_148_break:  ;
      }
      goto while_147_break;
    }
    while_147_break:  ;
    }
    {
    while (1) {
      while_149_continue:  ;
      {
      tmp___31 = __dyc_funcallvar_30;
      }
      if (tmp___31) {
        tmp___32 = 0;
      } else {
        tmp___32 = 1;
      }
      {
      tmp___33 = __dyc_funcallvar_31;
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
        while_150_continue:  ;
        {
        tmp___34 = __dyc_funcallvar_32;
        }
        if (tmp___34) {
          {

          }
        }
        goto while_150_break;
      }
      while_150_break:  ;
      }
      goto while_149_break;
    }
    while_149_break:  ;
    }
    if (index___0) {
      {
      while (1) {
        while_151_continue:  ;
        {
        tmp___35 = __dyc_funcallvar_33;
        }
        if (tmp___35) {
          {

          }
          if (*ut_dbg_null_ptr) {
            ut_dbg_null_ptr = (ulint *)((void *)0);
          }
        }
        {
        while (1) {
          while_152_continue:  ;
          {
          tmp___36 = __dyc_funcallvar_34;
          }
          if (tmp___36) {
            {

            }
          }
          goto while_152_break;
        }
        while_152_break:  ;
        }
        goto while_151_break;
      }
      while_151_break:  ;
      }
    }
    {
    tmp___49 = __dyc_funcallvar_35;
    }
    if (tmp___49) {
      _L:  
      {
      tmp___47 = __dyc_funcallvar_36;
      }
      if (tmp___47) {
        {
        tmp___48 = __dyc_funcallvar_37;
        }
        if (! tmp___48) {
          {
          while (1) {
            while_153_continue:  ;
            {
            tmp___43 = __dyc_funcallvar_38;
            }
            if (tmp___43) {
              tmp___44 = 0;
            } else {
              tmp___44 = 1;
            }
            {
            tmp___45 = __dyc_funcallvar_39;
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
              while_154_continue:  ;
              {
              tmp___46 = __dyc_funcallvar_40;
              }
              if (tmp___46) {
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
          }
        }
      }
    } else {
      {
      tmp___50 = __dyc_funcallvar_41;
      }
      if (tmp___50) {
        goto _L;
      } else {
        {
        tmp___37 = __dyc_funcallvar_42;
        }
        if (tmp___37 == 4UL) {
          mode = 5UL;
        } else {
          mode = 4UL;
        }
        {
        while (1) {
          while_155_continue:  ;
          {
          tmp___38 = __dyc_funcallvar_43;
          }
          if (tmp___38) {
            tmp___39 = 0;
          } else {
            tmp___39 = 1;
          }
          if ((unsigned long )tmp___39) {
            tmp___40 = 0;
          } else {
            tmp___40 = 1;
          }
          {
          tmp___41 = __dyc_funcallvar_44;
          }
          if (tmp___41) {
            {

            }
            if (*ut_dbg_null_ptr) {
              ut_dbg_null_ptr = (ulint *)((void *)0);
            }
          }
          {
          while (1) {
            while_156_continue:  ;
            {
            tmp___42 = __dyc_funcallvar_45;
            }
            if (tmp___42) {
              {

              }
            }
            goto while_156_break;
          }
          while_156_break:  ;
          }
          goto while_155_break;
        }
        while_155_break:  ;
        }
      }
    }
    {
    lock = __dyc_funcallvar_46;
    }
  }
  while_146_break:  ;

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_ulint(ut_dbg_null_ptr);
  __dyc_printpre_byte(tmp___2);
  __dyc_printpre_byte(tmp___6);
  __dyc_printpre_byte(tmp___10);
  __dyc_printpre_byte(tmp___18);
  __dyc_printpre_byte(tmp___23);
  __dyc_printpre_byte(tmp___28);
  __dyc_printpre_byte(tmp___32);
  __dyc_printpre_byte(mode);
  __dyc_printpre_byte(tmp___40);
  __dyc_printpre_byte(tmp___44);
}
}
