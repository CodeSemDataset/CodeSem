#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned long hold ;
  unsigned int bits ;
  z_streamp strm ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();

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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
}
}
