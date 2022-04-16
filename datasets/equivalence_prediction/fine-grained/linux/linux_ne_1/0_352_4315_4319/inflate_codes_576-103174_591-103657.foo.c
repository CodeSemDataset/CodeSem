#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int outcnt ;
  unsigned int e ;
  unsigned int w ;

  {
  e = (unsigned int )__dyc_readpre_byte();
  w = (unsigned int )__dyc_readpre_byte();
  outcnt = 0;
  if (! (e > 16U)) {
    goto __dyc_dummy_label;
  }
  outcnt = w;

  w = 0U;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(outcnt);
  __dyc_printpre_byte(w);
}
}
