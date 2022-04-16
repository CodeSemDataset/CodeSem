#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char const   *next ;
  unsigned int have ;
  unsigned long hold ;
  unsigned int bits ;
  unsigned int len ;
  unsigned char const   *tmp___0 ;
  z_streamp strm ;
  uLong __dyc_funcallvar_1 ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  len = (unsigned int )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  __dyc_funcallvar_1 = (uLong )__dyc_readpre_byte();
  tmp___0 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
}
}
