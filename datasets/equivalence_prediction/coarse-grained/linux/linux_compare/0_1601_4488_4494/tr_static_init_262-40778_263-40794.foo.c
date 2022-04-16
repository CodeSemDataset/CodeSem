#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int const   extra_dbits[30] ;
  uch dist_code[512] ;
  int base_dist[30] ;
  int n ;
  int code ;
  int dist ;
  int tmp___1 ;

  {
  code = __dyc_readpre_byte();
  dist = __dyc_readpre_byte();
  n = 0;
  tmp___1 = 0;
  dist >>= 7;
  while (1) {
    while_5_continue:  ;
    if (! (code < 30)) {
      goto __dyc_dummy_label;
    }
    base_dist[code] = dist << 7;
    n = 0;
    {
    while (1) {
      while_6_continue:  ;
      if (! (n < 1 << (extra_dbits[code] - 7))) {
        goto while_6_break;
      }
      tmp___1 = dist;
      dist ++;
      dist_code[256 + tmp___1] = (unsigned char )code;
      n ++;
    }
    while_6_break:  ;
    }
    code ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(dist);
}
}
