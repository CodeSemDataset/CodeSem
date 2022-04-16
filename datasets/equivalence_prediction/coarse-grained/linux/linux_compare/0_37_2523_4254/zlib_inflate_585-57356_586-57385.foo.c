#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char const   *next ;
  unsigned int have ;
  unsigned long hold ;
  unsigned int bits ;
  code this ;
  code last ;
  unsigned char const   *tmp___16 ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  this = __dyc_read_comp_16__anonstruct_code_5();
  memset(& last, 0, sizeof(code ));
  tmp___16 = 0;
  last = this;
  while (1) {
    while_67_continue:  ;
    this = (struct __anonstruct_code_5 )*(state->lencode + ((unsigned int )last.val + (((unsigned int )hold & ((1U << ((int )last.bits + (int )last.op)) - 1U)) >> (int )last.bits)));
    if ((unsigned int )((int )last.bits + (int )this.bits) <= bits) {
      goto __dyc_dummy_label;
    }
    {
    while (1) {
      while_68_continue:  ;
      if (have == 0U) {
        goto __dyc_dummy_label;
      }
      have --;
      tmp___16 = next;
      next ++;
      hold += (unsigned long )*tmp___16 << bits;
      bits += 8U;
      goto while_68_break;
    }
    while_68_break:  ;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_printpre_byte(have);
}
}
