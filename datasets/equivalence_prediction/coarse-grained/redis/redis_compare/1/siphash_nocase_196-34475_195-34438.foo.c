#include "../../include/dycfoo.h"
#include "../../include/siphash.i.hd.c.h"
void __dyc_foo(void) 
{ uint64_t v0 ;
  uint64_t v1 ;
  uint64_t v2 ;
  uint64_t v3 ;
  uint64_t m ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  uint8_t const   *in ;

  {
  v0 = (uint64_t )__dyc_readpre_byte();
  v1 = (uint64_t )__dyc_readpre_byte();
  v2 = (uint64_t )__dyc_readpre_byte();
  v3 = (uint64_t )__dyc_readpre_byte();
  tmp = __dyc_readpre_byte();
  tmp___0 = __dyc_readpre_byte();
  tmp___1 = __dyc_readpre_byte();
  tmp___2 = __dyc_readpre_byte();
  tmp___3 = __dyc_readpre_byte();
  tmp___4 = __dyc_readpre_byte();
  tmp___5 = __dyc_readpre_byte();
  tmp___6 = __dyc_readpre_byte();
  in = (uint8_t const   *)__dyc_read_ptr__typdef_uint8_t();
  m = 0;
  m = (((((((unsigned long )tmp | ((unsigned long )tmp___0 << 8)) | ((unsigned long )tmp___1 << 16)) | ((unsigned long )tmp___2 << 24)) | ((unsigned long )tmp___3 << 32)) | ((unsigned long )tmp___4 << 40)) | ((unsigned long )tmp___5 << 48)) | ((unsigned long )tmp___6 << 56);
  v3 ^= m;
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
  v0 ^= m;
  in += 8;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(v0);
  __dyc_printpre_byte(v1);
  __dyc_printpre_byte(v2);
  __dyc_printpre_byte(v3);
  __dyc_print_ptr__typdef_uint8_t(in);
}
}
