#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char const   *next ;
  unsigned int have ;
  unsigned long hold ;
  unsigned int bits ;
  unsigned char const   *tmp___2 ;
  z_streamp strm ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  tmp___2 = 0;
  while (1) {
    while_24_continue:  ;
    {
    while (1) {
      while_25_continue:  ;
      if (! (bits < 32U)) {
        goto while_25_break;
      }
      {
      while (1) {
        while_26_continue:  ;
        if (have == 0U) {
          goto __dyc_dummy_label;
        }
        have --;
        tmp___2 = next;
        next ++;
        hold += (unsigned long )*tmp___2 << bits;
        bits += 8U;
        goto while_26_break;
      }
      while_26_break:  ;
      }
    }
    while_25_break:  ;
    }
    goto while_24_break;
  }
  while_24_break:  ;
  if ((hold & 65535UL) != ((hold >> 16) ^ 65535UL)) {
    strm->msg = (char *)"invalid stored block lengths";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  state->length = (unsigned int )hold & 65535U;
  while (1) {
    while_27_continue:  ;
    hold = 0UL;
    bits = 0U;
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
}
}
