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
  unsigned int n ;

  {
  i = (unsigned int )__dyc_readpre_byte();
  p = __dyc_read_ptr__int();
  v = __dyc_read_ptr__int();
  x = __dyc_read_ptr__int();
  n = (unsigned int )__dyc_readpre_byte();
  j = 0;
  tmp___2 = 0;
  tmp___3 = 0;
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
