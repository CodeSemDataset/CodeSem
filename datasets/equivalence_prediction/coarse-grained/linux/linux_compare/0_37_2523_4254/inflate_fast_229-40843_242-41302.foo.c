#include "../../include/dycfoo.h"
#include "../../include/inffast.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char *out ;
  unsigned int len ;
  unsigned int dist ;
  unsigned char *from ;

  {
  out = (unsigned char *)__dyc_read_ptr__char();
  len = (unsigned int )__dyc_readpre_byte();
  dist = (unsigned int )__dyc_readpre_byte();
  from = (unsigned char *)__dyc_read_ptr__char();

  while (1) {
    while_5_continue:  ;
    if (! (len > 2U)) {
      goto while_5_break;
    }
    out ++;
    from ++;
    *out = *from;
    out ++;
    from ++;
    *out = *from;
    out ++;
    from ++;
    *out = *from;
    len -= 3U;
  }
  while_5_break:  ;
  if (len) {
    out ++;
    from ++;
    *out = *from;
    if (len > 1U) {
      out ++;
      from ++;
      *out = *from;
    }
  }
  from = out - dist;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(from);
}
}
