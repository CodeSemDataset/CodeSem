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
  int ret ;
  unsigned char const   *tmp___17 ;
  unsigned char const   *tmp___18 ;
  unsigned char const   *tmp___19 ;
  unsigned char const   *tmp___20 ;
  unsigned char *tmp___21 ;
  unsigned char *tmp___22 ;
  unsigned char *tmp___23 ;
  unsigned char const   *tmp___24 ;
  z_streamp strm ;
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
  this = __dyc_read_comp_16__anonstruct_code_5();
  strm = __dyc_read_ptr__typdef_z_stream();
  __dyc_funcallvar_6 = (uLong )__dyc_readpre_byte();
  copy = 0;
  from = 0;
  memset(& last, 0, sizeof(code ));
  ret = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
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
  goto __dyc_dummy_label;
  switch_5_27:  
  ret = -3;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_print_ptr__char(put);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(left);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
  __dyc_printpre_byte(out);
  __dyc_print_ptr__char(from);
  __dyc_printpre_byte(ret);
}
}
