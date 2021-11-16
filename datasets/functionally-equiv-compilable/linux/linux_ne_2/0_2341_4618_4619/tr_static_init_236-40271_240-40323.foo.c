#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int const   extra_lbits[29] ;
  uch length_code[256] ;
  int base_length[29] ;
  int static_init_done ;
  int n ;
  int length ;
  int code ;
  int tmp ;

  {
  static_init_done = __dyc_readpre_byte();
  n = 0;
  length = 0;
  code = 0;
  tmp = 0;
  if (static_init_done) {
    goto __dyc_dummy_label;
  }
  length = 0;
  code = 0;
  while (1) {
    while_1_continue:  ;
    if (! (code < 28)) {
      goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(length);
}
}
