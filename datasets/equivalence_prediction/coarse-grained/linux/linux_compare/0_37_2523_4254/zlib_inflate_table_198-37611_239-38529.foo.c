#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int len ;
  unsigned int sym ;
  unsigned int min ;
  unsigned int curr ;
  unsigned int drop ;
  unsigned int used ;
  unsigned int huff ;
  unsigned int incr ;
  unsigned int fill ;
  code this ;
  code *next ;
  unsigned short const   *base ;
  unsigned short const   *extra ;
  int end ;
  unsigned short count[16] ;
  unsigned short *work ;

  {
  len = (unsigned int )__dyc_readpre_byte();
  sym = (unsigned int )__dyc_readpre_byte();
  curr = (unsigned int )__dyc_readpre_byte();
  drop = (unsigned int )__dyc_readpre_byte();
  used = (unsigned int )__dyc_readpre_byte();
  huff = (unsigned int )__dyc_readpre_byte();
  next = __dyc_read_ptr__typdef_code();
  base = (unsigned short const   *)__dyc_read_ptr__short();
  extra = (unsigned short const   *)__dyc_read_ptr__short();
  end = __dyc_readpre_byte();
  work = __dyc_read_ptr__short();
  min = 0;
  incr = 0;
  fill = 0;
  memset(& this, 0, sizeof(code ));
  if (used >= 1456U) {
    goto __dyc_dummy_label;
  }
  while_8_continue:  ;
  this.bits = (unsigned char )(len - drop);
  if ((int )*(work + sym) < end) {
    this.op = (unsigned char)0;
    this.val = *(work + sym);
  } else {
    if ((int )*(work + sym) > end) {
      this.op = (unsigned char )*(extra + *(work + sym));
      this.val = (unsigned short )*(base + *(work + sym));
    } else {
      this.op = (unsigned char)96;
      this.val = (unsigned short)0;
    }
  }
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
      goto while_10_break;
    }
    incr >>= 1;
  }
  while_10_break:  ;
  if (incr != 0U) {
    huff &= incr - 1U;
    huff += incr;
  } else {
    huff = 0U;
  }
  sym ++;
  count[len] = (unsigned short )((int )count[len] - 1);
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(sym);
  __dyc_printpre_byte(min);
  __dyc_printpre_byte(huff);
}
}
