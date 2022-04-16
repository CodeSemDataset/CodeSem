#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int i ;
  unsigned int j ;
  unsigned int *p ;
  unsigned int *xp ;
  int y ;
  unsigned int *c ;
  unsigned int *x ;
  unsigned int *tmp___0 ;
  unsigned int *tmp___1 ;

  {
  i = (unsigned int )__dyc_readpre_byte();
  y = __dyc_readpre_byte();
  c = __dyc_read_ptr__int();
  x = __dyc_read_ptr__int();
  j = 0;
  p = 0;
  xp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  *(c + i) += (unsigned int )y;
  j = 0U;
  *(x + 1) = j;
  p = c + 1;
  xp = x + 2;
  while (1) {
    while_4_continue:  ;
    i --;
    if (! i) {
      goto __dyc_dummy_label;
    }
    tmp___0 = xp;
    xp ++;
    tmp___1 = p;
    p ++;
    j += *tmp___1;
    *tmp___0 = j;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__int(p);
  __dyc_print_ptr__int(xp);
}
}
