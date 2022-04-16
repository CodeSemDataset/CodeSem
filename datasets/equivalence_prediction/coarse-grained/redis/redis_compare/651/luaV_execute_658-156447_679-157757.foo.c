#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  lua_Number idx ;
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
  lua_State *L ;
  TValue const __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_14 ;
  TValue const __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_15 ;
  TValue const __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_16 ;

  {
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  idx = (lua_Number )__dyc_readpre_byte();
  tmp___39 = __dyc_readpre_byte();
  L = __dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_14 = (TValue const __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_15 = (TValue const __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_16 = (TValue const __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  i_o___13 = 0;
  i_o___14 = 0;
  init = 0;
  plimit = 0;
  pstep = 0;
  tmp___40 = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  i_o___15 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_Instruction(pc);
  __dyc_print_ptr__typdef_TValue(plimit);
}
}
