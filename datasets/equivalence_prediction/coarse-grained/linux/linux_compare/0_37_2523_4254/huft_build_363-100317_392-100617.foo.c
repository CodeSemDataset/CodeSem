#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int i ;
  unsigned int j ;
  int l ;
  unsigned int *p ;
  unsigned int *xp ;
  int y ;
  unsigned int *c ;
  unsigned int *v ;
  unsigned int *x ;
  int ret ;
  unsigned int *tmp___0 ;
  unsigned int *tmp___1 ;
  unsigned int tmp___2 ;
  unsigned int *tmp___3 ;
  unsigned int *b ;
  unsigned int n ;
  int *m ;

  {
  i = (unsigned int )__dyc_readpre_byte();
  j = (unsigned int )__dyc_readpre_byte();
  l = __dyc_readpre_byte();
  c = __dyc_read_ptr__int();
  v = __dyc_read_ptr__int();
  x = __dyc_read_ptr__int();
  b = __dyc_read_ptr__int();
  n = (unsigned int )__dyc_readpre_byte();
  m = (int *)__dyc_read_ptr__int();
  p = 0;
  xp = 0;
  y = 0;
  ret = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
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
  while (1) {
    while_5_continue:  ;
    tmp___3 = p;
    p ++;
    j = *tmp___3;
    if (j != 0U) {
      tmp___2 = *(x + j);
      (*(x + j)) ++;
      *(v + tmp___2) = i;
    }
    i ++;
    if (! (i < n)) {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__int(p);
  __dyc_print_ptr__int(xp);
  __dyc_printpre_byte(ret);
}
}
