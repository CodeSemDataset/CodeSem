#include "../../include/dycfoo.h"
#include "../../include/trx0rec.i.hd.c.h"
void __dyc_foo(void) 
{ upd_field_t *upd_field ;
  dict_col_t *col ;
  ulint first_free ;
  unsigned char *ptr ;
  ulint len ;
  unsigned char *field ;
  ulint flen ;
  ulint pos ;
  dulint roll_ptr ;
  dulint trx_id ;
  ulint bits ;
  ulint col_no ;
  unsigned char *old_ptr ;
  ulint type_cmpl ;
  unsigned char *type_cmpl_ptr ;
  ulint i ;
  ulint tmp___1 ;
  ulint tmp___2 ;
  ulint tmp___3 ;
  ulint tmp___4 ;
  ulint tmp___5 ;
  ulint tmp___6 ;
  ulint tmp___7 ;
  ulint tmp___8 ;
  ulint tmp___9 ;
  ulint tmp___10 ;
  ulint tmp___11 ;
  ulint tmp___12 ;
  ulint tmp___13 ;
  ulint tmp___14 ;
  ulint tmp___15 ;
  ulint tmp___16 ;
  ulint tmp___17 ;
  ulint tmp___18 ;
  ulint tmp___19 ;
  ib_page_t *undo_page ;
  trx_t *trx ;
  upd_t *update ;
  ulint cmpl_info ;
  ulint __dyc_funcallvar_3 ;
  ulint __dyc_funcallvar_4 ;
  ulint __dyc_funcallvar_5 ;
  ulint __dyc_funcallvar_6 ;
  ulint __dyc_funcallvar_7 ;
  ulint __dyc_funcallvar_8 ;
  ulint __dyc_funcallvar_9 ;
  unsigned char *__dyc_funcallvar_10 ;
  dulint __dyc_funcallvar_11 ;
  ulint __dyc_funcallvar_12 ;
  unsigned char *__dyc_funcallvar_13 ;
  dulint __dyc_funcallvar_14 ;
  ulint __dyc_funcallvar_15 ;
  ulint __dyc_funcallvar_16 ;
  ulint __dyc_funcallvar_17 ;
  unsigned char *__dyc_funcallvar_18 ;
  ulint __dyc_funcallvar_19 ;
  ulint __dyc_funcallvar_20 ;
  ulint __dyc_funcallvar_21 ;
  ulint __dyc_funcallvar_22 ;
  ulint __dyc_funcallvar_23 ;
  ulint __dyc_funcallvar_24 ;
  ulint __dyc_funcallvar_25 ;
  upd_field_t *__dyc_funcallvar_26 ;
  ulint __dyc_funcallvar_27 ;
  ulint __dyc_funcallvar_28 ;
  unsigned char *__dyc_funcallvar_29 ;
  ulint __dyc_funcallvar_30 ;
  ulint __dyc_funcallvar_31 ;
  ulint __dyc_funcallvar_32 ;
  ulint __dyc_funcallvar_33 ;
  ulint __dyc_funcallvar_34 ;
  ulint __dyc_funcallvar_35 ;
  ulint __dyc_funcallvar_36 ;
  dict_col_t *__dyc_funcallvar_37 ;
  ulint __dyc_funcallvar_38 ;
  ulint __dyc_funcallvar_39 ;
  ulint __dyc_funcallvar_40 ;
  unsigned char *__dyc_funcallvar_41 ;
  ulint __dyc_funcallvar_42 ;
  ulint __dyc_funcallvar_43 ;
  ulint __dyc_funcallvar_44 ;

  {
  flen = (ulint )__dyc_readpre_byte();
  undo_page = __dyc_read_ptr__typdef_ib_page_t();
  trx = __dyc_read_ptr__typdef_trx_t();
  update = __dyc_read_ptr__typdef_upd_t();
  cmpl_info = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_10 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_11 = __dyc_read_comp_93dulint_struct();
  __dyc_funcallvar_12 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_14 = __dyc_read_comp_93dulint_struct();
  __dyc_funcallvar_15 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_16 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_17 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_18 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_19 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_20 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_21 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_22 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_23 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_24 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_25 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_26 = __dyc_read_ptr__typdef_upd_field_t();
  __dyc_funcallvar_27 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_28 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_29 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_30 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_31 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_32 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_33 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_34 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_35 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_36 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_37 = __dyc_read_ptr__typdef_dict_col_t();
  __dyc_funcallvar_38 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_39 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_40 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_41 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_42 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_43 = (ulint )__dyc_readpre_byte();
  __dyc_funcallvar_44 = (ulint )__dyc_readpre_byte();
  upd_field = 0;
  col = 0;
  first_free = 0;
  ptr = 0;
  len = 0;
  field = 0;
  pos = 0;
  memset(& roll_ptr, 0, sizeof(dulint ));
  memset(& trx_id, 0, sizeof(dulint ));
  bits = 0;
  col_no = 0;
  old_ptr = 0;
  type_cmpl = 0;
  type_cmpl_ptr = 0;
  i = 0;
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
  first_free = __dyc_funcallvar_3;
  ptr = undo_page + first_free;
  tmp___1 = __dyc_funcallvar_4;
  if (tmp___1 < 50UL) {
    goto __dyc_dummy_label;
  }
  ptr += 2;
  if (update) {
    {
    tmp___2 = __dyc_funcallvar_5;
    }
    if (tmp___2) {
      type_cmpl = 13UL;
    } else {
      type_cmpl = 12UL;
    }
  } else {
    type_cmpl = 14UL;
  }
  type_cmpl |= cmpl_info * 16UL;

  type_cmpl_ptr = ptr;
  ptr ++;
  len = __dyc_funcallvar_6;
  ptr += len;
  len = __dyc_funcallvar_7;
  ptr += len;
  bits = __dyc_funcallvar_8;

  ptr ++;
  tmp___3 = __dyc_funcallvar_9;
  field = __dyc_funcallvar_10;
  trx_id = __dyc_funcallvar_11;
  tmp___4 = __dyc_funcallvar_12;
  field = __dyc_funcallvar_13;
  roll_ptr = __dyc_funcallvar_14;
  len = __dyc_funcallvar_15;
  ptr += len;
  len = __dyc_funcallvar_16;
  ptr += len;
  i = 0UL;
  while (1) {
    while_26_continue:  ;
    {
    tmp___7 = __dyc_funcallvar_17;
    }
    if (! (i < tmp___7)) {
      goto while_26_break;
    }
    {
    field = __dyc_funcallvar_18;
    tmp___5 = __dyc_funcallvar_19;
    }
    if (tmp___5 < 4UL) {
      goto __dyc_dummy_label;
    }
    {
    len = __dyc_funcallvar_20;
    ptr += len;
    }
    if (flen != 4294967295UL) {
      {
      tmp___6 = __dyc_funcallvar_21;
      }
      if (tmp___6 < flen) {
        goto __dyc_dummy_label;
      }
      {

      ptr += flen;
      }
    }
    i ++;
  }
  while_26_break:  ;
  if (update) {
    {
    tmp___8 = __dyc_funcallvar_22;
    }
    if (tmp___8 < 5UL) {
      goto __dyc_dummy_label;
    }
    {
    tmp___9 = __dyc_funcallvar_23;
    len = __dyc_funcallvar_24;
    ptr += len;
    i = 0UL;
    }
    {
    while (1) {
      while_27_continue:  ;
      {
      tmp___14 = __dyc_funcallvar_25;
      }
      if (! (i < tmp___14)) {
        goto while_27_break;
      }
      {
      upd_field = __dyc_funcallvar_26;
      pos = upd_field->field_no;
      tmp___10 = __dyc_funcallvar_27;
      }
      if (tmp___10 < 5UL) {
        goto __dyc_dummy_label;
      }
      {
      len = __dyc_funcallvar_28;
      ptr += len;
      field = __dyc_funcallvar_29;
      tmp___11 = __dyc_funcallvar_30;
      }
      if (tmp___11 < 5UL) {
        goto __dyc_dummy_label;
      }
      {
      tmp___12 = __dyc_funcallvar_31;
      }
      if (tmp___12) {
        {
        len = __dyc_funcallvar_32;
        (trx->update_undo)->del_marks = 1UL;
        *type_cmpl_ptr = (unsigned char )((int )*type_cmpl_ptr | 128);
        }
      } else {
        {
        len = __dyc_funcallvar_33;
        }
      }
      ptr += len;
      if (flen != 4294967295UL) {
        {
        tmp___13 = __dyc_funcallvar_34;
        }
        if (tmp___13 < flen) {
          goto __dyc_dummy_label;
        }
        {

        ptr += flen;
        }
      }
      i ++;
    }
    while_27_break:  ;
    }
  }
  if (! update) {
    goto _L;
  } else {
    if (! (cmpl_info & 1UL)) {
      _L:  
      {
      (trx->update_undo)->del_marks = 1UL;
      tmp___15 = __dyc_funcallvar_35;
      }
      if (tmp___15 < 5UL) {
        goto __dyc_dummy_label;
      }
      old_ptr = ptr;
      ptr += 2;
      col_no = 0UL;
      {
      while (1) {
        while_28_continue:  ;
        {
        tmp___19 = __dyc_funcallvar_36;
        }
        if (! (col_no < tmp___19)) {
          goto while_28_break;
        }
        {
        col = __dyc_funcallvar_37;
        }
        if (col->ord_part > 0UL) {
          {
          pos = __dyc_funcallvar_38;
          tmp___16 = __dyc_funcallvar_39;
          }
          if (tmp___16 < 5UL) {
            goto __dyc_dummy_label;
          }
          {
          len = __dyc_funcallvar_40;
          ptr += len;
          field = __dyc_funcallvar_41;
          tmp___17 = __dyc_funcallvar_42;
          }
          if (tmp___17 < 5UL) {
            goto __dyc_dummy_label;
          }
          {
          len = __dyc_funcallvar_43;
          ptr += len;
          }
          if (flen != 4294967295UL) {
            {
            tmp___18 = __dyc_funcallvar_44;
            }
            if (tmp___18 < flen) {
              goto __dyc_dummy_label;
            }
            {

            ptr += flen;
            }
          }
        }
        col_no ++;
      }
      while_28_break:  ;
      }
      {

      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(ptr);
  __dyc_print_ptr__char(field);
  __dyc_printpre_byte(pos);
  __dyc_print_comp_93dulint_struct(roll_ptr);
  __dyc_print_comp_93dulint_struct(trx_id);
  __dyc_printpre_byte(bits);
  __dyc_print_ptr__char(old_ptr);
  __dyc_printpre_byte(type_cmpl);
  __dyc_print_ptr__char(type_cmpl_ptr);
  __dyc_printpre_byte(tmp___3);
  __dyc_printpre_byte(tmp___4);
  __dyc_printpre_byte(tmp___9);
}
}
