#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int i ;
  unsigned int *p ;
  struct __anonstruct_stk_24 *stk ;
  unsigned int *c ;
  struct huft **u ;
  int ret ;
  unsigned int *b ;
  unsigned int n ;
  struct huft **t ;
  int *m ;

  {
  stk = __dyc_read_ptr__comp_61__anonstruct_stk_24();
  c = __dyc_read_ptr__int();
  b = __dyc_read_ptr__int();
  n = (unsigned int )__dyc_readpre_byte();
  t = __dyc_read_ptr__ptr__comp_59huft();
  m = (int *)__dyc_read_ptr__int();
  i = 0;
  p = 0;
  u = 0;
  ret = 0;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__int(p);
  __dyc_print_ptr__ptr__comp_59huft(u);
  __dyc_printpre_byte(ret);
}
}
