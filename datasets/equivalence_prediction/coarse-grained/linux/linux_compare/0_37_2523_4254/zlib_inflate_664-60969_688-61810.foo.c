#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char *put ;
  unsigned int left ;
  unsigned int out ;
  unsigned int copy ;
  unsigned char *from ;
  unsigned char *tmp___21 ;
  unsigned char *tmp___22 ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  put = (unsigned char *)__dyc_read_ptr__char();
  left = (unsigned int )__dyc_readpre_byte();
  out = (unsigned int )__dyc_readpre_byte();
  copy = 0;
  from = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  copy = out - left;
  if (state->offset > copy) {
    copy = state->offset - copy;
    if (copy > state->write) {
      copy -= state->write;
      from = state->window + (state->wsize - copy);
    } else {
      from = state->window + (state->write - copy);
    }
    if (copy > state->length) {
      copy = state->length;
    }
  } else {
    from = put - state->offset;
    copy = state->length;
  }
  if (copy > left) {
    copy = left;
  }
  left -= copy;
  state->length -= copy;
  while (1) {
    while_85_continue:  ;
    tmp___21 = put;
    put ++;
    tmp___22 = from;
    from ++;
    *tmp___21 = *tmp___22;
    copy --;
    if (! copy) {
      goto while_85_break;
    }
  }
  while_85_break:  ;
  if (state->length == 0U) {
    state->mode = 18;
  }
  goto __dyc_dummy_label;
  switch_5_23:  
  if (left == 0U) {
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(put);
  __dyc_printpre_byte(left);
  __dyc_print_ptr__char(from);
}
}
