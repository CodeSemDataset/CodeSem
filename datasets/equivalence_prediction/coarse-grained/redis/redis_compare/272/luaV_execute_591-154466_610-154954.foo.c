#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ StkId base ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  int nresults ;
  int __attribute__((__visibility__("hidden")))  tmp___36 ;
  int b___3 ;
  lua_State *L ;
  int nexeccalls ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_11 ;

  {
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  nresults = __dyc_readpre_byte();
  L = __dyc_read_ptr__typdef_lua_State();
  nexeccalls = __dyc_readpre_byte();
  __dyc_funcallvar_11 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  base = 0;
  tmp___36 = 0;
  b___3 = 0;
  tmp___36 = __dyc_funcallvar_11;
  if ((int )tmp___36 == 0) {
    goto switch_12_0;
  } else {
    if ((int )tmp___36 == 1) {
      goto switch_12_1;
    } else {
      {
      goto switch_12_default;
      if (0) {
        switch_12_0:  
        nexeccalls ++;
        goto __dyc_dummy_label;
        switch_12_1:  
        if (nresults >= 0) {
          L->top = (L->ci)->top;
        }
        base = L->base;
        goto __dyc_dummy_label;
        switch_12_default:  ;
        goto __dyc_dummy_label;
      } else {
        switch_12_break:  ;
      }
      }
    }
  }
  switch_9_29:  
  b___3 = (int )((i >> 23) & ~ (4294967295U << 9));
  if (b___3 != 0) {
    L->top = ra + b___3;
  }
  L->savedpc = pc;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_printpre_byte(nexeccalls);
}
}
