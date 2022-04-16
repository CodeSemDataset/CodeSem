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
  z_streamp strm ;
  int flush ;
  uLong __dyc_funcallvar_2 ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  put = (unsigned char *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  left = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  flush = __dyc_readpre_byte();
  __dyc_funcallvar_2 = (uLong )__dyc_readpre_byte();
  bits = 0;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
}
}
