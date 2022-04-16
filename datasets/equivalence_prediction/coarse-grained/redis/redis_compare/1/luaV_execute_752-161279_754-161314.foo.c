#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ StkId base ;
  Instruction i ;
  StkId ra ;
  int b___5 ;
  int j___0 ;
  CallInfo *ci___0 ;
  int n___0 ;
  TValue const   *o2___12 ;
  TValue *o1___12 ;
  lua_State *L ;

  {
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  b___5 = __dyc_readpre_byte();
  j___0 = __dyc_readpre_byte();
  ci___0 = __dyc_read_ptr__typdef_CallInfo();
  n___0 = __dyc_readpre_byte();
  L = __dyc_read_ptr__typdef_lua_State();
  base = 0;
  o2___12 = 0;
  o1___12 = 0;
  base = L->base;
  ra = base + (int )((i >> 6) & ~ (4294967295U << 8));
  b___5 = n___0;
  L->top = ra + n___0;
  while_17_continue:  ;
  if (! (j___0 < b___5)) {
    goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(b___5);
}
}
