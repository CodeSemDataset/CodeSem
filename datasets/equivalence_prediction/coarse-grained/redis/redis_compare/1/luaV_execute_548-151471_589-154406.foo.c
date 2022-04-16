#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ StkId base ;
  TValue *k ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  TValue *tmp___28 ;
  TValue *tmp___29 ;
  int __attribute__((__visibility__("hidden")))  tmp___30 ;
  TValue *tmp___31 ;
  TValue *tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  TValue *rb___11 ;
  TValue const   *o2___5 ;
  TValue *o1___5 ;
  int tmp___35 ;
  int b___2 ;
  int nresults ;
  lua_State *L ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;

  {
  base = __dyc_read_ptr__typdef_TValue();
  k = __dyc_read_ptr__typdef_TValue();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_9 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  tmp___28 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  rb___11 = 0;
  o2___5 = 0;
  o1___5 = 0;
  tmp___35 = 0;
  b___2 = 0;
  nresults = 0;
  base = L->base;
  pc ++;
  goto __dyc_dummy_label;
  switch_9_24:  
  L->savedpc = pc;
  if ((int )((i >> 14) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___28 = k + ((int )((i >> 14) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___28 = base + (int )((i >> 14) & ~ (4294967295U << 9));
  }
  if ((int )((i >> 23) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___29 = k + ((int )((i >> 23) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___29 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  }
  tmp___30 = __dyc_funcallvar_9;
  if (tmp___30 == (int __attribute__((__visibility__("hidden")))  )((int )((i >> 6) & ~ (4294967295U << 8)))) {
    pc += (int )((*pc >> 14) & (unsigned int const   )(~ (4294967295U << 18))) - (((1 << 18) - 1) >> 1);
  }
  base = L->base;
  pc ++;
  goto __dyc_dummy_label;
  switch_9_25:  
  L->savedpc = pc;
  if ((int )((i >> 14) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___31 = k + ((int )((i >> 14) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___31 = base + (int )((i >> 14) & ~ (4294967295U << 9));
  }
  if ((int )((i >> 23) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___32 = k + ((int )((i >> 23) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___32 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  }
  tmp___33 = __dyc_funcallvar_10;
  if (tmp___33 == (int )((i >> 6) & ~ (4294967295U << 8))) {
    pc += (int )((*pc >> 14) & (unsigned int const   )(~ (4294967295U << 18))) - (((1 << 18) - 1) >> 1);
  }
  base = L->base;
  pc ++;
  goto __dyc_dummy_label;
  switch_9_26:  
  if (ra->tt == 0) {
    tmp___34 = 1;
  } else {
    if (ra->tt == 1) {
      if (ra->value.b == 0) {
        tmp___34 = 1;
      } else {
        tmp___34 = 0;
      }
    } else {
      tmp___34 = 0;
    }
  }
  if (tmp___34 != (int )((i >> 14) & ~ (4294967295U << 9))) {
    pc += (int )((*pc >> 14) & (unsigned int const   )(~ (4294967295U << 18))) - (((1 << 18) - 1) >> 1);
  }
  pc ++;
  goto __dyc_dummy_label;
  switch_9_27:  
  rb___11 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  if (rb___11->tt == 0) {
    tmp___35 = 1;
  } else {
    if (rb___11->tt == 1) {
      if (rb___11->value.b == 0) {
        tmp___35 = 1;
      } else {
        tmp___35 = 0;
      }
    } else {
      tmp___35 = 0;
    }
  }
  if (tmp___35 != (int )((i >> 14) & ~ (4294967295U << 9))) {
    o2___5 = (TValue const   *)rb___11;
    o1___5 = ra;
    o1___5->value = (union __anonunion_Value_29 )o2___5->value;
    o1___5->tt = (int )o2___5->tt;
    pc += (int )((*pc >> 14) & (unsigned int const   )(~ (4294967295U << 18))) - (((1 << 18) - 1) >> 1);
  }
  pc ++;
  goto __dyc_dummy_label;
  switch_9_28:  
  b___2 = (int )((i >> 23) & ~ (4294967295U << 9));
  nresults = (int )((i >> 14) & ~ (4294967295U << 9)) - 1;
  if (b___2 != 0) {
    L->top = ra + b___2;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_Instruction(pc);
  __dyc_print_ptr__typdef_TValue(tmp___28);
  __dyc_print_ptr__typdef_TValue(tmp___29);
  __dyc_print_ptr__typdef_TValue(tmp___31);
  __dyc_print_ptr__typdef_TValue(tmp___32);
  __dyc_printpre_byte(nresults);
}
}
