#include "../../include/dycfoo.h"
#include "../../include/siphash.i.hd.c.h"
void __dyc_foo(void) 
{ uint64_t v0 ;
  uint64_t v1 ;
  uint64_t v2 ;
  uint64_t v3 ;
  int left ;
  uint64_t b ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;

  {
  v0 = (uint64_t )__dyc_readpre_byte();
  v1 = (uint64_t )__dyc_readpre_byte();
  v2 = (uint64_t )__dyc_readpre_byte();
  v3 = (uint64_t )__dyc_readpre_byte();
  left = __dyc_readpre_byte();
  b = (uint64_t )__dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  if (left == 7) {
    goto switch_8_7;
  } else {
    if (left == 6) {
      goto switch_8_6;
    } else {
      if (left == 5) {
        goto switch_8_5;
      } else {
        if (left == 4) {
          goto switch_8_4;
        } else {
          if (left == 3) {
            goto switch_8_3;
          } else {
            if (left == 2) {
              goto switch_8_2;
            } else {
              if (left == 1) {
                goto switch_8_1;
              } else {
                if (left == 0) {
                  goto switch_8_0;
                } else {
                  if (0) {
                    switch_8_7:  
                    {
                    tmp___7 = __dyc_funcallvar_9;
                    b |= (unsigned long )tmp___7 << 48;
                    }
                    switch_8_6:  
                    {
                    tmp___8 = __dyc_funcallvar_10;
                    b |= (unsigned long )tmp___8 << 40;
                    }
                    switch_8_5:  
                    {
                    tmp___9 = __dyc_funcallvar_11;
                    b |= (unsigned long )tmp___9 << 32;
                    }
                    switch_8_4:  
                    {
                    tmp___10 = __dyc_funcallvar_12;
                    b |= (unsigned long )tmp___10 << 24;
                    }
                    switch_8_3:  
                    {
                    tmp___11 = __dyc_funcallvar_13;
                    b |= (unsigned long )tmp___11 << 16;
                    }
                    switch_8_2:  
                    {
                    tmp___12 = __dyc_funcallvar_14;
                    b |= (unsigned long )tmp___12 << 8;
                    }
                    switch_8_1:  
                    {
                    tmp___13 = __dyc_funcallvar_15;
                    b |= (unsigned long )tmp___13;
                    }
                    goto switch_8_break;
                    switch_8_0:  
                    goto switch_8_break;
                  } else {
                    switch_8_break:  ;
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
    while_9_continue:  ;
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
    goto while_9_break;
  }
  while_9_break:  ;
  v0 ^= b;
  v2 ^= 255UL;
  while (1) {
    while_10_continue:  ;
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
    goto while_10_break;
  }
  while_10_break:  ;
  while (1) {
    while_11_continue:  ;
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
    goto while_11_break;
  }
  while_11_break:  ;
  b = ((v0 ^ v1) ^ v2) ^ v3;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(b);
}
}
