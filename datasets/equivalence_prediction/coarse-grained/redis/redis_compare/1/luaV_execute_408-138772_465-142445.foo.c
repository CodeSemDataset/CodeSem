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
  TValue g___0 ;
  TValue *i_o___1 ;
  UpVal *uv ;
  TValue const   *o2___2 ;
  TValue *o1___2 ;
  TValue *tmp___2 ;
  TValue *tmp___3 ;
  int b___0 ;
  int c ;
  TValue *i_o___2 ;
  int __attribute__((__visibility__("hidden")))  tmp___4 ;
  int __attribute__((__visibility__("hidden")))  tmp___5 ;
  Table __attribute__((__visibility__("hidden")))  *tmp___6 ;
  lua_State *L ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_1 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_2 ;
  Table __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_3 ;

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
  __dyc_funcallvar_1 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (Table __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_Table();
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
  i_o___1 = 0;
  uv = 0;
  o2___2 = 0;
  o1___2 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  b___0 = 0;
  c = 0;
  i_o___2 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
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
  if ((int )((i >> 14) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___2 = k + ((int )((i >> 14) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___2 = base + (int )((i >> 14) & ~ (4294967295U << 9));
  }
  if ((int )((i >> 23) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___3 = k + ((int )((i >> 23) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___3 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  }

  base = L->base;
  goto __dyc_dummy_label;
  b___0 = (int )((i >> 23) & ~ (4294967295U << 9));
  c = (int )((i >> 14) & ~ (4294967295U << 9));
  i_o___2 = ra;
  tmp___4 = __dyc_funcallvar_1;
  tmp___5 = __dyc_funcallvar_2;
  tmp___6 = __dyc_funcallvar_3;
  i_o___2->value.gc = (GCObject *)tmp___6;
  i_o___2->tt = 5;
  L->savedpc = pc;
  if ((L->l_G)->totalbytes >= (L->l_G)->GCthreshold) {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_Instruction(pc);
  __dyc_print_ptr__typdef_TValue(rb___0);
  __dyc_print_ptr__typdef_TValue(tmp___1);
  __dyc_print_ptr__typdef_TValue(tmp___2);
  __dyc_print_ptr__typdef_TValue(tmp___3);
  __dyc_printpre_byte(b___0);
  __dyc_printpre_byte(c);
  __dyc_printpre_byte(tmp___4);
  __dyc_printpre_byte(tmp___5);
}
}
