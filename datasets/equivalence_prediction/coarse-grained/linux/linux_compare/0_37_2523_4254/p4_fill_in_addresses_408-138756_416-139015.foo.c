#include "../../include/dycfoo.h"
#include "../../include/op_model_p4.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int num_counters ;
  struct p4_counter_binding p4_counters[8] ;
  unsigned int i ;
  unsigned int addr ;
  unsigned int cccraddr ;
  unsigned int stag ;
  int tmp ;
  struct op_msrs *msrs ;
  int __dyc_funcallvar_2 ;

  {
  num_counters = (unsigned int )__dyc_readpre_byte();
  i = (unsigned int )__dyc_readpre_byte();
  stag = (unsigned int )__dyc_readpre_byte();
  msrs = __dyc_read_ptr__comp_137op_msrs();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  addr = 0;
  cccraddr = 0;
  tmp = 0;
  (msrs->controls + i)->addr = 0UL;
  i ++;
  while_3_continue:  ;
  if (! (i < num_counters)) {
    goto __dyc_dummy_label;
  }
  addr = (unsigned int )p4_counters[i + num_counters * stag].counter_address;
  cccraddr = (unsigned int )p4_counters[i + num_counters * stag].cccr_address;
  tmp = __dyc_funcallvar_2;
  if (tmp) {
    (msrs->counters + i)->addr = (unsigned long )addr;
    (msrs->controls + i)->addr = (unsigned long )cccraddr;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
}
}
