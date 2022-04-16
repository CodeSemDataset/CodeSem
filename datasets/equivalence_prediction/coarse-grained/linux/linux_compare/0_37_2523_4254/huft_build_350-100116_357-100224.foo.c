#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int i ;
  unsigned int j ;
  int k ;
  int l ;
  unsigned int *c ;
  int *m ;

  {
  c = __dyc_read_ptr__int();
  m = (int *)__dyc_read_ptr__int();
  i = 0;
  j = 0;
  k = 0;
  l = 0;
  l = *m;
  j = 1U;
  while (1) {
    while_1_continue:  ;
    if (! (j <= 16U)) {
      goto while_1_break;
    }
    if (*(c + j)) {
      goto while_1_break;
    }
    j ++;
  }
  while_1_break:  ;
  k = (int )j;
  if ((unsigned int )l < j) {
    l = (int )j;
  }
  i = 16U;
  while (1) {
    while_2_continue:  ;
    if (! i) {
      goto __dyc_dummy_label;
    }
    if (*(c + i)) {
      goto __dyc_dummy_label;
    }
    i --;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(k);
  __dyc_printpre_byte(l);
}
}
