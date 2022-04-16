#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char const   *next ;
  unsigned int have ;
  unsigned int left ;
  unsigned long hold ;
  unsigned int bits ;
  unsigned int out ;
  unsigned char const   *tmp___24 ;
  z_streamp strm ;
  uLong __dyc_funcallvar_6 ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  left = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  out = (unsigned int )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  __dyc_funcallvar_6 = (uLong )__dyc_readpre_byte();
  tmp___24 = 0;
  switch_5_24:  
  if (state->wrap) {
    {
    while (1) {
      while_86_continue:  ;
      {
      while (1) {
        while_87_continue:  ;
        if (! (bits < 32U)) {
          goto while_87_break;
        }
        {
        while (1) {
          while_88_continue:  ;
          if (have == 0U) {
            goto __dyc_dummy_label;
          }
          have --;
          tmp___24 = next;
          next ++;
          hold += (unsigned long )*tmp___24 << bits;
          bits += 8U;
          goto while_88_break;
        }
        while_88_break:  ;
        }
      }
      while_87_break:  ;
      }
      goto while_86_break;
    }
    while_86_break:  ;
    }
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
    {
    while (1) {
      while_89_continue:  ;
      hold = 0UL;
      bits = 0U;
      goto while_89_break;
    }
    while_89_break:  ;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
  __dyc_printpre_byte(out);
}
}
