#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ StkId base ;
  TValue *k ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  TValue *rb___5 ;
  TValue *rc___2 ;
  lua_Number nb___2 ;
  lua_Number nc___2 ;
  TValue *i_o___6 ;
  TValue *rb___6 ;
  TValue *tmp___16 ;
  lua_State *L ;

  {
  base = __dyc_read_ptr__typdef_TValue();
  k = __dyc_read_ptr__typdef_TValue();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  rb___5 = __dyc_read_ptr__typdef_TValue();
  rc___2 = __dyc_read_ptr__typdef_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  nb___2 = 0;
  nc___2 = 0;
  i_o___6 = 0;
  rb___6 = 0;
  tmp___16 = 0;
  if (rb___5->tt == 3) {
    if (rc___2->tt == 3) {
      nb___2 = rb___5->value.n;
      nc___2 = rc___2->value.n;
      i_o___6 = ra;
      i_o___6->value.n = nb___2 / nc___2;
      i_o___6->tt = 3;
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
  switch_9_16:  
  if ((int )((i >> 23) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___16 = k + ((int )((i >> 23) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___16 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  }
  rb___6 = tmp___16;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_TValue(rb___6);
}
}
