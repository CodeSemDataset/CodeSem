#include "../../include/dycfoo.h"
#include "../../include/op_model_p4.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int num_counters ;
  unsigned int num_controls ;
  struct p4_counter_binding p4_counters[8] ;
  unsigned int i ;
  unsigned int addr ;
  unsigned int cccraddr ;
  unsigned int stag ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  struct op_msrs *msrs ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;

  {
  num_counters = (unsigned int )__dyc_readpre_byte();
  num_controls = (unsigned int )__dyc_readpre_byte();
  i = (unsigned int )__dyc_readpre_byte();
  stag = (unsigned int )__dyc_readpre_byte();
  msrs = __dyc_read_ptr__comp_137op_msrs();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  addr = 0;
  cccraddr = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  while (1) {
    while_2_continue:  ;
    if (! (i < num_controls)) {
      goto while_2_break;
    }
    (msrs->controls + i)->addr = 0UL;
    i ++;
  }
  while_2_break:  ;
  i = 0U;
  while (1) {
    while_3_continue:  ;
    if (! (i < num_counters)) {
      goto while_3_break;
    }
    {
    addr = (unsigned int )p4_counters[i + num_counters * stag].counter_address;
    cccraddr = (unsigned int )p4_counters[i + num_counters * stag].cccr_address;
    tmp = __dyc_funcallvar_2;
    }
    if (tmp) {
      (msrs->counters + i)->addr = (unsigned long )addr;
      (msrs->controls + i)->addr = (unsigned long )cccraddr;
    }
    i ++;
  }
  while_3_break:  ;
  addr = 928U + stag;
  while (1) {
    while_4_continue:  ;
    if (! (addr < 954U)) {
      goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
  __dyc_printpre_byte(cccraddr);
}
}
