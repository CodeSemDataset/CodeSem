#include "../../include/dycfoo.h"
#include "../../include/ldo.i.hd.c.h"
void __dyc_foo(void) 
{ ptrdiff_t funcr ;
  CallInfo *ci ;
  StkId st ;
  StkId base ;
  Proto *p ;
  int nargs ;
  CallInfo *ci___0 ;
  int n ;
  lua_State *L ;
  StkId func ;
  int nresults ;
  StkId __dyc_funcallvar_2 ;
  CallInfo *__dyc_funcallvar_3 ;
  CallInfo *__dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;

  {
  funcr = (ptrdiff_t )__dyc_readpre_byte();
  p = __dyc_read_ptr__typdef_Proto();
  L = __dyc_read_ptr__typdef_lua_State();
  func = __dyc_read_ptr__typdef_TValue();
  nresults = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_3 = __dyc_read_ptr__typdef_CallInfo();
  __dyc_funcallvar_4 = __dyc_read_ptr__typdef_CallInfo();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  ci = 0;
  st = 0;
  base = 0;
  nargs = 0;
  ci___0 = 0;
  n = 0;
  if (! p->is_vararg) {
    base = func + 1;
    if ((unsigned long )L->top > (unsigned long )(base + (int )p->numparams)) {
      L->top = base + (int )p->numparams;
    }
  } else {
    {
    nargs = (L->top - func) - 1;
    base = __dyc_funcallvar_2;
    func = (TValue *)((char *)L->stack + funcr);
    }
  }
  if ((unsigned long )L->ci == (unsigned long )L->end_ci) {
    {
    ci = __dyc_funcallvar_3;
    }
  } else {
    (L->ci) ++;
    ci = L->ci;
  }
  ci->func = func;
  ci->base = base;
  L->base = ci->base;
  ci->top = L->base + (int )p->maxstacksize;
  L->savedpc = (Instruction const   *)p->code;
  ci->tailcalls = 0;
  ci->nresults = nresults;
  st = L->top;
  while (1) {
    while_7_continue:  ;
    if (! ((unsigned long )st < (unsigned long )ci->top)) {
      goto while_7_break;
    }
    st->tt = 0;
    st ++;
  }
  while_7_break:  ;
  L->top = ci->top;
  if ((int )L->hookmask & 1) {
    {
    (L->savedpc) ++;

    (L->savedpc) --;
    }
  }
  goto __dyc_dummy_label;
  if ((char *)L->stack_last - (char *)L->top <= 20 * (int )sizeof(TValue )) {
    {

    }
  }
  if ((unsigned long )L->ci == (unsigned long )L->end_ci) {
    {
    ci___0 = __dyc_funcallvar_4;
    }
  } else {
    (L->ci) ++;
    ci___0 = L->ci;
  }
  ci___0->func = (TValue *)((char *)L->stack + funcr);
  ci___0->base = ci___0->func + 1;
  L->base = ci___0->base;
  ci___0->top = L->top + 20;
  ci___0->nresults = nresults;
  if ((int )L->hookmask & 1) {
    {

    }
  }
  n = __dyc_funcallvar_5;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(nargs);
  __dyc_printpre_byte(n);
}
}
