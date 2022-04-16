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
  int ret ;
  z_streamp strm ;
  int __dyc_funcallvar_5 ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  put = (unsigned char *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  left = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  ret = 0;
  state->distbits = 6U;
  ret = __dyc_funcallvar_5;
  if (ret) {
    strm->msg = (char *)"invalid distances set";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  state->mode = 18;
  switch_5_18:  
  if (have >= 6U) {
    if (left >= 258U) {
      {
      while (1) {
        while_63_continue:  ;
        strm->next_out = put;
        strm->avail_out = left;
        strm->next_in = next;
        strm->avail_in = have;
        state->hold = hold;
        state->bits = bits;
        goto while_63_break;
      }
      while_63_break:  ;
      }
      {

      }
      {
      while (1) {
        while_64_continue:  ;
        put = strm->next_out;
        left = strm->avail_out;
        next = strm->next_in;
        have = strm->avail_in;
        hold = state->hold;
        bits = state->bits;
        goto while_64_break;
      }
      while_64_break:  ;
      }
      goto __dyc_dummy_label;
    }
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
