#include "../../include/dycfoo.h"
#include "../../include/pqsort.i.hd.c.h"
void __dyc_foo(void) 
{ char *pa ;
  char *pb ;
  char *pc ;
  char *pd ;
  char *pm ;
  char *pn ;
  size_t r ;
  int swaptype ;
  int cmp_result ;
  long t___0 ;
  long t___1 ;
  long t___2 ;
  long t___3 ;
  void *a ;
  size_t n ;
  size_t es ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;

  {
  pm = __dyc_read_ptr__char();
  swaptype = __dyc_readpre_byte();
  a = __dyc_read_ptr__void();
  n = (size_t )__dyc_readpre_byte();
  es = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  pa = 0;
  pb = 0;
  pc = 0;
  pd = 0;
  pn = 0;
  r = 0;
  cmp_result = 0;
  t___0 = 0;
  t___1 = 0;
  t___2 = 0;
  t___3 = 0;
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
  while (1) {
    while_4_continue:  ;
    {
    while (1) {
      while_5_continue:  ;
      if ((unsigned long )pb <= (unsigned long )pc) {
        {
        cmp_result = __dyc_funcallvar_6;
        }
        if (! (cmp_result <= 0)) {
          goto while_5_break;
        }
      } else {
        goto while_5_break;
      }
      if (cmp_result == 0) {
        if (swaptype == 0) {
          t___1 = *((long *)((void *)pa));
          *((long *)((void *)pa)) = *((long *)((void *)pb));
          *((long *)((void *)pb)) = t___1;
        } else {
          {

          }
        }
        pa += es;
      }
      pb += es;
    }
    while_5_break:  ;
    }
    {
    while (1) {
      while_6_continue:  ;
      if ((unsigned long )pb <= (unsigned long )pc) {
        {
        cmp_result = __dyc_funcallvar_7;
        }
        if (! (cmp_result >= 0)) {
          goto while_6_break;
        }
      } else {
        goto while_6_break;
      }
      if (cmp_result == 0) {
        if (swaptype == 0) {
          t___2 = *((long *)((void *)pc));
          *((long *)((void *)pc)) = *((long *)((void *)pd));
          *((long *)((void *)pd)) = t___2;
        } else {
          {

          }
        }
        pd -= es;
      }
      pc -= es;
    }
    while_6_break:  ;
    }
    if ((unsigned long )pb > (unsigned long )pc) {
      goto while_4_break;
    }
    if (swaptype == 0) {
      t___3 = *((long *)((void *)pb));
      *((long *)((void *)pb)) = *((long *)((void *)pc));
      *((long *)((void *)pc)) = t___3;
    } else {
      {

      }
    }
    pb += es;
    pc -= es;
  }
  while_4_break:  ;
  pn = (char *)a + n * es;
  if (pa - (char *)a < pb - pa) {
    r = (unsigned long )(pa - (char *)a);
  } else {
    r = (unsigned long )(pb - pa);
  }
  if (r > 0UL) {
    {

    }
  }
  if ((unsigned long )(pd - pc) < (size_t )(pn - pd) - es) {
    r = (unsigned long )(pd - pc);
  } else {
    r = (size_t )(pn - pd) - es;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(r);
}
}
