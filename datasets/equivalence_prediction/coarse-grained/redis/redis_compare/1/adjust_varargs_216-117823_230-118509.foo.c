#include "../../include/dycfoo.h"
#include "../../include/ldo.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  int nfixargs ;
  Table *htab ;
  StkId base ;
  StkId fixed ;
  int nvar ;
  Table __attribute__((__visibility__("hidden")))  *tmp___0 ;
  TValue const   *o2 ;
  TValue *o1 ;
  TValue __attribute__((__visibility__("hidden")))  *tmp___1 ;
  TValue *i_o ;
  TString __attribute__((__visibility__("hidden")))  *tmp___2 ;
  TValue __attribute__((__visibility__("hidden")))  *tmp___3 ;
  lua_State *L ;
  Proto *p ;
  int actual ;
  Table __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_1 ;
  TValue __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_2 ;
  TString __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_3 ;
  TValue __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_4 ;

  {
  nfixargs = __dyc_readpre_byte();
  L = __dyc_read_ptr__typdef_lua_State();
  p = __dyc_read_ptr__typdef_Proto();
  actual = __dyc_readpre_byte();
  __dyc_funcallvar_1 = (Table __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_Table();
  __dyc_funcallvar_2 = (TValue __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_3 = (TString __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TString();
  __dyc_funcallvar_4 = (TValue __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  i = 0;
  htab = 0;
  base = 0;
  fixed = 0;
  nvar = 0;
  tmp___0 = 0;
  o2 = 0;
  o1 = 0;
  tmp___1 = 0;
  i_o = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  if ((int )p->is_vararg & 4) {
    nvar = actual - nfixargs;
    if ((L->l_G)->totalbytes >= (L->l_G)->GCthreshold) {
      {

      }
    }
    if ((char *)L->stack_last - (char *)L->top <= (int )p->maxstacksize * (int )sizeof(TValue )) {
      {

      }
    }
    {
    tmp___0 = __dyc_funcallvar_1;
    htab = (Table *)tmp___0;
    i = 0;
    }
    {
    while (1) {
      while_4_continue:  ;
      if (! (i < nvar)) {
        goto while_4_break;
      }
      {
      o2 = (TValue const   *)((L->top - nvar) + i);
      tmp___1 = __dyc_funcallvar_2;
      o1 = (TValue *)tmp___1;
      o1->value = (union __anonunion_Value_25 )o2->value;
      o1->tt = (int )o2->tt;
      i ++;
      }
    }
    while_4_break:  ;
    }
    {
    tmp___2 = __dyc_funcallvar_3;
    tmp___3 = __dyc_funcallvar_4;
    i_o = (TValue *)tmp___3;
    i_o->value.n = (double )nvar;
    i_o->tt = 3;
    }
  }
  fixed = L->top - actual;
  base = L->top;
  i = 0;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
  __dyc_print_ptr__typdef_Table(htab);
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_TValue(fixed);
  __dyc_print_ptr__typdef_TString(tmp___2);
}
}
