#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int hufts ;
  int h ;
  unsigned int j ;
  struct huft *q ;
  unsigned int z ;
  struct huft **u ;
  int ret ;
  void *tmp___4 ;
  struct huft **t ;
  void *__dyc_funcallvar_2 ;

  {
  hufts = (unsigned int )__dyc_readpre_byte();
  h = __dyc_readpre_byte();
  j = (unsigned int )__dyc_readpre_byte();
  u = __dyc_read_ptr__ptr__comp_59huft();
  t = __dyc_read_ptr__ptr__comp_59huft();
  __dyc_funcallvar_2 = __dyc_read_ptr__void();
  q = 0;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(hufts);
  __dyc_printpre_byte(z);
  __dyc_printpre_byte(ret);
}
}
