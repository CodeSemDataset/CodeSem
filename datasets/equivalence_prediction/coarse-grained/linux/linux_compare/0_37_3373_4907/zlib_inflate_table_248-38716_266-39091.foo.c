#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int len ;
  unsigned int min ;
  unsigned int max ;
  unsigned int root ;
  unsigned int curr ;
  unsigned int drop ;
  int left ;
  unsigned int used ;
  code *next ;
  unsigned short count[16] ;
  codetype type ;

  {
  len = (unsigned int )__dyc_readpre_byte();
  min = (unsigned int )__dyc_readpre_byte();
  max = (unsigned int )__dyc_readpre_byte();
  root = (unsigned int )__dyc_readpre_byte();
  drop = (unsigned int )__dyc_readpre_byte();
  used = (unsigned int )__dyc_readpre_byte();
  next = __dyc_read_ptr__typdef_code();
  type = (codetype )__dyc_readpre_byte();
  curr = 0;
  left = 0;
  if (drop == 0U) {
    drop = root;
  }
  next += min;
  curr = len - drop;
  left = 1 << curr;
  while (1) {
    while_11_continue:  ;
    if (! (curr + drop < max)) {
      goto while_11_break;
    }
    left -= (int )count[curr + drop];
    if (left <= 0) {
      goto while_11_break;
    }
    curr ++;
    left <<= 1;
  }
  while_11_break:  ;
  used += 1U << curr;
  if ((int )type == 1) {
    if (used >= 1456U) {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(left);
  __dyc_print_ptr__typdef_code(next);
}
}
