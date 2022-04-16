#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ LClosure *cl ;
  StkId base ;
  TValue *k ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  TValue const   *o2 ;
  TValue *o1 ;
  TValue const   *o2___0 ;
  TValue *o1___0 ;
  TValue *i_o ;
  TValue *rb ;
  TValue *tmp___0 ;
  int b ;
  TValue const   *o2___1 ;
  TValue *o1___1 ;
  TValue g ;
  TValue *rb___0 ;
  TValue *i_o___0 ;
  TValue *tmp___1 ;
  lua_State *L ;

  {
  cl = __dyc_read_ptr__typdef_LClosure();
  base = __dyc_read_ptr__typdef_TValue();
  k = __dyc_read_ptr__typdef_TValue();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  g = __dyc_read_comp_46lua_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  o2 = 0;
  o1 = 0;
  o2___0 = 0;
  o1___0 = 0;
  i_o = 0;
  rb = 0;
  tmp___0 = 0;
  b = 0;
  o2___1 = 0;
  o1___1 = 0;
  rb___0 = 0;
  i_o___0 = 0;
  tmp___1 = 0;
  switch_9_0:  
  o2 = (TValue const   *)(base + (int )((i >> 23) & ~ (4294967295U << 9)));
  o1 = ra;
  o1->value = (union __anonunion_Value_29 )o2->value;
  o1->tt = (int )o2->tt;
  goto __dyc_dummy_label;
  switch_9_1:  
  o2___0 = (TValue const   *)(k + (int )((i >> 14) & ~ (4294967295U << 18)));
  o1___0 = ra;
  o1___0->value = (union __anonunion_Value_29 )o2___0->value;
  o1___0->tt = (int )o2___0->tt;
  goto __dyc_dummy_label;
  switch_9_2:  
  i_o = ra;
  i_o->value.b = (int )((i >> 23) & ~ (4294967295U << 9));
  i_o->tt = 1;
  if ((int )((i >> 14) & ~ (4294967295U << 9))) {
    pc ++;
  }
  goto __dyc_dummy_label;
  switch_9_3:  
  rb = base + (int )((i >> 23) & ~ (4294967295U << 9));
  while (1) {
    while_10_continue:  ;
    tmp___0 = rb;
    rb --;
    tmp___0->tt = 0;
    if (! ((unsigned long )rb >= (unsigned long )ra)) {
      goto while_10_break;
    }
  }
  while_10_break:  ;
  goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_Instruction(pc);
  __dyc_print_ptr__typdef_TValue(rb___0);
  __dyc_print_ptr__typdef_TValue(tmp___1);
}
}
