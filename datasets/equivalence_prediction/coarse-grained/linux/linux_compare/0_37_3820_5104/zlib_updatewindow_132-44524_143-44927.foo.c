#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned int copy ;
  unsigned int dist ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  copy = (unsigned int )__dyc_readpre_byte();
  dist = (unsigned int )__dyc_readpre_byte();

  dist = copy;

  state->write = copy;
  state->whave = state->wsize;
  state->write += dist;
  if (state->write == state->wsize) {
    state->write = 0U;
  }
  if (state->whave < state->wsize) {
    state->whave += dist;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(dist);
}
}
