#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ LClosure *cl ;
  StkId base ;
  TValue *k ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  TValue *tmp___1 ;
  TValue g___0 ;
  TValue *i_o___1 ;
  UpVal *uv ;
  TValue const   *o2___2 ;
  TValue *o1___2 ;
  lua_State *L ;

  {
  cl = __dyc_read_ptr__typdef_LClosure();
  base = __dyc_read_ptr__typdef_TValue();
  k = __dyc_read_ptr__typdef_TValue();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  g___0 = __dyc_read_comp_46lua_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  tmp___1 = 0;
  i_o___1 = 0;
  uv = 0;
  o2___2 = 0;
  o1___2 = 0;
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
  switch_9_8:  
  uv = cl->upvals[(int )((i >> 23) & ~ (4294967295U << 9))];
  o2___2 = (TValue const   *)ra;
  o1___2 = uv->v;
  o1___2->value = (union __anonunion_Value_29 )o2___2->value;
  o1___2->tt = (int )o2___2->tt;
  if (ra->tt >= 4) {
    if ((int )(ra->value.gc)->gch.marked & (1 | (1 << 1))) {
      if ((int )((GCObject *)uv)->gch.marked & (1 << 2)) {
        {

        }
      }
    }
  }
  goto __dyc_dummy_label;
  switch_9_9:  
  L->savedpc = pc;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_TValue(tmp___1);
}
}
