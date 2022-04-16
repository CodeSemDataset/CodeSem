#include "../../include/dycfoo.h"
#include "../../include/op_model_p4.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int num_counters ;
  unsigned int num_controls ;
  unsigned int i ;
  unsigned int stag ;
  struct op_msrs *msrs ;
  unsigned int __dyc_funcallvar_1 ;

  {
  num_counters = (unsigned int )__dyc_readpre_byte();
  num_controls = (unsigned int )__dyc_readpre_byte();
  msrs = __dyc_read_ptr__comp_137op_msrs();
  __dyc_funcallvar_1 = (unsigned int )__dyc_readpre_byte();
  i = 0;
  stag = 0;
  stag = __dyc_funcallvar_1;
  i = 0U;
  while (1) {
    while_1_continue:  ;
    if (! (i < num_counters)) {
      goto while_1_break;
    }
    (msrs->counters + i)->addr = 0UL;
    i ++;
  }
  while_1_break:  ;
  i = 0U;
  while (1) {
    while_2_continue:  ;
    if (! (i < num_controls)) {
      goto __dyc_dummy_label;
    }
    (msrs->controls + i)->addr = 0UL;
    i ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(stag);
}
}
