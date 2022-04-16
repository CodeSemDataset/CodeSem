#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int hufts ;
  int h ;
  struct huft *q ;
  unsigned int z ;
  struct huft **u ;
  int ret ;
  void *tmp___4 ;
  struct huft **t ;

  {
  hufts = (unsigned int )__dyc_readpre_byte();
  h = __dyc_readpre_byte();
  z = (unsigned int )__dyc_readpre_byte();
  u = __dyc_read_ptr__ptr__comp_59huft();
  tmp___4 = __dyc_read_ptr__void();
  t = __dyc_read_ptr__ptr__comp_59huft();
  q = 0;
  ret = 0;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(hufts);
  __dyc_printpre_byte(ret);
}
}
