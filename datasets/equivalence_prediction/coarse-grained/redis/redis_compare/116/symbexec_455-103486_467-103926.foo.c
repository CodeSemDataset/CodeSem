#include "../../include/dycfoo.h"
#include "../../include/ldebug.i.hd.c.h"
void __dyc_foo(void) 
{ int pc ;
  int b ;
  int nup ;
  int j___0 ;
  OpCode op1 ;
  int __attribute__((__visibility__("hidden")))  tmp___3 ;
  Proto const   *pt ;
  int reg ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_5 ;

  {
  pc = __dyc_readpre_byte();
  b = __dyc_readpre_byte();
  nup = __dyc_readpre_byte();
  j___0 = __dyc_readpre_byte();
  pt = (Proto const   *)__dyc_read_ptr__typdef_Proto();
  reg = __dyc_readpre_byte();
  __dyc_funcallvar_5 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  op1 = 0;
  tmp___3 = 0;
  while (1) {
    while_10_continue:  ;
    if (! (j___0 <= nup)) {
      goto while_10_break;
    }
    op1 = (enum __anonenum_OpCode_13 )(*(pt->code + (pc + j___0)) & ~ (4294967295U << 6));
    if (! ((int )op1 == 4)) {
      if (! ((int )op1 == 0)) {
        goto __dyc_dummy_label;
      }
    }
    j___0 ++;
  }
  while_10_break:  ;
  if (reg != (1 << 8) - 1) {
    pc += nup;
  }
  goto __dyc_dummy_label;
  switch_9_37:  
  if ((int const   )pt->is_vararg & 2) {
    if (! (! ((int const   )pt->is_vararg & 4))) {
      goto __dyc_dummy_label;
    }
  } else {
    goto __dyc_dummy_label;
  }
  b --;
  if (b == -1) {
    {
    tmp___3 = __dyc_funcallvar_5;
    }
    if (! tmp___3) {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(pc);
}
}
