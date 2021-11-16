#include "../../include/dycfoo.h"
#include "../../include/inffast.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char *out ;
  unsigned int op ;
  unsigned int dist ;
  unsigned char *from ;

  {
  out = (unsigned char *)__dyc_read_ptr__char();
  op = (unsigned int )__dyc_readpre_byte();
  dist = (unsigned int )__dyc_readpre_byte();
  from = (unsigned char *)__dyc_read_ptr__char();

  from = out - dist;
  while_4_continue:  ;
  out ++;
  from ++;
  *out = *from;
  op --;
  if (op) {

  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(from);
}
}
