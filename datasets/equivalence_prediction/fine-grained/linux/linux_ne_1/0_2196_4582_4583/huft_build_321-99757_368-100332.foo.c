#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ int g ;
  unsigned int i ;
  unsigned int j ;
  int k ;
  int l ;
  unsigned int *p ;
  int y ;
  struct __anonstruct_stk_24 *stk ;
  unsigned int *c ;
  unsigned int *v ;
  unsigned int *x ;
  struct huft **u ;
  int ret ;
  void *tmp ;
  unsigned int *b ;
  unsigned int n ;
  struct huft **t ;
  int *m ;

  {
  tmp = __dyc_read_ptr__void();
  b = __dyc_read_ptr__int();
  n = (unsigned int )__dyc_readpre_byte();
  t = __dyc_read_ptr__ptr__comp_59huft();
  m = (int *)__dyc_read_ptr__int();
  g = 0;
  i = 0;
  j = 0;
  k = 0;
  l = 0;
  p = 0;
  y = 0;
  stk = 0;
  c = 0;
  v = 0;
  x = 0;
  u = 0;
  ret = 0;
  stk = (struct __anonstruct_stk_24 *)tmp;
  if ((unsigned long )stk == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  c = stk->c;
  v = stk->v;
  x = stk->x;
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
  __dyc_printpre_byte(k);
  __dyc_print_ptr__int(p);
  __dyc_printpre_byte(y);
  __dyc_print_ptr__int(v);
  __dyc_print_ptr__int(x);
  __dyc_print_ptr__ptr__comp_59huft(u);
  __dyc_printpre_byte(ret);
}
}
