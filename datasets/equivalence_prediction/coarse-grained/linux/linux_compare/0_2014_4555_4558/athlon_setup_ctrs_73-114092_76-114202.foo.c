#include "../../include/dycfoo.h"
#include "../../include/op_model_athlon.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  int tmp ;
  int tmp___0 ;
  long tmp___1 ;
  struct op_msrs  const  *msrs ;
  long __dyc_funcallvar_1 ;

  {
  i = __dyc_readpre_byte();
  msrs = (struct op_msrs  const  *)__dyc_read_ptr__comp_70op_msrs();
  __dyc_funcallvar_1 = (long )__dyc_readpre_byte();
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  if (! (i < 4)) {
    goto __dyc_dummy_label;
  }
  if ((msrs->controls + i)->addr) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  if (tmp) {
    tmp___0 = 0;
  } else {
    tmp___0 = 1;
  }
  tmp___1 = __dyc_funcallvar_1;
  if (tmp___1) {
    goto __dyc_dummy_label;
  }
  while (1) {
    while_3_continue:  ;

    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___0);
}
}
