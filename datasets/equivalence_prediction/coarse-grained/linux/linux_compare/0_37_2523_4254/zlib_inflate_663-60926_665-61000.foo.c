#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char *put ;
  unsigned int left ;
  unsigned int out ;
  unsigned int copy ;
  unsigned char *from ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  put = (unsigned char *)__dyc_read_ptr__char();
  left = (unsigned int )__dyc_readpre_byte();
  out = (unsigned int )__dyc_readpre_byte();
  copy = 0;
  from = 0;
  switch_5_22:  
  if (left == 0U) {
    goto __dyc_dummy_label;
  }
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(copy);
  __dyc_print_ptr__char(from);
}
}
