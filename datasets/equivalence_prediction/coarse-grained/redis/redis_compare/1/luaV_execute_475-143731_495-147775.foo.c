#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ StkId base ;
  TValue *k ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  TValue *rb___2 ;
  TValue *rc ;
  lua_Number nb ;
  lua_Number nc ;
  TValue *i_o___3 ;
  TValue *rb___3 ;
  TValue *tmp___10 ;
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
  TValue *rb___6 ;
  TValue *tmp___16 ;
  TValue *rc___3 ;
  TValue *tmp___17 ;
  lua_Number nb___3 ;
  lua_Number nc___3 ;
  TValue *i_o___7 ;
  double tmp___18 ;
  TValue *rb___7 ;
  TValue *tmp___19 ;
  TValue *rc___4 ;
  TValue *tmp___20 ;
  lua_State *L ;
  double __dyc_funcallvar_4 ;

  {
  base = __dyc_read_ptr__typdef_TValue();
  k = __dyc_read_ptr__typdef_TValue();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  rb___2 = __dyc_read_ptr__typdef_TValue();
  rc = __dyc_read_ptr__typdef_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_4 = (double )__dyc_readpre_byte();
  nb = 0;
  nc = 0;
  i_o___3 = 0;
  rb___3 = 0;
  tmp___10 = 0;
  rc___0 = 0;
  tmp___11 = 0;
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
  rb___6 = 0;
  tmp___16 = 0;
  rc___3 = 0;
  tmp___17 = 0;
  nb___3 = 0;
  nc___3 = 0;
  i_o___7 = 0;
  tmp___18 = 0;
  rb___7 = 0;
  tmp___19 = 0;
  rc___4 = 0;
  tmp___20 = 0;
  if (rb___2->tt == 3) {
    if (rc->tt == 3) {
      nb = rb___2->value.n;
      nc = rc->value.n;
      i_o___3 = ra;
      i_o___3->value.n = nb + nc;
      i_o___3->tt = 3;
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
  switch_9_13:  
  if ((int )((i >> 23) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___10 = k + ((int )((i >> 23) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___10 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  }
  rb___3 = tmp___10;
  if ((int )((i >> 14) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___11 = k + ((int )((i >> 14) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___11 = base + (int )((i >> 14) & ~ (4294967295U << 9));
  }
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
  goto __dyc_dummy_label;
  switch_9_16:  
  if ((int )((i >> 23) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___16 = k + ((int )((i >> 23) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___16 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  }
  rb___6 = tmp___16;
  if ((int )((i >> 14) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___17 = k + ((int )((i >> 14) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___17 = base + (int )((i >> 14) & ~ (4294967295U << 9));
  }
  rc___3 = tmp___17;
  if (rb___6->tt == 3) {
    if (rc___3->tt == 3) {
      {
      nb___3 = rb___6->value.n;
      nc___3 = rc___3->value.n;
      i_o___7 = ra;
      tmp___18 = __dyc_funcallvar_4;
      i_o___7->value.n = nb___3 - tmp___18 * nc___3;
      i_o___7->tt = 3;
      }
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
  switch_9_17:  
  if ((int )((i >> 23) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___19 = k + ((int )((i >> 23) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___19 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  }
  rb___7 = tmp___19;
  if ((int )((i >> 14) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___20 = k + ((int )((i >> 14) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___20 = base + (int )((i >> 14) & ~ (4294967295U << 9));
  }
  rc___4 = tmp___20;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_TValue(rc___0);
  __dyc_print_ptr__typdef_TValue(rc___1);
  __dyc_print_ptr__typdef_TValue(rc___2);
  __dyc_print_ptr__typdef_TValue(rc___3);
  __dyc_print_ptr__typdef_TValue(rb___7);
  __dyc_print_ptr__typdef_TValue(rc___4);
}
}
