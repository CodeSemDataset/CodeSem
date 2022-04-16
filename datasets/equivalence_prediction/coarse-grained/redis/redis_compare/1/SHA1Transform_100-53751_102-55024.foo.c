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

  d += ((((a ^ b) ^ c) + block[0].l[12]) + 3395469782U) + ((e << 5) | (e >> 27));
  a = (a << 30) | (a >> 2);
  block[0].l[13] = ((((block[0].l[10] ^ block[0].l[5]) ^ block[0].l[15]) ^ block[0].l[13]) << 1) | ((((block[0].l[10] ^ block[0].l[5]) ^ block[0].l[15]) ^ block[0].l[13]) >> 31);
  c += ((((e ^ a) ^ b) + block[0].l[13]) + 3395469782U) + ((d << 5) | (d >> 27));
  e = (e << 30) | (e >> 2);
  block[0].l[14] = ((((block[0].l[11] ^ block[0].l[6]) ^ block[0].l[0]) ^ block[0].l[14]) << 1) | ((((block[0].l[11] ^ block[0].l[6]) ^ block[0].l[0]) ^ block[0].l[14]) >> 31);
  b += ((((d ^ e) ^ a) + block[0].l[14]) + 3395469782U) + ((c << 5) | (c >> 27));
  d = (d << 30) | (d >> 2);
  block[0].l[15] = ((((block[0].l[12] ^ block[0].l[7]) ^ block[0].l[1]) ^ block[0].l[15]) << 1) | ((((block[0].l[12] ^ block[0].l[7]) ^ block[0].l[1]) ^ block[0].l[15]) >> 31);
  a += ((((c ^ d) ^ e) + block[0].l[15]) + 3395469782U) + ((b << 5) | (b >> 27));
  c = (c << 30) | (c >> 2);
  *(state + 0) += a;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(c);
}
}
