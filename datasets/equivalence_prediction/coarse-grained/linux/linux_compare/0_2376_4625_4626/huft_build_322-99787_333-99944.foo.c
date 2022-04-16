#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int i ;
  unsigned int *p ;
  struct __anonstruct_stk_24 *stk ;
  unsigned int *c ;
  unsigned int *v ;
  unsigned int *x ;
  struct huft **u ;
  unsigned int *b ;
  unsigned int n ;

  {
  stk = __dyc_read_ptr__comp_61__anonstruct_stk_24();
  b = __dyc_read_ptr__int();
  n = (unsigned int )__dyc_readpre_byte();
  i = 0;
  p = 0;
  c = 0;
  v = 0;
  x = 0;
  u = 0;
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
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__int(p);
  __dyc_print_ptr__int(v);
  __dyc_print_ptr__int(x);
  __dyc_print_ptr__ptr__comp_59huft(u);
}
}
