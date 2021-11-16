#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int len ;
  unsigned int min ;
  unsigned int curr ;
  unsigned int drop ;
  unsigned int huff ;
  unsigned int incr ;
  unsigned int fill ;
  code this ;
  code *next ;

  {
  len = (unsigned int )__dyc_readpre_byte();
  curr = (unsigned int )__dyc_readpre_byte();
  drop = (unsigned int )__dyc_readpre_byte();
  huff = (unsigned int )__dyc_readpre_byte();
  this = __dyc_read_comp_16__anonstruct_code_5();
  next = __dyc_read_ptr__typdef_code();
  min = 0;
  incr = 0;
  fill = 0;
  incr = 1U << (len - drop);
  fill = 1U << curr;
  min = fill;
  while (1) {
    while_9_continue:  ;
    fill -= incr;
    *(next + ((huff >> drop) + fill)) = this;
    if (! (fill != 0U)) {
      goto while_9_break;
    }
  }
  while_9_break:  ;
  incr = 1U << (len - 1U);
  while (1) {
    while_10_continue:  ;
    if (! (huff & incr)) {
      goto __dyc_dummy_label;
    }
    incr >>= 1;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(min);
}
}
