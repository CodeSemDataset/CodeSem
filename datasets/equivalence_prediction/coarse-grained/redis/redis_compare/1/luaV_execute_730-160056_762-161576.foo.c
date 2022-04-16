#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ LClosure *cl ;
  StkId base ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  Proto *p ;
  Closure *ncl ;
  int nup ;
  int j ;
  UpVal __attribute__((__visibility__("hidden")))  *tmp___47 ;
  TValue *i_o___16 ;
  int b___5 ;
  int j___0 ;
  CallInfo *ci___0 ;
  int n___0 ;
  TValue const   *o2___12 ;
  TValue *o1___12 ;
  lua_State *L ;
  UpVal __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_19 ;

  {
  cl = __dyc_read_ptr__typdef_LClosure();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  p = __dyc_read_ptr__typdef_Proto();
  ncl = __dyc_read_ptr__typdef_Closure();
  nup = __dyc_readpre_byte();
  L = __dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_19 = (UpVal __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_UpVal();
  base = 0;
  j = 0;
  tmp___47 = 0;
  i_o___16 = 0;
  b___5 = 0;
  j___0 = 0;
  ci___0 = 0;
  n___0 = 0;
  o2___12 = 0;
  o1___12 = 0;
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
  j___0 = 0;
  while (1) {
    while_17_continue:  ;
    if (! (j___0 < b___5)) {
      goto while_17_break;
    }
    if (j___0 < n___0) {
      o2___12 = (TValue const   *)((ci___0->base - n___0) + j___0);
      o1___12 = ra + j___0;
      o1___12->value = (union __anonunion_Value_29 )o2___12->value;
      o1___12->tt = (int )o2___12->tt;
    } else {
      (ra + j___0)->tt = 0;
    }
    j___0 ++;
  }
  while_17_break:  ;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_printpre_byte(n___0);
}
}
