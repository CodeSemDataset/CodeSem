#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *window ;
  unsigned int outcnt ;
  unsigned int e ;
  unsigned int n ;
  unsigned int d ;
  unsigned int w ;
  unsigned int tmp___25 ;
  unsigned int tmp___26 ;
  unsigned int tmp___27 ;

  {
  window = __dyc_read_ptr__typdef_uch();
  n = (unsigned int )__dyc_readpre_byte();
  d = (unsigned int )__dyc_readpre_byte();
  w = (unsigned int )__dyc_readpre_byte();
  outcnt = 0;
  e = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  while (1) {
    while_23_continue:  ;
    d &= 2147483647U;
    if (d > w) {
      tmp___25 = d;
    } else {
      tmp___25 = w;
    }
    e = 2147483648U - tmp___25;
    if (e > n) {
      e = n;
    } else {
      e = e;
    }
    n -= e;
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
    if (! n) {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(outcnt);
  __dyc_printpre_byte(d);
  __dyc_printpre_byte(w);
}
}
