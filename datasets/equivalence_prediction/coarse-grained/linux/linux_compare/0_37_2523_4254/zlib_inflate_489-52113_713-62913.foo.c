#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char const   *next ;
  unsigned char *put ;
  unsigned int have ;
  unsigned int left ;
  unsigned long hold ;
  unsigned int bits ;
  unsigned int out ;
  unsigned int copy ;
  unsigned char *from ;
  code this ;
  code last ;
  unsigned int len ;
  int ret ;
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
  unsigned char const   *tmp___17 ;
  unsigned char const   *tmp___18 ;
  unsigned char const   *tmp___19 ;
  unsigned char const   *tmp___20 ;
  unsigned char *tmp___21 ;
  unsigned char *tmp___22 ;
  unsigned char *tmp___23 ;
  unsigned char const   *tmp___24 ;
  z_streamp strm ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  uLong __dyc_funcallvar_6 ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  put = (unsigned char *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  left = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  out = (unsigned int )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = (uLong )__dyc_readpre_byte();
  copy = 0;
  from = 0;
  memset(& this, 0, sizeof(code ));
  memset(& last, 0, sizeof(code ));
  len = 0;
  ret = 0;
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
    goto while_70_break;
  }
  while_70_break:  ;
  state->length = (unsigned int )this.val;
  if ((int )this.op == 0) {
    state->mode = 23;
    goto __dyc_dummy_label;
  }
  if ((int )this.op & 32) {
    state->mode = 11;
    goto __dyc_dummy_label;
  }
  if ((int )this.op & 64) {
    strm->msg = (char *)"invalid literal/length code";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  state->extra = (unsigned int )this.op & 15U;
  state->mode = 19;
  switch_5_19:  
  if (state->extra) {
    {
    while (1) {
      while_71_continue:  ;
      {
      while (1) {
        while_72_continue:  ;
        if (! (bits < state->extra)) {
          goto while_72_break;
        }
        {
        while (1) {
          while_73_continue:  ;
          if (have == 0U) {
            goto __dyc_dummy_label;
          }
          have --;
          tmp___17 = next;
          next ++;
          hold += (unsigned long )*tmp___17 << bits;
          bits += 8U;
          goto while_73_break;
        }
        while_73_break:  ;
        }
      }
      while_72_break:  ;
      }
      goto while_71_break;
    }
    while_71_break:  ;
    }
    state->length += (unsigned int )hold & ((1U << state->extra) - 1U);
    {
    while (1) {
      while_74_continue:  ;
      hold >>= state->extra;
      bits -= state->extra;
      goto while_74_break;
    }
    while_74_break:  ;
    }
  }
  state->mode = 20;
  while (1) {
    while_75_continue:  ;
    this = (struct __anonstruct_code_5 )*(state->distcode + ((unsigned int )hold & ((1U << state->distbits) - 1U)));
    if ((unsigned int )this.bits <= bits) {
      goto while_75_break;
    }
    {
    while (1) {
      while_76_continue:  ;
      if (have == 0U) {
        goto __dyc_dummy_label;
      }
      have --;
      tmp___18 = next;
      next ++;
      hold += (unsigned long )*tmp___18 << bits;
      bits += 8U;
      goto while_76_break;
    }
    while_76_break:  ;
    }
  }
  while_75_break:  ;
  if (((int )this.op & 240) == 0) {
    last = this;
    {
    while (1) {
      while_77_continue:  ;
      this = (struct __anonstruct_code_5 )*(state->distcode + ((unsigned int )last.val + (((unsigned int )hold & ((1U << ((int )last.bits + (int )last.op)) - 1U)) >> (int )last.bits)));
      if ((unsigned int )((int )last.bits + (int )this.bits) <= bits) {
        goto while_77_break;
      }
      {
      while (1) {
        while_78_continue:  ;
        if (have == 0U) {
          goto __dyc_dummy_label;
        }
        have --;
        tmp___19 = next;
        next ++;
        hold += (unsigned long )*tmp___19 << bits;
        bits += 8U;
        goto while_78_break;
      }
      while_78_break:  ;
      }
    }
    while_77_break:  ;
    }
    {
    while (1) {
      while_79_continue:  ;
      hold >>= (int )last.bits;
      bits -= (unsigned int )last.bits;
      goto while_79_break;
    }
    while_79_break:  ;
    }
  }
  while (1) {
    while_80_continue:  ;
    hold >>= (int )this.bits;
    bits -= (unsigned int )this.bits;
    goto while_80_break;
  }
  while_80_break:  ;
  if ((int )this.op & 64) {
    strm->msg = (char *)"invalid distance code";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  state->offset = (unsigned int )this.val;
  state->extra = (unsigned int )this.op & 15U;
  state->mode = 21;
  switch_5_21:  
  if (state->extra) {
    {
    while (1) {
      while_81_continue:  ;
      {
      while (1) {
        while_82_continue:  ;
        if (! (bits < state->extra)) {
          goto while_82_break;
        }
        {
        while (1) {
          while_83_continue:  ;
          if (have == 0U) {
            goto __dyc_dummy_label;
          }
          have --;
          tmp___20 = next;
          next ++;
          hold += (unsigned long )*tmp___20 << bits;
          bits += 8U;
          goto while_83_break;
        }
        while_83_break:  ;
        }
      }
      while_82_break:  ;
      }
      goto while_81_break;
    }
    while_81_break:  ;
    }
    state->offset += (unsigned int )hold & ((1U << state->extra) - 1U);
    {
    while (1) {
      while_84_continue:  ;
      hold >>= state->extra;
      bits -= state->extra;
      goto while_84_break;
    }
    while_84_break:  ;
    }
  }
  if (state->offset > (state->whave + out) - left) {
    strm->msg = (char *)"invalid distance too far back";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  state->mode = 22;
  switch_5_22:  
  if (left == 0U) {
    goto __dyc_dummy_label;
  }
  copy = out - left;
  if (state->offset > copy) {
    copy = state->offset - copy;
    if (copy > state->write) {
      copy -= state->write;
      from = state->window + (state->wsize - copy);
    } else {
      from = state->window + (state->write - copy);
    }
    if (copy > state->length) {
      copy = state->length;
    }
  } else {
    from = put - state->offset;
    copy = state->length;
  }
  if (copy > left) {
    copy = left;
  }
  left -= copy;
  state->length -= copy;
  while (1) {
    while_85_continue:  ;
    tmp___21 = put;
    put ++;
    tmp___22 = from;
    from ++;
    *tmp___21 = *tmp___22;
    copy --;
    if (! copy) {
      goto while_85_break;
    }
  }
  while_85_break:  ;
  if (state->length == 0U) {
    state->mode = 18;
  }
  goto __dyc_dummy_label;
  switch_5_23:  
  if (left == 0U) {
    goto __dyc_dummy_label;
  }
  tmp___23 = put;
  put ++;
  *tmp___23 = (unsigned char )state->length;
  left --;
  state->mode = 18;
  goto __dyc_dummy_label;
  switch_5_24:  
  if (state->wrap) {
    {
    while (1) {
      while_86_continue:  ;
      {
      while (1) {
        while_87_continue:  ;
        if (! (bits < 32U)) {
          goto while_87_break;
        }
        {
        while (1) {
          while_88_continue:  ;
          if (have == 0U) {
            goto __dyc_dummy_label;
          }
          have --;
          tmp___24 = next;
          next ++;
          hold += (unsigned long )*tmp___24 << bits;
          bits += 8U;
          goto while_88_break;
        }
        while_88_break:  ;
        }
      }
      while_87_break:  ;
      }
      goto while_86_break;
    }
    while_86_break:  ;
    }
    out -= left;
    strm->total_out += (uLong )out;
    state->total += (unsigned long )out;
    if (out) {
      {
      state->check = __dyc_funcallvar_6;
      strm->adler = state->check;
      }
    }
    out = left;
    if (((((hold >> 24) & 255UL) + ((hold >> 8) & 65280UL)) + ((hold & 65280UL) << 8)) + ((hold & 255UL) << 24) != state->check) {
      strm->msg = (char *)"incorrect data check";
      state->mode = 27;
      goto __dyc_dummy_label;
    }
    {
    while (1) {
      while_89_continue:  ;
      hold = 0UL;
      bits = 0U;
      goto while_89_break;
    }
    while_89_break:  ;
    }
  }
  state->mode = 26;
  switch_5_26:  
  ret = 1;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_print_ptr__char(put);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(left);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
  __dyc_printpre_byte(out);
  __dyc_printpre_byte(copy);
  __dyc_print_ptr__char(from);
  __dyc_printpre_byte(len);
  __dyc_printpre_byte(ret);
}
}
