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
  unsigned char const   *tmp___3 ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  put = (unsigned char *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  left = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  copy = 0;
  tmp___3 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_print_ptr__char(put);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(left);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
}
}
