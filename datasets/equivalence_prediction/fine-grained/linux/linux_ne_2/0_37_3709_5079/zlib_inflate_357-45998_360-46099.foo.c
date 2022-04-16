#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char const   *next ;
  unsigned char *put ;
  unsigned int have ;
  unsigned int left ;
  unsigned long hold ;
  unsigned int bits ;
  z_streamp strm ;

  {
  strm = __dyc_read_ptr__typdef_z_stream();
  state = 0;
  next = 0;
  put = 0;
  have = 0;
  left = 0;
  hold = 0;
  bits = 0;
  state = (struct inflate_state *)strm->state;
  if ((int )state->mode == 11) {
    state->mode = 12;
  }
  while (1) {
    while_3_continue:  ;
    put = strm->next_out;
    left = strm->avail_out;
    next = strm->next_in;
    have = strm->avail_in;
    hold = state->hold;
    bits = state->bits;
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_print_ptr__char(put);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(left);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
}
}
