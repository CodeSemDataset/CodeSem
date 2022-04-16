#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *window ;
  unsigned int outcnt ;
  unsigned int e ;
  unsigned int d ;
  unsigned int w ;
  unsigned int tmp___26 ;
  unsigned int tmp___27 ;

  {
  window = __dyc_read_ptr__typdef_uch();
  e = (unsigned int )__dyc_readpre_byte();
  d = (unsigned int )__dyc_readpre_byte();
  w = (unsigned int )__dyc_readpre_byte();
  outcnt = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  if (w - d >= e) {
    {

    w += e;
    d += e;
    }
  } else {
    {
    while (1) {
      while_24_continue:  ;
      tmp___26 = w;
      w ++;
      tmp___27 = d;
      d ++;
      *(window + tmp___26) = *(window + tmp___27);
      e --;
      if (! e) {
        goto while_24_break;
      }
    }
    while_24_break:  ;
    }
  }
  if (w == 2147483648U) {
    {
    outcnt = w;

    w = 0U;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(outcnt);
  __dyc_printpre_byte(d);
  __dyc_printpre_byte(w);
}
}
