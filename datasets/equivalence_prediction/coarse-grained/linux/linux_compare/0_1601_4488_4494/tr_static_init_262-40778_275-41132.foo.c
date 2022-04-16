#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int const   extra_dbits[30] ;
  ct_data static_ltree[288] ;
  uch dist_code[512] ;
  int base_dist[30] ;
  int n ;
  int bits ;
  int code ;
  int dist ;
  ush bl_count[16] ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  code = __dyc_readpre_byte();
  dist = __dyc_readpre_byte();
  n = 0;
  bits = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
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
  while (1) {
    while_8_continue:  ;
    if (! (n <= 143)) {
      goto while_8_break;
    }
    tmp___2 = n;
    n ++;
    static_ltree[tmp___2].dl.len = (unsigned short)8;
    bl_count[8] = (ush )((int )bl_count[8] + 1);
  }
  while_8_break:  ;
  while (1) {
    while_9_continue:  ;
    if (! (n <= 255)) {
      goto __dyc_dummy_label;
    }
    tmp___3 = n;
    n ++;
    static_ltree[tmp___3].dl.len = (unsigned short)9;
    bl_count[9] = (ush )((int )bl_count[9] + 1);
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(dist);
}
}
