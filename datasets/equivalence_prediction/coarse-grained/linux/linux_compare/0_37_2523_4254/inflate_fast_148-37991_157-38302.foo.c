#include "../../include/dycfoo.h"
#include "../../include/inffast.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char const   *in ;
  unsigned long hold ;
  unsigned int bits ;
  code const   *dcode ;
  unsigned int dmask ;
  code this ;
  unsigned int op ;

  {
  in = (unsigned char const   *)__dyc_read_ptr__char();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  dcode = (code const   *)__dyc_read_ptr__typdef_code();
  dmask = (unsigned int )__dyc_readpre_byte();
  memset(& this, 0, sizeof(code ));
  op = 0;
  if (bits < 15U) {
    in ++;
    hold += (unsigned long )*in << bits;
    bits += 8U;
    in ++;
    hold += (unsigned long )*in << bits;
    bits += 8U;
  }
  this = (struct __anonstruct_code_5 )*(dcode + (hold & (unsigned long )dmask));
  dodist: 
  op = (unsigned int )this.bits;
  hold >>= op;
  bits -= op;
  op = (unsigned int )this.op;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
  __dyc_printpre_byte(op);
}
}
