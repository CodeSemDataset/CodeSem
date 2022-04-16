#include "../../include/dycfoo.h"
#include "../../include/ldo.i.hd.c.h"
void __dyc_foo(void) 
{ ptrdiff_t funcr ;
  CallInfo *ci ;
  StkId st ;
  CallInfo *ci___0 ;
  int n ;
  lua_State *L ;
  int nresults ;
  CallInfo *__dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;

  {
  funcr = (ptrdiff_t )__dyc_readpre_byte();
  ci = __dyc_read_ptr__typdef_CallInfo();
  st = __dyc_read_ptr__typdef_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  nresults = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__typdef_CallInfo();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  ci___0 = 0;
  n = 0;
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
  __dyc_printpre_byte(n);
}
}
