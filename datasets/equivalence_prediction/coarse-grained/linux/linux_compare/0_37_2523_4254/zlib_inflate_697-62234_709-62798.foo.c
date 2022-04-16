#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned int left ;
  unsigned long hold ;
  unsigned int bits ;
  unsigned int out ;
  z_streamp strm ;
  uLong __dyc_funcallvar_6 ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  left = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  out = (unsigned int )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  __dyc_funcallvar_6 = (uLong )__dyc_readpre_byte();
  bits = 0;
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
  while (1) {
    while_89_continue:  ;
    hold = 0UL;
    bits = 0U;
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
  __dyc_printpre_byte(out);
}
}
