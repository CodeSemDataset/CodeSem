#include "../../include/dycfoo.h"
#include "../../include/siphash.i.hd.c.h"
void __dyc_foo(void) 
{ uint64_t v0 ;
  uint64_t v1 ;
  uint64_t v2 ;
  uint64_t v3 ;
  int left ;
  uint64_t b ;
  uint8_t const   *in ;

  {
  v0 = (uint64_t )__dyc_readpre_byte();
  v1 = (uint64_t )__dyc_readpre_byte();
  v2 = (uint64_t )__dyc_readpre_byte();
  v3 = (uint64_t )__dyc_readpre_byte();
  left = __dyc_readpre_byte();
  b = (uint64_t )__dyc_readpre_byte();
  in = (uint8_t const   *)__dyc_read_ptr__typdef_uint8_t();

  if (left == 7) {
    goto switch_2_7;
  } else {
    if (left == 6) {
      goto switch_2_6;
    } else {
      if (left == 5) {
        goto switch_2_5;
      } else {
        if (left == 4) {
          goto switch_2_4;
        } else {
          if (left == 3) {
            goto switch_2_3;
          } else {
            if (left == 2) {
              goto switch_2_2;
            } else {
              if (left == 1) {
                goto switch_2_1;
              } else {
                if (left == 0) {
                  goto switch_2_0;
                } else {
                  if (0) {
                    switch_2_7:  
                    b |= (unsigned long )*(in + 6) << 48;
                    switch_2_6:  
                    b |= (unsigned long )*(in + 5) << 40;
                    switch_2_5:  
                    b |= (unsigned long )*(in + 4) << 32;
                    switch_2_4:  
                    b |= (unsigned long )*(in + 3) << 24;
                    switch_2_3:  
                    b |= (unsigned long )*(in + 2) << 16;
                    switch_2_2:  
                    b |= (unsigned long )*(in + 1) << 8;
                    switch_2_1:  
                    b |= (unsigned long )*(in + 0);
                    goto switch_2_break;
                    switch_2_0:  
                    goto switch_2_break;
                  } else {
                    switch_2_break:  ;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v3 ^= b;
  while (1) {
    while_3_continue:  ;
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
    goto while_3_break;
  }
  while_3_break:  ;
  v0 ^= b;
  v2 ^= 255UL;
  while (1) {
    while_4_continue:  ;
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
    goto while_4_break;
  }
  while_4_break:  ;
  while (1) {
    while_5_continue:  ;
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
    goto while_5_break;
  }
  while_5_break:  ;
  b = ((v0 ^ v1) ^ v2) ^ v3;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(b);
}
}
