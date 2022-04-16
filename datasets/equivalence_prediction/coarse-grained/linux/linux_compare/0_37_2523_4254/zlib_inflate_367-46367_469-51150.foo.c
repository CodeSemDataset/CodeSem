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
  unsigned int copy ;
  unsigned int len ;
  unsigned char const   *tmp ;
  unsigned char const   *tmp___0 ;
  unsigned char const   *tmp___1 ;
  unsigned char const   *tmp___2 ;
  unsigned char const   *tmp___3 ;
  z_streamp strm ;
  int flush ;
  uLong __dyc_funcallvar_1 ;
  uLong __dyc_funcallvar_2 ;

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
  copy = 0;
  len = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  switch_5_0:  
  if (state->wrap == 0) {
    state->mode = 12;
    goto __dyc_dummy_label;
  }
  while (1) {
    while_6_continue:  ;
    {
    while (1) {
      while_7_continue:  ;
      if (! (bits < 16U)) {
        goto while_7_break;
      }
      {
      while (1) {
        while_8_continue:  ;
        if (have == 0U) {
          goto __dyc_dummy_label;
        }
        have --;
        tmp = next;
        next ++;
        hold += (unsigned long )*tmp << bits;
        bits += 8U;
        goto while_8_break;
      }
      while_8_break:  ;
      }
    }
    while_7_break:  ;
    }
    goto while_6_break;
  }
  while_6_break:  ;
  if (((unsigned long )(((unsigned int )hold & ((1U << 8) - 1U)) << 8) + (hold >> 8)) % 31UL) {
    strm->msg = (char *)"incorrect header check";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  if (((unsigned int )hold & ((1U << 4) - 1U)) != 8U) {
    strm->msg = (char *)"unknown compression method";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
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
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_print_ptr__char(put);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(left);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
}
}
