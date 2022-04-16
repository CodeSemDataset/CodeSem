#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int const   extra_lbits[29] ;
  int const   extra_dbits[30] ;
  uch dist_code[512] ;
  uch length_code[256] ;
  int base_length[29] ;
  int base_dist[30] ;
  int n ;
  int length ;
  int code ;
  int dist ;
  int tmp ;
  int tmp___0 ;

  {
  length = __dyc_readpre_byte();
  code = __dyc_readpre_byte();
  n = 0;
  dist = 0;
  tmp = 0;
  tmp___0 = 0;
  while (1) {
    while_1_continue:  ;
    if (! (code < 28)) {
      goto while_1_break;
    }
    base_length[code] = length;
    n = 0;
    {
    while (1) {
      while_2_continue:  ;
      if (! (n < 1 << extra_lbits[code])) {
        goto while_2_break;
      }
      tmp = length;
      length ++;
      length_code[tmp] = (unsigned char )code;
      n ++;
    }
    while_2_break:  ;
    }
    code ++;
  }
  while_1_break:  ;
  length_code[length - 1] = (unsigned char )code;
  dist = 0;
  code = 0;
  while (1) {
    while_3_continue:  ;
    if (! (code < 16)) {
      goto while_3_break;
    }
    base_dist[code] = dist;
    n = 0;
    {
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
    }
    code ++;
  }
  while_3_break:  ;
  dist >>= 7;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(dist);
}
}
