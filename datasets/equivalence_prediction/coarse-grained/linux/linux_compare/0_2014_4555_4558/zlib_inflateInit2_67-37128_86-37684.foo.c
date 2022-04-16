#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  int tmp ;
  z_streamp strm ;
  int windowBits ;
  int __dyc_funcallvar_1 ;

  {
  strm = __dyc_read_ptr__typdef_z_stream();
  windowBits = __dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  state = 0;
  tmp = 0;
  if ((unsigned long )strm == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  strm->msg = (char *)((void *)0);
  state = & ((struct inflate_workspace *)strm->workspace)->inflate_state;
  strm->state = (struct internal_state *)state;
  if (windowBits < 0) {
    state->wrap = 0;
    windowBits = - windowBits;
  } else {
    state->wrap = (windowBits >> 4) + 1;
  }
  if (windowBits < 8) {
    goto __dyc_dummy_label;
  } else {
    if (windowBits > 15) {
      goto __dyc_dummy_label;
    }
  }
  state->wbits = (unsigned int )windowBits;
  state->window = & ((struct inflate_workspace *)strm->workspace)->working_window[0];
  tmp = __dyc_funcallvar_1;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp);
}
}
