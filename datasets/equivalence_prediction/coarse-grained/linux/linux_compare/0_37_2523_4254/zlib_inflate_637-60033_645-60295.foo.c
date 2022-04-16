#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char const   *next ;
  unsigned int have ;
  unsigned long hold ;
  unsigned int bits ;
  unsigned char const   *tmp___20 ;
  z_streamp strm ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  tmp___20 = 0;
  strm->msg = (char *)"invalid distance code";
  state->mode = 27;
  goto __dyc_dummy_label;
  while (1) {
    while_81_continue:  ;
    {
    while (1) {
      while_82_continue:  ;
      if (! (bits < state->extra)) {
        goto while_82_break;
      }
      {
      while (1) {
        while_83_continue:  ;
        if (have == 0U) {
          goto __dyc_dummy_label;
        }
        have --;
        tmp___20 = next;
        next ++;
        hold += (unsigned long )*tmp___20 << bits;
        bits += 8U;
        goto while_83_break;
      }
      while_83_break:  ;
      }
    }
    while_82_break:  ;
    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(hold);
}
}
