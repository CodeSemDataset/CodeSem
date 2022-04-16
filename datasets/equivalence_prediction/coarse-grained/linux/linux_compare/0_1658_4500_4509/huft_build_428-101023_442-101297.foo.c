#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int a ;
  unsigned int f ;
  unsigned int j ;
  int k ;
  unsigned int *xp ;
  unsigned int z ;
  unsigned int *c ;

  {
  a = (unsigned int )__dyc_readpre_byte();
  f = (unsigned int )__dyc_readpre_byte();
  j = (unsigned int )__dyc_readpre_byte();
  k = __dyc_readpre_byte();
  z = (unsigned int )__dyc_readpre_byte();
  c = __dyc_read_ptr__int();
  xp = 0;
  if (f > a + 1U) {
    f -= a + 1U;
    xp = c + k;
    if (j < z) {
      {
      while (1) {
        while_9_continue:  ;
        j ++;
        if (! (j < z)) {
          goto while_9_break;
        }
        f <<= 1;
        xp ++;
        if (f <= *xp) {
          goto while_9_break;
        }
        f -= *xp;
      }
      while_9_break:  ;
      }
    }
  }
  z = (unsigned int )(1 << j);
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(f);
  __dyc_print_ptr__int(xp);
  __dyc_printpre_byte(z);
}
}
