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

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  left = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  out = (unsigned int )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  tmp___24 = 0;
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
  out -= left;
  strm->total_out += (uLong )out;
  state->total += (unsigned long )out;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(hold);
}
}
