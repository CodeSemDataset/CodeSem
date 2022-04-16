#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ LClosure *cl ;
  StkId base ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  StkId cb ;
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
  Closure *ncl ;
  int nup ;
  int j ;
  Closure __attribute__((__visibility__("hidden")))  *tmp___46 ;
  UpVal __attribute__((__visibility__("hidden")))  *tmp___47 ;
  TValue *i_o___16 ;
  int b___5 ;
  CallInfo *ci___0 ;
  int n___0 ;
  lua_State *L ;
  TValue __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_17 ;
  Closure __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_18 ;
  UpVal __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_19 ;

  {
  cl = __dyc_read_ptr__typdef_LClosure();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  cb = __dyc_read_ptr__typdef_TValue();
  o2___8 = (TValue const   *)__dyc_read_ptr__typdef_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_17 = (TValue __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_18 = (Closure __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_Closure();
  __dyc_funcallvar_19 = (UpVal __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_UpVal();
  base = 0;
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
  ncl = 0;
  nup = 0;
  j = 0;
  tmp___46 = 0;
  tmp___47 = 0;
  i_o___16 = 0;
  b___5 = 0;
  ci___0 = 0;
  n___0 = 0;
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
  tmp___46 = __dyc_funcallvar_18;
  ncl = (Closure *)tmp___46;
  ncl->l.p = p;
  j = 0;
  while (1) {
    while_16_continue:  ;
    if (! (j < nup)) {
      goto while_16_break;
    }
    if ((int )((enum __anonenum_OpCode_36 )(*pc & (unsigned int const   )(~ (4294967295U << 6)))) == 4) {
      ncl->l.upvals[j] = cl->upvals[(int )((*pc >> 23) & (unsigned int const   )(~ (4294967295U << 9)))];
    } else {
      {
      tmp___47 = __dyc_funcallvar_19;
      ncl->l.upvals[j] = (UpVal *)tmp___47;
      }
    }
    j ++;
    pc ++;
  }
  while_16_break:  ;
  i_o___16 = ra;
  i_o___16->value.gc = (GCObject *)ncl;
  i_o___16->tt = 6;
  L->savedpc = pc;
  if ((L->l_G)->totalbytes >= (L->l_G)->GCthreshold) {
    {

    }
  }
  base = L->base;
  goto __dyc_dummy_label;
  switch_9_37:  
  b___5 = (int )((i >> 23) & ~ (4294967295U << 9)) - 1;
  ci___0 = L->ci;
  n___0 = ((ci___0->base - ci___0->func) - (int )(cl->p)->numparams) - 1;
  if (b___5 == -1) {
    L->savedpc = pc;
    if ((char *)L->stack_last - (char *)L->top <= n___0 * (int )sizeof(TValue )) {
      {

      }
    }
    base = L->base;
    ra = base + (int )((i >> 6) & ~ (4294967295U << 8));
    b___5 = n___0;
    L->top = ra + n___0;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_Instruction(pc);
  __dyc_printpre_byte(n);
  __dyc_printpre_byte(c___1);
  __dyc_printpre_byte(last);
  __dyc_printpre_byte(tmp___44);
  __dyc_printpre_byte(b___5);
}
}
