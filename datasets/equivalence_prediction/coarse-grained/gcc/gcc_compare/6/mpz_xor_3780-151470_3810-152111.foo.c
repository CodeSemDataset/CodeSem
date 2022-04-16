#include "../../include/dycfoo.h"
#include "../../include/gen-fac.i.hd.c.h"
void __dyc_foo(void) 
{ mp_size_t un ;
  mp_size_t vn ;
  mp_size_t i ;
  mp_ptr up ;
  mp_ptr vp ;
  mp_ptr rp ;
  mp_limb_t ux ;
  mp_limb_t vx ;
  mp_limb_t rx ;
  mp_limb_t uc ;
  mp_limb_t vc ;
  mp_limb_t rc ;
  mp_limb_t ul ;
  mp_limb_t vl ;
  mp_limb_t rl ;
  mp_size_t tmp___0 ;
  __mpz_struct *r ;
  __mpz_struct *u ;
  __mpz_struct *v ;
  mp_ptr __dyc_funcallvar_1 ;
  mp_size_t __dyc_funcallvar_2 ;

  {
  un = (mp_size_t )__dyc_readpre_byte();
  vn = (mp_size_t )__dyc_readpre_byte();
  ux = (mp_limb_t )__dyc_readpre_byte();
  vx = (mp_limb_t )__dyc_readpre_byte();
  rx = (mp_limb_t )__dyc_readpre_byte();
  uc = (mp_limb_t )__dyc_readpre_byte();
  vc = (mp_limb_t )__dyc_readpre_byte();
  rc = (mp_limb_t )__dyc_readpre_byte();
  r = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  u = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  v = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  __dyc_funcallvar_1 = __dyc_read_ptr__typdef_mp_limb_t();
  __dyc_funcallvar_2 = (mp_size_t )__dyc_readpre_byte();
  i = 0;
  up = 0;
  vp = 0;
  rp = 0;
  ul = 0;
  vl = 0;
  rl = 0;
  tmp___0 = 0;
  if ((mp_limb_t )un + rc > (mp_limb_t )r->_mp_alloc) {
    {
    rp = __dyc_funcallvar_1;
    }
  } else {
    rp = r->_mp_d;
  }
  up = u->_mp_d;
  vp = v->_mp_d;
  i = 0L;
  while (1) {
    while_137_continue:  ;
    ul = (*(up + i) ^ ux) + uc;
    uc = (unsigned long )(ul < uc);
    vl = (*(vp + i) ^ vx) + vc;
    vc = (unsigned long )(vl < vc);
    rl = ((ul ^ vl) ^ rx) + rc;
    rc = (unsigned long )(rl < rc);
    *(rp + i) = rl;
    i ++;
    if (! (i < vn)) {
      goto while_137_break;
    }
  }
  while_137_break:  ;
  if (! (vc == 0UL)) {
    {

    }
  }
  while (1) {
    while_138_continue:  ;
    if (! (i < un)) {
      goto while_138_break;
    }
    ul = (*(up + i) ^ ux) + uc;
    uc = (unsigned long )(ul < uc);
    rl = (ul ^ ux) + rc;
    rc = (unsigned long )(rl < rc);
    *(rp + i) = rl;
    i ++;
  }
  while_138_break:  ;
  if (rc) {
    tmp___0 = un;
    un ++;
    *(rp + tmp___0) = rc;
  } else {
    {
    un = __dyc_funcallvar_2;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(un);
  __dyc_printpre_byte(uc);
}
}
