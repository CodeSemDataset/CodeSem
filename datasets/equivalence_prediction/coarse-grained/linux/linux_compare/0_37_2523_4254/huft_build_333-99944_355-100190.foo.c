#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int i ;
  unsigned int j ;
  int k ;
  int l ;
  unsigned int *p ;
  unsigned int *c ;
  int ret ;
  unsigned int n ;
  struct huft **t ;
  int *m ;

  {
  i = (unsigned int )__dyc_readpre_byte();
  p = __dyc_read_ptr__int();
  c = __dyc_read_ptr__int();
  n = (unsigned int )__dyc_readpre_byte();
  t = __dyc_read_ptr__ptr__comp_59huft();
  m = (int *)__dyc_read_ptr__int();
  j = 0;
  k = 0;
  l = 0;
  ret = 0;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(k);
  __dyc_printpre_byte(l);
  __dyc_print_ptr__int(p);
  __dyc_printpre_byte(ret);
}
}
