#include "../../include/dycfoo.h"
#include "../../include/gen-fac.i.hd.c.h"
void __dyc_foo(void) 
{ mp_size_t i ;
  mp_limb_t d1 ;
  mp_limb_t d0 ;
  mp_limb_t cy ;
  mp_limb_t cy1 ;
  mp_limb_t q ;
  mp_limb_t n0 ;
  mp_limb_t _q0 ;
  mp_limb_t _t1 ;
  mp_limb_t _t0 ;
  mp_limb_t _mask ;
  mp_limb_t __x0 ;
  mp_limb_t __x1 ;
  mp_limb_t __x2 ;
  mp_limb_t __x3 ;
  unsigned int __ul ;
  unsigned int __vl ;
  unsigned int __uh ;
  unsigned int __vh ;
  mp_limb_t __u ;
  mp_limb_t __v ;
  mp_limb_t __x ;
  mp_limb_t __x___0 ;
  mp_limb_t __x0___0 ;
  mp_limb_t __x1___0 ;
  mp_limb_t __x2___0 ;
  mp_limb_t __x3___0 ;
  unsigned int __ul___0 ;
  unsigned int __vl___0 ;
  unsigned int __uh___0 ;
  unsigned int __vh___0 ;
  mp_limb_t __u___0 ;
  mp_limb_t __v___0 ;
  mp_limb_t __x___1 ;
  mp_limb_t __x___2 ;
  mp_limb_t __x___3 ;
  mp_limb_t tmp ;
  mp_ptr qp ;
  mp_ptr np ;
  mp_limb_t n1 ;
  mp_size_t dn ;
  mp_limb_t dinv ;
  mp_limb_t __dyc_funcallvar_1 ;
  mp_limb_t __dyc_funcallvar_2 ;

  {
  i = (mp_size_t )__dyc_readpre_byte();
  d1 = (mp_limb_t )__dyc_readpre_byte();
  d0 = (mp_limb_t )__dyc_readpre_byte();
  n0 = (mp_limb_t )__dyc_readpre_byte();
  qp = __dyc_read_ptr__typdef_mp_limb_t();
  np = __dyc_read_ptr__typdef_mp_limb_t();
  n1 = (mp_limb_t )__dyc_readpre_byte();
  dn = (mp_size_t )__dyc_readpre_byte();
  dinv = (mp_limb_t )__dyc_readpre_byte();
  __dyc_funcallvar_1 = (mp_limb_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (mp_limb_t )__dyc_readpre_byte();
  cy = 0;
  cy1 = 0;
  q = 0;
  _q0 = 0;
  _t1 = 0;
  _t0 = 0;
  _mask = 0;
  __x0 = 0;
  __x1 = 0;
  __x2 = 0;
  __x3 = 0;
  __ul = 0;
  __vl = 0;
  __uh = 0;
  __vh = 0;
  __u = 0;
  __v = 0;
  __x = 0;
  __x___0 = 0;
  __x0___0 = 0;
  __x1___0 = 0;
  __x2___0 = 0;
  __x3___0 = 0;
  __ul___0 = 0;
  __vl___0 = 0;
  __uh___0 = 0;
  __vh___0 = 0;
  __u___0 = 0;
  __v___0 = 0;
  __x___1 = 0;
  __x___2 = 0;
  __x___3 = 0;
  tmp = 0;
  if (n1 == d1) {
    if (n0 == d0) {
      {
      q = ~ 0UL;

      n1 = *(np + ((dn - 1L) + i));
      }
    } else {
      goto _L___0;
    }
  } else {
    _L___0:  
    {
    while (1) {
      while_51_continue:  ;
      {
      while (1) {
        while_52_continue:  ;
        __u = n1;
        __v = dinv;
        __ul = (unsigned int )(__u & ((1UL << (sizeof(mp_limb_t ) * 8UL) / 2UL) - 1UL));
        __uh = (unsigned int )(__u >> (sizeof(mp_limb_t ) * 8UL) / 2UL);
        __vl = (unsigned int )(__v & ((1UL << (sizeof(mp_limb_t ) * 8UL) / 2UL) - 1UL));
        __vh = (unsigned int )(__v >> (sizeof(mp_limb_t ) * 8UL) / 2UL);
        __x0 = (unsigned long )__ul * (unsigned long )__vl;
        __x1 = (unsigned long )__ul * (unsigned long )__vh;
        __x2 = (unsigned long )__uh * (unsigned long )__vl;
        __x3 = (unsigned long )__uh * (unsigned long )__vh;
        __x1 += __x0 >> (sizeof(mp_limb_t ) * 8UL) / 2UL;
        __x1 += __x2;
        if (__x1 < __x2) {
          __x3 += 1UL << (sizeof(mp_limb_t ) * 8UL) / 2UL;
        }
        q = __x3 + (__x1 >> (sizeof(mp_limb_t ) * 8UL) / 2UL);
        _q0 = (__x1 << (sizeof(mp_limb_t ) * 8UL) / 2UL) + (__x0 & ((1UL << (sizeof(mp_limb_t ) * 8UL) / 2UL) - 1UL));
        goto while_52_break;
      }
      while_52_break:  ;
      }
      {
      while (1) {
        while_53_continue:  ;
        __x = _q0 + n0;
        q = (q + n1) + (mp_limb_t )(__x < _q0);
        _q0 = __x;
        goto while_53_break;
      }
      while_53_break:  ;
      }
      n1 = n0 - d1 * q;
      {
      while (1) {
        while_54_continue:  ;
        __x___0 = *(np + ((dn - 2L) + i)) - d0;
        n1 = (n1 - d1) - (mp_limb_t )(*(np + ((dn - 2L) + i)) < d0);
        n0 = __x___0;
        goto while_54_break;
      }
      while_54_break:  ;
      }
      {
      while (1) {
        while_55_continue:  ;
        __u___0 = d0;
        __v___0 = q;
        __ul___0 = (unsigned int )(__u___0 & ((1UL << (sizeof(mp_limb_t ) * 8UL) / 2UL) - 1UL));
        __uh___0 = (unsigned int )(__u___0 >> (sizeof(mp_limb_t ) * 8UL) / 2UL);
        __vl___0 = (unsigned int )(__v___0 & ((1UL << (sizeof(mp_limb_t ) * 8UL) / 2UL) - 1UL));
        __vh___0 = (unsigned int )(__v___0 >> (sizeof(mp_limb_t ) * 8UL) / 2UL);
        __x0___0 = (unsigned long )__ul___0 * (unsigned long )__vl___0;
        __x1___0 = (unsigned long )__ul___0 * (unsigned long )__vh___0;
        __x2___0 = (unsigned long )__uh___0 * (unsigned long )__vl___0;
        __x3___0 = (unsigned long )__uh___0 * (unsigned long )__vh___0;
        __x1___0 += __x0___0 >> (sizeof(mp_limb_t ) * 8UL) / 2UL;
        __x1___0 += __x2___0;
        if (__x1___0 < __x2___0) {
          __x3___0 += 1UL << (sizeof(mp_limb_t ) * 8UL) / 2UL;
        }
        _t1 = __x3___0 + (__x1___0 >> (sizeof(mp_limb_t ) * 8UL) / 2UL);
        _t0 = (__x1___0 << (sizeof(mp_limb_t ) * 8UL) / 2UL) + (__x0___0 & ((1UL << (sizeof(mp_limb_t ) * 8UL) / 2UL) - 1UL));
        goto while_55_break;
      }
      while_55_break:  ;
      }
      {
      while (1) {
        while_56_continue:  ;
        __x___1 = n0 - _t0;
        n1 = (n1 - _t1) - (mp_limb_t )(n0 < _t0);
        n0 = __x___1;
        goto while_56_break;
      }
      while_56_break:  ;
      }
      q ++;
      _mask = - ((unsigned long )(n1 >= _q0));
      q += _mask;
      {
      while (1) {
        while_57_continue:  ;
        __x___2 = n0 + (_mask & d0);
        n1 = (n1 + (_mask & d1)) + (mp_limb_t )(__x___2 < n0);
        n0 = __x___2;
        goto while_57_break;
      }
      while_57_break:  ;
      }
      if (n1 >= d1) {
        if (n1 > d1) {
          goto _L;
        } else {
          if (n0 >= d0) {
            _L:  
            q ++;
            {
            while (1) {
              while_58_continue:  ;
              __x___3 = n0 - d0;
              n1 = (n1 - d1) - (mp_limb_t )(n0 < d0);
              n0 = __x___3;
              goto while_58_break;
            }
            while_58_break:  ;
            }
          }
        }
      }
      goto while_51_break;
    }
    while_51_break:  ;
    }
    {
    cy = __dyc_funcallvar_1;
    cy1 = (unsigned long )(n0 < cy);
    n0 -= cy;
    cy = (unsigned long )(n1 < cy1);
    n1 -= cy1;
    *(np + ((dn - 2L) + i)) = n0;
    }
    if (cy != 0UL) {
      {
      tmp = __dyc_funcallvar_2;
      n1 += d1 + tmp;
      q --;
      }
    }
  }
  if (qp) {
    *(qp + i) = q;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(n1);
}
}
