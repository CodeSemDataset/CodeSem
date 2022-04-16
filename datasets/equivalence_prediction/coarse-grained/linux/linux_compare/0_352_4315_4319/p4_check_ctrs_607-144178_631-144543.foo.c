#include "../../include/dycfoo.h"
#include "../../include/op_model_p4.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int num_counters ;
  unsigned long reset_value[8] ;
  unsigned long ctr ;
  unsigned long low ;
  unsigned long stag ;
  unsigned long real ;
  int i ;

  {
  num_counters = (unsigned int )__dyc_readpre_byte();
  ctr = (unsigned long )__dyc_readpre_byte();
  low = (unsigned long )__dyc_readpre_byte();
  stag = (unsigned long )__dyc_readpre_byte();
  i = __dyc_readpre_byte();
  real = 0;
  if (! reset_value[i]) {
    goto __dyc_dummy_label;
  }
  real = (unsigned long )i + (unsigned long )num_counters * stag;
  while (1) {
    while_20_continue:  ;

    goto while_20_break;
  }
  while_20_break:  ;
  while (1) {
    while_21_continue:  ;

    goto while_21_break;
  }
  while_21_break:  ;
  if (low & (unsigned long )(1U << 31)) {
    goto _L;
  } else {
    if (! (ctr & 2147483648UL)) {
      _L:  
      {

      }
      {
      while (1) {
        while_22_continue:  ;

        goto while_22_break;
      }
      while_22_break:  ;
      }
      low &= (unsigned long )(~ (1U << 31));
      {
      while (1) {
        while_23_continue:  ;

        goto while_23_break;
      }
      while_23_break:  ;
      }
      {
      while (1) {
        while_24_continue:  ;

        goto while_24_break;
      }
      while_24_break:  ;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(low);
  __dyc_printpre_byte(real);
}
}
