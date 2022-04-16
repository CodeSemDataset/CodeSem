#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ StkId base ;
  TValue *k ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  TValue *rb___3 ;
  TValue *rc___0 ;
  TValue *tmp___11 ;
  lua_Number nb___0 ;
  lua_Number nc___0 ;
  TValue *i_o___4 ;
  TValue *rb___4 ;
  TValue *tmp___12 ;
  TValue *rc___1 ;
  TValue *tmp___13 ;
  lua_Number nb___1 ;
  lua_Number nc___1 ;
  TValue *i_o___5 ;
  TValue *rb___5 ;
  TValue *tmp___14 ;
  TValue *rc___2 ;
  TValue *tmp___15 ;
  lua_Number nb___2 ;
  lua_Number nc___2 ;
  TValue *i_o___6 ;
  lua_State *L ;

  {
  base = __dyc_read_ptr__typdef_TValue();
  k = __dyc_read_ptr__typdef_TValue();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  rb___3 = __dyc_read_ptr__typdef_TValue();
  tmp___11 = __dyc_read_ptr__typdef_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  rc___0 = 0;
  nb___0 = 0;
  nc___0 = 0;
  i_o___4 = 0;
  rb___4 = 0;
  tmp___12 = 0;
  rc___1 = 0;
  tmp___13 = 0;
  nb___1 = 0;
  nc___1 = 0;
  i_o___5 = 0;
  rb___5 = 0;
  tmp___14 = 0;
  rc___2 = 0;
  tmp___15 = 0;
  nb___2 = 0;
  nc___2 = 0;
  i_o___6 = 0;
  rc___0 = tmp___11;
  if (rb___3->tt == 3) {
    if (rc___0->tt == 3) {
      nb___0 = rb___3->value.n;
      nc___0 = rc___0->value.n;
      i_o___4 = ra;
      i_o___4->value.n = nb___0 - nc___0;
      i_o___4->tt = 3;
    } else {
      {
      L->savedpc = pc;

      base = L->base;
      }
    }
  } else {
    {
    L->savedpc = pc;

    base = L->base;
    }
  }
  goto __dyc_dummy_label;
  switch_9_14:  
  if ((int )((i >> 23) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___12 = k + ((int )((i >> 23) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___12 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  }
  rb___4 = tmp___12;
  if ((int )((i >> 14) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___13 = k + ((int )((i >> 14) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___13 = base + (int )((i >> 14) & ~ (4294967295U << 9));
  }
  rc___1 = tmp___13;
  if (rb___4->tt == 3) {
    if (rc___1->tt == 3) {
      nb___1 = rb___4->value.n;
      nc___1 = rc___1->value.n;
      i_o___5 = ra;
      i_o___5->value.n = nb___1 * nc___1;
      i_o___5->tt = 3;
    } else {
      {
      L->savedpc = pc;

      base = L->base;
      }
    }
  } else {
    {
    L->savedpc = pc;

    base = L->base;
    }
  }
  goto __dyc_dummy_label;
  switch_9_15:  
  if ((int )((i >> 23) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___14 = k + ((int )((i >> 23) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___14 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  }
  rb___5 = tmp___14;
  if ((int )((i >> 14) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___15 = k + ((int )((i >> 14) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___15 = base + (int )((i >> 14) & ~ (4294967295U << 9));
  }
  rc___2 = tmp___15;
  if (rb___5->tt == 3) {
    if (rc___2->tt == 3) {
      nb___2 = rb___5->value.n;
      nc___2 = rc___2->value.n;
      i_o___6 = ra;
      i_o___6->value.n = nb___2 / nc___2;
      i_o___6->tt = 3;
    } else {
      {
      L->savedpc = pc;

      base = L->base;
      }
    }
  } else {
    {
    L->savedpc = pc;

    base = L->base;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_TValue(rc___0);
  __dyc_print_ptr__typdef_TValue(rc___1);
  __dyc_print_ptr__typdef_TValue(rc___2);
}
}
