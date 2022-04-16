#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ StkId base ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
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
  lua_State *L ;
  TValue const __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_14 ;
  TValue const __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_15 ;
  TValue const __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_16 ;

  {
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  init = (TValue const   *)__dyc_read_ptr__typdef_TValue();
  plimit = (TValue const   *)__dyc_read_ptr__typdef_TValue();
  pstep = (TValue const   *)__dyc_read_ptr__typdef_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_14 = (TValue const __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_15 = (TValue const __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_16 = (TValue const __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  base = 0;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_Instruction(pc);
}
}
