#include "../../include/dycfoo.h"
#include "../../include/inffast.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char *out ;
  unsigned int wsize ;
  unsigned int op ;
  unsigned int len ;
  unsigned int dist ;
  unsigned char *from ;

  {
  out = (unsigned char *)__dyc_read_ptr__char();
  wsize = (unsigned int )__dyc_readpre_byte();
  op = (unsigned int )__dyc_readpre_byte();
  len = (unsigned int )__dyc_readpre_byte();
  dist = (unsigned int )__dyc_readpre_byte();
  from = (unsigned char *)__dyc_read_ptr__char();

  from += wsize - op;
  if (op < len) {
    len -= op;
    {
    while (1) {
      while_1_continue:  ;
      out ++;
      from ++;
      *out = *from;
      op --;
      if (! op) {
        goto while_1_break;
      }
    }
    while_1_break:  ;
    }
    from = out - dist;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len);
  __dyc_print_ptr__char(from);
}
}
