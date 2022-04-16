#include "../../include/dycfoo.h"
#include "../../include/lparser.i.hd.c.h"
void __dyc_foo(void) 
{ FuncState *fs ;
  int nvars ;
  int line ;
  int base ;
  int tmp ;
  TString __attribute__((__visibility__("hidden")))  *tmp___0 ;
  int tmp___1 ;
  TString __attribute__((__visibility__("hidden")))  *tmp___2 ;
  int tmp___3 ;
  TString __attribute__((__visibility__("hidden")))  *tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  TString *tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  LexState *ls ;
  TString __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_1 ;
  TString __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_2 ;
  TString __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  TString *__dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;

  {
  fs = __dyc_read_ptr__typdef_FuncState();
  ls = __dyc_read_ptr__typdef_LexState();
  __dyc_funcallvar_1 = (TString __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TString();
  __dyc_funcallvar_2 = (TString __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TString();
  __dyc_funcallvar_3 = (TString __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TString();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__typdef_TString();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  nvars = 0;
  line = 0;
  base = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  nvars = 0;
  base = fs->freereg;
  tmp = nvars;
  nvars ++;
  tmp___0 = __dyc_funcallvar_1;

  tmp___1 = nvars;
  nvars ++;
  tmp___2 = __dyc_funcallvar_2;

  tmp___3 = nvars;
  nvars ++;
  tmp___4 = __dyc_funcallvar_3;

  tmp___5 = nvars;
  nvars ++;

  while (1) {
    while_25_continue:  ;
    {
    tmp___8 = __dyc_funcallvar_4;
    }
    if (! tmp___8) {
      goto while_25_break;
    }
    {
    tmp___6 = nvars;
    nvars ++;
    tmp___7 = __dyc_funcallvar_5;

    }
  }
  while_25_break:  ;

  line = ls->linenumber;
  tmp___9 = __dyc_funcallvar_6;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(nvars);
  __dyc_printpre_byte(line);
  __dyc_printpre_byte(base);
  __dyc_printpre_byte(tmp);
  __dyc_print_ptr__typdef_TString(tmp___0);
  __dyc_printpre_byte(tmp___1);
  __dyc_print_ptr__typdef_TString(tmp___2);
  __dyc_printpre_byte(tmp___3);
  __dyc_print_ptr__typdef_TString(tmp___4);
  __dyc_printpre_byte(tmp___5);
  __dyc_printpre_byte(tmp___6);
  __dyc_print_ptr__typdef_TString(tmp___7);
  __dyc_printpre_byte(tmp___9);
}
}
