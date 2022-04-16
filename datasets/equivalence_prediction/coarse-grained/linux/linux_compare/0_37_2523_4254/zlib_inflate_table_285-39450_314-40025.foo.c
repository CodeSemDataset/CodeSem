#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int len ;
  unsigned int root ;
  unsigned int drop ;
  unsigned int used ;
  unsigned int huff ;
  unsigned int incr ;
  unsigned int low ;
  unsigned int mask ;
  code this ;
  code *next ;
  code **table ;
  unsigned int *bits ;

  {
  len = (unsigned int )__dyc_readpre_byte();
  root = (unsigned int )__dyc_readpre_byte();
  drop = (unsigned int )__dyc_readpre_byte();
  used = (unsigned int )__dyc_readpre_byte();
  huff = (unsigned int )__dyc_readpre_byte();
  low = (unsigned int )__dyc_readpre_byte();
  mask = (unsigned int )__dyc_readpre_byte();
  next = __dyc_read_ptr__typdef_code();
  table = __dyc_read_ptr__ptr__typdef_code();
  bits = __dyc_read_ptr__int();
  incr = 0;
  memset(& this, 0, sizeof(code ));
  this.op = (unsigned char)64;
  this.bits = (unsigned char )(len - drop);
  this.val = (unsigned short)0;
  while (1) {
    while_12_continue:  ;
    if (! (huff != 0U)) {
      goto while_12_break;
    }
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
    {
    while (1) {
      while_13_continue:  ;
      if (! (huff & incr)) {
        goto while_13_break;
      }
      incr >>= 1;
    }
    while_13_break:  ;
    }
    if (incr != 0U) {
      huff &= incr - 1U;
      huff += incr;
    } else {
      huff = 0U;
    }
  }
  while_12_break:  ;
  *table += used;
  *bits = root;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_comp_16__anonstruct_code_5(this);
}
}
