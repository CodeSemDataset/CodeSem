#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int hufts ;
  int h ;
  unsigned int i ;
  unsigned int j ;
  int l ;
  struct huft *q ;
  struct huft r ;
  int w ;
  unsigned int z ;
  unsigned int *x ;
  struct huft **u ;
  int ret ;
  void *tmp___4 ;
  struct huft **t ;
  void *__dyc_funcallvar_2 ;

  {
  hufts = (unsigned int )__dyc_readpre_byte();
  h = __dyc_readpre_byte();
  i = (unsigned int )__dyc_readpre_byte();
  j = (unsigned int )__dyc_readpre_byte();
  l = __dyc_readpre_byte();
  w = __dyc_readpre_byte();
  x = __dyc_read_ptr__int();
  u = __dyc_read_ptr__ptr__comp_59huft();
  t = __dyc_read_ptr__ptr__comp_59huft();
  __dyc_funcallvar_2 = __dyc_read_ptr__void();
  q = 0;
  memset(& r, 0, sizeof(struct huft ));
  z = 0;
  ret = 0;
  tmp___4 = 0;
  z = (unsigned int )(1 << j);
  tmp___4 = __dyc_funcallvar_2;
  q = (struct huft *)tmp___4;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(hufts);
  __dyc_printpre_byte(z);
  __dyc_printpre_byte(ret);
}
}
