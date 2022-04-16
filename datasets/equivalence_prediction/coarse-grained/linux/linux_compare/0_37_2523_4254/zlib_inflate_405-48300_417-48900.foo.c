#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char const   *next ;
  unsigned int have ;
  unsigned long hold ;
  unsigned int bits ;
  unsigned char const   *tmp___1 ;
  z_streamp strm ;
  int flush ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  flush = __dyc_readpre_byte();
  tmp___1 = 0;
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
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
}
}
