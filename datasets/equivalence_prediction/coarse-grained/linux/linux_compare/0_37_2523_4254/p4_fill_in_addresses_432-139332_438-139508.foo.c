#include "../../include/dycfoo.h"
#include "../../include/op_model_p4.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int i ;
  unsigned int addr ;
  int tmp___2 ;
  int tmp___4 ;
  int tmp___5 ;
  struct op_msrs *msrs ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;

  {
  i = (unsigned int )__dyc_readpre_byte();
  addr = (unsigned int )__dyc_readpre_byte();
  tmp___2 = __dyc_readpre_byte();
  msrs = __dyc_read_ptr__comp_137op_msrs();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  tmp___4 = 0;
  tmp___5 = 0;
  addr += (unsigned int )tmp___2;
  while_6_continue:  ;
  if (! (addr <= 955U)) {
    goto __dyc_dummy_label;
  }
  tmp___5 = __dyc_funcallvar_7;
  if (tmp___5) {
    (msrs->controls + i)->addr = (unsigned long )addr;
  }
  i ++;
  tmp___4 = __dyc_funcallvar_8;
  addr += (unsigned int )tmp___4;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
  __dyc_printpre_byte(addr);
}
}
