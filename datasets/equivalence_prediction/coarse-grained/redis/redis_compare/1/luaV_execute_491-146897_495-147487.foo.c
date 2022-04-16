#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ StkId base ;
  TValue *k ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  TValue *rb___6 ;
  TValue *rc___3 ;
  TValue *tmp___17 ;
  lua_Number nb___3 ;
  lua_Number nc___3 ;
  TValue *i_o___7 ;
  double tmp___18 ;
  TValue *rb___7 ;
  TValue *tmp___19 ;
  lua_State *L ;
  double __dyc_funcallvar_4 ;

  {
  base = __dyc_read_ptr__typdef_TValue();
  k = __dyc_read_ptr__typdef_TValue();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  rb___6 = __dyc_read_ptr__typdef_TValue();
  tmp___17 = __dyc_read_ptr__typdef_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_4 = (double )__dyc_readpre_byte();
  rc___3 = 0;
  nb___3 = 0;
  nc___3 = 0;
  i_o___7 = 0;
  tmp___18 = 0;
  rb___7 = 0;
  tmp___19 = 0;
  rc___3 = tmp___17;
  if (rb___6->tt == 3) {
    if (rc___3->tt == 3) {
      {
      nb___3 = rb___6->value.n;
      nc___3 = rc___3->value.n;
      i_o___7 = ra;
      tmp___18 = __dyc_funcallvar_4;
      i_o___7->value.n = nb___3 - tmp___18 * nc___3;
      i_o___7->tt = 3;
      }
    } else {
      {
      L->savedpc = pc;

      base = L->base;
      }
    }
  } else {
    {
    L->savedpc = pc;

    base = L->base;
    }
  }
  goto __dyc_dummy_label;
  switch_9_17:  
  if ((int )((i >> 23) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___19 = k + ((int )((i >> 23) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___19 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  }
  rb___7 = tmp___19;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_TValue(rc___3);
  __dyc_print_ptr__typdef_TValue(rb___7);
}
}
