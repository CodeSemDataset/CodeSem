#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ int h ;
  unsigned int i ;
  unsigned int j ;
  int l ;
  unsigned int *p ;
  struct huft *q ;
  struct huft r ;
  int w ;
  unsigned int *x ;
  struct huft **u ;
  int tmp___5 ;
  unsigned int *tmp___6 ;
  unsigned int s ;
  ush const   *d ;
  ush const   *e ;

  {
  h = __dyc_readpre_byte();
  i = (unsigned int )__dyc_readpre_byte();
  j = (unsigned int )__dyc_readpre_byte();
  l = __dyc_readpre_byte();
  p = __dyc_read_ptr__int();
  q = __dyc_read_ptr__comp_59huft();
  w = __dyc_readpre_byte();
  x = __dyc_read_ptr__int();
  u = __dyc_read_ptr__ptr__comp_59huft();
  s = (unsigned int )__dyc_readpre_byte();
  d = (ush const   *)__dyc_read_ptr__typdef_ush();
  e = (ush const   *)__dyc_read_ptr__typdef_ush();
  memset(& r, 0, sizeof(struct huft ));
  tmp___5 = 0;
  tmp___6 = 0;
  *(x + h) = i;
  r.b = (unsigned char )l;
  r.e = (unsigned char )(16U + j);
  r.v.t = q;
  j = i >> (w - l);
  *(*(u + (h - 1)) + j) = r;
  if (*p < 256U) {
    tmp___5 = 16;
  } else {
    tmp___5 = 15;
  }
  r.e = (unsigned char )tmp___5;
  r.v.n = (unsigned short )*p;
  p ++;
  r.e = (unsigned char )*(e + (*p - s));
  tmp___6 = p;
  p ++;
  r.v.n = (unsigned short )*(d + (*tmp___6 - s));
  __dyc_dummy_label:  ;
  __dyc_print_ptr__int(p);
  __dyc_print_comp_59huft(r);
}
}
