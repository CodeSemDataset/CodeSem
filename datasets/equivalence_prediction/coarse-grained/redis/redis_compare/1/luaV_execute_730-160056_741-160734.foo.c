#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ LClosure *cl ;
  StkId base ;
  Instruction const   *pc ;
  StkId ra ;
  Proto *p ;
  Closure *ncl ;
  int nup ;
  int j ;
  UpVal __attribute__((__visibility__("hidden")))  *tmp___47 ;
  TValue *i_o___16 ;
  lua_State *L ;
  UpVal __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_19 ;

  {
  cl = __dyc_read_ptr__typdef_LClosure();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
}
}
