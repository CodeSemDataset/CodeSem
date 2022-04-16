#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned long hold ;
  unsigned int bits ;
  unsigned int len ;
  z_streamp strm ;
  uLong __dyc_funcallvar_1 ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  hold = (unsigned long )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  __dyc_funcallvar_1 = (uLong )__dyc_readpre_byte();
  bits = 0;
  len = 0;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
}
}
