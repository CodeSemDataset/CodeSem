#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ StkId base ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
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
  TValue *i_o___13 ;
  TValue *i_o___14 ;
  int tmp___39 ;
  lua_State *L ;
  int nexeccalls ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_12 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_13 ;

  {
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  nexeccalls = __dyc_readpre_byte();
  __dyc_funcallvar_12 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  base = 0;
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
  i_o___13 = 0;
  i_o___14 = 0;
  tmp___39 = 0;
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
  if ((lua_Number )0 < step) {
    tmp___39 = idx <= limit;
  } else {
    tmp___39 = limit <= idx;
  }
  if (tmp___39) {
    pc += (int )((i >> 14) & ~ (4294967295U << 18)) - (((1 << 18) - 1) >> 1);
    i_o___13 = ra;
    i_o___13->value.n = idx;
    i_o___13->tt = 3;
    i_o___14 = ra + 3;
    i_o___14->value.n = idx;
    i_o___14->tt = 3;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_Instruction(pc);
  __dyc_printpre_byte(b___4);
}
}