#include "../../include/dycfoo.h"
#include "../../include/pqsort.i.hd.c.h"
void __dyc_foo(void) 
{ char *pa ;
  char *pb ;
  char *pc ;
  char *pd ;
  char *pl ;
  char *pm ;
  char *pn ;
  size_t d ;
  int swaptype ;
  long t___0 ;
  void *a ;
  size_t n ;
  size_t es ;
  char *__dyc_funcallvar_2 ;
  char *__dyc_funcallvar_3 ;
  char *__dyc_funcallvar_4 ;
  char *__dyc_funcallvar_5 ;

  {
  swaptype = __dyc_readpre_byte();
  a = __dyc_read_ptr__void();
  n = (size_t )__dyc_readpre_byte();
  es = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_read_ptr__char();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  pa = 0;
  pb = 0;
  pc = 0;
  pd = 0;
  pl = 0;
  pm = 0;
  pn = 0;
  d = 0;
  t___0 = 0;
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
  if (swaptype == 0) {
    t___0 = *((long *)a);
    *((long *)a) = *((long *)((void *)pm));
    *((long *)((void *)pm)) = t___0;
  } else {
    {

    }
  }
  pb = (char *)a + es;
  pa = pb;
  pd = (char *)a + (n - 1UL) * es;
  pc = pd;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(pa);
  __dyc_print_ptr__char(pc);
  __dyc_print_ptr__char(pl);
  __dyc_print_ptr__char(pm);
  __dyc_print_ptr__char(pn);
  __dyc_printpre_byte(d);
}
}
