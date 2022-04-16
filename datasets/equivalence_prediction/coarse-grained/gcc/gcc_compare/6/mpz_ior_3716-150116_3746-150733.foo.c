#include "../../include/dycfoo.h"
#include "../../include/gen-fac.i.hd.c.h"
void __dyc_foo(void) 
{ mp_size_t vn ;
  mp_size_t rn ;
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
  mp_size_t __dyc_funcallvar_2 ;

  {
  vn = (mp_size_t )__dyc_readpre_byte();
  rn = (mp_size_t )__dyc_readpre_byte();
  rp = __dyc_read_ptr__typdef_mp_limb_t();
  ux = (mp_limb_t )__dyc_readpre_byte();
  vx = (mp_limb_t )__dyc_readpre_byte();
  rx = (mp_limb_t )__dyc_readpre_byte();
  uc = (mp_limb_t )__dyc_readpre_byte();
  vc = (mp_limb_t )__dyc_readpre_byte();
  rc = (mp_limb_t )__dyc_readpre_byte();
  r = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  u = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  v = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  __dyc_funcallvar_2 = (mp_size_t )__dyc_readpre_byte();
  i = 0;
  up = 0;
  vp = 0;
  ul = 0;
  vl = 0;
  rl = 0;
  tmp___0 = 0;
  up = u->_mp_d;
  vp = v->_mp_d;
  i = 0L;
  while (1) {
    while_133_continue:  ;
    ul = (*(up + i) ^ ux) + uc;
    uc = (unsigned long )(ul < uc);
    vl = (*(vp + i) ^ vx) + vc;
    vc = (unsigned long )(vl < vc);
    rl = ((ul | vl) ^ rx) + rc;
    rc = (unsigned long )(rl < rc);
    *(rp + i) = rl;
    i ++;
    if (! (i < vn)) {
      goto while_133_break;
    }
  }
  while_133_break:  ;
  if (! (vc == 0UL)) {
    {

    }
  }
  while (1) {
    while_134_continue:  ;
    if (! (i < rn)) {
      goto while_134_break;
    }
    ul = (*(up + i) ^ ux) + uc;
    uc = (unsigned long )(ul < uc);
    rl = ((ul | vx) ^ rx) + rc;
    rc = (unsigned long )(rl < rc);
    *(rp + i) = rl;
    i ++;
  }
  while_134_break:  ;
  if (rc) {
    tmp___0 = rn;
    rn ++;
    *(rp + tmp___0) = rc;
  } else {
    {
    rn = __dyc_funcallvar_2;
    }
  }
  if (rx) {
    r->_mp_size = (int )(- rn);
  } else {
    r->_mp_size = (int )rn;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(uc);
}
}
