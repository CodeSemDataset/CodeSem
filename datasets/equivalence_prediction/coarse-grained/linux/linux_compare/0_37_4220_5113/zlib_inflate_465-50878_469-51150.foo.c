#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned long hold ;
  unsigned int bits ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();

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
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
}
}
