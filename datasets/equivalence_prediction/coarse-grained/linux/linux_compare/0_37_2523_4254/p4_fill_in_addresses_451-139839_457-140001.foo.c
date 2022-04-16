#include "../../include/dycfoo.h"
#include "../../include/op_model_p4.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int i ;
  unsigned int addr ;
  int tmp___8 ;
  int tmp___10 ;
  int tmp___11 ;
  struct op_msrs *msrs ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;

  {
  i = (unsigned int )__dyc_readpre_byte();
  addr = (unsigned int )__dyc_readpre_byte();
  tmp___8 = __dyc_readpre_byte();
  msrs = __dyc_read_ptr__comp_137op_msrs();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  tmp___10 = 0;
  tmp___11 = 0;
  addr += (unsigned int )tmp___8;
  while_9_continue:  ;
  if (! (addr <= 973U)) {
    goto __dyc_dummy_label;
  }
  tmp___11 = __dyc_funcallvar_13;
  if (tmp___11) {
    (msrs->controls + i)->addr = (unsigned long )addr;
  }
  i ++;
  tmp___10 = __dyc_funcallvar_14;
  addr += (unsigned int )tmp___10;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
  __dyc_printpre_byte(addr);
}
}
