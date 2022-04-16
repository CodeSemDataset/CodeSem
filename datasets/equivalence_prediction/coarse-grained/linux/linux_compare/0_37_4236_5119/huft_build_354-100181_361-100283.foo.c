#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ int g ;
  unsigned int i ;
  unsigned int j ;
  int k ;
  int l ;
  unsigned int *c ;

  {
  j = (unsigned int )__dyc_readpre_byte();
  l = __dyc_readpre_byte();
  c = __dyc_read_ptr__int();
  g = 0;
  i = 0;
  k = 0;
  k = (int )j;
  if ((unsigned int )l < j) {
    l = (int )j;
  }
  i = 16U;
  while (1) {
    while_2_continue:  ;
    if (! i) {
      goto while_2_break;
    }
    if (*(c + i)) {
      goto while_2_break;
    }
    i --;
  }
  while_2_break:  ;
  g = (int )i;
  if ((unsigned int )l > i) {
    l = (int )i;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(g);
  __dyc_printpre_byte(k);
  __dyc_printpre_byte(l);
}
}
