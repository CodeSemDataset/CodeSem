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
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
}
}
