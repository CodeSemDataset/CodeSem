#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ StkId base ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  int b___4 ;
  int __attribute__((__visibility__("hidden")))  tmp___38 ;
  lua_Number step ;
  lua_Number idx ;
  lua_Number limit ;
  TValue *i_o___13 ;
  TValue *i_o___14 ;
  int tmp___39 ;
  TValue const   *init ;
  TValue const   *plimit ;
  TValue const   *pstep ;
  TValue const __attribute__((__visibility__("hidden")))  *tmp___40 ;
  TValue const __attribute__((__visibility__("hidden")))  *tmp___41 ;
  TValue const __attribute__((__visibility__("hidden")))  *tmp___42 ;
  TValue *i_o___15 ;
  StkId cb ;
  TValue const   *o2___7 ;
  TValue *o1___7 ;
  TValue const   *o2___8 ;
  TValue *o1___8 ;
  TValue const   *o2___9 ;
  TValue *o1___9 ;
  TValue const   *o2___10 ;
  TValue *o1___10 ;
  int n ;
  int c___1 ;
  int last ;
  Table *h ;
  Instruction const   *tmp___43 ;
  TValue *val ;
  TValue const   *o2___11 ;
  TValue *o1___11 ;
  int tmp___44 ;
  TValue __attribute__((__visibility__("hidden")))  *tmp___45 ;
  lua_State *L ;
  int nexeccalls ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_13 ;
  TValue const __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_14 ;
  TValue const __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_15 ;
  TValue const __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_16 ;
  TValue __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_17 ;

  {
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  b___4 = __dyc_readpre_byte();
  L = __dyc_read_ptr__typdef_lua_State();
  nexeccalls = __dyc_readpre_byte();
  __dyc_funcallvar_13 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_14 = (TValue const __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_15 = (TValue const __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_16 = (TValue const __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_17 = (TValue __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  base = 0;
  tmp___38 = 0;
  step = 0;
  idx = 0;
  limit = 0;
  i_o___13 = 0;
  i_o___14 = 0;
  tmp___39 = 0;
  init = 0;
  plimit = 0;
  pstep = 0;
  tmp___40 = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  i_o___15 = 0;
  cb = 0;
  o2___7 = 0;
  o1___7 = 0;
  o2___8 = 0;
  o1___8 = 0;
  o2___9 = 0;
  o1___9 = 0;
  o2___10 = 0;
  o1___10 = 0;
  n = 0;
  c___1 = 0;
  last = 0;
  h = 0;
  tmp___43 = 0;
  val = 0;
  o2___11 = 0;
  o1___11 = 0;
  tmp___44 = 0;
  tmp___45 = 0;
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
  goto __dyc_dummy_label;
  switch_9_32:  
  init = (TValue const   *)ra;
  plimit = (TValue const   *)(ra + 1);
  pstep = (TValue const   *)(ra + 2);
  L->savedpc = pc;
  if (init->tt == 3) {
    goto _L___1;
  } else {
    {
    tmp___42 = __dyc_funcallvar_14;
    init = (TValue const   *)tmp___42;
    }
    if ((unsigned long )init != (unsigned long )((void *)0)) {
      _L___1:  
      if (plimit->tt == 3) {
        goto _L___0;
      } else {
        {
        tmp___41 = __dyc_funcallvar_15;
        plimit = (TValue const   *)tmp___41;
        }
        if ((unsigned long )plimit != (unsigned long )((void *)0)) {
          _L___0:  
          if (! (pstep->tt == 3)) {
            {
            tmp___40 = __dyc_funcallvar_16;
            pstep = (TValue const   *)tmp___40;
            }
            if (! ((unsigned long )pstep != (unsigned long )((void *)0))) {
              {

              }
            }
          }
        } else {
          {

          }
        }
      }
    } else {
      {

      }
    }
  }
  i_o___15 = ra;
  i_o___15->value.n = ra->value.n - (lua_Number )pstep->value.n;
  i_o___15->tt = 3;
  pc += (int )((i >> 14) & ~ (4294967295U << 18)) - (((1 << 18) - 1) >> 1);
  goto __dyc_dummy_label;
  cb = ra + 3;
  o2___7 = (TValue const   *)(ra + 2);
  o1___7 = cb + 2;
  o1___7->value = (union __anonunion_Value_29 )o2___7->value;
  o1___7->tt = (int )o2___7->tt;
  o2___8 = (TValue const   *)(ra + 1);
  o1___8 = cb + 1;
  o1___8->value = (union __anonunion_Value_29 )o2___8->value;
  o1___8->tt = (int )o2___8->tt;
  o2___9 = (TValue const   *)ra;
  o1___9 = cb;
  o1___9->value = (union __anonunion_Value_29 )o2___9->value;
  o1___9->tt = (int )o2___9->tt;
  L->top = cb + 3;
  L->savedpc = pc;

  base = L->base;
  L->top = (L->ci)->top;
  cb = (base + (int )((i >> 6) & ~ (4294967295U << 8))) + 3;
  if (! (cb->tt == 0)) {
    o2___10 = (TValue const   *)cb;
    o1___10 = cb - 1;
    o1___10->value = (union __anonunion_Value_29 )o2___10->value;
    o1___10->tt = (int )o2___10->tt;
    pc += (int )((*pc >> 14) & (unsigned int const   )(~ (4294967295U << 18))) - (((1 << 18) - 1) >> 1);
  }
  pc ++;
  goto __dyc_dummy_label;
  switch_9_34:  
  n = (int )((i >> 23) & ~ (4294967295U << 9));
  c___1 = (int )((i >> 14) & ~ (4294967295U << 9));
  if (n == 0) {
    n = (L->top - ra) - 1;
    L->top = (L->ci)->top;
  }
  if (c___1 == 0) {
    tmp___43 = pc;
    pc ++;
    c___1 = (int )*tmp___43;
  }
  if (! (ra->tt == 5)) {
    goto __dyc_dummy_label;
  }
  h = & (ra->value.gc)->h;
  last = (c___1 - 1) * 50 + n;
  if (last > h->sizearray) {
    {

    }
  }
  while (1) {
    while_15_continue:  ;
    if (! (n > 0)) {
      goto while_15_break;
    }
    {
    val = ra + n;
    o2___11 = (TValue const   *)val;
    tmp___44 = last;
    last --;
    tmp___45 = __dyc_funcallvar_17;
    o1___11 = (TValue *)tmp___45;
    o1___11->value = (union __anonunion_Value_29 )o2___11->value;
    o1___11->tt = (int )o2___11->tt;
    }
    if (val->tt >= 4) {
      if ((int )(val->value.gc)->gch.marked & (1 | (1 << 1))) {
        if ((int )((GCObject *)h)->gch.marked & (1 << 2)) {
          {

          }
        }
      }
    }
    n --;
  }
  while_15_break:  ;
  goto __dyc_dummy_label;

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_Instruction(pc);
  __dyc_printpre_byte(b___4);
  __dyc_print_ptr__typdef_TValue(plimit);
  __dyc_printpre_byte(n);
  __dyc_printpre_byte(c___1);
  __dyc_printpre_byte(last);
  __dyc_printpre_byte(tmp___44);
}
}
