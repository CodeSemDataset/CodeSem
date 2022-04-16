#include "../../include/dycfoo.h"
#include "../../include/sha1.i.hd.c.h"
void __dyc_foo(void) 
{ uint32_t a ;
  uint32_t b ;
  uint32_t c ;
  uint32_t d ;
  uint32_t e ;
  CHAR64LONG16 block[1] ;
  uint32_t *state ;

  {
  a = (uint32_t )__dyc_readpre_byte();
  b = (uint32_t )__dyc_readpre_byte();
  c = (uint32_t )__dyc_readpre_byte();
  d = (uint32_t )__dyc_readpre_byte();
  e = (uint32_t )__dyc_readpre_byte();
  state = (uint32_t *)__dyc_read_ptr__typdef_uint32_t();

  a += ((((c ^ d) ^ e) + block[0].l[15]) + 3395469782U) + ((b << 5) | (b >> 27));
  c = (c << 30) | (c >> 2);
  *(state + 0) += a;
  *(state + 1) += b;
  *(state + 2) += c;
  *(state + 3) += d;
  *(state + 4) += e;
  e = 0U;
  d = e;
  c = d;
  b = c;
  a = b;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(a);
}
}
