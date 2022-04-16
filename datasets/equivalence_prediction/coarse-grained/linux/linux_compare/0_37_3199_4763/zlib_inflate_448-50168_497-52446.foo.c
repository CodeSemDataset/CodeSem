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
  int ret ;
  unsigned char const   *tmp___3 ;
  unsigned char const   *tmp___4 ;
  unsigned int tmp___5 ;
  unsigned int tmp___6 ;
  z_streamp strm ;
  int __dyc_funcallvar_3 ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  put = (unsigned char *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  left = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  copy = (unsigned int )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  ret = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_print_ptr__char(put);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(left);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
}
}
