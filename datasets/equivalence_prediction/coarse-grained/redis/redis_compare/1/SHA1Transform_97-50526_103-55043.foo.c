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

  b = (b << 30) | (b >> 2);
  block[0].l[2] = ((((block[0].l[15] ^ block[0].l[10]) ^ block[0].l[4]) ^ block[0].l[2]) << 1) | ((((block[0].l[15] ^ block[0].l[10]) ^ block[0].l[4]) ^ block[0].l[2]) >> 31);
  d += ((((a ^ b) ^ c) + block[0].l[2]) + 3395469782U) + ((e << 5) | (e >> 27));
  a = (a << 30) | (a >> 2);
  block[0].l[3] = ((((block[0].l[0] ^ block[0].l[11]) ^ block[0].l[5]) ^ block[0].l[3]) << 1) | ((((block[0].l[0] ^ block[0].l[11]) ^ block[0].l[5]) ^ block[0].l[3]) >> 31);
  c += ((((e ^ a) ^ b) + block[0].l[3]) + 3395469782U) + ((d << 5) | (d >> 27));
  e = (e << 30) | (e >> 2);
  block[0].l[4] = ((((block[0].l[1] ^ block[0].l[12]) ^ block[0].l[6]) ^ block[0].l[4]) << 1) | ((((block[0].l[1] ^ block[0].l[12]) ^ block[0].l[6]) ^ block[0].l[4]) >> 31);
  b += ((((d ^ e) ^ a) + block[0].l[4]) + 3395469782U) + ((c << 5) | (c >> 27));
  d = (d << 30) | (d >> 2);
  block[0].l[5] = ((((block[0].l[2] ^ block[0].l[13]) ^ block[0].l[7]) ^ block[0].l[5]) << 1) | ((((block[0].l[2] ^ block[0].l[13]) ^ block[0].l[7]) ^ block[0].l[5]) >> 31);
  a += ((((c ^ d) ^ e) + block[0].l[5]) + 3395469782U) + ((b << 5) | (b >> 27));
  c = (c << 30) | (c >> 2);
  block[0].l[6] = ((((block[0].l[3] ^ block[0].l[14]) ^ block[0].l[8]) ^ block[0].l[6]) << 1) | ((((block[0].l[3] ^ block[0].l[14]) ^ block[0].l[8]) ^ block[0].l[6]) >> 31);
  e += ((((b ^ c) ^ d) + block[0].l[6]) + 3395469782U) + ((a << 5) | (a >> 27));
  b = (b << 30) | (b >> 2);
  block[0].l[7] = ((((block[0].l[4] ^ block[0].l[15]) ^ block[0].l[9]) ^ block[0].l[7]) << 1) | ((((block[0].l[4] ^ block[0].l[15]) ^ block[0].l[9]) ^ block[0].l[7]) >> 31);
  d += ((((a ^ b) ^ c) + block[0].l[7]) + 3395469782U) + ((e << 5) | (e >> 27));
  a = (a << 30) | (a >> 2);
  block[0].l[8] = ((((block[0].l[5] ^ block[0].l[0]) ^ block[0].l[10]) ^ block[0].l[8]) << 1) | ((((block[0].l[5] ^ block[0].l[0]) ^ block[0].l[10]) ^ block[0].l[8]) >> 31);
  c += ((((e ^ a) ^ b) + block[0].l[8]) + 3395469782U) + ((d << 5) | (d >> 27));
  e = (e << 30) | (e >> 2);
  block[0].l[9] = ((((block[0].l[6] ^ block[0].l[1]) ^ block[0].l[11]) ^ block[0].l[9]) << 1) | ((((block[0].l[6] ^ block[0].l[1]) ^ block[0].l[11]) ^ block[0].l[9]) >> 31);
  b += ((((d ^ e) ^ a) + block[0].l[9]) + 3395469782U) + ((c << 5) | (c >> 27));
  d = (d << 30) | (d >> 2);
  block[0].l[10] = ((((block[0].l[7] ^ block[0].l[2]) ^ block[0].l[12]) ^ block[0].l[10]) << 1) | ((((block[0].l[7] ^ block[0].l[2]) ^ block[0].l[12]) ^ block[0].l[10]) >> 31);
  a += ((((c ^ d) ^ e) + block[0].l[10]) + 3395469782U) + ((b << 5) | (b >> 27));
  c = (c << 30) | (c >> 2);
  block[0].l[11] = ((((block[0].l[8] ^ block[0].l[3]) ^ block[0].l[13]) ^ block[0].l[11]) << 1) | ((((block[0].l[8] ^ block[0].l[3]) ^ block[0].l[13]) ^ block[0].l[11]) >> 31);
  e += ((((b ^ c) ^ d) + block[0].l[11]) + 3395469782U) + ((a << 5) | (a >> 27));
  b = (b << 30) | (b >> 2);
  block[0].l[12] = ((((block[0].l[9] ^ block[0].l[4]) ^ block[0].l[14]) ^ block[0].l[12]) << 1) | ((((block[0].l[9] ^ block[0].l[4]) ^ block[0].l[14]) ^ block[0].l[12]) >> 31);
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
  *(state + 1) += b;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(c);
}
}
