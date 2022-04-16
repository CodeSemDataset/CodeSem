#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ LClosure *cl ;
  StkId base ;
  TValue *k ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  TValue *tmp___1 ;
  TValue g___0 ;
  TValue *i_o___1 ;
  UpVal *uv ;
  TValue const   *o2___2 ;
  TValue *o1___2 ;
  TValue *tmp___2 ;
  TValue *tmp___3 ;
  int b___0 ;
  int c ;
  TValue *i_o___2 ;
  int __attribute__((__visibility__("hidden")))  tmp___4 ;
  int __attribute__((__visibility__("hidden")))  tmp___5 ;
  Table __attribute__((__visibility__("hidden")))  *tmp___6 ;
  StkId rb___1 ;
  TValue const   *o2___3 ;
  TValue *o1___3 ;
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
  lua_State *L ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_1 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_2 ;
  Table __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_3 ;

  {
  cl = __dyc_read_ptr__typdef_LClosure();
  base = __dyc_read_ptr__typdef_TValue();
  k = __dyc_read_ptr__typdef_TValue();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  g___0 = __dyc_read_comp_46lua_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_1 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (Table __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_Table();
  tmp___1 = 0;
  i_o___1 = 0;
  uv = 0;
  o2___2 = 0;
  o1___2 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  b___0 = 0;
  c = 0;
  i_o___2 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  rb___1 = 0;
  o2___3 = 0;
  o1___3 = 0;
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
  if ((int )((i >> 14) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___1 = k + ((int )((i >> 14) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___1 = base + (int )((i >> 14) & ~ (4294967295U << 9));
  }

  base = L->base;
  goto __dyc_dummy_label;
  i_o___1 = & g___0;
  i_o___1->value.gc = (GCObject *)cl->env;
  i_o___1->tt = 5;
  L->savedpc = pc;

  base = L->base;
  goto __dyc_dummy_label;
  switch_9_8:  
  uv = cl->upvals[(int )((i >> 23) & ~ (4294967295U << 9))];
  o2___2 = (TValue const   *)ra;
  o1___2 = uv->v;
  o1___2->value = (union __anonunion_Value_29 )o2___2->value;
  o1___2->tt = (int )o2___2->tt;
  if (ra->tt >= 4) {
    if ((int )(ra->value.gc)->gch.marked & (1 | (1 << 1))) {
      if ((int )((GCObject *)uv)->gch.marked & (1 << 2)) {
        {

        }
      }
    }
  }
  goto __dyc_dummy_label;
  switch_9_9:  
  L->savedpc = pc;
  if ((int )((i >> 14) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___2 = k + ((int )((i >> 14) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___2 = base + (int )((i >> 14) & ~ (4294967295U << 9));
  }
  if ((int )((i >> 23) & ~ (4294967295U << 9)) & (1 << 8)) {
    tmp___3 = k + ((int )((i >> 23) & ~ (4294967295U << 9)) & ~ (1 << 8));
  } else {
    tmp___3 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  }

  base = L->base;
  goto __dyc_dummy_label;
  b___0 = (int )((i >> 23) & ~ (4294967295U << 9));
  c = (int )((i >> 14) & ~ (4294967295U << 9));
  i_o___2 = ra;
  tmp___4 = __dyc_funcallvar_1;
  tmp___5 = __dyc_funcallvar_2;
  tmp___6 = __dyc_funcallvar_3;
  i_o___2->value.gc = (GCObject *)tmp___6;
  i_o___2->tt = 5;
  L->savedpc = pc;
  if ((L->l_G)->totalbytes >= (L->l_G)->GCthreshold) {
    {

    }
  }
  base = L->base;
  goto __dyc_dummy_label;
  switch_9_11:  
  rb___1 = base + (int )((i >> 23) & ~ (4294967295U << 9));
  o2___3 = (TValue const   *)rb___1;
  o1___3 = ra + 1;
  o1___3->value = (union __anonunion_Value_29 )o2___3->value;
  o1___3->tt = (int )o2___3->tt;
  L->savedpc = pc;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_TValue(tmp___1);
  __dyc_print_ptr__typdef_TValue(tmp___2);
  __dyc_print_ptr__typdef_TValue(tmp___3);
  __dyc_printpre_byte(b___0);
  __dyc_printpre_byte(c);
  __dyc_printpre_byte(tmp___4);
  __dyc_printpre_byte(tmp___5);
  __dyc_print_ptr__typdef_TValue(tmp___7);
  __dyc_print_ptr__typdef_TValue(rc);
  __dyc_print_ptr__typdef_TValue(rb___3);
  __dyc_print_ptr__typdef_TValue(rc___0);
}
}
