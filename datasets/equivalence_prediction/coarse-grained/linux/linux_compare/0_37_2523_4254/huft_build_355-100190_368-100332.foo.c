#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ int g ;
  unsigned int i ;
  unsigned int j ;
  int l ;
  int y ;
  unsigned int *c ;
  int ret ;
  int *m ;

  {
  j = (unsigned int )__dyc_readpre_byte();
  l = __dyc_readpre_byte();
  c = __dyc_read_ptr__int();
  m = (int *)__dyc_read_ptr__int();
  g = 0;
  i = 0;
  y = 0;
  ret = 0;
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
  *m = l;
  y = 1 << j;
  while (1) {
    while_3_continue:  ;
    if (! (j < i)) {
      goto __dyc_dummy_label;
    }
    y = (int )((unsigned int )y - *(c + j));
    if (y < 0) {
      ret = 2;
      goto __dyc_dummy_label;
    }
    j ++;
    y <<= 1;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(g);
  __dyc_printpre_byte(y);
  __dyc_printpre_byte(ret);
}
}
