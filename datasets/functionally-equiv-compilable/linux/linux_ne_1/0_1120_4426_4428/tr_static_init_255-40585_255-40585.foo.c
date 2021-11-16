#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int const   extra_dbits[30] ;
  uch dist_code[512] ;
  int base_dist[30] ;
  int n ;
  int code ;
  int dist ;
  int tmp___0 ;

  {
  code = __dyc_readpre_byte();
  dist = __dyc_readpre_byte();
  n = 0;
  tmp___0 = 0;
  if (! (code < 16)) {
    goto __dyc_dummy_label;
  }
  base_dist[code] = dist;
  n = 0;
  while (1) {
    while_4_continue:  ;
    if (! (n < 1 << extra_dbits[code])) {
      goto while_4_break;
    }
    tmp___0 = dist;
    dist ++;
    dist_code[tmp___0] = (unsigned char )code;
    n ++;
  }
  while_4_break:  ;
  code ++;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(code);
  __dyc_printpre_byte(dist);
}
}
