#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ int h ;
  unsigned int i ;
  unsigned int j ;
  int l ;
  struct huft *q ;
  struct huft r ;
  int w ;
  unsigned int *x ;
  struct huft **u ;
  int ret ;

  {
  h = __dyc_readpre_byte();
  i = (unsigned int )__dyc_readpre_byte();
  j = (unsigned int )__dyc_readpre_byte();
  l = __dyc_readpre_byte();
  q = __dyc_read_ptr__comp_59huft();
  w = __dyc_readpre_byte();
  x = __dyc_read_ptr__int();
  u = __dyc_read_ptr__ptr__comp_59huft();
  memset(& r, 0, sizeof(struct huft ));
  ret = 0;
  ret = 3;
  goto __dyc_dummy_label;
  *(x + h) = i;
  r.b = (unsigned char )l;
  r.e = (unsigned char )(16U + j);
  r.v.t = q;
  j = i >> (w - l);
  *(*(u + (h - 1)) + j) = r;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(ret);
}
}
