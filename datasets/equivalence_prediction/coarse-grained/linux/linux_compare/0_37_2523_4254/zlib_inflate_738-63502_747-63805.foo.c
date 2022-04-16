#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned int in ;
  unsigned int out ;
  int ret ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  z_streamp strm ;
  int flush ;
  uLong __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  in = (unsigned int )__dyc_readpre_byte();
  out = (unsigned int )__dyc_readpre_byte();
  ret = __dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  flush = __dyc_readpre_byte();
  __dyc_funcallvar_7 = (uLong )__dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  tmp___25 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  in -= strm->avail_in;
  out -= strm->avail_out;
  strm->total_in += (uLong )in;
  strm->total_out += (uLong )out;
  state->total += (unsigned long )out;
  if (state->wrap) {
    if (out) {
      {
      state->check = __dyc_funcallvar_7;
      strm->adler = state->check;
      }
    }
  }
  if (state->last) {
    tmp___25 = 64;
  } else {
    tmp___25 = 0;
  }
  if ((int )state->mode == 11) {
    tmp___26 = 128;
  } else {
    tmp___26 = 0;
  }
  strm->data_type = (int )((state->bits + (unsigned int )tmp___25) + (unsigned int )tmp___26);
  if (flush == 2) {
    if (ret == 0) {
      if (strm->avail_out != 0U) {
        if (strm->avail_in == 0U) {
          {
          tmp___27 = __dyc_funcallvar_8;
          }
          goto __dyc_dummy_label;
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___27);
}
}
