#include "../../include/dycfoo.h"
#include "../../include/inffast.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char *out ;
  unsigned int write ;
  unsigned char *window ;
  unsigned int op ;
  unsigned int len ;
  unsigned int dist ;
  unsigned char *from ;

  {
  out = (unsigned char *)__dyc_read_ptr__char();
  write = (unsigned int )__dyc_readpre_byte();
  window = (unsigned char *)__dyc_read_ptr__char();
  len = (unsigned int )__dyc_readpre_byte();
  dist = (unsigned int )__dyc_readpre_byte();
  op = 0;
  from = 0;
  from = window - 1;
  if (write < len) {
    op = write;
    len -= op;
    {
    while (1) {
      while_3_continue:  ;
      out ++;
      from ++;
      *out = *from;
      op --;
      if (! op) {
        goto while_3_break;
      }
    }
    while_3_break:  ;
    }
    from = out - dist;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len);
  __dyc_print_ptr__char(from);
}
}
