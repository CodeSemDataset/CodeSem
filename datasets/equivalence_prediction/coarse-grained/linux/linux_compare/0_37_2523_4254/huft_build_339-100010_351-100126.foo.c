#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int j ;
  int l ;
  unsigned int *c ;
  int ret ;
  unsigned int n ;
  struct huft **t ;
  int *m ;

  {
  c = __dyc_read_ptr__int();
  n = (unsigned int )__dyc_readpre_byte();
  t = __dyc_read_ptr__ptr__comp_59huft();
  m = (int *)__dyc_read_ptr__int();
  j = 0;
  l = 0;
  ret = 0;
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
      goto __dyc_dummy_label;
    }
    if (*(c + j)) {
      goto __dyc_dummy_label;
    }
    j ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(l);
  __dyc_printpre_byte(ret);
}
}