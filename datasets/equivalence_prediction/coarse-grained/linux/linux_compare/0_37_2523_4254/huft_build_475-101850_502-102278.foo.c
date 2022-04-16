#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int f ;
  int h ;
  unsigned int i ;
  unsigned int j ;
  int k ;
  int l ;
  unsigned int *p ;
  struct huft *q ;
  struct huft r ;
  int w ;
  unsigned int z ;
  unsigned int *v ;
  unsigned int *x ;
  int tmp___5 ;
  unsigned int *tmp___6 ;
  unsigned int n ;
  unsigned int s ;
  ush const   *d ;
  ush const   *e ;

  {
  h = __dyc_readpre_byte();
  i = (unsigned int )__dyc_readpre_byte();
  k = __dyc_readpre_byte();
  l = __dyc_readpre_byte();
  p = __dyc_read_ptr__int();
  q = __dyc_read_ptr__comp_59huft();
  w = __dyc_readpre_byte();
  z = (unsigned int )__dyc_readpre_byte();
  v = __dyc_read_ptr__int();
  x = __dyc_read_ptr__int();
  n = (unsigned int )__dyc_readpre_byte();
  s = (unsigned int )__dyc_readpre_byte();
  d = (ush const   *)__dyc_read_ptr__typdef_ush();
  e = (ush const   *)__dyc_read_ptr__typdef_ush();
  f = 0;
  j = 0;
  memset(& r, 0, sizeof(struct huft ));
  tmp___5 = 0;
  tmp___6 = 0;
  r.b = (unsigned char )(k - w);
  if ((unsigned long )p >= (unsigned long )(v + n)) {
    r.e = (unsigned char)99;
  } else {
    if (*p < s) {
      if (*p < 256U) {
        tmp___5 = 16;
      } else {
        tmp___5 = 15;
      }
      r.e = (unsigned char )tmp___5;
      r.v.n = (unsigned short )*p;
      p ++;
    } else {
      r.e = (unsigned char )*(e + (*p - s));
      tmp___6 = p;
      p ++;
      r.v.n = (unsigned short )*(d + (*tmp___6 - s));
    }
  }
  f = (unsigned int )(1 << (k - w));
  j = i >> w;
  while (1) {
    while_10_continue:  ;
    if (! (j < z)) {
      goto while_10_break;
    }
    *(q + j) = r;
    j += f;
  }
  while_10_break:  ;
  j = (unsigned int )(1 << (k - 1));
  while (1) {
    while_11_continue:  ;
    if (! (i & j)) {
      goto while_11_break;
    }
    i ^= j;
    j >>= 1;
  }
  while_11_break:  ;
  i ^= j;
  while (1) {
    while_12_continue:  ;
    if (! ((i & (unsigned int )((1 << w) - 1)) != *(x + h))) {
      goto __dyc_dummy_label;
    }
    h --;
    w -= l;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(f);
  __dyc_print_ptr__int(p);
  __dyc_print_comp_59huft(r);
}
}
