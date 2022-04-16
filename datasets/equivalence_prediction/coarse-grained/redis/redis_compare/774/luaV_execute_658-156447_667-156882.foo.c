#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  lua_Number step ;
  lua_Number idx ;
  lua_Number limit ;
  TValue *i_o___13 ;
  TValue *i_o___14 ;
  int tmp___39 ;
  TValue const   *init ;
  TValue const   *plimit ;
  TValue const   *pstep ;
  lua_State *L ;

  {
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  step = (lua_Number )__dyc_readpre_byte();
  idx = (lua_Number )__dyc_readpre_byte();
  limit = (lua_Number )__dyc_readpre_byte();
  L = __dyc_read_ptr__typdef_lua_State();
  i_o___13 = 0;
  i_o___14 = 0;
  tmp___39 = 0;
  init = 0;
  plimit = 0;
  pstep = 0;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_Instruction(pc);
  __dyc_print_ptr__typdef_TValue(init);
  __dyc_print_ptr__typdef_TValue(plimit);
  __dyc_print_ptr__typdef_TValue(pstep);
}
}
