#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int hufts ;
  unsigned int a ;
  unsigned int f ;
  int g ;
  int h ;
  unsigned int i ;
  unsigned int j ;
  int k ;
  int l ;
  struct huft *q ;
  struct huft r ;
  int w ;
  unsigned int *xp ;
  unsigned int z ;
  unsigned int *c ;
  unsigned int *x ;
  struct huft **u ;
  int ret ;
  void *tmp___4 ;
  struct huft **t ;
  void *__dyc_funcallvar_2 ;

  {
  hufts = (unsigned int )__dyc_readpre_byte();
  a = (unsigned int )__dyc_readpre_byte();
  g = __dyc_readpre_byte();
  h = __dyc_readpre_byte();
  i = (unsigned int )__dyc_readpre_byte();
  k = __dyc_readpre_byte();
  l = __dyc_readpre_byte();
  w = __dyc_readpre_byte();
  c = __dyc_read_ptr__int();
  x = __dyc_read_ptr__int();
  u = __dyc_read_ptr__ptr__comp_59huft();
  t = __dyc_read_ptr__ptr__comp_59huft();
  __dyc_funcallvar_2 = __dyc_read_ptr__void();
  f = 0;
  j = 0;
  q = 0;
  memset(& r, 0, sizeof(struct huft ));
  xp = 0;
  z = 0;
  ret = 0;
  tmp___4 = 0;
  while (1) {
    while_8_continue:  ;
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
    {
    z = (unsigned int )(1 << j);
    tmp___4 = __dyc_funcallvar_2;
    q = (struct huft *)tmp___4;
    }
    if ((unsigned long )q == (unsigned long )((struct huft *)((void *)0))) {
      if (h) {
        {

        }
      }
      ret = 3;
      goto __dyc_dummy_label;
    }
    hufts += z + 1U;
    *t = q + 1;
    t = & q->v.t;
    *t = (struct huft *)((void *)0);
    q ++;
    *(u + h) = q;
    if (h) {
      *(x + h) = i;
      r.b = (unsigned char )l;
      r.e = (unsigned char )(16U + j);
      r.v.t = q;
      j = i >> (w - l);
      *(*(u + (h - 1)) + j) = r;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(hufts);
  __dyc_printpre_byte(f);
  __dyc_print_ptr__int(xp);
  __dyc_printpre_byte(z);
  __dyc_printpre_byte(ret);
}
}
