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
  unsigned int in ;
  unsigned int out ;
  int ret ;
  z_streamp strm ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  strm = __dyc_read_ptr__typdef_z_stream();
  next = 0;
  put = 0;
  have = 0;
  left = 0;
  hold = 0;
  bits = 0;
  in = 0;
  out = 0;
  ret = 0;
  while (1) {
    while_3_continue:  ;
    put = strm->next_out;
    left = strm->avail_out;
    next = strm->next_in;
    have = strm->avail_in;
    hold = state->hold;
    bits = state->bits;
    goto while_3_break;
  }
  while_3_break:  ;
  in = have;
  out = left;
  ret = 0;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_print_ptr__char(put);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
  __dyc_printpre_byte(in);
  __dyc_printpre_byte(out);
  __dyc_printpre_byte(ret);
}
}
