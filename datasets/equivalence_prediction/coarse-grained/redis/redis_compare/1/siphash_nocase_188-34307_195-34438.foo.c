#include "../../include/dycfoo.h"
#include "../../include/siphash.i.hd.c.h"
void __dyc_foo(void) 
{ uint64_t v0 ;
  uint64_t v1 ;
  uint64_t v2 ;
  uint64_t v3 ;
  uint64_t k0 ;
  uint64_t k1 ;
  uint64_t m ;
  uint8_t const   *end ;
  int left ;
  uint64_t b ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  uint8_t const   *in ;
  size_t inlen ;
  uint8_t const   *k ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;

  {
  in = (uint8_t const   *)__dyc_read_ptr__typdef_uint8_t();
  inlen = (size_t )__dyc_readpre_byte();
  k = (uint8_t const   *)__dyc_read_ptr__typdef_uint8_t();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  v0 = 0;
  v1 = 0;
  v2 = 0;
  v3 = 0;
  k0 = 0;
  k1 = 0;
  m = 0;
  end = 0;
  left = 0;
  b = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  v0 = (uint64_t )8317987319222330741ULL;
  v1 = (uint64_t )7237128888997146477ULL;
  v2 = (uint64_t )7816392313619706465ULL;
  v3 = (uint64_t )8387220255154660723ULL;
  k0 = *((uint64_t *)k);
  k1 = *((uint64_t *)(k + 8));
  end = (in + inlen) - inlen % sizeof(uint64_t );
  left = (int )(inlen & 7UL);
  b = inlen << 56;
  v3 ^= k1;
  v2 ^= k0;
  v1 ^= k1;
  v0 ^= k0;
  while (1) {
    while_6_continue:  ;
    if (! ((unsigned long )in != (unsigned long )end)) {
      goto __dyc_dummy_label;
    }
    {
    tmp = __dyc_funcallvar_1;
    tmp___0 = __dyc_funcallvar_2;
    tmp___1 = __dyc_funcallvar_3;
    tmp___2 = __dyc_funcallvar_4;
    tmp___3 = __dyc_funcallvar_5;
    tmp___4 = __dyc_funcallvar_6;
    tmp___5 = __dyc_funcallvar_7;
    tmp___6 = __dyc_funcallvar_8;
    m = (((((((unsigned long )tmp | ((unsigned long )tmp___0 << 8)) | ((unsigned long )tmp___1 << 16)) | ((unsigned long )tmp___2 << 24)) | ((unsigned long )tmp___3 << 32)) | ((unsigned long )tmp___4 << 40)) | ((unsigned long )tmp___5 << 48)) | ((unsigned long )tmp___6 << 56);
    v3 ^= m;
    }
    {
    while (1) {
      while_7_continue:  ;
      v0 += v1;
      v1 = (v1 << 13) | (v1 >> 51);
      v1 ^= v0;
      v0 = (v0 << 32) | (v0 >> 32);
      v2 += v3;
      v3 = (v3 << 16) | (v3 >> 48);
      v3 ^= v2;
      v0 += v3;
      v3 = (v3 << 21) | (v3 >> 43);
      v3 ^= v0;
      v2 += v1;
      v1 = (v1 << 17) | (v1 >> 47);
      v1 ^= v2;
      v2 = (v2 << 32) | (v2 >> 32);
      goto while_7_break;
    }
    while_7_break:  ;
    }
    v0 ^= m;
    in += 8;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(v0);
  __dyc_printpre_byte(v1);
  __dyc_printpre_byte(v2);
  __dyc_printpre_byte(v3);
  __dyc_printpre_byte(left);
  __dyc_printpre_byte(b);
}
}
