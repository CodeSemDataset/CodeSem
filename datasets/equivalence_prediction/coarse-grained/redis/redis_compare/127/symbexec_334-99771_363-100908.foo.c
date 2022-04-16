#include "../../include/dycfoo.h"
#include "../../include/ldebug.i.hd.c.h"
void __dyc_foo(void) 
{ lu_byte const __attribute__((__visibility__("hidden")))  luaP_opmodes[38] ;
  int pc ;
  Instruction i ;
  OpCode op ;
  int b ;
  int tmp___0 ;
  int tmp___1 ;
  int dest ;
  int j ;
  Instruction d ;
  Proto const   *pt ;
  int __dyc_funcallvar_3 ;

  {
  pc = __dyc_readpre_byte();
  i = (Instruction )__dyc_readpre_byte();
  op = (OpCode )__dyc_readpre_byte();
  tmp___0 = __dyc_readpre_byte();
  pt = (Proto const   *)__dyc_read_ptr__typdef_Proto();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  b = 0;
  tmp___1 = 0;
  dest = 0;
  j = 0;
  d = 0;
  if (! tmp___0) {
    goto __dyc_dummy_label;
  }
  tmp___1 = __dyc_funcallvar_3;
  if (! tmp___1) {
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
  switch_7_1:  
  b = (int )((i >> 14) & ~ (4294967295U << 18));
  if ((int )((enum OpArgMask )(((int const __attribute__((__visibility__("hidden")))  )luaP_opmodes[op] >> 4) & (int const __attribute__((__visibility__("hidden")))  )3)) == 3) {
    if (! (b < (int )pt->sizek)) {
      goto __dyc_dummy_label;
    }
  }
  goto __dyc_dummy_label;
  switch_7_2:  
  b = (int )((i >> 14) & ~ (4294967295U << 18)) - (((1 << 18) - 1) >> 1);
  if ((int )((enum OpArgMask )(((int const __attribute__((__visibility__("hidden")))  )luaP_opmodes[op] >> 4) & (int const __attribute__((__visibility__("hidden")))  )3)) == 2) {
    dest = (pc + 1) + b;
    if (0 <= dest) {
      if (! (dest < (int )pt->sizecode)) {
        goto __dyc_dummy_label;
      }
    } else {
      goto __dyc_dummy_label;
    }
    if (dest > 0) {
      j = 0;
      {
      while (1) {
        while_8_continue:  ;
        if (! (j < dest)) {
          goto while_8_break;
        }
        d = *(pt->code + ((dest - 1) - j));
        if ((int )((enum __anonenum_OpCode_13 )(d & ~ (4294967295U << 6))) == 34) {
          if (! ((int )((d >> 14) & ~ (4294967295U << 9)) == 0)) {
            goto while_8_break;
          }
        } else {
          goto while_8_break;
        }
        j ++;
      }
      while_8_break:  ;
      }
      if (! ((j & 1) == 0)) {
        goto __dyc_dummy_label;
      }
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(b);
}
}
