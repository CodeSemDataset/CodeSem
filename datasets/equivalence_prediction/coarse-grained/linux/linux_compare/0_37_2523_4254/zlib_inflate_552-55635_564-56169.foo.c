#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  int ret ;
  z_streamp strm ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  strm = __dyc_read_ptr__typdef_z_stream();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  ret = 0;
  state->next = state->codes;
  state->lencode = (code const   *)state->next;
  state->lenbits = 9U;
  ret = __dyc_funcallvar_4;
  if (ret) {
    strm->msg = (char *)"invalid literal/lengths set";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  state->distcode = (code const   *)state->next;
  state->distbits = 6U;
  ret = __dyc_funcallvar_5;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(ret);
}
}
