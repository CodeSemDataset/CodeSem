#include "../../include/dycfoo.h"
#include "../../include/pqsort.i.hd.c.h"
void __dyc_foo(void) 
{ char *pa ;
  char *pb ;
  char *pc ;
  char *pd ;
  char *pn ;
  size_t r ;
  void *_l ;
  void *_r ;
  void *_l___0 ;
  void *_r___0 ;
  void *a ;
  size_t n ;
  size_t es ;
  void *lrange ;
  void *rrange ;

  {
  pa = __dyc_read_ptr__char();
  pb = __dyc_read_ptr__char();
  pc = __dyc_read_ptr__char();
  pd = __dyc_read_ptr__char();
  a = __dyc_read_ptr__void();
  n = (size_t )__dyc_readpre_byte();
  es = (size_t )__dyc_readpre_byte();
  lrange = __dyc_read_ptr__void();
  rrange = __dyc_read_ptr__void();
  pn = 0;
  r = 0;
  _l = 0;
  _r = 0;
  _l___0 = 0;
  _r___0 = 0;
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
  if (r > 0UL) {
    {

    }
  }
  r = (unsigned long )(pb - pa);
  if (r > es) {
    _l = a;
    _r = (void *)(((unsigned char *)a + r) - 1);
    if ((unsigned long )lrange < (unsigned long )_l) {
      if (! ((unsigned long )rrange < (unsigned long )_l)) {
        goto _L;
      }
    } else {
      _L:  
      if ((unsigned long )lrange > (unsigned long )_r) {
        if (! ((unsigned long )rrange > (unsigned long )_r)) {
          {

          }
        }
      } else {
        {

        }
      }
    }
  }
  r = (unsigned long )(pd - pc);
  if (r > es) {
    a = (void *)(pn - r);
    n = r / es;
    _l___0 = a;
    _r___0 = (void *)(((unsigned char *)a + r) - 1);
    if ((unsigned long )lrange < (unsigned long )_l___0) {
      if (! ((unsigned long )rrange < (unsigned long )_l___0)) {
        goto _L___0;
      }
    } else {
      _L___0:  
      if ((unsigned long )lrange > (unsigned long )_r___0) {
        if (! ((unsigned long )rrange > (unsigned long )_r___0)) {
          goto __dyc_dummy_label;
        }
      } else {
        goto __dyc_dummy_label;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__void(_r);
  __dyc_printpre_byte(n);
}
}
