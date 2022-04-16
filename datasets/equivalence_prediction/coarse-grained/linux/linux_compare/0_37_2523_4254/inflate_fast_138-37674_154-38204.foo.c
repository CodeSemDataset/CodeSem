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
  unsigned int len ;

  {
  in = (unsigned char const   *)__dyc_read_ptr__char();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  dcode = (code const   *)__dyc_read_ptr__typdef_code();
  dmask = (unsigned int )__dyc_readpre_byte();
  this = __dyc_read_comp_16__anonstruct_code_5();
  op = (unsigned int )__dyc_readpre_byte();
  len = 0;
  len = (unsigned int )this.val;
  op &= 15U;
  if (op) {
    if (bits < op) {
      in ++;
      hold += (unsigned long )*in << bits;
      bits += 8U;
    }
    len += (unsigned int )hold & ((1U << op) - 1U);
    hold >>= op;
    bits -= op;
  }
  if (bits < 15U) {
    in ++;
    hold += (unsigned long )*in << bits;
    bits += 8U;
    in ++;
    hold += (unsigned long )*in << bits;
    bits += 8U;
  }
  this = (struct __anonstruct_code_5 )*(dcode + (hold & (unsigned long )dmask));
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(bits);
  __dyc_print_comp_16__anonstruct_code_5(this);
  __dyc_printpre_byte(len);
}
}
