#include "../../include/dycfoo.h"
#include "../../include/lparser.i.hd.c.h"
void __dyc_foo(void) 
{ FuncState *fs ;
  int prep ;
  int endfor ;
  int __attribute__((__visibility__("hidden")))  tmp___1 ;
  int __attribute__((__visibility__("hidden")))  tmp___2 ;
  int __attribute__((__visibility__("hidden")))  tmp___5 ;
  int __attribute__((__visibility__("hidden")))  tmp___6 ;
  int tmp___8 ;
  int __attribute__((__visibility__("hidden")))  tmp___9 ;
  LexState *ls ;
  int isnum ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_1 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_2 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_3 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_4 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_5 ;

  {
  ls = __dyc_read_ptr__typdef_LexState();
  isnum = __dyc_readpre_byte();
  __dyc_funcallvar_1 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  fs = 0;
  prep = 0;
  endfor = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  fs = ls->fs;


  if (isnum) {
    {
    tmp___1 = __dyc_funcallvar_1;
    prep = (int )tmp___1;
    }
  } else {
    {
    tmp___2 = __dyc_funcallvar_2;
    prep = (int )tmp___2;
    }
  }






  if (isnum) {
    {
    tmp___5 = __dyc_funcallvar_3;
    endfor = (int )tmp___5;
    }
  } else {
    {
    tmp___6 = __dyc_funcallvar_4;
    endfor = (int )tmp___6;
    }
  }

  if (isnum) {
    tmp___8 = endfor;
  } else {
    {
    tmp___9 = __dyc_funcallvar_5;
    tmp___8 = (int )tmp___9;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_FuncState(fs);
  __dyc_printpre_byte(prep);
  __dyc_printpre_byte(endfor);
  __dyc_printpre_byte(tmp___8);
}
}
