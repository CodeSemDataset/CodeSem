#include "../../include/dycfoo.h"
#include "../../include/op_model_p4.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int num_controls ;
  unsigned int i ;
  int tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;
  struct op_msrs  const  *msrs ;
  long __dyc_funcallvar_3 ;

  {
  num_controls = (unsigned int )__dyc_readpre_byte();
  i = (unsigned int )__dyc_readpre_byte();
  msrs = (struct op_msrs  const  *)__dyc_read_ptr__comp_137op_msrs();
  __dyc_funcallvar_3 = (long )__dyc_readpre_byte();
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  __Cont:  
  i ++;
  while_16_continue:  ;
  if (! (i < num_controls)) {
    goto __dyc_dummy_label;
  }
  if ((msrs->controls + i)->addr) {
    tmp___2 = 1;
  } else {
    tmp___2 = 0;
  }
  if (tmp___2) {
    tmp___3 = 0;
  } else {
    tmp___3 = 1;
  }
  tmp___4 = __dyc_funcallvar_3;
  if (tmp___4) {
    goto __Cont___0;
  }

  __Cont___0:  
  i ++;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
  __dyc_printpre_byte(tmp___3);
}
}
