#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ StkId base ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  TValue *rb___7 ;
  TValue *rc___4 ;
  TValue *tmp___20 ;
  lua_Number nb___4 ;
  lua_Number nc___4 ;
  TValue *i_o___8 ;
  lua_State *L ;
  double __dyc_funcallvar_5 ;

  {
  base = __dyc_read_ptr__typdef_TValue();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  rb___7 = __dyc_read_ptr__typdef_TValue();
  rc___4 = __dyc_read_ptr__typdef_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_5 = (double )__dyc_readpre_byte();
  tmp___20 = 0;
  nb___4 = 0;
  nc___4 = 0;
  i_o___8 = 0;
  tmp___20 = base + (int )((i >> 14) & ~ (4294967295U << 9));
  if (rc___4->tt == 3) {
    {
    nb___4 = rb___7->value.n;
    nc___4 = rc___4->value.n;
    i_o___8 = ra;
    i_o___8->value.n = __dyc_funcallvar_5;
    i_o___8->tt = 3;
    }
  } else {
    {
    L->savedpc = pc;

    base = L->base;
    }
  }
  L->savedpc = pc;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_TValue(tmp___20);
  __dyc_printpre_byte(nb___4);
  __dyc_printpre_byte(nc___4);
}
}
