#include "../../include/dycfoo.h"
#include "../../include/op_model_p4.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int i ;
  unsigned int addr ;
  int tmp___6 ;
  int tmp___8 ;
  int tmp___9 ;
  struct op_msrs *msrs ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;

  {
  i = (unsigned int )__dyc_readpre_byte();
  addr = (unsigned int )__dyc_readpre_byte();
  tmp___6 = __dyc_readpre_byte();
  msrs = __dyc_read_ptr__comp_137op_msrs();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  tmp___8 = 0;
  tmp___9 = 0;
  addr += (unsigned int )tmp___6;
  while_8_continue:  ;
  if (! (addr <= 965U)) {
    goto __dyc_dummy_label;
  }
  tmp___9 = __dyc_funcallvar_11;
  if (tmp___9) {
    (msrs->controls + i)->addr = (unsigned long )addr;
  }
  i ++;
  tmp___8 = __dyc_funcallvar_12;
  addr += (unsigned int )tmp___8;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
  __dyc_printpre_byte(addr);
}
}
