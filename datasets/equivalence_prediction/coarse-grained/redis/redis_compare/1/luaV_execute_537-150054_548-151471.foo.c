#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ StkId base ;
  TValue *k ;
  Instruction const   *pc ;
  Instruction i ;
  int b___1 ;
  TValue const   *o2___4 ;
  TValue *o1___4 ;
  TValue *rb___10 ;
  TValue *tmp___24 ;
  TValue *rc___5 ;
  TValue *tmp___25 ;
  int __attribute__((__visibility__("hidden")))  tmp___26 ;
  int tmp___27 ;
  lua_State *L ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_8 ;

  {
  base = __dyc_read_ptr__typdef_TValue();
  k = __dyc_read_ptr__typdef_TValue();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  b___1 = __dyc_readpre_byte();
  L = __dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_8 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  o2___4 = 0;
  o1___4 = 0;
  rb___10 = 0;
  tmp___24 = 0;
  rc___5 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  L->savedpc = pc;

  if ((L->l_G)->totalbytes >= (L->l_G)->GCthreshold) {
    {

    }
  }
  base = L->base;
  o2___4 = (TValue const   *)(base + b___1);
  o1___4 = base + (int )((i >> 6) & ~ (4294967295U << 8));
  o1___4->value = (union __anonunion_Value_29 )o2___4->value;
  o1___4->tt = (int )o2___4->tt;
  goto __dyc_dummy_label;
  switch_9_22:  
  pc += (int )((i >> 14) & ~ (4294967295U << 18)) - (((1 << 18) - 1) >> 1);
  goto __dyc_dummy_label;
  switch_9_23:  
  if ((int )((i >> 23) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___24 = k + ((int )((i >> 23) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___24 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  }
  rb___10 = tmp___24;
  if ((int )((i >> 14) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___25 = k + ((int )((i >> 14) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___25 = base + (int )((i >> 14) & ~ (4294967295U << 9));
  }
  rc___5 = tmp___25;
  L->savedpc = pc;
  if (rb___10->tt == rc___5->tt) {
    {
    tmp___26 = __dyc_funcallvar_8;
    }
    if (tmp___26) {
      tmp___27 = 1;
    } else {
      tmp___27 = 0;
    }
  } else {
    tmp___27 = 0;
  }
  if (tmp___27 == (int )((i >> 6) & ~ (4294967295U << 8))) {
    pc += (int )((*pc >> 14) & (unsigned int const   )(~ (4294967295U << 18))) - (((1 << 18) - 1) >> 1);
  }
  base = L->base;
  pc ++;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_Instruction(pc);
}
}
