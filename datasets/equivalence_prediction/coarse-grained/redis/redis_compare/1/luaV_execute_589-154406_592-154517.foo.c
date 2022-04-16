#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ StkId base ;
  Instruction const   *pc ;
  StkId ra ;
  int b___2 ;
  int nresults ;
  int __attribute__((__visibility__("hidden")))  tmp___36 ;
  lua_State *L ;
  int nexeccalls ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_11 ;

  {
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  ra = __dyc_read_ptr__typdef_TValue();
  b___2 = __dyc_readpre_byte();
  nresults = __dyc_readpre_byte();
  L = __dyc_read_ptr__typdef_lua_State();
  nexeccalls = __dyc_readpre_byte();
  __dyc_funcallvar_11 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  base = 0;
  tmp___36 = 0;
  if (b___2 != 0) {
    L->top = ra + b___2;
  }
  L->savedpc = pc;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_printpre_byte(nexeccalls);
}
}
