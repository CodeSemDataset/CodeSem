#include "../../include/dycfoo.h"
#include "../../include/inffast.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char const   *in ;
  unsigned char const   *last ;
  unsigned char *out ;
  unsigned long hold ;
  unsigned int bits ;
  unsigned int len ;
  int tmp ;
  z_streamp strm ;

  {
  in = (unsigned char const   *)__dyc_read_ptr__char();
  last = (unsigned char const   *)__dyc_read_ptr__char();
  out = (unsigned char *)__dyc_read_ptr__char();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  len = 0;
  tmp = 0;
  len = bits >> 3;
  in -= len;
  bits -= len << 3;
  hold &= (unsigned long )((1U << bits) - 1U);
  strm->next_in = in + 1;
  strm->next_out = out + 1;
  if ((unsigned long )in < (unsigned long )last) {
    tmp = 5 + (last - in);
  } else {
    tmp = 5 - (in - last);
  }
  strm->avail_in = (unsigned int )tmp;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(hold);
}
}
