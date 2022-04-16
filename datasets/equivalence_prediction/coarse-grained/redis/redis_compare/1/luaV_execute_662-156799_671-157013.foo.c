#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  lua_Number idx ;
  TValue *i_o___13 ;
  TValue *i_o___14 ;
  TValue const   *init ;
  TValue const   *plimit ;
  TValue const   *pstep ;
  TValue const __attribute__((__visibility__("hidden")))  *tmp___40 ;
  TValue const __attribute__((__visibility__("hidden")))  *tmp___41 ;
  TValue const __attribute__((__visibility__("hidden")))  *tmp___42 ;
  TValue const __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_14 ;
  TValue const __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_15 ;
  TValue const __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_16 ;

  {
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  idx = (lua_Number )__dyc_readpre_byte();
  plimit = (TValue const   *)__dyc_read_ptr__typdef_TValue();
  pstep = (TValue const   *)__dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_14 = (TValue const __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_15 = (TValue const __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_16 = (TValue const __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  i_o___13 = 0;
  i_o___14 = 0;
  init = 0;
  tmp___40 = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  pc += (int )((i >> 14) & ~ (4294967295U << 18)) - (((1 << 18) - 1) >> 1);
  i_o___13 = ra;
  i_o___13->value.n = idx;
  i_o___13->tt = 3;
  i_o___14 = ra + 3;
  i_o___14->value.n = idx;
  i_o___14->tt = 3;
  goto _L___1;
  tmp___42 = __dyc_funcallvar_14;
  init = (TValue const   *)tmp___42;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_Instruction(pc);
}
}
