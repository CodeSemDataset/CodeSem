#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ int g ;
  unsigned int i ;
  unsigned int j ;
  int k ;
  int l ;
  unsigned int *p ;
  unsigned int *xp ;
  int y ;
  unsigned int *c ;
  unsigned int *x ;
  int ret ;
  unsigned int *tmp___0 ;
  unsigned int *tmp___1 ;
  unsigned int *b ;
  int *m ;

  {
  j = (unsigned int )__dyc_readpre_byte();
  l = __dyc_readpre_byte();
  c = __dyc_read_ptr__int();
  x = __dyc_read_ptr__int();
  b = __dyc_read_ptr__int();
  m = (int *)__dyc_read_ptr__int();
  g = 0;
  i = 0;
  k = 0;
  p = 0;
  xp = 0;
  y = 0;
  ret = 0;
  tmp___0 = 0;
  tmp___1 = 0;
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
  *m = l;
  y = 1 << j;
  while (1) {
    while_3_continue:  ;
    if (! (j < i)) {
      goto while_3_break;
    }
    y = (int )((unsigned int )y - *(c + j));
    if (y < 0) {
      ret = 2;
      goto __dyc_dummy_label;
    }
    j ++;
    y <<= 1;
  }
  while_3_break:  ;
  y = (int )((unsigned int )y - *(c + i));
  if (y < 0) {
    ret = 2;
    goto __dyc_dummy_label;
  }
  *(c + i) += (unsigned int )y;
  j = 0U;
  *(x + 1) = j;
  p = c + 1;
  xp = x + 2;
  while (1) {
    while_4_continue:  ;
    i --;
    if (! i) {
      goto while_4_break;
    }
    tmp___0 = xp;
    xp ++;
    tmp___1 = p;
    p ++;
    j += *tmp___1;
    *tmp___0 = j;
  }
  while_4_break:  ;
  p = b;
  i = 0U;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(g);
  __dyc_printpre_byte(i);
  __dyc_printpre_byte(k);
  __dyc_print_ptr__int(p);
  __dyc_print_ptr__int(xp);
  __dyc_printpre_byte(ret);
}
}
