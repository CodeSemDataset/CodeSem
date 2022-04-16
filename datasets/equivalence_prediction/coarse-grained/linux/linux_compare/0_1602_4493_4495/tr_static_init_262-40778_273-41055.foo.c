#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int const   extra_dbits[30] ;
  uch dist_code[512] ;
  int base_dist[30] ;
  int n ;
  int bits ;
  int code ;
  int dist ;
  ush bl_count[16] ;
  int tmp___1 ;

  {
  code = __dyc_readpre_byte();
  dist = __dyc_readpre_byte();
  n = 0;
  bits = 0;
  tmp___1 = 0;
  dist >>= 7;
  while (1) {
    while_5_continue:  ;
    if (! (code < 30)) {
      goto while_5_break;
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
  while_5_break:  ;
  bits = 0;
  while (1) {
    while_7_continue:  ;
    if (! (bits <= 15)) {
      goto while_7_break;
    }
    bl_count[bits] = (unsigned short)0;
    bits ++;
  }
  while_7_break:  ;
  n = 0;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(n);
  __dyc_printpre_byte(dist);
}
}
