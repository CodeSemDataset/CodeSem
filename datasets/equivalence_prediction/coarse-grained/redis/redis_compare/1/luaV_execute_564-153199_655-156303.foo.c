#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ StkId base ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  int tmp___34 ;
  TValue *rb___11 ;
  TValue const   *o2___5 ;
  TValue *o1___5 ;
  int tmp___35 ;
  int b___2 ;
  int nresults ;
  int __attribute__((__visibility__("hidden")))  tmp___36 ;
  int b___3 ;
  int __attribute__((__visibility__("hidden")))  tmp___37 ;
  CallInfo *ci ;
  int aux ;
  StkId func ;
  StkId pfunc ;
  TValue const   *o2___6 ;
  TValue *o1___6 ;
  int b___4 ;
  int __attribute__((__visibility__("hidden")))  tmp___38 ;
  lua_Number step ;
  lua_Number idx ;
  lua_Number limit ;
  lua_State *L ;
  int nexeccalls ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_11 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_12 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_13 ;

  {
  base = __dyc_read_ptr__typdef_TValue();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  nexeccalls = __dyc_readpre_byte();
  __dyc_funcallvar_11 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  tmp___34 = 0;
  rb___11 = 0;
  o2___5 = 0;
  o1___5 = 0;
  tmp___35 = 0;
  b___2 = 0;
  nresults = 0;
  tmp___36 = 0;
  b___3 = 0;
  tmp___37 = 0;
  ci = 0;
  aux = 0;
  func = 0;
  pfunc = 0;
  o2___6 = 0;
  o1___6 = 0;
  b___4 = 0;
  tmp___38 = 0;
  step = 0;
  idx = 0;
  limit = 0;
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
  switch_9_29:  
  b___3 = (int )((i >> 23) & ~ (4294967295U << 9));
  if (b___3 != 0) {
    L->top = ra + b___3;
  }
  L->savedpc = pc;
  tmp___37 = __dyc_funcallvar_12;
  if ((int )tmp___37 == 0) {
    goto switch_13_0;
  } else {
    if ((int )tmp___37 == 1) {
      goto switch_13_1;
    } else {
      {
      goto switch_13_default;
      if (0) {
        switch_13_0:  
        ci = L->ci - 1;
        func = ci->func;
        pfunc = (ci + 1)->func;
        if (L->openupval) {
          {

          }
        }
        ci->base = ci->func + ((ci + 1)->base - pfunc);
        L->base = ci->base;
        aux = 0;
        {
        while (1) {
          while_14_continue:  ;
          if (! ((unsigned long )(pfunc + aux) < (unsigned long )L->top)) {
            goto while_14_break;
          }
          o2___6 = (TValue const   *)(pfunc + aux);
          o1___6 = func + aux;
          o1___6->value = (union __anonunion_Value_29 )o2___6->value;
          o1___6->tt = (int )o2___6->tt;
          aux ++;
        }
        while_14_break:  ;
        }
        L->top = func + aux;
        ci->top = L->top;
        ci->savedpc = L->savedpc;
        (ci->tailcalls) ++;
        (L->ci) --;
        goto __dyc_dummy_label;
        switch_13_1:  
        base = L->base;
        goto __dyc_dummy_label;
        switch_13_default:  ;
        goto __dyc_dummy_label;
      } else {
        switch_13_break:  ;
      }
      }
    }
  }
  switch_9_30:  
  b___4 = (int )((i >> 23) & ~ (4294967295U << 9));
  if (b___4 != 0) {
    L->top = (ra + b___4) - 1;
  }
  if (L->openupval) {
    {

    }
  }
  L->savedpc = pc;
  tmp___38 = __dyc_funcallvar_13;
  b___4 = (int )tmp___38;
  nexeccalls --;
  if (nexeccalls == 0) {
    goto __dyc_dummy_label;
  } else {
    if (b___4) {
      L->top = (L->ci)->top;
    }
    goto __dyc_dummy_label;
  }
  switch_9_31:  
  step = (ra + 2)->value.n;
  idx = ra->value.n + step;
  limit = (ra + 1)->value.n;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_Instruction(pc);
  __dyc_printpre_byte(nresults);
  __dyc_printpre_byte(b___4);
  __dyc_printpre_byte(idx);
  __dyc_printpre_byte(limit);
  __dyc_printpre_byte(nexeccalls);
}
}
