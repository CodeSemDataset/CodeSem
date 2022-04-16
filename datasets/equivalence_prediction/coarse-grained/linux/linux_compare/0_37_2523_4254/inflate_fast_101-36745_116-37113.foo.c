#include "../../include/dycfoo.h"
#include "../../include/inffast.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char const   *in ;
  unsigned char const   *last ;
  unsigned char *out ;
  unsigned char *beg ;
  unsigned char *end ;
  unsigned int wsize ;
  unsigned int whave ;
  unsigned int write ;
  unsigned char *window ;
  unsigned long hold ;
  unsigned int bits ;
  code const   *lcode ;
  code const   *dcode ;
  unsigned int lmask ;
  unsigned int dmask ;
  z_streamp strm ;
  unsigned int start ;

  {
  strm = __dyc_read_ptr__typdef_z_stream();
  start = (unsigned int )__dyc_readpre_byte();
  state = 0;
  in = 0;
  last = 0;
  out = 0;
  beg = 0;
  end = 0;
  wsize = 0;
  whave = 0;
  write = 0;
  window = 0;
  hold = 0;
  bits = 0;
  lcode = 0;
  dcode = 0;
  lmask = 0;
  dmask = 0;
  state = (struct inflate_state *)strm->state;
  in = strm->next_in - 1;
  last = in + (strm->avail_in - 5U);
  out = strm->next_out - 1;
  beg = out - (start - strm->avail_out);
  end = out + (strm->avail_out - 257U);
  wsize = state->wsize;
  whave = state->whave;
  write = state->write;
  window = state->window;
  hold = state->hold;
  bits = state->bits;
  lcode = state->lencode;
  dcode = state->distcode;
  lmask = (1U << state->lenbits) - 1U;
  dmask = (1U << state->distbits) - 1U;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(last);
  __dyc_print_ptr__char(beg);
  __dyc_print_ptr__char(end);
  __dyc_printpre_byte(wsize);
  __dyc_printpre_byte(whave);
  __dyc_printpre_byte(write);
  __dyc_print_ptr__char(window);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
  __dyc_print_ptr__typdef_code(lcode);
  __dyc_print_ptr__typdef_code(dcode);
  __dyc_printpre_byte(lmask);
  __dyc_printpre_byte(dmask);
}
}
