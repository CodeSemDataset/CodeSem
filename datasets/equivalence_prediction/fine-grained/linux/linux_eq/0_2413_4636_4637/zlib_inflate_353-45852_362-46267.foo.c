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
  strm = __dyc_read_ptr__typdef_z_stream();
  state = 0;
  next = 0;
  put = 0;
  have = 0;
  left = 0;
  hold = 0;
  bits = 0;
  in = 0;
  out = 0;
  ret = 0;
  if ((unsigned long )strm == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  } else {
    if ((unsigned long )strm->state == (unsigned long )((void *)0)) {
      goto __dyc_dummy_label;
    } else {
      if ((unsigned long )strm->next_in == (unsigned long )((void *)0)) {
        if (strm->avail_in != 0U) {
          goto __dyc_dummy_label;
        }
      }
    }
  }
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
