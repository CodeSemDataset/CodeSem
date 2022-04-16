#include "../../include/dycfoo.h"
#include "../../include/op_model_p4.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int i ;
  unsigned int addr ;
  int tmp___0 ;
  int tmp___1 ;
  struct op_msrs *msrs ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;

  {
  i = (unsigned int )__dyc_readpre_byte();
  addr = (unsigned int )__dyc_readpre_byte();
  msrs = __dyc_read_ptr__comp_137op_msrs();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  tmp___0 = 0;
  tmp___1 = 0;
  i ++;
  while_4_continue:  ;
  if (! (addr < 954U)) {
    goto __dyc_dummy_label;
  }
  tmp___1 = __dyc_funcallvar_3;
  if (tmp___1) {
    (msrs->controls + i)->addr = (unsigned long )addr;
  }
  i ++;
  tmp___0 = __dyc_funcallvar_4;
  addr += (unsigned int )tmp___0;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
}
}
