#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ LClosure *cl ;
  StkId base ;
  TValue *k ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  TValue *tmp___7 ;
  TValue *rb___2 ;
  TValue *tmp___8 ;
  TValue *rc ;
  TValue *tmp___9 ;
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
  TValue *i_o___11 ;
  int __attribute__((__visibility__("hidden")))  tmp___22 ;
  TValue *i_o___12 ;
  int tmp___23 ;
  int b___1 ;
  int c___0 ;
  TValue const   *o2___4 ;
  TValue *o1___4 ;
  TValue *rb___10 ;
  TValue *tmp___24 ;
  TValue *rc___5 ;
  TValue *tmp___25 ;
  int __attribute__((__visibility__("hidden")))  tmp___26 ;
  int tmp___27 ;
  TValue *tmp___28 ;
  TValue *tmp___29 ;
  int __attribute__((__visibility__("hidden")))  tmp___30 ;
  TValue *tmp___31 ;
  TValue *tmp___32 ;
  int tmp___33 ;
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
  Proto *p ;
  int nup ;
  lua_State *L ;
  int nexeccalls ;
  double __dyc_funcallvar_4 ;
  double __dyc_funcallvar_5 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_8 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_11 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_12 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_13 ;
  TValue const __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_14 ;
  TValue const __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_15 ;
  TValue const __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_16 ;
  TValue __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_17 ;

  {
  cl = __dyc_read_ptr__typdef_LClosure();
  base = __dyc_read_ptr__typdef_TValue();
  k = __dyc_read_ptr__typdef_TValue();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  nexeccalls = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_14 = (TValue const __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_15 = (TValue const __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_16 = (TValue const __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_17 = (TValue __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  tmp___7 = 0;
  rb___2 = 0;
  tmp___8 = 0;
  rc = 0;
  tmp___9 = 0;
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
  i_o___11 = 0;
  tmp___22 = 0;
  i_o___12 = 0;
  tmp___23 = 0;
  b___1 = 0;
  c___0 = 0;
  o2___4 = 0;
  o1___4 = 0;
  rb___10 = 0;
  tmp___24 = 0;
  rc___5 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  tmp___28 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
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
  p = 0;
  nup = 0;
  if ((int )((i >> 14) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___7 = k + ((int )((i >> 14) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___7 = base + (int )((i >> 14) & ~ (4294967295U << 9));
  }

  base = L->base;
  goto __dyc_dummy_label;
  switch_9_12:  
  if ((int )((i >> 23) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___8 = k + ((int )((i >> 23) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___8 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  }
  rb___2 = tmp___8;
  if ((int )((i >> 14) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___9 = k + ((int )((i >> 14) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___9 = base + (int )((i >> 14) & ~ (4294967295U << 9));
  }
  rc = tmp___9;
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
  if ((int )rb___9->tt == 5) {
    goto switch_11_5;
  } else {
    if ((int )rb___9->tt == 4) {
      goto switch_11_4;
    } else {
      {
      goto switch_11_default;
      if (0) {
        switch_11_5:  
        {
        i_o___11 = ra;
        tmp___22 = __dyc_funcallvar_6;
        i_o___11->value.n = (double )tmp___22;
        i_o___11->tt = 3;
        }
        goto switch_11_break;
        switch_11_4:  
        i_o___12 = ra;
        i_o___12->value.n = (double )(rb___9->value.gc)->ts.tsv.len;
        i_o___12->tt = 3;
        goto switch_11_break;
        switch_11_default:  
        {
        L->savedpc = pc;
        tmp___23 = __dyc_funcallvar_7;
        }
        if (! tmp___23) {
          {

          }
        }
        base = L->base;
      } else {
        switch_11_break:  ;
      }
      }
    }
  }
  goto __dyc_dummy_label;
  b___1 = (int )((i >> 23) & ~ (4294967295U << 9));
  c___0 = (int )((i >> 14) & ~ (4294967295U << 9));
  L->savedpc = pc;

  if ((L->l_G)->totalbytes >= (L->l_G)->GCthreshold) {
    {

    }
  }
  base = L->base;
  o2___4 = (TValue const   *)(base + b___1);
  o1___4 = base + (int )((i >> 6) & ~ (4294967295U << 8));
  o1___4->value = (union __anonunion_Value_29 )o2___4->value;
  o1___4->tt = (int )o2___4->tt;
  goto __dyc_dummy_label;
  switch_9_22:  
  pc += (int )((i >> 14) & ~ (4294967295U << 18)) - (((1 << 18) - 1) >> 1);
  goto __dyc_dummy_label;
  switch_9_23:  
  if ((int )((i >> 23) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___24 = k + ((int )((i >> 23) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___24 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  }
  rb___10 = tmp___24;
  if ((int )((i >> 14) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___25 = k + ((int )((i >> 14) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___25 = base + (int )((i >> 14) & ~ (4294967295U << 9));
  }
  rc___5 = tmp___25;
  L->savedpc = pc;
  if (rb___10->tt == rc___5->tt) {
    {
    tmp___26 = __dyc_funcallvar_8;
    }
    if (tmp___26) {
      tmp___27 = 1;
    } else {
      tmp___27 = 0;
    }
  } else {
    tmp___27 = 0;
  }
  if (tmp___27 == (int )((i >> 6) & ~ (4294967295U << 8))) {
    pc += (int )((*pc >> 14) & (unsigned int const   )(~ (4294967295U << 18))) - (((1 << 18) - 1) >> 1);
  }
  base = L->base;
  pc ++;
  goto __dyc_dummy_label;
  switch_9_24:  
  L->savedpc = pc;
  if ((int )((i >> 14) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___28 = k + ((int )((i >> 14) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___28 = base + (int )((i >> 14) & ~ (4294967295U << 9));
  }
  if ((int )((i >> 23) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___29 = k + ((int )((i >> 23) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___29 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  }
  tmp___30 = __dyc_funcallvar_9;
  if (tmp___30 == (int __attribute__((__visibility__("hidden")))  )((int )((i >> 6) & ~ (4294967295U << 8)))) {
    pc += (int )((*pc >> 14) & (unsigned int const   )(~ (4294967295U << 18))) - (((1 << 18) - 1) >> 1);
  }
  base = L->base;
  pc ++;
  goto __dyc_dummy_label;
  switch_9_25:  
  L->savedpc = pc;
  if ((int )((i >> 14) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___31 = k + ((int )((i >> 14) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___31 = base + (int )((i >> 14) & ~ (4294967295U << 9));
  }
  if ((int )((i >> 23) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___32 = k + ((int )((i >> 23) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___32 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  }
  tmp___33 = __dyc_funcallvar_10;
  if (tmp___33 == (int )((i >> 6) & ~ (4294967295U << 8))) {
    pc += (int )((*pc >> 14) & (unsigned int const   )(~ (4294967295U << 18))) - (((1 << 18) - 1) >> 1);
  }
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
  p = *((cl->p)->p + (int )((i >> 14) & ~ (4294967295U << 18)));
  nup = (int )p->nups;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_Instruction(pc);
  __dyc_print_ptr__typdef_TValue(tmp___7);
  __dyc_print_ptr__typdef_TValue(rc);
  __dyc_print_ptr__typdef_TValue(rc___0);
  __dyc_print_ptr__typdef_TValue(rc___1);
  __dyc_print_ptr__typdef_TValue(rc___2);
  __dyc_print_ptr__typdef_TValue(rc___3);
  __dyc_print_ptr__typdef_TValue(rc___4);
  __dyc_printpre_byte(nb___4);
  __dyc_printpre_byte(nc___4);
  __dyc_printpre_byte(c___0);
  __dyc_print_ptr__typdef_TValue(tmp___28);
  __dyc_print_ptr__typdef_TValue(tmp___29);
  __dyc_print_ptr__typdef_TValue(tmp___31);
  __dyc_print_ptr__typdef_TValue(tmp___32);
  __dyc_printpre_byte(nresults);
  __dyc_printpre_byte(b___4);
  __dyc_print_ptr__typdef_TValue(plimit);
  __dyc_printpre_byte(n);
  __dyc_printpre_byte(c___1);
  __dyc_printpre_byte(last);
  __dyc_printpre_byte(tmp___44);
  __dyc_printpre_byte(nup);
  __dyc_printpre_byte(nexeccalls);
}
}
