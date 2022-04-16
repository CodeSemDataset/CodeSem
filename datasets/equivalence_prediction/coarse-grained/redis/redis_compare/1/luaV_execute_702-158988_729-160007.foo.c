#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ LClosure *cl ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
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
  Closure __attribute__((__visibility__("hidden")))  *tmp___46 ;
  lua_State *L ;
  TValue __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_17 ;
  Closure __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_18 ;

  {
  cl = __dyc_read_ptr__typdef_LClosure();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  n = __dyc_readpre_byte();
  c___1 = __dyc_readpre_byte();
  L = __dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_17 = (TValue __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_18 = (Closure __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_Closure();
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
  tmp___46 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_Instruction(pc);
  __dyc_printpre_byte(n);
  __dyc_printpre_byte(c___1);
  __dyc_printpre_byte(last);
  __dyc_printpre_byte(tmp___44);
  __dyc_print_ptr__typdef_Closure(ncl);
  __dyc_printpre_byte(nup);
}
}
