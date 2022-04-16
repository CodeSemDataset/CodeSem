#include "../../include/dycfoo.h"
#include "../../include/op_model_p4.i.hd.c.h"
void __dyc_foo(void) 
{ struct cpuinfo_x86 boot_cpu_data ;
  unsigned int i ;
  unsigned int addr ;
  unsigned int stag ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  struct op_msrs *msrs ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;

  {
  boot_cpu_data = __dyc_read_comp_34cpuinfo_x86();
  i = (unsigned int )__dyc_readpre_byte();
  addr = (unsigned int )__dyc_readpre_byte();
  stag = (unsigned int )__dyc_readpre_byte();
  msrs = __dyc_read_ptr__comp_137op_msrs();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
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
  tmp___10 = 0;
  tmp___11 = 0;
  while (1) {
    while_4_continue:  ;
    if (! (addr < 954U)) {
      goto while_4_break;
    }
    {
    tmp___1 = __dyc_funcallvar_3;
    }
    if (tmp___1) {
      (msrs->controls + i)->addr = (unsigned long )addr;
    }
    {
    i ++;
    tmp___0 = __dyc_funcallvar_4;
    addr += (unsigned int )tmp___0;
    }
  }
  while_4_break:  ;
  if ((int )boot_cpu_data.x86_model >= 3) {
    addr = 928U + stag;
    {
    while (1) {
      while_5_continue:  ;
      if (! (addr <= 929U)) {
        goto while_5_break;
      }
      {
      tmp___3 = __dyc_funcallvar_5;
      }
      if (tmp___3) {
        (msrs->controls + i)->addr = (unsigned long )addr;
      }
      {
      i ++;
      tmp___2 = __dyc_funcallvar_6;
      addr += (unsigned int )tmp___2;
      }
    }
    while_5_break:  ;
    }
  } else {
    addr = 954U + stag;
    {
    while (1) {
      while_6_continue:  ;
      if (! (addr <= 955U)) {
        goto while_6_break;
      }
      {
      tmp___5 = __dyc_funcallvar_7;
      }
      if (tmp___5) {
        (msrs->controls + i)->addr = (unsigned long )addr;
      }
      {
      i ++;
      tmp___4 = __dyc_funcallvar_8;
      addr += (unsigned int )tmp___4;
      }
    }
    while_6_break:  ;
    }
  }
  addr = 956U + stag;
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
