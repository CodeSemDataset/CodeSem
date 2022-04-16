#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char const   *next ;
  unsigned int have ;
  unsigned long hold ;
  unsigned int bits ;
  unsigned int len ;
  unsigned char const   *tmp ;
  z_streamp strm ;
  uLong __dyc_funcallvar_1 ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  __dyc_funcallvar_1 = (uLong )__dyc_readpre_byte();
  len = 0;
  tmp = 0;
  while (1) {
    while_6_continue:  ;
    {
    while (1) {
      while_7_continue:  ;
      if (! (bits < 16U)) {
        goto while_7_break;
      }
      {
      while (1) {
        while_8_continue:  ;
        if (have == 0U) {
          goto __dyc_dummy_label;
        }
        have --;
        tmp = next;
        next ++;
        hold += (unsigned long )*tmp << bits;
        bits += 8U;
        goto while_8_break;
      }
      while_8_break:  ;
      }
    }
    while_7_break:  ;
    }
    goto while_6_break;
  }
  while_6_break:  ;
  if (((unsigned long )(((unsigned int )hold & ((1U << 8) - 1U)) << 8) + (hold >> 8)) % 31UL) {
    strm->msg = (char *)"incorrect header check";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  if (((unsigned int )hold & ((1U << 4) - 1U)) != 8U) {
    strm->msg = (char *)"unknown compression method";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  while (1) {
    while_9_continue:  ;
    hold >>= 4;
    bits -= 4U;
    goto while_9_break;
  }
  while_9_break:  ;
  len = ((unsigned int )hold & ((1U << 4) - 1U)) + 8U;
  if (len > state->wbits) {
    strm->msg = (char *)"invalid window size";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  state->dmax = 1U << len;
  state->check = __dyc_funcallvar_1;
  strm->adler = state->check;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
}
}
