#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ int g ;
  int h ;
  unsigned int i ;
  unsigned int j ;
  int k ;
  int l ;
  unsigned int *p ;
  struct huft *q ;
  int w ;
  unsigned int *xp ;
  int y ;
  unsigned int z ;
  struct __anonstruct_stk_24 *stk ;
  unsigned int *c ;
  unsigned int *v ;
  unsigned int *x ;
  struct huft **u ;
  int ret ;
  unsigned int *tmp___0 ;
  unsigned int *tmp___1 ;
  unsigned int tmp___2 ;
  unsigned int *tmp___3 ;
  unsigned int *b ;
  unsigned int n ;
  struct huft **t ;
  int *m ;

  {
  stk = __dyc_read_ptr__comp_61__anonstruct_stk_24();
  c = __dyc_read_ptr__int();
  v = __dyc_read_ptr__int();
  x = __dyc_read_ptr__int();
  b = __dyc_read_ptr__int();
  n = (unsigned int )__dyc_readpre_byte();
  t = __dyc_read_ptr__ptr__comp_59huft();
  m = (int *)__dyc_read_ptr__int();
  g = 0;
  h = 0;
  i = 0;
  j = 0;
  k = 0;
  l = 0;
  p = 0;
  q = 0;
  w = 0;
  xp = 0;
  y = 0;
  z = 0;
  u = 0;
  ret = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  u = stk->u;

  p = b;
  i = n;
  while (1) {
    while_0_continue:  ;
    (*(c + *p)) ++;
    p ++;
    i --;
    if (! i) {
      goto while_0_break;
    }
  }
  while_0_break:  ;
  if (*(c + 0) == n) {
    *t = (struct huft *)((void *)0);
    *m = 0;
    ret = 2;
    goto __dyc_dummy_label;
  }
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
      goto while_5_break;
    }
  }
  while_5_break:  ;
  n = *(x + g);
  i = 0U;
  *(x + 0) = i;
  p = v;
  h = -1;
  w = - l;
  *(u + 0) = (struct huft *)((void *)0);
  q = (struct huft *)((void *)0);
  z = 0U;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(g);
  __dyc_printpre_byte(h);
  __dyc_printpre_byte(k);
  __dyc_print_ptr__int(p);
  __dyc_print_ptr__comp_59huft(q);
  __dyc_printpre_byte(w);
  __dyc_print_ptr__int(xp);
  __dyc_printpre_byte(z);
  __dyc_print_ptr__ptr__comp_59huft(u);
  __dyc_printpre_byte(ret);
  __dyc_printpre_byte(n);
}
}
