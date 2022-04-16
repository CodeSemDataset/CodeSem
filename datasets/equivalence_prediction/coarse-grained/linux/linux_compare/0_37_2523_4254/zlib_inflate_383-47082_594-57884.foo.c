#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned short const   order[19] ;
  struct inflate_state *state ;
  unsigned char const   *next ;
  unsigned char *put ;
  unsigned int have ;
  unsigned int left ;
  unsigned long hold ;
  unsigned int bits ;
  unsigned int copy ;
  code this ;
  code last ;
  unsigned int len ;
  int ret ;
  unsigned char const   *tmp___0 ;
  unsigned char const   *tmp___1 ;
  unsigned char const   *tmp___2 ;
  unsigned char const   *tmp___3 ;
  unsigned char const   *tmp___4 ;
  unsigned int tmp___5 ;
  unsigned int tmp___6 ;
  unsigned char const   *tmp___7 ;
  unsigned char const   *tmp___8 ;
  unsigned int tmp___9 ;
  unsigned char const   *tmp___10 ;
  unsigned char const   *tmp___11 ;
  unsigned char const   *tmp___12 ;
  unsigned int tmp___13 ;
  unsigned int tmp___14 ;
  unsigned char const   *tmp___15 ;
  unsigned char const   *tmp___16 ;
  z_streamp strm ;
  int flush ;
  uLong __dyc_funcallvar_1 ;
  uLong __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  put = (unsigned char *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  left = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  flush = __dyc_readpre_byte();
  __dyc_funcallvar_1 = (uLong )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (uLong )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  copy = 0;
  memset(& this, 0, sizeof(code ));
  memset(& last, 0, sizeof(code ));
  len = 0;
  ret = 0;
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
  while (1) {
    while_9_continue:  ;
    hold >>= 4;
    bits -= 4U;
    goto while_9_break;
  }
  while_9_break:  ;
  len = ((unsigned int )hold & ((1U << 4) - 1U)) + 8U;
  if (len > state->wbits) {
    strm->msg = (char *)"invalid window size";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  state->dmax = 1U << len;
  state->check = __dyc_funcallvar_1;
  strm->adler = state->check;
  if (hold & 512UL) {
    state->mode = 9;
  } else {
    state->mode = 11;
  }
  while (1) {
    while_10_continue:  ;
    hold = 0UL;
    bits = 0U;
    goto while_10_break;
  }
  while_10_break:  ;
  goto __dyc_dummy_label;
  while (1) {
    while_11_continue:  ;
    {
    while (1) {
      while_12_continue:  ;
      if (! (bits < 32U)) {
        goto while_12_break;
      }
      {
      while (1) {
        while_13_continue:  ;
        if (have == 0U) {
          goto __dyc_dummy_label;
        }
        have --;
        tmp___0 = next;
        next ++;
        hold += (unsigned long )*tmp___0 << bits;
        bits += 8U;
        goto while_13_break;
      }
      while_13_break:  ;
      }
    }
    while_12_break:  ;
    }
    goto while_11_break;
  }
  while_11_break:  ;
  state->check = ((((hold >> 24) & 255UL) + ((hold >> 8) & 65280UL)) + ((hold & 65280UL) << 8)) + ((hold & 255UL) << 24);
  strm->adler = state->check;
  while (1) {
    while_14_continue:  ;
    hold = 0UL;
    bits = 0U;
    goto while_14_break;
  }
  while_14_break:  ;
  state->mode = 10;
  switch_5_10:  
  if (state->havedict == 0) {
    {
    while (1) {
      while_15_continue:  ;
      strm->next_out = put;
      strm->avail_out = left;
      strm->next_in = next;
      strm->avail_in = have;
      state->hold = hold;
      state->bits = bits;
      goto while_15_break;
    }
    while_15_break:  ;
    }
    goto __dyc_dummy_label;
  }
  state->check = __dyc_funcallvar_2;
  strm->adler = state->check;
  state->mode = 11;
  switch_5_11:  
  if (flush == 6) {
    goto __dyc_dummy_label;
  }
  switch_5_12:  
  if (state->last) {
    {
    while (1) {
      while_16_continue:  ;
      hold >>= bits & 7U;
      bits -= bits & 7U;
      goto while_16_break;
    }
    while_16_break:  ;
    }
    state->mode = 24;
    goto __dyc_dummy_label;
  }
  while (1) {
    while_17_continue:  ;
    {
    while (1) {
      while_18_continue:  ;
      if (! (bits < 3U)) {
        goto while_18_break;
      }
      {
      while (1) {
        while_19_continue:  ;
        if (have == 0U) {
          goto __dyc_dummy_label;
        }
        have --;
        tmp___1 = next;
        next ++;
        hold += (unsigned long )*tmp___1 << bits;
        bits += 8U;
        goto while_19_break;
      }
      while_19_break:  ;
      }
    }
    while_18_break:  ;
    }
    goto while_17_break;
  }
  while_17_break:  ;
  state->last = (int )((unsigned int )hold & ((1U << 1) - 1U));
  while (1) {
    while_20_continue:  ;
    hold >>= 1;
    bits --;
    goto while_20_break;
  }
  while_20_break:  ;
  if ((int )((unsigned int )hold & ((1U << 2) - 1U)) == 0) {
    goto switch_21_0;
  } else {
    if ((int )((unsigned int )hold & ((1U << 2) - 1U)) == 1) {
      goto switch_21_1;
    } else {
      if ((int )((unsigned int )hold & ((1U << 2) - 1U)) == 2) {
        goto switch_21_2;
      } else {
        if ((int )((unsigned int )hold & ((1U << 2) - 1U)) == 3) {
          goto switch_21_3;
        } else {
          if (0) {
            switch_21_0:  
            state->mode = 13;
            goto switch_21_break;
            switch_21_1:  
            {

            state->mode = 18;
            }
            goto switch_21_break;
            switch_21_2:  
            state->mode = 15;
            goto switch_21_break;
            switch_21_3:  
            strm->msg = (char *)"invalid block type";
            state->mode = 27;
          } else {
            switch_21_break:  ;
          }
        }
      }
    }
  }
  while (1) {
    while_22_continue:  ;
    hold >>= 2;
    bits -= 2U;
    goto while_22_break;
  }
  while_22_break:  ;
  goto __dyc_dummy_label;
  while (1) {
    while_23_continue:  ;
    hold >>= bits & 7U;
    bits -= bits & 7U;
    goto while_23_break;
  }
  while_23_break:  ;
  while (1) {
    while_24_continue:  ;
    {
    while (1) {
      while_25_continue:  ;
      if (! (bits < 32U)) {
        goto while_25_break;
      }
      {
      while (1) {
        while_26_continue:  ;
        if (have == 0U) {
          goto __dyc_dummy_label;
        }
        have --;
        tmp___2 = next;
        next ++;
        hold += (unsigned long )*tmp___2 << bits;
        bits += 8U;
        goto while_26_break;
      }
      while_26_break:  ;
      }
    }
    while_25_break:  ;
    }
    goto while_24_break;
  }
  while_24_break:  ;
  if ((hold & 65535UL) != ((hold >> 16) ^ 65535UL)) {
    strm->msg = (char *)"invalid stored block lengths";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  state->length = (unsigned int )hold & 65535U;
  while (1) {
    while_27_continue:  ;
    hold = 0UL;
    bits = 0U;
    goto while_27_break;
  }
  while_27_break:  ;
  state->mode = 14;
  switch_5_14:  
  copy = state->length;
  if (copy) {
    if (copy > have) {
      copy = have;
    }
    if (copy > left) {
      copy = left;
    }
    if (copy == 0U) {
      goto __dyc_dummy_label;
    }
    {

    have -= copy;
    next += copy;
    left -= copy;
    put += copy;
    state->length -= copy;
    }
    goto __dyc_dummy_label;
  }
  state->mode = 11;
  goto __dyc_dummy_label;
  while (1) {
    while_28_continue:  ;
    {
    while (1) {
      while_29_continue:  ;
      if (! (bits < 14U)) {
        goto while_29_break;
      }
      {
      while (1) {
        while_30_continue:  ;
        if (have == 0U) {
          goto __dyc_dummy_label;
        }
        have --;
        tmp___3 = next;
        next ++;
        hold += (unsigned long )*tmp___3 << bits;
        bits += 8U;
        goto while_30_break;
      }
      while_30_break:  ;
      }
    }
    while_29_break:  ;
    }
    goto while_28_break;
  }
  while_28_break:  ;
  state->nlen = ((unsigned int )hold & ((1U << 5) - 1U)) + 257U;
  while (1) {
    while_31_continue:  ;
    hold >>= 5;
    bits -= 5U;
    goto while_31_break;
  }
  while_31_break:  ;
  state->ndist = ((unsigned int )hold & ((1U << 5) - 1U)) + 1U;
  while (1) {
    while_32_continue:  ;
    hold >>= 5;
    bits -= 5U;
    goto while_32_break;
  }
  while_32_break:  ;
  state->ncode = ((unsigned int )hold & ((1U << 4) - 1U)) + 4U;
  while (1) {
    while_33_continue:  ;
    hold >>= 4;
    bits -= 4U;
    goto while_33_break;
  }
  while_33_break:  ;
  if (state->nlen > 286U) {
    strm->msg = (char *)"too many length or distance symbols";
    state->mode = 27;
    goto __dyc_dummy_label;
  } else {
    if (state->ndist > 30U) {
      strm->msg = (char *)"too many length or distance symbols";
      state->mode = 27;
      goto __dyc_dummy_label;
    }
  }
  state->have = 0U;
  state->mode = 16;
  while (1) {
    while_34_continue:  ;
    if (! (state->have < state->ncode)) {
      goto while_34_break;
    }
    {
    while (1) {
      while_35_continue:  ;
      {
      while (1) {
        while_36_continue:  ;
        if (! (bits < 3U)) {
          goto while_36_break;
        }
        {
        while (1) {
          while_37_continue:  ;
          if (have == 0U) {
            goto __dyc_dummy_label;
          }
          have --;
          tmp___4 = next;
          next ++;
          hold += (unsigned long )*tmp___4 << bits;
          bits += 8U;
          goto while_37_break;
        }
        while_37_break:  ;
        }
      }
      while_36_break:  ;
      }
      goto while_35_break;
    }
    while_35_break:  ;
    }
    tmp___5 = state->have;
    (state->have) ++;
    state->lens[order[tmp___5]] = (unsigned short )((unsigned int )hold & ((1U << 3) - 1U));
    {
    while (1) {
      while_38_continue:  ;
      hold >>= 3;
      bits -= 3U;
      goto while_38_break;
    }
    while_38_break:  ;
    }
  }
  while_34_break:  ;
  while (1) {
    while_39_continue:  ;
    if (! (state->have < 19U)) {
      goto while_39_break;
    }
    tmp___6 = state->have;
    (state->have) ++;
    state->lens[order[tmp___6]] = (unsigned short)0;
  }
  while_39_break:  ;
  state->next = state->codes;
  state->lencode = (code const   *)state->next;
  state->lenbits = 7U;
  ret = __dyc_funcallvar_3;
  if (ret) {
    strm->msg = (char *)"invalid code lengths set";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  state->have = 0U;
  state->mode = 17;
  while (1) {
    while_40_continue:  ;
    if (! (state->have < state->nlen + state->ndist)) {
      goto while_40_break;
    }
    {
    while (1) {
      while_41_continue:  ;
      this = (struct __anonstruct_code_5 )*(state->lencode + ((unsigned int )hold & ((1U << state->lenbits) - 1U)));
      if ((unsigned int )this.bits <= bits) {
        goto while_41_break;
      }
      {
      while (1) {
        while_42_continue:  ;
        if (have == 0U) {
          goto __dyc_dummy_label;
        }
        have --;
        tmp___7 = next;
        next ++;
        hold += (unsigned long )*tmp___7 << bits;
        bits += 8U;
        goto while_42_break;
      }
      while_42_break:  ;
      }
    }
    while_41_break:  ;
    }
    if ((int )this.val < 16) {
      {
      while (1) {
        while_43_continue:  ;
        {
        while (1) {
          while_44_continue:  ;
          if (! (bits < (unsigned int )this.bits)) {
            goto while_44_break;
          }
          {
          while (1) {
            while_45_continue:  ;
            if (have == 0U) {
              goto __dyc_dummy_label;
            }
            have --;
            tmp___8 = next;
            next ++;
            hold += (unsigned long )*tmp___8 << bits;
            bits += 8U;
            goto while_45_break;
          }
          while_45_break:  ;
          }
        }
        while_44_break:  ;
        }
        goto while_43_break;
      }
      while_43_break:  ;
      }
      {
      while (1) {
        while_46_continue:  ;
        hold >>= (int )this.bits;
        bits -= (unsigned int )this.bits;
        goto while_46_break;
      }
      while_46_break:  ;
      }
      tmp___9 = state->have;
      (state->have) ++;
      state->lens[tmp___9] = this.val;
    } else {
      if ((int )this.val == 16) {
        {
        while (1) {
          while_47_continue:  ;
          {
          while (1) {
            while_48_continue:  ;
            if (! (bits < (unsigned int )((int )this.bits + 2))) {
              goto while_48_break;
            }
            {
            while (1) {
              while_49_continue:  ;
              if (have == 0U) {
                goto __dyc_dummy_label;
              }
              have --;
              tmp___10 = next;
              next ++;
              hold += (unsigned long )*tmp___10 << bits;
              bits += 8U;
              goto while_49_break;
            }
            while_49_break:  ;
            }
          }
          while_48_break:  ;
          }
          goto while_47_break;
        }
        while_47_break:  ;
        }
        {
        while (1) {
          while_50_continue:  ;
          hold >>= (int )this.bits;
          bits -= (unsigned int )this.bits;
          goto while_50_break;
        }
        while_50_break:  ;
        }
        if (state->have == 0U) {
          strm->msg = (char *)"invalid bit length repeat";
          state->mode = 27;
          goto while_40_break;
        }
        len = (unsigned int )state->lens[state->have - 1U];
        copy = 3U + ((unsigned int )hold & ((1U << 2) - 1U));
        {
        while (1) {
          while_51_continue:  ;
          hold >>= 2;
          bits -= 2U;
          goto while_51_break;
        }
        while_51_break:  ;
        }
      } else {
        if ((int )this.val == 17) {
          {
          while (1) {
            while_52_continue:  ;
            {
            while (1) {
              while_53_continue:  ;
              if (! (bits < (unsigned int )((int )this.bits + 3))) {
                goto while_53_break;
              }
              {
              while (1) {
                while_54_continue:  ;
                if (have == 0U) {
                  goto __dyc_dummy_label;
                }
                have --;
                tmp___11 = next;
                next ++;
                hold += (unsigned long )*tmp___11 << bits;
                bits += 8U;
                goto while_54_break;
              }
              while_54_break:  ;
              }
            }
            while_53_break:  ;
            }
            goto while_52_break;
          }
          while_52_break:  ;
          }
          {
          while (1) {
            while_55_continue:  ;
            hold >>= (int )this.bits;
            bits -= (unsigned int )this.bits;
            goto while_55_break;
          }
          while_55_break:  ;
          }
          len = 0U;
          copy = 3U + ((unsigned int )hold & ((1U << 3) - 1U));
          {
          while (1) {
            while_56_continue:  ;
            hold >>= 3;
            bits -= 3U;
            goto while_56_break;
          }
          while_56_break:  ;
          }
        } else {
          {
          while (1) {
            while_57_continue:  ;
            {
            while (1) {
              while_58_continue:  ;
              if (! (bits < (unsigned int )((int )this.bits + 7))) {
                goto while_58_break;
              }
              {
              while (1) {
                while_59_continue:  ;
                if (have == 0U) {
                  goto __dyc_dummy_label;
                }
                have --;
                tmp___12 = next;
                next ++;
                hold += (unsigned long )*tmp___12 << bits;
                bits += 8U;
                goto while_59_break;
              }
              while_59_break:  ;
              }
            }
            while_58_break:  ;
            }
            goto while_57_break;
          }
          while_57_break:  ;
          }
          {
          while (1) {
            while_60_continue:  ;
            hold >>= (int )this.bits;
            bits -= (unsigned int )this.bits;
            goto while_60_break;
          }
          while_60_break:  ;
          }
          len = 0U;
          copy = 11U + ((unsigned int )hold & ((1U << 7) - 1U));
          {
          while (1) {
            while_61_continue:  ;
            hold >>= 7;
            bits -= 7U;
            goto while_61_break;
          }
          while_61_break:  ;
          }
        }
      }
      if (state->have + copy > state->nlen + state->ndist) {
        strm->msg = (char *)"invalid bit length repeat";
        state->mode = 27;
        goto while_40_break;
      }
      {
      while (1) {
        while_62_continue:  ;
        tmp___14 = copy;
        copy --;
        if (! tmp___14) {
          goto while_62_break;
        }
        tmp___13 = state->have;
        (state->have) ++;
        state->lens[tmp___13] = (unsigned short )len;
      }
      while_62_break:  ;
      }
    }
  }
  while_40_break:  ;
  if ((int )state->mode == 27) {
    goto __dyc_dummy_label;
  }
  state->next = state->codes;
  state->lencode = (code const   *)state->next;
  state->lenbits = 9U;
  ret = __dyc_funcallvar_4;
  if (ret) {
    strm->msg = (char *)"invalid literal/lengths set";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  state->distcode = (code const   *)state->next;
  state->distbits = 6U;
  ret = __dyc_funcallvar_5;
  if (ret) {
    strm->msg = (char *)"invalid distances set";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  state->mode = 18;
  switch_5_18:  
  if (have >= 6U) {
    if (left >= 258U) {
      {
      while (1) {
        while_63_continue:  ;
        strm->next_out = put;
        strm->avail_out = left;
        strm->next_in = next;
        strm->avail_in = have;
        state->hold = hold;
        state->bits = bits;
        goto while_63_break;
      }
      while_63_break:  ;
      }
      {

      }
      {
      while (1) {
        while_64_continue:  ;
        put = strm->next_out;
        left = strm->avail_out;
        next = strm->next_in;
        have = strm->avail_in;
        hold = state->hold;
        bits = state->bits;
        goto while_64_break;
      }
      while_64_break:  ;
      }
      goto __dyc_dummy_label;
    }
  }
  while (1) {
    while_65_continue:  ;
    this = (struct __anonstruct_code_5 )*(state->lencode + ((unsigned int )hold & ((1U << state->lenbits) - 1U)));
    if ((unsigned int )this.bits <= bits) {
      goto while_65_break;
    }
    {
    while (1) {
      while_66_continue:  ;
      if (have == 0U) {
        goto __dyc_dummy_label;
      }
      have --;
      tmp___15 = next;
      next ++;
      hold += (unsigned long )*tmp___15 << bits;
      bits += 8U;
      goto while_66_break;
    }
    while_66_break:  ;
    }
  }
  while_65_break:  ;
  if (this.op) {
    if (((int )this.op & 240) == 0) {
      last = this;
      {
      while (1) {
        while_67_continue:  ;
        this = (struct __anonstruct_code_5 )*(state->lencode + ((unsigned int )last.val + (((unsigned int )hold & ((1U << ((int )last.bits + (int )last.op)) - 1U)) >> (int )last.bits)));
        if ((unsigned int )((int )last.bits + (int )this.bits) <= bits) {
          goto while_67_break;
        }
        {
        while (1) {
          while_68_continue:  ;
          if (have == 0U) {
            goto __dyc_dummy_label;
          }
          have --;
          tmp___16 = next;
          next ++;
          hold += (unsigned long )*tmp___16 << bits;
          bits += 8U;
          goto while_68_break;
        }
        while_68_break:  ;
        }
      }
      while_67_break:  ;
      }
      {
      while (1) {
        while_69_continue:  ;
        hold >>= (int )last.bits;
        bits -= (unsigned int )last.bits;
        goto while_69_break;
      }
      while_69_break:  ;
      }
    }
  }
  while (1) {
    while_70_continue:  ;
    hold >>= (int )this.bits;
    bits -= (unsigned int )this.bits;
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_print_ptr__char(put);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(left);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
  __dyc_printpre_byte(copy);
  __dyc_printpre_byte(len);
}
}
