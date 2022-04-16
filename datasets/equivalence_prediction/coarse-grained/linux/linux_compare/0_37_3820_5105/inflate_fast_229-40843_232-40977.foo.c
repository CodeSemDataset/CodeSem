#include "../../include/dycfoo.h"
#include "../../include/inffast.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char *out ;
  unsigned int len ;
  unsigned char *from ;

  {
  out = (unsigned char *)__dyc_read_ptr__char();
  len = (unsigned int )__dyc_readpre_byte();
  from = (unsigned char *)__dyc_read_ptr__char();

  if (! (len > 2U)) {
    goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len);
}
}
