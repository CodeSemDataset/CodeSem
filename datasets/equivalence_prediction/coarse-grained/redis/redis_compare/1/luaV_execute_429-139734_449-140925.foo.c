#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ LClosure *cl ;
  StkId base ;
  TValue *k ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  int b ;
  TValue const   *o2___1 ;
  TValue *o1___1 ;
  TValue g ;
  TValue *rb___0 ;
  TValue *i_o___0 ;
  TValue *tmp___1 ;
  TValue g___0 ;
  TValue *i_o___1 ;
  lua_State *L ;

  {
  cl = __dyc_read_ptr__typdef_LClosure();
  base = __dyc_read_ptr__typdef_TValue();
  k = __dyc_read_ptr__typdef_TValue();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  g = __dyc_read_comp_46lua_TValue();
  g___0 = __dyc_read_comp_46lua_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  b = 0;
  o2___1 = 0;
  o1___1 = 0;
  rb___0 = 0;
  i_o___0 = 0;
  tmp___1 = 0;
  i_o___1 = 0;
  switch_9_4:  
  b = (int )((i >> 23) & ~ (4294967295U << 9));
  o2___1 = (TValue const   *)(cl->upvals[b])->v;
  o1___1 = ra;
  o1___1->value = (union __anonunion_Value_29 )o2___1->value;
  o1___1->tt = (int )o2___1->tt;
  goto __dyc_dummy_label;
  rb___0 = k + (int )((i >> 14) & ~ (4294967295U << 18));
  i_o___0 = & g;
  i_o___0->value.gc = (GCObject *)cl->env;
  i_o___0->tt = 5;
  L->savedpc = pc;

  base = L->base;
  goto __dyc_dummy_label;
  switch_9_6:  
  L->savedpc = pc;
  if ((int )((i >> 14) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___1 = k + ((int )((i >> 14) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___1 = base + (int )((i >> 14) & ~ (4294967295U << 9));
  }

  base = L->base;
  goto __dyc_dummy_label;
  i_o___1 = & g___0;
  i_o___1->value.gc = (GCObject *)cl->env;
  i_o___1->tt = 5;
  L->savedpc = pc;

  base = L->base;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_TValue(rb___0);
  __dyc_print_ptr__typdef_TValue(tmp___1);
}
}
