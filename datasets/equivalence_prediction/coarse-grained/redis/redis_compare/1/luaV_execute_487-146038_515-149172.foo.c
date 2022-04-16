#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ StkId base ;
  TValue *k ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  TValue *rb___5 ;
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
  lua_Number nb___4 ;
  lua_Number nc___4 ;
  TValue *i_o___8 ;
  TValue *rb___8 ;
  lua_Number nb___5 ;
  TValue *i_o___9 ;
  int res ;
  int tmp___21 ;
  TValue *i_o___10 ;
  TValue const   *rb___9 ;
  lua_State *L ;
  double __dyc_funcallvar_4 ;
  double __dyc_funcallvar_5 ;

  {
  base = __dyc_read_ptr__typdef_TValue();
  k = __dyc_read_ptr__typdef_TValue();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  rb___5 = __dyc_read_ptr__typdef_TValue();
  tmp___15 = __dyc_read_ptr__typdef_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_4 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (double )__dyc_readpre_byte();
  rc___2 = 0;
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
  nb___4 = 0;
  nc___4 = 0;
  i_o___8 = 0;
  rb___8 = 0;
  nb___5 = 0;
  i_o___9 = 0;
  res = 0;
  tmp___21 = 0;
  i_o___10 = 0;
  rb___9 = 0;
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
  if (rb___7->tt == 3) {
    if (rc___4->tt == 3) {
      {
      nb___4 = rb___7->value.n;
      nc___4 = rc___4->value.n;
      i_o___8 = ra;
      i_o___8->value.n = __dyc_funcallvar_5;
      i_o___8->tt = 3;
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
  switch_9_18:  
  rb___8 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  if (rb___8->tt == 3) {
    nb___5 = rb___8->value.n;
    i_o___9 = ra;
    i_o___9->value.n = - nb___5;
    i_o___9->tt = 3;
  } else {
    {
    L->savedpc = pc;

    base = L->base;
    }
  }
  goto __dyc_dummy_label;
  switch_9_19:  
  if ((base + (int )((i >> 23) & ~ (4294967295U << 9)))->tt == 0) {
    tmp___21 = 1;
  } else {
    if ((base + (int )((i >> 23) & ~ (4294967295U << 9)))->tt == 1) {
      if ((base + (int )((i >> 23) & ~ (4294967295U << 9)))->value.b == 0) {
        tmp___21 = 1;
      } else {
        tmp___21 = 0;
      }
    } else {
      tmp___21 = 0;
    }
  }
  res = tmp___21;
  i_o___10 = ra;
  i_o___10->value.b = res;
  i_o___10->tt = 1;
  goto __dyc_dummy_label;
  switch_9_20:  
  rb___9 = (TValue const   *)(base + (int )((i >> 23) & ~ (4294967295U << 9)));
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_TValue(rc___2);
  __dyc_print_ptr__typdef_TValue(rc___3);
  __dyc_print_ptr__typdef_TValue(rc___4);
  __dyc_printpre_byte(nb___4);
  __dyc_printpre_byte(nc___4);
  __dyc_print_ptr__typdef_TValue(rb___9);
}
}
