#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  int ret ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  z_streamp strm ;
  int flush ;
  int __dyc_funcallvar_8 ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  ret = __dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  flush = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  tmp___25 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
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
