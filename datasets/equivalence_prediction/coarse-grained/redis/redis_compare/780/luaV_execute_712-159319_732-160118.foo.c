#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ LClosure *cl ;
  Instruction const   *pc ;
  int n ;
  Closure *ncl ;
  int nup ;
  int j ;
  UpVal __attribute__((__visibility__("hidden")))  *tmp___47 ;
  UpVal __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_19 ;

  {
  cl = __dyc_read_ptr__typdef_LClosure();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  n = __dyc_readpre_byte();
  ncl = __dyc_read_ptr__typdef_Closure();
  nup = __dyc_readpre_byte();
  j = __dyc_readpre_byte();
  __dyc_funcallvar_19 = (UpVal __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_UpVal();
  tmp___47 = 0;
  n --;
  while_16_continue:  ;
  if (! (j < nup)) {
    goto __dyc_dummy_label;
  }
  if ((int )((enum __anonenum_OpCode_36 )(*pc & (unsigned int const   )(~ (4294967295U << 6)))) == 4) {
    ncl->l.upvals[j] = cl->upvals[(int )((*pc >> 23) & (unsigned int const   )(~ (4294967295U << 9)))];
  } else {
    {
    tmp___47 = __dyc_funcallvar_19;
    ncl->l.upvals[j] = (UpVal *)tmp___47;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(n);
}
}
