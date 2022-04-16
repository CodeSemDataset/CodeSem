#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int len ;
  unsigned int sym ;
  unsigned int drop ;
  unsigned int used ;
  code this ;
  unsigned short const   *base ;
  unsigned short const   *extra ;
  int end ;
  unsigned short *work ;

  {
  len = (unsigned int )__dyc_readpre_byte();
  sym = (unsigned int )__dyc_readpre_byte();
  drop = (unsigned int )__dyc_readpre_byte();
  used = (unsigned int )__dyc_readpre_byte();
  base = (unsigned short const   *)__dyc_read_ptr__short();
  extra = (unsigned short const   *)__dyc_read_ptr__short();
  end = __dyc_readpre_byte();
  work = __dyc_read_ptr__short();
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
  __dyc_dummy_label:  ;
  __dyc_print_comp_16__anonstruct_code_5(this);
}
}
