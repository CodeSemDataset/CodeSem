#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char const   *next ;
  unsigned int have ;
  unsigned long hold ;
  unsigned int bits ;
  code this ;
  unsigned char const   *tmp___7 ;
  z_streamp strm ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  memset(& this, 0, sizeof(code ));
  tmp___7 = 0;
  strm->msg = (char *)"invalid code lengths set";
  state->mode = 27;
  goto __dyc_dummy_label;
  while_40_continue:  ;
  if (! (state->have < state->nlen + state->ndist)) {
    goto __dyc_dummy_label;
  }
  while (1) {
    while_41_continue:  ;
    this = (struct __anonstruct_code_5 )*(state->lencode + ((unsigned int )hold & ((1U << state->lenbits) - 1U)));
    if ((unsigned int )this.bits <= bits) {
      goto __dyc_dummy_label;
    }
    {
    while (1) {
      while_42_continue:  ;
      if (have == 0U) {
        goto __dyc_dummy_label;
      }
      have --;
      tmp___7 = next;
      next ++;
      hold += (unsigned long )*tmp___7 << bits;
      bits += 8U;
      goto while_42_break;
    }
    while_42_break:  ;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_printpre_byte(have);
}
}
