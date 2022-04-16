#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ StkId base ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  TValue *rb___7 ;
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
  lua_State *L ;
  double __dyc_funcallvar_5 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;

  {
  base = __dyc_read_ptr__typdef_TValue();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  rb___7 = __dyc_read_ptr__typdef_TValue();
  tmp___20 = __dyc_read_ptr__typdef_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_5 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  rc___4 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_TValue(rc___4);
  __dyc_printpre_byte(nb___4);
  __dyc_printpre_byte(nc___4);
  __dyc_printpre_byte(b___1);
}
}
