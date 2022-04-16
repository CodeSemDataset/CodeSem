#include "../../include/dycfoo.h"
#include "../../include/op_model_p4.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int i ;
  unsigned int addr ;
  unsigned int stag ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  struct op_msrs *msrs ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;

  {
  i = (unsigned int )__dyc_readpre_byte();
  addr = (unsigned int )__dyc_readpre_byte();
  stag = (unsigned int )__dyc_readpre_byte();
  msrs = __dyc_read_ptr__comp_137op_msrs();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  while (1) {
    while_7_continue:  ;
    if (! (addr <= 958U)) {
      goto while_7_break;
    }
    {
    tmp___7 = __dyc_funcallvar_9;
    }
    if (tmp___7) {
      (msrs->controls + i)->addr = (unsigned long )addr;
    }
    {
    i ++;
    tmp___6 = __dyc_funcallvar_10;
    addr += (unsigned int )tmp___6;
    }
  }
  while_7_break:  ;
  addr = 960U + stag;
  while (1) {
    while_8_continue:  ;
    if (! (addr <= 965U)) {
      goto while_8_break;
    }
    {
    tmp___9 = __dyc_funcallvar_11;
    }
    if (tmp___9) {
      (msrs->controls + i)->addr = (unsigned long )addr;
    }
    {
    i ++;
    tmp___8 = __dyc_funcallvar_12;
    addr += (unsigned int )tmp___8;
    }
  }
  while_8_break:  ;
  addr = 968U + stag;
  while (1) {
    while_9_continue:  ;
    if (! (addr <= 973U)) {
      goto __dyc_dummy_label;
    }
    {
    tmp___11 = __dyc_funcallvar_13;
    }
    if (tmp___11) {
      (msrs->controls + i)->addr = (unsigned long )addr;
    }
    {
    i ++;
    tmp___10 = __dyc_funcallvar_14;
    addr += (unsigned int )tmp___10;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
}
}
