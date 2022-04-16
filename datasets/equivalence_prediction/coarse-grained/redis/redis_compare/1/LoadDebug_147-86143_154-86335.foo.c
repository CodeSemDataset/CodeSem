#include "../../include/dycfoo.h"
#include "../../include/lundump.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  int n ;
  Proto *f ;
  TString *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;

  {
  i = __dyc_readpre_byte();
  n = __dyc_readpre_byte();
  f = __dyc_read_ptr__typdef_Proto();
  __dyc_funcallvar_7 = __dyc_read_ptr__typdef_TString();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();

  while (1) {
    while_5_continue:  ;
    if (! (i < n)) {
      goto while_5_break;
    }
    (f->locvars + i)->varname = (TString *)((void *)0);
    i ++;
  }
  while_5_break:  ;
  i = 0;
  while (1) {
    while_6_continue:  ;
    if (! (i < n)) {
      goto while_6_break;
    }
    {
    (f->locvars + i)->varname = __dyc_funcallvar_7;
    (f->locvars + i)->startpc = __dyc_funcallvar_8;
    (f->locvars + i)->endpc = __dyc_funcallvar_9;
    i ++;
    }
  }
  while_6_break:  ;
  n = __dyc_funcallvar_10;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(n);
}
}
