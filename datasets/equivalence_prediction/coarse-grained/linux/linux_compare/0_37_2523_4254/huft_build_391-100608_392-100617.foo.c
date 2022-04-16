#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int i ;
  unsigned int j ;
  unsigned int *p ;
  unsigned int *v ;
  unsigned int *x ;
  unsigned int tmp___2 ;
  unsigned int *tmp___3 ;
  unsigned int *b ;
  unsigned int n ;

  {
  v = __dyc_read_ptr__int();
  x = __dyc_read_ptr__int();
  b = __dyc_read_ptr__int();
  n = (unsigned int )__dyc_readpre_byte();
  i = 0;
  j = 0;
  p = 0;
  tmp___2 = 0;
  tmp___3 = 0;
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
}
}
