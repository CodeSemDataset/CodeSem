#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int len ;
  unsigned int root ;
  unsigned int drop ;
  unsigned int huff ;
  unsigned int incr ;
  unsigned int low ;
  unsigned int mask ;
  code this ;
  code *next ;
  code **table ;

  {
  len = (unsigned int )__dyc_readpre_byte();
  root = (unsigned int )__dyc_readpre_byte();
  drop = (unsigned int )__dyc_readpre_byte();
  huff = (unsigned int )__dyc_readpre_byte();
  low = (unsigned int )__dyc_readpre_byte();
  mask = (unsigned int )__dyc_readpre_byte();
  this = __dyc_read_comp_16__anonstruct_code_5();
  next = __dyc_read_ptr__typdef_code();
  table = __dyc_read_ptr__ptr__typdef_code();
  incr = 0;
  if (drop != 0U) {
    if ((huff & mask) != low) {
      drop = 0U;
      len = root;
      next = *table;
      this.bits = (unsigned char )len;
    }
  }
  *(next + (huff >> drop)) = this;
  incr = 1U << (len - 1U);
  while (1) {
    while_13_continue:  ;
    if (! (huff & incr)) {
      goto while_13_break;
    }
    incr >>= 1;
  }
  while_13_break:  ;
  if (incr != 0U) {
    huff &= incr - 1U;
    huff += incr;
  } else {
    huff = 0U;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(huff);
}
}
