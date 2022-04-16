#include "../../include/dycfoo.h"
#include "../../include/gen-fac.i.hd.c.h"
void __dyc_foo(void) 
{ mp_size_t ns ;
  mp_size_t ds ;
  mp_size_t nn ;
  mp_size_t dn ;
  mp_size_t qs ;
  mp_ptr np ;
  mp_ptr qp ;
  mp_size_t qn ;
  mp_size_t rn ;
  mpz_t tq ;
  mpz_t tr ;
  __mpz_struct *q ;
  __mpz_struct *r ;
  enum mpz_div_round_mode mode ;
  mp_size_t __dyc_funcallvar_1 ;

  {
  ns = (mp_size_t )__dyc_readpre_byte();
  ds = (mp_size_t )__dyc_readpre_byte();
  nn = (mp_size_t )__dyc_readpre_byte();
  dn = (mp_size_t )__dyc_readpre_byte();
  qs = (mp_size_t )__dyc_readpre_byte();
  q = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  r = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  mode = (enum mpz_div_round_mode )__dyc_readpre_byte();
  __dyc_funcallvar_1 = (mp_size_t )__dyc_readpre_byte();
  np = 0;
  qp = 0;
  qn = 0;
  rn = 0;
  dn = - ds;
  if ((int )mode == 1) {
    if (qs >= 0L) {
      if (r) {
        {

        }
      }
      if (q) {
        {

        }
      }
    } else {
      goto _L___0;
    }
  } else {
    _L___0:  
    if ((int )mode == 0) {
      if (qs < 0L) {
        if (r) {
          {

          }
        }
        if (q) {
          {

          }
        }
      } else {
        goto _L;
      }
    } else {
      _L:  
      if (r) {
        {

        }
      }
      if (q) {
        q->_mp_size = 0;
      }
    }
  }
  goto __dyc_dummy_label;

  np = tr[0]._mp_d;
  qn = (nn - dn) + 1L;
  if (q) {
    {

    qp = tq[0]._mp_d;
    }
  } else {
    qp = (mp_limb_t *)((void *)0);
  }

  if (qp) {
    qn -= (mp_size_t )(*(qp + (qn - 1L)) == 0UL);
    if (qs < 0L) {
      tq[0]._mp_size = (int )(- qn);
    } else {
      tq[0]._mp_size = (int )qn;
    }
  }
  rn = __dyc_funcallvar_1;
  if (ns < 0L) {
    tr[0]._mp_size = (int )(- rn);
  } else {
    tr[0]._mp_size = (int )rn;
  }
  if ((int )mode == 0) {
    if (qs < 0L) {
      if (rn != 0L) {
        if (q) {
          {

          }
        }
        if (r) {
          {

          }
        }
      } else {
        goto _L___2;
      }
    } else {
      goto _L___2;
    }
  } else {
    _L___2:  
    if ((int )mode == 1) {
      if (qs >= 0L) {
        if (rn != 0L) {
          if (q) {
            {

            }
          }
          if (r) {
            {

            }
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(dn);
  __dyc_print_ptr__typdef_mp_limb_t(np);
  __dyc_printpre_byte(qn);
}
}
