#include "../../include/dycfoo.h"
#include "../../include/inffast.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char const   *in ;
  unsigned long hold ;
  unsigned int bits ;
  z_streamp strm ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  in = (unsigned char const   *)__dyc_read_ptr__char();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();

  in ++;
  hold += (unsigned long )*in << bits;
  bits += 8U;
  strm->msg = (char *)"invalid distance too far back";
  state->mode = 27;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
}
}
