#include "../../include/dycfoo.h"
#include "../../include/pqsort.i.hd.c.h"
void __dyc_foo(void) 
{ char *pl ;
  char *pm ;
  char *pn ;
  size_t d ;
  int swaptype ;
  long t ;
  int tmp___0 ;
  void *a ;
  size_t n ;
  size_t es ;
  int __dyc_funcallvar_1 ;
  char *__dyc_funcallvar_2 ;
  char *__dyc_funcallvar_3 ;
  char *__dyc_funcallvar_4 ;
  char *__dyc_funcallvar_5 ;

  {
  swaptype = __dyc_readpre_byte();
  a = __dyc_read_ptr__void();
  n = (size_t )__dyc_readpre_byte();
  es = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_read_ptr__char();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  pl = 0;
  pm = 0;
  pn = 0;
  d = 0;
  t = 0;
  tmp___0 = 0;
  if (n < 7UL) {
    pm = (char *)a + es;
    {
    while (1) {
      while_2_continue:  ;
      if (! ((unsigned long )pm < (unsigned long )((char *)a + n * es))) {
        goto while_2_break;
      }
      pl = pm;
      {
      while (1) {
        while_3_continue:  ;
        if ((unsigned long )pl > (unsigned long )((char *)a)) {
          {
          tmp___0 = __dyc_funcallvar_1;
          }
          if (! (tmp___0 > 0)) {
            goto while_3_break;
          }
        } else {
          goto while_3_break;
        }
        if (swaptype == 0) {
          t = *((long *)((void *)pl));
          *((long *)((void *)pl)) = *((long *)((void *)(pl - es)));
          *((long *)((void *)(pl - es))) = t;
        } else {
          {

          }
        }
        pl -= es;
      }
      while_3_break:  ;
      }
      pm += es;
    }
    while_2_break:  ;
    }
    goto __dyc_dummy_label;
  }
  pm = (char *)a + (n / 2UL) * es;
  if (n > 7UL) {
    pl = (char *)a;
    pn = (char *)a + (n - 1UL) * es;
    if (n > 40UL) {
      {
      d = (n / 8UL) * es;
      pl = __dyc_funcallvar_2;
      pm = __dyc_funcallvar_3;
      pn = __dyc_funcallvar_4;
      }
    }
    {
    pm = __dyc_funcallvar_5;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(pl);
  __dyc_print_ptr__char(pm);
  __dyc_print_ptr__char(pn);
  __dyc_printpre_byte(d);
}
}
