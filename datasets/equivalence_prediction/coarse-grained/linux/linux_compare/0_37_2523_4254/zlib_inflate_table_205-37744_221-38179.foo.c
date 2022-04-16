#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int len ;
  unsigned int sym ;
  unsigned int min ;
  unsigned int curr ;
  unsigned int drop ;
  unsigned int incr ;
  unsigned int fill ;
  code this ;
  unsigned short const   *base ;
  unsigned short const   *extra ;
  int end ;
  unsigned short *work ;

  {
  len = (unsigned int )__dyc_readpre_byte();
  sym = (unsigned int )__dyc_readpre_byte();
  curr = (unsigned int )__dyc_readpre_byte();
  drop = (unsigned int )__dyc_readpre_byte();
  base = (unsigned short const   *)__dyc_read_ptr__short();
  extra = (unsigned short const   *)__dyc_read_ptr__short();
  end = __dyc_readpre_byte();
  work = __dyc_read_ptr__short();
  min = 0;
  incr = 0;
  fill = 0;
  memset(& this, 0, sizeof(code ));
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(min);
  __dyc_printpre_byte(incr);
  __dyc_print_comp_16__anonstruct_code_5(this);
}
}
