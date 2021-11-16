#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int a ;
  unsigned int f ;
  int g ;
  int h ;
  unsigned int j ;
  int k ;
  int l ;
  int w ;
  unsigned int *xp ;
  unsigned int z ;
  unsigned int *c ;

  {
  a = (unsigned int )__dyc_readpre_byte();
  g = __dyc_readpre_byte();
  h = __dyc_readpre_byte();
  k = __dyc_readpre_byte();
  l = __dyc_readpre_byte();
  w = __dyc_readpre_byte();
  c = __dyc_read_ptr__int();
  f = 0;
  j = 0;
  xp = 0;
  z = 0;
  if (! (k > w + l)) {
    goto __dyc_dummy_label;
  }
  h ++;
  w += l;
  z = (unsigned int )(g - w);
  if (z > (unsigned int )l) {
    z = (unsigned int )l;
  } else {
    z = z;
  }
  j = (unsigned int )(k - w);
  f = (unsigned int )(1 << j);
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(f);
  __dyc_printpre_byte(h);
  __dyc_print_ptr__int(xp);
}
}
