#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  int bd ;
  unsigned int *l ;
  int tmp___0 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;

  {
  i = __dyc_readpre_byte();
  l = __dyc_read_ptr__int();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  bd = 0;
  tmp___0 = 0;
  if (i != 0) {
    {

    }
    goto __dyc_dummy_label;
  }
  i = 0;
  while (1) {
    while_33_continue:  ;
    if (! (i < 30)) {
      goto while_33_break;
    }
    *(l + i) = 5U;
    i ++;
  }
  while_33_break:  ;
  bd = 5;
  i = __dyc_funcallvar_3;
  if (i > 1) {
    {


    }
    goto __dyc_dummy_label;
  }
  tmp___0 = __dyc_funcallvar_4;
  if (tmp___0) {
    {

    }
    goto __dyc_dummy_label;
  }



  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(bd);
}
}
